#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_GUID gMyHelloWorldPEIGUID = { 0xbdb38129, 0x4d65, 0x39f4, { 0x72, 0x12, 0x68, 0xcf, 0x5a, 0x19, 0xa, 0xf8 }};

typedef struct _EFI_MYHELLOWORLD_PROTOCOL  EFI_MYHELLOWORLD_PROTOCOL;
typedef EFI_STATUS (EFIAPI *EFI_PRINT_MSG)( EFI_MYHELLOWORLD_PROTOCOL  *This,IN CHAR16 *Msg);
struct _EFI_MYHELLOWORLD_PROTOCOL {
	UINT64 Revision;
	EFI_PRINT_MSG PrintMsg;
};

static EFI_MYHELLOWORLD_PROTOCOL * gMyHelloWorldProtocol = NULL;

EFI_STATUS
EFIAPI
MyHelloWorldAppProtocolEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{ 
  EFI_STATUS  Status = EFI_SUCCESS;
  DEBUG ((EFI_D_ERROR , "[MyHelloWorldProtocol] MyHelloWorldAppProtocolEntry Start..\n"));
  Print (L"[MyHelloWorldProtocol]  MyHelloWorldAppProtocolEntry Start..\n");
  
  Status = gBS->LocateProtocol(&gMyHelloWorldPEIGUID,NULL,(VOID **)&gMyHelloWorldProtocol);
  if (EFI_ERROR(Status)){
	 Print(L"[MyHelloWorldProtocol] Locate Protocol gMyHelloWorldProtocol %r \n",Status);
	 return Status;
  }
  gMyHelloWorldProtocol->PrintMsg(gMyHelloWorldProtocol,L"Hello World App.....\n");
  DEBUG ((EFI_D_ERROR, "[MyHelloWorldProtocol] MyHelloWorldAppProtocolEntry End..\n"));
  Print (L"[MyHelloWorldProtocol] MyHelloWorldAppProtocolEntry  End ... \n");
 
  return Status;
}
