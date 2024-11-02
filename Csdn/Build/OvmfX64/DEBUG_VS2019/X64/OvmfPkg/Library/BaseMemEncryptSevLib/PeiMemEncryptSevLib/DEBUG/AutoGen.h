/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_15d9a694_3d2a_4184_9672_ba55c3070e07
#define _AUTOGENH_15d9a694_3d2a_4184_9672_ba55c3070e07

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
#define _PCD_TOKEN_PcdOvmfPeiMemFvBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvBase  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfPeiMemFvBase 0x00820000
#define _PCD_SIZE_PcdOvmfPeiMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvBase _PCD_SIZE_PcdOvmfPeiMemFvBase
#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecPageTablesBase 0x00800000
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase _PCD_SIZE_PcdOvmfSecPageTablesBase
#define _PCD_TOKEN_PcdOvmfSecValidatedEnd  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd;
#define _PCD_GET_MODE_32_PcdOvmfSecValidatedEnd  _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd
//#define _PCD_SET_MODE_32_PcdOvmfSecValidatedEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecValidatedEnd 27328512
#define _PCD_SIZE_PcdOvmfSecValidatedEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecValidatedEnd _PCD_SIZE_PcdOvmfSecValidatedEnd
#define _PCD_TOKEN_PcdOvmfSecValidatedStart  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart;
#define _PCD_GET_MODE_32_PcdOvmfSecValidatedStart  _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart
//#define _PCD_SET_MODE_32_PcdOvmfSecValidatedStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecValidatedStart 8519680
#define _PCD_SIZE_PcdOvmfSecValidatedStart 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecValidatedStart _PCD_SIZE_PcdOvmfSecValidatedStart
#define _PCD_TOKEN_PcdSmmSmramRequire  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
