/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_73349b79_f148_43b8_b24e_9098a6f3e1db
#define _AUTOGENH_73349b79_f148_43b8_b24e_9098a6f3e1db

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdEntryPointOverrideFwCfgVarName  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdEntryPointOverrideFwCfgVarName[];
#define _PCD_GET_MODE_PTR_PcdEntryPointOverrideFwCfgVarName  _gPcd_FixedAtBuild_PcdEntryPointOverrideFwCfgVarName
//#define _PCD_SET_MODE_PTR_PcdEntryPointOverrideFwCfgVarName  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEntryPointOverrideFwCfgVarName _gPcd_FixedAtBuild_PcdEntryPointOverrideFwCfgVarName
#define _PCD_SIZE_PcdEntryPointOverrideFwCfgVarName 1
#define _PCD_GET_MODE_SIZE_PcdEntryPointOverrideFwCfgVarName _PCD_SIZE_PcdEntryPointOverrideFwCfgVarName


#ifdef __cplusplus
}
#endif

#endif
