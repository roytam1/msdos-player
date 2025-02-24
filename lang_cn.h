/*
	MS-DOS Player for Win32 console

	Author : Takeda.Toshiya
	Date   : 2024.07.14-
*/

#ifndef _LANG_CN_H_
#define _LANG_CN_H_

/* ----------------------------------------------------------------------------
	Simplified Chinese messages (936: GB2312)
---------------------------------------------------------------------------- */

// Invalid function
const BYTE standard_error_chinese_01[] = {0xB9,0xA6,0xC4,0xDC,0xCE,0xDE,0xD0,0xA7};
// File not found
const BYTE standard_error_chinese_02[] = {0xD5,0xD2,0xB2,0xBB,0xB5,0xBD,0xCE,0xC4,0xBC,0xFE};
// Path not found
const BYTE standard_error_chinese_03[] = {0xD5,0xD2,0xB2,0xBB,0xB5,0xBD,0xC2,0xB7,0xBE,0xB6};
// Too many open files
const BYTE standard_error_chinese_04[] = {0xB4,0xF2,0xBF,0xAA,0xC1,0xCB,0xCC,0xAB,0xB6,0xE0,0xCE,0xC4,0xBC,0xFE};
// Access denied
const BYTE standard_error_chinese_05[] = {0xB2,0xBB,0xD7,0xBC,0xB4,0xE6,0xC8,0xA1};
// Invalid handle
const BYTE standard_error_chinese_06[] = {0xCE,0xDE,0xD0,0xA7,0xBE,0xE4,0xB1,0xFA};
// Memory control blocks destroyed
const BYTE standard_error_chinese_07[] = {0xC4,0xDA,0xB4,0xE6,0xBF,0xD8,0xD6,0xC6,0xBF,0xE9,0xB1,0xBB,0xC6,0xC6,0xBB,0xB5};
// Insufficient memory
const BYTE standard_error_chinese_08[] = {0xC4,0xDA,0xB4,0xE6,0xB2,0xBB,0xD7,0xE3};
// Invalid memory block address
const BYTE standard_error_chinese_09[] = {0xC4,0xDA,0xB4,0xE6,0xBF,0xE9,0xB5,0xD8,0xD6,0xB7,0xCE,0xDE,0xD0,0xA7};
// Invalid Environment
const BYTE standard_error_chinese_0A[] = {0xBB,0xB7,0xBE,0xB3,0xCE,0xDE,0xD0,0xA7};
// Invalid format
const BYTE standard_error_chinese_0B[] = {0xB8,0xF1,0xCA,0xBD,0xCE,0xDE,0xD0,0xA7};
// Invalid function parameter
const BYTE standard_error_chinese_0C[] = {0xB9,0xA6,0xC4,0xDC,0xB2,0xCE,0xCA,0xFD,0xCE,0xDE,0xD0,0xA7};
// Invalid data
const BYTE standard_error_chinese_0D[] = {0xCA,0xFD,0xBE,0xDD,0xCE,0xDE,0xD0,0xA7};
// Invalid drive specification
const BYTE standard_error_chinese_0F[] = {0xD6,0xB8,0xB6,0xA8,0xC1,0xCB,0xCE,0xDE,0xD0,0xA7,0xB5,0xC4,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0x24};
// Attempt to remove current directory
const BYTE standard_error_chinese_10[] = {0xB3,0xA2,0xCA,0xD4,0xC9,0xBE,0xB3,0xFD,0xB5,0xB1,0xC7,0xB0,0xC4,0xBF,0xC2,0xBC};
// Not same device
const BYTE standard_error_chinese_11[] = {0xB2,0xBB,0xCA,0xC7,0xCD,0xAC,0xD2,0xBB,0xC9,0xE8,0xB1,0xB8};
// No more files
const BYTE standard_error_chinese_12[] = {0xD4,0xD9,0xC3,0xBB,0xD3,0xD0,0xCE,0xC4,0xBC,0xFE,0xC1,0xCB};

// Write protect error
const BYTE critical_error_chinese_00[] = {0xD0,0xB4,0xB1,0xA3,0xBB,0xA4,0xB4,0xED,0xCE,0xF3};
// Invalid unit
const BYTE critical_error_chinese_01[] = {0xC9,0xE8,0xB1,0xB8,0xCE,0xDE,0xD0,0xA7};
// Not ready
const BYTE critical_error_chinese_02[] = {0xCE,0xB4,0xD7,0xBC,0xB1,0xB8,0xBE,0xCD,0xD0,0xF7};
// Invalid device request
const BYTE critical_error_chinese_03[] = {0xC9,0xE8,0xB1,0xB8,0xC7,0xEB,0xC7,0xF3,0xCE,0xDE,0xD0,0xA7};
// Data error
const BYTE critical_error_chinese_04[] = {0xCA,0xFD,0xBE,0xDD,0xB4,0xED,0xCE,0xF3};
// Invalid device request parameters
const BYTE critical_error_chinese_05[] = {0xC9,0xE8,0xB1,0xB8,0xC7,0xEB,0xC7,0xF3,0xB2,0xCE,0xCA,0xFD,0xCE,0xDE,0xD0,0xA7};
// Seek error
const BYTE critical_error_chinese_06[] = {0xCB,0xD1,0xCB,0xF7,0xB4,0xED,0xCE,0xF3};
// Invalid media type
const BYTE critical_error_chinese_07[] = {0xC3,0xBD,0xCC,0xE5,0xC0,0xE0,0xD0,0xCD,0xCE,0xDE,0xD0,0xA7};
// Sector not found
const BYTE critical_error_chinese_08[] = {0xD5,0xD2,0xB2,0xBB,0xB5,0xBD,0xC9,0xC8,0xC7,0xF8};
// Printer out of paper error
const BYTE critical_error_chinese_09[] = {0xB4,0xF2,0xD3,0xA1,0xBB,0xFA,0xC8,0xB1,0xD6,0xBD};
// Write fault error
const BYTE critical_error_chinese_0A[] = {0xD0,0xB4,0xC8,0xEB,0xB4,0xED,0xCE,0xF3};
// Read fault error
const BYTE critical_error_chinese_0B[] = {0xB6,0xC1,0xC8,0xEB,0xB4,0xED,0xCE,0xF3};
// General failure
const BYTE critical_error_chinese_0C[] = {0xD2,0xBB,0xB0,0xE3,0xD0,0xD4,0xCA,0xA7,0xD0,0xA7};
// Sharing violation
const BYTE critical_error_chinese_0D[] = {0xB9,0xB2,0xCF,0xED,0xB4,0xED,0xCE,0xF3};
// Lock violation
const BYTE critical_error_chinese_0E[] = {0xCB,0xF8,0xB6,0xA8,0xB4,0xED,0xCE,0xF3};
// Invalid disk change
const BYTE critical_error_chinese_0F[] = {0xB4,0xC5,0xC5,0xCC,0xB8,0xFC,0xB8,0xC4,0xCE,0xDE,0xD0,0xA7};
// FCB unavailable
const BYTE critical_error_chinese_10[] = {0xC3,0xBB,0xD3,0xD0,0x20,0x46,0x43,0x42,0x20,0xBF,0xC9,0xD3,0xC3};
// System resource exhausted
const BYTE critical_error_chinese_11[] = {0xCF,0xB5,0xCD,0xB3,0xD7,0xCA,0xD4,0xB4,0xD3,0xC3,0xBE,0xA1,0xC1,0xCB};
// Code page mismatch
const BYTE critical_error_chinese_12[] = {0xB4,0xFA,0xC2,0xEB,0xD2,0xB3,0xB2,0xBB,0xC6,0xA5,0xC5,0xE4};
// Out of input
const BYTE critical_error_chinese_13[] = {0xC3,0xBB,0xD3,0xD0,0xCA,0xE4,0xC8,0xEB};
// Insufficient disk space
const BYTE critical_error_chinese_14[] = {0xB4,0xC5,0xC5,0xCC,0xBF,0xD5,0xBC,0xE4,0xB2,0xBB,0xD7,0xE3};

// File exists
const BYTE standard_error_chinese_50[] = {0xCE,0xC4,0xBC,0xFE,0xD2,0xD1,0xB4,0xE6,0xD4,0xDA};
// Cannot make directory entry
const BYTE standard_error_chinese_52[] = {0xB2,0xBB,0xC4,0xDC,0xBD,0xA8,0xC1,0xA2,0xC4,0xBF,0xC2,0xBC,0xCF,0xEE};
// Fail on INT 24
const BYTE standard_error_chinese_53[] = {0x49,0x4E,0x54,0x20,0x32,0x34,0x20,0xCA,0xA7,0xB0,0xDC};
// Too many redirections
const BYTE standard_error_chinese_54[] = {0xCC,0xAB,0xB6,0xE0,0xD6,0xD8,0xB6,0xA8,0xCF,0xF2};
// Duplicate redirection
const BYTE standard_error_chinese_55[] = {0xD6,0xD8,0xB8,0xB4,0xB5,0xC4,0xD6,0xD8,0xB6,0xA8,0xCF,0xF2};
// Invalid password
const BYTE standard_error_chinese_56[] = {0xBF,0xDA,0xC1,0xEE,0xCE,0xDE,0xD0,0xA7};
// Invalid parameter
const BYTE standard_error_chinese_57[] = {0xB2,0xCE,0xCA,0xFD,0xCE,0xDE,0xD0,0xA7};
// Network data fault
const BYTE standard_error_chinese_58[] = {0xCD,0xF8,0xC2,0xE7,0xCA,0xFD,0xBE,0xDD,0xB4,0xED,0xCE,0xF3};
// Function not supported by network
const BYTE standard_error_chinese_59[] = {0xCD,0xF8,0xC2,0xE7,0xB2,0xBB,0xD6,0xA7,0xB3,0xD6,0xB8,0xC3,0xB9,0xA6,0xC4,0xDC};
// Required system component not installe
const BYTE standard_error_chinese_5A[] = {0xC3,0xBB,0xD3,0xD0,0xB0,0xB2,0xD7,0xB0,0xCB,0xF9,0xD0,0xE8,0xB5,0xC4,0xCF,0xB5,0xCD,0xB3,0xB2,0xBF,0xB7,0xD6};

// Unknown error
const BYTE standard_error_chinese_64[] = {0xCE,0xB4,0xD6,0xAA,0xB4,0xED,0xCE,0xF3};
// Not ready
const BYTE standard_error_chinese_65[] = {0xC9,0xD0,0xCE,0xB4,0x9C,0xCA,0x82,0xE4,0xBE,0xCD,0xBE,0x77};
// EMS memory no longer valid
const BYTE standard_error_chinese_66[] = {0x45,0x4D,0x53,0x20,0xC4,0xDA,0xB4,0xE6,0xB2,0xBB,0xD4,0xD9,0xD3,0xD0,0xD0,0xA7};
// CDROM not High Sierra or ISO-9660 format
const BYTE standard_error_chinese_67[] = {0x43,0x44,0x52,0x4F,0x4D,0x20,0xB2,0xBB,0xCA,0xC7,0x20,0x48,0x69,0x67,0x68,0x20,0x53,0x69,0x65,0x72,0x72,0x61,0x20,0xBB,0xF2,0x20,0x49,0x53,0x4F,0x2D,0x39,0x36,0x36,0x30,0x20,0xB8,0xF1,0xCA,0xBD};
// Door open
const BYTE standard_error_chinese_68[] = {0xBF,0xD8,0xD6,0xC6,0xB8,0xCB,0xCE,0xB4,0xB9,0xD8,0xB1,0xD5};

// Volume is not locked
const BYTE standard_error_chinese_B0[] = {0xBE,0xED,0xCE,0xB4,0xCB,0xF8,0xB6,0xA8};
// Volume is locked in drive
const BYTE standard_error_chinese_B1[] = {0xBE,0xED,0xD2,0xD1,0xCB,0xF8,0xB6,0xA8};
// Volume is not removable
const BYTE standard_error_chinese_B2[] = {0xBE,0xED,0xB2,0xBB,0xBF,0xC9,0xD2,0xC6,0xB3,0xFD};
// Lock count has been exceeded
const BYTE standard_error_chinese_B4[] = {0xBE,0xED,0xCE,0xDE,0xB7,0xA8,0xD4,0xD9,0xB1,0xBB,0xCB,0xF8,0xB6,0xA8};
// A valid eject request failed
const BYTE standard_error_chinese_B5[] = {0xCE,0xDE,0xB7,0xA8,0xB5,0xAF,0xB3,0xF6,0xBE,0xED};

// Too many parameters
const BYTE param_error_chinese_01[] = {0xCC,0xAB,0xB6,0xE0,0xB2,0xCE,0xCA,0xFD};
// Required parameter missing
const BYTE param_error_chinese_02[] = {0xC3,0xBB,0xD3,0xD0,0xCB,0xF9,0xD0,0xE8,0xB2,0xCE,0xCA,0xFD};
// Invalid switch
const BYTE param_error_chinese_03[] = {0xBF,0xAA,0xB9,0xD8,0xCE,0xDE,0xD0,0xA7};
// Invalid keyword
const BYTE param_error_chinese_04[] = {0xB9,0xD8,0xBC,0xFC,0xD7,0xD6,0xCE,0xDE,0xD0,0xA7};
// Parameter value not in allowed range
const BYTE param_error_chinese_06[] = {0xB2,0xCE,0xCA,0xFD,0xD6,0xB5,0xB2,0xBB,0xD4,0xDA,0xD4,0xCA,0xD0,0xED,0xB7,0xB6,0xCE,0xA7,0xC4,0xDA};
// Parameter value not allowed
const BYTE param_error_chinese_07[] = {0xB2,0xBB,0xD4,0xCA,0xD0,0xED,0xB2,0xCE,0xCA,0xFD,0xD6,0xB5};
// Parameter value not allowed
const BYTE param_error_chinese_08[] = {0xB2,0xBB,0xD4,0xCA,0xD0,0xED,0xB2,0xCE,0xCA,0xFD,0xD6,0xB5};
// Parameter format not correct
const BYTE param_error_chinese_09[] = {0xB2,0xCE,0xCA,0xFD,0xB8,0xF1,0xCA,0xBD,0xB2,0xBB,0xD5,0xFD,0xC8,0xB7};
// Invalid parameter
const BYTE param_error_chinese_0A[] = {0xB2,0xCE,0xCA,0xFD,0xCE,0xDE,0xD0,0xA7};
// Invalid parameter combination
const BYTE param_error_chinese_0B[] = {0xB2,0xCE,0xCA,0xFD,0xD7,0xE9,0xCE,0xDE,0xD0,0xA7};

// Unknown error
const BYTE unknown_error_chinese[] = {0xCE,0xB4,0xD6,0xAA,0xB4,0xED,0xCE,0xF3};
// Critical error
const BYTE critical_error_chinese[] = {0xD1,0xCF,0xD6,0xD8,0xB4,0xED,0xCE,0xF3};

// writing drive
const BYTE writing_drive_chinese[] = {0xD5,0xFD,0xD0,0xB4,0xC8,0xEB,0x20,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7};
// reading drive
const BYTE reading_drive_chinese[] = {0xD5,0xFD,0xB6,0xC1,0xC8,0xEB,0x20,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7};

// Abort (A)
const BYTE abort_chinese[] = {0xB7,0xC5,0xC6,0xFA,0x20,0x28,0x41,0x29};
// Retry (R)
const BYTE retry_chinese[] = {0xD4,0xD9,0xCA,0xD4,0x20,0x28,0x52,0x29};
// Igore (I)
const BYTE ignore_chinese[] = {0xC2,0xD4,0xB9,0xFD,0x20,0x28,0x49,0x29};
// Fail (F)
const BYTE fail_chinese[] = {0xCA,0xA7,0xB0,0xDC,0x20,0x28,0x46,0x29};

/*
Displays or sets a search path for executable files.

PATH [[drive:]path[;...]]
PATH ;

Type PATH ; to clear all search-path settings and direct MS-DOS to search
only in the current directory.
Type PATH without parameters to display the current path.
*/
const BYTE help_path_chinese[] = {


	0xCF,0xD4,0xCA,0xBE,0xA3,0xAF,0xC9,0xE8,0xD6,0xC3,0xB9,0xA9,0xB3,0xCC,0xD0,0xF2,0xCA,0xB9,0xD3,0xC3,0xB5,0xC4,0xCB,0xD1,0xCB,0xF7,0xC2,0xB7,0xBE,0xB6,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0x50,0x41,0x54,0x48,0x20,0x5B,0x5B,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0x3A,0x5D,0xC2,0xB7,0xBE,0xB6,0x5B,0x3B,0x2E,0x2E,0x2E,0x5D,0x5D,0x0D,0x0A,
	0x50,0x41,0x54,0x48,0x20,0x3B,0x0D,0x0A,
	0x0D,0x0A,
	0xCA,0xE4,0xC8,0xEB,0x20,0x50,0x41,0x54,0x48,0x20,0x3B,0x20,0xD2,0xD4,0xC7,0xE5,0xB3,0xFD,0xCB,0xF9,0xD3,0xD0,0xCB,0xD1,0xCB,0xF7,0xC2,0xB7,0xBE,0xB6,0xB5,0xC4,0xC9,0xE8,0xD6,0xC3,0xBA,0xCD,0xD6,0xB8,0xCA,0xBE,0x20,0x4D,0x53,0x2D,0x44,0x4F,0x53,0x20,0xD6,0xBB,0xCB,0xD1,0xCB,0xF7,0xB5,0xB1,0xC7,0xB0,0xC4,0xBF,0xC2,0xBC,0xA1,0xA3,0x0D,0x0A,
	0xCA,0xE4,0xC8,0xEB,0xB2,0xBB,0xB4,0xF8,0xB2,0xCE,0xCA,0xFD,0xB5,0xC4,0x20,0x50,0x41,0x54,0x48,0x20,0xD2,0xD4,0xCF,0xD4,0xCA,0xBE,0xB5,0xB1,0xC7,0xB0,0xC2,0xB7,0xBE,0xB6,0xA1,0xA3,0x0D,0x0A
};

/*
Displays, sets, or removes MS-DOS environment variables.

SET [variable=[string]]

  variable  Specifies the environment-variable name.
  string    Specifies a series of characters to assign to the variable.

Type SET without parameters to display the current environment variables.
*/
const BYTE help_set_chinese[] = {
	0xCF,0xD4,0xCA,0xBE,0xA3,0xAF,0xC9,0xE8,0xD6,0xC3,0xBB,0xF2,0xC9,0xBE,0xB3,0xFD,0x20,0x4D,0x53,0x2D,0x44,0x4F,0x53,0x20,0xBB,0xB7,0xBE,0xB3,0xB1,0xE4,0xC1,0xBF,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0x53,0x45,0x54,0x20,0x5B,0xB1,0xE4,0xC1,0xBF,0xC3,0xFB,0xB3,0xC6,0x3D,0x5B,0xD7,0xD6,0xB7,0xFB,0xB4,0xAE,0x5D,0x5D,0x0D,0x0A,
	0x0D,0x0A,
	0x20,0x20,0xB1,0xE4,0xC1,0xBF,0xC3,0xFB,0x20,0x20,0x20,0x20,0xD6,0xB8,0xB6,0xA8,0xBB,0xB7,0xBE,0xB3,0xB1,0xE4,0xC1,0xBF,0xB5,0xC4,0xC3,0xFB,0xB3,0xC6,0xA1,0xA3,0x0D,0x0A,
	0x20,0x20,0xD7,0xD6,0xB7,0xFB,0xB4,0xAE,0x20,0x20,0x20,0x20,0xD6,0xB8,0xB6,0xA8,0xD2,0xAA,0xB7,0xD6,0xC5,0xE4,0xB8,0xF8,0xB1,0xE4,0xC1,0xBF,0xB5,0xC4,0xD7,0xD6,0xB7,0xFB,0xB4,0xAE,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0xC8,0xE7,0xB9,0xFB,0xC3,0xBB,0xD3,0xD0,0xD6,0xB8,0xB6,0xA8,0xB2,0xCE,0xCA,0xFD,0xA3,0xAC,0xD4,0xF2,0xCF,0xD4,0xCA,0xBE,0xB5,0xB1,0xC7,0xB0,0xBB,0xB7,0xBE,0xB3,0xB1,0xE4,0xC1,0xBF,0xA1,0xA3,0x0D,0x0A
};

/*
Displays the name of or changes the current directory.

CHDIR [drive:][path]
CHDIR[..]
CD [drive:][path]
CD[..]

  ..   Specifies that you want to change to the parent directory.

Type CD drive: to display the current directory in the specified drive.
Type CD without parameters to display the current drive and directory.
*/
const BYTE help_chdir_chinese[] = {
	0xCF,0xD4,0xCA,0xBE,0xB5,0xB1,0xC7,0xB0,0xC4,0xBF,0xC2,0xBC,0xB5,0xC4,0xC3,0xFB,0xB3,0xC6,0xBB,0xF2,0xB8,0xFC,0xB8,0xC4,0xB5,0xB1,0xC7,0xB0,0xC4,0xBF,0xC2,0xBC,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0x43,0x48,0x44,0x49,0x52,0x20,0x5B,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0x3A,0x5D,0x5B,0xC2,0xB7,0xBE,0xB6,0x5D,0x0D,0x0A,
	0x43,0x48,0x44,0x49,0x52,0x5B,0x2E,0x2E,0x5D,0x0D,0x0A,
	0x43,0x44,0x20,0x5B,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0x3A,0x5D,0x5B,0xC2,0xB7,0xBE,0xB6,0x5D,0x0D,0x0A,
	0x43,0x44,0x5B,0x2E,0x2E,0x5D,0x0D,0x0A,
	0x0D,0x0A,
	0x20,0x20,0x2E,0x2E,0x20,0x20,0x20,0xB1,0xED,0xCA,0xBE,0xD7,0xAA,0xB5,0xBD,0xB8,0xB8,0xC4,0xBF,0xC2,0xBC,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0xCA,0xE4,0xC8,0xEB,0x20,0x43,0x44,0x20,0x5B,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0x3A,0x5D,0x20,0xD2,0xD4,0xCF,0xD4,0xCA,0xBE,0xB8,0xC3,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0xB5,0xC4,0xB5,0xB1,0xC7,0xB0,0xC4,0xBF,0xC2,0xBC,0xA1,0xA3,0x0D,0x0A,
	0xCA,0xE4,0xC8,0xEB,0xB2,0xBB,0xB4,0xF8,0xB2,0xCE,0xCA,0xFD,0xB5,0xC4,0x20,0x43,0x44,0x20,0xD2,0xD4,0xCF,0xD4,0xCA,0xBE,0xB5,0xB1,0xC7,0xB0,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0xBA,0xCD,0xC4,0xBF,0xC2,0xBC,0xA1,0xA3,0x0D,0x0A
};

/*
Displays the contents of text files.

TYPE [drive:][path]filename
*/
const BYTE help_type_chinese[] = {
	0xCF,0xD4,0xCA,0xBE,0xD2,0xBB,0xB8,0xF6,0xCE,0xC4,0xB1,0xBE,0xCE,0xC4,0xBC,0xFE,0xB5,0xC4,0xC4,0xDA,0xC8,0xDD,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0x54,0x59,0x50,0x45,0x20,0x5B,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0x3A,0x5D,0x5B,0xC2,0xB7,0xBE,0xB6,0x5D,0xCE,0xC4,0xBC,0xFE,0xC3,0xFB,0x0D,0x0A
};

/*
Displays the MS-DOS Version.

VER
*/
const BYTE help_ver_chinese[] = {
	0xCF,0xD4,0xCA,0xBE,0x20,0x50,0x43,0x20,0x44,0x4F,0x53,0x20,0xB0,0xE6,0xB1,0xBE,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0x56,0x45,0x52,0x0D,0x0A
};

/*
Returns a fully qualified filename.

TRUENAME [drive:][path]filename
*/
const BYTE help_truename_chinese[] = {
	0xB7,0xB5,0xBB,0xD8,0xCD,0xEA,0xD5,0xFB,0xB5,0xC4,0xCE,0xC4,0xBC,0xFE,0xC3,0xFB,0xA1,0xA3,0x0D,0x0A,
	0x0D,0x0A,
	0x54,0x52,0x55,0x45,0x4E,0x41,0x4D,0x45,0x20,0x5B,0xC7,0xFD,0xB6,0xAF,0xC6,0xF7,0x3A,0x5D,0x5B,0xC2,0xB7,0xBE,0xB6,0x5D,0xCE,0xC4,0xBC,0xFE,0xC3,0xFB,0x0D,0x0A
};

#endif
