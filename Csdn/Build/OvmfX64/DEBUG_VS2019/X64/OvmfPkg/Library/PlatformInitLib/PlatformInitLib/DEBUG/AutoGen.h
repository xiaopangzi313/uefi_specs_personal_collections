/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_89f886b0_7109_46e1_9d28_503ad4ab6ee0
#define _AUTOGENH_89f886b0_7109_46e1_9d28_503ad4ab6ee0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiSmmSmramMemoryGuid;
extern GUID gEfiAcpiVariableGuid;
extern GUID gUefiOvmfPkgTokenSpaceGuid;
extern GUID gEmbeddedTokenSpaceGuid;
extern GUID gEfiMdeModulePkgTokenSpaceGuid;
extern GUID gUefiCpuPkgTokenSpaceGuid;
extern GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdOvmfWorkAreaBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaBase  _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfWorkAreaBase 0x0080B000
#define _PCD_SIZE_PcdOvmfWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaBase _PCD_SIZE_PcdOvmfWorkAreaBase
#define _PCD_TOKEN_PcdOvmfWorkAreaSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaSize;
#define _PCD_GET_MODE_32_PcdOvmfWorkAreaSize  _gPcd_FixedAtBuild_PcdOvmfWorkAreaSize
//#define _PCD_SET_MODE_32_PcdOvmfWorkAreaSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfWorkAreaSize 0x00001000
#define _PCD_SIZE_PcdOvmfWorkAreaSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfWorkAreaSize _PCD_SIZE_PcdOvmfWorkAreaSize
#define _PCD_TOKEN_PcdOvmfLockBoxStorageBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageBase  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfLockBoxStorageBase 0x00806000
#define _PCD_SIZE_PcdOvmfLockBoxStorageBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageBase _PCD_SIZE_PcdOvmfLockBoxStorageBase
#define _PCD_TOKEN_PcdOvmfLockBoxStorageSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageSize  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfLockBoxStorageSize 0x00001000
#define _PCD_SIZE_PcdOvmfLockBoxStorageSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageSize _PCD_SIZE_PcdOvmfLockBoxStorageSize
#define _PCD_TOKEN_PcdOvmfCpuidBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidBase;
#define _PCD_GET_MODE_32_PcdOvmfCpuidBase  _gPcd_FixedAtBuild_PcdOvmfCpuidBase
//#define _PCD_SET_MODE_32_PcdOvmfCpuidBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfCpuidBase 0x0080E000
#define _PCD_SIZE_PcdOvmfCpuidBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidBase _PCD_SIZE_PcdOvmfCpuidBase
#define _PCD_TOKEN_PcdOvmfCpuidSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidSize;
#define _PCD_GET_MODE_32_PcdOvmfCpuidSize  _gPcd_FixedAtBuild_PcdOvmfCpuidSize
//#define _PCD_SET_MODE_32_PcdOvmfCpuidSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfCpuidSize 0x00001000
#define _PCD_SIZE_PcdOvmfCpuidSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidSize _PCD_SIZE_PcdOvmfCpuidSize
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS 0x80
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory 0x12
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory
#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType 0x80
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode 0x100
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData 0x100
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData
#define _PCD_TOKEN_PcdOvmfSecGhcbBackupBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecGhcbBackupBase 0x0080C000
#define _PCD_SIZE_PcdOvmfSecGhcbBackupBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupBase _PCD_SIZE_PcdOvmfSecGhcbBackupBase
#define _PCD_TOKEN_PcdOvmfSecGhcbBackupSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecGhcbBackupSize 0x00001000
#define _PCD_SIZE_PcdOvmfSecGhcbBackupSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupSize _PCD_SIZE_PcdOvmfSecGhcbBackupSize
#define _PCD_TOKEN_PcdOvmfSnpSecretsBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsBase  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSnpSecretsBase 0x0080D000
#define _PCD_SIZE_PcdOvmfSnpSecretsBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsBase _PCD_SIZE_PcdOvmfSnpSecretsBase
#define _PCD_TOKEN_PcdOvmfSnpSecretsSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsSize  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSnpSecretsSize 0x00001000
#define _PCD_SIZE_PcdOvmfSnpSecretsSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsSize _PCD_SIZE_PcdOvmfSnpSecretsSize
#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecPageTablesBase 0x00800000
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase _PCD_SIZE_PcdOvmfSecPageTablesBase
#define _PCD_TOKEN_PcdOvmfSecPageTablesSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesSize  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecPageTablesSize 0x00006000
#define _PCD_SIZE_PcdOvmfSecPageTablesSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesSize _PCD_SIZE_PcdOvmfSecPageTablesSize
#define _PCD_TOKEN_PcdOvmfSecPeiTempRamBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamBase  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecPeiTempRamBase 0x00811000
#define _PCD_SIZE_PcdOvmfSecPeiTempRamBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamBase _PCD_SIZE_PcdOvmfSecPeiTempRamBase
#define _PCD_TOKEN_PcdOvmfSecPeiTempRamSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamSize  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecPeiTempRamSize 0x0000F000
#define _PCD_SIZE_PcdOvmfSecPeiTempRamSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamSize _PCD_SIZE_PcdOvmfSecPeiTempRamSize
#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableBase 0x00808000
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableBase _PCD_SIZE_PcdOvmfSecGhcbPageTableBase
#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableSize 0x00001000
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableSize _PCD_SIZE_PcdOvmfSecGhcbPageTableSize
#define _PCD_TOKEN_PcdOvmfSecGhcbBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecGhcbBase 0x00809000
#define _PCD_SIZE_PcdOvmfSecGhcbBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBase _PCD_SIZE_PcdOvmfSecGhcbBase
#define _PCD_TOKEN_PcdOvmfSecGhcbSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfSecGhcbSize 0x00002000
#define _PCD_SIZE_PcdOvmfSecGhcbSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbSize _PCD_SIZE_PcdOvmfSecGhcbSize
#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize 0x42000
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize _PCD_SIZE_PcdFlashNvStorageFtwSpareSize
#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFlashNvStorageVariableSize 0x40000
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize _PCD_SIZE_PcdFlashNvStorageVariableSize
#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress 0xfee00000
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress _PCD_SIZE_PcdCpuLocalApicBaseAddress
#define _PCD_TOKEN_PcdXenPvhStartOfDayStructPtr  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtr;
#define _PCD_GET_MODE_32_PcdXenPvhStartOfDayStructPtr  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtr
//#define _PCD_SET_MODE_32_PcdXenPvhStartOfDayStructPtr  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdXenPvhStartOfDayStructPtr 0x0
#define _PCD_SIZE_PcdXenPvhStartOfDayStructPtr 4
#define _PCD_GET_MODE_SIZE_PcdXenPvhStartOfDayStructPtr _PCD_SIZE_PcdXenPvhStartOfDayStructPtr
#define _PCD_TOKEN_PcdXenPvhStartOfDayStructPtrSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtrSize;
#define _PCD_GET_MODE_32_PcdXenPvhStartOfDayStructPtrSize  _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtrSize
//#define _PCD_SET_MODE_32_PcdXenPvhStartOfDayStructPtrSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdXenPvhStartOfDayStructPtrSize 0x0
#define _PCD_SIZE_PcdXenPvhStartOfDayStructPtrSize 4
#define _PCD_GET_MODE_SIZE_PcdXenPvhStartOfDayStructPtrSize _PCD_SIZE_PcdXenPvhStartOfDayStructPtrSize
#define _PCD_TOKEN_PcdGuidedExtractHandlerTableAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress;
#define _PCD_GET_MODE_64_PcdGuidedExtractHandlerTableAddress  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress
//#define _PCD_SET_MODE_64_PcdGuidedExtractHandlerTableAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGuidedExtractHandlerTableAddress 0x00807000
#define _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 8
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableAddress _PCD_SIZE_PcdGuidedExtractHandlerTableAddress
#define _PCD_TOKEN_PcdGuidedExtractHandlerTableSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize;
#define _PCD_GET_MODE_32_PcdGuidedExtractHandlerTableSize  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize
//#define _PCD_SET_MODE_32_PcdGuidedExtractHandlerTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGuidedExtractHandlerTableSize 0x00001000
#define _PCD_SIZE_PcdGuidedExtractHandlerTableSize 4
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableSize _PCD_SIZE_PcdGuidedExtractHandlerTableSize
#define _PCD_TOKEN_PcdTdxAcceptPageSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdTdxAcceptPageSize;
#define _PCD_GET_MODE_32_PcdTdxAcceptPageSize  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize
//#define _PCD_SET_MODE_32_PcdTdxAcceptPageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTdxAcceptPageSize 0x200000
#define _PCD_SIZE_PcdTdxAcceptPageSize 4
#define _PCD_GET_MODE_SIZE_PcdTdxAcceptPageSize _PCD_SIZE_PcdTdxAcceptPageSize
#define _PCD_TOKEN_PcdOvmfFlashNvStorageVariableBase  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfFlashNvStorageVariableBase 0xFFC00000
#define _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageVariableBase _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase
#define _PCD_TOKEN_PcdCfvRawDataSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdCfvRawDataSize;
#define _PCD_GET_MODE_32_PcdCfvRawDataSize  _gPcd_FixedAtBuild_PcdCfvRawDataSize
//#define _PCD_SET_MODE_32_PcdCfvRawDataSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdCfvRawDataSize 0x84000
#define _PCD_SIZE_PcdCfvRawDataSize 4
#define _PCD_GET_MODE_SIZE_PcdCfvRawDataSize _PCD_SIZE_PcdCfvRawDataSize
#define _PCD_TOKEN_PcdDxeIplSwitchToLongMode  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSwitchToLongMode  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSwitchToLongMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdPciExpressBaseAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciExpressBaseAddress 0xE0000000
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress _PCD_SIZE_PcdPciExpressBaseAddress
#define _PCD_TOKEN_PcdUse1GPageTable  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUse1GPageTable 1
#define _PCD_SIZE_PcdUse1GPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse1GPageTable _PCD_SIZE_PcdUse1GPageTable


#ifdef __cplusplus
}
#endif

#endif
