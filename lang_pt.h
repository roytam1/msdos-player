/*
	MS-DOS Player for Win32 console

	Author : Takeda.Toshiya
	Date   : 2024.07.16-
*/

#ifndef _LANG_PT_H_
#define _LANG_PT_H_

/* ----------------------------------------------------------------------------
	Portuguese messages (860: DOS Portuguese)
---------------------------------------------------------------------------- */

// Invalid function
const BYTE standard_error_portuguese_01[] = {0x46,0x75,0x6E,0x87,0x61,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// File not found
const BYTE standard_error_portuguese_02[] = {0x4F,0x20,0x66,0x69,0x63,0x68,0x65,0x69,0x72,0x6F,0x20,0x6E,0x61,0x6F,0x20,0x66,0x6F,0x69,0x20,0x65,0x6E,0x63,0x6F,0x6E,0x74,0x72,0x61,0x64,0x6F,0x00};
// Path not found
const BYTE standard_error_portuguese_03[] = {0x4F,0x20,0x63,0x61,0x6D,0x69,0x6E,0x68,0x6F,0x20,0x6E,0x61,0x6F,0x20,0x66,0x6F,0x69,0x20,0x65,0x6E,0x63,0x6F,0x6E,0x74,0x72,0x61,0x64,0x6F,0x00};
// Too many open files
const BYTE standard_error_portuguese_04[] = {0x45,0x78,0x69,0x73,0x74,0x65,0x6D,0x20,0x64,0x65,0x6D,0x61,0x73,0x69,0x61,0x64,0x6F,0x73,0x20,0x66,0x69,0x63,0x68,0x65,0x69,0x72,0x6F,0x73,0x20,0x61,0x62,0x65,0x72,0x74,0x6F,0x73,0x00};
// Access denied
const BYTE standard_error_portuguese_05[] = {0x41,0x63,0x65,0x73,0x73,0x6F,0x20,0x6E,0x65,0x67,0x61,0x64,0x6F,0x20,0x00};
// Invalid handle
const BYTE standard_error_portuguese_06[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x64,0x65,0x6E,0x74,0x69,0x66,0x69,0x63,0x61,0x64,0x6F,0x72,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Memory control blocks destroyed
const BYTE standard_error_portuguese_07[] = {0x42,0x6C,0x6F,0x63,0x6F,0x73,0x20,0x64,0x65,0x20,0x63,0x6F,0x6E,0x74,0x72,0x6F,0x6C,0x6F,0x20,0x64,0x65,0x20,0x6D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x64,0x65,0x73,0x74,0x72,0x75,0xA1,0x64,0x6F,0x73,0x00};
// Insufficient memory
const BYTE standard_error_portuguese_08[] = {0x4D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x69,0x6E,0x73,0x75,0x66,0x69,0x63,0x69,0x65,0x6E,0x74,0x65,0x00};
// Invalid memory block address
const BYTE standard_error_portuguese_09[] = {0x45,0x6E,0x64,0x65,0x72,0x65,0x87,0x6F,0x20,0x64,0x65,0x20,0x62,0x6C,0x6F,0x63,0x6F,0x20,0x64,0x65,0x20,0x6D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid Environment
const BYTE standard_error_portuguese_0A[] = {0x41,0x6D,0x62,0x69,0x65,0x6E,0x74,0x65,0x20,0x49,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid format
const BYTE standard_error_portuguese_0B[] = {0x46,0x6F,0x72,0x6D,0x61,0x74,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid function parameter
const BYTE standard_error_portuguese_0C[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x64,0x65,0x20,0x66,0x75,0x6E,0x87,0x61,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid data
const BYTE standard_error_portuguese_0D[] = {0x44,0x61,0x64,0x6F,0x73,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x73,0x00};
// Invalid drive specification
const BYTE standard_error_portuguese_0F[] = {0x45,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x63,0x61,0x87,0x61,0x6F,0x20,0x64,0x65,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Attempt to remove current directory
const BYTE standard_error_portuguese_10[] = {0x54,0x65,0x6E,0x74,0x61,0x74,0x69,0x76,0x61,0x20,0x64,0x65,0x20,0x72,0x65,0x6D,0x6F,0x76,0x65,0x72,0x20,0x6F,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0xA2,0x72,0x69,0x6F,0x20,0x61,0x63,0x74,0x75,0x61,0x6C,0x00};
// Not same device
const BYTE standard_error_portuguese_11[] = {0x4E,0x61,0x6F,0x20,0x82,0x20,0x6F,0x20,0x6D,0x65,0x73,0x6D,0x6F,0x20,0x64,0x69,0x73,0x70,0x6F,0x73,0x69,0x74,0x69,0x76,0x6F,0x00};
// No more files
const BYTE standard_error_portuguese_12[] = {0x4E,0x61,0x6F,0x20,0x65,0x78,0x69,0x73,0x74,0x65,0x6D,0x20,0x6D,0x61,0x69,0x73,0x20,0x66,0x69,0x63,0x68,0x65,0x69,0x72,0x6F,0x73,0x00};

// Write protect error
const BYTE critical_error_portuguese_00[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x70,0x72,0x6F,0x74,0x65,0x63,0x87,0x61,0x6F,0x20,0x63,0x6F,0x6E,0x74,0x72,0x61,0x20,0x65,0x73,0x63,0x72,0x69,0x74,0x61,0x00};
// Invalid unit
const BYTE critical_error_portuguese_01[] = {0x55,0x6E,0x69,0x64,0x61,0x64,0x65,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Not ready
const BYTE critical_error_portuguese_02[] = {0x4E,0x61,0x6F,0x20,0x65,0x73,0x74,0xA0,0x20,0x70,0x72,0x65,0x70,0x61,0x72,0x61,0x64,0x6F,0x00};
// Invalid device request
const BYTE critical_error_portuguese_03[] = {0x50,0x65,0x64,0x69,0x64,0x6F,0x20,0x64,0x65,0x20,0x64,0x69,0x73,0x70,0x6F,0x73,0x69,0x74,0x69,0x76,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Data error
const BYTE critical_error_portuguese_04[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x64,0x61,0x64,0x6F,0x73,0x00};
// Invalid device request parameters
const BYTE critical_error_portuguese_05[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x73,0x20,0x64,0x6F,0x20,0x70,0x65,0x64,0x69,0x64,0x6F,0x20,0x64,0x65,0x20,0x64,0x69,0x73,0x70,0x6F,0x73,0x69,0x74,0x69,0x76,0x6F,0x00};
// Seek error
const BYTE critical_error_portuguese_06[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x70,0x65,0x73,0x71,0x75,0x69,0x73,0x61,0x00};
// Invalid media type
const BYTE critical_error_portuguese_07[] = {0x54,0x69,0x70,0x6F,0x20,0x64,0x65,0x20,0x6D,0x65,0x64,0x69,0x61,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Sector not found
const BYTE critical_error_portuguese_08[] = {0x53,0x65,0x63,0x74,0x6F,0x72,0x20,0x6E,0x61,0x6F,0x20,0x65,0x6E,0x63,0x6F,0x6E,0x74,0x72,0x61,0x64,0x6F,0x00};
// Printer out of paper error
const BYTE critical_error_portuguese_09[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x66,0x61,0x6C,0x74,0x61,0x20,0x64,0x65,0x20,0x70,0x61,0x70,0x65,0x6C,0x20,0x6E,0x61,0x20,0x69,0x6D,0x70,0x72,0x65,0x73,0x73,0x6F,0x72,0x61,0x00};
// Write fault error
const BYTE critical_error_portuguese_0A[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x66,0x61,0x6C,0x68,0x61,0x20,0x64,0x65,0x20,0x65,0x73,0x63,0x72,0x69,0x74,0x61,0x00};
// Read fault error
const BYTE critical_error_portuguese_0B[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x20,0x66,0x61,0x6C,0x68,0x61,0x20,0x64,0x65,0x20,0x6C,0x65,0x69,0x74,0x75,0x72,0x61,0x00};
// General failure
const BYTE critical_error_portuguese_0C[] = {0x46,0x61,0x6C,0x68,0x61,0x20,0x67,0x65,0x72,0x61,0x6C,0x00};
// Sharing violation
const BYTE critical_error_portuguese_0D[] = {0x56,0x69,0x6F,0x6C,0x61,0x87,0x61,0x6F,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x74,0x69,0x6C,0x68,0x61,0x00};
// Lock violation
const BYTE critical_error_portuguese_0E[] = {0x56,0x69,0x6F,0x6C,0x61,0x87,0x61,0x6F,0x20,0x64,0x65,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x69,0x6F,0x00};
// Invalid disk change
const BYTE critical_error_portuguese_0F[] = {0x4D,0x75,0x64,0x61,0x6E,0x87,0x61,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x20,0x64,0x65,0x20,0x64,0x69,0x73,0x63,0x6F,0x00};
// FCB unavailable
const BYTE critical_error_portuguese_10[] = {0x42,0x6C,0x6F,0x63,0x6F,0x20,0x64,0x65,0x20,0x63,0x6F,0x6E,0x74,0x72,0x6F,0x6C,0x6F,0x20,0x64,0x65,0x20,0x66,0x69,0x63,0x68,0x65,0x69,0x72,0x6F,0x20,0x28,0x46,0x43,0x42,0x29,0x20,0x69,0x6E,0x64,0x69,0x73,0x70,0x6F,0x6E,0xA1,0x76,0x65,0x6C,0x00};
// System resource exhausted
const BYTE critical_error_portuguese_11[] = {0x52,0x65,0x63,0x75,0x72,0x73,0x6F,0x73,0x20,0x64,0x65,0x20,0x73,0x69,0x73,0x74,0x65,0x6D,0x61,0x20,0x65,0x73,0x67,0x6F,0x74,0x61,0x64,0x6F,0x73,0x00};
// Code page mismatch
const BYTE critical_error_portuguese_12[] = {0x44,0x69,0x73,0x63,0x6F,0x72,0x64,0x83,0x6E,0x63,0x69,0x61,0x20,0x64,0x65,0x20,0x70,0xA0,0x67,0x69,0x6E,0x61,0x73,0x20,0x64,0x65,0x20,0x63,0xA2,0x64,0x69,0x67,0x6F,0x73,0x00};
// Out of input
const BYTE critical_error_portuguese_13[] = {0x53,0x65,0x6D,0x20,0x65,0x6E,0x74,0x72,0x61,0x64,0x61,0x00};
// Insufficient disk space
const BYTE critical_error_portuguese_14[] = {0x45,0x73,0x70,0x61,0x87,0x6F,0x20,0x65,0x6D,0x20,0x64,0x69,0x73,0x63,0x6F,0x20,0x69,0x6E,0x73,0x75,0x66,0x69,0x63,0x69,0x65,0x6E,0x74,0x65,0x00};

// File exists
const BYTE standard_error_portuguese_50[] = {0x4F,0x20,0x66,0x69,0x63,0x68,0x65,0x69,0x72,0x6F,0x20,0x65,0x78,0x69,0x73,0x74,0x65,0x00};
// Cannot make directory entry
const BYTE standard_error_portuguese_52[] = {0x49,0x6D,0x70,0x6F,0x73,0x73,0xA1,0x76,0x65,0x6C,0x20,0x63,0x72,0x69,0x61,0x72,0x20,0x61,0x20,0x65,0x6E,0x74,0x72,0x61,0x64,0x61,0x20,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0xA2,0x72,0x69,0x6F,0x00};
// Fail on INT 24
const BYTE standard_error_portuguese_53[] = {0x46,0x61,0x6C,0x68,0x61,0x20,0x6E,0x6F,0x20,0x49,0x4E,0x54,0x20,0x32,0x34,0x00};
// Too many redirections
const BYTE standard_error_portuguese_54[] = {0x44,0x65,0x6D,0x61,0x73,0x69,0x61,0x64,0x6F,0x73,0x20,0x72,0x65,0x64,0x69,0x72,0x65,0x63,0x63,0x69,0x6F,0x6E,0x61,0x6D,0x65,0x6E,0x74,0x6F,0x73,0x00};
// Duplicate redirection
const BYTE standard_error_portuguese_55[] = {0x52,0x65,0x64,0x69,0x72,0x65,0x63,0x63,0x69,0x6F,0x6E,0x61,0x6D,0x65,0x6E,0x74,0x6F,0x20,0x64,0x75,0x70,0x6C,0x69,0x63,0x61,0x64,0x6F,0x00};
// Invalid password
const BYTE standard_error_portuguese_56[] = {0x50,0x61,0x6C,0x61,0x76,0x72,0x61,0x2D,0x70,0x61,0x73,0x73,0x65,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Invalid parameter
const BYTE standard_error_portuguese_57[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Network data fault
const BYTE standard_error_portuguese_58[] = {0x46,0x61,0x6C,0x68,0x61,0x20,0x64,0x65,0x20,0x64,0x61,0x64,0x6F,0x73,0x20,0x64,0x61,0x20,0x72,0x65,0x64,0x65,0x00};
// Function not supported by network
const BYTE standard_error_portuguese_59[] = {0x46,0x75,0x6E,0x87,0x61,0x6F,0x20,0x6E,0x61,0x6F,0x20,0x73,0x75,0x70,0x6F,0x72,0x74,0x61,0x64,0x61,0x20,0x70,0x65,0x6C,0x61,0x20,0x72,0x65,0x64,0x65,0x00};
// Required system component not installe
const BYTE standard_error_portuguese_5A[] = {0x55,0x6D,0x20,0x63,0x6F,0x6D,0x70,0x6F,0x6E,0x65,0x6E,0x74,0x65,0x20,0x6E,0x65,0x63,0x65,0x73,0x73,0xA0,0x72,0x69,0x6F,0x20,0x64,0x6F,0x20,0x73,0x69,0x73,0x74,0x65,0x6D,0x61,0x20,0x6E,0x61,0x6F,0x20,0x65,0x73,0x74,0xA0,0x20,0x69,0x6E,0x73,0x74,0x61,0x6C,0x61,0x64,0x6F,0x20,0x00};

// Unknown error
const BYTE standard_error_portuguese_64[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x73,0x63,0x6F,0x6E,0x68,0x65,0x63,0x69,0x64,0x6F,0x00};
// Not ready
const BYTE standard_error_portuguese_65[] = {0x4E,0x84,0x6F,0x20,0x65,0x73,0x74,0xA0,0x20,0x70,0x72,0x6F,0x6E,0x74,0x6F,0x00};
// EMS memory no longer valid
const BYTE standard_error_portuguese_66[] = {0x4D,0x65,0x6D,0xA2,0x72,0x69,0x61,0x20,0x45,0x4D,0x53,0x20,0x6A,0xA0,0x20,0x6E,0x84,0x6F,0x20,0x82,0x20,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// CDROM not High Sierra or ISO-9660 format
const BYTE standard_error_portuguese_67[] = {0x43,0x44,0x52,0x4F,0x4D,0x20,0x73,0x65,0x6D,0x20,0x66,0x6F,0x72,0x6D,0x61,0x74,0x6F,0x20,0x48,0x69,0x67,0x68,0x20,0x53,0x69,0x65,0x72,0x72,0x61,0x20,0x6F,0x75,0x20,0x49,0x53,0x4F,0x2D,0x39,0x36,0x36,0x30,0x00};
// Door open
const BYTE standard_error_portuguese_68[] = {0x50,0x6F,0x72,0x74,0x61,0x20,0x61,0x62,0x65,0x72,0x74,0x61,0x00};

// Volume is not locked
const BYTE standard_error_portuguese_B0[] = {0x56,0x6F,0x6C,0x75,0x6D,0x65,0x20,0x6E,0x84,0x6F,0x20,0x65,0x73,0x74,0xA0,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x61,0x64,0x6F,0x00};
// Volume is locked in drive
const BYTE standard_error_portuguese_B1[] = {0x56,0x6F,0x6C,0x75,0x6D,0x65,0x20,0x65,0x73,0x74,0xA0,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x61,0x64,0x6F,0x20,0x6E,0x61,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x00};
// Volume is not removable
const BYTE standard_error_portuguese_B2[] = {0x56,0x6F,0x6C,0x75,0x6D,0x65,0x20,0x6E,0x84,0x6F,0x20,0x82,0x20,0x61,0x6D,0x6F,0x76,0xA1,0x76,0x65,0x6C,0x00};
// Lock count has been exceeded
const BYTE standard_error_portuguese_B4[] = {0x43,0x6F,0x6E,0x74,0x61,0x67,0x65,0x6D,0x20,0x64,0x65,0x20,0x62,0x6C,0x6F,0x71,0x75,0x65,0x69,0x6F,0x73,0x20,0x66,0x6F,0x69,0x20,0x65,0x78,0x63,0x65,0x64,0x69,0x64,0x61,0x00};
// A valid eject request failed
const BYTE standard_error_portuguese_B5[] = {0x55,0x6D,0x61,0x20,0x73,0x6F,0x6C,0x69,0x63,0x69,0x74,0x61,0x87,0x84,0x6F,0x20,0x64,0x65,0x20,0x65,0x6A,0x65,0x87,0x84,0x6F,0x20,0x76,0xA0,0x6C,0x69,0x64,0x61,0x20,0x66,0x61,0x6C,0x68,0x6F,0x75,0x00};

// Too many parameters
const BYTE param_error_portuguese_01[] = {0x44,0x65,0x6D,0x61,0x73,0x69,0x61,0x64,0x6F,0x73,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x00};
// Required parameter missing
const BYTE param_error_portuguese_02[] = {0x46,0x61,0x6C,0x74,0x61,0x20,0x75,0x6D,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x6E,0x65,0x63,0x65,0x73,0x73,0xA0,0x72,0x69,0x6F,0x00};
// Invalid switch
const BYTE param_error_portuguese_03[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid keyword
const BYTE param_error_portuguese_04[] = {0x50,0x61,0x6C,0x61,0x76,0x72,0x61,0x2D,0x63,0x68,0x61,0x76,0x65,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};
// Parameter value not in allowed range
const BYTE param_error_portuguese_06[] = {0x56,0x61,0x6C,0x6F,0x72,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x66,0x6F,0x72,0x61,0x20,0x64,0x6F,0x20,0x69,0x6E,0x74,0x65,0x72,0x76,0x61,0x6C,0x6F,0x20,0x70,0x65,0x72,0x6D,0x69,0x74,0x69,0x64,0x6F,0x00};
// Parameter value not allowed
const BYTE param_error_portuguese_07[] = {0x56,0x61,0x6C,0x6F,0x72,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x6E,0x61,0x6F,0x20,0x70,0x65,0x72,0x6D,0x69,0x74,0x69,0x64,0x6F,0x00};
// Parameter value not allowed
const BYTE param_error_portuguese_08[] = {0x56,0x61,0x6C,0x6F,0x72,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x6E,0x61,0x6F,0x20,0x70,0x65,0x72,0x6D,0x69,0x74,0x69,0x64,0x6F,0x00};
// Parameter format not correct
const BYTE param_error_portuguese_09[] = {0x46,0x6F,0x72,0x6D,0x61,0x74,0x6F,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x6E,0x63,0x6F,0x72,0x72,0x65,0x63,0x74,0x6F,0x00};
// Invalid parameter
const BYTE param_error_portuguese_0A[] = {0x50,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x6F,0x00};
// Invalid parameter combination
const BYTE param_error_portuguese_0B[] = {0x43,0x6F,0x6D,0x62,0x69,0x6E,0x61,0x87,0x61,0x6F,0x20,0x64,0x65,0x20,0x70,0x61,0x72,0x83,0x6D,0x65,0x74,0x72,0x6F,0x73,0x20,0x69,0x6E,0x76,0xA0,0x6C,0x69,0x64,0x61,0x00};

// Unknown error
const BYTE unknown_error_portuguese[] = {0x45,0x72,0x72,0x6F,0x20,0x64,0x65,0x73,0x63,0x6F,0x6E,0x68,0x65,0x63,0x69,0x64,0x6F,0x00};
// Critical error
const BYTE critical_error_portuguese[] = {0x45,0x72,0x72,0x6F,0x20,0x63,0x72,0xA1,0x74,0x69,0x63,0x6F,0x00};

// writing drive
const BYTE writing_drive_portuguese[] = {0x61,0x6F,0x20,0x6C,0x65,0x72,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x00};
// reading drive
const BYTE reading_drive_portuguese[] = {0x61,0x6F,0x20,0x65,0x73,0x63,0x72,0x65,0x76,0x65,0x72,0x20,0x65,0x6D,0x20,0x75,0x6E,0x69,0x64,0x61,0x64,0x65,0x00};

// Abort (A)
const BYTE abort_portuguese[] = {0x41,0x62,0x6F,0x72,0x74,0x61,0x72,0x20,0x28,0x41,0x29,0x00};
// Retry (R)
const BYTE retry_portuguese[] = {0x52,0x65,0x70,0x65,0x74,0x69,0x72,0x20,0x28,0x52,0x29,0x00};
// Igore (I)
const BYTE ignore_portuguese[] = {0x49,0x67,0x6E,0x6F,0x72,0x61,0x72,0x20,0x28,0x49,0x29,0x00};
// Fail (F)
const BYTE fail_portuguese[] = {0x46,0x61,0x6C,0x68,0x61,0x72,0x20,0x28,0x46,0x29,0x00};

#endif