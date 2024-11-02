/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    DisplayEngineStrDefs.h
  Abstract:       Auto-generated DisplayEngineStrDefs.h for building module or library.
**/

#ifndef _STRDEFS_E660EA85_058E_4b55_A54B_F02F83A24707
#define _STRDEFS_E660EA85_058E_4b55_A54B_F02F83A24707


//
//Unicode String ID
//
// #define $LANGUAGE_NAME                                       0x0000 // not referenced
// #define $PRINTABLE_LANGUAGE_NAME                             0x0001 // not referenced
#define UNKNOWN_STRING                                       0x0002
#define STATUS_BROWSER_ERROR                                 0x0003
#define STATUS_BROWSER_FORM_NOT_FOUND                        0x0004
#define STATUS_BROWSER_NO_SUBMIT_IF                          0x0005
#define FUNCTION_NINE_STRING                                 0x0006
#define FUNCTION_TEN_STRING                                  0x0007
#define SAVE_FAILED                                          0x0008
#define NO_SUBMIT_IF_CHECK_FAILED                            0x0009
#define ADJUST_HELP_PAGE_DOWN                                0x000A
#define ADJUST_HELP_PAGE_UP                                  0x000B
#define PROMPT_FOR_PASSWORD                                  0x000C
#define PROMPT_FOR_NEW_PASSWORD                              0x000D
#define CONFIRM_PASSWORD                                     0x000E
#define CONFIRM_ERROR                                        0x000F
#define PASSWORD_INVALID                                     0x0010
#define PRESS_ENTER                                          0x0011
#define PROMPT_FOR_DATA                                      0x0012
#define EMPTY_STRING                                         0x0013
#define MINI_STRING                                          0x0014
#define OPTION_MISMATCH                                      0x0015
#define FORM_SUPPRESSED                                      0x0016
#define PROTOCOL_NOT_FOUND                                   0x0017
#define DISCARD_OR_JUMP                                      0x0018
#define DISCARD_OR_JUMP_DISCARD                              0x0019
#define DISCARD_OR_JUMP_JUMP                                 0x001A
#define DISCARD_OR_CHECK                                     0x001B
#define DISCARD_OR_CHECK_CHECK                               0x001C
#define CONFIRM_DISCARD_MESSAGE                              0x001D
#define CONFIRM_DEFAULT_MESSAGE                              0x001E
#define CONFIRM_DEFAULT_MESSAGE_2ND                          0x001F
#define CONFIRM_SUBMIT_MESSAGE                               0x0020
#define CONFIRM_SUBMIT_MESSAGE_2ND                           0x0021
#define CONFIRM_RESET_MESSAGE                                0x0022
#define CONFIRM_RESET_MESSAGE_2ND                            0x0023
#define CONFIRM_EXIT_MESSAGE                                 0x0024
#define CONFIRM_EXIT_MESSAGE_2ND                             0x0025
#define CONFIRM_OPTION                                       0x0026
#define CONFIRM_OPTION_YES                                   0x0027
#define CONFIRM_OPTION_NO                                    0x0028
#define CONFIRM_OPTION_OK                                    0x0029
#define CONFIRM_OPTION_CANCEL                                0x002A
#define CONFIRM_OPTION_CONNECT                               0x002B
#define CONFIRM_OPTION_END                                   0x002C
#define RECONNECT_FAILED                                     0x002D
#define RECONNECT_CONFIRM_CHANGES                            0x002E
#define RECONNECT_CHANGES_OPTIONS                            0x002F
#define RECONNECT_REQUIRED                                   0x0030
#define GET_TIME_FAIL                                        0x0031
#define PASSWORD_NOT_SUPPORTED                               0x0032
#define OK_SELECTABLE_OPTION                                 0x0033
#define CANCEL_SELECTABLE_OPTION                             0x0034
#define YES_SELECTABLE_OPTION                                0x0035
#define NO_SELECTABLE_OPTION                                 0x0036
#define ERROR_POPUP_STRING                                   0x0037
#define WARNING_POPUP_STRING                                 0x0038
#define INFO_POPUP_STRING                                    0x0039

extern unsigned char DisplayEngineStrings[];


#define STRING_ARRAY_NAME DisplayEngineStrings

#ifdef VFRCOMPILE
#define gEfiMdePkgTokenSpaceGuid { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }}
#define gUefiOvmfPkgTokenSpaceGuid {0x93bb96af, 0xb9f2, 0x4eb8, {0x94, 0x62, 0xe0, 0xba, 0x74, 0x56, 0x42, 0x36}}
#define gEfiEventReadyToBootGuid { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }}
#define gEfiEventAfterReadyToBootGuid { 0x3a2a00ad, 0x98b9, 0x4cdf, { 0xa4, 0x78, 0x70, 0x27, 0x77, 0xf1, 0xc1, 0x0b }}
#define gEfiEventLegacyBootGuid { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }}
#define gEfiGlobalVariableGuid { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }}
#define gEfiAcpi20TableGuid { 0x8868E871, 0xE4F1, 0x11D3, { 0xBC, 0x22, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }}
#define gEfiAcpi10TableGuid { 0xEB9D2D30, 0x2D88, 0x11D3, { 0x9A, 0x16, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }}
#define gEdkiiIfrBitVarstoreGuid {0x82DDD68B, 0x9163, 0x4187, {0x9B, 0x27, 0x20, 0xA8, 0xFD, 0x60,0xA7, 0x1D}}
#define gEfiIfrTianoGuid { 0xf0b1735, 0x87a0, 0x4193, {0xb2, 0x66, 0x53, 0x8c, 0x38, 0xaf, 0x48, 0xce }}
#define gEdkiiFormDisplayEngineProtocolGuid { 0x9bbe29e9, 0xfda1, 0x41ec, { 0xad, 0x52, 0x45, 0x22, 0x13, 0x74, 0x2d, 0x2e } }
#define gEdkiiFormBrowserEx2ProtocolGuid { 0xa770c357, 0xb693, 0x4e6d, { 0xa6, 0xcf, 0xd2, 0x1c, 0x72, 0x8e, 0x55, 0xb } }
#define gEfiHiiPopupProtocolGuid { 0x4311edc0, 0x6054, 0x46d4, { 0x9e, 0x40, 0x89, 0x3e, 0xa9, 0x52, 0xfc, 0xcc }}
#endif

#endif
