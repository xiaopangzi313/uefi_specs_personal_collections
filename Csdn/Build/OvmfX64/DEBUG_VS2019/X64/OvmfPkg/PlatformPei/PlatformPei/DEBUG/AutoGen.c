/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x222c386d, 0x5abc, 0x4fb4, {0xb1, 0x24, 0xfb, 0xb8, 0x24, 0x88, 0xac, 0xf4}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PlatformPei";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4C19049F, 0x4137, 0x4DD3, { 0x9C, 0x10, 0x8B, 0x97, 0xA8, 0x3F, 0xFD, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gFdtHobGuid = { 0x16958446, 0x19B7, 0x480B, { 0xB0, 0x47, 0x74, 0x85, 0xAD, 0x3F, 0x71, 0x6D } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiOvmfPkgPlatformInfoGuid = {0xdec9b486, 0x1f16, 0x47c7, {0x8f, 0x68, 0xdf, 0x1a, 0x41, 0x88, 0x8b, 0xa5}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGhcbApicIdsGuid = { 0xbc964338, 0xee39, 0x4fc8, { 0xa2, 0x24, 0x10, 0x10, 0x8b, 0x17, 0x80, 0x1b }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gTcg800155PlatformIdEventHobGuid = { 0xe2c3bc69, 0x615c, 0x4b5b, { 0x8e, 0x5c, 0xa0, 0x33, 0xa9, 0xc2, 0x5e, 0xd6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiOvmfPkgTokenSpaceGuid = {0x93bb96af, 0xb9f2, 0x4eb8, {0x94, 0x62, 0xe0, 0xba, 0x74, 0x56, 0x42, 0x36}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEmbeddedTokenSpaceGuid = { 0xe0d8ca17, 0x4276, 0x4386, { 0xbb, 0x79, 0x48, 0xcb, 0x81, 0x3d, 0x3c, 0x4f }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSecurityPkgTokenSpaceGuid = { 0xd3fb176, 0x9569, 0x4d51, { 0xa3, 0xef, 0x7d, 0x61, 0xc6, 0x4f, 0xea, 0xba }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiCpuPkgTokenSpaceGuid = { 0xac05bf33, 0x995a, 0x4ed4, { 0xaa, 0xb8, 0xef, 0x7a, 0xe8, 0xf, 0x5c, 0xb0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSmmSmramMemoryGuid = { 0x6dadf1d1, 0xd4cc, 0x4910, { 0xbb, 0x6e, 0x82, 0xb1, 0xfd, 0x80, 0xff, 0x3d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpiVariableGuid = { 0xAF9FFD67, 0xEC10, 0x488A, { 0x9D, 0xFC, 0x6C, 0xBF, 0x5E, 0xE2, 0x2C, 0x2E }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gSmmBaseHobGuid = { 0xc2217ba7, 0x03bb, 0x4f63, {0xa6, 0x47, 0x7c, 0x25, 0xc5, 0xfc, 0x9d, 0x73 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gCcEventEntryHobGuid = { 0x20f8fd36, 0x6d00, 0x40fb, { 0xb7, 0x04, 0xd1, 0x2c, 0x15, 0x3c, 0x62, 0xeb }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMasterBootModePpiGuid = { 0x7408d748, 0xfc8c, 0x4ee6, {0x92, 0x88, 0xc4, 0xbe, 0xc0, 0x92, 0xa4, 0x10 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMpServicesPpiGuid = { 0xee16160a, 0xe8be, 0x47a6, { 0x82, 0xa, 0xc6, 0x90, 0xd, 0xb0, 0x25, 0xa } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid = { 0x2ab86ef5, 0xecb5, 0x4134, { 0xb5, 0x56, 0x38, 0x54, 0xca, 0x1f, 0xe1, 0xb4 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPeiMpServices2PpiGuid = { 0x5cb9cb3d, 0x31a4, 0x480c, { 0x94, 0x98, 0x29, 0xd2, 0x69, 0xba, 0xcf, 0xba}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidBase = _PCD_VALUE_PcdOvmfCpuidBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidSize = _PCD_VALUE_PcdOvmfCpuidSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS = _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory = _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType = _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode = _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData = _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase = _PCD_VALUE_PcdOvmfSecGhcbBackupBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize = _PCD_VALUE_PcdOvmfSecGhcbBackupSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaBase = _PCD_VALUE_PcdOvmfSecSvsmCaaBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecSvsmCaaSize = _PCD_VALUE_PcdOvmfSecSvsmCaaSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase = _PCD_VALUE_PcdOvmfWorkAreaBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaSize = _PCD_VALUE_PcdOvmfWorkAreaSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase = _PCD_VALUE_PcdOvmfSnpSecretsBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize = _PCD_VALUE_PcdOvmfSnpSecretsSize;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSmmSmramRequire = _PCD_VALUE_PcdSmmSmramRequire;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase = _PCD_VALUE_PcdOvmfPeiMemFvBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize = _PCD_VALUE_PcdOvmfPeiMemFvSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase = _PCD_VALUE_PcdOvmfDxeMemFvBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize = _PCD_VALUE_PcdOvmfDxeMemFvSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase = _PCD_VALUE_PcdOvmfSecPeiTempRamBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize = _PCD_VALUE_PcdOvmfSecPeiTempRamSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase = _PCD_VALUE_PcdOvmfSecPageTablesBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize = _PCD_VALUE_PcdOvmfSecPageTablesSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase = _PCD_VALUE_PcdOvmfSecGhcbPageTableBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize = _PCD_VALUE_PcdOvmfSecGhcbPageTableSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase = _PCD_VALUE_PcdOvmfSecGhcbBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize = _PCD_VALUE_PcdOvmfSecGhcbSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase = _PCD_VALUE_PcdOvmfLockBoxStorageBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize = _PCD_VALUE_PcdOvmfLockBoxStorageSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize = _PCD_VALUE_PcdGuidedExtractHandlerTableSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd = _PCD_VALUE_PcdOvmfDecompressionScratchEnd;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtr = _PCD_VALUE_PcdXenPvhStartOfDayStructPtr;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdXenPvhStartOfDayStructPtrSize = _PCD_VALUE_PcdXenPvhStartOfDayStructPtrSize;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSecureBootSupported = _PCD_VALUE_PcdSecureBootSupported;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress = _PCD_VALUE_PcdGuidedExtractHandlerTableAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdPciExpressBaseAddress = _PCD_VALUE_PcdPciExpressBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize = _PCD_VALUE_PcdFlashNvStorageFtwSpareSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize = _PCD_VALUE_PcdFlashNvStorageVariableSize;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode = _PCD_VALUE_PcdDxeIplSwitchToLongMode;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUse1GPageTable = _PCD_VALUE_PcdUse1GPageTable;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress = _PCD_VALUE_PcdCpuLocalApicBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuApStackSize = _PCD_VALUE_PcdCpuApStackSize;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdCpuInitIpiDelayInMicroSeconds  0U
#define _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds 4
#define _PCD_GET_MODE_SIZE_PcdCpuInitIpiDelayInMicroSeconds  _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds 
#define _PCD_VALUE_PcdCpuInitIpiDelayInMicroSeconds  10000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds = _PCD_VALUE_PcdCpuInitIpiDelayInMicroSeconds;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds;
#define _PCD_GET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds
//#define _PCD_SET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevEsWorkAreaBase  0U
#define _PCD_SIZE_PcdSevEsWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaBase  _PCD_SIZE_PcdSevEsWorkAreaBase 
#define _PCD_VALUE_PcdSevEsWorkAreaBase  8433668U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase = _PCD_VALUE_PcdSevEsWorkAreaBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaBase  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecValidatedEnd  0U
#define _PCD_SIZE_PcdOvmfSecValidatedEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecValidatedEnd  _PCD_SIZE_PcdOvmfSecValidatedEnd 
#define _PCD_VALUE_PcdOvmfSecValidatedEnd  27328512U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd = _PCD_VALUE_PcdOvmfSecValidatedEnd;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd;
#define _PCD_GET_MODE_32_PcdOvmfSecValidatedEnd  _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd
//#define _PCD_SET_MODE_32_PcdOvmfSecValidatedEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecValidatedStart  0U
#define _PCD_SIZE_PcdOvmfSecValidatedStart 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecValidatedStart  _PCD_SIZE_PcdOvmfSecValidatedStart 
#define _PCD_VALUE_PcdOvmfSecValidatedStart  8519680U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart = _PCD_VALUE_PcdOvmfSecValidatedStart;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart;
#define _PCD_GET_MODE_32_PcdOvmfSecValidatedStart  _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart
//#define _PCD_SET_MODE_32_PcdOvmfSecValidatedStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVerifyNodeInList  0U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  0U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  0U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  0U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  0U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  0U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x8000004FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  0U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  0U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpinLockTimeout  0U
#define _PCD_SIZE_PcdSpinLockTimeout 4
#define _PCD_GET_MODE_SIZE_PcdSpinLockTimeout  _PCD_SIZE_PcdSpinLockTimeout 
#define _PCD_VALUE_PcdSpinLockTimeout  10000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSpinLockTimeout = _PCD_VALUE_PcdSpinLockTimeout;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSpinLockTimeout;
#define _PCD_GET_MODE_32_PcdSpinLockTimeout  _gPcd_FixedAtBuild_PcdSpinLockTimeout
//#define _PCD_SET_MODE_32_PcdSpinLockTimeout  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuNumberOfReservedVariableMtrrs  0U
#define _PCD_SIZE_PcdCpuNumberOfReservedVariableMtrrs 4
#define _PCD_GET_MODE_SIZE_PcdCpuNumberOfReservedVariableMtrrs  _PCD_SIZE_PcdCpuNumberOfReservedVariableMtrrs 
#define _PCD_VALUE_PcdCpuNumberOfReservedVariableMtrrs  0x2U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuNumberOfReservedVariableMtrrs = _PCD_VALUE_PcdCpuNumberOfReservedVariableMtrrs;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuNumberOfReservedVariableMtrrs;
#define _PCD_GET_MODE_32_PcdCpuNumberOfReservedVariableMtrrs  _gPcd_FixedAtBuild_PcdCpuNumberOfReservedVariableMtrrs
//#define _PCD_SET_MODE_32_PcdCpuNumberOfReservedVariableMtrrs  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuSmmStackGuard  0U
#define _PCD_SIZE_PcdCpuSmmStackGuard 1
#define _PCD_GET_MODE_SIZE_PcdCpuSmmStackGuard  _PCD_SIZE_PcdCpuSmmStackGuard 
#define _PCD_VALUE_PcdCpuSmmStackGuard  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdCpuSmmStackGuard = _PCD_VALUE_PcdCpuSmmStackGuard;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuSmmStackGuard;
#define _PCD_GET_MODE_BOOL_PcdCpuSmmStackGuard  _gPcd_FixedAtBuild_PcdCpuSmmStackGuard
//#define _PCD_SET_MODE_BOOL_PcdCpuSmmStackGuard  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuStackGuard  0U
#define _PCD_SIZE_PcdCpuStackGuard 1
#define _PCD_GET_MODE_SIZE_PcdCpuStackGuard  _PCD_SIZE_PcdCpuStackGuard 
#define _PCD_VALUE_PcdCpuStackGuard  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdCpuStackGuard = _PCD_VALUE_PcdCpuStackGuard;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuStackGuard;
#define _PCD_GET_MODE_BOOL_PcdCpuStackGuard  _gPcd_FixedAtBuild_PcdCpuStackGuard
//#define _PCD_SET_MODE_BOOL_PcdCpuStackGuard  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuKnownGoodStackSize  0U
#define _PCD_SIZE_PcdCpuKnownGoodStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuKnownGoodStackSize  _PCD_SIZE_PcdCpuKnownGoodStackSize 
#define _PCD_VALUE_PcdCpuKnownGoodStackSize  2048U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize = _PCD_VALUE_PcdCpuKnownGoodStackSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize;
#define _PCD_GET_MODE_32_PcdCpuKnownGoodStackSize  _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize
//#define _PCD_SET_MODE_32_PcdCpuKnownGoodStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuStackSwitchExceptionList  0U
#define _PCD_VALUE_PcdCpuStackSwitchExceptionList  (VOID *)_gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList[2] = {0x08, 0x0E};
extern const UINT8 _gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList[2];
#define _PCD_GET_MODE_PTR_PcdCpuStackSwitchExceptionList  (VOID *)_gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList
#define _PCD_SIZE_PcdCpuStackSwitchExceptionList 2
#define _PCD_GET_MODE_SIZE_PcdCpuStackSwitchExceptionList  _PCD_SIZE_PcdCpuStackSwitchExceptionList 
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdCpuStackSwitchExceptionList = 2;
//#define _PCD_SET_MODE_PTR_PcdCpuStackSwitchExceptionList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTdxAcceptPageSize  0U
#define _PCD_SIZE_PcdTdxAcceptPageSize 4
#define _PCD_GET_MODE_SIZE_PcdTdxAcceptPageSize  _PCD_SIZE_PcdTdxAcceptPageSize 
#define _PCD_VALUE_PcdTdxAcceptPageSize  0x200000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdTdxAcceptPageSize = _PCD_VALUE_PcdTdxAcceptPageSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize;
#define _PCD_GET_MODE_32_PcdTdxAcceptPageSize  _gPcd_FixedAtBuild_PcdTdxAcceptPageSize
//#define _PCD_SET_MODE_32_PcdTdxAcceptPageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFlashNvStorageVariableBase  0U
#define _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFlashNvStorageVariableBase  _PCD_SIZE_PcdOvmfFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdOvmfFlashNvStorageVariableBase  0xFFC00000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase = _PCD_VALUE_PcdOvmfFlashNvStorageVariableBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdOvmfFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdOvmfFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdOvmfFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCfvRawDataSize  0U
#define _PCD_SIZE_PcdCfvRawDataSize 4
#define _PCD_GET_MODE_SIZE_PcdCfvRawDataSize  _PCD_SIZE_PcdCfvRawDataSize 
#define _PCD_VALUE_PcdCfvRawDataSize  0x84000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCfvRawDataSize = _PCD_VALUE_PcdCfvRawDataSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCfvRawDataSize;
#define _PCD_GET_MODE_32_PcdCfvRawDataSize  _gPcd_FixedAtBuild_PcdCfvRawDataSize
//#define _PCD_SET_MODE_32_PcdCfvRawDataSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuHotPlugSupport  0U
#define _PCD_SIZE_PcdCpuHotPlugSupport 1
#define _PCD_GET_MODE_SIZE_PcdCpuHotPlugSupport  _PCD_SIZE_PcdCpuHotPlugSupport 
#define _PCD_VALUE_PcdCpuHotPlugSupport  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdCpuHotPlugSupport = _PCD_VALUE_PcdCpuHotPlugSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuHotPlugSupport;
#define _PCD_GET_MODE_BOOL_PcdCpuHotPlugSupport  _gPcd_FixedAtBuild_PcdCpuHotPlugSupport
//#define _PCD_SET_MODE_BOOL_PcdCpuHotPlugSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
AcpiTimerLibConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
QemuFwCfgInitialize (
  VOID
  );

RETURN_STATUS
EFIAPI
QemuFwCfgSimpleParserInit (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{
  EFI_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = AcpiTimerLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = QemuFwCfgInitialize ();
  ASSERT_RETURN_ERROR (Status);

  Status = QemuFwCfgSimpleParserInit ();
  ASSERT_RETURN_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPeimRevision = 0x00000000U;

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )

{
  return InitializePlatform (FileHandle, PeiServices);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
