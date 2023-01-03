#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Guid/FileInfo.h>
#include <IndustryStandard/Acpi.h>
#include <Protocol/LoadedImage.h>
#include <Library/PrintLib.h>
#include <Guid/Acpi.h>
#include <Library/DebugLib.h> 
#include <Protocol/AcpiTable.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Pi/PiFirmwareFile.h>
#include <Library/DxeServicesLib.h>

EFI_STATUS
EFIAPI
MyHelloWorldInsatllAcpiEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
 )
{

  EFI_STATUS Status = EFI_SUCCESS;  
  EFI_ACPI_TABLE_PROTOCOL        *AcpiTable;
  UINTN                          TableKey;
  EFI_ACPI_DESCRIPTION_HEADER    *Table;
  UINTN                          TableSize;

  
  Status = GetSectionFromFv (
    &gEfiCallerIdGuid,
    EFI_SECTION_RAW,
    0,
    (VOID **) &Table,
    &TableSize
  );
  if (EFI_ERROR (Status)) {
	DEBUG((DEBUG_ERROR, "[CSDN] GetSectionFromFv Fail %r\n", Status));
    return Status;
  }
  DEBUG((DEBUG_ERROR, "[CSDN] GetSectionFromFv Successfully \n"));

  Status = gBS->LocateProtocol (&gEfiAcpiTableProtocolGuid, NULL, (VOID **) &AcpiTable);   
  if (EFI_ERROR (Status)) {
	DEBUG((DEBUG_ERROR, "[CSDN] load gEfiAcpiTableProtocolGuid Fail %r\n", Status));
    return Status;
  }  
  DEBUG((DEBUG_ERROR, "[CSDN] load gEfiAcpiTableProtocolGuid Successfully \n"));
  TableKey = 0;
  CopyMem (Table->OemId, "MCSDN ", sizeof (Table->OemId) );
  Status = AcpiTable->InstallAcpiTable (
                        AcpiTable,
                        Table,
                        TableSize,
                        &TableKey
                        );
  if (EFI_ERROR (Status)) {
	DEBUG((DEBUG_ERROR, "[CSDN]InstallAcpiTable Fail %r\n", Status));
    return Status;
  }
  
  DEBUG((DEBUG_ERROR, "[CSDN]InstallAcpiTable Successfully \n"));
  return Status;
}