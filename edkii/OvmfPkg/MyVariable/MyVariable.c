#include <uefi.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/PcdLib.h>


//ShellCEntryLib call user interface ShellAppMain
EFI_STATUS
EFIAPI
MyHVariableAppEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{
  EFI_STATUS                         Status = EFI_SUCCESS;
  UINTN                              DataSize;
  UINT64                             CSDNEnable = 1;
  EFI_GUID  gEfiCsdnEnableGuid = { 0xb71604d2, 0xb8ba, 0x4d9c, { 0x78, 0x88, 0xac, 0xcf, 0x1d, 0xa2, 0x26, 0xc3 }};

  DataSize = sizeof (CSDNEnable);
  Status = gRT->SetVariable (
                  L"CSDNEnable",
                  &gEfiCsdnEnableGuid,
                  EFI_VARIABLE_NON_VOLATILE |
                  EFI_VARIABLE_BOOTSERVICE_ACCESS |
                  EFI_VARIABLE_RUNTIME_ACCESS,
                  DataSize,
                  &CSDNEnable
                  );

  ASSERT(Status);
  DEBUG ((EFI_D_ERROR," [CSDN]: Setvariable CSDNEnable 0x%x.\n", CSDNEnable));

  CSDNEnable = 0;
  DataSize = sizeof (CSDNEnable);
  Status = gRT->GetVariable (
                L"CSDNEnable",
                &gEfiCsdnEnableGuid,
                NULL,
                &DataSize,
                &CSDNEnable
                );
  ASSERT(Status);

  if (CSDNEnable) {
    DEBUG ((EFI_D_ERROR, "[CSDN] CSDNEnable\n"));
  }

  return EFI_SUCCESS;
}
