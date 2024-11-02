/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FA20568B_548B_4b2b_81EF_1BA08D4A3CEC
#define _AUTOGENH_FA20568B_548B_4b2b_81EF_1BA08D4A3CEC

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xFA20568B, 0x548B, 0x4b2b, {0x81, 0xEF, 0x1B, 0xA0, 0x8D, 0x4A, 0x3C, 0xEC}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiBootScriptExecutorVariableGuid;
extern EFI_GUID gEfiBootScriptExecutorContextGuid;
extern EFI_GUID gEdkiiMemoryProfileGuid;
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
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiDxeSmmReadyToLockProtocolGuid;
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
extern EFI_GUID gEfiLockBoxProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gEdkiiSmmExitBootServicesProtocolGuid;
extern EFI_GUID gEdkiiSmmLegacyBootProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDxeIplSwitchToLongMode  0U
#define _PCD_SIZE_PcdDxeIplSwitchToLongMode 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplSwitchToLongMode  _PCD_SIZE_PcdDxeIplSwitchToLongMode 
#define _PCD_VALUE_PcdDxeIplSwitchToLongMode  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSwitchToLongMode  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSwitchToLongMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse1GPageTable  0U
#define _PCD_SIZE_PcdUse1GPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse1GPageTable  _PCD_SIZE_PcdUse1GPageTable 
#define _PCD_VALUE_PcdUse1GPageTable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryProfilePropertyMask  0U
#define _PCD_SIZE_PcdMemoryProfilePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdMemoryProfilePropertyMask  _PCD_SIZE_PcdMemoryProfilePropertyMask 
#define _PCD_VALUE_PcdMemoryProfilePropertyMask  0x0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdMemoryProfilePropertyMask;
#define _PCD_GET_MODE_8_PcdMemoryProfilePropertyMask  _gPcd_FixedAtBuild_PcdMemoryProfilePropertyMask
//#define _PCD_SET_MODE_8_PcdMemoryProfilePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiS3Enable  1U
#define _PCD_GET_MODE_BOOL_PcdAcpiS3Enable  LibPcdGetBool(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_GET_MODE_SIZE_PcdAcpiS3Enable  LibPcdGetSize(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_SET_MODE_BOOL_PcdAcpiS3Enable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdAcpiS3Enable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdAcpiS3Enable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdAcpiS3Enable, (Value))

#define _PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask  5U
#define _PCD_GET_MODE_64_PcdPteMemoryEncryptionAddressOrMask  LibPcdGet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_GET_MODE_SIZE_PcdPteMemoryEncryptionAddressOrMask  LibPcdGetSize(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_SET_MODE_64_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))
#define _PCD_SET_MODE_64_S_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
BootScriptExecutorEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
