/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_378D7B65_8DA9_4773_B6E4_A47826A833E1
#define _AUTOGENH_378D7B65_8DA9_4773_B6E4_A47826A833E1

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x378D7B65, 0x8DA9, 0x4773, {0xB6, 0xE4, 0xA4, 0x78, 0x26, 0xA8, 0x33, 0xE1}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiAcpiTableGuid;
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;
extern EFI_GUID gPcAtChipsetPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gUefiOvmfPkgPlatformInfoGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;

// Protocols
extern EFI_GUID gEfiRealTimeClockArchProtocolGuid;
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

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdInitialValueRtcRegisterA  0U
#define _PCD_SIZE_PcdInitialValueRtcRegisterA 1
#define _PCD_GET_MODE_SIZE_PcdInitialValueRtcRegisterA  _PCD_SIZE_PcdInitialValueRtcRegisterA 
#define _PCD_VALUE_PcdInitialValueRtcRegisterA  0x26U
extern const  UINT8  _gPcd_FixedAtBuild_PcdInitialValueRtcRegisterA;
#define _PCD_GET_MODE_8_PcdInitialValueRtcRegisterA  _gPcd_FixedAtBuild_PcdInitialValueRtcRegisterA
//#define _PCD_SET_MODE_8_PcdInitialValueRtcRegisterA  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdInitialValueRtcRegisterB  0U
#define _PCD_SIZE_PcdInitialValueRtcRegisterB 1
#define _PCD_GET_MODE_SIZE_PcdInitialValueRtcRegisterB  _PCD_SIZE_PcdInitialValueRtcRegisterB 
#define _PCD_VALUE_PcdInitialValueRtcRegisterB  0x02U
extern const  UINT8  _gPcd_FixedAtBuild_PcdInitialValueRtcRegisterB;
#define _PCD_GET_MODE_8_PcdInitialValueRtcRegisterB  _gPcd_FixedAtBuild_PcdInitialValueRtcRegisterB
//#define _PCD_SET_MODE_8_PcdInitialValueRtcRegisterB  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdInitialValueRtcRegisterD  0U
#define _PCD_SIZE_PcdInitialValueRtcRegisterD 1
#define _PCD_GET_MODE_SIZE_PcdInitialValueRtcRegisterD  _PCD_SIZE_PcdInitialValueRtcRegisterD 
#define _PCD_VALUE_PcdInitialValueRtcRegisterD  0x00U
extern const  UINT8  _gPcd_FixedAtBuild_PcdInitialValueRtcRegisterD;
#define _PCD_GET_MODE_8_PcdInitialValueRtcRegisterD  _gPcd_FixedAtBuild_PcdInitialValueRtcRegisterD
//#define _PCD_SET_MODE_8_PcdInitialValueRtcRegisterD  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRtcUseMmio  0U
#define _PCD_SIZE_PcdRtcUseMmio 1
#define _PCD_GET_MODE_SIZE_PcdRtcUseMmio  _PCD_SIZE_PcdRtcUseMmio 
#define _PCD_VALUE_PcdRtcUseMmio  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdRtcUseMmio;
#define _PCD_GET_MODE_BOOL_PcdRtcUseMmio  _gPcd_FixedAtBuild_PcdRtcUseMmio
//#define _PCD_SET_MODE_BOOL_PcdRtcUseMmio  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRealTimeClockUpdateTimeout  0U
#define _PCD_SIZE_PcdRealTimeClockUpdateTimeout 4
#define _PCD_GET_MODE_SIZE_PcdRealTimeClockUpdateTimeout  _PCD_SIZE_PcdRealTimeClockUpdateTimeout 
#define _PCD_VALUE_PcdRealTimeClockUpdateTimeout  100000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdRealTimeClockUpdateTimeout;
#define _PCD_GET_MODE_32_PcdRealTimeClockUpdateTimeout  _gPcd_FixedAtBuild_PcdRealTimeClockUpdateTimeout
//#define _PCD_SET_MODE_32_PcdRealTimeClockUpdateTimeout  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMinimalValidYear  0U
#define _PCD_SIZE_PcdMinimalValidYear 2
#define _PCD_GET_MODE_SIZE_PcdMinimalValidYear  _PCD_SIZE_PcdMinimalValidYear 
#define _PCD_VALUE_PcdMinimalValidYear  1998U
extern const  UINT16  _gPcd_FixedAtBuild_PcdMinimalValidYear;
#define _PCD_GET_MODE_16_PcdMinimalValidYear  _gPcd_FixedAtBuild_PcdMinimalValidYear
//#define _PCD_SET_MODE_16_PcdMinimalValidYear  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximalValidYear  0U
#define _PCD_SIZE_PcdMaximalValidYear 2
#define _PCD_GET_MODE_SIZE_PcdMaximalValidYear  _PCD_SIZE_PcdMaximalValidYear 
#define _PCD_VALUE_PcdMaximalValidYear  2097U
extern const  UINT16  _gPcd_FixedAtBuild_PcdMaximalValidYear;
#define _PCD_GET_MODE_16_PcdMaximalValidYear  _gPcd_FixedAtBuild_PcdMaximalValidYear
//#define _PCD_SET_MODE_16_PcdMaximalValidYear  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRtcDefaultYear  0U
#define _PCD_SIZE_PcdRtcDefaultYear 2
#define _PCD_GET_MODE_SIZE_PcdRtcDefaultYear  _PCD_SIZE_PcdRtcDefaultYear 
#define _PCD_VALUE_PcdRtcDefaultYear  1998U
extern const  UINT16  _gPcd_FixedAtBuild_PcdRtcDefaultYear;
#define _PCD_GET_MODE_16_PcdRtcDefaultYear  _gPcd_FixedAtBuild_PcdRtcDefaultYear
//#define _PCD_SET_MODE_16_PcdRtcDefaultYear  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRtcIndexRegister  0U
#define _PCD_SIZE_PcdRtcIndexRegister 1
#define _PCD_GET_MODE_SIZE_PcdRtcIndexRegister  _PCD_SIZE_PcdRtcIndexRegister 
#define _PCD_VALUE_PcdRtcIndexRegister  0x70U
extern const  UINT8  _gPcd_FixedAtBuild_PcdRtcIndexRegister;
#define _PCD_GET_MODE_8_PcdRtcIndexRegister  _gPcd_FixedAtBuild_PcdRtcIndexRegister
//#define _PCD_SET_MODE_8_PcdRtcIndexRegister  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRtcTargetRegister  0U
#define _PCD_SIZE_PcdRtcTargetRegister 1
#define _PCD_GET_MODE_SIZE_PcdRtcTargetRegister  _PCD_SIZE_PcdRtcTargetRegister 
#define _PCD_VALUE_PcdRtcTargetRegister  0x71U
extern const  UINT8  _gPcd_FixedAtBuild_PcdRtcTargetRegister;
#define _PCD_GET_MODE_8_PcdRtcTargetRegister  _gPcd_FixedAtBuild_PcdRtcTargetRegister
//#define _PCD_SET_MODE_8_PcdRtcTargetRegister  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRtcIndexRegister64  0U
#define _PCD_SIZE_PcdRtcIndexRegister64 8
#define _PCD_GET_MODE_SIZE_PcdRtcIndexRegister64  _PCD_SIZE_PcdRtcIndexRegister64 
#define _PCD_VALUE_PcdRtcIndexRegister64  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdRtcIndexRegister64;
#define _PCD_GET_MODE_64_PcdRtcIndexRegister64  _gPcd_FixedAtBuild_PcdRtcIndexRegister64
//#define _PCD_SET_MODE_64_PcdRtcIndexRegister64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdRtcTargetRegister64  0U
#define _PCD_SIZE_PcdRtcTargetRegister64 8
#define _PCD_GET_MODE_SIZE_PcdRtcTargetRegister64  _PCD_SIZE_PcdRtcTargetRegister64 
#define _PCD_VALUE_PcdRtcTargetRegister64  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdRtcTargetRegister64;
#define _PCD_GET_MODE_64_PcdRtcTargetRegister64  _gPcd_FixedAtBuild_PcdRtcTargetRegister64
//#define _PCD_SET_MODE_64_PcdRtcTargetRegister64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializePcRtc (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
