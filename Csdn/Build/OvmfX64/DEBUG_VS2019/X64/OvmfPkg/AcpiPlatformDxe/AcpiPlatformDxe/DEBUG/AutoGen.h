/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_17985e6f_e778_4d94_aefa_c5dd2b77e186
#define _AUTOGENH_17985e6f_e778_4d94_aefa_c5dd2b77e186

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x17985e6f, 0xe778, 0x4d94, {0xae, 0xfa, 0xc5, 0xdd, 0x2b, 0x77, 0xe1, 0x86}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gRootBridgesConnectedEventGroupGuid;
extern EFI_GUID gUefiOvmfPkgTdxAcpiHobGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;

// Protocols
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
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
extern EFI_GUID gEdkiiMemoryAcceptProtocolGuid;
extern EFI_GUID gEdkiiIoMmuProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiTcg2ProtocolGuid;
extern EFI_GUID gEfiCcMeasurementProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;
extern EFI_GUID gQemuAcpiTableNotifyProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciDisableBusEnumeration  0U
#define _PCD_SIZE_PcdPciDisableBusEnumeration 1
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration  _PCD_SIZE_PcdPciDisableBusEnumeration 
#define _PCD_VALUE_PcdPciDisableBusEnumeration  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPciDisableBusEnumeration;
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  _gPcd_FixedAtBuild_PcdPciDisableBusEnumeration
//#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  14U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))

#define _PCD_TOKEN_PcdXenPvhStartOfDayStructPtr  0U
#define _PCD_SIZE_PcdXenPvhStartOfDayStructPtr 4
#define _PCD_GET_MODE_SIZE_PcdXenPvhStartOfDayStructPtr  _PCD_SIZE_PcdXenPvhStartOfDayStructPtr 
#define _PCD_VALUE_PcdXenPvhStartOfDayStructPtr  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtr;
#define _PCD_GET_MODE_32_PcdXenPvhStartOfDayStructPtr  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtr
//#define _PCD_SET_MODE_32_PcdXenPvhStartOfDayStructPtr  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdXenPvhStartOfDayStructPtrSize  0U
#define _PCD_SIZE_PcdXenPvhStartOfDayStructPtrSize 4
#define _PCD_GET_MODE_SIZE_PcdXenPvhStartOfDayStructPtrSize  _PCD_SIZE_PcdXenPvhStartOfDayStructPtrSize 
#define _PCD_VALUE_PcdXenPvhStartOfDayStructPtrSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtrSize;
#define _PCD_GET_MODE_32_PcdXenPvhStartOfDayStructPtrSize  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtrSize
//#define _PCD_SET_MODE_32_PcdXenPvhStartOfDayStructPtrSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdConfidentialComputingGuestAttr  8U
#define _PCD_GET_MODE_64_PcdConfidentialComputingGuestAttr  LibPcdGet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_GET_MODE_SIZE_PcdConfidentialComputingGuestAttr  LibPcdGetSize(_PCD_TOKEN_PcdConfidentialComputingGuestAttr)
#define _PCD_SET_MODE_64_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))
#define _PCD_SET_MODE_64_S_PcdConfidentialComputingGuestAttr(Value)  LibPcdSet64S(_PCD_TOKEN_PcdConfidentialComputingGuestAttr, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AcpiPlatformEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
