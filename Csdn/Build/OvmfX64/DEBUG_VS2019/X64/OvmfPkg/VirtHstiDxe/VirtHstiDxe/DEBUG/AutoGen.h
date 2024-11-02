/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_60740CF3_D428_4500_80E6_04A5798241ED
#define _AUTOGENH_60740CF3_D428_4500_80E6_04A5798241ED

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x60740CF3, 0xD428, 0x4500, {0x80, 0xE6, 0x04, 0xA5, 0x79, 0x82, 0x41, 0xED}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gAdapterInfoPlatformSecurityGuid;

// Protocols
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
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
extern EFI_GUID gEfiAdapterInformationProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSmmSmramRequire  0U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdConfidentialComputingGuestAttr  8U
#define _PCD_GET_MODE_64_PcdConfidentialComputingGuestAttr  LibPcdGet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_GET_MODE_SIZE_PcdConfidentialComputingGuestAttr  LibPcdGetSize(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_SET_MODE_64_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))
#define _PCD_SET_MODE_64_S_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64S(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))

#define _PCD_TOKEN_PcdBfvBase  0U
#define _PCD_SIZE_PcdBfvBase 4
#define _PCD_GET_MODE_SIZE_PcdBfvBase  _PCD_SIZE_PcdBfvBase 
#define _PCD_VALUE_PcdBfvBase  0xFFC84000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBfvBase;
#define _PCD_GET_MODE_32_PcdBfvBase  _gPcd_FixedAtBuild_PcdBfvBase
//#define _PCD_SET_MODE_32_PcdBfvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageVariableBase  0U
#define _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageVariableBase  _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdOvmfFlashNvStorageVariableBase  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
VirtHstiDxeEntrypoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
