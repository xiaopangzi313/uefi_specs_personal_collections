#include <uefi.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/PeimEntryPoint.h>
#include <Library/PeiServicesLib.h>
#include <Library/PeiServicesTablePointerLib.h>
#include <Pi/PiHob.h>

EFI_GUID gMyHelloWorldPEIGUID = { 0xbdb38129, 0x4d65, 0x39f4, { 0x72, 0x12, 0x68, 0xcf, 0x5a, 0x19, 0xa, 0xf8 }};


typedef EFI_STATUS (EFIAPI * PRINTMSG)(CHAR16 *Msg);
typedef struct _EFI_HELLOWORLD_PROTOCOL  {
	PRINTMSG PrintMsg;
}EFI_HELLOWORLD_PROTOCOL;

//ShellCEntryLib call user interface ShellAppMain
EFI_STATUS
EFIAPI
MyHelloWorldLocatePPIEntry(
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
)
{
  EFI_STATUS  Status = EFI_SUCCESS;
  EFI_HELLOWORLD_PROTOCOL *mHelloWorldPpi = NULL;
  DEBUG ((EFI_D_ERROR, "[MyHelloWorldPPI] MyHelloWorldLocatePPIEntry Locate PPI Start..\n"));
  Status = PeiServicesLocatePpi (
           &gMyHelloWorldPEIGUID,
           0,
           NULL,
           (VOID **)&mHelloWorldPpi
           );
  if (EFI_ERROR(Status)){
	  DEBUG ((EFI_D_ERROR, "[MyHelloWorldPPI] MyHelloWorldLocatePPIEntry Locate PPI Fail..%r\n",Status));
	  return Status;
  }
  mHelloWorldPpi->PrintMsg(L"2019 CSDN Locate PPI Hello World ...\n");
  DEBUG ((EFI_D_ERROR, "[MyHelloWorldPPI] MyHelloWorldLocatePPIEntry Locate PPI End..\n"));
  return Status;
}
