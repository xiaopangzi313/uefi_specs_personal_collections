;------------------------------------------------------------------------------ ;
; Copyright (c) 2021, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   ApRunLoop.nasm
;
; Abstract:
;
;   This is the assembly code for run loop for APs in the guest TD
;
;-------------------------------------------------------------------------------

;------------------------------------------------------------------------------
; @file
; TDX Common defitions used by the APs in mailbox
;
; Copyright (c) 2021, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

CommandOffset                             equ       00h
ApicidOffset                              equ       04h
WakeupVectorOffset                        equ       08h
OSArgsOffset                              equ       10h
FirmwareArgsOffset                        equ       800h
WakeupArgsRelocatedMailBox                equ       800h
AcceptPageArgsPhysicalStart               equ       800h
AcceptPageArgsPhysicalEnd                 equ       808h
AcceptPageArgsTopStackAddress             equ       810h
AcceptPageArgsApStackSize                 equ       818h
CpuArrivalOffset                          equ       900h
CpusExitingOffset                         equ       0a00h
TalliesOffset                             equ       0a08h
ErrorsOffset                              equ       0e08h

SIZE_4KB                                  equ       1000h
SIZE_2MB                                  equ       200000h
SIZE_1GB                                  equ       40000000h

PAGE_ACCEPT_LEVEL_4K                      equ       0
PAGE_ACCEPT_LEVEL_2M                      equ       1
PAGE_ACCEPT_LEVEL_1G                      equ       2

TDX_PAGE_ALREADY_ACCEPTED                 equ       0x00000b0a
TDX_PAGE_SIZE_MISMATCH                    equ       0xc0000b0b

; Errors of APs in Mailbox
ERROR_NON                                 equ       0
ERROR_INVALID_ACCEPT_PAGE_SIZE            equ       1
ERROR_ACCEPT_PAGE_ERROR                   equ       2
ERROR_INVALID_FALLBACK_PAGE_LEVEL         equ       3

MpProtectedModeWakeupCommandNoop          equ       0
MpProtectedModeWakeupCommandWakeup        equ       1
MpProtectedModeWakeupCommandSleep         equ       2
MpProtectedModeWakeupCommandAcceptPages   equ       3

MailboxApicIdInvalid                      equ       0xffffffff
MailboxApicidBroadcast                    equ       0xfffffffe

%define TDCALL_TDINFO                          0x1
%define TDCALL_TDACCEPTPAGE                    0x6


DEFAULT REL

SECTION .text

BITS 64

%define TDVMCALL_EXPOSE_REGS_MASK       0xffcc
%define TDVMCALL                        0x0
%define EXIT_REASON_CPUID               0xa

%macro  tdcall  0
  db  0x66, 0x0f, 0x01, 0xcc
%endmacro

%macro tdcall_regs_preamble 2
    mov rax, %1

    xor rcx, rcx
    mov ecx, %2

    ; R10 = 0 (standard TDVMCALL)

    xor r10d, r10d

    ; Zero out unused (for standard TDVMCALL) registers to avoid leaking
    ; secrets to the VMM.

    xor esi, esi
    xor edi, edi

    xor edx, edx
    xor ebp, ebp
    xor r8d, r8d
    xor r9d, r9d
    xor r14, r14
    xor r15, r15
%endmacro

;
; Relocated Ap Mailbox loop
;
; @param[in]  RBX:  Relocated mailbox address
; @param[in]  RBP:  vCpuId
;
; @return     None  This routine does not return
;
global ASM_PFX(AsmRelocateApMailBoxLoop)
ASM_PFX(AsmRelocateApMailBoxLoop):
AsmRelocateApMailBoxLoopStart:

    mov         r11, EXIT_REASON_CPUID
    mov         r12, 0xb
    tdcall_regs_preamble TDVMCALL, TDVMCALL_EXPOSE_REGS_MASK
    tdcall
    test        r10, r10
    jnz         Panic
    mov         r8, r15

MailBoxLoop:
    ; Spin until command set
    cmp        dword [rbx + CommandOffset], MpProtectedModeWakeupCommandNoop
    je         MailBoxLoop
    ; Determine if this is a broadcast or directly for my apic-id, if not, ignore
    cmp        dword [rbx + ApicidOffset], MailboxApicidBroadcast
    je         MailBoxProcessCommand
    cmp        dword [rbx + ApicidOffset], r8d
    jne        MailBoxLoop
MailBoxProcessCommand:
    cmp        dword [rbx + CommandOffset], MpProtectedModeWakeupCommandWakeup
    je         MailBoxWakeUp
    cmp        dword [rbx + CommandOffset], MpProtectedModeWakeupCommandSleep
    je         MailBoxSleep
    ; Don't support this command, so ignore
    jmp        MailBoxLoop
MailBoxWakeUp:
    mov        rax, [rbx + WakeupVectorOffset]
    ; OS sends a wakeup command for a given APIC ID, firmware is supposed to reset
    ; the command field back to zero as acknowledgement.
    mov        qword [rbx + CommandOffset], 0
    jmp        rax
MailBoxSleep:
    jmp       $
Panic:
    ud2
BITS 64
AsmRelocateApMailBoxLoopEnd:

;-------------------------------------------------------------------------------------
;  AsmGetRelocationMap (&RelocationMap);
;-------------------------------------------------------------------------------------
global ASM_PFX(AsmGetRelocationMap)
ASM_PFX(AsmGetRelocationMap):
    lea        rax, [AsmRelocateApMailBoxLoopStart]
    mov        qword [rcx], rax
    mov        qword [rcx +  8h], AsmRelocateApMailBoxLoopEnd - AsmRelocateApMailBoxLoopStart
    ret

