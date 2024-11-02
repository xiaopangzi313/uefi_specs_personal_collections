/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_288e3588_87d8_4c2c_b568_bf900de0fb36
#define _AUTOGENH_288e3588_87d8_4c2c_b568_bf900de0fb36

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gUefiOvmfPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdOvmfSnpSecretsBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsBase  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSnpSecretsBase 0x0080D000
#define _PCD_SIZE_PcdOvmfSnpSecretsBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsBase _PCD_SIZE_PcdOvmfSnpSecretsBase
#define _PCD_TOKEN_PcdOvmfSnpSecretsSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsSize  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSnpSecretsSize 0x00001000
#define _PCD_SIZE_PcdOvmfSnpSecretsSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsSize _PCD_SIZE_PcdOvmfSnpSecretsSize


#ifdef __cplusplus
}
#endif

#endif
