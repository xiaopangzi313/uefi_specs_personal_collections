/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_42857F0A_13F2_4B21_8A23_53D3F714B840
#define _AUTOGENH_42857F0A_13F2_4B21_8A23_53D3F714B840

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x42857F0A, 0x13F2, 0x4B21, {0x8A, 0x23, 0x53, 0xD3, 0xF7, 0x14, 0xB8, 0x40}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiCapsuleVendorGuid;
extern EFI_GUID gEfiFmpCapsuleGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
extern EFI_GUID gEfiCapsuleArchProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
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

#define _PCD_TOKEN_PcdSupportUpdateCapsuleReset  0U
#define _PCD_SIZE_PcdSupportUpdateCapsuleReset 1
#define _PCD_GET_MODE_SIZE_PcdSupportUpdateCapsuleReset  _PCD_SIZE_PcdSupportUpdateCapsuleReset 
#define _PCD_VALUE_PcdSupportUpdateCapsuleReset  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSupportUpdateCapsuleReset;
#define _PCD_GET_MODE_BOOL_PcdSupportUpdateCapsuleReset  _gPcd_FixedAtBuild_PcdSupportUpdateCapsuleReset
//#define _PCD_SET_MODE_BOOL_PcdSupportUpdateCapsuleReset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSupportProcessCapsuleAtRuntime  0U
#define _PCD_SIZE_PcdSupportProcessCapsuleAtRuntime 1
#define _PCD_GET_MODE_SIZE_PcdSupportProcessCapsuleAtRuntime  _PCD_SIZE_PcdSupportProcessCapsuleAtRuntime 
#define _PCD_VALUE_PcdSupportProcessCapsuleAtRuntime  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSupportProcessCapsuleAtRuntime;
#define _PCD_GET_MODE_BOOL_PcdSupportProcessCapsuleAtRuntime  _gPcd_FixedAtBuild_PcdSupportProcessCapsuleAtRuntime
//#define _PCD_SET_MODE_BOOL_PcdSupportProcessCapsuleAtRuntime  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDxeIplSwitchToLongMode  0U
#define _PCD_SIZE_PcdDxeIplSwitchToLongMode 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplSwitchToLongMode  _PCD_SIZE_PcdDxeIplSwitchToLongMode 
#define _PCD_VALUE_PcdDxeIplSwitchToLongMode  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSwitchToLongMode  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSwitchToLongMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxSizeNonPopulateCapsule  0U
#define _PCD_SIZE_PcdMaxSizeNonPopulateCapsule 4
#define _PCD_GET_MODE_SIZE_PcdMaxSizeNonPopulateCapsule  _PCD_SIZE_PcdMaxSizeNonPopulateCapsule 
#define _PCD_VALUE_PcdMaxSizeNonPopulateCapsule  0xa00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxSizeNonPopulateCapsule;
#define _PCD_GET_MODE_32_PcdMaxSizeNonPopulateCapsule  _gPcd_FixedAtBuild_PcdMaxSizeNonPopulateCapsule
//#define _PCD_SET_MODE_32_PcdMaxSizeNonPopulateCapsule  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxSizePopulateCapsule  0U
#define _PCD_SIZE_PcdMaxSizePopulateCapsule 4
#define _PCD_GET_MODE_SIZE_PcdMaxSizePopulateCapsule  _PCD_SIZE_PcdMaxSizePopulateCapsule 
#define _PCD_VALUE_PcdMaxSizePopulateCapsule  0x6400000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxSizePopulateCapsule;
#define _PCD_GET_MODE_32_PcdMaxSizePopulateCapsule  _gPcd_FixedAtBuild_PcdMaxSizePopulateCapsule
//#define _PCD_SET_MODE_32_PcdMaxSizePopulateCapsule  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCapsuleInRamSupport  0U
#define _PCD_SIZE_PcdCapsuleInRamSupport 1
#define _PCD_GET_MODE_SIZE_PcdCapsuleInRamSupport  _PCD_SIZE_PcdCapsuleInRamSupport 
#define _PCD_VALUE_PcdCapsuleInRamSupport  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCapsuleInRamSupport;
#define _PCD_GET_MODE_BOOL_PcdCapsuleInRamSupport  _gPcd_FixedAtBuild_PcdCapsuleInRamSupport
//#define _PCD_SET_MODE_BOOL_PcdCapsuleInRamSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCapsulePeiLongModeStackSize  0U
#define _PCD_SIZE_PcdCapsulePeiLongModeStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCapsulePeiLongModeStackSize  _PCD_SIZE_PcdCapsulePeiLongModeStackSize 
#define _PCD_VALUE_PcdCapsulePeiLongModeStackSize  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCapsulePeiLongModeStackSize;
#define _PCD_GET_MODE_32_PcdCapsulePeiLongModeStackSize  _gPcd_FixedAtBuild_PcdCapsulePeiLongModeStackSize
//#define _PCD_SET_MODE_32_PcdCapsulePeiLongModeStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse1GPageTable  0U
#define _PCD_SIZE_PcdUse1GPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse1GPageTable  _PCD_SIZE_PcdUse1GPageTable 
#define _PCD_VALUE_PcdUse1GPageTable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
CapsuleServiceInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
