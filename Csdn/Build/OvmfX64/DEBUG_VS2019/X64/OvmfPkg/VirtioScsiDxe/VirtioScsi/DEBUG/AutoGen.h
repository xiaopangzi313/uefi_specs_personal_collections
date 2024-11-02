/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FAB5D4F4_83C0_4AAF_8480_442D11DF6CEA
#define _AUTOGENH_FAB5D4F4_83C0_4AAF_8480_442D11DF6CEA

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xFAB5D4F4, 0x83C0, 0x4AAF, {0x84, 0x80, 0x44, 0x2D, 0x11, 0xDF, 0x6C, 0xEA}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
extern EFI_GUID gEfiExtScsiPassThruProtocolGuid;
extern EFI_GUID gVirtioDeviceProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVirtioScsiMaxTargetLimit  0U
#define _PCD_SIZE_PcdVirtioScsiMaxTargetLimit 2
#define _PCD_GET_MODE_SIZE_PcdVirtioScsiMaxTargetLimit  _PCD_SIZE_PcdVirtioScsiMaxTargetLimit 
#define _PCD_VALUE_PcdVirtioScsiMaxTargetLimit  31U
extern const  UINT16  _gPcd_FixedAtBuild_PcdVirtioScsiMaxTargetLimit;
#define _PCD_GET_MODE_16_PcdVirtioScsiMaxTargetLimit  _gPcd_FixedAtBuild_PcdVirtioScsiMaxTargetLimit
//#define _PCD_SET_MODE_16_PcdVirtioScsiMaxTargetLimit  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVirtioScsiMaxLunLimit  0U
#define _PCD_SIZE_PcdVirtioScsiMaxLunLimit 4
#define _PCD_GET_MODE_SIZE_PcdVirtioScsiMaxLunLimit  _PCD_SIZE_PcdVirtioScsiMaxLunLimit 
#define _PCD_VALUE_PcdVirtioScsiMaxLunLimit  7U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVirtioScsiMaxLunLimit;
#define _PCD_GET_MODE_32_PcdVirtioScsiMaxLunLimit  _gPcd_FixedAtBuild_PcdVirtioScsiMaxLunLimit
//#define _PCD_SET_MODE_32_PcdVirtioScsiMaxLunLimit  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
VirtioScsiEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
