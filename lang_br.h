/*
	MS-DOS Player for Win32 console

	Author : Takeda.Toshiya
	Date   : 2024.07.15-
*/

#ifndef _LANG_BR_H_
#define _LANG_BR_H_

/* ----------------------------------------------------------------------------
	Brazilian Portuguese messages (850: DOS Latin 1)
---------------------------------------------------------------------------- */

// Invalid function
const BYTE standard_error_brazilian_01[] = {0x46,0x75,0x6E,0x87,0xC6,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// File not found
const BYTE standard_error_brazilian_02[] = {0x41,0x72,0x71,0x75,0x69,0x76,0x6F,0x20,0x6E,0xC6,0x6F,0x20,0x65,0x6E,0x63,0x6F,0x6E,0x74,0x72,0x61,0x64,0x6F,0x00};
// Path not found
const BYTE standard_error_brazilian_03[] = {0x43,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x20,0x6E,0xC6,0x6F,0x20,0x65,0x6E,0x63,0x6F,0x6E,0x74,0x72,0x61,0x64,0x6F,0x00};
// Too many open files
const BYTE standard_error_brazilian_04[] = {0x45,0x78,0x63,0x65,0x73,0x73,0x6F,0x20,0x64,0x65,0x20,0x61,0x72,0x71,0x75,0x69,0x76,0x6F,0x73,0x20,0x61,0x62,0x65,0x72,0x74,0x6F,0x73,0x00};
// Access denied
const BYTE standard_error_brazilian_05[] = {0x41,0x63,0x65,0x73,0x73,0x6F,0x20,0x6E,0x65,0x67,0x61,0x64,0x6F,0x00};
// Invalid handle
const BYTE standard_error_brazilian_06[] = {0x49,0x64,0x65,0x6E,0x74,0x69,0x66,0x69,0x63,0x61,0x64,0x6F,0x72,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Memory control blocks destroyed
const BYTE standard_error_brazilian_07[] = {0x42,0x6C,0x6F,0x63,0x6F,0x73,0x20,0x64,0x65,0x20,0x63,0x6F,0x6E,0x74,0x72,0x6F,0x6C,0x65,0x20,0x64,0x65,0x20,0x6D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x64,0x65,0x73,0x74,0x72,0x75,0xA1,0x64,0x6F,0x73,0x00};
// Insufficient memory
const BYTE standard_error_brazilian_08[] = {0x4D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x69,0x6E,0x73,0x75,0x66,0x69,0x63,0x69,0x65,0x6E,0x74,0x65,0x00};
// Invalid memory block address
const BYTE standard_error_brazilian_09[] = {0x45,0x6E,0x64,0x65,0x72,0x65,0x87,0x6F,0x20,0x64,0x65,0x20,0x62,0x6C,0x6F,0x63,0x6F,0x20,0x64,0x65,0x20,0x6D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid Environment
const BYTE standard_error_brazilian_0A[] = {0x41,0x6D,0x62,0x69,0x65,0x6E,0x74,0x65,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid format
const BYTE standard_error_brazilian_0B[] = {0x46,0x6F,0x72,0x6D,0x61,0x74,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid function parameter
const BYTE standard_error_brazilian_0C[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x64,0x65,0x20,0x66,0x75,0x6E,0x87,0xC6,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid data
const BYTE standard_error_brazilian_0D[] = {0x44,0x61,0x64,0x6F,0x73,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x73,0x00};
// Invalid drive specification
const BYTE standard_error_brazilian_0F[] = {0x45,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x63,0x61,0x87,0xC6,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x20,0x64,0x65,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x20,0x64,0x65,0x20,0x64,0x69,0x73,0x63,0x6F,0x00};
// Attempt to remove current directory
const BYTE standard_error_brazilian_10[] = {0x54,0x65,0x6E,0x74,0x61,0x74,0x69,0x76,0x61,0x20,0x64,0x65,0x20,0x72,0x65,0x6D,0x6F,0x76,0x65,0x72,0x20,0x6F,0x20,0x64,0x69,0x72,0x65,0x74,0xA2,0x72,0x69,0x6F,0x20,0x61,0x74,0x75,0x61,0x6C,0x00};
// Not same device
const BYTE standard_error_brazilian_11[] = {0x44,0x69,0x73,0x70,0x6F,0x73,0x69,0x74,0x69,0x76,0x6F,0x73,0x20,0x64,0x69,0x66,0x65,0x72,0x65,0x6E,0x74,0x65,0x73,0x00};
// No more files
const BYTE standard_error_brazilian_12[] = {0x4D,0x61,0x69,0x73,0x20,0x6E,0x65,0x6E,0x68,0x75,0x6D,0x20,0x61,0x72,0x71,0x75,0x69,0x76,0x6F,0x00};

// Write protect error
const BYTE critical_error_brazilian_00[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x70,0x72,0x6F,0x74,0x65,0x87,0xC6,0x6F,0x20,0x63,0x6F,0x6E,0x74,0x72,0x61,0x20,0x67,0x72,0x61,0x76,0x61,0x87,0xC6,0x6F,0x00};
// Invalid unit
const BYTE critical_error_brazilian_01[] = {0x55,0x6E,0x69,0x64,0x61,0x64,0x65,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Not ready
const BYTE critical_error_brazilian_02[] = {0x4E,0xC6,0x6F,0x20,0x70,0x72,0x6F,0x6E,0x74,0x6F,0x00};
// Invalid device request
const BYTE critical_error_brazilian_03[] = {0x52,0x65,0x71,0x75,0x65,0x72,0x69,0x6D,0x65,0x6E,0x74,0x6F,0x20,0x64,0x65,0x20,0x64,0x69,0x73,0x70,0x6F,0x73,0x69,0x74,0x69,0x76,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Data error
const BYTE critical_error_brazilian_04[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x64,0x61,0x64,0x6F,0x73,0x00};
// Invalid device request parameters
const BYTE critical_error_brazilian_05[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x20,0x64,0x65,0x20,0x72,0x65,0x71,0x75,0x65,0x72,0x69,0x6D,0x65,0x6E,0x74,0x6F,0x20,0x64,0x65,0x20,0x64,0x69,0x73,0x70,0x6F,0x73,0x69,0x74,0x69,0x76,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x73,0x00};
// Seek error
const BYTE critical_error_brazilian_06[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x70,0x65,0x73,0x71,0x75,0x69,0x73,0x61,0x00};
// Invalid media type
const BYTE critical_error_brazilian_07[] = {0x54,0x69,0x70,0x6F,0x20,0x64,0x65,0x20,0x6D,0xA1,0x64,0x69,0x61,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Sector not found
const BYTE critical_error_brazilian_08[] = {0x53,0x65,0x74,0x6F,0x72,0x20,0x6E,0xC6,0x6F,0x20,0x65,0x6E,0x63,0x6F,0x6E,0x74,0x72,0x61,0x64,0x6F,0x00};
// Printer out of paper error
const BYTE critical_error_brazilian_09[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x69,0x6D,0x70,0x72,0x65,0x73,0x73,0x6F,0x72,0x61,0x20,0x73,0x65,0x6D,0x20,0x70,0x61,0x70,0x65,0x6C,0x00};
// Write fault error
const BYTE critical_error_brazilian_0A[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x66,0x61,0x6C,0x68,0x61,0x20,0x6E,0x61,0x20,0x67,0x72,0x61,0x76,0x61,0x87,0xC6,0x6F,0x00};
// Read fault error
const BYTE critical_error_brazilian_0B[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x66,0x61,0x6C,0x68,0x61,0x20,0x6E,0x61,0x20,0x6C,0x65,0x69,0x74,0x75,0x72,0x61,0x00};
// General failure
const BYTE critical_error_brazilian_0C[] = {0x46,0x61,0x6C,0x68,0x61,0x20,0x67,0x65,0x72,0x61,0x6C,0x00};
// Sharing violation
const BYTE critical_error_brazilian_0D[] = {0x56,0x69,0x6F,0x6C,0x61,0x87,0xC6,0x6F,0x20,0x64,0x65,0x20,0x63,0x6F,0x6D,0x70,0x61,0x72,0x74,0x69,0x6C,0x68,0x61,0x6D,0x65,0x6E,0x74,0x6F,0x00};
// Lock violation
const BYTE critical_error_brazilian_0E[] = {0x56,0x69,0x6F,0x6C,0x61,0x87,0xC6,0x6F,0x20,0x64,0x65,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x69,0x6F,0x00};
// Invalid disk change
const BYTE critical_error_brazilian_0F[] = {0x41,0x6C,0x74,0x65,0x72,0x61,0x87,0xC6,0x6F,0x20,0x64,0x65,0x20,0x64,0x69,0x73,0x63,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// FCB unavailable
const BYTE critical_error_brazilian_10[] = {0x46,0x43,0x42,0x20,0x6E,0xC6,0x6F,0x20,0x64,0x69,0x73,0x70,0x6F,0x6E,0xA1,0x76,0x65,0x6C,0x00};
// System resource exhausted
const BYTE critical_error_brazilian_11[] = {0x52,0x65,0x63,0x75,0x72,0x73,0x6F,0x20,0x64,0x65,0x20,0x73,0x69,0x73,0x74,0x65,0x6D,0x61,0x20,0x65,0x73,0x67,0x6F,0x74,0x61,0x64,0x6F,0x00};
// Code page mismatch
const BYTE critical_error_brazilian_12[] = {0x50,0xA0,0x67,0x69,0x6E,0x61,0x20,0x64,0x65,0x20,0x63,0xA2,0x64,0x69,0x67,0x6F,0x20,0x6E,0xC6,0x6F,0x20,0x63,0x6F,0x72,0x72,0x65,0x73,0x70,0x6F,0x6E,0x64,0x65,0x00};
// Out of input
const BYTE critical_error_brazilian_13[] = {0x53,0x65,0x6D,0x20,0x65,0x6E,0x74,0x72,0x61,0x64,0x61,0x00};
// Insufficient disk space
const BYTE critical_error_brazilian_14[] = {0x45,0x73,0x70,0x61,0x87,0x6F,0x20,0x65,0x6D,0x20,0x64,0x69,0x73,0x63,0x6F,0x20,0x69,0x6E,0x73,0x75,0x66,0x69,0x63,0x69,0x65,0x6E,0x74,0x65,0x00};

// File exists
const BYTE standard_error_brazilian_50[] = {0x41,0x72,0x71,0x75,0x69,0x76,0x6F,0x20,0x65,0x78,0x69,0x73,0x74,0x65,0x00};
// Cannot make directory entry
const BYTE standard_error_brazilian_52[] = {0x4E,0xC6,0x6F,0x20,0x82,0x20,0x70,0x6F,0x73,0x73,0xA1,0x76,0x65,0x6C,0x20,0x64,0x65,0x66,0x69,0x6E,0x69,0x72,0x20,0x65,0x6E,0x74,0x72,0x61,0x64,0x61,0x20,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x74,0xA2,0x72,0x69,0x6F,0x00};
// Fail on INT 24
const BYTE standard_error_brazilian_53[] = {0x46,0x61,0x6C,0x68,0x61,0x20,0x65,0x6D,0x20,0x49,0x4E,0x54,0x20,0x32,0x34,0x00};
// Too many redirections
const BYTE standard_error_brazilian_54[] = {0x45,0x78,0x63,0x65,0x73,0x73,0x6F,0x20,0x64,0x65,0x20,0x72,0x65,0x64,0x69,0x72,0x65,0x63,0x69,0x6F,0x6E,0x61,0x6D,0x65,0x6E,0x74,0x6F,0x73,0x00};
// Duplicate redirection
const BYTE standard_error_brazilian_55[] = {0x52,0x65,0x64,0x69,0x72,0x65,0x63,0x69,0x6F,0x6E,0x61,0x6D,0x65,0x6E,0x74,0x6F,0x20,0x64,0x75,0x70,0x6C,0x69,0x63,0x61,0x64,0x6F,0x00};
// Invalid password
const BYTE standard_error_brazilian_56[] = {0x53,0x65,0x6E,0x68,0x61,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Invalid parameter
const BYTE standard_error_brazilian_57[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Network data fault
const BYTE standard_error_brazilian_58[] = {0x46,0x61,0x6C,0x68,0x61,0x20,0x6E,0x6F,0x73,0x20,0x64,0x61,0x64,0x6F,0x73,0x20,0x64,0x61,0x20,0x72,0x65,0x64,0x65,0x00};
// Function not supported by network
const BYTE standard_error_brazilian_59[] = {0x46,0x75,0x6E,0x87,0xC6,0x6F,0x20,0x6E,0xC6,0x6F,0x20,0x73,0x75,0x70,0x6F,0x72,0x74,0x61,0x64,0x61,0x20,0x70,0x65,0x6C,0x61,0x20,0x72,0x65,0x64,0x65,0x00};
// Required system component not installe
const BYTE standard_error_brazilian_5A[] = {0x43,0x6F,0x6D,0x70,0x6F,0x6E,0x65,0x6E,0x74,0x65,0x20,0x64,0x65,0x20,0x73,0x69,0x73,0x74,0x65,0x6D,0x61,0x20,0x6E,0x65,0x63,0x65,0x73,0x73,0xA0,0x72,0x69,0x6F,0x20,0x6E,0xC6,0x6F,0x20,0x69,0x6E,0x73,0x74,0x61,0x6C,0x61,0x64,0x6F,0x00};

// Unknown error
const BYTE standard_error_brazilian_64[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x73,0x63,0x6F,0x6E,0x68,0x65,0x63,0x69,0x64,0x6F,0x00};
// Not ready
const BYTE standard_error_brazilian_65[] = {0x4E,0xC6,0x6F,0x20,0x65,0x73,0x74,0xA0,0x20,0x70,0x72,0x6F,0x6E,0x74,0x6F,0x00};
// EMS memory no longer valid
const BYTE standard_error_brazilian_66[] = {0x4D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x45,0x4D,0x53,0x20,0x6A,0xA0,0x20,0x6E,0xC6,0x6F,0x20,0x82,0x20,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// CDROM not High Sierra or ISO-9660 format
const BYTE standard_error_brazilian_67[] = {0x43,0x44,0x52,0x4F,0x4D,0x20,0x73,0x65,0x6D,0x20,0x66,0x6F,0x72,0x6D,0x61,0x74,0x6F,0x20,0x48,0x69,0x67,0x68,0x20,0x53,0x69,0x65,0x72,0x72,0x61,0x20,0x6F,0x75,0x20,0x49,0x53,0x4F,0x2D,0x39,0x36,0x36,0x30,0x00};
// Door open
const BYTE standard_error_brazilian_68[] = {0x50,0x6F,0x72,0x74,0x61,0x20,0x61,0x62,0x65,0x72,0x74,0x61,0x00};

// Volume is not locked
const BYTE standard_error_brazilian_B0[] = {0x56,0x6F,0x6C,0x75,0x6D,0x65,0x20,0x6E,0xC6,0x6F,0x20,0x65,0x73,0x74,0xA0,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x61,0x64,0x6F,0x00};
// Volume is locked in drive
const BYTE standard_error_brazilian_B1[] = {0x56,0x6F,0x6C,0x75,0x6D,0x65,0x20,0x65,0x73,0x74,0xA0,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x61,0x64,0x6F,0x20,0x6E,0x61,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x00};
// Volume is not removable
const BYTE standard_error_brazilian_B2[] = {0x56,0x6F,0x6C,0x75,0x6D,0x65,0x20,0x6E,0xC6,0x6F,0x20,0x82,0x20,0x61,0x6D,0x6F,0x76,0xA1,0x76,0x65,0x6C,0x00};
// Lock count has been exceeded
const BYTE standard_error_brazilian_B4[] = {0x43,0x6F,0x6E,0x74,0x61,0x67,0x65,0x6D,0x20,0x64,0x65,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x69,0x6F,0x73,0x20,0x66,0x6F,0x69,0x20,0x65,0x78,0x63,0x65,0x64,0x69,0x64,0x61,0x00};
// A valid eject request failed
const BYTE standard_error_brazilian_B5[] = {0x55,0x6D,0x61,0x20,0x73,0x6F,0x6C,0x69,0x63,0x69,0x74,0x61,0x87,0xC6,0x6F,0x20,0x64,0x65,0x20,0x65,0x6A,0x65,0x87,0xC6,0x6F,0x20,0x76,0xA0,0x6C,0x69,0x64,0x61,0x20,0x66,0x61,0x6C,0x68,0x6F,0x75,0x00};

// Too many parameters
const BYTE param_error_brazilian_01[] = {0x45,0x78,0x63,0x65,0x73,0x73,0x6F,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x00};
// Required parameter missing
const BYTE param_error_brazilian_02[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x6E,0x65,0x63,0x65,0x73,0x73,0xA0,0x72,0x69,0x6F,0x20,0x66,0x61,0x6C,0x74,0x61,0x6E,0x64,0x6F,0x00};
// Invalid switch
const BYTE param_error_brazilian_03[] = {0x4F,0x70,0x87,0xC6,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Invalid keyword
const BYTE param_error_brazilian_04[] = {0x50,0x61,0x6C,0x61,0x76,0x72,0x61,0x2D,0x63,0x68,0x61,0x76,0x65,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Parameter value not in allowed range
const BYTE param_error_brazilian_06[] = {0x56,0x61,0x6C,0x6F,0x72,0x20,0x64,0x6F,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x66,0x6F,0x72,0x61,0x20,0x64,0x61,0x20,0x66,0x61,0x69,0x78,0x61,0x20,0x70,0x65,0x72,0x6D,0x69,0x74,0x69,0x64,0x61,0x00};
// Parameter value not allowed
const BYTE param_error_brazilian_07[] = {0x56,0x61,0x6C,0x6F,0x72,0x20,0x64,0x6F,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x6E,0xC6,0x6F,0x20,0x70,0x65,0x72,0x6D,0x69,0x74,0x69,0x64,0x6F,0x00};
// Parameter value not allowed
const BYTE param_error_brazilian_08[] = {0x56,0x61,0x6C,0x6F,0x72,0x20,0x64,0x6F,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x6E,0xC6,0x6F,0x20,0x70,0x65,0x72,0x6D,0x69,0x74,0x69,0x64,0x6F,0x00};
// Parameter format not correct
const BYTE param_error_brazilian_09[] = {0x46,0x6F,0x72,0x6D,0x61,0x74,0x6F,0x20,0x64,0x6F,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x6E,0x63,0x6F,0x72,0x72,0x65,0x74,0x6F,0x00};
// Invalid parameter
const BYTE param_error_brazilian_0A[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid parameter combination
const BYTE param_error_brazilian_0B[] = {0x43,0x6F,0x6D,0x62,0x69,0x6E,0x61,0x87,0xC6,0x6F,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};

// Unknown error
const BYTE unknown_error_brazilian[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x73,0x63,0x6F,0x6E,0x68,0x65,0x63,0x69,0x64,0x6F,0x00};
// Critical error
const BYTE critical_error_brazilian[] = {0x45,0x72,0x72,0x6F,0x20,0x63,0x72,0xA1,0x74,0x69,0x63,0x6F,0x00};

// writing drive
const BYTE writing_drive_brazilian[] = {0x6C,0x65,0x6E,0x64,0x6F,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x00};
// reading drive
const BYTE reading_drive_brazilian[] = {0x67,0x72,0x61,0x76,0x61,0x6E,0x64,0x6F,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x00};

// Abort (A)
const BYTE abort_brazilian[] = {0x41,0x6E,0x75,0x6C,0x61,0x72,0x20,0x28,0x41,0x29,0x00};
// Retry (R)
const BYTE retry_brazilian[] = {0x52,0x65,0x70,0x65,0x74,0x69,0x72,0x20,0x28,0x52,0x29,0x00};
// Igore (I)
const BYTE ignore_brazilian[] = {0x49,0x67,0x6E,0x6F,0x72,0x61,0x72,0x20,0x28,0x49,0x29,0x00};
// Fail (F)
const BYTE fail_brazilian[] = {0x44,0x65,0x73,0x69,0x73,0x74,0x69,0x72,0x20,0x28,0x46,0x29,0x00};

/*
Displays or sets a search path for executable files.

PATH [[drive:]path[;...]]
PATH ;

Type PATH ; to clear all search-path settings and direct MS-DOS to search
only in the current directory.
Type PATH without parameters to display the current path.
*/
const BYTE help_path_brazilian[] = {
	0x45,0x78,0x69,0x62,0x65,0x20,0x6F,0x75,0x20,0x64,0x65,0x66,0x69,0x6E,0x65,0x20,0x75,0x6D,0x20,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x20,0x64,0x65,0x20,0x70,0x65,0x73,0x71,0x75,0x69,0x73,0x61,0x20,0x70,0x61,0x72,0x61,0x20,0x61,0x72,0x71,0x75,0x69,0x76,0x6F,0x73,0x20,0x65,0x78,0x65,0x63,0x75,0x74,0xA0,0x76,0x65,0x69,0x73,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x50,0x41,0x54,0x48,0x20,0x5B,0x5B,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x3A,0x5D,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x5B,0x3B,0x2E,0x2E,0x2E,0x5D,0x5D,0x0D,0x0A,
	0x0D,0x0A,
	0x50,0x41,0x54,0x48,0x20,0x3B,0x0D,0x0A,
	0x0D,0x0A,
	0x44,0x69,0x67,0x69,0x74,0x65,0x20,0x50,0x41,0x54,0x48,0x20,0x3B,0x20,0x70,0x61,0x72,0x61,0x20,0x6C,0x69,0x6D,0x70,0x61,0x72,0x20,0x74,0x6F,0x64,0x61,0x73,0x20,0x61,0x73,0x20,0x63,0x6F,0x6E,0x66,0x69,0x67,0x75,0x72,0x61,0x87,0xE4,0x65,0x73,0x20,0x64,0x6F,0x20,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x2D,0x64,0x65,0x2D,0x70,0x65,0x73,0x71,0x75,0x69,0x73,0x61,0x20,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x69,0x6F,0x6E,0x61,0x72,0x20,0x6F,0x20,0x4D,0x53,0x2D,0x44,0x4F,0x53,0x20,0x70,0x61,0x72,0x61,0x20,0x61,0x20,0x70,0x65,0x73,0x71,0x75,0x69,0x73,0x61,0x0D,0x0A,
	0x73,0x6F,0x6D,0x65,0x6E,0x74,0x65,0x20,0x6E,0x6F,0x20,0x64,0x69,0x72,0x65,0x74,0xA2,0x72,0x69,0x6F,0x20,0x61,0x74,0x75,0x61,0x6C,0x2E,0x0D,0x0A,
	0x44,0x69,0x67,0x69,0x74,0x65,0x20,0x50,0x41,0x54,0x48,0x20,0x73,0x65,0x6D,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x20,0x70,0x61,0x72,0x61,0x20,0x65,0x78,0x69,0x62,0x69,0x72,0x20,0x6F,0x20,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x20,0x61,0x74,0x75,0x61,0x6C,0x2E,0x0D,0x0A
};

/*
Displays, sets, or removes MS-DOS environment variables.

SET [variable=[string]]

  variable  Specifies the environment-variable name.
  string    Specifies a series of characters to assign to the variable.

Type SET without parameters to display the current environment variables.
*/
const BYTE help_set_brazilian[] = {
	0x45,0x78,0x69,0x62,0x65,0x2C,0x20,0x64,0x65,0x66,0x69,0x6E,0x65,0x20,0x6F,0x75,0x20,0x72,0x65,0x6D,0x6F,0x76,0x65,0x20,0x76,0x61,0x72,0x69,0xA0,0x76,0x65,0x69,0x73,0x20,0x64,0x65,0x20,0x61,0x6D,0x62,0x69,0x65,0x6E,0x74,0x65,0x20,0x64,0x6F,0x20,0x4D,0x53,0x2D,0x44,0x4F,0x53,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x53,0x45,0x54,0x20,0x5B,0x76,0x61,0x72,0x69,0xA0,0x76,0x65,0x6C,0x3D,0x5B,0x73,0x65,0x71,0x81,0x88,0x6E,0x63,0x69,0x61,0x5D,0x5D,0x0D,0x0A,
	0x0D,0x0A,
	0x20,0x20,0x76,0x61,0x72,0x69,0xA0,0x76,0x65,0x6C,0x20,0x20,0x20,0x45,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x63,0x61,0x20,0x6F,0x20,0x6E,0x6F,0x6D,0x65,0x20,0x64,0x61,0x20,0x76,0x61,0x72,0x69,0xA0,0x76,0x65,0x6C,0x20,0x64,0x6F,0x20,0x61,0x6D,0x62,0x69,0x65,0x6E,0x74,0x65,0x2E,0x0D,0x0A,
	0x20,0x20,0x73,0x65,0x71,0x81,0x88,0x6E,0x63,0x69,0x61,0x20,0x20,0x45,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x63,0x61,0x20,0x75,0x6D,0x61,0x20,0x73,0x65,0x71,0x81,0x88,0x6E,0x63,0x69,0x61,0x20,0x64,0x65,0x20,0x63,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x65,0x73,0x20,0x61,0x20,0x73,0x65,0x72,0x20,0x61,0x74,0x72,0x69,0x62,0x75,0xA1,0x64,0x61,0x20,0x85,0x20,0x76,0x61,0x72,0x69,0xA0,0x76,0x65,0x6C,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x44,0x69,0x67,0x69,0x74,0x65,0x20,0x53,0x45,0x54,0x20,0x73,0x65,0x6D,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x20,0x70,0x61,0x72,0x61,0x20,0x65,0x78,0x69,0x62,0x69,0x72,0x20,0x61,0x73,0x20,0x76,0x61,0x72,0x69,0xA0,0x76,0x65,0x69,0x73,0x20,0x64,0x65,0x20,0x61,0x6D,0x62,0x69,0x65,0x6E,0x74,0x65,0x20,0x61,0x74,0x75,0x61,0x69,0x73,0x2E,0x0D,0x0A
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
const BYTE help_chdir_brazilian[] = {
	0x45,0x78,0x69,0x62,0x65,0x20,0x6F,0x20,0x6E,0x6F,0x6D,0x65,0x20,0x6F,0x75,0x20,0x61,0x6C,0x74,0x65,0x72,0x61,0x20,0x6F,0x20,0x64,0x69,0x72,0x65,0x74,0xA2,0x72,0x69,0x6F,0x20,0x61,0x74,0x75,0x61,0x6C,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x43,0x48,0x44,0x49,0x52,0x20,0x5B,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x3A,0x5D,0x5B,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x5D,0x0D,0x0A,
	0x43,0x48,0x44,0x49,0x52,0x5B,0x2E,0x2E,0x5D,0x0D,0x0A,
	0x43,0x44,0x20,0x5B,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x3A,0x5D,0x5B,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x5D,0x0D,0x0A,
	0x43,0x44,0x5B,0x2E,0x2E,0x5D,0x0D,0x0A,
	0x0D,0x0A,
	0x20,0x20,0x2E,0x2E,0x20,0x20,0x20,0x45,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x63,0x61,0x20,0x71,0x75,0x65,0x20,0x73,0x65,0x20,0x71,0x75,0x65,0x72,0x20,0x6D,0x75,0x64,0x61,0x72,0x20,0x70,0x61,0x72,0x61,0x20,0x6F,0x20,0x64,0x69,0x72,0x65,0x74,0xA2,0x72,0x69,0x6F,0x20,0x70,0x61,0x69,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x44,0x69,0x67,0x69,0x74,0x65,0x20,0x43,0x44,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x3A,0x20,0x70,0x61,0x72,0x61,0x20,0x65,0x78,0x69,0x62,0x69,0x72,0x20,0x6F,0x20,0x64,0x69,0x72,0x65,0x74,0xA2,0x72,0x69,0x6F,0x20,0x61,0x74,0x75,0x61,0x6C,0x20,0x6E,0x61,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x20,0x65,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x63,0x61,0x64,0x61,0x2E,0x0D,0x0A,
	0x44,0x69,0x67,0x69,0x74,0x65,0x20,0x43,0x44,0x20,0x73,0x65,0x6D,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x20,0x70,0x61,0x72,0x61,0x20,0x65,0x78,0x69,0x62,0x69,0x72,0x20,0x61,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x20,0x65,0x20,0x64,0x69,0x72,0x65,0x74,0xA2,0x72,0x69,0x6F,0x73,0x20,0x61,0x74,0x75,0x61,0x69,0x73,0x2E,0x0D,0x0A
};

/*
Displays the contents of text files.

TYPE [drive:][path]filename
*/
const BYTE help_type_brazilian[] = {
	0x45,0x78,0x69,0x62,0x65,0x20,0x6F,0x20,0x63,0x6F,0x6E,0x74,0x65,0xA3,0x64,0x6F,0x20,0x64,0x65,0x20,0x75,0x6D,0x20,0x61,0x72,0x71,0x75,0x69,0x76,0x6F,0x20,0x74,0x65,0x78,0x74,0x6F,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x54,0x59,0x50,0x45,0x20,0x5B,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x3A,0x5D,0x5B,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x5D,0x6E,0x6F,0x6D,0x65,0x2D,0x64,0x65,0x2D,0x61,0x72,0x71,0x75,0x69,0x76,0x6F,0x0D,0x0A
};

/*
Displays the MS-DOS Version.

VER
*/
const BYTE help_ver_brazilian[] = {
	0x45,0x78,0x69,0x62,0x65,0x20,0x61,0x20,0x76,0x65,0x72,0x73,0xC6,0x6F,0x20,0x64,0x6F,0x20,0x4D,0x53,0x2D,0x44,0x4F,0x53,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x56,0x45,0x52,0x0D,0x0A
};

/*
Returns a fully qualified filename.

TRUENAME [drive:][path]filename
*/
const BYTE help_truename_brazilian[] = {
	0x52,0x65,0x74,0x6F,0x72,0x6E,0x61,0x20,0x75,0x6D,0x20,0x6E,0x6F,0x6D,0x65,0x20,0x64,0x65,0x20,0x66,0x69,0x63,0x68,0x65,0x69,0x72,0x6F,0x20,0x63,0x6F,0x6D,0x70,0x6C,0x65,0x74,0x6F,0x2E,0x0D,0x0A,
	0x0D,0x0A,
	0x54,0x52,0x55,0x45,0x4E,0x41,0x4D,0x45,0x20,0x5B,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x3A,0x5D,0x5B,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x5D,0x6E,0x6F,0x6D,0x65,0x2D,0x64,0x65,0x2D,0x61,0x72,0x71,0x75,0x69,0x76,0x6F,0x0D,0x0A
};

#endif
