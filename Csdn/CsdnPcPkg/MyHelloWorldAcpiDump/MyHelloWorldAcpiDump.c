#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Protocol/SimpleFileSystem.h>
#include <Library/MemoryAllocationLib.h>
#include <Guid/FileInfo.h>
#include <IndustryStandard/Acpi.h>
#include <Protocol/LoadedImage.h>
#include <Library/PrintLib.h>
#include <Guid/Acpi.h>
#include <Library/DebugLib.h>


EFI_STATUS
SaveAcpiTable (
           IN EFI_HANDLE Handle,
           IN CHAR16 *VolSubDir,
           IN EFI_ACPI_DESCRIPTION_HEADER *Table
           )
{
  EFI_STATUS Status;
  static UINTN Index = 0;
  CHAR16 Path[3 + 4 + 1 + 3 + 1];
  EFI_SIMPLE_FILE_SYSTEM_PROTOCOL *FsProtocol;
  EFI_FILE_PROTOCOL *Fs;
  EFI_FILE_PROTOCOL *Dir;
  EFI_FILE_PROTOCOL *File;
  UINTN Size;

  if (Table == NULL) {
    Print(L"[CSDN] <skipping empty SDT entry\n");
    return EFI_NOT_FOUND;
  }

  Print(L"[CSDN] Table %.4a @ %p (0x%x bytes)\n", &Table->Signature, Table, Table->Length);
  Index = Index % 100;
  Path[0] = (CHAR16) ('0' + Index / 10);
  Path[1] = (CHAR16) ('0' + Index % 10);
  Path[2] = '-';
  Path[3] = ((CHAR8 *) &Table->Signature)[0];
  Path[4] = ((CHAR8 *) &Table->Signature)[1];
  Path[5] = ((CHAR8 *) &Table->Signature)[2];
  Path[6] = ((CHAR8 *) &Table->Signature)[3];
  Path[7] = L'.';
  Path[8] = L'a';
  Path[9] = L'm';
  Path[10] = L'l';
  Path[11] = L'\0';
  Index++;

  Status = gBS->HandleProtocol(Handle, &gEfiSimpleFileSystemProtocolGuid,
                               (void **) &FsProtocol);
  if (Status != EFI_SUCCESS) {
    Print(L"Could not open filesystem: %r\n", Status);
    return Status;
  }

  Status = FsProtocol->OpenVolume(FsProtocol, &Fs);
  if (Status != EFI_SUCCESS) {
    Print(L"Could not open volume: %r\n", Status);
    return Status;
  }

  Status = Fs->Open(Fs, &Dir, VolSubDir, EFI_FILE_MODE_CREATE |
                     EFI_FILE_MODE_READ | EFI_FILE_MODE_WRITE,
                     EFI_FILE_DIRECTORY);
  if (Status != EFI_SUCCESS) {
    Print(L"Could not open '\\%s': %r\n", VolSubDir, Status);
    return Status;
  }

  if (Dir->Open(Dir, &File, Path, EFI_FILE_MODE_READ |
                EFI_FILE_MODE_WRITE, 0) == EFI_SUCCESS) {
    /*
     * Delete existing file.
     */
    Print(L"Overwriting existing'\\%s\\%s': %r\n", VolSubDir, Path);
    Status = Dir->Delete(File);
    File = NULL;
    if (Status != EFI_SUCCESS) {
      Print(L"Could not delete existing '\\%s\\%s': %r\n", VolSubDir, Path, Status);
      goto closeDir;
    }
  }

  Status = Dir->Open(Dir, &File, Path, EFI_FILE_MODE_CREATE | EFI_FILE_MODE_READ |
                      EFI_FILE_MODE_WRITE, 0);
  if (Status != EFI_SUCCESS) {
    Print(L"Could not open '\\%s\\%s': %r\n", VolSubDir, Path, Status);
    goto closeDir;
  }

  Size = Table->Length;
  Status = File->Write(File, &Size, (void *) Table);
  if (Status != EFI_SUCCESS || Size != Table->Length) {
    Print(L"Writing '\\%s\\%s' failed: %r\n", VolSubDir, Path, Status);
  } else {
    File->Flush(File);
  }

  Dir->Close(File);
 closeDir:
  Fs->Close(Dir);
  return Status;
}

EFI_STATUS
EFIAPI
DumpAllAcpiTables (
  EFI_ACPI_5_0_ROOT_SYSTEM_DESCRIPTION_POINTER *Rsdp,
  EFI_LOADED_IMAGE_PROTOCOL *ImageProtocol
)
{
  EFI_STATUS Status = EFI_SUCCESS;
  UINTN SdtEntrySize;
  EFI_PHYSICAL_ADDRESS SdtTable;
  EFI_PHYSICAL_ADDRESS SdtTableEnd;
  EFI_ACPI_DESCRIPTION_HEADER *Rsdt;
  EFI_ACPI_DESCRIPTION_HEADER *Xsdt;
  CHAR16 *VolSubDir = L".";
  
  if (Rsdp == NULL) {
    Print(L"No ACPI support found\n");
    goto done;
  }
  if (Rsdp->Revision >= EFI_ACPI_2_0_ROOT_SYSTEM_DESCRIPTION_POINTER_REVISION) {
    Xsdt = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) Rsdp->XsdtAddress;
  } else {
    Xsdt = NULL;
  }
  Rsdt = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) Rsdp->RsdtAddress;
  DEBUG((DEBUG_ERROR, "[CSDN] Xsdt:%lx Rsdt:%lx\n", Xsdt, Rsdt));
  Print (L"[CSDN] Xsdt:%lx Rsdt:%lx\n", Xsdt, Rsdt);
  if (Xsdt != NULL ) {
	SdtTable = (UINTN) Xsdt;
	SdtTableEnd = SdtTable + Xsdt->Length;
	SdtEntrySize = sizeof(UINT64);
  } else if (Rsdt != NULL ){
	SdtTable = (UINTN) Rsdt;
    SdtTableEnd = SdtTable + Rsdt->Length;
    SdtEntrySize = sizeof(UINT32);
  } else {
    Print(L"[CSDN]No valid RSDT/XSDT: %r\n", Status);
    goto done;
  }
  
  for (SdtTable += sizeof(EFI_ACPI_DESCRIPTION_HEADER);
     SdtTable < SdtTableEnd;
     SdtTable += SdtEntrySize) {
    EFI_ACPI_DESCRIPTION_HEADER *TableHeader;
    
    if (SdtEntrySize == sizeof(UINT32)) {
      TableHeader = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) *(UINT32 *) SdtTable;
    } else {
      TableHeader = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) *(UINT64 *) SdtTable;
    }

    Status = SaveAcpiTable(ImageProtocol->DeviceHandle, VolSubDir, TableHeader);
    
    if (Status == EFI_SUCCESS &&
        TableHeader->Signature == EFI_ACPI_5_1_FIXED_ACPI_DESCRIPTION_TABLE_SIGNATURE) {
      EFI_ACPI_DESCRIPTION_HEADER *DsdtHeader;
      EFI_ACPI_DESCRIPTION_HEADER *FacsHeader;
    
      EFI_ACPI_5_1_FIXED_ACPI_DESCRIPTION_TABLE *Fadt = (void *) TableHeader;
      if (TableHeader->Revision >= 3 && Fadt->XDsdt != 0) {
        DsdtHeader = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) Fadt->XDsdt;
      } else {
        DsdtHeader = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) Fadt->Dsdt;
      }
    
      if (TableHeader->Revision >= 3 && Fadt->XFirmwareCtrl != 0) {
        FacsHeader = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) Fadt->XFirmwareCtrl;
      } else {
        FacsHeader = (EFI_ACPI_DESCRIPTION_HEADER *) (UINTN) Fadt->FirmwareCtrl;
      }
    
      if (DsdtHeader != NULL) {
        SaveAcpiTable(ImageProtocol->DeviceHandle, VolSubDir, DsdtHeader);
      } else {
        Print(L"[CSDN] No DSDT\n");
      }
    
      if (FacsHeader != NULL) {
        SaveAcpiTable(ImageProtocol->DeviceHandle, VolSubDir, FacsHeader);
      } else {
        Print(L"[CSDN] No FACS\n");
      }
    }
  }
  
  done:
	return Status;
}

EFI_STATUS
EFIAPI
UefiMain (
          IN EFI_HANDLE ImageHandle,
          IN EFI_SYSTEM_TABLE *SystemTable
          )
{
  UINTN i, j;
  EFI_STATUS Status = EFI_SUCCESS;
  EFI_ACPI_5_0_ROOT_SYSTEM_DESCRIPTION_POINTER *Rsdp;
  EFI_LOADED_IMAGE_PROTOCOL *ImageProtocol;
  
  EFI_GUID AcpiGuids[2] = {
    EFI_ACPI_20_TABLE_GUID,
    ACPI_10_TABLE_GUID
  };
  
  Status = gBS->HandleProtocol (ImageHandle, &gEfiLoadedImageProtocolGuid,
                                (void **) &ImageProtocol);
  if (Status != EFI_SUCCESS) {
    Print(L"[CSDN] Could not get loaded image device handle: %r\n", Status);
    goto done;
  }
  
  for (j = 0; j < 2; j++) {
    for (i = 0; i < gST->NumberOfTableEntries; i++) {
      if (CompareGuid(&gST->ConfigurationTable[i].VendorGuid, &AcpiGuids[j])) {
        Rsdp = gST->ConfigurationTable[i].VendorTable;
	    if (Rsdp != NULL) {
	  	  DumpAllAcpiTables(Rsdp, ImageProtocol);
	    }
      }
    }
  }
  done:
	return Status;
}
  