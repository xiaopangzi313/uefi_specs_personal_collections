#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/ShellCEntryLib.h> 
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiRuntimeLib.h>
#include <Protocol/GraphicsOutput.h>
#include <Protocol/SimplePointer.h>
#include <Protocol/SimpleTextInEx.h>
#include <Protocol/SimpleFileSystem.h>
#include <Library/DebugLib.h>

#include <Guid/GlobalVariable.h>
#include <Guid/ShellLibHiiGuid.h>

#include <Protocol/Shell.h>
#include <Protocol/ShellParameters.h>
#include <Protocol/DevicePath.h>
#include <Protocol/LoadedImage.h>
#include <Protocol/UnicodeCollation.h>

#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PcdLib.h>
#include <Library/ShellCommandLib.h>
#include <Library/ShellLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/HiiLib.h>
#include <Library/SortLib.h>
#include <Library/FileHandleLib.h>

#include <Protocol/EfiShell.h>
#include <guid/FileInfo.h>

EFI_STATUS
EFIAPI
BZero (
  OUT     CHAR16                    *Destination,
  IN      UINTN                     Length
  )
 {
	UINT32 i ;
	CHAR8 * ptr = (CHAR8 * )Destination;
	for (i = 0; i < 2*Length ; i ++){
		ptr [i] = 0;
	}
	return EFI_SUCCESS;
 }

EFI_STATUS OpenShellProtocol( EFI_SHELL_PROTOCOL            **gEfiShellProtocol )
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
    //
    // Search for the shell protocol
    //
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

VOID
Ascii2UnicodeString (
  CHAR8    *String,
  CHAR16   *UniString
  )
{
  while (*String != '\0') {
    *(UniString++) = (CHAR16) *(String++);
  }
  //
  // End the UniString with a NULL.
  //
  *UniString = '\0';
} 


INTN
EFIAPI
ShellAppMain( UINTN Argc, CHAR16 **Argv)
{ 
  CHAR16 * OldLogFileName = NULL;
  CHAR16  *LineBuff = NULL;
  CHAR16  NewFileName[128] = {0};
  CHAR16 * ArrayBuffer  = NULL;
  EFI_STATUS Status ;
  SHELL_FILE_HANDLE FileHandle;
  UINTN Index = 0;
  UINTN WbufSize = 0;
  UINTN FileSize = 0;
  UINTN i = 0;
  UINTN StartIndex = 0;
  CHAR8 *Ptr = NULL;
  
  if (Argc <= 1){
  	Print(L"Please input file name!\n");
  	return (-1);
  }
  OldLogFileName = Argv[1];
  Print(L"The Old file name is %s!\n",OldLogFileName);
  
  EFI_SHELL_PROTOCOL            *gEfiShellProtocol;
  Status = OpenShellProtocol(&gEfiShellProtocol);
  Status = gEfiShellProtocol->OpenFileByName((CONST CHAR16*)OldLogFileName, &FileHandle, EFI_FILE_MODE_READ); 
  if (EFI_ERROR(Status)){
	  Print(L"Please Input Valid Filename!\n");
	  return (-1);
  }
  StrnCpyS(NewFileName,128,OldLogFileName,StrLen(OldLogFileName)-4);
  StrCatS(NewFileName,128,L"_New.txt");
  Print(L"New FileName is %s\n",NewFileName);
  
  //删除同名的文件
  gEfiShellProtocol->DeleteFileByName(NewFileName);
  
  //获取文件实际大小
  Status = gEfiShellProtocol->GetFileSize(FileHandle,&FileSize);
  if (EFI_ERROR (Status)) {
    gEfiShellProtocol->CloseFile (FileHandle);
    return Status;
  }
  Print (L"File FileSize is %d!\n",FileSize);
  
  if (FileSize < 0){
	  Print (L"File cotent is empty!\n");
	  return (-1);
  }
  
  FileSize += 1;
  
  //根据文件大小申请对应大小的内存
  Status = gBS -> AllocatePool (EfiReservedMemoryType, FileSize , &ArrayBuffer);
  Status = gBS -> AllocatePool (EfiReservedMemoryType, FileSize , &LineBuff);
  
  BZero(ArrayBuffer,FileSize);
  BZero(LineBuff,FileSize);
  Status = gEfiShellProtocol->ReadFile(FileHandle, &FileSize ,ArrayBuffer); 
  
  if (EFI_ERROR(Status)){
  	Print(L"Read Filename Error!\n");
  	return (-1);
  }
  
  //创建新的文件句柄
  Status = gEfiShellProtocol->CreateFile((CONST CHAR16*)NewFileName,0 ,&FileHandle); 
  if (EFI_ERROR(Status)){
	  Print(L"Create Filename %s Fail!\n",NewFileName);
	  return (-1);
  }
  
  //读取的文件内容写入新建文件
  WbufSize = FileSize;
  Status = gEfiShellProtocol->WriteFile(FileHandle,&WbufSize,ArrayBuffer);
  
  //关闭文件句柄
  Status = gEfiShellProtocol->CloseFile(FileHandle);
  
  Ptr = (CHAR8 * )ArrayBuffer;
  for (i = 0 ; i < FileSize ; i ++ ){
	  if (Ptr[i] == '\n'){
		Ptr[i] = '\0';  
		Ascii2UnicodeString(Ptr + StartIndex, LineBuff);
		StartIndex = i + 1;
		
		Index += 1;
		//按行输出
		Print(L"Line %d: %S!\n",Index,LineBuff);
		BZero(LineBuff,FileSize);
	  }
  }
  
  return (0);
}
