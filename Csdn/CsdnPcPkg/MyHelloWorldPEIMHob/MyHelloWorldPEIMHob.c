#include <uefi.h> 
#include <Library/UefiLib.h> 
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/PeimEntryPoint.h>
#include <Library/PeiServicesLib.h>
#include <Library/PeiServicesTablePointerLib.h>
#include <Pi/PiHob.h>

EFI_GUID gMyHelloWorldPEIGUID = { 0xbdb38129, 0x4d65, 0x39f4, { 0x72, 0x12, 0x68, 0xcf, 0x5a, 0x19, 0xa, 0xf8 }};

VOID
EfiCommonLibCopyMem (
  IN VOID   *Destination,
  IN VOID   *Source,
  IN UINTN  Length
  )
/*++

Routine Description:

  Copy Length bytes from Source to Destination.

Arguments:

  Destination - Target of copy

  Source      - Place to copy from

  Length      - Number of bytes to copy

Returns:

  None

--*/
{
  CHAR8 *Destination8;
  CHAR8 *Source8;

  if (Source < Destination) {
    Destination8  = (CHAR8 *) Destination + Length - 1;
    Source8       = (CHAR8 *) Source + Length - 1;
    while (Length--) {
      *(Destination8--) = *(Source8--);
    }
  } else {
    Destination8  = (CHAR8 *) Destination;
    Source8       = (CHAR8 *) Source;
    while (Length--) {
      *(Destination8++) = *(Source8++);
    }
  }
}

UINTN
EFIAPI
MyStrlen (
  IN CONST CHAR16               *String,
  IN UINTN                     MaxSize
  )
{
  UINTN                             Length;
  Length = 0;

  //
  // If String is a null pointer or MaxSize is 0, then the AsciiStrnLenS function returns zero.
  //
  if ((String == 0) || (MaxSize == 0)) {
    return 0;
  }

  while (String[Length] != 0) {
    if (Length >= MaxSize - 1) {
      return MaxSize;
    }
    Length++;
  }
  return Length;
}

EFI_STATUS
EFIAPI
MyHelloWorldPEIMHobEntry(
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
)
{ 
  EFI_STATUS                              Status = EFI_SUCCESS;
  DEBUG ((EFI_D_ERROR, "[MyHelloWorldHob] MyHelloWorldPEIMHobEntry Start..\n"));
  
  CHAR8  *Hob = NULL;

  PeiServices = GetPeiServicesTablePointer();
  Status = PeiServicesCreateHob (
                           EFI_HOB_TYPE_MEMORY_ALLOCATION,
                           64,
                           &Hob
                           );

  CHAR8 *HobEnd = (Hob + sizeof (EFI_HOB_GENERIC_HEADER));
  EfiCommonLibCopyMem(HobEnd, &gMyHelloWorldPEIGUID, sizeof(gMyHelloWorldPEIGUID));
  CHAR16 StrHob[] = L"CSDN HOB Data ...";
  // EfiCommonLibCopyMem(HobEnd+16,StrHob,2*MyStrlen(StrHob,128));
  EfiCommonLibCopyMem(HobEnd+16,StrHob,2*17);
  
  DEBUG ((EFI_D_ERROR, "[MyHelloWorldHob] MyHelloWorldPEIMHobEntry End..\n"));
  return Status;
}
