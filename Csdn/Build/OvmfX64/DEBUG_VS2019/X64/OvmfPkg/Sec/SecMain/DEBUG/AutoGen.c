/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0xdf1ccef6, 0xf301, 0x4a63, {0x96, 0x61, 0xfc, 0x60, 0x30, 0xdc, 0xc8, 0x80}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "SecMain";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiOvmfPkgTokenSpaceGuid = {0x93bb96af, 0xb9f2, 0x4eb8, {0x94, 0x62, 0xe0, 0xba, 0x74, 0x56, 0x42, 0x36}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gUefiCpuPkgTokenSpaceGuid = { 0xac05bf33, 0x995a, 0x4ed4, { 0xaa, 0xb8, 0xef, 0x7a, 0xe8, 0xf, 0x5c, 0xb0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiRngAlgorithmUnSafe = { 0x869f728c, 0x409d, 0x4ab4, {0xac, 0x03, 0x71, 0xd3, 0x09, 0xc1, 0xb3, 0xf4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gLzmaCustomDecompressGuid = { 0xEE4E5898, 0x3914, 0x4259, { 0x9D, 0x6E, 0xDC, 0x7B, 0xD7, 0x94, 0x03, 0xCF }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gCcEventEntryHobGuid = { 0x20f8fd36, 0x6d00, 0x40fb, { 0xb7, 0x04, 0xd1, 0x2c, 0x15, 0x3c, 0x62, 0xeb }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTemporaryRamSupportPpiGuid = { 0xdbe23aa9, 0xa345, 0x4b97, {0x85, 0xb6, 0xb2, 0x26, 0xf1, 0x61, 0x73, 0x89} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMpInitLibMpDepPpiGuid = {0x138f9cf4, 0xf0e7, 0x4721, { 0x8f, 0x49, 0xf5, 0xff, 0xec, 0xf4, 0x2d, 0x40}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMpInitLibUpDepPpiGuid = {0xb590774, 0xbc67, 0x49f4, { 0xa7, 0xdb, 0xe8, 0x2e, 0x89, 0xe6, 0xb5, 0xd6}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSmmSmramRequire = _PCD_VALUE_PcdSmmSmramRequire;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase = _PCD_VALUE_PcdSevEsWorkAreaBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase = _PCD_VALUE_PcdOvmfPeiMemFvBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize = _PCD_VALUE_PcdOvmfPeiMemFvSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase = _PCD_VALUE_PcdOvmfDxeMemFvBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize = _PCD_VALUE_PcdOvmfDxeMemFvSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase = _PCD_VALUE_PcdOvmfSecGhcbBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize = _PCD_VALUE_PcdOvmfSecGhcbSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase = _PCD_VALUE_PcdOvmfSecPageTablesBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase = _PCD_VALUE_PcdOvmfSecPeiTempRamBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize = _PCD_VALUE_PcdOvmfSecPeiTempRamSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress = _PCD_VALUE_PcdGuidedExtractHandlerTableAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize = _PCD_VALUE_PcdGuidedExtractHandlerTableSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd = _PCD_VALUE_PcdOvmfDecompressionScratchEnd;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdInitValueInTempStack = _PCD_VALUE_PcdInitValueInTempStack;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfConfidentialComputingWorkAreaHeader = _PCD_VALUE_PcdOvmfConfidentialComputingWorkAreaHeader;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfWorkAreaBase = _PCD_VALUE_PcdOvmfWorkAreaBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecValidatedStart = _PCD_VALUE_PcdOvmfSecValidatedStart;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecValidatedEnd = _PCD_VALUE_PcdOvmfSecValidatedEnd;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupBase = _PCD_VALUE_PcdOvmfSecGhcbBackupBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdTdxAcceptPageSize = _PCD_VALUE_PcdTdxAcceptPageSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecApicPageTableBase = _PCD_VALUE_PcdOvmfSecApicPageTableBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecApicPageTableSize = _PCD_VALUE_PcdOvmfSecApicPageTableSize;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdOvmfSnpSecretsBase  0U
#define _PCD_SIZE_PcdOvmfSnpSecretsBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsBase  _PCD_SIZE_PcdOvmfSnpSecretsBase 
#define _PCD_VALUE_PcdOvmfSnpSecretsBase  0x0080D000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase = _PCD_VALUE_PcdOvmfSnpSecretsBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsBase  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsBase
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSnpSecretsSize  0U
#define _PCD_SIZE_PcdOvmfSnpSecretsSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSnpSecretsSize  _PCD_SIZE_PcdOvmfSnpSecretsSize 
#define _PCD_VALUE_PcdOvmfSnpSecretsSize  0x00001000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize = _PCD_VALUE_PcdOvmfSnpSecretsSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize;
#define _PCD_GET_MODE_32_PcdOvmfSnpSecretsSize  _gPcd_FixedAtBuild_PcdOvmfSnpSecretsSize
//#define _PCD_SET_MODE_32_PcdOvmfSnpSecretsSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBackupSize  0U
#define _PCD_SIZE_PcdOvmfSecGhcbBackupSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBackupSize  _PCD_SIZE_PcdOvmfSecGhcbBackupSize 
#define _PCD_VALUE_PcdOvmfSecGhcbBackupSize  0x00001000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize = _PCD_VALUE_PcdOvmfSecGhcbBackupSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBackupSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBackupSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBackupSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfCpuidBase  0U
#define _PCD_SIZE_PcdOvmfCpuidBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidBase  _PCD_SIZE_PcdOvmfCpuidBase 
#define _PCD_VALUE_PcdOvmfCpuidBase  0x0080E000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidBase = _PCD_VALUE_PcdOvmfCpuidBase;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfCpuidBase;
#define _PCD_GET_MODE_32_PcdOvmfCpuidBase  _gPcd_FixedAtBuild_PcdOvmfCpuidBase
//#define _PCD_SET_MODE_32_PcdOvmfCpuidBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfCpuidSize  0U
#define _PCD_SIZE_PcdOvmfCpuidSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfCpuidSize  _PCD_SIZE_PcdOvmfCpuidSize 
#define _PCD_VALUE_PcdOvmfCpuidSize  0x00001000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdOvmfCpuidSize = _PCD_VALUE_PcdOvmfCpuidSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfCpuidSize;
#define _PCD_GET_MODE_32_PcdOvmfCpuidSize  _gPcd_FixedAtBuild_PcdOvmfCpuidSize
//#define _PCD_SET_MODE_32_PcdOvmfCpuidSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuInitIpiDelayInMicroSeconds  0U
#define _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds 4
#define _PCD_GET_MODE_SIZE_PcdCpuInitIpiDelayInMicroSeconds  _PCD_SIZE_PcdCpuInitIpiDelayInMicroSeconds 
#define _PCD_VALUE_PcdCpuInitIpiDelayInMicroSeconds  10000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds = _PCD_VALUE_PcdCpuInitIpiDelayInMicroSeconds;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds;
#define _PCD_GET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  _gPcd_FixedAtBuild_PcdCpuInitIpiDelayInMicroSeconds
//#define _PCD_SET_MODE_32_PcdCpuInitIpiDelayInMicroSeconds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  0U
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress  _PCD_SIZE_PcdCpuLocalApicBaseAddress 
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress  0xfee00000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress = _PCD_VALUE_PcdCpuLocalApicBaseAddress;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdMaximumGuidedExtractHandler  0U
#define _PCD_SIZE_PcdMaximumGuidedExtractHandler 4
#define _PCD_GET_MODE_SIZE_PcdMaximumGuidedExtractHandler  _PCD_SIZE_PcdMaximumGuidedExtractHandler 
#define _PCD_VALUE_PcdMaximumGuidedExtractHandler  0x10U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler = _PCD_VALUE_PcdMaximumGuidedExtractHandler;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler;
#define _PCD_GET_MODE_32_PcdMaximumGuidedExtractHandler  _gPcd_FixedAtBuild_PcdMaximumGuidedExtractHandler
//#define _PCD_SET_MODE_32_PcdMaximumGuidedExtractHandler  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdCpuStackSwitchExceptionList  0U
#define _PCD_VALUE_PcdCpuStackSwitchExceptionList  (VOID *)_gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList[2] = {0x08, 0x0E};
extern const UINT8 _gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList[2];
#define _PCD_GET_MODE_PTR_PcdCpuStackSwitchExceptionList  (VOID *)_gPcd_FixedAtBuild_PcdCpuStackSwitchExceptionList
#define _PCD_SIZE_PcdCpuStackSwitchExceptionList 2
#define _PCD_GET_MODE_SIZE_PcdCpuStackSwitchExceptionList  _PCD_SIZE_PcdCpuStackSwitchExceptionList 
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdCpuStackSwitchExceptionList = 2;
//#define _PCD_SET_MODE_PTR_PcdCpuStackSwitchExceptionList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuKnownGoodStackSize  0U
#define _PCD_SIZE_PcdCpuKnownGoodStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuKnownGoodStackSize  _PCD_SIZE_PcdCpuKnownGoodStackSize 
#define _PCD_VALUE_PcdCpuKnownGoodStackSize  2048U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize = _PCD_VALUE_PcdCpuKnownGoodStackSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize;
#define _PCD_GET_MODE_32_PcdCpuKnownGoodStackSize  _gPcd_FixedAtBuild_PcdCpuKnownGoodStackSize
//#define _PCD_SET_MODE_32_PcdCpuKnownGoodStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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
OpensslLibConstructor (
  VOID
  );

RETURN_STATUS
EFIAPI
LzmaDecompressLibConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  VOID
  )
{
  RETURN_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = AcpiTimerLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = OpensslLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

  Status = LzmaDecompressLibConstructor ();
  ASSERT_RETURN_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  VOID
  )
{

}
