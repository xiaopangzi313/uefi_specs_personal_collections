#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
MyHelloWorldDXEDriverEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{ 
  EFI_STATUS                              Status = EFI_SUCCESS;
  DEBUG ((EFI_D_ERROR , "MyHelloWorldDXEDriverEntry Start..\n"));
  DEBUG ((EFI_D_ERROR ,"MyHelloWorldDXEDriverEntry End..\n"));
  return Status;
}
