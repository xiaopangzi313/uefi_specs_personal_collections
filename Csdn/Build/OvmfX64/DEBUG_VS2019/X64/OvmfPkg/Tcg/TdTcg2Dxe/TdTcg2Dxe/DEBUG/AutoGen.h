/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_F062221E_C607_44C2_B0B4_C3886331D351
#define _AUTOGENH_F062221E_C607_44C2_B0B4_C3886331D351

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xF062221E, 0xC607, 0x44C2, {0xB0, 0xB4, 0xC3, 0x88, 0x63, 0x31, 0xD3, 0x51}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gEventExitBootServicesFailedGuid;
extern EFI_GUID gCcEventEntryHobGuid;
extern EFI_GUID gTcg800155PlatformIdEventHobGuid;
extern EFI_GUID gEfiCcFinalEventsTableGuid;
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gEdkiiRngAlgorithmUnSafe;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiCcMeasurementProtocolGuid;
extern EFI_GUID gEfiMpServiceProtocolGuid;
extern EFI_GUID gEfiVariableWriteArchProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
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
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiTcg2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdTpmPlatformClass  0U
#define _PCD_SIZE_PcdTpmPlatformClass 1
#define _PCD_GET_MODE_SIZE_PcdTpmPlatformClass  _PCD_SIZE_PcdTpmPlatformClass 
#define _PCD_VALUE_PcdTpmPlatformClass  0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdTpmPlatformClass;
#define _PCD_GET_MODE_8_PcdTpmPlatformClass  _gPcd_FixedAtBuild_PcdTpmPlatformClass
//#define _PCD_SET_MODE_8_PcdTpmPlatformClass  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareDebuggerInitialized  0U
#define _PCD_SIZE_PcdFirmwareDebuggerInitialized 1
#define _PCD_GET_MODE_SIZE_PcdFirmwareDebuggerInitialized  _PCD_SIZE_PcdFirmwareDebuggerInitialized 
#define _PCD_VALUE_PcdFirmwareDebuggerInitialized  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFirmwareDebuggerInitialized;
#define _PCD_GET_MODE_BOOL_PcdFirmwareDebuggerInitialized  _gPcd_FixedAtBuild_PcdFirmwareDebuggerInitialized
//#define _PCD_SET_MODE_BOOL_PcdFirmwareDebuggerInitialized  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeSubClassTpmDevice  0U
#define _PCD_SIZE_PcdStatusCodeSubClassTpmDevice 4
#define _PCD_GET_MODE_SIZE_PcdStatusCodeSubClassTpmDevice  _PCD_SIZE_PcdStatusCodeSubClassTpmDevice 
#define _PCD_VALUE_PcdStatusCodeSubClassTpmDevice  0x010E0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdStatusCodeSubClassTpmDevice;
#define _PCD_GET_MODE_32_PcdStatusCodeSubClassTpmDevice  _gPcd_FixedAtBuild_PcdStatusCodeSubClassTpmDevice
//#define _PCD_SET_MODE_32_PcdStatusCodeSubClassTpmDevice  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTcg2HashAlgorithmBitmap  48U
#define _PCD_GET_MODE_32_PcdTcg2HashAlgorithmBitmap  LibPcdGet32(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap)
#define _PCD_GET_MODE_SIZE_PcdTcg2HashAlgorithmBitmap  LibPcdGetSize(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap)
#define _PCD_SET_MODE_32_PcdTcg2HashAlgorithmBitmap(Value)  LibPcdSet32(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap, (Value))
#define _PCD_SET_MODE_32_S_PcdTcg2HashAlgorithmBitmap(Value)  LibPcdSet32S(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap, (Value))

#define _PCD_TOKEN_PcdTcg2NumberOfPCRBanks  0U
#define _PCD_SIZE_PcdTcg2NumberOfPCRBanks 4
#define _PCD_GET_MODE_SIZE_PcdTcg2NumberOfPCRBanks  _PCD_SIZE_PcdTcg2NumberOfPCRBanks 
#define _PCD_VALUE_PcdTcg2NumberOfPCRBanks  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdTcg2NumberOfPCRBanks;
#define _PCD_GET_MODE_32_PcdTcg2NumberOfPCRBanks  _gPcd_FixedAtBuild_PcdTcg2NumberOfPCRBanks
//#define _PCD_SET_MODE_32_PcdTcg2NumberOfPCRBanks  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTcgLogAreaMinLen  0U
#define _PCD_SIZE_PcdTcgLogAreaMinLen 4
#define _PCD_GET_MODE_SIZE_PcdTcgLogAreaMinLen  _PCD_SIZE_PcdTcgLogAreaMinLen 
#define _PCD_VALUE_PcdTcgLogAreaMinLen  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdTcgLogAreaMinLen;
#define _PCD_GET_MODE_32_PcdTcgLogAreaMinLen  _gPcd_FixedAtBuild_PcdTcgLogAreaMinLen
//#define _PCD_SET_MODE_32_PcdTcgLogAreaMinLen  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTcg2FinalLogAreaLen  0U
#define _PCD_SIZE_PcdTcg2FinalLogAreaLen 4
#define _PCD_GET_MODE_SIZE_PcdTcg2FinalLogAreaLen  _PCD_SIZE_PcdTcg2FinalLogAreaLen 
#define _PCD_VALUE_PcdTcg2FinalLogAreaLen  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdTcg2FinalLogAreaLen;
#define _PCD_GET_MODE_32_PcdTcg2FinalLogAreaLen  _gPcd_FixedAtBuild_PcdTcg2FinalLogAreaLen
//#define _PCD_SET_MODE_32_PcdTcg2FinalLogAreaLen  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCcEventlogAcpiTableLaml  46U
#define _PCD_GET_MODE_32_PcdCcEventlogAcpiTableLaml  LibPcdGet32(_PCD_TOKEN_PcdCcEventlogAcpiTableLaml)
#define _PCD_GET_MODE_SIZE_PcdCcEventlogAcpiTableLaml  LibPcdGetSize(_PCD_TOKEN_PcdCcEventlogAcpiTableLaml)
#define _PCD_SET_MODE_32_PcdCcEventlogAcpiTableLaml(Value)  LibPcdSet32(_PCD_TOKEN_PcdCcEventlogAcpiTableLaml, (Value))
#define _PCD_SET_MODE_32_S_PcdCcEventlogAcpiTableLaml(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCcEventlogAcpiTableLaml, (Value))

#define _PCD_TOKEN_PcdCcEventlogAcpiTableLasa  47U
#define _PCD_GET_MODE_64_PcdCcEventlogAcpiTableLasa  LibPcdGet64(_PCD_TOKEN_PcdCcEventlogAcpiTableLasa)
#define _PCD_GET_MODE_SIZE_PcdCcEventlogAcpiTableLasa  LibPcdGetSize(_PCD_TOKEN_PcdCcEventlogAcpiTableLasa)
#define _PCD_SET_MODE_64_PcdCcEventlogAcpiTableLasa(Value)  LibPcdSet64(_PCD_TOKEN_PcdCcEventlogAcpiTableLasa, (Value))
#define _PCD_SET_MODE_64_S_PcdCcEventlogAcpiTableLasa(Value)  LibPcdSet64S(_PCD_TOKEN_PcdCcEventlogAcpiTableLasa, (Value))

#define _PCD_TOKEN_PcdAcpiDefaultOemId  0U
#define _PCD_VALUE_PcdAcpiDefaultOemId  _gPcd_FixedAtBuild_PcdAcpiDefaultOemId
extern const UINT8 _gPcd_FixedAtBuild_PcdAcpiDefaultOemId[7];
#define _PCD_GET_MODE_PTR_PcdAcpiDefaultOemId  _gPcd_FixedAtBuild_PcdAcpiDefaultOemId
#define _PCD_SIZE_PcdAcpiDefaultOemId 7
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemId  _PCD_SIZE_PcdAcpiDefaultOemId 
//#define _PCD_SET_MODE_PTR_PcdAcpiDefaultOemId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultOemTableId  0U
#define _PCD_SIZE_PcdAcpiDefaultOemTableId 8
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemTableId  _PCD_SIZE_PcdAcpiDefaultOemTableId 
#define _PCD_VALUE_PcdAcpiDefaultOemTableId  0x20202020324B4445ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdAcpiDefaultOemTableId;
#define _PCD_GET_MODE_64_PcdAcpiDefaultOemTableId  _gPcd_FixedAtBuild_PcdAcpiDefaultOemTableId
//#define _PCD_SET_MODE_64_PcdAcpiDefaultOemTableId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultOemRevision  0U
#define _PCD_SIZE_PcdAcpiDefaultOemRevision 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemRevision  _PCD_SIZE_PcdAcpiDefaultOemRevision 
#define _PCD_VALUE_PcdAcpiDefaultOemRevision  0x00000002U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultOemRevision;
#define _PCD_GET_MODE_32_PcdAcpiDefaultOemRevision  _gPcd_FixedAtBuild_PcdAcpiDefaultOemRevision
//#define _PCD_SET_MODE_32_PcdAcpiDefaultOemRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultCreatorId  0U
#define _PCD_SIZE_PcdAcpiDefaultCreatorId 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultCreatorId  _PCD_SIZE_PcdAcpiDefaultCreatorId 
#define _PCD_VALUE_PcdAcpiDefaultCreatorId  0x20202020U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorId;
#define _PCD_GET_MODE_32_PcdAcpiDefaultCreatorId  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorId
//#define _PCD_SET_MODE_32_PcdAcpiDefaultCreatorId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultCreatorRevision  0U
#define _PCD_SIZE_PcdAcpiDefaultCreatorRevision 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultCreatorRevision  _PCD_SIZE_PcdAcpiDefaultCreatorRevision 
#define _PCD_VALUE_PcdAcpiDefaultCreatorRevision  0x01000013U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorRevision;
#define _PCD_GET_MODE_32_PcdAcpiDefaultCreatorRevision  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorRevision
//#define _PCD_SET_MODE_32_PcdAcpiDefaultCreatorRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DriverEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
