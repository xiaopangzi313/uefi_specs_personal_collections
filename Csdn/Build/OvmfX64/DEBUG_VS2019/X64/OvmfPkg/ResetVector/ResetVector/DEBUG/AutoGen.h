/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1BA0062E_C779_4582_8566_336AE8F78F09
#define _AUTOGENH_1BA0062E_C779_4582_8566_336AE8F78F09

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x1BA0062E, 0xC779, 0x4582, {0x85, 0x66, 0x33, 0x6A, 0xE8, 0xF7, 0x8F, 0x09}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdOvmfCpuidBase  0U
#define _PCD_SIZE_PcdOvmfCpuidBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidBase  _PCD_SIZE_PcdOvmfCpuidBase 
#define _PCD_VALUE_PcdOvmfCpuidBase  0x0080E000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfCpuidBase;
#define _PCD_GET_MODE_32_PcdOvmfCpuidBase  _gPcd_FixedAtBuild_PcdOvmfCpuidBase
//#define _PCD_SET_MODE_32_PcdOvmfCpuidBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfCpuidSize  0U
#define _PCD_SIZE_PcdOvmfCpuidSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidSize  _PCD_SIZE_PcdOvmfCpuidSize 
#define _PCD_VALUE_PcdOvmfCpuidSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfCpuidSize;
#define _PCD_GET_MODE_32_PcdOvmfCpuidSize  _gPcd_FixedAtBuild_PcdOvmfCpuidSize
//#define _PCD_SET_MODE_32_PcdOvmfCpuidSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfPeiMemFvBase  0U
#define _PCD_SIZE_PcdOvmfPeiMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvBase  _PCD_SIZE_PcdOvmfPeiMemFvBase 
#define _PCD_VALUE_PcdOvmfPeiMemFvBase  0x00820000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvBase  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevLaunchSecretBase  0U
#define _PCD_SIZE_PcdSevLaunchSecretBase 4
#define _PCD_GET_MODE_SIZE_PcdSevLaunchSecretBase  _PCD_SIZE_PcdSevLaunchSecretBase 
#define _PCD_VALUE_PcdSevLaunchSecretBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevLaunchSecretBase;
#define _PCD_GET_MODE_32_PcdSevLaunchSecretBase  _gPcd_FixedAtBuild_PcdSevLaunchSecretBase
//#define _PCD_SET_MODE_32_PcdSevLaunchSecretBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevLaunchSecretSize  0U
#define _PCD_SIZE_PcdSevLaunchSecretSize 4
#define _PCD_GET_MODE_SIZE_PcdSevLaunchSecretSize  _PCD_SIZE_PcdSevLaunchSecretSize 
#define _PCD_VALUE_PcdSevLaunchSecretSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevLaunchSecretSize;
#define _PCD_GET_MODE_32_PcdSevLaunchSecretSize  _gPcd_FixedAtBuild_PcdSevLaunchSecretSize
//#define _PCD_SET_MODE_32_PcdSevLaunchSecretSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdQemuHashTableBase  0U
#define _PCD_SIZE_PcdQemuHashTableBase 4
#define _PCD_GET_MODE_SIZE_PcdQemuHashTableBase  _PCD_SIZE_PcdQemuHashTableBase 
#define _PCD_VALUE_PcdQemuHashTableBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdQemuHashTableBase;
#define _PCD_GET_MODE_32_PcdQemuHashTableBase  _gPcd_FixedAtBuild_PcdQemuHashTableBase
//#define _PCD_SET_MODE_32_PcdQemuHashTableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdQemuHashTableSize  0U
#define _PCD_SIZE_PcdQemuHashTableSize 4
#define _PCD_GET_MODE_SIZE_PcdQemuHashTableSize  _PCD_SIZE_PcdQemuHashTableSize 
#define _PCD_VALUE_PcdQemuHashTableSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdQemuHashTableSize;
#define _PCD_GET_MODE_32_PcdQemuHashTableSize  _gPcd_FixedAtBuild_PcdQemuHashTableSize
//#define _PCD_SET_MODE_32_PcdQemuHashTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecSvsmCaaBase  0U
#define _PCD_SIZE_PcdOvmfSecSvsmCaaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecSvsmCaaBase  _PCD_SIZE_PcdOvmfSecSvsmCaaBase 
#define _PCD_VALUE_PcdOvmfSecSvsmCaaBase  0x0080F000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaBase;
#define _PCD_GET_MODE_32_PcdOvmfSecSvsmCaaBase  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaBase
//#define _PCD_SET_MODE_32_PcdOvmfSecSvsmCaaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecSvsmCaaSize  0U
#define _PCD_SIZE_PcdOvmfSecSvsmCaaSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecSvsmCaaSize  _PCD_SIZE_PcdOvmfSecSvsmCaaSize 
#define _PCD_VALUE_PcdOvmfSecSvsmCaaSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaSize;
#define _PCD_GET_MODE_32_PcdOvmfSecSvsmCaaSize  _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaSize
//#define _PCD_SET_MODE_32_PcdOvmfSecSvsmCaaSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSnpSecretsBase  0U
#define _PCD_SIZE_PcdOvmfSnpSecretsBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsBase  _PCD_SIZE_PcdOvmfSnpSecretsBase 
#define _PCD_VALUE_PcdOvmfSnpSecretsBase  0x0080D000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsBase  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSnpSecretsSize  0U
#define _PCD_SIZE_PcdOvmfSnpSecretsSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsSize  _PCD_SIZE_PcdOvmfSnpSecretsSize 
#define _PCD_VALUE_PcdOvmfSnpSecretsSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsSize  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse5LevelPageTable  0U
#define _PCD_SIZE_PcdUse5LevelPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse5LevelPageTable  _PCD_SIZE_PcdUse5LevelPageTable 
#define _PCD_VALUE_PcdUse5LevelPageTable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse5LevelPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse5LevelPageTable  _gPcd_FixedAtBuild_PcdUse5LevelPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse5LevelPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevEsWorkAreaBase  0U
#define _PCD_SIZE_PcdSevEsWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaBase  _PCD_SIZE_PcdSevEsWorkAreaBase 
#define _PCD_VALUE_PcdSevEsWorkAreaBase  8433668U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaBase  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBase  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBase  _PCD_SIZE_PcdOvmfSecGhcbBase 
#define _PCD_VALUE_PcdOvmfSecGhcbBase  0x00809000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbSize  0U
#define _PCD_SIZE_PcdOvmfSecGhcbSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbSize  _PCD_SIZE_PcdOvmfSecGhcbSize 
#define _PCD_VALUE_PcdOvmfSecGhcbSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableBase  0U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableBase  _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableBase  0x00808000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableSize  0U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableSize  _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  0U
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase  _PCD_SIZE_PcdOvmfSecPageTablesBase 
#define _PCD_VALUE_PcdOvmfSecPageTablesBase  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesSize  0U
#define _PCD_SIZE_PcdOvmfSecPageTablesSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesSize  _PCD_SIZE_PcdOvmfSecPageTablesSize 
#define _PCD_VALUE_PcdOvmfSecPageTablesSize  0x00006000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesSize  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamBase  0U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamBase  _PCD_SIZE_PcdOvmfSecPeiTempRamBase 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamBase  0x00811000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamBase  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamSize  0U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamSize  _PCD_SIZE_PcdOvmfSecPeiTempRamSize 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamSize  0x0000F000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamSize  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase  _PCD_SIZE_PcdOvmfWorkAreaBase 
#define _PCD_VALUE_PcdOvmfWorkAreaBase  0x0080B000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfWorkAreaSize  0U
#define _PCD_SIZE_PcdOvmfWorkAreaSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaSize  _PCD_SIZE_PcdOvmfWorkAreaSize 
#define _PCD_VALUE_PcdOvmfWorkAreaSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfWorkAreaSize;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaSize  _gPcd_FixedAtBuild_PcdOvmfWorkAreaSize
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBackupBase  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBackupBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupBase  _PCD_SIZE_PcdOvmfSecGhcbBackupBase 
#define _PCD_VALUE_PcdOvmfSecGhcbBackupBase  0x0080C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBackupSize  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBackupSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupSize  _PCD_SIZE_PcdOvmfSecGhcbBackupSize 
#define _PCD_VALUE_PcdOvmfSecGhcbBackupSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCfvBase  0U
#define _PCD_SIZE_PcdCfvBase 4
#define _PCD_GET_MODE_SIZE_PcdCfvBase  _PCD_SIZE_PcdCfvBase 
#define _PCD_VALUE_PcdCfvBase  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCfvBase;
#define _PCD_GET_MODE_32_PcdCfvBase  _gPcd_FixedAtBuild_PcdCfvBase
//#define _PCD_SET_MODE_32_PcdCfvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCfvRawDataOffset  0U
#define _PCD_SIZE_PcdCfvRawDataOffset 4
#define _PCD_GET_MODE_SIZE_PcdCfvRawDataOffset  _PCD_SIZE_PcdCfvRawDataOffset 
#define _PCD_VALUE_PcdCfvRawDataOffset  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCfvRawDataOffset;
#define _PCD_GET_MODE_32_PcdCfvRawDataOffset  _gPcd_FixedAtBuild_PcdCfvRawDataOffset
//#define _PCD_SET_MODE_32_PcdCfvRawDataOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCfvRawDataSize  0U
#define _PCD_SIZE_PcdCfvRawDataSize 4
#define _PCD_GET_MODE_SIZE_PcdCfvRawDataSize  _PCD_SIZE_PcdCfvRawDataSize 
#define _PCD_VALUE_PcdCfvRawDataSize  0x84000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCfvRawDataSize;
#define _PCD_GET_MODE_32_PcdCfvRawDataSize  _gPcd_FixedAtBuild_PcdCfvRawDataSize
//#define _PCD_SET_MODE_32_PcdCfvRawDataSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBfvBase  0U
#define _PCD_SIZE_PcdBfvBase 4
#define _PCD_GET_MODE_SIZE_PcdBfvBase  _PCD_SIZE_PcdBfvBase 
#define _PCD_VALUE_PcdBfvBase  0xFFC84000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBfvBase;
#define _PCD_GET_MODE_32_PcdBfvBase  _gPcd_FixedAtBuild_PcdBfvBase
//#define _PCD_SET_MODE_32_PcdBfvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBfvRawDataOffset  0U
#define _PCD_SIZE_PcdBfvRawDataOffset 4
#define _PCD_GET_MODE_SIZE_PcdBfvRawDataOffset  _PCD_SIZE_PcdBfvRawDataOffset 
#define _PCD_VALUE_PcdBfvRawDataOffset  0x84000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBfvRawDataOffset;
#define _PCD_GET_MODE_32_PcdBfvRawDataOffset  _gPcd_FixedAtBuild_PcdBfvRawDataOffset
//#define _PCD_SET_MODE_32_PcdBfvRawDataOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBfvRawDataSize  0U
#define _PCD_SIZE_PcdBfvRawDataSize 4
#define _PCD_GET_MODE_SIZE_PcdBfvRawDataSize  _PCD_SIZE_PcdBfvRawDataSize 
#define _PCD_VALUE_PcdBfvRawDataSize  0x0037C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBfvRawDataSize;
#define _PCD_GET_MODE_32_PcdBfvRawDataSize  _gPcd_FixedAtBuild_PcdBfvRawDataSize
//#define _PCD_SET_MODE_32_PcdBfvRawDataSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
