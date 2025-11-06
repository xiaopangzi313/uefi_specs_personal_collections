#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>

/**
  Standard EFI driver entry point

  @param[in] ImageHandle           The firmware allocated handle for the EFI image.
  @param[in] SystemTable           A pointer to the EFI System Table.

  @retval EFI_SUCCESS              The entry point is executed successfully.
  @retval Other                    Some error occurs when executing this entry point.

**/
EFI_STATUS
EFIAPI
InitializeDumpIFforPxe (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{ 
  EFI_STATUS         Status = EFI_SUCCESS;
  EFI_TPL            OldTpl;
  UINTN              Index=0xff;
  EFI_EVENT          myEvents[2] = {0};

  IA32_EFLAGS32  EFlags;
  
  OldTpl = gBS->RaiseTPL (TPL_HIGH_LEVEL);

  EFlags.UintN = AsmReadEflags ();
  DEBUG((DEBUG_ERROR,"[PXE][Function:%a]\n",__FUNCTION__));
  DEBUG((DEBUG_ERROR,"[PXE] EFlags.UintN = %x\n",EFlags.UintN));
  DEBUG((DEBUG_ERROR,"[PXE] EFlags.Bits.IF = %x Tpl: %x\n",EFlags.Bits.IF, OldTpl));

  EnableInterrupts ();
  Status = gBS->SetTimer(myEvents[0],TimerPeriodic , 1 * 1000 * 1000);
  if(EFI_ERROR(Status)){
    DEBUG((DEBUG_ERROR, "[PXE] SetTimer %r ...\n",Status));
    return Status;
  }

  Status = gBS->WaitForEvent(1, myEvents, &Index);
  if(EFI_ERROR(Status)){
    DEBUG((DEBUG_ERROR, "[PXE] WaitForEvent %r ...\n",Status));
    return Status;
  }
  if (Index == 0x0) {
      DEBUG((DEBUG_ERROR, "[PXE]  Timer event is trigered ..\n"));
  } else {
      DEBUG((DEBUG_ERROR, "[PXE]  Timer event is not trigered ..\n"));
  }

  EFlags.UintN = 0x0;
  EFlags.UintN = AsmReadEflags ();
  DEBUG((DEBUG_ERROR,"[PXE][After] [Function:%a] Enable IF by STI \n",__FUNCTION__));
  DEBUG((DEBUG_ERROR,"[PXE][After] EFlags.UintN = %x\n",EFlags.UintN));
  DEBUG((DEBUG_ERROR,"[PXE][After] EFlags.Bits.IF = %x Tpl: %x\n",EFlags.Bits.IF, OldTpl));
  
  gBS->RestoreTPL (OldTpl);

  return Status;
}
