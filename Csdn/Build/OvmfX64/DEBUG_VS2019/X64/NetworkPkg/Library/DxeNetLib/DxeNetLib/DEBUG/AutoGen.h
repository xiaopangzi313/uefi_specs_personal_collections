/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_db6dcef3_9f4e_4340_9351_fc35aa8a5888
#define _AUTOGENH_db6dcef3_9f4e_4340_9351_fc35aa8a5888

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiAdapterInfoMediaStateGuid;
extern EFI_GUID gEfiRngAlgorithmRaw;
extern EFI_GUID gEfiRngAlgorithmSp80090Ctr256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hmac256Guid;
extern EFI_GUID gEfiRngAlgorithmSp80090Hash256Guid;
extern EFI_GUID gEfiRngAlgorithmArmRndr;
extern EFI_GUID gEfiNetworkPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiAdapterInformationProtocolGuid;
extern EFI_GUID gEfiRngProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdEnforceSecureRngAlgorithms  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdEnforceSecureRngAlgorithms;
#define _PCD_GET_MODE_BOOL_PcdEnforceSecureRngAlgorithms  _gPcd_FixedAtBuild_PcdEnforceSecureRngAlgorithms
//#define _PCD_SET_MODE_BOOL_PcdEnforceSecureRngAlgorithms  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnforceSecureRngAlgorithms 1
#define _PCD_SIZE_PcdEnforceSecureRngAlgorithms 1
#define _PCD_GET_MODE_SIZE_PcdEnforceSecureRngAlgorithms _PCD_SIZE_PcdEnforceSecureRngAlgorithms


#ifdef __cplusplus
}
#endif

#endif
