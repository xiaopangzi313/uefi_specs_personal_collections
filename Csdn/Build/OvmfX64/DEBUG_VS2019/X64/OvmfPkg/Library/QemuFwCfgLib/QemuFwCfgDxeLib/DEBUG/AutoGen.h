/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_80474090_55e7_4c28_b25c_9f236ba41f28
#define _AUTOGENH_80474090_55e7_4c28_b25c_9f236ba41f28

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern GUID gEdkiiIoMmuProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
QemuFwCfgInitialize (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
