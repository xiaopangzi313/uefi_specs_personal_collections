#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/PcdLib.h>

EFI_STATUS
EFIAPI
MyHelloWorldPCDEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{ 
  EFI_STATUS  Status = EFI_SUCCESS;
  UINT32  PrintTimes ;
  UINT32  i ;
  CONST CHAR16 *PrintStr; 
  // DEBUG ((EFI_D_ERROR , "[MyHelloWorldPCD] MyHelloWorldPCDEntry Start..\n"));
  Print(L"[MyHelloWorldPCD] MyHelloWorldPCDEntry Start..\n");
  
  if (!FeaturePcdGet(PcdMyHelloWorldPrintEnable)){
	Print (L"[MyHelloWorldPCD] PcdMyHelloWorldPrintEnable ..\n");
	
	PrintTimes = PcdGet32(PcdMyHelloWorldPrintTimes);
	for (i = 0; i < PrintTimes; i++){
		PrintStr = PcdGetPtr(PcdMyHelloWorldPrintString);
	    Print (L"[MyHelloWorldPCD]  Pcd  Str = %s\n",PrintStr);
	}
  }
  
  // DEBUG ((EFI_D_ERROR , "[MyHelloWorldPCD] MyHelloWorldPCDEntry End..\n"));
  Print(L"[MyHelloWorldPCD] MyHelloWorldPCDEntry End..\n");
 
  return Status;
}
