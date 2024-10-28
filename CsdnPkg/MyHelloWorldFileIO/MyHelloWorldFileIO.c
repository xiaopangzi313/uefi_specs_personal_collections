#include <Uefi.h>
#include <Library/UefiLib.h> 
#include <Library/DebugLib.h>
#include <Library/ShellCEntryLib.h> 
#include <Base.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Protocol/SimpleFileSystem.h>
#include <Protocol/Shell.h>
#include <Library/UefiBootServicesTableLib.h>
// #include <Protocol/ShellParameters.h>
// #include <Library/ShellCommandLib.h>
// #include <Library/FileHandleLib.h>
// #include <guid/FileInfo.h>





RETURN_STATUS
EFIAPI
CsdnStrCatS (
  IN OUT CHAR16        *Destination,
  IN     UINTN         DestMax,
  IN     CONST CHAR16  *Source
  )
{
  UINTN  DestLen = 0;
  UINTN  CopyLen;

  ASSERT (((UINTN)Destination & BIT0) == 0);
  ASSERT (((UINTN)Source & BIT0) == 0);

  //
  // Let CopyLen denote the value DestMax - StrnLenS(Destination, DestMax) upon entry to StrCatS.
  //
  DestLen = StrnLenS (Destination, DestMax);
  CopyLen = DestMax - DestLen;


  Destination = Destination + DestLen;
  while (*Source != 0) {
    *(Destination++) = *(Source++);
  }

  *Destination = 0;

  return RETURN_SUCCESS;
}


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

EFI_STATUS CsdnOpenShellProtocol( EFI_SHELL_PROTOCOL            **gEfiShellProtocol )
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
ShellAppMain (
  IN UINTN   Argc,
  IN CHAR16  **Argv
  )
{ 
  CHAR16 * OldLogFileName = NULL;
  EFI_STATUS Status ;
  SHELL_FILE_HANDLE FileHandle;
  CHAR16  NewFileName[128] = {0};
  // UINTN Index = 0;
  // UINTN WbufSize = 0;
  // UINTN FileSize = 0;
  // UINTN i = 0;
  // UINTN StartIndex = 0;
  // CHAR8 *Ptr = NULL;
  // CHAR16  *LineBuff = NULL;
  // CHAR16 * ArrayBuffer  = NULL;
  
  if (Argc <= 1){
  	Print(L"Please input file name!\n");
  	return (-1);
  }
  OldLogFileName = Argv[1];
  Print(L"The Old file name is %s!\n",OldLogFileName);
  
  EFI_SHELL_PROTOCOL            *gEfiShellProtocol;
  Status = CsdnOpenShellProtocol(&gEfiShellProtocol);
  Status = gEfiShellProtocol->OpenFileByName((CONST CHAR16*)OldLogFileName, &FileHandle, EFI_FILE_MODE_READ); 
  if (EFI_ERROR(Status)){
	  Print(L"Please Input Valid Filename!\n");
	  return (-1);
  }
  StrnCpyS(NewFileName,128,OldLogFileName,StrLen(OldLogFileName)-4);
  StrCatS(NewFileName,128,L"_New.txt");
  	// UnicodeSPrint (
    //        NewFileName + StrLen(OldLogFileName)-4,
    //        128,
    //        L"%s",
    //        L"_New.txt"
    //        );
  // Print(L"New FileName is %s\n",NewFileName);
  
  // gEfiShellProtocol->DeleteFileByName(NewFileName);
  
  // Status = gEfiShellProtocol->GetFileSize(FileHandle,&FileSize);
  // if (EFI_ERROR (Status)) {
  //   gEfiShellProtocol->CloseFile (FileHandle);
  //   return Status;
  // }
  // Print (L"File FileSize is %d!\n",FileSize);
  
  // if (FileSize < 0){
	//   Print (L"File cotent is empty!\n");
	//   return (-1);
  // }
  
  // FileSize += 1;
  
  // Status = gBS -> AllocatePool (EfiReservedMemoryType, FileSize , &ArrayBuffer);
  // Status = gBS -> AllocatePool (EfiReservedMemoryType, FileSize , &LineBuff);
  
  // BZero(ArrayBuffer,FileSize);
  // BZero(LineBuff,FileSize);
  // Status = gEfiShellProtocol->ReadFile(FileHandle, &FileSize ,ArrayBuffer); 
  
  // if (EFI_ERROR(Status)){
  // 	Print(L"Read Filename Error!\n");
  // 	return (-1);
  // }
  
  // Status = gEfiShellProtocol->CreateFile((CONST CHAR16*)NewFileName,0 ,&FileHandle); 
  // if (EFI_ERROR(Status)){
	//   Print(L"Create Filename %s Fail!\n",NewFileName);
	//   return (-1);
  // }
  
  // WbufSize = FileSize;
  // Status = gEfiShellProtocol->WriteFile(FileHandle,&WbufSize,ArrayBuffer);
  
  // Status = gEfiShellProtocol->CloseFile(FileHandle);
  
  // Ptr = (CHAR8 * )ArrayBuffer;
  // for (i = 0 ; i < FileSize ; i ++ ){
	//   if (Ptr[i] == '\n'){
	// 	Ptr[i] = '\0';  
	// 	Ascii2UnicodeString(Ptr + StartIndex, LineBuff);
	// 	StartIndex = i + 1;
		
	// 	Index += 1;
	// 	Print(L"Line %d: %S!\n",Index,LineBuff);
	// 	BZero(LineBuff,FileSize);
	//   }
  // }
  
  return (0);
}
