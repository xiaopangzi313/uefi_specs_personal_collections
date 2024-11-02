/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0e923c25_13cd_430b_8714_ffe85652a97b
#define _AUTOGENH_0e923c25_13cd_430b_8714_ffe85652a97b

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
#define _PCD_TOKEN_PcdOvmfCpuidBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidBase;
#define _PCD_GET_MODE_32_PcdOvmfCpuidBase  _gPcd_FixedAtBuild_PcdOvmfCpuidBase
//#define _PCD_SET_MODE_32_PcdOvmfCpuidBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfCpuidBase 0x0080E000
#define _PCD_SIZE_PcdOvmfCpuidBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidBase _PCD_SIZE_PcdOvmfCpuidBase
#define _PCD_TOKEN_PcdOvmfCpuidSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidSize;
#define _PCD_GET_MODE_32_PcdOvmfCpuidSize  _gPcd_FixedAtBuild_PcdOvmfCpuidSize
//#define _PCD_SET_MODE_32_PcdOvmfCpuidSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfCpuidSize 0x00001000
#define _PCD_SIZE_PcdOvmfCpuidSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidSize _PCD_SIZE_PcdOvmfCpuidSize


#ifdef __cplusplus
}
#endif

#endif
