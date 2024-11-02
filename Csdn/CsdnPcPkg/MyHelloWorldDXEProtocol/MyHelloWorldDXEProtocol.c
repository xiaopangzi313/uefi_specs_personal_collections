#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Pi/PiBootMode.h>
#include <Pi/PiHob.h>
#include <Library/HobLib.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_GUID gMyHelloWorldPEIGUID = { 0xbdb38129, 0x4d65, 0x39f4, { 0x72, 0x12, 0x68, 0xcf, 0x5a, 0x19, 0xa, 0xf8 }};
typedef struct _EFI_MYHELLOWORLD_PROTOCOL  EFI_MYHELLOWORLD_PROTOCOL;
typedef EFI_STATUS (EFIAPI *EFI_PRINT_MSG)( EFI_MYHELLOWORLD_PROTOCOL  *This,IN CHAR16 *Msg);
struct _EFI_MYHELLOWORLD_PROTOCOL {
	UINT64 Revision;
	EFI_PRINT_MSG PrintMsg;
};

EFI_STATUS EFIAPI 
PrintHelloWorldMsg(IN EFI_MYHELLOWORLD_PROTOCOL  *This,  IN CHAR16 *Msg){
	EFI_STATUS Status = EFI_SUCCESS;
	DEBUG ((EFI_D_ERROR, "[MyHelloWorldProtocol] PrintHelloWorldMsg %s..\n",Msg));
	Print ((EFI_D_ERROR, "[MyHelloWorldProtocol] PrintHelloWorldMsg %s..\n",Msg));
	return Status;
}

static EFI_MYHELLOWORLD_PROTOCOL  gMyHelloWorldProtocol ;

EFI_STATUS
EFIAPI
MyHelloWorldDXEProtocolEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{ 
  EFI_STATUS                              Status = EFI_SUCCESS;
  DEBUG ((EFI_D_ERROR , "[MyHelloWorldProtocol]  MyHelloWorldDXEProtocolEntry Start..\n"));

  gMyHelloWorldProtocol.PrintMsg = PrintHelloWorldMsg;
  gMyHelloWorldProtocol.Revision = 1;
  
  Status = gBS->InstallProtocolInterface(&ImageHandle,
										 &gMyHelloWorldPEIGUID,
										 EFI_NATIVE_INTERFACE,
										 &gMyHelloWorldProtocol
										 );
  if (!EFI_ERROR(Status)){
	DEBUG ((EFI_D_ERROR ,"[MyHelloWorldProtocol] MyHelloWorldDXEProtocolEntry Installed Protocol Successfully..\n"));
  }else{
	DEBUG ((EFI_D_ERROR ,"[MyHelloWorldProtocol] MyHelloWorldDXEProtocolEntry Installed Protocol Failly..\n"));
  }
  
  DEBUG ((EFI_D_ERROR , "[MyHelloWorldProtocol]  MyHelloWorldDXEProtocolEntry End..\n"));
  return Status;
}
