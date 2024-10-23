#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Pi/PiBootMode.h>
#include <Pi/PiHob.h>
#include <Library/HobLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Protocol/Shell.h>
#include <Library/FileHandleLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiLib.h>


#define BUFFER_MAX_SIZE  100

STATIC   UINT64     mDupCount = 0;

UINTN
GuidToString (
  IN  EFI_GUID  *Guid,
  IN  CHAR16    *Buffer,
  IN  UINTN     BufferSize
  )
{
  return UnicodeSPrint (
           Buffer,
           BufferSize,
           L"%g.hob.bin",
           Guid
           );
}


EFI_STATUS 
  OpenShellProtocol(
   EFI_SHELL_PROTOCOL            ** gEfiShellProtocol
  )
{
    EFI_STATUS                      Status;
    Status = gBS->OpenProtocol(
            gImageHandle,
            &gEfiShellProtocolGuid,
            (VOID **)gEfiShellProtocol,
            gImageHandle,
            NULL,
            EFI_OPEN_PROTOCOL_GET_PROTOCOL
            );
    if (EFI_ERROR(Status)) {
        Status = gBS->LocateProtocol(
                &gEfiShellProtocolGuid,
                NULL,
                (VOID **)gEfiShellProtocol
                );
        if (EFI_ERROR(Status)) {
            gEfiShellProtocol = NULL;
        }
  }
  return Status;
}


EFI_STATUS 
WriteHobData(
   EFI_SHELL_PROTOCOL  *gEfiShellProtocol,
   CONST CHAR16        *OutputFile,
   UINT8               *Buf,
   UINTN               WbufSize
  )
{
  EFI_STATUS                      Status;
  SHELL_FILE_HANDLE             FileHandle;
  UINT64              FileSize;
    CHAR16                             *NewFileName;
	  UINTN                              Size;



  Status = gEfiShellProtocol->OpenFileByName((CONST CHAR16*)OutputFile, &FileHandle, EFI_FILE_MODE_CREATE | EFI_FILE_MODE_WRITE | EFI_FILE_MODE_READ); 
  if (EFI_ERROR(Status)){
    DEBUG((DEBUG_ERROR, "Please Input Valid Filename!\n"));
    return Status;
  }
  
  //
  // Get the file size.
  //
  FileSize = 0;
  Status = ShellProtocol->GetFileSize (FileHandle, &FileSize);
  //
  // Check if file exists
  //
  if (FileSize > 0) {
	mDupCount += 1;  
    Size       = StrSize (OutputFile);
    NewFileName = AllocateZeroPool (Size*2);
    if (NewFileName == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
      return Status;
    }
	StrCatS (NewFileName, Size / sizeof (CHAR16), OutputFile);
	UnicodeSPrint (
           NewFileName + StrLen(OutputFile),
           Size,
           L"_%04x",
           mDupCount
           );
	StrCatS (NewFileName, Size / sizeof (CHAR16), OutputFile);
  }

  Status = gEfiShellProtocol->WriteFile(FileHandle,&WbufSize,Buf);
  if (EFI_ERROR(Status)){
    DEBUG((DEBUG_ERROR, "Read Filename %s Fail!\n",OutputFile));
    return Status;
  }
  
  Status = gEfiShellProtocol->CloseFile(FileHandle);
  if (FileSize > 0) {
    FreePool(NewFileName);
  }

  return Status;
}


EFI_STATUS
EFIAPI
DumpHobEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS                    Status;
  EFI_PEI_HOB_POINTERS          Hob;
  EFI_SHELL_PROTOCOL            *gEfiShellProtocol;
  Status = EFI_SUCCESS;
  CHAR16                    OFile[BUFFER_MAX_SIZE];
  
  
  Status = OpenShellProtocol(&gEfiShellProtocol);

  DEBUG ((EFI_D_ERROR , "[Csdn] DumpHobEntry Start..\n"));
  
  Status = OpenShellProtocol(&gEfiShellProtocol);

  Hob.Raw = GetHobList ();
  //Dump all hobs transfered from PEI
  for (; !END_OF_HOB_LIST(Hob); Hob.Raw = GET_NEXT_HOB(Hob)) {
    DEBUG((DEBUG_ERROR, "[Csdn] Guid:%g Type:0x%x Length:%x\n",
    Hob.Guid,
    Hob.Header->HobType,
    Hob.Header->HobLength
    ));
    ZeroMem (OFile, sizeof (OFile));
    GuidToString (&Hob.Guid->Name, OFile, BUFFER_MAX_SIZE);
    WriteHobData (gEfiShellProtocol, OFile, (UINT8 *)Hob.Raw, Hob.Header->HobLength);
  }

  DEBUG ((DEBUG_ERROR, "[Csdn] %a Exit\n",__FUNCTION__));
  return Status;
}
