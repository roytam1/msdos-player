/*
	MS-DOS Player for Win32 console

	Author : Takeda.Toshiya
	Date   : 2024.07.14-
*/

#ifndef _LANG_JP_H_
#define _LANG_JP_H_

/* ----------------------------------------------------------------------------
	Japanese messages (932: Shift JIS)
---------------------------------------------------------------------------- */

// Invalid function
const BYTE standard_error_japanese_01[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x74,0x83,0x40,0x83,0x93,0x83,0x4E,0x83,0x56,0x83,0x87,0x83,0x93,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// File not found
const BYTE standard_error_japanese_02[] = {0x83,0x74,0x83,0x40,0x83,0x43,0x83,0x8B,0x82,0xAA,0x8C,0xA9,0x82,0xC2,0x82,0xA9,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Path not found
const BYTE standard_error_japanese_03[] = {0x83,0x70,0x83,0x58,0x82,0xAA,0x8C,0xA9,0x82,0xC2,0x82,0xA9,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Too many open files
const BYTE standard_error_japanese_04[] = {0x8A,0x4A,0x82,0xA9,0x82,0xEA,0x82,0xC4,0x82,0xA2,0x82,0xE9,0x83,0x74,0x83,0x40,0x83,0x43,0x83,0x8B,0x82,0xAA,0x91,0xBD,0x82,0xB7,0x82,0xAC,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Access denied
const BYTE standard_error_japanese_05[] = {0x83,0x41,0x83,0x4E,0x83,0x5A,0x83,0x58,0x82,0xCD,0x8B,0x91,0x94,0xDB,0x82,0xB3,0x82,0xEA,0x82,0xDC,0x82,0xB5,0x82,0xBD,0x2E,0x00};
// Invalid handle
const BYTE standard_error_japanese_06[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x6E,0x83,0x93,0x83,0x68,0x83,0x8B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Memory control blocks destroyed
const BYTE standard_error_japanese_07[] = {0x83,0x81,0x83,0x82,0x83,0x8A,0x90,0xA7,0x8C,0xE4,0x83,0x75,0x83,0x8D,0x83,0x62,0x83,0x4E,0x82,0xAA,0x94,0x6A,0x8A,0xFC,0x82,0xB3,0x82,0xEA,0x82,0xDC,0x82,0xB5,0x82,0xBD,0x2E,0x00};
// Insufficient memory
const BYTE standard_error_japanese_08[] = {0x83,0x81,0x83,0x82,0x83,0x8A,0x82,0xAA,0x91,0xAB,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Invalid memory block address
const BYTE standard_error_japanese_09[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x81,0x83,0x82,0x83,0x8A,0x83,0x75,0x83,0x8D,0x83,0x62,0x83,0x4E,0x82,0xCC,0x83,0x41,0x83,0x68,0x83,0x8C,0x83,0x58,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid Environment
const BYTE standard_error_japanese_0A[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x8A,0xC2,0x8B,0xAB,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid format
const BYTE standard_error_japanese_0B[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x74,0x83,0x48,0x81,0x5B,0x83,0x7D,0x83,0x62,0x83,0x67,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid function parameter
const BYTE standard_error_japanese_0C[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x74,0x83,0x40,0x83,0x93,0x83,0x4E,0x83,0x56,0x83,0x87,0x83,0x93,0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid data
const BYTE standard_error_japanese_0D[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x66,0x81,0x5B,0x83,0x5E,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid drive specification
const BYTE standard_error_japanese_0F[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x68,0x83,0x89,0x83,0x43,0x83,0x75,0x82,0xCC,0x8E,0x77,0x92,0xE8,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Attempt to remove current directory
const BYTE standard_error_japanese_10[] = {0x8C,0xBB,0x8D,0xDD,0x82,0xCC,0x83,0x66,0x83,0x42,0x83,0x8C,0x83,0x4E,0x83,0x67,0x83,0x8A,0x82,0xF0,0x8D,0xED,0x8F,0x9C,0x82,0xB5,0x82,0xE6,0x82,0xA4,0x82,0xC6,0x82,0xB5,0x82,0xDC,0x82,0xB5,0x82,0xBD,0x2E,0x00};
// Not same device
const BYTE standard_error_japanese_11[] = {0x93,0xAF,0x82,0xB6,0x83,0x66,0x83,0x6F,0x83,0x43,0x83,0x58,0x82,0xC5,0x82,0xCD,0x82,0xA0,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// No more files
const BYTE standard_error_japanese_12[] = {0x83,0x74,0x83,0x40,0x83,0x43,0x83,0x8B,0x82,0xCD,0x82,0xB1,0x82,0xEA,0x88,0xC8,0x8F,0xE3,0x82,0xA0,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};

// Write protect error
const BYTE critical_error_japanese_00[] = {0x8F,0x91,0x82,0xAB,0x8D,0x9E,0x82,0xDD,0x95,0xDB,0x8C,0xEC,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid unit
const BYTE critical_error_japanese_01[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x86,0x83,0x6A,0x83,0x62,0x83,0x67,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Not ready
const BYTE critical_error_japanese_02[] = {0x8F,0x80,0x94,0xF5,0x82,0xAA,0x82,0xC5,0x82,0xAB,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Invalid device request
const BYTE critical_error_japanese_03[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x66,0x83,0x6F,0x83,0x43,0x83,0x58,0x97,0x76,0x8B,0x81,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Data error
const BYTE critical_error_japanese_04[] = {0x83,0x66,0x81,0x5B,0x83,0x5E,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid device request parameters
const BYTE critical_error_japanese_05[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x66,0x83,0x6F,0x83,0x43,0x83,0x58,0x97,0x76,0x8B,0x81,0x82,0xCC,0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Seek error
const BYTE critical_error_japanese_06[] = {0x83,0x56,0x81,0x5B,0x83,0x4E,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid media type
const BYTE critical_error_japanese_07[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x81,0x83,0x66,0x83,0x42,0x83,0x41,0x82,0xCC,0x8E,0xED,0x97,0xDE,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Sector not found
const BYTE critical_error_japanese_08[] = {0x83,0x5A,0x83,0x4E,0x83,0x5E,0x82,0xAA,0x8C,0xA9,0x82,0xC2,0x82,0xA9,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Printer out of paper error
const BYTE critical_error_japanese_09[] = {0x83,0x76,0x83,0x8A,0x83,0x93,0x83,0x5E,0x82,0xCC,0x97,0x70,0x8E,0x86,0x82,0xAA,0x82,0xA0,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Write fault error
const BYTE critical_error_japanese_0A[] = {0x8F,0x91,0x82,0xAB,0x8D,0x9E,0x82,0xDD,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Read fault error
const BYTE critical_error_japanese_0B[] = {0x93,0xC7,0x82,0xDD,0x8E,0xE6,0x82,0xE8,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// General failure
const BYTE critical_error_japanese_0C[] = {0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Sharing violation
const BYTE critical_error_japanese_0D[] = {0x8B,0xA4,0x97,0x4C,0x88,0xE1,0x94,0xBD,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Lock violation
const BYTE critical_error_japanese_0E[] = {0x83,0x8D,0x83,0x62,0x83,0x4E,0x88,0xE1,0x94,0xBD,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid disk change
const BYTE critical_error_japanese_0F[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x66,0x83,0x42,0x83,0x58,0x83,0x4E,0x82,0xCC,0x8C,0xF0,0x8A,0xB7,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// FCB unavailable
const BYTE critical_error_japanese_10[] = {0x46,0x43,0x42,0x20,0x82,0xCD,0x8E,0x67,0x82,0xA6,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// System resource exhausted
const BYTE critical_error_japanese_11[] = {0x83,0x56,0x83,0x58,0x83,0x65,0x83,0x80,0x83,0x8A,0x83,0x5C,0x81,0x5B,0x83,0x58,0x82,0xCD,0x82,0xE0,0x82,0xA4,0x8E,0x67,0x82,0xA6,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Code page mismatch
const BYTE critical_error_japanese_12[] = {0x83,0x52,0x81,0x5B,0x83,0x68,0x20,0x83,0x79,0x81,0x5B,0x83,0x57,0x82,0xAA,0x88,0xEA,0x92,0x76,0x82,0xB5,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Out of input
const BYTE critical_error_japanese_13[] = {0x93,0xFC,0x97,0xCD,0x82,0xAA,0x8F,0x49,0x82,0xED,0x82,0xE8,0x82,0xDC,0x82,0xB5,0x82,0xBD,0x2E,0x00};
// Insufficient disk space
const BYTE critical_error_japanese_14[] = {0x83,0x66,0x83,0x42,0x83,0x58,0x83,0x4E,0x82,0xCC,0x8B,0xF3,0x82,0xAB,0x97,0xCC,0x88,0xE6,0x82,0xAA,0x91,0xAB,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};

// File exists
const BYTE standard_error_japanese_50[] = {0x83,0x74,0x83,0x40,0x83,0x43,0x83,0x8B,0x82,0xCD,0x91,0xB6,0x8D,0xDD,0x82,0xB5,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Cannot make directory entry
const BYTE standard_error_japanese_52[] = {0x83,0x66,0x83,0x42,0x83,0x8C,0x83,0x4E,0x83,0x67,0x83,0x8A,0x83,0x47,0x83,0x93,0x83,0x67,0x83,0x8A,0x82,0xF0,0x8D,0xEC,0x90,0xAC,0x82,0xC5,0x82,0xAB,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Fail on INT 24
const BYTE standard_error_japanese_53[] = {0x49,0x4E,0x54,0x20,0x32,0x34,0x20,0x82,0xC5,0x8E,0xB8,0x94,0x73,0x82,0xB5,0x82,0xDC,0x82,0xB5,0x82,0xBD,0x2E,0x00};
// Too many redirections
const BYTE standard_error_japanese_54[] = {0x83,0x8A,0x83,0x5F,0x83,0x43,0x83,0x8C,0x83,0x4E,0x83,0x67,0x82,0xAA,0x91,0xBD,0x82,0xB7,0x82,0xAC,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Duplicate redirection
const BYTE standard_error_japanese_55[] = {0x83,0x8A,0x83,0x5F,0x83,0x43,0x83,0x8C,0x83,0x4E,0x83,0x67,0x82,0xAA,0x8F,0x64,0x95,0xA1,0x82,0xB5,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Invalid password
const BYTE standard_error_japanese_56[] = {0x83,0x70,0x83,0x58,0x83,0x8F,0x81,0x5B,0x83,0x68,0x82,0xAA,0x88,0xE1,0x82,0xA2,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Invalid parameter
const BYTE standard_error_japanese_57[] = {0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xCC,0x8E,0x77,0x92,0xE8,0x82,0xAA,0x88,0xE1,0x82,0xA2,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Network data fault
const BYTE standard_error_japanese_58[] = {0x83,0x6C,0x83,0x62,0x83,0x67,0x83,0x8F,0x81,0x5B,0x83,0x4E,0x83,0x66,0x81,0x5B,0x83,0x5E,0x82,0xCC,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Function not supported by network
const BYTE standard_error_japanese_59[] = {0x83,0x74,0x83,0x40,0x83,0x93,0x83,0x4E,0x83,0x56,0x83,0x87,0x83,0x93,0x82,0xCD,0x83,0x6C,0x83,0x62,0x83,0x67,0x83,0x8F,0x81,0x5B,0x83,0x4E,0x82,0xC5,0x83,0x54,0x83,0x7C,0x81,0x5B,0x83,0x67,0x82,0xB3,0x82,0xEA,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Required system component not installe
const BYTE standard_error_japanese_5A[] = {0x95,0x4B,0x97,0x76,0x82,0xC8,0x83,0x56,0x83,0x58,0x83,0x65,0x83,0x80,0x20,0x83,0x52,0x83,0x93,0x83,0x7C,0x81,0x5B,0x83,0x6C,0x83,0x93,0x83,0x67,0x82,0xAA,0x91,0x67,0x82,0xDD,0x8D,0x9E,0x82,0xDC,0x82,0xEA,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};

// Unknown error
const BYTE standard_error_japanese_64[] = {0x95,0x73,0x96,0xBE,0x82,0xC8,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Not ready
const BYTE standard_error_japanese_65[] = {0x8F,0x80,0x94,0xF5,0x82,0xAA,0x82,0xC5,0x82,0xAB,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// EMS memory no longer valid
const BYTE standard_error_japanese_66[] = {0x45,0x4D,0x53,0x20,0x83,0x81,0x83,0x82,0x83,0x8A,0x82,0xCD,0x82,0xE0,0x82,0xA4,0x97,0x4C,0x8C,0xF8,0x82,0xC5,0x82,0xCD,0x82,0xA0,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// CDROM not High Sierra or ISO-9660 format
const BYTE standard_error_japanese_67[] = {0x43,0x44,0x52,0x4F,0x4D,0x20,0x82,0xCD,0x20,0x48,0x69,0x67,0x68,0x20,0x53,0x69,0x65,0x72,0x72,0x61,0x20,0x82,0xDC,0x82,0xBD,0x82,0xCD,0x20,0x49,0x53,0x4F,0x2D,0x39,0x36,0x36,0x30,0x20,0x83,0x74,0x83,0x48,0x81,0x5B,0x83,0x7D,0x83,0x62,0x83,0x67,0x82,0xC5,0x82,0xCD,0x82,0xA0,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Door open
const BYTE standard_error_japanese_68[] = {0x83,0x8C,0x83,0x6F,0x81,0x5B,0x82,0xAA,0x95,0xC2,0x82,0xDC,0x82,0xC1,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};

// Volume is not locked
const BYTE standard_error_japanese_B0[] = {0x83,0x7B,0x83,0x8A,0x83,0x85,0x81,0x5B,0x83,0x80,0x82,0xAA,0x83,0x8D,0x83,0x62,0x83,0x4E,0x82,0xB3,0x82,0xEA,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Volume is locked in drive
const BYTE standard_error_japanese_B1[] = {0x83,0x7B,0x83,0x8A,0x83,0x85,0x81,0x5B,0x83,0x80,0x82,0xAA,0x83,0x8D,0x83,0x62,0x83,0x4E,0x82,0xB3,0x82,0xEA,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Volume is not removable
const BYTE standard_error_japanese_B2[] = {0x83,0x7B,0x83,0x8A,0x83,0x85,0x81,0x5B,0x83,0x80,0x82,0xCD,0x8E,0xE6,0x82,0xE8,0x8A,0x4F,0x82,0xB5,0x82,0xC5,0x82,0xAB,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Lock count has been exceeded
const BYTE standard_error_japanese_B4[] = {0x83,0x7B,0x83,0x8A,0x83,0x85,0x81,0x5B,0x83,0x80,0x82,0xF0,0x82,0xB1,0x82,0xEA,0x88,0xC8,0x8F,0xE3,0x83,0x8D,0x83,0x62,0x83,0x4E,0x82,0xC5,0x82,0xAB,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// A valid eject request failed
const BYTE standard_error_japanese_B5[] = {0x8E,0xE6,0x82,0xE8,0x8F,0x6F,0x82,0xB5,0x82,0xC9,0x8E,0xB8,0x94,0x73,0x82,0xB5,0x82,0xDC,0x82,0xB5,0x82,0xBD,0x2E,0x00};

// Too many parameters
const BYTE param_error_japanese_01[] = {0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xAA,0x91,0xBD,0x82,0xB7,0x82,0xAC,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Required parameter missing
const BYTE param_error_japanese_02[] = {0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xAA,0x91,0xAB,0x82,0xE8,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Invalid switch
const BYTE param_error_japanese_03[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x58,0x83,0x43,0x83,0x62,0x83,0x60,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid keyword
const BYTE param_error_japanese_04[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x4C,0x81,0x5B,0x83,0x8F,0x81,0x5B,0x83,0x68,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Parameter value not in allowed range
const BYTE param_error_japanese_06[] = {0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xCC,0x92,0x6C,0x82,0xAA,0x94,0xCD,0x88,0xCD,0x82,0xF0,0x92,0xB4,0x82,0xA6,0x82,0xC4,0x82,0xA2,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Parameter value not allowed
const BYTE param_error_japanese_07[] = {0x82,0xBB,0x82,0xCC,0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xCC,0x92,0x6C,0x82,0xCD,0x8E,0x67,0x82,0xA6,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Parameter value not allowed
const BYTE param_error_japanese_08[] = {0x82,0xBB,0x82,0xCC,0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xCC,0x92,0x6C,0x82,0xCD,0x8E,0x67,0x82,0xA6,0x82,0xDC,0x82,0xB9,0x82,0xF1,0x2E,0x00};
// Parameter format not correct
const BYTE param_error_japanese_09[] = {0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xCC,0x8F,0x91,0x8E,0xAE,0x82,0xAA,0x88,0xE1,0x82,0xA2,0x82,0xDC,0x82,0xB7,0x2E,0x00};
// Invalid parameter
const BYTE param_error_japanese_0A[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Invalid parameter combination
const BYTE param_error_japanese_0B[] = {0x96,0xB3,0x8C,0xF8,0x82,0xC8,0x83,0x70,0x83,0x89,0x83,0x81,0x81,0x5B,0x83,0x5E,0x82,0xCC,0x91,0x67,0x82,0xDD,0x8D,0x87,0x82,0xED,0x82,0xB9,0x82,0xC5,0x82,0xB7,0x2E,0x00};

// Unknown error
const BYTE unknown_error_japanese[] = {0x95,0x73,0x96,0xBE,0x82,0xC8,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};
// Critical error
const BYTE critical_error_japanese[] = {0x92,0x76,0x96,0xBD,0x93,0x49,0x82,0xC8,0x83,0x47,0x83,0x89,0x81,0x5B,0x82,0xC5,0x82,0xB7,0x2E,0x00};

// writing drive
const BYTE writing_drive_japanese[] = {0x8F,0x91,0x82,0xAB,0x8D,0x9E,0x82,0xDD,0x92,0x86,0x20,0x83,0x68,0x83,0x89,0x83,0x43,0x83,0x75,0x00};
// reading drive
const BYTE reading_drive_japanese[] = {0x93,0xC7,0x82,0xDD,0x8E,0xE6,0x82,0xE8,0x92,0x86,0x20,0x83,0x68,0x83,0x89,0x83,0x43,0x83,0x75,0x00};

// Abort (A)
const BYTE abort_japanese[] = {0x92,0x86,0x8E,0x7E,0x20,0x28,0x41,0x29,0x00};
// Retry (R)
const BYTE retry_japanese[] = {0x8D,0xC4,0x8E,0x8E,0x8D,0x73,0x20,0x28,0x52,0x29,0x00};
// Igore (I)
const BYTE ignore_japanese[] = {0x96,0xB3,0x8E,0x8B,0x20,0x28,0x49,0x29,0x00};
// Fail (F)
const BYTE fail_japanese[] = {0x8E,0xB8,0x94,0x73,0x20,0x28,0x46,0x29,0x00};

#endif