/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9172fe8b_9a36_40f8_bba5_5e57a44390bd
#define _AUTOGENH_9172fe8b_9a36_40f8_bba5_5e57a44390bd

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSecureBootSupported  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSecureBootSupported;
#define _PCD_GET_MODE_BOOL_PcdSecureBootSupported  _gPcd_FixedAtBuild_PcdSecureBootSupported
//#define _PCD_SET_MODE_BOOL_PcdSecureBootSupported  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdBootRestrictToFirmware  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdBootRestrictToFirmware;
#define _PCD_GET_MODE_BOOL_PcdBootRestrictToFirmware  _gPcd_FixedAtBuild_PcdBootRestrictToFirmware
//#define _PCD_SET_MODE_BOOL_PcdBootRestrictToFirmware  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBootRestrictToFirmware 0
#define _PCD_SIZE_PcdBootRestrictToFirmware 1
#define _PCD_GET_MODE_SIZE_PcdBootRestrictToFirmware _PCD_SIZE_PcdBootRestrictToFirmware


#ifdef __cplusplus
}
#endif

#endif
