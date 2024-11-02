/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_050EB8C6_C12E_4b86_892B_40985E8B3137
#define _AUTOGENH_050EB8C6_C12E_4b86_892B_40985E8B3137

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount 0
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount _PCD_SIZE_PcdMaximumDevicePathNodeCount

EFI_STATUS
EFIAPI
DevicePathLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
