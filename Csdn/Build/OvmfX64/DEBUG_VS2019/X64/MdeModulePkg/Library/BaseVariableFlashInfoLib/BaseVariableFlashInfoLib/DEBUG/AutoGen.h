/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_DEC426C9_C92E_4BAD_8E93_3F61C261118B
#define _AUTOGENH_DEC426C9_C92E_4BAD_8E93_3F61C261118B

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gVariableFlashInfoHobGuid;
extern GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageVariableBase 0x0
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase _PCD_SIZE_PcdFlashNvStorageVariableBase
#define _PCD_TOKEN_PcdFlashNvStorageVariableBase64  32U
#define _PCD_GET_MODE_64_PcdFlashNvStorageVariableBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))
#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageVariableSize 0x40000
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize _PCD_SIZE_PcdFlashNvStorageVariableSize
#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  28U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))
#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64  29U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwSpareBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))
#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize 0x42000
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize _PCD_SIZE_PcdFlashNvStorageFtwSpareSize
#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  30U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))
#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64  31U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwWorkingBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))
#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize 0x1000
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize


#ifdef __cplusplus
}
#endif

#endif
