/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1da2723f_52df_432a_8d03_6e8fa8acc107
#define _AUTOGENH_1da2723f_52df_432a_8d03_6e8fa8acc107

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiNetworkPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdIPv4PXESupport  44U
#define _PCD_GET_MODE_8_PcdIPv4PXESupport  LibPcdGet8(_PCD_TOKEN_PcdIPv4PXESupport)
#define _PCD_GET_MODE_SIZE_PcdIPv4PXESupport  LibPcdGetSize(_PCD_TOKEN_PcdIPv4PXESupport)
#define _PCD_SET_MODE_8_PcdIPv4PXESupport(Value)  LibPcdSet8(_PCD_TOKEN_PcdIPv4PXESupport, (Value))
#define _PCD_SET_MODE_8_S_PcdIPv4PXESupport(Value)  LibPcdSet8S(_PCD_TOKEN_PcdIPv4PXESupport, (Value))
#define _PCD_TOKEN_PcdIPv6PXESupport  45U
#define _PCD_GET_MODE_8_PcdIPv6PXESupport  LibPcdGet8(_PCD_TOKEN_PcdIPv6PXESupport)
#define _PCD_GET_MODE_SIZE_PcdIPv6PXESupport  LibPcdGetSize(_PCD_TOKEN_PcdIPv6PXESupport)
#define _PCD_SET_MODE_8_PcdIPv6PXESupport(Value)  LibPcdSet8(_PCD_TOKEN_PcdIPv6PXESupport, (Value))
#define _PCD_SET_MODE_8_S_PcdIPv6PXESupport(Value)  LibPcdSet8S(_PCD_TOKEN_PcdIPv6PXESupport, (Value))

RETURN_STATUS
EFIAPI
SetPxeBcPcds (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
