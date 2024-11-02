/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_51834F51_CCE0_4743_B553_935D0C8A53FF
#define _AUTOGENH_51834F51_CCE0_4743_B553_935D0C8A53FF

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gSmmBaseHobGuid;
extern EFI_GUID gEfiSmmSmramMemoryGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdCpuHotPlugSupport  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdCpuHotPlugSupport;
#define _PCD_GET_MODE_BOOL_PcdCpuHotPlugSupport  _gPcd_FixedAtBuild_PcdCpuHotPlugSupport
//#define _PCD_SET_MODE_BOOL_PcdCpuHotPlugSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  11U
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))


#ifdef __cplusplus
}
#endif

#endif
