/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B6E9835A_EDCF_4748_98A8_27D3C722E02D
#define _AUTOGENH_B6E9835A_EDCF_4748_98A8_27D3C722E02D

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdCpuSmmStackGuard  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdCpuSmmStackGuard;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmStackGuard  _gPcd_FixedAtBuild_PcdCpuSmmStackGuard
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmStackGuard  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdCpuStackGuard  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdCpuStackGuard;
#define _PCD_GET_MODE_BOOL_PcdCpuStackGuard  _gPcd_FixedAtBuild_PcdCpuStackGuard
//#define _PCD_SET_MODE_BOOL_PcdCpuStackGuard  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuStackGuard 0
#define _PCD_SIZE_PcdCpuStackGuard 1
#define _PCD_GET_MODE_SIZE_PcdCpuStackGuard _PCD_SIZE_PcdCpuStackGuard
#define _PCD_TOKEN_PcdCpuStackSwitchExceptionList  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList[];
#define _PCD_GET_MODE_PTR_PcdCpuStackSwitchExceptionList  (VOID *)_gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList
//#define _PCD_SET_MODE_PTR_PcdCpuStackSwitchExceptionList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuStackSwitchExceptionList (VOID *)_gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList
#define _PCD_SIZE_PcdCpuStackSwitchExceptionList 2
#define _PCD_GET_MODE_SIZE_PcdCpuStackSwitchExceptionList _PCD_SIZE_PcdCpuStackSwitchExceptionList
#define _PCD_TOKEN_PcdCpuKnownGoodStackSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize;
#define _PCD_GET_MODE_32_PcdCpuKnownGoodStackSize  _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize
//#define _PCD_SET_MODE_32_PcdCpuKnownGoodStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuKnownGoodStackSize 2048
#define _PCD_SIZE_PcdCpuKnownGoodStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuKnownGoodStackSize _PCD_SIZE_PcdCpuKnownGoodStackSize


#ifdef __cplusplus
}
#endif

#endif
