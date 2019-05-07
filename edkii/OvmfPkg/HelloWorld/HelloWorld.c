#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>

//ShellCEntryLib call user interface ShellAppMain
EFI_STATUS
EFIAPI
HelloWorldEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{   
  EFI_STATUS  Status = EFI_SUCCESS;
  Print (L"[Console]  HelloWorldEntry Start..\n");
  
  Print (L"[Console]  HelloWorldEntry  End ... \n"); 
  return Status;
}
