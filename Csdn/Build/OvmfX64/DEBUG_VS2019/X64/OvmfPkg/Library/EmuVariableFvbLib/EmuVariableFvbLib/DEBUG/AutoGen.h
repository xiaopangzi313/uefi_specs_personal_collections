/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8a6062ed_7140_4a74_b4ea_fe900e79e24b
#define _AUTOGENH_8a6062ed_7140_4a74_b4ea_fe900e79e24b

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
#define _PCD_TOKEN_PcdEmuVariableEvent  49U
#define _PCD_GET_MODE_64_PcdEmuVariableEvent  LibPcdGet64(_PCD_TOKEN_PcdEmuVariableEvent)
#define _PCD_GET_MODE_SIZE_PcdEmuVariableEvent  LibPcdGetSize(_PCD_TOKEN_PcdEmuVariableEvent)
#define _PCD_SET_MODE_64_PcdEmuVariableEvent(Value)  LibPcdSet64(_PCD_TOKEN_PcdEmuVariableEvent, (Value))
#define _PCD_SET_MODE_64_S_PcdEmuVariableEvent(Value)  LibPcdSet64S(_PCD_TOKEN_PcdEmuVariableEvent, (Value))


#ifdef __cplusplus
}
#endif

#endif
