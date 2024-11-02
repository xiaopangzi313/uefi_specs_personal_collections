;------------------------------------------------------------------------------ ;
; Copyright (c) 2015 - 2023, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   MpFuncs.nasm
;
; Abstract:
;
;   This is the assembly code for MP support
;
;-------------------------------------------------------------------------------

;------------------------------------------------------------------------------ ;
; Copyright (c) 2015 - 2023, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   MpEqu.inc
;
; Abstract:
;
;   This is the equates file for Multiple Processor support
;
;-------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;
; Copyright (c) 2019 - 2022, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Abstract:
;
;   This file provides macro definitions for NASM files.
;
;------------------------------------------------------------------------------

;
; Macro for the PVALIDATE instruction, defined in AMD APM volume 3.
; NASM feature request URL: https://bugzilla.nasm.us/show_bug.cgi?id=3392753
;
%macro PVALIDATE       0
    DB 0xF2, 0x0F, 0x01, 0xFF
%endmacro

;
; Macro for the RMPADJUST instruction, defined in AMD APM volume 3.
; NASM feature request URL: https://bugzilla.nasm.us/show_bug.cgi?id=3392754
;
%macro RMPADJUST       0
    DB 0xF3, 0x0F, 0x01, 0xFE
%endmacro

; NASM provides built-in macros STRUC and ENDSTRUC for structure definition.
; For example, to define a structure called mytype containing a longword,
; a word, a byte and a string of bytes, you might code
;
; struc   mytype
;
;  mt_long:      resd    1
;  mt_word:      resw    1
;  mt_byte:      resb    1
;  mt_str:       resb    32
;
; endstruc
;
; Below macros are help to map the C types and the RESB family of pseudo-instructions.
; So that the above structure definition can be coded as
;
; struc   mytype
;
;  mt_long:      CTYPE_UINT32    1
;  mt_word:      CTYPE_UINT16    1
;  mt_byte:      CTYPE_UINT8     1
;  mt_str:       CTYPE_CHAR8     32
;
; endstruc
%define CTYPE_UINT64    resq
%define CTYPE_INT64     resq
%define CTYPE_UINT32    resd
%define CTYPE_INT32     resd
%define CTYPE_UINT16    resw
%define CTYPE_INT16     resw
%define CTYPE_BOOLEAN   resb
%define CTYPE_UINT8     resb
%define CTYPE_CHAR8     resb
%define CTYPE_INT8      resb

%define CTYPE_UINTN     resq
%define CTYPE_INTN      resq


CPU_SWITCH_STATE_IDLE         equ        0
CPU_SWITCH_STATE_STORED       equ        1
CPU_SWITCH_STATE_LOADED       equ        2

;
; Equivalent NASM structure of MP_ASSEMBLY_ADDRESS_MAP
;
struc MP_ASSEMBLY_ADDRESS_MAP
  .RendezvousFunnelAddress            CTYPE_UINTN 1
  .ModeEntryOffset                    CTYPE_UINTN 1
  .RendezvousFunnelSize               CTYPE_UINTN 1
  .RelocateApLoopFuncAddressGeneric   CTYPE_UINTN 1
  .RelocateApLoopFuncSizeGeneric      CTYPE_UINTN 1
  .RelocateApLoopFuncAddressAmdSev    CTYPE_UINTN 1
  .RelocateApLoopFuncSizeAmdSev       CTYPE_UINTN 1
  .ModeTransitionOffset               CTYPE_UINTN 1
  .SwitchToRealNoNxOffset             CTYPE_UINTN 1
  .SwitchToRealPM16ModeOffset         CTYPE_UINTN 1
  .SwitchToRealPM16ModeSize           CTYPE_UINTN 1
endstruc

;
; Equivalent NASM structure of IA32_DESCRIPTOR
;
struc IA32_DESCRIPTOR
  .Limit                         CTYPE_UINT16 1
  .Base                          CTYPE_UINTN  1
endstruc

;
; Equivalent NASM structure of CPU_EXCHANGE_ROLE_INFO
;
struc CPU_EXCHANGE_ROLE_INFO
  ; State is defined as UINT8 in C header file
  ; Define it as UINTN here to guarantee the fields that follow State
  ; is naturally aligned. The structure layout doesn't change.
  .State                         CTYPE_UINTN 1
  .StackPointer                  CTYPE_UINTN 1
  .Gdtr                          CTYPE_UINT8 IA32_DESCRIPTOR_size
  .Idtr                          CTYPE_UINT8 IA32_DESCRIPTOR_size
endstruc

;
; Equivalent NASM structure of CPU_INFO_IN_HOB
;
struc CPU_INFO_IN_HOB
  .InitialApicId                 CTYPE_UINT32 1
  .ApicId                        CTYPE_UINT32 1
  .Health                        CTYPE_UINT32 1
  .ApTopOfStack                  CTYPE_UINT64 1
endstruc

;
; Equivalent NASM structure of MP_CPU_EXCHANGE_INFO
; Assembly routines should refrain from directly interacting with
; the internal details of CPU_MP_DATA.
;
struc MP_CPU_EXCHANGE_INFO
  .StackStart:                   CTYPE_UINTN 1
  .StackSize:                    CTYPE_UINTN 1
  .CFunction:                    CTYPE_UINTN 1
  .GdtrProfile:                  CTYPE_UINT8 IA32_DESCRIPTOR_size
  .IdtrProfile:                  CTYPE_UINT8 IA32_DESCRIPTOR_size
  .BufferStart:                  CTYPE_UINTN 1
  .ModeOffset:                   CTYPE_UINTN 1
  .ApIndex:                      CTYPE_UINTN 1
  .CodeSegment:                  CTYPE_UINTN 1
  .DataSegment:                  CTYPE_UINTN 1
  .EnableExecuteDisable:         CTYPE_UINTN 1
  .Cr3:                          CTYPE_UINTN 1
  .InitFlag:                     CTYPE_UINTN 1
  .CpuInfo:                      CTYPE_UINTN 1
  .NumApsExecuting:              CTYPE_UINTN 1
  .CpuMpData:                    CTYPE_UINTN 1
  .InitializeFloatingPointUnits: CTYPE_UINTN 1
  .ModeTransitionMemory:         CTYPE_UINT32 1
  .ModeTransitionSegment:        CTYPE_UINT16 1
  .ModeHighMemory:               CTYPE_UINT32 1
  .ModeHighSegment:              CTYPE_UINT16 1
  .Enable5LevelPaging:           CTYPE_BOOLEAN 1
  .SevEsIsEnabled:               CTYPE_BOOLEAN 1
  .SevSnpIsEnabled               CTYPE_BOOLEAN 1
  .GhcbBase:                     CTYPE_UINTN 1
  .ExtTopoAvail:                 CTYPE_BOOLEAN 1
endstruc

MP_CPU_EXCHANGE_INFO_OFFSET equ (Flat32Start - RendezvousFunnelProcStart)
%define MP_CPU_EXCHANGE_INFO_FIELD(Field) (MP_CPU_EXCHANGE_INFO_OFFSET + MP_CPU_EXCHANGE_INFO. %+ Field)

extern ASM_PFX(InitializeFloatingPointUnits)

%macro  OneTimeCall 1
    jmp     %1
%1 %+ OneTimerCallReturn:
%endmacro

%macro  OneTimeCallRet 1
    jmp     %1 %+ OneTimerCallReturn
%endmacro

DEFAULT REL

SECTION .text

;-------------------------------------------------------------------------------------
;RendezvousFunnelProc  procedure follows. All APs execute their procedure. This
;procedure serializes all the AP processors through an Init sequence. It must be
;noted that APs arrive here very raw...ie: real mode, no stack.
;ALSO THIS PROCEDURE IS EXECUTED BY APs ONLY ON 16 BIT MODE. HENCE THIS PROC
;IS IN MACHINE CODE.
;-------------------------------------------------------------------------------------
RendezvousFunnelProcStart:
; At this point CS = 0x(vv00) and ip= 0x0.
; Save BIST information to ebp firstly

BITS 16
    mov        ebp, eax                        ; Save BIST information

    mov        ax, cs
    mov        ds, ax
    mov        es, ax
    mov        ss, ax
    xor        ax, ax
    mov        fs, ax
    mov        gs, ax

    mov        si,  MP_CPU_EXCHANGE_INFO_FIELD (BufferStart)
    mov        ebx, [si]

    mov        si,  MP_CPU_EXCHANGE_INFO_FIELD (DataSegment)
    mov        edx, [si]

    ;
    ; Get start address of 32-bit code in low memory (<1MB)
    ;
    mov        edi, MP_CPU_EXCHANGE_INFO_FIELD (ModeTransitionMemory)

    mov        si, MP_CPU_EXCHANGE_INFO_FIELD (GdtrProfile)
o32 lgdt       [cs:si]

    ;
    ; Switch to protected mode
    ;
    mov        eax, cr0                    ; Get control register 0
    or         eax, 000000003h             ; Set PE bit (bit #0) & MP
    mov        cr0, eax

    ; Switch to 32-bit code (>1MB)
o32 jmp far    [cs:di]

;
; Following code must be copied to memory with type of EfiBootServicesCode.
; This is required if NX is enabled for EfiBootServicesCode of memory.
;
BITS 32
Flat32Start:                                   ; protected mode entry point
    mov        ds, dx
    mov        es, dx
    mov        fs, dx
    mov        gs, dx
    mov        ss, dx

    ;
    ; Enable execute disable bit
    ;
    mov        esi, MP_CPU_EXCHANGE_INFO_FIELD (EnableExecuteDisable)
    cmp        byte [ebx + esi], 0
    jz         SkipEnableExecuteDisableBit

    mov        ecx, 0c0000080h             ; EFER MSR number
    rdmsr                                  ; Read EFER
    bts        eax, 11                     ; Enable Execute Disable Bit
    wrmsr                                  ; Write EFER

SkipEnableExecuteDisableBit:
    ;
    ; Enable PAE
    ;
    mov        eax, cr4
    bts        eax, 5

    mov        esi, MP_CPU_EXCHANGE_INFO_FIELD (Enable5LevelPaging)
    cmp        byte [ebx + esi], 0
    jz         SkipEnable5LevelPaging

    ;
    ; Enable 5 Level Paging
    ;
    bts        eax, 12                     ; Set LA57=1.

SkipEnable5LevelPaging:

    mov        cr4, eax

    ;
    ; Load page table
    ;
    mov        esi, MP_CPU_EXCHANGE_INFO_FIELD (Cr3)             ; Save CR3 in ecx
    mov        ecx, [ebx + esi]
    mov        cr3, ecx                    ; Load CR3

    ;
    ; Enable long mode
    ;
    mov        ecx, 0c0000080h             ; EFER MSR number
    rdmsr                                  ; Read EFER
    bts        eax, 8                      ; Set LME=1
    wrmsr                                  ; Write EFER

    ;
    ; Enable paging
    ;
    mov        eax, cr0                    ; Read CR0
    bts        eax, 31                     ; Set PG=1
    mov        cr0, eax                    ; Write CR0

    ;
    ; Far jump to 64-bit code
    ;
    mov        edi, MP_CPU_EXCHANGE_INFO_FIELD (ModeHighMemory)
    add        edi, ebx
    jmp far    [edi]

BITS 64

LongModeStart:
    mov        esi, ebx

    ; Set IDT table at the start of 64 bit code
    lea        edi, [esi + MP_CPU_EXCHANGE_INFO_FIELD (IdtrProfile)]
    lidt       [edi]

    lea        edi, [esi + MP_CPU_EXCHANGE_INFO_FIELD (InitFlag)]
    cmp        qword [edi], 1       ; ApInitConfig
    jnz        GetApicId

    ; Increment the number of APs executing here as early as possible
    ; This is decremented in C code when AP is finished executing
    mov        edi, esi
    add        edi, MP_CPU_EXCHANGE_INFO_FIELD (NumApsExecuting)
    lock inc   dword [edi]

    ; AP init
    mov        edi, esi
    add        edi, MP_CPU_EXCHANGE_INFO_FIELD (ApIndex)
    mov        ebx, 1
    lock xadd  dword [edi], ebx                 ; EBX = ApIndex++
    inc        ebx                              ; EBX is CpuNumber

    ; program stack
    mov        edi, esi
    add        edi, MP_CPU_EXCHANGE_INFO_FIELD (StackSize)
    mov        eax, dword [edi]
    mov        ecx, ebx
    inc        ecx
    mul        ecx                               ; EAX = StackSize * (CpuNumber + 1)
    mov        edi, esi
    add        edi, MP_CPU_EXCHANGE_INFO_FIELD (StackStart)
    add        rax, qword [edi]
    mov        rsp, rax

    ;
    ;  Setup the GHCB when AMD SEV-ES active.
    ;
    OneTimeCall SevEsSetupGhcb
    jmp        CProcedureInvoke

GetApicId:
    ;
    ; Use the GHCB protocol to get the ApicId when SEV-ES is active.
    ;
    OneTimeCall SevEsGetApicId

DoCpuid:
    mov        eax, 0
    cpuid
    cmp        eax, 0bh
    jb         NoX2Apic             ; CPUID level below CPUID_EXTENDED_TOPOLOGY

    mov        eax, 0bh
    xor        ecx, ecx
    cpuid
    test       ebx, 0ffffh
    jz         NoX2Apic             ; CPUID.0BH:EBX[15:0] is zero

    ; Processor is x2APIC capable; 32-bit x2APIC ID is already in EDX
    jmp        GetProcessorNumber

NoX2Apic:
    ; Processor is not x2APIC capable, so get 8-bit APIC ID
    mov        eax, 1
    cpuid
    shr        ebx, 24
    mov        edx, ebx

GetProcessorNumber:
    ;
    ; Get processor number for this AP
    ; Note that BSP may become an AP due to SwitchBsp()
    ;
    xor         ebx, ebx
    lea         eax, [esi + MP_CPU_EXCHANGE_INFO_FIELD (CpuInfo)]
    mov         rdi, [eax]

GetNextProcNumber:
    cmp         dword [rdi + CPU_INFO_IN_HOB.InitialApicId], edx                      ; APIC ID match?
    jz          ProgramStack
    add         rdi, CPU_INFO_IN_HOB_size
    inc         ebx
    jmp         GetNextProcNumber

ProgramStack:
    mov         rsp, qword [rdi + CPU_INFO_IN_HOB.ApTopOfStack]

CProcedureInvoke:
    ;
    ; Reserve 8 bytes for CpuMpData.
    ; When the AP wakes up again via INIT-SIPI-SIPI, push 0 will cause the existing CpuMpData to be overwritten with 0.
    ; CpuMpData is filled in via InitializeApData() during the first time INIT-SIPI-SIPI,
    ; while overwirrten may occurs when under ApInHltLoop but InitFlag is not set to ApInitConfig.
    ; Therefore reservation is implemented by sub rsp instead of push 0.
    ;
    sub        rsp, 8
    push       rbp               ; Push BIST data at top of AP stack
    xor        rbp, rbp          ; Clear ebp for call stack trace
    push       rbp
    mov        rbp, rsp

    push       qword 0          ; Push 8 bytes for alignment
    mov        rax, qword [esi + MP_CPU_EXCHANGE_INFO_FIELD (InitializeFloatingPointUnits)]
    sub        rsp, 20h
    call       rax               ; Call assembly function to initialize FPU per UEFI spec
    add        rsp, 20h

    mov        edx, ebx          ; edx is ApIndex
    mov        rcx, qword [esi + MP_CPU_EXCHANGE_INFO_FIELD (CpuMpData)]

    mov        edi, esi
    add        edi, MP_CPU_EXCHANGE_INFO_FIELD (CFunction)
    mov        rax, qword [edi]

    sub        rsp, 20h
    call       rax               ; Invoke C function
    add        rsp, 20h
    jmp        $                 ; Should never reach here

;
; Required for the AMD SEV helper functions
;
;------------------------------------------------------------------------------ ;
; Copyright (c) 2021, AMD Inc. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
; Module Name:
;
;   AmdSev.nasm
;
; Abstract:
;
;   This provides helper used by the MpFunc.nasm. If AMD SEV-ES is active
;   then helpers perform the additional setups (such as GHCB).
;
;-------------------------------------------------------------------------------

%define SIZE_4KB    0x1000

RegisterGhcbGpa:
    ;
    ; Register GHCB GPA when SEV-SNP is enabled
    ;
    lea        edi, [esi + MP_CPU_EXCHANGE_INFO_FIELD (SevSnpIsEnabled)]
    cmp        byte [edi], 1        ; SevSnpIsEnabled
    jne        RegisterGhcbGpaDone

    ; Save the rdi and rsi to used for later comparison
    push       rdi
    push       rsi
    mov        edi, eax
    mov        esi, edx
    or         eax, 18              ; Ghcb registration request
    wrmsr
    rep vmmcall
    rdmsr
    mov        r12, rax
    and        r12, 0fffh
    cmp        r12, 19              ; Ghcb registration response
    jne        GhcbGpaRegisterFailure

    ; Verify that GPA is not changed
    and        eax, 0fffff000h
    cmp        edi, eax
    jne        GhcbGpaRegisterFailure
    cmp        esi, edx
    jne        GhcbGpaRegisterFailure
    pop        rsi
    pop        rdi
    jmp        RegisterGhcbGpaDone

    ;
    ; Request the guest termination
    ;
GhcbGpaRegisterFailure:
    xor        edx, edx
    mov        eax, 256             ; GHCB terminate
    wrmsr
    rep vmmcall

    ; We should not return from the above terminate request, but if we do
    ; then enter into the hlt loop.
DoHltLoop:
    cli
    hlt
    jmp        DoHltLoop

RegisterGhcbGpaDone:
    OneTimeCallRet    RegisterGhcbGpa

;
; The function checks whether SEV-ES is enabled, if enabled
; then setup the GHCB page.
;
SevEsSetupGhcb:
    lea        edi, [esi + MP_CPU_EXCHANGE_INFO_FIELD (SevEsIsEnabled)]
    cmp        byte [edi], 1        ; SevEsIsEnabled
    jne        SevEsSetupGhcbExit

    ;
    ; program GHCB
    ;   Each page after the GHCB is a per-CPU page, so the calculation programs
    ;   a GHCB to be every 8KB.
    ;
    mov        eax, SIZE_4KB
    shl        eax, 1                            ; EAX = SIZE_4K * 2
    mov        ecx, ebx
    mul        ecx                               ; EAX = SIZE_4K * 2 * CpuNumber
    mov        edi, esi
    add        edi, MP_CPU_EXCHANGE_INFO_FIELD (GhcbBase)
    add        rax, qword [edi]
    mov        rdx, rax
    shr        rdx, 32
    mov        rcx, 0xc0010130

    OneTimeCall RegisterGhcbGpa

    wrmsr

SevEsSetupGhcbExit:
    OneTimeCallRet    SevEsSetupGhcb

;
; The function checks whether SEV-ES is enabled, if enabled, use
; the GHCB
;
SevEsGetApicId:
    lea        edi, [esi + MP_CPU_EXCHANGE_INFO_FIELD (SevEsIsEnabled)]
    cmp        byte [edi], 1        ; SevEsIsEnabled
    jne        SevEsGetApicIdExit

    ;
    ; Since we don't have a stack yet, we can't take a #VC
    ; exception. Use the GHCB protocol to perform the CPUID
    ; calls.
    ;
    mov        rcx, 0xc0010130
    rdmsr
    shl        rdx, 32
    or         rax, rdx
    mov        rdi, rax             ; RDI now holds the original GHCB GPA

    ;
    ; For SEV-SNP, the recommended handling for getting the x2APIC ID
    ; would be to use the SNP CPUID table to fetch CPUID.00H:EAX and
    ; CPUID:0BH:EBX[15:0] instead of the GHCB MSR protocol vmgexits
    ; below.
    ;
    ; To avoid the unecessary ugliness to accomplish that here, the BSP
    ; has performed these checks in advance (where #VC handler handles
    ; the CPUID table lookups automatically) and cached them in a flag
    ; so those checks can be skipped here.
    ;
    mov        eax, [esi + MP_CPU_EXCHANGE_INFO_FIELD (SevSnpIsEnabled)]
    cmp        al, 1
    jne        CheckExtTopoAvail

    ;
    ; Even with SEV-SNP, the actual x2APIC ID in CPUID.0BH:EDX
    ; fetched from the hypervisor the same way SEV-ES does it.
    ;
    mov        eax, [esi + MP_CPU_EXCHANGE_INFO_FIELD (ExtTopoAvail)]
    cmp        al, 1
    je         GetApicIdSevEs
    ; The 8-bit APIC ID fallback is also the same as with SEV-ES
    jmp        NoX2ApicSevEs

CheckExtTopoAvail:
    mov        rdx, 0               ; CPUID function 0
    mov        rax, 0               ; RAX register requested
    or         rax, 4
    wrmsr
    rep vmmcall
    rdmsr
    cmp        edx, 0bh
    jb         NoX2ApicSevEs        ; CPUID level below CPUID_EXTENDED_TOPOLOGY

    mov        rdx, 0bh             ; CPUID function 0x0b
    mov        rax, 040000000h      ; RBX register requested
    or         rax, 4
    wrmsr
    rep vmmcall
    rdmsr
    test       edx, 0ffffh
    jz         NoX2ApicSevEs        ; CPUID.0BH:EBX[15:0] is zero

GetApicIdSevEs:
    mov        rdx, 0bh             ; CPUID function 0x0b
    mov        rax, 0c0000000h      ; RDX register requested
    or         rax, 4
    wrmsr
    rep vmmcall
    rdmsr

    ; Processor is x2APIC capable; 32-bit x2APIC ID is now in EDX
    jmp        RestoreGhcb

NoX2ApicSevEs:
    ; Processor is not x2APIC capable, so get 8-bit APIC ID
    mov        rdx, 1               ; CPUID function 1
    mov        rax, 040000000h      ; RBX register requested
    or         rax, 4
    wrmsr
    rep vmmcall
    rdmsr
    shr        edx, 24

RestoreGhcb:
    mov        rbx, rdx             ; Save x2APIC/APIC ID

    mov        rdx, rdi             ; RDI holds the saved GHCB GPA
    shr        rdx, 32
    mov        eax, edi
    wrmsr

    mov        rdx, rbx

    ; x2APIC ID or APIC ID is in EDX
    jmp        GetProcessorNumber

SevEsGetApicIdExit:
    OneTimeCallRet    SevEsGetApicId


;-------------------------------------------------------------------------------------
;SwitchToRealProc procedure follows.
;ALSO THIS PROCEDURE IS EXECUTED BY APs TRANSITIONING TO 16 BIT MODE. HENCE THIS PROC
;IS IN MACHINE CODE.
;  SwitchToRealProc (UINTN BufferStart, UINT16 Code16, UINT16 Code32, UINTN StackStart)
;  rcx - Buffer Start
;  rdx - Code16 Selector Offset
;  r8  - Code32 Selector Offset
;  r9  - Stack Start
;-------------------------------------------------------------------------------------
SwitchToRealProcStart:
BITS 64
    cli

    ;
    ; Get RDX reset value before changing stacks since the
    ; new stack won't be able to accomodate a #VC exception.
    ;
    push       rax
    push       rbx
    push       rcx
    push       rdx

    mov        rax, 1
    cpuid
    mov        rsi, rax                    ; Save off the reset value for RDX

    pop        rdx
    pop        rcx
    pop        rbx
    pop        rax

    ;
    ; Establish stack below 1MB
    ;
    mov        rsp, r9

    ;
    ; Push ultimate Reset Vector onto the stack
    ;
    mov        rax, rcx
    shr        rax, 4
    push       word 0x0002                 ; RFLAGS
    push       ax                          ; CS
    push       word 0x0000                 ; RIP
    push       word 0x0000                 ; For alignment, will be discarded

    ;
    ; Get address of "16-bit operand size" label
    ;
    lea        rbx, [PM16Mode]

    ;
    ; Push addresses used to change to compatibility mode
    ;
    lea        rax, [CompatMode]
    push       r8
    push       rax

    ;
    ; Clear R8 - R15, for reset, before going into 32-bit mode
    ;
    xor        r8, r8
    xor        r9, r9
    xor        r10, r10
    xor        r11, r11
    xor        r12, r12
    xor        r13, r13
    xor        r14, r14
    xor        r15, r15

    ;
    ; Far return into 32-bit mode
    ;
    retfq

BITS 32
CompatMode:
    ;
    ; Set up stack to prepare for exiting protected mode
    ;
    push       edx                         ; Code16 CS
    push       ebx                         ; PM16Mode label address

    ;
    ; Disable paging
    ;
    mov        eax, cr0                    ; Read CR0
    btr        eax, 31                     ; Set PG=0
    mov        cr0, eax                    ; Write CR0

    ;
    ; Disable long mode
    ;
    mov        ecx, 0c0000080h             ; EFER MSR number
    rdmsr                                  ; Read EFER
    btr        eax, 8                      ; Set LME=0
    wrmsr                                  ; Write EFER

    ;
    ; Disable PAE
    ;
    mov        eax, cr4                    ; Read CR4
    btr        eax, 5                      ; Set PAE=0
    mov        cr4, eax                    ; Write CR4

    mov        edx, esi                    ; Restore RDX reset value

    ;
    ; Switch to 16-bit operand size
    ;
    retf

BITS 16
    ;
    ; At entry to this label
    ;   - RDX will have its reset value
    ;   - On the top of the stack
    ;     - Alignment data (two bytes) to be discarded
    ;     - IP for Real Mode (two bytes)
    ;     - CS for Real Mode (two bytes)
    ;
    ; This label is also used with AsmRelocateApLoop. During MP finalization,
    ; the code from PM16Mode to SwitchToRealProcEnd is copied to the start of
    ; the WakeupBuffer, allowing a parked AP to be booted by an OS.
    ;
PM16Mode:
    mov        eax, cr0                    ; Read CR0
    btr        eax, 0                      ; Set PE=0
    mov        cr0, eax                    ; Write CR0

    pop        ax                          ; Discard alignment data

    ;
    ; Clear registers (except RDX and RSP) before going into 16-bit mode
    ;
    xor        eax, eax
    xor        ebx, ebx
    xor        ecx, ecx
    xor        esi, esi
    xor        edi, edi
    xor        ebp, ebp

    iret

SwitchToRealProcEnd:

;-------------------------------------------------------------------------------------
;  AsmRelocateApLoopAmdSev (MwaitSupport, ApTargetCState, PmCodeSegment, TopOfApStack, CountTofinish, Pm16CodeSegment, SevEsAPJumpTable, WakeupBuffer);
;-------------------------------------------------------------------------------------

AsmRelocateApLoopAmdSevStart:
BITS 64
    cmp        qword [rsp + 56], 0  ; SevEsAPJumpTable
    je         NoSevEsAmdSev

    ;
    ; Perform some SEV-ES related setup before leaving 64-bit mode
    ;
    push       rcx
    push       rdx

    ;
    ; Get the RDX reset value using CPUID
    ;
    mov        rax, 1
    cpuid
    mov        rsi, rax          ; Save off the reset value for RDX

    ;
    ; Prepare the GHCB for the AP_HLT_LOOP VMGEXIT call
    ;   - Must be done while in 64-bit long mode so that writes to
    ;     the GHCB memory will be unencrypted.
    ;   - No NAE events can be generated once this is set otherwise
    ;     the AP_RESET_HOLD SW_EXITCODE will be overwritten.
    ;
    mov        rcx, 0xc0010130
    rdmsr                        ; Retrieve current GHCB address
    shl        rdx, 32
    or         rdx, rax

    mov        rdi, rdx
    xor        rax, rax
    mov        rcx, 0x800
    shr        rcx, 3
    rep stosq                    ; Clear the GHCB

    mov        rax, 0x80000004   ; VMGEXIT AP_RESET_HOLD
    mov        [rdx + 0x390], rax
    mov        rax, 114          ; Set SwExitCode valid bit
    bts        [rdx + 0x3f0], rax
    inc        rax               ; Set SwExitInfo1 valid bit
    bts        [rdx + 0x3f0], rax
    inc        rax               ; Set SwExitInfo2 valid bit
    bts        [rdx + 0x3f0], rax

    pop        rdx
    pop        rcx

NoSevEsAmdSev:
    cli                          ; Disable interrupt before switching to 32-bit mode
    mov        rax, [rsp + 40]   ; CountTofinish
    lock dec   dword [rax]       ; (*CountTofinish)--

    mov        r10, [rsp + 48]   ; Pm16CodeSegment
    mov        rax, [rsp + 56]   ; SevEsAPJumpTable
    mov        rbx, [rsp + 64]   ; WakeupBuffer
    mov        rsp, r9           ; TopOfApStack

    push       rax               ; Save SevEsAPJumpTable
    push       rbx               ; Save WakeupBuffer
    push       r10               ; Save Pm16CodeSegment
    push       rcx               ; Save MwaitSupport
    push       rdx               ; Save ApTargetCState

    lea        rax, [PmEntryAmdSev]    ; rax <- The start address of transition code

    push       r8
    push       rax

    ;
    ; Clear R8 - R15, for reset, before going into 32-bit mode
    ;
    xor        r8, r8
    xor        r9, r9
    xor        r10, r10
    xor        r11, r11
    xor        r12, r12
    xor        r13, r13
    xor        r14, r14
    xor        r15, r15

    ;
    ; Far return into 32-bit mode
    ;
o64 retf

BITS 32
PmEntryAmdSev:
    mov        eax, cr0
    btr        eax, 31           ; Clear CR0.PG
    mov        cr0, eax          ; Disable paging and caches

    mov        ecx, 0xc0000080
    rdmsr
    and        ah, ~ 1           ; Clear LME
    wrmsr
    mov        eax, cr4
    and        al, ~ (1 << 5)    ; Clear PAE
    mov        cr4, eax

    pop        edx
    add        esp, 4
    pop        ecx,
    add        esp, 4

MwaitCheckAmdSev:
    cmp        cl, 1              ; Check mwait-monitor support
    jnz        HltLoopAmdSev
    mov        ebx, edx           ; Save C-State to ebx
MwaitLoopAmdSev:
    cli
    mov        eax, esp           ; Set Monitor Address
    xor        ecx, ecx           ; ecx = 0
    xor        edx, edx           ; edx = 0
    monitor
    mov        eax, ebx           ; Mwait Cx, Target C-State per eax[7:4]
    shl        eax, 4
    mwait
    jmp        MwaitLoopAmdSev

HltLoopAmdSev:
    pop        edx                ; PM16CodeSegment
    add        esp, 4
    pop        ebx                ; WakeupBuffer
    add        esp, 4
    pop        eax                ; SevEsAPJumpTable
    add        esp, 4
    cmp        eax, 0             ; Check for SEV-ES
    je         DoHltAmdSev

    cli
    ;
    ; SEV-ES is enabled, use VMGEXIT (GHCB information already
    ; set by caller)
    ;
BITS 64
    rep        vmmcall
BITS 32

    ;
    ; Back from VMGEXIT AP_HLT_LOOP
    ;   Push the FLAGS/CS/IP values to use
    ;
    push       word 0x0002        ; EFLAGS
    xor        ecx, ecx
    mov        cx, [eax + 2]      ; CS
    push       cx
    mov        cx, [eax]          ; IP
    push       cx
    push       word 0x0000        ; For alignment, will be discarded

    push       edx
    push       ebx

    mov        edx, esi           ; Restore RDX reset value

    retf

DoHltAmdSev:
    cli
    hlt
    jmp        DoHltAmdSev

BITS 64
AsmRelocateApLoopAmdSevEnd:


RendezvousFunnelProcEnd:

;-------------------------------------------------------------------------------------
;  AsmRelocateApLoop (MwaitSupport, ApTargetCState, TopOfApStack, CountTofinish, Cr3);
;  This function is called during the finalizaiton of Mp initialization before booting
;  to OS, and aim to put Aps either in Mwait or HLT.
;-------------------------------------------------------------------------------------
; +----------------+
; | Cr3            |  rsp+40
; +----------------+
; | CountTofinish  |  r9
; +----------------+
; | TopOfApStack   |  r8
; +----------------+
; | ApTargetCState |  rdx
; +----------------+
; | MwaitSupport   |  rcx
; +----------------+
; | the return     |
; +----------------+ low address

AsmRelocateApLoopGenericStart:
    mov        rax, r9           ; CountTofinish
    lock dec   dword [rax]       ; (*CountTofinish)--

    mov        rax, [rsp + 40]    ; Cr3
    ; Do not push on old stack, since old stack is not mapped
    ; in the page table pointed by cr3
    mov        cr3, rax
    mov        rsp, r8            ; TopOfApStack

MwaitCheckGeneric:
    cmp        cl, 1              ; Check mwait-monitor support
    jnz        HltLoopGeneric
    mov        rbx, rdx           ; Save C-State to ebx

MwaitLoopGeneric:
    cli
    mov        rax, rsp           ; Set Monitor Address
    sub        eax, 8             ; To ensure the monitor address is in the page table
    xor        ecx, ecx           ; ecx = 0
    xor        edx, edx           ; edx = 0
    monitor
    mov        rax, rbx           ; Mwait Cx, Target C-State per eax[7:4]
    shl        eax, 4
    mwait
    jmp        MwaitLoopGeneric

HltLoopGeneric:
    cli
    hlt
    jmp        HltLoopGeneric

AsmRelocateApLoopGenericEnd:

;-------------------------------------------------------------------------------------
;  AsmGetAddressMap (&AddressMap);
;-------------------------------------------------------------------------------------
global ASM_PFX(AsmGetAddressMap)
ASM_PFX(AsmGetAddressMap):
    lea        rax, [RendezvousFunnelProcStart]
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.RendezvousFunnelAddress], rax
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.ModeEntryOffset], LongModeStart - RendezvousFunnelProcStart
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.RendezvousFunnelSize], RendezvousFunnelProcEnd - RendezvousFunnelProcStart
lea        rax, [AsmRelocateApLoopGenericStart]
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.RelocateApLoopFuncAddressGeneric], rax
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.RelocateApLoopFuncSizeGeneric], AsmRelocateApLoopGenericEnd - AsmRelocateApLoopGenericStart
    lea        rax, [AsmRelocateApLoopAmdSevStart]
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.RelocateApLoopFuncAddressAmdSev], rax
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.RelocateApLoopFuncSizeAmdSev], AsmRelocateApLoopAmdSevEnd - AsmRelocateApLoopAmdSevStart
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.ModeTransitionOffset], Flat32Start - RendezvousFunnelProcStart
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.SwitchToRealNoNxOffset], SwitchToRealProcStart - Flat32Start
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.SwitchToRealPM16ModeOffset], PM16Mode - RendezvousFunnelProcStart
    mov        qword [rcx + MP_ASSEMBLY_ADDRESS_MAP.SwitchToRealPM16ModeSize], SwitchToRealProcEnd - PM16Mode
    ret

;-------------------------------------------------------------------------------------
;AsmExchangeRole procedure follows. This procedure executed by current BSP, that is
;about to become an AP. It switches its stack with the current AP.
;AsmExchangeRole (IN   CPU_EXCHANGE_INFO    *MyInfo, IN   CPU_EXCHANGE_INFO    *OthersInfo);
;-------------------------------------------------------------------------------------
global ASM_PFX(AsmExchangeRole)
ASM_PFX(AsmExchangeRole):
    ; DO NOT call other functions in this function, since 2 CPU may use 1 stack
    ; at the same time. If 1 CPU try to call a function, stack will be corrupted.

    push       rax
    push       rbx
    push       rcx
    push       rdx
    push       rsi
    push       rdi
    push       rbp
    push       r8
    push       r9
    push       r10
    push       r11
    push       r12
    push       r13
    push       r14
    push       r15

    ; rsi contains MyInfo pointer
    mov        rsi, rcx

    ; rdi contains OthersInfo pointer
    mov        rdi, rdx

    pushfq

    ; Store the its StackPointer
    mov        [rsi + CPU_EXCHANGE_ROLE_INFO.StackPointer], rsp

    ; update its switch state to STORED
    mov        byte [rsi + CPU_EXCHANGE_ROLE_INFO.State], CPU_SWITCH_STATE_STORED

WaitForOtherStored:
    ; wait until the other CPU finish storing its state
    cmp        byte [rdi + CPU_EXCHANGE_ROLE_INFO.State], CPU_SWITCH_STATE_STORED
    jz         OtherStored
    pause
    jmp        WaitForOtherStored

OtherStored:

    ; load its future StackPointer
    mov        rsp, [rdi + CPU_EXCHANGE_ROLE_INFO.StackPointer]

    ; update the other CPU's switch state to LOADED
    mov        byte [rdi + CPU_EXCHANGE_ROLE_INFO.State], CPU_SWITCH_STATE_LOADED

WaitForOtherLoaded:
    ; wait until the other CPU finish loading new state,
    ; otherwise the data in stack may corrupt
    cmp        byte [rsi + CPU_EXCHANGE_ROLE_INFO.State], CPU_SWITCH_STATE_LOADED
    jz         OtherLoaded
    pause
    jmp        WaitForOtherLoaded

OtherLoaded:
    ; since the other CPU already get the data it want, leave this procedure
    popfq

    pop        r15
    pop        r14
    pop        r13
    pop        r12
    pop        r11
    pop        r10
    pop        r9
    pop        r8
    pop        rbp
    pop        rdi
    pop        rsi
    pop        rdx
    pop        rcx
    pop        rbx
    pop        rax

    ret
