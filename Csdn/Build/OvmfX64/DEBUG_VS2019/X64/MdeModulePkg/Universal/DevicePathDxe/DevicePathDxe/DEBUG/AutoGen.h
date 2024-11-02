/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9B680FCE_AD6B_4F3A_B60B_F59899003443
#define _AUTOGENH_9B680FCE_AD6B_4F3A_B60B_F59899003443

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9B680FCE, 0xAD6B, 0x4F3A, {0xB6, 0x0B, 0xF5, 0x98, 0x99, 0x00, 0x34, 0x43}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;

// Protocols
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDevicePathSupportDevicePathFromText  0U
#define _PCD_SIZE_PcdDevicePathSupportDevicePathFromText 1
#define _PCD_GET_MODE_SIZE_PcdDevicePathSupportDevicePathFromText  _PCD_SIZE_PcdDevicePathSupportDevicePathFromText 
#define _PCD_VALUE_PcdDevicePathSupportDevicePathFromText  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDevicePathSupportDevicePathFromText;
#define _PCD_GET_MODE_BOOL_PcdDevicePathSupportDevicePathFromText  _gPcd_FixedAtBuild_PcdDevicePathSupportDevicePathFromText
//#define _PCD_SET_MODE_BOOL_PcdDevicePathSupportDevicePathFromText  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDevicePathSupportDevicePathToText  0U
#define _PCD_SIZE_PcdDevicePathSupportDevicePathToText 1
#define _PCD_GET_MODE_SIZE_PcdDevicePathSupportDevicePathToText  _PCD_SIZE_PcdDevicePathSupportDevicePathToText 
#define _PCD_VALUE_PcdDevicePathSupportDevicePathToText  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDevicePathSupportDevicePathToText;
#define _PCD_GET_MODE_BOOL_PcdDevicePathSupportDevicePathToText  _gPcd_FixedAtBuild_PcdDevicePathSupportDevicePathToText
//#define _PCD_SET_MODE_BOOL_PcdDevicePathSupportDevicePathToText  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DevicePathEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
