#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Pi/PiBootMode.h>
#include <Pi/PiHob.h>
#include <Library/HobLib.h>
#include <Library/IoLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Protocol/Smbios.h>
#include <Library/MemoryAllocationLib.h>
#include <Protocol/PciRootBridgeIo.h>


EFI_STATUS
EFIAPI
PltformSmbiosEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{ 
  EFI_STATUS                              Status = EFI_SUCCESS;
  DEBUG ((
    EFI_D_ERROR ,
	"[CSDN]  %a Start..\n",
	__FUNCTION__));


  EFI_SMBIOS_PROTOCOL          *Smbios;
  EFI_SMBIOS_HANDLE            SmbiosHandle;
  SMBIOS_TABLE_TYPE9           *Type9;
  UINT64                       Address;
  UINT32                       Data;

  Type9 = AllocateZeroPool (sizeof (SMBIOS_TABLE_TYPE9));
  Type9->Hdr.Handle = SMBIOS_HANDLE_PI_RESERVED;
  Type9->Hdr.Handle = EFI_SMBIOS_TYPE_SYSTEM_SLOTS;
  Type9->Hdr.Length = sizeof (SMBIOS_TABLE_TYPE9);
  Type9->BusNum = 10;
  Type9->SegmentGroupNum = 0;
  Type9->SlotDesignation = 1;
  Type9->SlotLength = 4;
  Type9->SlotCharacteristics1.Provides33Volts = 1;
  Type9->SlotCharacteristics2.PmeSignalSupported = 1;
  Type9->SlotCharacteristics2.SmbusSignalSupported = 1;
  Type9->SlotID= 1;
  Type9->SlotType= 0xB6; //gen3 x16
  Type9->BusNum= 0x11; //bus
  Type9->DevFuncNum=0x28; //dev function

  Address = EFI_PCI_ADDRESS (10, 5, 0, 0);
  Type9->CurrentUsage=0x4;
  Data = MmioRead32 (Address);
  if (Data == 0xffffffff) {
    Type9->CurrentUsage=0x3; 
  }
  
  Status = gBS->LocateProtocol (
                  &gEfiSmbiosProtocolGuid,
                  NULL,
                  (VOID**)&Smbios
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  SmbiosHandle = SMBIOS_HANDLE_PI_RESERVED;
  Status       = Smbios->Add (
                            Smbios,
                            NULL,
                            &SmbiosHandle,
                            (EFI_SMBIOS_TABLE_HEADER *)Type9
                            );
  ASSERT_EFI_ERROR (Status);
  
  FreePool (Type9);

  DEBUG ((
    EFI_D_ERROR ,
	"[CSDN]  %a Exit..\n",
	__FUNCTION__));
  return Status;
}
