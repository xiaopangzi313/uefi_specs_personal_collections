#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Protocol/Smbios.h>


EFI_STATUS
EFIAPI
MyHelloWorldSmbiosAppEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{ 
  EFI_STATUS  Status = EFI_SUCCESS;

  EFI_SMBIOS_PROTOCOL           *Smbios;
  EFI_SMBIOS_HANDLE             SmbiosHandle;
  EFI_SMBIOS_TABLE_HEADER       *Record;

  DEBUG ((EFI_D_ERROR , "[MyHelloWorldSmbios] MyHelloWorldSmbiosAppEntry Start..\n"));
  


  
  //
  // Find the SMBIOS protocol
  //
  Status = gBS->LocateProtocol (
                  &gEfiSmbiosProtocolGuid,
                  NULL,
                  (VOID**)&Smbios
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }
  
  
  SmbiosHandle = SMBIOS_HANDLE_PI_RESERVED;
  Status = Smbios->GetNext (Smbios, &SmbiosHandle, NULL, &Record, NULL);
  while (!EFI_ERROR(Status)) {
	DEBUG ((EFI_D_ERROR, "[MyHelloWorldSmbios] %d ..\n", Record->Type));
    // if (Record->Type == SMBIOS_TYPE_BIOS_INFORMATION) {
      // Type0Record = (SMBIOS_TABLE_TYPE0 *) Record;
      // StrIndex = Type0Record->BiosVersion;
      // GetOptionalStringByIndex ((CHAR8*)((UINT8*)Type0Record + Type0Record->Hdr.Length), StrIndex, &NewString);

      // FirmwareVersionString = (CHAR16 *) PcdGetPtr (PcdFirmwareVersionString);
      // if (*FirmwareVersionString != 0x0000 ) {
        // FreePool (NewString);
        // NewString = (CHAR16 *) PcdGetPtr (PcdFirmwareVersionString);
        // UiCustomizeFrontPageBanner (3, TRUE, &NewString);
        // HiiSetString (gFrontPagePrivate.HiiHandle, STRING_TOKEN (STR_FRONT_PAGE_BIOS_VERSION), NewString, NULL);
      // } else {
        // UiCustomizeFrontPageBanner (3, TRUE, &NewString);
        // HiiSetString (gFrontPagePrivate.HiiHandle, STRING_TOKEN (STR_FRONT_PAGE_BIOS_VERSION), NewString, NULL);
        // FreePool (NewString);
      // }
    // }
	Status = Smbios->GetNext (Smbios, &SmbiosHandle, NULL, &Record, NULL);
  }

  

  DEBUG ((EFI_D_ERROR, "[MyHelloWorldSmbios] MyHelloWorldSmbiosAppEntry End..\n"));
 
  return Status;
}
