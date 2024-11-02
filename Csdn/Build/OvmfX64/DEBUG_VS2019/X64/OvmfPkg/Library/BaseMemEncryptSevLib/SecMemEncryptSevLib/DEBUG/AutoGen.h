/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_046388b4_430e_4e61_88f6_51ea21db2632
#define _AUTOGENH_046388b4_430e_4e61_88f6_51ea21db2632

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gUefiCpuPkgTokenSpaceGuid;
extern GUID gUefiOvmfPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSevEsWorkAreaBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaBase  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSevEsWorkAreaBase 8433668
#define _PCD_SIZE_PcdSevEsWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaBase _PCD_SIZE_PcdSevEsWorkAreaBase
#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfWorkAreaBase 0x0080B000
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase _PCD_SIZE_PcdOvmfWorkAreaBase


#ifdef __cplusplus
}
#endif

#endif
