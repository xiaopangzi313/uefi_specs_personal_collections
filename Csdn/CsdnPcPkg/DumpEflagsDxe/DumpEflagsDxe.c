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
  EFI_STATUS     Status = EFI_SUCCESS;
  EFI_TPL         OldTpl;

  IA32_EFLAGS32  EFlags;
  
  OldTpl = gBS->RaiseTPL (TPL_HIGH_LEVEL);

  EFlags.UintN = AsmReadEflags ();
  DEBUG((DEBUG_ERROR,"[PXE][Function:%a]\n",__FUNCTION__));
  DEBUG((DEBUG_ERROR,"[PXE] EFlags.UintN = %x\n",EFlags.UintN));
  DEBUG((DEBUG_ERROR,"[PXE] EFlags.Bits.IF = %x Tpl: %x\n",EFlags.Bits.IF, OldTpl));

 
  EnableInterrupts ();

  EFlags.UintN = 0x0;
  EFlags.UintN = AsmReadEflags ();
  DEBUG((DEBUG_ERROR,"[PXE][After] [Function:%a] Enable IF by STI \n",__FUNCTION__));
  DEBUG((DEBUG_ERROR,"[PXE][After] EFlags.UintN = %x\n",EFlags.UintN));
  DEBUG((DEBUG_ERROR,"[PXE][After] EFlags.Bits.IF = %x Tpl: %x\n",EFlags.Bits.IF, OldTpl));
  
  gBS->RestoreTPL (OldTpl);

  return Status;
}
