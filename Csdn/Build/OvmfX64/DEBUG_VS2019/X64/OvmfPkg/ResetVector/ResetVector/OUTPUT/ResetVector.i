;------------------------------------------------------------------------------
; @file
; This file includes all other code files to assemble the reset vector code
;
; Copyright (c) 2008 - 2013, Intel Corporation. All rights reserved.<BR>
; Copyright (c) 2020 - 2024, Advanced Micro Devices, Inc. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

;
; If neither ARCH_IA32 nor ARCH_X64 are defined, then try to include
; Base.h to use the C pre-processor to determine the architecture.
;
%ifndef ARCH_IA32
  %ifndef ARCH_X64
    #include <Base.h>
    #if defined (MDE_CPU_IA32)
      %define ARCH_IA32
    #elif defined (MDE_CPU_X64)
      %define ARCH_X64
    #endif
  %endif
%endif

%ifdef ARCH_IA32
  %ifdef ARCH_X64
    %error "Only one of ARCH_IA32 or ARCH_X64 can be defined."
  %endif
%elifdef ARCH_X64
%else
  %error "Either ARCH_IA32 or ARCH_X64 must be defined."
%endif

;------------------------------------------------------------------------------
; @file
; Common macros used in the ResetVector VTF module.
;
; Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%define ADDR16_OF(x) (0x10000 - fourGigabytes + x)
%define ADDR_OF(x) (0x100000000 - fourGigabytes + x)

%macro  OneTimeCall 1
    jmp     %1
%1 %+ OneTimerCallReturn:
%endmacro

%macro  OneTimeCallRet 1
    jmp     %1 %+ OneTimerCallReturn
%endmacro

StartOfResetVectorCode:

%define ADDR_OF_START_OF_RESET_CODE ADDR_OF(StartOfResetVectorCode)



;------------------------------------------------------------------------------
; @file
; Definitions of POST CODES for the reset vector module
;
; Copyright (c) 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%define POSTCODE_16BIT_MODE     0x16
%define POSTCODE_32BIT_MODE     0x32
%define POSTCODE_64BIT_MODE     0x64

%define POSTCODE_BFV_NOT_FOUND  0xb0
%define POSTCODE_BFV_FOUND      0xb1

%define POSTCODE_SEC_NOT_FOUND  0xf0
%define POSTCODE_SEC_FOUND      0xf1



%ifdef DEBUG_PORT80
;------------------------------------------------------------------------------
; @file
; Port 0x80 debug support macros
;
; Copyright (c) 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    16

%macro  debugInitialize 0
    ;
    ; No initialization is required
    ;
%endmacro

%macro  debugShowPostCode 1
    mov     al, %1
    out     0x80, al
%endmacro


%elifdef DEBUG_SERIAL
;------------------------------------------------------------------------------
; @file
; Serial port debug support macros
;
; Copyright (c) 2008 - 2018, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

;//---------------------------------------------
;// UART Register Offsets
;//---------------------------------------------
%define BAUD_LOW_OFFSET         0x00
%define BAUD_HIGH_OFFSET        0x01
%define IER_OFFSET              0x01
%define LCR_SHADOW_OFFSET       0x01
%define FCR_SHADOW_OFFSET       0x02
%define IR_CONTROL_OFFSET       0x02
%define FCR_OFFSET              0x02
%define EIR_OFFSET              0x02
%define BSR_OFFSET              0x03
%define LCR_OFFSET              0x03
%define MCR_OFFSET              0x04
%define LSR_OFFSET              0x05
%define MSR_OFFSET              0x06

;//---------------------------------------------
;// UART Register Bit Defines
;//---------------------------------------------
%define LSR_TXRDY               0x20
%define LSR_RXDA                0x01
%define DLAB                    0x01

; UINT16  gComBase = 0x3f8;
; UINTN   gBps = 115200;
; UINT8   gData = 8;
; UINT8   gStop = 1;
; UINT8   gParity = 0;
; UINT8   gBreakSet = 0;

%define DEFAULT_COM_BASE 0x3f8
%define DEFAULT_BPS 115200
%define DEFAULT_DATA 8
%define DEFAULT_STOP 1
%define DEFAULT_PARITY 0
%define DEFAULT_BREAK_SET 0

%define SERIAL_DEFAULT_LCR ( \
     (DEFAULT_BREAK_SET << 6) | \
     (DEFAULT_PARITY << 3) | \
     (DEFAULT_STOP << 2) | \
     (DEFAULT_DATA - 5) \
    )

%define SERIAL_PORT_IO_BASE_ADDRESS DEFAULT_COM_BASE

%macro  inFromSerialPort 1
    mov     dx, (SERIAL_PORT_IO_BASE_ADDRESS + %1)
    in      al, dx
%endmacro

%macro  waitForSerialTxReady 0

%%waitingForTx:
    inFromSerialPort LSR_OFFSET
    test    al, LSR_TXRDY
    jz      %%waitingForTx

%endmacro

%macro  outToSerialPort 2
    mov     dx, (SERIAL_PORT_IO_BASE_ADDRESS + %1)
    mov     al, %2
    out     dx, al
%endmacro

%macro  debugShowCharacter 1
    waitForSerialTxReady
    outToSerialPort 0, %1
%endmacro

%macro  debugShowHexDigit 1
  %if (%1 < 0xa)
    debugShowCharacter BYTE ('0' + (%1))
  %else
    debugShowCharacter BYTE ('a' + ((%1) - 0xa))
  %endif
%endmacro

%macro  debugNewline 0
    debugShowCharacter `\r`
    debugShowCharacter `\n`
%endmacro

%macro  debugShowPostCode 1
    debugShowHexDigit (((%1) >> 4) & 0xf)
    debugShowHexDigit ((%1) & 0xf)
    debugNewline
%endmacro

BITS    16

%macro  debugInitialize 0
  jmp  real16InitDebug
real16InitDebugReturn:
%endmacro

real16InitDebug:
    ;
    ; Set communications format
    ;
    outToSerialPort LCR_OFFSET, ((DLAB << 7) | SERIAL_DEFAULT_LCR)

    ;
    ; Configure baud rate
    ;
    outToSerialPort BAUD_HIGH_OFFSET, ((115200 / DEFAULT_BPS) >> 8)
    outToSerialPort BAUD_LOW_OFFSET, ((115200 / DEFAULT_BPS) & 0xff)

    ;
    ; Switch back to bank 0
    ;
    outToSerialPort LCR_OFFSET, SERIAL_DEFAULT_LCR

    jmp     real16InitDebugReturn


%elif 0
; Set ^ this to 1 to enable postcodes on the qemu debug console.
; Disabled by default because it is incompatible with SEV-ES/SEV-SNP and TDX.
;------------------------------------------------------------------------------
; @file
; qemu debug console support macros (based on serial port macros)
;
; Copyright (c) 2008 - 2018, Intel Corporation. All rights reserved.<BR>
; Copyright (c) 2024, Red Hat, Inc.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%macro  debugShowCharacter 1
    mov     dx, 0x402
    mov     al, %1
    out     dx, al
%endmacro

%macro  debugShowHexDigit 1
  %if (%1 < 0xa)
    debugShowCharacter BYTE ('0' + (%1))
  %else
    debugShowCharacter BYTE ('a' + ((%1) - 0xa))
  %endif
%endmacro

%macro  debugShowPostCode 1
    debugShowHexDigit (((%1) >> 4) & 0xf)
    debugShowHexDigit ((%1) & 0xf)
    debugShowCharacter `\r`
    debugShowCharacter `\n`
%endmacro

BITS    16

%macro  debugInitialize 0
    ; not required
%endmacro

%else
;------------------------------------------------------------------------------
; @file
; Debug disabled
;
; Copyright (c) 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    16

%macro  debugInitialize 0
    ;
    ; No initialization is required
    ;
%endmacro

%macro  debugShowPostCode 1
%endmacro


%endif

;------------------------------------------------------------------------------
; @file
; Search for the Boot Firmware Volume (BFV) base address
;
; Copyright (c) 2008 - 2022, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

;#define EFI_FIRMWARE_FILE_SYSTEM2_GUID \
;  { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 } }
%define FFS2_GUID_DWORD0 0x8c8ce578
%define FFS2_GUID_DWORD1 0x4f1c8a3d
%define FFS2_GUID_DWORD2 0x61893599
%define FFS2_GUID_DWORD3 0xd32dc385

;#define EFI_FIRMWARE_FILE_SYSTEM3_GUID \
;  { 0x8c8ce578, 0x3dcb, 0x4dca, { 0xbd, 0x6f, 0x1e, 0x96, 0x89, 0xe7, 0x34, 0x9a } }
%define FFS3_GUID_DWORD0 0x5473c07a
%define FFS3_GUID_DWORD1 0x4dca3dcb
%define FFS3_GUID_DWORD2 0x961e6fbd
%define FFS3_GUID_DWORD3 0x9a34e789

BITS    32

;
; Modified:  EAX, EBX
; Preserved: EDI, ESP
;
; @param[out]  EBP  Address of Boot Firmware Volume (BFV)
;
Flat32SearchForBfvBase:

    xor     eax, eax
searchingForBfvHeaderLoop:
    ;
    ; We check for a firmware volume at every 4KB address in the top 16MB
    ; just below 4GB.  (Addresses at 0xffHHH000 where H is any hex digit.)
    ;
    sub     eax, 0x1000
    cmp     eax, 0xff000000
    jb      searchedForBfvHeaderButNotFound

    ;
    ; Check FFS3 GUID
    ;
    cmp     dword [eax + 0x10], FFS3_GUID_DWORD0
    jne     searchingForFfs2Guid
    cmp     dword [eax + 0x14], FFS3_GUID_DWORD1
    jne     searchingForFfs2Guid
    cmp     dword [eax + 0x18], FFS3_GUID_DWORD2
    jne     searchingForFfs2Guid
    cmp     dword [eax + 0x1c], FFS3_GUID_DWORD3
    jne     searchingForFfs2Guid
    jmp     checkingFvLength

searchingForFfs2Guid:
    ;
    ; Check FFS2 GUID
    ;
    cmp     dword [eax + 0x10], FFS2_GUID_DWORD0
    jne     searchingForBfvHeaderLoop
    cmp     dword [eax + 0x14], FFS2_GUID_DWORD1
    jne     searchingForBfvHeaderLoop
    cmp     dword [eax + 0x18], FFS2_GUID_DWORD2
    jne     searchingForBfvHeaderLoop
    cmp     dword [eax + 0x1c], FFS2_GUID_DWORD3
    jne     searchingForBfvHeaderLoop

checkingFvLength:
    ;
    ; Check FV Length
    ;
    cmp     dword [eax + 0x24], 0
    jne     searchingForBfvHeaderLoop
    mov     ebx, eax
    add     ebx, dword [eax + 0x20]
    jnz     searchingForBfvHeaderLoop

    jmp     searchedForBfvHeaderAndItWasFound

searchedForBfvHeaderButNotFound:
    ;
    ; Hang if the SEC entry point was not found
    ;
    debugShowPostCode POSTCODE_BFV_NOT_FOUND

    ;
    ; 0xbfbfbfbf in the EAX & EBP registers helps signal what failed
    ; for debugging purposes.
    ;
    mov     eax, 0xBFBFBFBF
    mov     ebp, eax
    jmp     $

searchedForBfvHeaderAndItWasFound:
    mov     ebp, eax

    debugShowPostCode POSTCODE_BFV_FOUND

    OneTimeCallRet Flat32SearchForBfvBase


;------------------------------------------------------------------------------
; @file
; Search for the SEC Core entry point
;
; Copyright (c) 2008 - 2011, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    32

%define EFI_FV_FILETYPE_SECURITY_CORE         0x03

;
; Modified:  EAX, EBX, ECX, EDX
; Preserved: EDI, EBP, ESP
;
; @param[in]   EBP  Address of Boot Firmware Volume (BFV)
; @param[out]  ESI  SEC Core Entry Point Address
;
Flat32SearchForSecEntryPoint:

    ;
    ; Initialize EBP and ESI to 0
    ;
    xor     ebx, ebx
    mov     esi, ebx

    ;
    ; Pass over the BFV header
    ;
    mov     eax, ebp
    mov     bx, [ebp + 0x30]
    add     eax, ebx
    jc      secEntryPointWasNotFound

    jmp     searchingForFfsFileHeaderLoop

moveForwardWhileSearchingForFfsFileHeaderLoop:
    ;
    ; Make forward progress in the search
    ;
    inc     eax
    jc      secEntryPointWasNotFound

searchingForFfsFileHeaderLoop:
    test    eax, eax
    jz      secEntryPointWasNotFound

    ;
    ; Ensure 8 byte alignment
    ;
    add     eax, 7
    jc      secEntryPointWasNotFound
    and     al, 0xf8

    ;
    ; Look to see if there is an FFS file at eax
    ;
    mov     bl, [eax + 0x17]
    test    bl, 0x20
    jz      moveForwardWhileSearchingForFfsFileHeaderLoop
    mov     ecx, [eax + 0x14]
    and     ecx, 0x00ffffff
    or      ecx, ecx
    jz      moveForwardWhileSearchingForFfsFileHeaderLoop
    add     ecx, eax
    jz      jumpSinceWeFoundTheLastFfsFile
    jc      moveForwardWhileSearchingForFfsFileHeaderLoop
jumpSinceWeFoundTheLastFfsFile:

    ;
    ; There seems to be a valid file at eax
    ;
    cmp     byte [eax + 0x12], EFI_FV_FILETYPE_SECURITY_CORE ; Check File Type
    jne     readyToTryFfsFileAtEcx

fileTypeIsSecCore:
    OneTimeCall GetEntryPointOfFfsFile
    test    eax, eax
    jnz     doneSeachingForSecEntryPoint

readyToTryFfsFileAtEcx:
    ;
    ; Try the next FFS file at ECX
    ;
    mov     eax, ecx
    jmp     searchingForFfsFileHeaderLoop

secEntryPointWasNotFound:
    xor     eax, eax

doneSeachingForSecEntryPoint:
    mov     esi, eax

    test    esi, esi
    jnz     secCoreEntryPointWasFound

secCoreEntryPointWasNotFound:
    ;
    ; Hang if the SEC entry point was not found
    ;
    debugShowPostCode POSTCODE_SEC_NOT_FOUND
    jz      $

secCoreEntryPointWasFound:
    debugShowPostCode POSTCODE_SEC_FOUND

    OneTimeCallRet Flat32SearchForSecEntryPoint

%define EFI_SECTION_PE32                  0x10
%define EFI_SECTION_TE                    0x12

;
; Input:
;   EAX - Start of FFS file
;   ECX - End of FFS file
;
; Output:
;   EAX - Entry point of PE32 (or 0 if not found)
;
; Modified:
;   EBX
;
GetEntryPointOfFfsFile:
    test    eax, eax
    jz      getEntryPointOfFfsFileErrorReturn
    add     eax, 0x18       ; EAX = Start of section

getEntryPointOfFfsFileLoopForSections:
    cmp     eax, ecx
    jae     getEntryPointOfFfsFileErrorReturn

    cmp     byte [eax + 3], EFI_SECTION_PE32
    je      getEntryPointOfFfsFileFoundPe32Section

    cmp     byte [eax + 3], EFI_SECTION_TE
    je      getEntryPointOfFfsFileFoundTeSection

    ;
    ; The section type was not PE32 or TE, so move to next section
    ;
    mov     ebx, dword [eax]
    and     ebx, 0x00ffffff
    add     eax, ebx
    jc      getEntryPointOfFfsFileErrorReturn

    ;
    ; Ensure that FFS section is 32-bit aligned
    ;
    add     eax, 3
    jc      getEntryPointOfFfsFileErrorReturn
    and     al, 0xfc
    jmp     getEntryPointOfFfsFileLoopForSections

getEntryPointOfFfsFileFoundPe32Section:
    add     eax, 4       ; EAX = Start of PE32 image

    cmp     word [eax], 'MZ'
    jne     getEntryPointOfFfsFileErrorReturn
    movzx   ebx, word [eax + 0x3c]
    add     ebx, eax

    ; if (Hdr.Pe32->Signature == EFI_IMAGE_NT_SIGNATURE)
    cmp     dword [ebx], `PE\x00\x00`
    jne     getEntryPointOfFfsFileErrorReturn

    ; *EntryPoint = (VOID *)((UINTN)Pe32Data +
    ;   (UINTN)(Hdr.Pe32->OptionalHeader.AddressOfEntryPoint & 0x0ffffffff));
    add     eax, [ebx + 0x4 + 0x14 + 0x10]
    jmp     getEntryPointOfFfsFileReturn

getEntryPointOfFfsFileFoundTeSection:
    add     eax, 4       ; EAX = Start of TE image
    mov     ebx, eax

    ; if (Hdr.Te->Signature == EFI_TE_IMAGE_HEADER_SIGNATURE)
    cmp     word [ebx], 'VZ'
    jne     getEntryPointOfFfsFileErrorReturn
    ; *EntryPoint = (VOID *)((UINTN)Pe32Data +
    ;   (UINTN)(Hdr.Te->AddressOfEntryPoint & 0x0ffffffff) +
    ;   sizeof(EFI_TE_IMAGE_HEADER) - Hdr.Te->StrippedSize);
    add     eax, [ebx + 0x8]
    add     eax, 0x28
    movzx   ebx, word [ebx + 0x6]
    sub     eax, ebx
    jmp     getEntryPointOfFfsFileReturn

getEntryPointOfFfsFileErrorReturn:
    mov     eax, 0

getEntryPointOfFfsFileReturn:
    OneTimeCallRet GetEntryPointOfFfsFile



%define WORK_AREA_GUEST_TYPE          (FixedPcdGet32 (PcdOvmfWorkAreaBase))
%define PT_ADDR(Offset)               (FixedPcdGet32 (PcdOvmfSecPageTablesBase) + (Offset))
%define PG_5_LEVEL                    (FixedPcdGetBool (PcdUse5LevelPageTable))

%define GHCB_PT_ADDR                  (FixedPcdGet32 (PcdOvmfSecGhcbPageTableBase))
%define GHCB_BASE                     (FixedPcdGet32 (PcdOvmfSecGhcbBase))
%define GHCB_SIZE                     (FixedPcdGet32 (PcdOvmfSecGhcbSize))
%define SEV_ES_WORK_AREA              (FixedPcdGet32 (PcdSevEsWorkAreaBase))
%define SEV_ES_WORK_AREA_SIZE         25
%define SEV_ES_WORK_AREA_STATUS_MSR   (FixedPcdGet32 (PcdSevEsWorkAreaBase))
%define SEV_ES_WORK_AREA_RDRAND       (FixedPcdGet32 (PcdSevEsWorkAreaBase) + 8)
%define SEV_ES_WORK_AREA_ENC_MASK     (FixedPcdGet32 (PcdSevEsWorkAreaBase) + 16)
%define SEV_ES_WORK_AREA_RECEIVED_VC  (FixedPcdGet32 (PcdSevEsWorkAreaBase) + 24)
%define SEV_ES_VC_TOP_OF_STACK        (FixedPcdGet32 (PcdOvmfSecPeiTempRamBase) + FixedPcdGet32 (PcdOvmfSecPeiTempRamSize))
%define SEV_SNP_SECRETS_BASE          (FixedPcdGet32 (PcdOvmfSnpSecretsBase))
%define SEV_SNP_SECRETS_SIZE          (FixedPcdGet32 (PcdOvmfSnpSecretsSize))
%define CPUID_BASE                    (FixedPcdGet32 (PcdOvmfCpuidBase))
%define CPUID_SIZE                    (FixedPcdGet32 (PcdOvmfCpuidSize))
%define SVSM_CAA_BASE                 (FixedPcdGet32 (PcdOvmfSecSvsmCaaBase))
%define SVSM_CAA_SIZE                 (FixedPcdGet32 (PcdOvmfSecSvsmCaaSize))
%if (FixedPcdGet32 (PcdSevLaunchSecretBase) > 0)
  ; There's a reserved page for SEV secrets and hashes; the VMM will fill and
  ; validate the page, or mark it as a zero page.
  %define SEV_SNP_KERNEL_HASHES_BASE    (FixedPcdGet32 (PcdSevLaunchSecretBase))
  %define SEV_SNP_KERNEL_HASHES_SIZE    (FixedPcdGet32 (PcdSevLaunchSecretSize) + FixedPcdGet32 (PcdQemuHashTableSize))
%else
  %define SEV_SNP_KERNEL_HASHES_BASE    0
  %define SEV_SNP_KERNEL_HASHES_SIZE    0
%endif
%define SNP_SEC_MEM_BASE_DESC_1       (FixedPcdGet32 (PcdOvmfSecPageTablesBase))
%define SNP_SEC_MEM_SIZE_DESC_1       (FixedPcdGet32 (PcdOvmfSecGhcbBase) - SNP_SEC_MEM_BASE_DESC_1)
;
; The PcdOvmfSecGhcbBase reserves two GHCB pages. The first page is used
; as GHCB shared page and second is used for bookkeeping to support the
; nested GHCB in SEC phase. The bookkeeping page is mapped private. The VMM
; does not need to validate the shared page but it need to validate the
; bookkeeping page.
;
%define SNP_SEC_MEM_BASE_DESC_2       (GHCB_BASE + 0x1000)
%define SNP_SEC_MEM_SIZE_DESC_2       (SEV_SNP_SECRETS_BASE - SNP_SEC_MEM_BASE_DESC_2)
%define SNP_SEC_MEM_BASE_DESC_3       (SVSM_CAA_BASE + SVSM_CAA_SIZE + SEV_SNP_KERNEL_HASHES_SIZE)
%define SNP_SEC_MEM_SIZE_DESC_3       (FixedPcdGet32 (PcdOvmfPeiMemFvBase) - SNP_SEC_MEM_BASE_DESC_3)

%ifdef ARCH_X64
  #include <AutoGen.h>

  %if (FixedPcdGet32 (PcdOvmfSecPageTablesSize) != 0x6000)
    %error "This implementation inherently depends on PcdOvmfSecPageTablesSize"
  %endif

  %if (FixedPcdGet32 (PcdOvmfSecGhcbPageTableSize) != 0x1000)
    %error "This implementation inherently depends on PcdOvmfSecGhcbPageTableSize"
  %endif

  %if (FixedPcdGet32 (PcdOvmfSecGhcbSize) != 0x2000)
    %error "This implementation inherently depends on PcdOvmfSecGhcbSize"
  %endif

  %if ((FixedPcdGet32 (PcdOvmfSecGhcbBase) >> 21) != \
       ((FixedPcdGet32 (PcdOvmfSecGhcbBase) + FixedPcdGet32 (PcdOvmfSecGhcbSize) - 1) >> 21))
    %error "This implementation inherently depends on PcdOvmfSecGhcbBase not straddling a 2MB boundary"
  %endif

  %define TDX_BFV_RAW_DATA_OFFSET   FixedPcdGet32 (PcdBfvRawDataOffset)
  %define TDX_BFV_RAW_DATA_SIZE     FixedPcdGet32 (PcdBfvRawDataSize)
  %define TDX_BFV_MEMORY_BASE       FixedPcdGet32 (PcdBfvBase)
  %define TDX_BFV_MEMORY_SIZE       FixedPcdGet32 (PcdBfvRawDataSize)

  %define TDX_CFV_RAW_DATA_OFFSET   FixedPcdGet32 (PcdCfvRawDataOffset)
  %define TDX_CFV_RAW_DATA_SIZE     FixedPcdGet32 (PcdCfvRawDataSize)
  %define TDX_CFV_MEMORY_BASE       FixedPcdGet32 (PcdCfvBase),
  %define TDX_CFV_MEMORY_SIZE       FixedPcdGet32 (PcdCfvRawDataSize),

  %define TDX_HEAP_STACK_BASE       FixedPcdGet32 (PcdOvmfSecPeiTempRamBase)
  %define TDX_HEAP_STACK_SIZE       FixedPcdGet32 (PcdOvmfSecPeiTempRamSize)

  %define TDX_HOB_MEMORY_BASE       FixedPcdGet32 (PcdOvmfSecGhcbBase)
  %define TDX_HOB_MEMORY_SIZE       FixedPcdGet32 (PcdOvmfSecGhcbSize)

  %define TDX_INIT_MEMORY_BASE      FixedPcdGet32 (PcdOvmfWorkAreaBase)
  %define TDX_INIT_MEMORY_SIZE      (FixedPcdGet32 (PcdOvmfWorkAreaSize) + FixedPcdGet32 (PcdOvmfSecGhcbBackupSize))

  %define OVMF_PAGE_TABLE_BASE      FixedPcdGet32 (PcdOvmfSecPageTablesBase)
  %define OVMF_PAGE_TABLE_SIZE      FixedPcdGet32 (PcdOvmfSecPageTablesSize)

  %define TDX_WORK_AREA_PGTBL_READY (FixedPcdGet32 (PcdOvmfWorkAreaBase) + 4)
  %define TDX_WORK_AREA_GPAW        (FixedPcdGet32 (PcdOvmfWorkAreaBase) + 8)

;------------------------------------------------------------------------------
; @file
; Tdx Virtual Firmware metadata
;
; When host VMM creates a new guest TD, some initial set of TD-private pages
; are added using the TDH.MEM.PAGE.ADD function. These pages typically contain
; Virtual BIOS code and data along with some clear pages for stacks and heap.
; In the meanwhile, some configuration data need be measured by host VMM.
; Tdx Metadata is designed for this purpose to indicate host VMM how to do the
; above tasks.
;
; Tdx Metadata consists of a DESCRIPTOR as the header followed by several
; SECTIONs. Host VMM sets up the memory for TDVF according to these sections.
;
; _Bfv is the example (Bfv refers to the Virtual BIOS code).
; - By DataOffset/RawDataSize host VMM knows about the position of the code
;   in the binary image.
; - MemoryAddress/MemoryDataSize indicates the guest physical address/size of
;   the Bfv to be loaded.
; - Type field means this section is of BFV. This field is designed for the
;   purpose that in some case host VMM may do some additional processing based
;   upon the section type. TdHob section is an example. Host VMM pass the
;   physical memory information to the guest firmware by writing the data in
;   the memory region designated by TdHob section.
; - By design code part of the binary image (Bfv) should be measured by host
;   VMM. This is indicated by the Attributes field.
;
; So put all these information together, when a new guest is being created,
; the initial TD-private pages for BFV is added by TDH.MEM.PAGE.ADD function,
; and Bfv is loaded at the guest physical address indicated by MemoryAddress.
; Since the Attributes is TDX_METADATA_ATTRIBUTES_EXTENDMR, Bfv is measured by
; host VMM.
;
; Copyright (c) 2021, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    64

%define TDX_METADATA_SECTION_TYPE_BFV       0
%define TDX_METADATA_SECTION_TYPE_CFV       1
%define TDX_METADATA_SECTION_TYPE_TD_HOB    2
%define TDX_METADATA_SECTION_TYPE_TEMP_MEM  3
%define TDX_METADATA_VERSION                1
%define TDX_METADATA_ATTRIBUTES_EXTENDMR    0x00000001

ALIGN   16
TIMES (15 - ((TdxGuidedStructureEnd - TdxGuidedStructureStart + 15) % 16)) DB 0

TdxGuidedStructureStart:

;
; TDVF meta data
;
TdxMetadataGuid:
  DB  0xf3, 0xf9, 0xea, 0xe9, 0x8e, 0x16, 0xd5, 0x44
  DB  0xa8, 0xeb, 0x7f, 0x4d, 0x87, 0x38, 0xf6, 0xae

_Descriptor:
  DB 'T','D','V','F'                                  ; Signature
  DD TdxGuidedStructureEnd - _Descriptor              ; Length
  DD TDX_METADATA_VERSION                             ; Version
  DD (TdxGuidedStructureEnd - _Descriptor - 16)/32    ; Number of sections

_Bfv:
  DD TDX_BFV_RAW_DATA_OFFSET
  DD TDX_BFV_RAW_DATA_SIZE
  DQ TDX_BFV_MEMORY_BASE
  DQ TDX_BFV_MEMORY_SIZE
  DD TDX_METADATA_SECTION_TYPE_BFV
  DD TDX_METADATA_ATTRIBUTES_EXTENDMR

_Cfv:
  DD TDX_CFV_RAW_DATA_OFFSET
  DD TDX_CFV_RAW_DATA_SIZE
  DQ TDX_CFV_MEMORY_BASE
  DQ TDX_CFV_MEMORY_SIZE
  DD TDX_METADATA_SECTION_TYPE_CFV
  DD 0

_TdxHeapStack:
  DD 0
  DD 0
  DQ TDX_HEAP_STACK_BASE
  DQ TDX_HEAP_STACK_SIZE
  DD TDX_METADATA_SECTION_TYPE_TEMP_MEM
  DD 0

_TdxInitMem:
  DD 0
  DD 0
  DQ TDX_INIT_MEMORY_BASE
  DQ TDX_INIT_MEMORY_SIZE
  DD TDX_METADATA_SECTION_TYPE_TEMP_MEM
  DD 0

_TdHob:
  DD 0
  DD 0
  DQ TDX_HOB_MEMORY_BASE
  DQ TDX_HOB_MEMORY_SIZE
  DD TDX_METADATA_SECTION_TYPE_TD_HOB
  DD 0

_OvmfPageTable:
  DD 0
  DD 0
  DQ OVMF_PAGE_TABLE_BASE
  DQ OVMF_PAGE_TABLE_SIZE
  DD TDX_METADATA_SECTION_TYPE_TEMP_MEM
  DD 0

TdxGuidedStructureEnd:
ALIGN   16

;------------------------------------------------------------------------------
; @file
; Transition from 32 bit flat protected mode into 64 bit flat protected mode
;
; Copyright (c) 2008 - 2018, Intel Corporation. All rights reserved.<BR>
; Copyright (c) 2020, Advanced Micro Devices, Inc. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    32

;
; Modified:  EAX, ECX, EDX
;
Transition32FlatTo64Flat:

    OneTimeCall SetCr3ForPageTables64

    mov     eax, cr4
    bts     eax, 5                      ; enable PAE
    mov     cr4, eax

    ;
    ; In TDX LME has already been set. So we're done and jump to enable
    ; paging directly if Tdx is enabled.
    ; EBX is cleared because in the later it will be used to check if
    ; the second step of the SEV-ES mitigation is to be performed.
    ;
    xor     ebx, ebx
    OneTimeCall IsTdxEnabled
    test    eax, eax
    jnz     EnablePaging

    mov     ecx, 0xc0000080
    rdmsr
    bts     eax, 8                      ; set LME
    wrmsr

    ;
    ; SEV-ES mitigation check support
    ;
    xor     ebx, ebx

    mov     ecx, 1
    bt      [SEV_ES_WORK_AREA_STATUS_MSR], ecx
    jnc     EnablePaging

    ;
    ; SEV-ES is active, perform a quick sanity check against the reported
    ; encryption bit position. This is to help mitigate against attacks where
    ; the hypervisor reports an incorrect encryption bit position.
    ;
    ; This is the first step in a two step process. Before paging is enabled
    ; writes to memory are encrypted. Using the RDRAND instruction (available
    ; on all SEV capable processors), write 64-bits of random data to the
    ; SEV_ES_WORK_AREA and maintain the random data in registers (register
    ; state is protected under SEV-ES). This will be used in the second step.
    ;
RdRand1:
    rdrand  ecx
    jnc     RdRand1
    mov     dword[SEV_ES_WORK_AREA_RDRAND], ecx
RdRand2:
    rdrand  edx
    jnc     RdRand2
    mov     dword[SEV_ES_WORK_AREA_RDRAND + 4], edx

    ;
    ; Use EBX instead of the SEV_ES_WORK_AREA memory to determine whether to
    ; perform the second step.
    ;
    mov     ebx, 1

EnablePaging:
    mov     eax, cr0
    bts     eax, 31                     ; set PG
    mov     cr0, eax                    ; enable paging

    jmp     LINEAR_CODE64_SEL:ADDR_OF(jumpTo64BitAndLandHere)
BITS    64
jumpTo64BitAndLandHere:

    ;
    ; Check if the second step of the SEV-ES mitigation is to be performed.
    ;
    test    ebx, ebx
    jz      InsnCompare

    ;
    ; SEV-ES is active, perform the second step of the encryption bit postion
    ; mitigation check. The ECX and EDX register contain data from RDRAND that
    ; was stored to memory in encrypted form. If the encryption bit position is
    ; valid, the contents of ECX and EDX will match the memory location.
    ;
    cmp     dword[SEV_ES_WORK_AREA_RDRAND], ecx
    jne     SevEncBitHlt
    cmp     dword[SEV_ES_WORK_AREA_RDRAND + 4], edx
    jne     SevEncBitHlt

    ;
    ; If SEV or SEV-ES is active, perform a quick sanity check against
    ; the reported encryption bit position. This is to help mitigate
    ; against attacks where the hypervisor reports an incorrect encryption
    ; bit position. If SEV is not active, this check will always succeed.
    ;
    ; The cmp instruction compares the first four bytes of the cmp instruction
    ; itself (which will be read decrypted if SEV or SEV-ES is active and the
    ; encryption bit position is valid) against the immediate within the
    ; instruction (an instruction fetch is always decrypted correctly by
    ; hardware) based on RIP relative addressing.
    ;
InsnCompare:
    cmp     dword[rel InsnCompare], 0xFFF63D81
    je      GoodCompare

    ;
    ; The hypervisor provided an incorrect encryption bit position, do not
    ; proceed.
    ;
SevEncBitHlt:
    cli
    hlt
    jmp     SevEncBitHlt

GoodCompare:
    debugShowPostCode POSTCODE_64BIT_MODE

    OneTimeCallRet Transition32FlatTo64Flat


;------------------------------------------------------------------------------
; @file
; Sets the CR3 register for 64-bit paging
;
; Copyright (c) 2008 - 2013, Intel Corporation. All rights reserved.<BR>
; Copyright (c) 2017 - 2020, Advanced Micro Devices, Inc. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    32

; common for all levels
%define PAGE_PRESENT            0x01
%define PAGE_READ_WRITE         0x02
%define PAGE_USER_SUPERVISOR    0x04
%define PAGE_WRITE_THROUGH      0x08
%define PAGE_CACHE_DISABLE     0x010
%define PAGE_ACCESSED          0x020
%define PAGE_DIRTY             0x040
%define PAGE_GLOBAL           0x0100

; page table entries (level 1)
%define PAGE_PTE_PAT           0x080

; page directory entries (level 2+)
%define PAGE_PDE_LARGEPAGE     0x080
%define PAGE_PDE_PAT         0x01000

%define PAGE_4K_PDE_ATTR (PAGE_ACCESSED + \
                          PAGE_DIRTY + \
                          PAGE_READ_WRITE + \
                          PAGE_PRESENT)

%define PAGE_PDE_LARGEPAGE_ATTR (PAGE_PDE_LARGEPAGE + \
                                 PAGE_ACCESSED + \
                                 PAGE_DIRTY + \
                                 PAGE_READ_WRITE + \
                                 PAGE_PRESENT)

%define PAGE_PDE_DIRECTORY_ATTR (PAGE_ACCESSED + \
                                 PAGE_READ_WRITE + \
                                 PAGE_PRESENT)

%define TDX_BSP         1
%define TDX_AP          2
%define TDX_AP_5_LEVEL  3

;
; For OVMF, build some initial page tables at
; PcdOvmfSecPageTablesBase - (PcdOvmfSecPageTablesBase + 0x6000).
;
; This range should match with PcdOvmfSecPageTablesSize which is
; declared in the FDF files.
;
; At the end of PEI, the pages tables will be rebuilt into a
; more permanent location by DxeIpl.
;
%macro ClearOvmfPageTables 0
    mov     ecx, 6 * 0x1000 / 4
    xor     eax, eax
.clearPageTablesMemoryLoop:
    mov     dword[ecx * 4 + PT_ADDR (0) - 4], eax
    loop    .clearPageTablesMemoryLoop
%endmacro

;
; Create page tables for 4-level paging
;
; Argument: upper 32 bits of the leaf page table entries
;
%macro CreatePageTables4Level 1

    ; indicate 4-level paging
    debugShowPostCode 0x41

    ;
    ; Top level Page Directory Pointers (1 * 512GB entry)
    ;
    mov     dword[PT_ADDR (0)], PT_ADDR (0x1000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (4)], 0

    ;
    ; Next level Page Directory Pointers (4 * 1GB entries => 4GB)
    ;
    mov     dword[PT_ADDR (0x1000)], PT_ADDR (0x2000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (0x1004)], 0
    mov     dword[PT_ADDR (0x1008)], PT_ADDR (0x3000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (0x100C)], 0
    mov     dword[PT_ADDR (0x1010)], PT_ADDR (0x4000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (0x1014)], 0
    mov     dword[PT_ADDR (0x1018)], PT_ADDR (0x5000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (0x101C)], 0

    ;
    ; Page Table Entries (2048 * 2MB entries => 4GB)
    ;
    mov     ecx, 0x800
.pageTableEntriesLoop4Level:
    mov     eax, ecx
    dec     eax
    shl     eax, 21
    add     eax, PAGE_PDE_LARGEPAGE_ATTR
    mov     dword[ecx * 8 + PT_ADDR (0x2000 - 8)], eax
    mov     dword[(ecx * 8 + PT_ADDR (0x2000 - 8)) + 4], %1
    loop    .pageTableEntriesLoop4Level
%endmacro

;
; Check whenever 5-level paging can be used
;
; Argument: jump label for 4-level paging
;
%macro Check5LevelPaging 1
    ; check for cpuid leaf 0x07
    mov     eax, 0x00
    cpuid
    cmp     eax, 0x07
    jb      %1

    ; check for la57 (aka 5-level paging)
    mov     eax, 0x07
    mov     ecx, 0x00
    cpuid
    bt      ecx, 16
    jnc     %1

    ; check for cpuid leaf 0x80000001
    mov     eax, 0x80000000
    cpuid
    cmp     eax, 0x80000001
    jb      %1

    ; check for 1g pages
    mov     eax, 0x80000001
    cpuid
    bt      edx, 26
    jnc     %1
%endmacro

;
; Create page tables for 5-level paging with gigabyte pages
;
; Argument: upper 32 bits of the leaf page table entries
;
; We have 6 pages available for the early page tables,
; we use four of them:
;    PT_ADDR(0)      - level 5 directory
;    PT_ADDR(0x1000) - level 4 directory
;    PT_ADDR(0x2000) - level 2 directory (0 -> 1GB)
;    PT_ADDR(0x3000) - level 3 directory
;
; The level 2 directory for the first gigabyte has the same
; physical address in both 4-level and 5-level paging mode,
; SevClearPageEncMaskForGhcbPage depends on this.
;
; The 1 GB -> 4 GB range is mapped using 1G pages in the
; level 3 directory.
;
%macro CreatePageTables5Level 1

    ; indicate 5-level paging
    debugShowPostCode 0x51

    ; level 5
    mov     dword[PT_ADDR (0)], PT_ADDR (0x1000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (4)], 0

    ; level 4
    mov     dword[PT_ADDR (0x1000)], PT_ADDR (0x3000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (0x1004)], 0

    ; level 3 (1x -> level 2, 3x 1GB)
    mov     dword[PT_ADDR (0x3000)], PT_ADDR (0x2000) + PAGE_PDE_DIRECTORY_ATTR
    mov     dword[PT_ADDR (0x3004)], 0
    mov     dword[PT_ADDR (0x3008)], (1 << 30) + PAGE_PDE_LARGEPAGE_ATTR
    mov     dword[PT_ADDR (0x300c)], %1
    mov     dword[PT_ADDR (0x3010)], (2 << 30) + PAGE_PDE_LARGEPAGE_ATTR
    mov     dword[PT_ADDR (0x3014)], %1
    mov     dword[PT_ADDR (0x3018)], (3 << 30) + PAGE_PDE_LARGEPAGE_ATTR
    mov     dword[PT_ADDR (0x301c)], %1

    ;
    ; level 2 (512 * 2MB entries => 1GB)
    ;
    mov     ecx, 0x200
.pageTableEntriesLoop5Level:
    mov     eax, ecx
    dec     eax
    shl     eax, 21
    add     eax, PAGE_PDE_LARGEPAGE_ATTR
    mov     dword[ecx * 8 + PT_ADDR (0x2000 - 8)], eax
    mov     dword[(ecx * 8 + PT_ADDR (0x2000 - 8)) + 4], %1
    loop    .pageTableEntriesLoop5Level
%endmacro

%macro Enable5LevelPaging 0
    ; set la57 bit in cr4
    mov     eax, cr4
    bts     eax, 12
    mov     cr4, eax
%endmacro

;
; Modified:  EAX, EBX, ECX, EDX
;
SetCr3ForPageTables64:
    ; Check the TDX features.
    ; If it is TDX APs, then jump to SetCr3 directly.
    ; In TD guest the initialization is done by BSP, including building
    ; the page tables. APs will spin on until byte[TDX_WORK_AREA_PGTBL_READY]
    ; is set.
    OneTimeCall   CheckTdxFeaturesBeforeBuildPagetables
    cmp       eax, TDX_BSP
    je        TdxBspInit
    cmp       eax, TDX_AP
    je        SetCr3
%if PG_5_LEVEL
    cmp       eax, TDX_AP_5_LEVEL
    jne       CheckForSev
    Enable5LevelPaging
    jmp       SetCr3
CheckForSev:
%endif

    ; Check whether the SEV is active and populate the SevEsWorkArea
    OneTimeCall   CheckSevFeatures
    cmp       byte[WORK_AREA_GUEST_TYPE], 1
    jz        SevInit

    ;
    ; normal (non-CoCo) workflow
    ;
    ClearOvmfPageTables
%if PG_5_LEVEL
    Check5LevelPaging Paging4Level
    CreatePageTables5Level 0
    Enable5LevelPaging
    jmp SetCr3
Paging4Level:
%endif
    CreatePageTables4Level 0
    jmp SetCr3

SevInit:
    ;
    ; SEV workflow
    ;
    ClearOvmfPageTables
    ; If SEV is enabled, the C-bit position is always above 31.
    ; The mask will be saved in the EDX and applied during the
    ; the page table build below.
    OneTimeCall   GetSevCBitMaskAbove31
    CreatePageTables4Level edx
    ; Clear the C-bit from the GHCB page if the SEV-ES is enabled.
    OneTimeCall   SevClearPageEncMaskForGhcbPage
    jmp SetCr3

TdxBspInit:
    ;
    ; TDX BSP workflow
    ;
    ClearOvmfPageTables
%if PG_5_LEVEL
    Check5LevelPaging Tdx4Level
    CreatePageTables5Level 0
    OneTimeCall TdxPostBuildPageTables5Level
    Enable5LevelPaging
    jmp SetCr3
Tdx4Level:
%endif
    CreatePageTables4Level 0
    OneTimeCall TdxPostBuildPageTables
    jmp SetCr3

SetCr3:
    ;
    ; common workflow
    ;
    ; Set CR3 now that the paging structures are available
    ;
    mov     eax, PT_ADDR (0)
    mov     cr3, eax

    OneTimeCallRet SetCr3ForPageTables64

;------------------------------------------------------------------------------
; @file
;   Intel TDX routines
;
; Copyright (c) 2021, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%define VM_GUEST_TDX     2

BITS 32

;
; Check if it is Intel Tdx
;
; Modified: EAX, EBX, ECX, EDX
;
; If it is Intel Tdx, EAX is 1
; If it is not Intel Tdx, EAX is 0
;
IsTdx:
    ;
    ; CPUID (0)
    ;
    mov     eax, 0
    cpuid
    cmp     ebx, 0x756e6547  ; "Genu"
    jne     IsNotTdx
    cmp     edx, 0x49656e69  ; "ineI"
    jne     IsNotTdx
    cmp     ecx, 0x6c65746e  ; "ntel"
    jne     IsNotTdx

    ;
    ; CPUID (1)
    ;
    mov     eax, 1
    cpuid
    test    ecx, 0x80000000
    jz      IsNotTdx

    ;
    ; CPUID[0].EAX >= 0x21?
    ;
    mov     eax, 0
    cpuid
    cmp     eax, 0x21
    jl      IsNotTdx

    ;
    ; CPUID (0x21,0)
    ;
    mov     eax, 0x21
    mov     ecx, 0
    cpuid

    cmp     ebx, 0x65746E49   ; "Inte"
    jne     IsNotTdx
    cmp     edx, 0x5844546C   ; "lTDX"
    jne     IsNotTdx
    cmp     ecx, 0x20202020   ; "    "
    jne     IsNotTdx

    mov     eax, 1
    jmp     ExitIsTdx

IsNotTdx:
    xor     eax, eax

ExitIsTdx:

  OneTimeCallRet IsTdx

;
; Initialize work area if it is Tdx guest. Detailed definition is in
; OvmfPkg/Include/WorkArea.h.
; BSP and APs all go here. Only BSP initialize this work area.
;
; Param[in] EBX[5:0]    CPU Supported GPAW (48 or 52)
; Param[in] ESI[31:0]   vCPU ID (BSP is 0, others are AP)
;
; Modified:  EBX
;
InitTdxWorkarea:

    ;
    ; First check if it is Tdx
    ;
    OneTimeCall IsTdx

    test    eax, eax
    jz      ExitInitTdxWorkarea

    cmp     esi, 0
    je      TdxBspEntry

    ;
    ; In Td guest, BSP/AP shares the same entry point
    ; BSP builds up the page table, while APs shouldn't do the same task.
    ; Instead, APs just leverage the page table which is built by BSP.
    ; APs will wait until the page table is ready.
    ;
TdxApWait:
    cmp     byte[TDX_WORK_AREA_PGTBL_READY], 0
    je      TdxApWait
    jmp     ExitInitTdxWorkarea

TdxBspEntry:
    ;
    ; Set Type of WORK_AREA_GUEST_TYPE so that the following code can use
    ; these information.
    ;
    mov     byte[WORK_AREA_GUEST_TYPE], VM_GUEST_TDX

    ;
    ; EBX[5:0] CPU supported GPA width
    ;
    and     ebx, 0x3f
    mov     DWORD[TDX_WORK_AREA_GPAW], ebx

ExitInitTdxWorkarea:
    OneTimeCallRet InitTdxWorkarea

;
; Load the GDT and set the CS/DS/ES/FS/GS/SS.
;
; Modified:  EAX, DS, ES, FS, GS, SS, CS
;
ReloadFlat32:

    cli
    mov     eax, ADDR_OF(gdtr)
    lgdt    [eax]

    jmp     LINEAR_CODE_SEL:dword ADDR_OF(jumpToFlat32BitAndLandHere)

jumpToFlat32BitAndLandHere:

    debugShowPostCode POSTCODE_32BIT_MODE

    mov     ax, LINEAR_SEL
    mov     ds, ax
    mov     es, ax
    mov     fs, ax
    mov     gs, ax
    mov     ss, ax

    OneTimeCallRet ReloadFlat32

;
; Tdx initialization after entering into ResetVector
;
; Modified:  EAX, EBX, ECX, EDX, EBP, EDI, ESP
;
InitTdx:
    ;
    ; First load the GDT and jump to Flat32 mode
    ;
    OneTimeCall ReloadFlat32

    ;
    ; Initialization of Tdx work area
    ;
    OneTimeCall  InitTdxWorkarea

    OneTimeCallRet InitTdx

;
; Check TDX features, TDX or TDX-BSP or TDX-APs?
;
; By design TDX BSP is reponsible for initializing the PageTables.
; After PageTables are ready, byte[TDX_WORK_AREA_PGTBL_READY] is set to 1.
; APs will spin when byte[TDX_WORK_AREA_PGTBL_READY] is 0 until it is set to 1.
;
; When this routine is run on TDX BSP, byte[TDX_WORK_AREA_PGTBL_READY] should be 0.
; When this routine is run on TDX APs, byte[TDX_WORK_AREA_PGTBL_READY] should be 1.
;
;
; Modified:  EAX, EDX
;
; 0-NonTdx, 1-TdxBsp, 2-TdxAps, 3-TdxAps5Level
;
CheckTdxFeaturesBeforeBuildPagetables:
    xor     eax, eax
    cmp     byte[WORK_AREA_GUEST_TYPE], VM_GUEST_TDX
    jne     NotTdx

    xor     edx, edx
    mov     al, byte[TDX_WORK_AREA_PGTBL_READY]
    inc     eax

NotTdx:
    OneTimeCallRet CheckTdxFeaturesBeforeBuildPagetables

;
; Set byte[TDX_WORK_AREA_PGTBL_READY] to 1
;
TdxPostBuildPageTables:
    mov     byte[TDX_WORK_AREA_PGTBL_READY], 1
    OneTimeCallRet TdxPostBuildPageTables

%if PG_5_LEVEL

;
; Set byte[TDX_WORK_AREA_PGTBL_READY] to 2
;
TdxPostBuildPageTables5Level:
    mov     byte[TDX_WORK_AREA_PGTBL_READY], 2
    OneTimeCallRet TdxPostBuildPageTables5Level

%endif

;
; Check if TDX is enabled
;
; Modified:  EAX
;
; If TDX is enabled then EAX will be 1
; If TDX is disabled then EAX will be 0.
;
IsTdxEnabled:
    xor     eax, eax
    cmp     byte[WORK_AREA_GUEST_TYPE], VM_GUEST_TDX
    jne     TdxNotEnabled
    mov     eax, 1

TdxNotEnabled:
    OneTimeCallRet IsTdxEnabled

;-----------------------------------------------------------------------------
; @file
; OVMF metadata for the AMD SEV confidential computing guests
;
; Copyright (c) 2021 - 2024, AMD Inc. All rights reserved.<BR>
;
; SPDX-License-Identifier: BSD-2-Clause-Patent
;-----------------------------------------------------------------------------

BITS  64

%define OVMF_SEV_METADATA_VERSION     1

; The section must be accepted or validated by the VMM before the boot
%define OVMF_SECTION_TYPE_SNP_SEC_MEM     0x1

; AMD SEV-SNP specific sections
%define OVMF_SECTION_TYPE_SNP_SECRETS     0x2

;
; The section contains the hypervisor pre-populated CPUID values.
; In the case of SEV-SNP, the CPUID values are filtered and measured by
; the SEV-SNP firmware.
; The CPUID format is documented in SEV-SNP firmware spec 0.9 section 7.1
; (CPUID function structure).
;
%define OVMF_SECTION_TYPE_CPUID           0x3

; The SVSM Calling Area Address (CAA)
%define OVMF_SECTION_TYPE_SVSM_CAA        0x4

; Kernel hashes section for measured direct boot
%define OVMF_SECTION_TYPE_KERNEL_HASHES   0x10

ALIGN 16

TIMES (15 - ((OvmfSevGuidedStructureEnd - OvmfSevGuidedStructureStart + 15) % 16)) DB 0

OvmfSevGuidedStructureStart:
;
; OvmfSev metadata descriptor
;
OvmfSevMetadataGuid:

_DescriptorSev:
  DB 'A','S','E','V'                                        ; Signature
  DD OvmfSevGuidedStructureEnd - _DescriptorSev             ; Length
  DD OVMF_SEV_METADATA_VERSION                              ; Version
  DD (OvmfSevGuidedStructureEnd - _DescriptorSev - 16) / 12 ; Number of sections

; Region need to be pre-validated by the hypervisor
PreValidate1:
  DD  SNP_SEC_MEM_BASE_DESC_1
  DD  SNP_SEC_MEM_SIZE_DESC_1
  DD  OVMF_SECTION_TYPE_SNP_SEC_MEM
PreValidate2:
  DD  SNP_SEC_MEM_BASE_DESC_2
  DD  SNP_SEC_MEM_SIZE_DESC_2
  DD  OVMF_SECTION_TYPE_SNP_SEC_MEM

; SEV-SNP Secrets page
SevSnpSecrets:
  DD  SEV_SNP_SECRETS_BASE
  DD  SEV_SNP_SECRETS_SIZE
  DD  OVMF_SECTION_TYPE_SNP_SECRETS

; CPUID values
CpuidSec:
  DD  CPUID_BASE
  DD  CPUID_SIZE
  DD  OVMF_SECTION_TYPE_CPUID

; SVSM CAA page
SvsmCaa:
  DD  SVSM_CAA_BASE
  DD  SVSM_CAA_SIZE
  DD  OVMF_SECTION_TYPE_SVSM_CAA

%if (SEV_SNP_KERNEL_HASHES_BASE > 0)
; Kernel hashes for measured direct boot, or zero page if
; there are no kernel hashes / SEV secrets
SevSnpKernelHashes:
  DD  SEV_SNP_KERNEL_HASHES_BASE
  DD  SEV_SNP_KERNEL_HASHES_SIZE
  DD  OVMF_SECTION_TYPE_KERNEL_HASHES
%endif

; Region need to be pre-validated by the hypervisor
PreValidate3:
  DD  SNP_SEC_MEM_BASE_DESC_3
  DD  SNP_SEC_MEM_SIZE_DESC_3
  DD  OVMF_SECTION_TYPE_SNP_SEC_MEM
OvmfSevGuidedStructureEnd:
  ALIGN   16

%endif

;------------------------------------------------------------------------------
; @file
; Provide the functions to check whether SEV and SEV-ES is enabled.
;
; Copyright (c) 2017 - 2021, Advanced Micro Devices, Inc. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    32

;
; SEV-ES #VC exception handler support
;
; #VC handler local variable locations
;
%define VC_CPUID_RESULT_EAX         0
%define VC_CPUID_RESULT_EBX         4
%define VC_CPUID_RESULT_ECX         8
%define VC_CPUID_RESULT_EDX        12
%define VC_GHCB_MSR_EDX            16
%define VC_GHCB_MSR_EAX            20
%define VC_CPUID_REQUEST_REGISTER  24
%define VC_CPUID_FUNCTION          28

; #VC handler total local variable size
;
%define VC_VARIABLE_SIZE           32

; #VC handler GHCB CPUID request/response protocol values
;
%define GHCB_CPUID_REQUEST          4
%define GHCB_CPUID_RESPONSE         5
%define GHCB_CPUID_REGISTER_SHIFT  30
%define CPUID_INSN_LEN              2

; #VC handler offsets/sizes for accessing SNP CPUID page
;
%define SNP_CPUID_ENTRY_SZ         48
%define SNP_CPUID_COUNT             0
%define SNP_CPUID_ENTRY            16
%define SNP_CPUID_ENTRY_EAX_IN      0
%define SNP_CPUID_ENTRY_ECX_IN      4
%define SNP_CPUID_ENTRY_EAX        24
%define SNP_CPUID_ENTRY_EBX        28
%define SNP_CPUID_ENTRY_ECX        32
%define SNP_CPUID_ENTRY_EDX        36


%define SEV_GHCB_MSR                0xc0010130
%define SEV_STATUS_MSR              0xc0010131

; The #VC was not for CPUID
%define TERM_VC_NOT_CPUID           1

; The unexpected response code
%define TERM_UNEXPECTED_RESP_CODE   2

%define PAGE_PRESENT            0x01
%define PAGE_READ_WRITE         0x02
%define PAGE_USER_SUPERVISOR    0x04
%define PAGE_WRITE_THROUGH      0x08
%define PAGE_CACHE_DISABLE     0x010
%define PAGE_ACCESSED          0x020
%define PAGE_DIRTY             0x040
%define PAGE_PAT               0x080
%define PAGE_GLOBAL           0x0100
%define PAGE_2M_MBO            0x080
%define PAGE_2M_PAT          0x01000

%define PAGE_4K_PDE_ATTR (PAGE_ACCESSED + \
                          PAGE_DIRTY + \
                          PAGE_READ_WRITE + \
                          PAGE_PRESENT)

%define PAGE_PDP_ATTR (PAGE_ACCESSED + \
                       PAGE_READ_WRITE + \
                       PAGE_PRESENT)


; Macro is used to issue the MSR protocol based VMGEXIT. The caller is
; responsible to populate values in the EDX:EAX registers. After the vmmcall
; returns, it verifies that the response code matches with the expected
; code. If it does not match then terminate the guest. The result of request
; is returned in the EDX:EAX.
;
; args 1:Request code, 2: Response code
%macro VmgExit 2
    ;
    ; Add request code:
    ;   GHCB_MSR[11:0]  = Request code
    or      eax, %1

    mov     ecx, SEV_GHCB_MSR
    wrmsr

    ; Issue VMGEXIT - NASM doesn't support the vmmcall instruction in 32-bit
    ; mode, so work around this by temporarily switching to 64-bit mode.
    ;
BITS    64
    rep     vmmcall
BITS    32

    mov     ecx, SEV_GHCB_MSR
    rdmsr

    ;
    ; Verify the reponse code, if it does not match then request to terminate
    ;   GHCB_MSR[11:0]  = Response code
    mov     ecx, eax
    and     ecx, 0xfff
    cmp     ecx, %2
    jne     SevEsUnexpectedRespTerminate
%endmacro

; Macro to terminate the guest using the VMGEXIT.
; arg 1: reason code
%macro TerminateVmgExit 1
    mov     eax, %1
    ;
    ; Use VMGEXIT to request termination. At this point the reason code is
    ; located in EAX, so shift it left 16 bits to the proper location.
    ;
    ; EAX[11:0]  => 0x100 - request termination
    ; EAX[15:12] => 0x1   - OVMF
    ; EAX[23:16] => 0xXX  - REASON CODE
    ;
    shl     eax, 16
    or      eax, 0x1100
    xor     edx, edx
    mov     ecx, SEV_GHCB_MSR
    wrmsr
    ;
    ; Issue VMGEXIT - NASM doesn't support the vmmcall instruction in 32-bit
    ; mode, so work around this by temporarily switching to 64-bit mode.
    ;
BITS    64
    rep     vmmcall
BITS    32

    ;
    ; We shouldn't come back from the VMGEXIT, but if we do, just loop.
    ;
%%TerminateHlt:
    hlt
    jmp     %%TerminateHlt
%endmacro

; Terminate the guest due to unexpected response code.
SevEsUnexpectedRespTerminate:
    TerminateVmgExit    TERM_UNEXPECTED_RESP_CODE

%ifdef ARCH_X64

; If SEV-ES is enabled then initialize and make the GHCB page shared
SevClearPageEncMaskForGhcbPage:
    ; Check if SEV-ES is enabled
    mov       ecx, 1
    bt        [SEV_ES_WORK_AREA_STATUS_MSR], ecx
    jnc       SevClearPageEncMaskForGhcbPageExit

    ;
    ; The initial GHCB will live at GHCB_BASE and needs to be un-encrypted.
    ; This requires the 2MB page for this range be broken down into 512 4KB
    ; pages.  All will be marked encrypted, except for the GHCB. Since the
    ; original PMD entry is no longer a leaf entry, remove the encryption
    ; bit when pointing to the PTE page.
    ;
    mov     ecx, (GHCB_BASE >> 21)
    mov     eax, GHCB_PT_ADDR + PAGE_PDP_ATTR
    mov     [ecx * 8 + PT_ADDR (0x2000)], eax
    mov     [ecx * 8 + PT_ADDR (0x2000) + 4], strict dword 0

    ;
    ; Page Table Entries (512 * 4KB entries => 2MB)
    ;
    mov     ecx, 512
pageTableEntries4kLoop:
    mov     eax, ecx
    dec     eax
    shl     eax, 12
    add     eax, GHCB_BASE & 0xFFE0_0000
    add     eax, PAGE_4K_PDE_ATTR
    mov     [ecx * 8 + GHCB_PT_ADDR - 8], eax
    mov     [(ecx * 8 + GHCB_PT_ADDR - 8) + 4], edx
    loop    pageTableEntries4kLoop

    ;
    ; Clear the encryption bit from the GHCB entry
    ;
    mov     ecx, (GHCB_BASE & 0x1F_FFFF) >> 12
    mov     [ecx * 8 + GHCB_PT_ADDR + 4], strict dword 0

SevClearPageEncMaskForGhcbPageExit:
    OneTimeCallRet SevClearPageEncMaskForGhcbPage

; Get the C-bit mask above 31.
; Modified: EDX
;
; The value is returned in the EDX
GetSevCBitMaskAbove31:
    mov       edx, dword[SEV_ES_WORK_AREA_ENC_MASK + 4]
    OneTimeCallRet GetSevCBitMaskAbove31

%endif

; Check if Secure Encrypted Virtualization (SEV) features are enabled.
;
; Register usage is tight in this routine, so multiple calls for the
; same CPUID and MSR data are performed to keep things simple.
;
; Modified:  EAX, EBX, ECX, EDX, ESP
;
; If SEV is enabled then EAX will be at least 32.
; If SEV is disabled then EAX will be zero.
;
CheckSevFeatures:
    ;
    ; Clear the workarea, if SEV is enabled then later part of routine
    ; will populate the workarea fields.
    ;
    mov    ecx, SEV_ES_WORK_AREA_SIZE
    mov    eax, SEV_ES_WORK_AREA
ClearSevEsWorkArea:
    mov    byte [eax], 0
    inc    eax
    loop   ClearSevEsWorkArea

    ;
    ; Set up exception handlers to check for SEV-ES
    ;   Load temporary RAM stack based on PCDs (see SevEsIdtVmmComm for
    ;   stack usage)
    ;   Establish exception handlers
    ;
    mov       esp, SEV_ES_VC_TOP_OF_STACK
    mov       eax, ADDR_OF(Idtr)
    lidt      [cs:eax]

    ; Check if we have a valid (0x8000_001F) CPUID leaf
    ;   CPUID raises a #VC exception if running as an SEV-ES guest
    mov       eax, 0x80000000
    cpuid

    ; This check should fail on Intel or Non SEV AMD CPUs. In future if
    ; Intel CPUs supports this CPUID leaf then we are guranteed to have exact
    ; same bit definition.
    cmp       eax, 0x8000001f
    jl        NoSev

    ; Check for SEV memory encryption feature:
    ; CPUID  Fn8000_001F[EAX] - Bit 1
    ;   CPUID raises a #VC exception if running as an SEV-ES guest
    mov       eax, 0x8000001f
    cpuid
    bt        eax, 1
    jnc       NoSev

    ; Check if SEV memory encryption is enabled
    ;  MSR_0xC0010131 - Bit 0 (SEV enabled)
    mov       ecx, SEV_STATUS_MSR
    rdmsr
    bt        eax, 0
    jnc       NoSev

    ; Set the work area header to indicate that the SEV is enabled
    mov     byte[WORK_AREA_GUEST_TYPE], 1

    ; Save the SevStatus MSR value in the workarea
    mov     [SEV_ES_WORK_AREA_STATUS_MSR], eax
    mov     [SEV_ES_WORK_AREA_STATUS_MSR + 4], edx

    ; Check if SEV-ES is enabled
    ;  MSR_0xC0010131 - Bit 1 (SEV-ES enabled)
    mov       ecx, SEV_STATUS_MSR
    rdmsr
    bt        eax, 1
    jnc       GetSevEncBit

GetSevEncBit:
    ; Get pte bit position to enable memory encryption
    ; CPUID Fn8000_001F[EBX] - Bits 5:0
    ;
    and       ebx, 0x3f
    mov       eax, ebx

    ; The encryption bit position is always above 31
    sub       ebx, 32
    jns       SevSaveMask

    ; Encryption bit was reported as 31 or below, enter a HLT loop
SevEncBitLowHlt:
    cli
    hlt
    jmp       SevEncBitLowHlt

SevSaveMask:
    xor       edx, edx
    bts       edx, ebx

    mov       dword[SEV_ES_WORK_AREA_ENC_MASK], 0
    mov       dword[SEV_ES_WORK_AREA_ENC_MASK + 4], edx
    jmp       SevExit

NoSev:
    ;
    ; Perform an SEV-ES sanity check by seeing if a #VC exception occurred.
    ;
    ; If SEV-ES is enabled, the CPUID instruction will trigger a #VC exception
    ; where the RECEIVED_VC offset in the workarea will be set to one.
    ;
    cmp       byte[SEV_ES_WORK_AREA_RECEIVED_VC], 0
    jz        NoSevPass

    ;
    ; A #VC was received, yet CPUID indicates no SEV-ES support, something
    ; isn't right.
    ;
NoSevEsVcHlt:
    cli
    hlt
    jmp       NoSevEsVcHlt

NoSevPass:
    xor       eax, eax

SevExit:
    ;
    ; Clear exception handlers and stack
    ;
    push      eax
    mov       eax, ADDR_OF(IdtrClear)
    lidt      [cs:eax]
    pop       eax
    mov       esp, 0

    OneTimeCallRet CheckSevFeatures

; Start of #VC exception handling routines
;

SevEsIdtNotCpuid:
    TerminateVmgExit TERM_VC_NOT_CPUID
    iret

; Use the SNP CPUID page to handle the cpuid lookup
;
;  Modified: EAX, EBX, ECX, EDX
;
;  Relies on the stack setup/usage in #VC handler:
;
;    On entry,
;      [esp + VC_CPUID_FUNCTION] contains EAX input to cpuid instruction
;
;    On return, stores corresponding results of CPUID lookup in:
;      [esp + VC_CPUID_RESULT_EAX]
;      [esp + VC_CPUID_RESULT_EBX]
;      [esp + VC_CPUID_RESULT_ECX]
;      [esp + VC_CPUID_RESULT_EDX]
;
SnpCpuidLookup:
    mov     eax, [esp + VC_CPUID_FUNCTION]
    mov     ebx, [CPUID_BASE + SNP_CPUID_COUNT]
    mov     ecx, CPUID_BASE + SNP_CPUID_ENTRY
    ; Zero these out now so we can simply return if lookup fails
    mov     dword[esp + VC_CPUID_RESULT_EAX], 0
    mov     dword[esp + VC_CPUID_RESULT_EBX], 0
    mov     dword[esp + VC_CPUID_RESULT_ECX], 0
    mov     dword[esp + VC_CPUID_RESULT_EDX], 0

SnpCpuidCheckEntry:
    cmp     ebx, 0
    je      VmmDoneSnpCpuid
    cmp     dword[ecx + SNP_CPUID_ENTRY_EAX_IN], eax
    jne     SnpCpuidCheckEntryNext
    ; As with SEV-ES handler we assume requested CPUID sub-leaf/index is 0
    cmp     dword[ecx + SNP_CPUID_ENTRY_ECX_IN], 0
    je      SnpCpuidEntryFound

SnpCpuidCheckEntryNext:
    dec     ebx
    add     ecx, SNP_CPUID_ENTRY_SZ
    jmp     SnpCpuidCheckEntry

SnpCpuidEntryFound:
    mov     eax, [ecx + SNP_CPUID_ENTRY_EAX]
    mov     [esp + VC_CPUID_RESULT_EAX], eax
    mov     eax, [ecx + SNP_CPUID_ENTRY_EBX]
    mov     [esp + VC_CPUID_RESULT_EBX], eax
    mov     eax, [ecx + SNP_CPUID_ENTRY_ECX]
    mov     [esp + VC_CPUID_RESULT_ECX], eax
    mov     eax, [ecx + SNP_CPUID_ENTRY_EDX]
    mov     [esp + VC_CPUID_RESULT_EDX], eax
    jmp     VmmDoneSnpCpuid

;
; Total stack usage for the #VC handler is 44 bytes:
;   - 12 bytes for the exception IRET (after popping error code)
;   - 32 bytes for the local variables.
;
SevEsIdtVmmComm:
    ;
    ; If we're here, then we are an SEV-ES guest and this
    ; was triggered by a CPUID instruction
    ;
    ; Set the recievedVc field in the workarea to communicate that
    ; a #VC was taken.
    mov     byte[SEV_ES_WORK_AREA_RECEIVED_VC], 1

    pop     ecx                     ; Error code
    cmp     ecx, 0x72               ; Be sure it was CPUID
    jne     SevEsIdtNotCpuid

    ; Set up local variable room on the stack
    ;   CPUID function         : + 28
    ;   CPUID request register : + 24
    ;   GHCB MSR (EAX)         : + 20
    ;   GHCB MSR (EDX)         : + 16
    ;   CPUID result (EDX)     : + 12
    ;   CPUID result (ECX)     : + 8
    ;   CPUID result (EBX)     : + 4
    ;   CPUID result (EAX)     : + 0
    sub     esp, VC_VARIABLE_SIZE

    ; Save the CPUID function being requested
    mov     [esp + VC_CPUID_FUNCTION], eax

    ; If SEV-SNP is enabled, use the CPUID page to handle the CPUID
    ; instruction.
    mov     ecx, SEV_STATUS_MSR
    rdmsr
    bt      eax, 2
    jc      SnpCpuidLookup

    ; The GHCB CPUID protocol uses the following mapping to request
    ; a specific register:
    ;   0 => EAX, 1 => EBX, 2 => ECX, 3 => EDX
    ;
    ; Set EAX as the first register to request. This will also be used as a
    ; loop variable to request all register values (EAX to EDX).
    xor     eax, eax
    mov     [esp + VC_CPUID_REQUEST_REGISTER], eax

    ; Save current GHCB MSR value
    mov     ecx, SEV_GHCB_MSR
    rdmsr
    mov     [esp + VC_GHCB_MSR_EAX], eax
    mov     [esp + VC_GHCB_MSR_EDX], edx

NextReg:
    ;
    ; Setup GHCB MSR
    ;   GHCB_MSR[63:32] = CPUID function
    ;   GHCB_MSR[31:30] = CPUID register
    ;   GHCB_MSR[11:0]  = CPUID request protocol
    ;
    mov     eax, [esp + VC_CPUID_REQUEST_REGISTER]
    cmp     eax, 4
    jge     VmmDone

    shl     eax, GHCB_CPUID_REGISTER_SHIFT
    mov     edx, [esp + VC_CPUID_FUNCTION]

    VmgExit GHCB_CPUID_REQUEST, GHCB_CPUID_RESPONSE

    ;
    ; Response GHCB MSR
    ;   GHCB_MSR[63:32] = CPUID register value
    ;   GHCB_MSR[31:30] = CPUID register
    ;   GHCB_MSR[11:0]  = CPUID response protocol
    ;

    ; Save returned value
    shr     eax, GHCB_CPUID_REGISTER_SHIFT
    mov     [esp + eax * 4], edx

    ; Next register
    inc     word [esp + VC_CPUID_REQUEST_REGISTER]

    jmp     NextReg

VmmDone:
    ;
    ; At this point we have all CPUID register values. Restore the GHCB MSR,
    ; set the return register values and return.
    ;
    mov     eax, [esp + VC_GHCB_MSR_EAX]
    mov     edx, [esp + VC_GHCB_MSR_EDX]
    mov     ecx, SEV_GHCB_MSR
    wrmsr

VmmDoneSnpCpuid:
    mov     eax, [esp + VC_CPUID_RESULT_EAX]
    mov     ebx, [esp + VC_CPUID_RESULT_EBX]
    mov     ecx, [esp + VC_CPUID_RESULT_ECX]
    mov     edx, [esp + VC_CPUID_RESULT_EDX]

    add     esp, VC_VARIABLE_SIZE

    ; Update the EIP value to skip over the now handled CPUID instruction
    ; (the CPUID instruction has a length of 2)
    add     word [esp], CPUID_INSN_LEN
    iret

ALIGN   2

Idtr:
    dw      IDT_END - IDT_BASE - 1  ; Limit
    dd      ADDR_OF(IDT_BASE)       ; Base

IdtrClear:
    dw      0                       ; Limit
    dd      0                       ; Base

ALIGN   16

;
; The Interrupt Descriptor Table (IDT)
;   This will be used to determine if SEV-ES is enabled.  Upon execution
;   of the CPUID instruction, a VMM Communication Exception will occur.
;   This will tell us if SEV-ES is enabled.  We can use the current value
;   of the GHCB MSR to determine the SEV attributes.
;
IDT_BASE:
;
; Vectors 0 - 28 (No handlers)
;
%rep 29
    dw      0                                    ; Offset low bits 15..0
    dw      0x10                                 ; Selector
    db      0                                    ; Reserved
    db      0x8E                                 ; Gate Type (IA32_IDT_GATE_TYPE_INTERRUPT_32)
    dw      0                                    ; Offset high bits 31..16
%endrep
;
; Vector 29 (VMM Communication Exception)
;
    dw      (ADDR_OF(SevEsIdtVmmComm) & 0xffff)  ; Offset low bits 15..0
    dw      0x10                                 ; Selector
    db      0                                    ; Reserved
    db      0x8E                                 ; Gate Type (IA32_IDT_GATE_TYPE_INTERRUPT_32)
    dw      (ADDR_OF(SevEsIdtVmmComm) >> 16)     ; Offset high bits 31..16
;
; Vectors 30 - 31 (No handlers)
;
%rep 2
    dw      0                                    ; Offset low bits 15..0
    dw      0x10                                 ; Selector
    db      0                                    ; Reserved
    db      0x8E                                 ; Gate Type (IA32_IDT_GATE_TYPE_INTERRUPT_32)
    dw      0                                    ; Offset high bits 31..16
%endrep
IDT_END:


;------------------------------------------------------------------------------
; @file
; Transition from 16 bit real mode into 32 bit flat protected mode
;
; Copyright (c) 2008 - 2022, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%define SEC_DEFAULT_CR0  0x00000023
%define SEC_DEFAULT_CR4  0x640

BITS    16

;
; Modified:  EAX, EBX
;
; @param[out]     DS       Selector allowing flat access to all addresses
; @param[out]     ES       Selector allowing flat access to all addresses
; @param[out]     FS       Selector allowing flat access to all addresses
; @param[out]     GS       Selector allowing flat access to all addresses
; @param[out]     SS       Selector allowing flat access to all addresses
;
TransitionFromReal16To32BitFlat:

    debugShowPostCode POSTCODE_16BIT_MODE

    cli

    mov     bx, 0xf000
    mov     ds, bx

    mov     bx, ADDR16_OF(gdtr)

o32 lgdt    [cs:bx]

    mov     eax, SEC_DEFAULT_CR0
    mov     cr0, eax

    jmp     LINEAR_CODE_SEL:dword ADDR_OF(jumpTo32BitAndLandHere)
BITS    32
jumpTo32BitAndLandHere:

    mov     eax, SEC_DEFAULT_CR4
    mov     cr4, eax

    debugShowPostCode POSTCODE_32BIT_MODE

    mov     ax, LINEAR_SEL
    mov     ds, ax
    mov     es, ax
    mov     fs, ax
    mov     gs, ax
    mov     ss, ax

    OneTimeCallRet TransitionFromReal16To32BitFlat

ALIGN   2

gdtr:
    dw      GDT_END - GDT_BASE - 1   ; GDT limit
    dd      ADDR_OF(GDT_BASE)

ALIGN   16

;
; Macros for GDT entries
;

%define  PRESENT_FLAG(p) (p << 7)
%define  DPL(dpl) (dpl << 5)
%define  SYSTEM_FLAG(s) (s << 4)
%define  DESC_TYPE(t) (t)

; Type: data, expand-up, writable, accessed
%define  DATA32_TYPE 3

; Type: execute, readable, expand-up, accessed
%define  CODE32_TYPE 0xb

; Type: execute, readable, expand-up, accessed
%define  CODE64_TYPE 0xb

%define  GRANULARITY_FLAG(g) (g << 7)
%define  DEFAULT_SIZE32(d) (d << 6)
%define  CODE64_FLAG(l) (l << 5)
%define  UPPER_LIMIT(l) (l)

;
; The Global Descriptor Table (GDT)
;

GDT_BASE:
; null descriptor
NULL_SEL            equ $-GDT_BASE    ; Selector [0x0]
    DW      0            ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      0            ; sys flag, dpl, type
    DB      0            ; limit 19:16, flags
    DB      0            ; base 31:24

; Spare segment descriptor
SPARE1_SEL          equ $-GDT_BASE    ; Selector [0x8]
    DW      0            ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      0            ; sys flag, dpl, type
    DB      0            ; limit 19:16, flags
    DB      0            ; base 31:24

; linear code segment descriptor
LINEAR_CODE_SEL     equ $-GDT_BASE    ; Selector [0x10]
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(CODE32_TYPE)           ; 09Bh
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(1)|CODE64_FLAG(0)|UPPER_LIMIT(0xf)  ; 0CFh
    DB      0            ; base 31:24

; linear data segment descriptor
LINEAR_SEL          equ $-GDT_BASE    ; Selector [0x18]
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(DATA32_TYPE)           ; 093h
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(1)|CODE64_FLAG(0)|UPPER_LIMIT(0xf)  ; 0CFh
    DB      0            ; base 31:24

; Spare segment descriptor
SPARE2_SEL          equ $-GDT_BASE    ; Selector [0x20]
    DW      0            ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      0            ; sys flag, dpl, type
    DB      0            ; limit 19:16, flags
    DB      0            ; base 31:24

; linear code (16-bit) segment descriptor
LINEAR_CODE16_SEL   equ $-GDT_BASE    ; Selector [0x28]
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(CODE32_TYPE)           ; 09Bh
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(0)|CODE64_FLAG(0)|UPPER_LIMIT(0xf)  ; 08Fh
    DB      0            ; base 31:24

; linear data (16-bit) segment descriptor
LINEAR_DATA16_SEL   equ $-GDT_BASE    ; Selector [0x30]
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(DATA32_TYPE)           ; 093h
    DB      0
    DB      0            ; base 31:24

; linear code (64-bit) segment descriptor
LINEAR_CODE64_SEL   equ $-GDT_BASE    ; Selector [0x38]
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(CODE64_TYPE)           ; 09Bh
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(0)|CODE64_FLAG(1)|UPPER_LIMIT(0xf)  ; 0AFh
    DB      0            ; base 31:24

GDT_END:


;------------------------------------------------------------------------------
; @file
; 16-bit initialization code
;
; Copyright (c) 2008 - 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------


BITS    16

;
; @param[out] DI    'BP' to indicate boot-strap processor
;
EarlyBspInitReal16:
    mov     di, 'BP'
    jmp     short Main16

;
; Modified:  EAX
;
; @param[in]  EAX   Initial value of the EAX register (BIST: Built-in Self Test)
; @param[out] ESP   Initial value of the EAX register (BIST: Built-in Self Test)
;
EarlyInit16:
    ;
    ; ESP -  Initial value of the EAX register (BIST: Built-in Self Test)
    ;
    mov     esp, eax

    debugInitialize

    OneTimeCallRet EarlyInit16



;------------------------------------------------------------------------------
; @file
; Main routine of the pre-SEC code up through the jump into SEC
;
; Copyright (c) 2008 - 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------


BITS    16

;
; Modified:  EBX, ECX, EDX, EBP
;
; @param[in,out]  RAX/EAX  Initial value of the EAX register
;                          (BIST: Built-in Self Test)
; @param[in,out]  DI       'BP': boot-strap processor, or
;                          'AP': application processor
; @param[out]     RBP/EBP  Address of Boot Firmware Volume (BFV)
; @param[out]     DS       Selector allowing flat access to all addresses
; @param[out]     ES       Selector allowing flat access to all addresses
; @param[out]     FS       Selector allowing flat access to all addresses
; @param[out]     GS       Selector allowing flat access to all addresses
; @param[out]     SS       Selector allowing flat access to all addresses
;
; @return         None  This routine jumps to SEC and does not return
;
Main16:
    OneTimeCall EarlyInit16

    ;
    ; Transition the processor from 16-bit real mode to 32-bit flat mode
    ;
    OneTimeCall TransitionFromReal16To32BitFlat

BITS    32

    ; Clear the WorkArea header. The SEV probe routines will populate the
    ; work area when detected.
    mov     byte[WORK_AREA_GUEST_TYPE], 0

%ifdef ARCH_X64

    jmp SearchBfv

;
; Entry point of Main32
;
Main32:
    OneTimeCall InitTdx

SearchBfv:

%endif

    ;
    ; Search for the Boot Firmware Volume (BFV)
    ;
    OneTimeCall Flat32SearchForBfvBase

    ;
    ; EBP - Start of BFV
    ;

    ;
    ; Search for the SEC entry point
    ;
    OneTimeCall Flat32SearchForSecEntryPoint

    ;
    ; ESI - SEC Core entry point
    ; EBP - Start of BFV
    ;

%ifdef ARCH_IA32

    ;
    ; SEV support can be built and run using the Ia32/X64 split environment.
    ; Set the OVMF/SEV work area as appropriate.
    ;
    OneTimeCall CheckSevFeatures

    ;
    ; Restore initial EAX value into the EAX register
    ;
    mov     eax, esp

    ;
    ; Jump to the 32-bit SEC entry point
    ;
    jmp     esi

%else

    ;
    ; Transition the processor from 32-bit flat mode to 64-bit flat mode
    ;
    OneTimeCall Transition32FlatTo64Flat

BITS    64

    ;
    ; Some values were calculated in 32-bit mode.  Make sure the upper
    ; 32-bits of 64-bit registers are zero for these values.
    ;
    mov     rax, 0x00000000ffffffff
    and     rsi, rax
    and     rbp, rax
    and     rsp, rax

    ;
    ; RSI - SEC Core entry point
    ; RBP - Start of BFV
    ;

    ;
    ; Restore initial EAX value into the RAX register
    ;
    mov     rax, rsp

    ;
    ; Jump to the 64-bit SEC entry point
    ;
    jmp     rsi

%endif


  %define SEV_ES_AP_RESET_IP  FixedPcdGet32 (PcdSevEsWorkAreaBase)
  %define SEV_LAUNCH_SECRET_BASE  FixedPcdGet32 (PcdSevLaunchSecretBase)
  %define SEV_LAUNCH_SECRET_SIZE  FixedPcdGet32 (PcdSevLaunchSecretSize)
  %define SEV_FW_HASH_BLOCK_BASE  FixedPcdGet32 (PcdQemuHashTableBase)
  %define SEV_FW_HASH_BLOCK_SIZE  FixedPcdGet32 (PcdQemuHashTableSize)
;------------------------------------------------------------------------------
; @file
; First code executed by processor after resetting.
; Derived from UefiCpuPkg/ResetVector/Vtf0/Ia16/ResetVectorVtf0.asm
;
; Copyright (c) 2008 - 2014, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    16

ALIGN   16

;
; Pad the image size to 4k when page tables are in VTF0
;
; If the VTF0 image has page tables built in, then we need to make
; sure the end of VTF0 is 4k above where the page tables end.
;
; This is required so the page tables will be 4k aligned when VTF0 is
; located just below 0x100000000 (4GB) in the firmware device.
;
%ifdef ALIGN_TOP_TO_4K_FOR_PAGING
    TIMES (0x1000 - ($ - EndOfPageTables) - 0x20) DB 0
%endif

;
; Padding to ensure first guid starts at 0xffffffd0
;
TIMES (15 - ((guidedStructureEnd - guidedStructureStart + 15) % 16)) DB 0

; GUIDed structure.  To traverse this you should first verify the
; presence of the table footer guid
; (96b582de-1fb2-45f7-baea-a366c55a082d) at 0xffffffd0.  If that
; is found, the two bytes at 0xffffffce are the entire table length.
;
; The table is composed of structures with the form:
;
; Data (arbitrary bytes identified by guid)
; length from start of data to end of guid (2 bytes)
; guid (16 bytes)
;
; so work back from the footer using the length to traverse until you
; either find the guid you're looking for or run off the beginning of
; the table.
;
guidedStructureStart:

%ifdef ARCH_X64
;
; TDX Metadata offset block
;
; TdxMetadata.asm is included in ARCH_X64 because Inte TDX is only
; available in ARCH_X64. Below block describes the offset of
; TdxMetadata block in Ovmf image
;
; GUID : e47a6535-984a-4798-865e-4685a7bf8ec2
;
tdxMetadataOffsetStart:
    DD      fourGigabytes - TdxMetadataGuid - 16
    DW      tdxMetadataOffsetEnd - tdxMetadataOffsetStart
    DB      0x35, 0x65, 0x7a, 0xe4, 0x4a, 0x98, 0x98, 0x47
    DB      0x86, 0x5e, 0x46, 0x85, 0xa7, 0xbf, 0x8e, 0xc2
tdxMetadataOffsetEnd:

;
; SEV metadata descriptor
;
; Provide the start offset of the metadata blob within the OVMF binary.

; GUID : dc886566-984a-4798-A75e-5585a7bf67cc
;
OvmfSevMetadataOffsetStart:
  DD      (fourGigabytes - OvmfSevMetadataGuid)
  DW      OvmfSevMetadataOffsetEnd - OvmfSevMetadataOffsetStart
  DB      0x66, 0x65, 0x88, 0xdc, 0x4a, 0x98, 0x98, 0x47
  DB      0xA7, 0x5e, 0x55, 0x85, 0xa7, 0xbf, 0x67, 0xcc
OvmfSevMetadataOffsetEnd:

%endif

; SEV Hash Table Block
;
; This describes the guest ram area where the hypervisor should
; install a table describing the hashes of certain firmware configuration
; device files that would otherwise be passed in unchecked.  The current
; use is for the kernel, initrd and command line values, but others may be
; added.  The data format is:
;
; base physical address (32 bit word)
; table length (32 bit word)
;
; GUID (SEV FW config hash block): 7255371f-3a3b-4b04-927b-1da6efa8d454
;
sevFwHashBlockStart:
    DD      SEV_FW_HASH_BLOCK_BASE
    DD      SEV_FW_HASH_BLOCK_SIZE
    DW      sevFwHashBlockEnd - sevFwHashBlockStart
    DB      0x1f, 0x37, 0x55, 0x72, 0x3b, 0x3a, 0x04, 0x4b
    DB      0x92, 0x7b, 0x1d, 0xa6, 0xef, 0xa8, 0xd4, 0x54
sevFwHashBlockEnd:

; SEV Secret block
;
; This describes the guest ram area where the hypervisor should
; inject the secret.  The data format is:
;
; base physical address (32 bit word)
; table length (32 bit word)
;
; GUID (SEV secret block): 4c2eb361-7d9b-4cc3-8081-127c90d3d294
;
sevSecretBlockStart:
    DD      SEV_LAUNCH_SECRET_BASE
    DD      SEV_LAUNCH_SECRET_SIZE
    DW      sevSecretBlockEnd - sevSecretBlockStart
    DB      0x61, 0xB3, 0x2E, 0x4C, 0x9B, 0x7D, 0xC3, 0x4C
    DB      0x80, 0x81, 0x12, 0x7C, 0x90, 0xD3, 0xD2, 0x94
sevSecretBlockEnd:

;
; SEV-ES Processor Reset support
;
; sevEsResetBlock:
;   For the initial boot of an AP under SEV-ES, the "reset" RIP must be
;   programmed to the RAM area defined by SEV_ES_AP_RESET_IP. The data
;   format is:
;
;   IP value [0:15]
;   CS segment base [31:16]
;
;   GUID (SEV-ES reset block): 00f771de-1a7e-4fcb-890e-68c77e2fb44e
;
;   A hypervisor reads the CS segement base and IP value. The CS segment base
;   value represents the high order 16-bits of the CS segment base, so the
;   hypervisor must left shift the value of the CS segement base by 16 bits to
;   form the full CS segment base for the CS segment register. It would then
;   program the EIP register with the IP value as read.
;

sevEsResetBlockStart:
    DD      SEV_ES_AP_RESET_IP
    DW      sevEsResetBlockEnd - sevEsResetBlockStart
    DB      0xDE, 0x71, 0xF7, 0x00, 0x7E, 0x1A, 0xCB, 0x4F
    DB      0x89, 0x0E, 0x68, 0xC7, 0x7E, 0x2F, 0xB4, 0x4E
sevEsResetBlockEnd:

;
; Table footer:
;
; length of whole table (16 bit word)
; GUID (table footer): 96b582de-1fb2-45f7-baea-a366c55a082d
;
    DW      guidedStructureEnd - guidedStructureStart
    DB      0xDE, 0x82, 0xB5, 0x96, 0xB2, 0x1F, 0xF7, 0x45
    DB      0xBA, 0xEA, 0xA3, 0x66, 0xC5, 0x5A, 0x08, 0x2D

guidedStructureEnd:

ALIGN   16

;
; 0xffffffe0
;
    DD      0, 0, 0

;
; The VTF signature (0xffffffec)
;
; VTF-0 means that the VTF (Volume Top File) code does not require
; any fixups.
;
vtfSignature:
    DB      'V', 'T', 'F', 0

ALIGN   16

resetVector:
;
; Reset Vector
;
; This is where the processor will begin execution
;
; In IA32 we follow the standard reset vector flow. While in X64, Td guest
; may be supported. Td guest requires the startup mode to be 32-bit
; protected mode but the legacy VM startup mode is 16-bit real mode.
; To make NASM generate such shared entry code that behaves correctly in
; both 16-bit and 32-bit mode, more BITS directives are added.
;
%ifdef ARCH_IA32
    nop
    nop
    jmp     EarlyBspInitReal16

%else

    mov     eax, cr0
    test    al, 1
    jz      .Real
BITS 32
    jmp     Main32
BITS 16
.Real:
    jmp     EarlyBspInitReal16

%endif

ALIGN   16

fourGigabytes:



