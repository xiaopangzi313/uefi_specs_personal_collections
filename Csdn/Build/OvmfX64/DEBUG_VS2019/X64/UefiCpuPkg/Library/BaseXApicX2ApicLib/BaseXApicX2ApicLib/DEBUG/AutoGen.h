/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_967B6E05_F10D_4c10_8BF7_365291CA143F
#define _AUTOGENH_967B6E05_F10D_4c10_8BF7_365291CA143F

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

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdCpuInitIpiDelayInMicroSeconds  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds;
#define _PCD_GET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds
//#define _PCD_SET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuInitIpiDelayInMicroSeconds 10000
#define _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds 4
#define _PCD_GET_MODE_SIZE_PcdCpuInitIpiDelayInMicroSeconds _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds
#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress 0xfee00000
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress _PCD_SIZE_PcdCpuLocalApicBaseAddress


#ifdef __cplusplus
}
#endif

#endif
