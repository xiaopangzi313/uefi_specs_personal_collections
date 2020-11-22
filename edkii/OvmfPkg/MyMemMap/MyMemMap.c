#include <uefi.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>



EFI_STATUS
EFIAPI
MyMemMapEntry(
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
)
{

  EFI_STATUS                Status;
  UINTN                     EfiMemoryMapSize;
  EFI_MEMORY_DESCRIPTOR     *EfiMemoryMap;
  EFI_MEMORY_DESCRIPTOR     *EfiMemoryMapEnd;
  EFI_MEMORY_DESCRIPTOR     *EfiEntry;
  UINTN                     EfiMapKey;
  UINTN                     EfiDescriptorSize;
  UINT32                    EfiDescriptorVersion;

  UINT64                    BootServicesDataPage = 0;
  UINT64                    BootServicesCodePage = 0;
  UINT64                    ACPIReclaimMemoryPage = 0;
  UINT64                    ACPIMemoryNVSPage = 0;
  UINT64                    ReservedMemoryTypePage = 0;
  UINT64                    RuntimeServicesCodePage = 0;
  UINT64                    RuntimeServicesDataPage = 0;
  UINT64                    LoaderCodePage = 0;
  UINT64                    LoaderDataPage = 0;
  UINT64                    MaxMemoryTypePage = 0;
  UINT64                    ConventionalMemoryPage = 0;
  UINT64                    UnusableMemoryPage = 0;
  UINT64                    MemoryMappedIOPage = 0;
  UINT64                    MemoryMappedIOPortSpacePage = 0;
  UINT64                    PalCodePage = 0;
  UINT64                    PersistentMemoryPage = 0;


  EfiMemoryMapSize = 0;
  EfiMemoryMap = NULL;
  Status = gBS->GetMemoryMap (
                  &EfiMemoryMapSize,
                  EfiMemoryMap,
                  &EfiMapKey,
                  &EfiDescriptorSize,
                  &EfiDescriptorVersion
                  );
  ASSERT (Status == EFI_BUFFER_TOO_SMALL);
  do {

    EfiMemoryMap = AllocatePool (EfiMemoryMapSize);
    if (EfiMemoryMap == NULL){
      DEBUG ((EFI_D_ERROR, "ERROR!! Null Pointer returned by AllocatePool ()\n"));
      ASSERT_EFI_ERROR (EFI_OUT_OF_RESOURCES);
      return Status;
    }
    Status = gBS->GetMemoryMap (
                    &EfiMemoryMapSize,
                    EfiMemoryMap,
                    &EfiMapKey,
                    &EfiDescriptorSize,
                    &EfiDescriptorVersion
                    );
    if (EFI_ERROR(Status)) {
      FreePool (EfiMemoryMap);
    }
  } while (Status == EFI_BUFFER_TOO_SMALL);

  DEBUG((DEBUG_ERROR | DEBUG_PAGE,"[CSDN] EfiMemoryMapSize=0x%x EfiDescriptorSize=0x%x EfiMemoryMap=0x%x \n", EfiMemoryMapSize, EfiDescriptorSize, (UINTN)EfiMemoryMap));

  EfiMemoryMapEnd = (EFI_MEMORY_DESCRIPTOR *)((UINT8 *)EfiMemoryMap + EfiMemoryMapSize);
  EfiEntry = EfiMemoryMap;

  DEBUG((DEBUG_ERROR | DEBUG_PAGE,"===========================%S============================== Start\n", L"CSDN MemMap"));

  while (EfiEntry < EfiMemoryMapEnd) {

      if (EfiEntry->Type == EfiReservedMemoryType){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiReservedMemoryType  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         ReservedMemoryTypePage = ReservedMemoryTypePage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiLoaderCode){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiLoaderCode  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         LoaderCodePage = LoaderCodePage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiLoaderData){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiLoaderData  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         LoaderDataPage = LoaderDataPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiBootServicesCode){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiBootServicesCode  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         BootServicesCodePage = BootServicesCodePage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiBootServicesData){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiBootServicesData  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         BootServicesDataPage = BootServicesDataPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiRuntimeServicesCode){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiRuntimeServicesCode  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         RuntimeServicesCodePage = RuntimeServicesCodePage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiRuntimeServicesData){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiRuntimeServicesData  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         RuntimeServicesDataPage = RuntimeServicesDataPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiConventionalMemory){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiConventionalMemory  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         ConventionalMemoryPage = ConventionalMemoryPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiUnusableMemory){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiUnusableMemory  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         UnusableMemoryPage = UnusableMemoryPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiACPIReclaimMemory){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiACPIReclaimMemory  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         ACPIReclaimMemoryPage = ACPIReclaimMemoryPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiACPIMemoryNVS){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiACPIMemoryNVS  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         ACPIMemoryNVSPage = ACPIMemoryNVSPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiMemoryMappedIO){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiMemoryMappedIO  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         MemoryMappedIOPage = MemoryMappedIOPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiMemoryMappedIOPortSpace){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiMemoryMappedIOPortSpace  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         MemoryMappedIOPortSpacePage = MemoryMappedIOPortSpacePage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiPalCode){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiPalCode  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         PalCodePage = PalCodePage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiPersistentMemory){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiPersistentMemory  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         PersistentMemoryPage = PersistentMemoryPage + EfiEntry->NumberOfPages;
      }else if (EfiEntry->Type == EfiMaxMemoryType){
         DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiMaxMemoryType  %3d %16lx pn %16lx \n", EfiEntry->Type, EfiEntry->PhysicalStart, EfiEntry->NumberOfPages));
         MaxMemoryTypePage = MaxMemoryTypePage + EfiEntry->NumberOfPages;
      }

    EfiEntry = NEXT_MEMORY_DESCRIPTOR(EfiEntry, EfiDescriptorSize);
  }
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiBootServicesData Page Number: %16lx  %dMB\n", BootServicesDataPage, BootServicesDataPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiBootServicesCode Page Number: %16lx  %dMB\n", BootServicesCodePage, BootServicesCodePage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiACPIReclaimMemory Page Number: %16lx  %dMB\n", ACPIReclaimMemoryPage, ACPIReclaimMemoryPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiACPIMemoryNVS Page Number: %16lx  %dMB\n", ACPIMemoryNVSPage, ACPIMemoryNVSPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiReservedMemoryType Page Number: %16lx  %dMB\n", ReservedMemoryTypePage, ReservedMemoryTypePage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiRuntimeServicesCode Page Number: %16lx  %dMB\n", RuntimeServicesCodePage, RuntimeServicesCodePage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiRuntimeServicesData Page Number: %16lx  %dMB\n", RuntimeServicesDataPage, RuntimeServicesDataPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiLoaderCode Page Number: %16lx  %dMB\n", LoaderCodePage, LoaderCodePage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiLoaderData Page Number: %16lx  %dMB\n", LoaderDataPage, LoaderDataPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiMaxMemoryType Page Number: %16lx  %dMB\n", MaxMemoryTypePage, MaxMemoryTypePage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiConventionalMemory Page Number: %16lx  %dMB\n", ConventionalMemoryPage, ConventionalMemoryPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiUnusableMemory Page Number: %16lx  %dMB\n", UnusableMemoryPage, UnusableMemoryPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiMemoryMappedIO Page Number: %16lx  %dMB\n", MemoryMappedIOPage, MemoryMappedIOPage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiMemoryMappedIOPortSpace Page Number: %16lx  %dMB\n", MemoryMappedIOPortSpacePage, MemoryMappedIOPortSpacePage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiPalCode Page Number: %16lx  %dMB\n", PalCodePage, PalCodePage*4/1024));
  DEBUG((DEBUG_ERROR | DEBUG_PAGE, "[CSDN] EfiPersistentMemory Page Number: %16lx  %dMB\n", PersistentMemoryPage, PersistentMemoryPage*4/1024));

  DEBUG((DEBUG_ERROR | DEBUG_PAGE,"===========================%S============================== End\n", L"CSDN MemMap"));

  return Status;
}
