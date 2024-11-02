/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ba69ac6b_0c59_4472_899d_b684590ec1e9
#define _AUTOGENH_ba69ac6b_0c59_4472_899d_b684590ec1e9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gCcEventEntryHobGuid;
extern GUID gUefiOvmfPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfWorkAreaBase 0x0080B000
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase _PCD_SIZE_PcdOvmfWorkAreaBase
#define _PCD_TOKEN_PcdTdxAcceptPageSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdTdxAcceptPageSize;
#define _PCD_GET_MODE_32_PcdTdxAcceptPageSize  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize
//#define _PCD_SET_MODE_32_PcdTdxAcceptPageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTdxAcceptPageSize 0x200000
#define _PCD_SIZE_PcdTdxAcceptPageSize 4
#define _PCD_GET_MODE_SIZE_PcdTdxAcceptPageSize _PCD_SIZE_PcdTdxAcceptPageSize
#define _PCD_TOKEN_PcdOvmfSecGhcbBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecGhcbBase 0x00809000
#define _PCD_SIZE_PcdOvmfSecGhcbBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBase _PCD_SIZE_PcdOvmfSecGhcbBase
#define _PCD_TOKEN_PcdOvmfFlashNvStorageVariableBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfFlashNvStorageVariableBase 0xFFC00000
#define _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageVariableBase _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase
#define _PCD_TOKEN_PcdCfvRawDataSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCfvRawDataSize;
#define _PCD_GET_MODE_32_PcdCfvRawDataSize  _gPcd_FixedAtBuild_PcdCfvRawDataSize
//#define _PCD_SET_MODE_32_PcdCfvRawDataSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCfvRawDataSize 0x84000
#define _PCD_SIZE_PcdCfvRawDataSize 4
#define _PCD_GET_MODE_SIZE_PcdCfvRawDataSize _PCD_SIZE_PcdCfvRawDataSize


#ifdef __cplusplus
}
#endif

#endif
