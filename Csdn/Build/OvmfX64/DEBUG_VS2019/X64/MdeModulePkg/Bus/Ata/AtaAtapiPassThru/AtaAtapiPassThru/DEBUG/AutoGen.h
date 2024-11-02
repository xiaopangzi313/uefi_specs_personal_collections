/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_5E523CB4_D397_4986_87BD_A6DD8B22F455
#define _AUTOGENH_5E523CB4_D397_4986_87BD_A6DD8B22F455

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x5E523CB4, 0xD397, 0x4986, {0x87, 0xBD, 0xA6, 0xDD, 0x8B, 0x22, 0xF4, 0x55}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiAtaPassThruProtocolGuid;
extern EFI_GUID gEfiExtScsiPassThruProtocolGuid;
extern EFI_GUID gEfiIdeControllerInitProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEdkiiAtaAtapiPolicyProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAtaSmartEnable  0U
#define _PCD_SIZE_PcdAtaSmartEnable 1
#define _PCD_GET_MODE_SIZE_PcdAtaSmartEnable  _PCD_SIZE_PcdAtaSmartEnable 
#define _PCD_VALUE_PcdAtaSmartEnable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdAtaSmartEnable;
#define _PCD_GET_MODE_BOOL_PcdAtaSmartEnable  _gPcd_FixedAtBuild_PcdAtaSmartEnable
//#define _PCD_SET_MODE_BOOL_PcdAtaSmartEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAhciCommandRetryCount  0U
#define _PCD_SIZE_PcdAhciCommandRetryCount 4
#define _PCD_GET_MODE_SIZE_PcdAhciCommandRetryCount  _PCD_SIZE_PcdAhciCommandRetryCount 
#define _PCD_VALUE_PcdAhciCommandRetryCount  5U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAhciCommandRetryCount;
#define _PCD_GET_MODE_32_PcdAhciCommandRetryCount  _gPcd_FixedAtBuild_PcdAhciCommandRetryCount
//#define _PCD_SET_MODE_32_PcdAhciCommandRetryCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeAtaAtapiPassThru (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
