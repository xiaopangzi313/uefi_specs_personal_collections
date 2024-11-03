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
static  LIST_ENTRY      gHobList;

typedef struct  _HOB_INFO
{
  EFI_GUID    Guid;
  CHAR16      GuidString[BUFFER_MAX_SIZE];
  UINT32      Count;
  LIST_ENTRY  Link;
}HOB_INFO;

UINTN
GuidToStringWithCount (
  IN  EFI_GUID  *Guid,
  IN  CHAR16    *Buffer,
  IN  UINTN     BufferSize,
  IN  UINT32    Count
  )
{
  return UnicodeSPrint (
           Buffer,
           BufferSize,
           L"%g_%d.hob.bin",
           Guid,
           Count
           );
}


VOID
UpdateDupHobGuidStr (
  IN     EFI_GUID    *Guid,
  IN     LIST_ENTRY  *List,
  IN OUT HOB_INFO    *HobInfo
  )
{
  UINT32      NodeCount;
  HOB_INFO    *NodeHobInfo;
  LIST_ENTRY  *Link;

  NodeCount = 0;

  if(IsListEmpty(List)) {
    return;
  }

  for (Link = GetFirstNode (List);
        !IsNull (List, Link);
        Link = GetNextNode (List, Link))
  {
    NodeHobInfo = BASE_CR (
                      Link,
                      HOB_INFO,
                      Guid
                      );
    if (CompareGuid(Guid, &NodeHobInfo->Guid)) {
      NodeCount += 1;
    }
  }
  HobInfo->Count = NodeCount;
  GuidToStringWithCount (&HobInfo->Guid, HobInfo->GuidString, BUFFER_MAX_SIZE, HobInfo->Count);
}




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
  Status = gEfiShellProtocol->GetFileSize (FileHandle, &FileSize);
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
WriteHobData2(
   EFI_SHELL_PROTOCOL  *gEfiShellProtocol,
   CONST CHAR16        *OutputFile,
   UINT8               *Buf,
   UINTN               WbufSize
  )
{
  EFI_STATUS                    Status;
  SHELL_FILE_HANDLE             FileHandle;

  Status = gEfiShellProtocol->OpenFileByName((CONST CHAR16*)OutputFile, &FileHandle, EFI_FILE_MODE_CREATE | EFI_FILE_MODE_WRITE | EFI_FILE_MODE_READ); 
  if (EFI_ERROR(Status)){
    DEBUG((DEBUG_ERROR, "Please Input Valid Filename!\n"));
    return Status;
  }
  

  Status = gEfiShellProtocol->WriteFile(FileHandle, &WbufSize, Buf);
  if (EFI_ERROR(Status)){
    DEBUG((DEBUG_ERROR, "Read Filename %s Fail!\n",OutputFile));
    return Status;
  }
  
  Status = gEfiShellProtocol->CloseFile(FileHandle);
  if (EFI_ERROR(Status)){
    DEBUG((DEBUG_ERROR, "Close file %s Fail!\n",OutputFile));
    return Status;
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
  HOB_INFO                      *HobInfo; 

  Status = EFI_SUCCESS;
  
  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Enter \n",
    __FUNCTION__
    ));

  InitializeListHead (&gHobList);
  Status = OpenShellProtocol(&gEfiShellProtocol);

  Hob.Raw = GetHobList ();
  //Dump all hobs transfered from PEI
  for (; !END_OF_HOB_LIST(Hob); Hob.Raw = GET_NEXT_HOB(Hob)) {
    DEBUG((DEBUG_ERROR, "[Csdn] Guid:%g Type:0x%x Length:%x\n",
    Hob.Guid,
    Hob.Header->HobType,
    Hob.Header->HobLength
    ));

    HobInfo = AllocateZeroPool (sizeof (HOB_INFO));
    CopyMem (&HobInfo->Guid, &Hob.Guid, sizeof (EFI_GUID));
    UpdateDupHobGuidStr (&HobInfo->Guid, &gHobList, HobInfo);
    InsertTailList (&gHobList, &HobInfo->Link);
    WriteHobData2 (gEfiShellProtocol, HobInfo->GuidString, (UINT8 *)Hob.Raw, Hob.Header->HobLength);
  }

  DEBUG((
    EFI_D_ERROR,
    "[CSDN] %a Exit \n",
    __FUNCTION__
    ));
  return Status;
}
