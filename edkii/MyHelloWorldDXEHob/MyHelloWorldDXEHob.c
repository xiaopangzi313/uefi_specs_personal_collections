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

EFI_STATUS
EFIAPI
MyHelloWorldDXEHobEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{ 
  EFI_STATUS                              Status = EFI_SUCCESS;
  DEBUG ((EFI_D_ERROR , "[MyHelloWorldHob] MyHelloWorldDXEHobEntry Start..\n"));
  
  EFI_PEI_HOB_POINTERS            Hob;
  UINT8 *HobEnd = NULL;
  Hob.Raw   = GetHobList();
  while ((Hob.Raw = GetNextHob (EFI_HOB_TYPE_MEMORY_ALLOCATION, Hob.Raw)) != NULL) {
    //
    // Compare FileGuid both.
    //
    if (CompareGuid (&gMyHelloWorldPEIGUID, &Hob.MemoryAllocation->AllocDescriptor.Name) ) {
	  DEBUG ((EFI_D_ERROR, "[MyHelloWorldHob] MyHelloWorldDXEHobEntry  Guid:0x%x\n",Hob.MemoryAllocation->AllocDescriptor.Name.Data1));
	  HobEnd = (Hob.Raw + sizeof (EFI_HOB_GENERIC_HEADER) + 16);
      DEBUG ((EFI_D_ERROR, "[MyHelloWorldHob] MyHelloWorldDXEHobEntry content:%s\n", (CHAR16 *)HobEnd));
      return EFI_SUCCESS;
    }
    Hob.Raw = GET_NEXT_HOB (Hob);
  }  
  DEBUG ((EFI_D_ERROR , "[MyHelloWorldHob] MyHelloWorldDXEHobEntry End..\n"));
  return Status;
}
