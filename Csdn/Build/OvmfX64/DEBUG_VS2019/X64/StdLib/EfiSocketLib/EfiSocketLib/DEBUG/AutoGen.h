/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C33E0B7C_9D0F_41df_BDFD_08F5E4C39EE8
#define _AUTOGENH_C33E0B7C_9D0F_41df_BDFD_08F5E4C39EE8

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern GUID gEfiIp4Config2ProtocolGuid;
extern GUID gEfiIp6ConfigProtocolGuid;
extern GUID gEfiIp4ProtocolGuid;
extern GUID gEfiIp4ServiceBindingProtocolGuid;
extern GUID gEfiIp6ProtocolGuid;
extern GUID gEfiIp6ServiceBindingProtocolGuid;
extern GUID gEfiTcp4ProtocolGuid;
extern GUID gEfiTcp4ServiceBindingProtocolGuid;
extern GUID gEfiTcp6ProtocolGuid;
extern GUID gEfiTcp6ServiceBindingProtocolGuid;
extern GUID gEfiUdp4ProtocolGuid;
extern GUID gEfiUdp4ServiceBindingProtocolGuid;
extern GUID gEfiUdp6ProtocolGuid;
extern GUID gEfiUdp6ServiceBindingProtocolGuid;
extern GUID gEfiSocketProtocolGuid;
extern GUID gEfiSocketServiceBindingProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
EslConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
EslDestructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
