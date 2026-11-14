/* ----------------------------------------------------------------------------
	MAME i86/i286
---------------------------------------------------------------------------- */

// disable warnings for Microsoft Visual C++ 2005 or later
#if defined(_MSC_VER) && (_MSC_VER >= 1400)
// for MAME i86/i386
#pragma warning( disable : 4065 )
#pragma warning( disable : 4146 )
#pragma warning( disable : 4267 )
#endif

#ifndef __BIG_ENDIAN__
#define LSB_FIRST
#endif

#ifndef INLINE
#define INLINE inline
#endif
#define S64(v) INT64(v)
#define U64(v) UINT64(v)

#ifdef _MSC_VC6
void logerror(const char *format, ...)
{
//	va_list ap;
//	va_start(ap, format);
//	vfprintf(stderr, format, ap);
//	va_end(ap);
}
void popmessage(const char *format, ...)
{
//	va_list ap;
//	va_start(ap, format);
//	vfprintf(stderr, format, ap);
//	va_end(ap);
}
#else
//#define logerror(...) fprintf(stderr, __VA_ARGS__)
#define logerror(...)
//#define popmessage(...) fprintf(stderr, __VA_ARGS__)
#define popmessage(...)
#endif

/*****************************************************************************/
/* src/emu/devcpu.h */

// CPU interface functions
#define CPU_INIT_NAME(name)			cpu_init_##name
#define CPU_INIT(name)				void CPU_INIT_NAME(name)()
#define CPU_INIT_CALL(name)			CPU_INIT_NAME(name)()

#define CPU_RESET_NAME(name)			cpu_reset_##name
#define CPU_RESET(name)				void CPU_RESET_NAME(name)()
#define CPU_RESET_CALL(name)			CPU_RESET_NAME(name)()

#define CPU_EXECUTE_NAME(name)			cpu_execute_##name
#define CPU_EXECUTE(name)			void CPU_EXECUTE_NAME(name)()
#define CPU_EXECUTE_CALL(name)			CPU_EXECUTE_NAME(name)()

#define CPU_TRANSLATE_NAME(name)		cpu_translate_##name
#define CPU_TRANSLATE(name)			int CPU_TRANSLATE_NAME(name)(address_spacenum space, int intention, offs_t *address)
#define CPU_TRANSLATE_CALL(name)		CPU_TRANSLATE_NAME(name)(space, intention, address)

#define CPU_DISASSEMBLE_NAME(name)		cpu_disassemble_##name
#define CPU_DISASSEMBLE(name)			int CPU_DISASSEMBLE_NAME(name)(char *buffer, offs_t eip, const UINT8 *oprom)
#define CPU_DISASSEMBLE_CALL(name)		CPU_DISASSEMBLE_NAME(name)(buffer, eip, oprom)

#define CPU_MODEL_STR(name)			#name
#define CPU_MODEL_NAME(name)			CPU_MODEL_STR(name)

/*****************************************************************************/
/* src/emu/didisasm.h */

// Disassembler constants
const UINT32 DASMFLAG_SUPPORTED     = 0x80000000;   // are disassembly flags supported?
const UINT32 DASMFLAG_STEP_OUT      = 0x40000000;   // this instruction should be the end of a step out sequence
const UINT32 DASMFLAG_STEP_OVER     = 0x20000000;   // this instruction should be stepped over by setting a breakpoint afterwards
const UINT32 DASMFLAG_STEP_COND     = 0x10000000;   // this instruction should be stepped over by setting a breakpoint afterwards
const UINT32 DASMFLAG_OVERINSTMASK  = 0x0c000000;   // number of extra instructions to skip when stepping over
const UINT32 DASMFLAG_OVERINSTSHIFT = 26;           // bits to shift after masking to get the value
const UINT32 DASMFLAG_LENGTHMASK    = 0x0000ffff;   // the low 16-bits contain the actual length

/*****************************************************************************/
/* src/emu/diexec.h */

// I/O line states
enum line_state
{
	CLEAR_LINE = 0,				// clear (a fired or held) line
	ASSERT_LINE,				// assert an interrupt immediately
	HOLD_LINE,				// hold interrupt line until acknowledged
	PULSE_LINE				// pulse interrupt line instantaneously (only for NMI, RESET)
};

// I/O line definitions
enum
{
	INPUT_LINE_IRQ = 0,
	INPUT_LINE_NMI
};

/*****************************************************************************/
/* src/emu/emucore.h */

// constants for expression endianness
enum endianness_t
{
	ENDIANNESS_LITTLE,
	ENDIANNESS_BIG
};

// declare native endianness to be one or the other
#ifdef LSB_FIRST
const endianness_t ENDIANNESS_NATIVE = ENDIANNESS_LITTLE;
#else
const endianness_t ENDIANNESS_NATIVE = ENDIANNESS_BIG;
#endif

// endian-based value: first value is if 'endian' is little-endian, second is if 'endian' is big-endian
#define ENDIAN_VALUE_LE_BE(endian,leval,beval)	(((endian) == ENDIANNESS_LITTLE) ? (leval) : (beval))

// endian-based value: first value is if native endianness is little-endian, second is if native is big-endian
#define NATIVE_ENDIAN_VALUE_LE_BE(leval,beval)	ENDIAN_VALUE_LE_BE(ENDIANNESS_NATIVE, leval, beval)

// endian-based value: first value is if 'endian' matches native, second is if 'endian' doesn't match native
#define ENDIAN_VALUE_NE_NNE(endian,leval,beval)	(((endian) == ENDIANNESS_NATIVE) ? (neval) : (nneval))

/*****************************************************************************/
/* src/emu/emumem.h */

// helpers for checking address alignment
#define WORD_ALIGNED(a)                 (((a) & 1) == 0)
#define DWORD_ALIGNED(a)                (((a) & 3) == 0)
#define QWORD_ALIGNED(a)                (((a) & 7) == 0)

/*****************************************************************************/
/* src/emu/memory.h */

// address spaces
enum address_spacenum
{
	AS_0,                           // first address space
	AS_1,                           // second address space
	AS_2,                           // third address space
	AS_3,                           // fourth address space
	ADDRESS_SPACES,                 // maximum number of address spaces

	// alternate address space names for common use
	AS_PROGRAM = AS_0,              // program address space
	AS_DATA = AS_1,                 // data address space
	AS_IO = AS_2                    // I/O address space
};

// offsets and addresses are 32-bit (for now...)
typedef UINT32	offs_t;

#define read_decrypted_byte read_byte
#define read_decrypted_word read_word
#define read_decrypted_dword read_dword

#define read_raw_byte read_byte
#define write_raw_byte write_byte

#define read_word_unaligned read_word
#define write_word_unaligned write_word

#define read_io_word_unaligned read_io_word
#define write_io_word_unaligned write_io_word

/*****************************************************************************/
/* src/osd/osdcomm.h */

/* Highly useful macro for compile-time knowledge of an array size */
#define ARRAY_LENGTH(x)     (sizeof(x) / sizeof(x[0]))

#ifdef _MSC_VC6
UINT32 activecpu_get_pc();
#endif

#if defined(HAS_I286)
#include "mame/emu/cpu/i86/i286.c"
#else
#include "mame/emu/cpu/i86/i86.c"
#endif

#undef CPU_INIT
#undef CPU_RESET
#undef CPU_EXECUTE

#ifdef _MSC_VC6
UINT32 activecpu_get_pc()
{
	return m_pc;
}
#endif

#ifdef USE_DEBUGGER
#include "mame/emu/cpu/i386/i386dasm.c"

#undef CPU_DISASSEMBLE

int CPU_DISASSEMBLE(UINT8 *oprom, offs_t eip, bool is_8080mode, char *buffer, size_t buffer_len)
{
#if defined(HAS_V30)
	if(is_8080mode) {
		int ptr = 0;
		
		switch(oprom[ptr++]) {
			case 0x00: my_snprintf(buffer, buffer_len, "nop"); break;
			case 0x01: my_snprintf(buffer, buffer_len, "lxi  b,$%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x02: my_snprintf(buffer, buffer_len, "stax b"); break;
			case 0x03: my_snprintf(buffer, buffer_len, "inx  b"); break;
			case 0x04: my_snprintf(buffer, buffer_len, "inr  b"); break;
			case 0x05: my_snprintf(buffer, buffer_len, "dcr  b"); break;
			case 0x06: my_snprintf(buffer, buffer_len, "mvi  b,$%02x", oprom[ptr++]); break;
			case 0x07: my_snprintf(buffer, buffer_len, "rlc"); break;
			case 0x08: my_snprintf(buffer, buffer_len, "nop"); break;
			case 0x09: my_snprintf(buffer, buffer_len, "dad  b"); break;
			case 0x0a: my_snprintf(buffer, buffer_len, "ldax b"); break;
			case 0x0b: my_snprintf(buffer, buffer_len, "dcx  b"); break;
			case 0x0c: my_snprintf(buffer, buffer_len, "inr  c"); break;
			case 0x0d: my_snprintf(buffer, buffer_len, "dcr  c"); break;
			case 0x0e: my_snprintf(buffer, buffer_len, "mvi  c,$%02x", oprom[ptr++]); break;
			case 0x0f: my_snprintf(buffer, buffer_len, "rrc"); break;
			case 0x10: my_snprintf(buffer, buffer_len, "nop"); break;
			case 0x11: my_snprintf(buffer, buffer_len, "lxi  d,$%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x12: my_snprintf(buffer, buffer_len, "stax d"); break;
			case 0x13: my_snprintf(buffer, buffer_len, "inx  d"); break;
			case 0x14: my_snprintf(buffer, buffer_len, "inr  d"); break;
			case 0x15: my_snprintf(buffer, buffer_len, "dcr  d"); break;
			case 0x16: my_snprintf(buffer, buffer_len, "mvi  d,$%02x", oprom[ptr++]); break;
			case 0x17: my_snprintf(buffer, buffer_len, "ral"); break;
			case 0x18: my_snprintf(buffer, buffer_len, "nop"); break;
			case 0x19: my_snprintf(buffer, buffer_len, "dad  d"); break;
			case 0x1a: my_snprintf(buffer, buffer_len, "ldax d"); break;
			case 0x1b: my_snprintf(buffer, buffer_len, "dcx  d"); break;
			case 0x1c: my_snprintf(buffer, buffer_len, "inr  e"); break;
			case 0x1d: my_snprintf(buffer, buffer_len, "dcr  e"); break;
			case 0x1e: my_snprintf(buffer, buffer_len, "mvi  e,$%02x", oprom[ptr++]); break;
			case 0x1f: my_snprintf(buffer, buffer_len, "rar"); break;
			case 0x20: my_snprintf(buffer, buffer_len, "rim"); break;
			case 0x21: my_snprintf(buffer, buffer_len, "lxi  h,$%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x22: my_snprintf(buffer, buffer_len, "shld $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x23: my_snprintf(buffer, buffer_len, "inx  h"); break;
			case 0x24: my_snprintf(buffer, buffer_len, "inr  h"); break;
			case 0x25: my_snprintf(buffer, buffer_len, "dcr  h"); break;
			case 0x26: my_snprintf(buffer, buffer_len, "mvi  h,$%02x", oprom[ptr++]); break;
			case 0x27: my_snprintf(buffer, buffer_len, "daa"); break;
			case 0x28: my_snprintf(buffer, buffer_len, "nop"); break;
			case 0x29: my_snprintf(buffer, buffer_len, "dad  h"); break;
			case 0x2a: my_snprintf(buffer, buffer_len, "lhld $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x2b: my_snprintf(buffer, buffer_len, "dcx  h"); break;
			case 0x2c: my_snprintf(buffer, buffer_len, "inr  l"); break;
			case 0x2d: my_snprintf(buffer, buffer_len, "dcr  l"); break;
			case 0x2e: my_snprintf(buffer, buffer_len, "mvi  l,$%02x", oprom[ptr++]); break;
			case 0x2f: my_snprintf(buffer, buffer_len, "cma"); break;
			case 0x30: my_snprintf(buffer, buffer_len, "sim"); break;
			case 0x31: my_snprintf(buffer, buffer_len, "lxi  sp,$%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x32: my_snprintf(buffer, buffer_len, "stax $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x33: my_snprintf(buffer, buffer_len, "inx  sp"); break;
			case 0x34: my_snprintf(buffer, buffer_len, "inr  m"); break;
			case 0x35: my_snprintf(buffer, buffer_len, "dcr  m"); break;
			case 0x36: my_snprintf(buffer, buffer_len, "mvi  m,$%02x", oprom[ptr++]); break;
			case 0x37: my_snprintf(buffer, buffer_len, "stc"); break;
			case 0x38: my_snprintf(buffer, buffer_len, "ldes $%02x", oprom[ptr++]); break;
			case 0x39: my_snprintf(buffer, buffer_len, "dad sp"); break;
			case 0x3a: my_snprintf(buffer, buffer_len, "ldax $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0x3b: my_snprintf(buffer, buffer_len, "dcx  sp"); break;
			case 0x3c: my_snprintf(buffer, buffer_len, "inr  a"); break;
			case 0x3d: my_snprintf(buffer, buffer_len, "dcr  a"); break;
			case 0x3e: my_snprintf(buffer, buffer_len, "mvi  a,$%02x", oprom[ptr++]); break;
			case 0x3f: my_snprintf(buffer, buffer_len, "cmf"); break;
			case 0x40: my_snprintf(buffer, buffer_len, "mov  b,b"); break;
			case 0x41: my_snprintf(buffer, buffer_len, "mov  b,c"); break;
			case 0x42: my_snprintf(buffer, buffer_len, "mov  b,d"); break;
			case 0x43: my_snprintf(buffer, buffer_len, "mov  b,e"); break;
			case 0x44: my_snprintf(buffer, buffer_len, "mov  b,h"); break;
			case 0x45: my_snprintf(buffer, buffer_len, "mov  b,l"); break;
			case 0x46: my_snprintf(buffer, buffer_len, "mov  b,m"); break;
			case 0x47: my_snprintf(buffer, buffer_len, "mov  b,a"); break;
			case 0x48: my_snprintf(buffer, buffer_len, "mov  c,b"); break;
			case 0x49: my_snprintf(buffer, buffer_len, "mov  c,c"); break;
			case 0x4a: my_snprintf(buffer, buffer_len, "mov  c,d"); break;
			case 0x4b: my_snprintf(buffer, buffer_len, "mov  c,e"); break;
			case 0x4c: my_snprintf(buffer, buffer_len, "mov  c,h"); break;
			case 0x4d: my_snprintf(buffer, buffer_len, "mov  c,l"); break;
			case 0x4e: my_snprintf(buffer, buffer_len, "mov  c,m"); break;
			case 0x4f: my_snprintf(buffer, buffer_len, "mov  c,a"); break;
			case 0x50: my_snprintf(buffer, buffer_len, "mov  d,b"); break;
			case 0x51: my_snprintf(buffer, buffer_len, "mov  d,c"); break;
			case 0x52: my_snprintf(buffer, buffer_len, "mov  d,d"); break;
			case 0x53: my_snprintf(buffer, buffer_len, "mov  d,e"); break;
			case 0x54: my_snprintf(buffer, buffer_len, "mov  d,h"); break;
			case 0x55: my_snprintf(buffer, buffer_len, "mov  d,l"); break;
			case 0x56: my_snprintf(buffer, buffer_len, "mov  d,m"); break;
			case 0x57: my_snprintf(buffer, buffer_len, "mov  d,a"); break;
			case 0x58: my_snprintf(buffer, buffer_len, "mov  e,b"); break;
			case 0x59: my_snprintf(buffer, buffer_len, "mov  e,c"); break;
			case 0x5a: my_snprintf(buffer, buffer_len, "mov  e,d"); break;
			case 0x5b: my_snprintf(buffer, buffer_len, "mov  e,e"); break;
			case 0x5c: my_snprintf(buffer, buffer_len, "mov  e,h"); break;
			case 0x5d: my_snprintf(buffer, buffer_len, "mov  e,l"); break;
			case 0x5e: my_snprintf(buffer, buffer_len, "mov  e,m"); break;
			case 0x5f: my_snprintf(buffer, buffer_len, "mov  e,a"); break;
			case 0x60: my_snprintf(buffer, buffer_len, "mov  h,b"); break;
			case 0x61: my_snprintf(buffer, buffer_len, "mov  h,c"); break;
			case 0x62: my_snprintf(buffer, buffer_len, "mov  h,d"); break;
			case 0x63: my_snprintf(buffer, buffer_len, "mov  h,e"); break;
			case 0x64: my_snprintf(buffer, buffer_len, "mov  h,h"); break;
			case 0x65: my_snprintf(buffer, buffer_len, "mov  h,l"); break;
			case 0x66: my_snprintf(buffer, buffer_len, "mov  h,m"); break;
			case 0x67: my_snprintf(buffer, buffer_len, "mov  h,a"); break;
			case 0x68: my_snprintf(buffer, buffer_len, "mov  l,b"); break;
			case 0x69: my_snprintf(buffer, buffer_len, "mov  l,c"); break;
			case 0x6a: my_snprintf(buffer, buffer_len, "mov  l,d"); break;
			case 0x6b: my_snprintf(buffer, buffer_len, "mov  l,e"); break;
			case 0x6c: my_snprintf(buffer, buffer_len, "mov  l,h"); break;
			case 0x6d: my_snprintf(buffer, buffer_len, "mov  l,l"); break;
			case 0x6e: my_snprintf(buffer, buffer_len, "mov  l,m"); break;
			case 0x6f: my_snprintf(buffer, buffer_len, "mov  l,a"); break;
			case 0x70: my_snprintf(buffer, buffer_len, "mov  m,b"); break;
			case 0x71: my_snprintf(buffer, buffer_len, "mov  m,c"); break;
			case 0x72: my_snprintf(buffer, buffer_len, "mov  m,d"); break;
			case 0x73: my_snprintf(buffer, buffer_len, "mov  m,e"); break;
			case 0x74: my_snprintf(buffer, buffer_len, "mov  m,h"); break;
			case 0x75: my_snprintf(buffer, buffer_len, "mov  m,l"); break;
			case 0x76: my_snprintf(buffer, buffer_len, "hlt"); break;
			case 0x77: my_snprintf(buffer, buffer_len, "mov  m,a"); break;
			case 0x78: my_snprintf(buffer, buffer_len, "mov  a,b"); break;
			case 0x79: my_snprintf(buffer, buffer_len, "mov  a,c"); break;
			case 0x7a: my_snprintf(buffer, buffer_len, "mov  a,d"); break;
			case 0x7b: my_snprintf(buffer, buffer_len, "mov  a,e"); break;
			case 0x7c: my_snprintf(buffer, buffer_len, "mov  a,h"); break;
			case 0x7d: my_snprintf(buffer, buffer_len, "mov  a,l"); break;
			case 0x7e: my_snprintf(buffer, buffer_len, "mov  a,m"); break;
			case 0x7f: my_snprintf(buffer, buffer_len, "mov  a,a"); break;
			case 0x80: my_snprintf(buffer, buffer_len, "add  b"); break;
			case 0x81: my_snprintf(buffer, buffer_len, "add  c"); break;
			case 0x82: my_snprintf(buffer, buffer_len, "add  d"); break;
			case 0x83: my_snprintf(buffer, buffer_len, "add  e"); break;
			case 0x84: my_snprintf(buffer, buffer_len, "add  h"); break;
			case 0x85: my_snprintf(buffer, buffer_len, "add  l"); break;
			case 0x86: my_snprintf(buffer, buffer_len, "add  m"); break;
			case 0x87: my_snprintf(buffer, buffer_len, "add  a"); break;
			case 0x88: my_snprintf(buffer, buffer_len, "adc  b"); break;
			case 0x89: my_snprintf(buffer, buffer_len, "adc  c"); break;
			case 0x8a: my_snprintf(buffer, buffer_len, "adc  d"); break;
			case 0x8b: my_snprintf(buffer, buffer_len, "adc  e"); break;
			case 0x8c: my_snprintf(buffer, buffer_len, "adc  h"); break;
			case 0x8d: my_snprintf(buffer, buffer_len, "adc  l"); break;
			case 0x8e: my_snprintf(buffer, buffer_len, "adc  m"); break;
			case 0x8f: my_snprintf(buffer, buffer_len, "adc  a"); break;
			case 0x90: my_snprintf(buffer, buffer_len, "sub  b"); break;
			case 0x91: my_snprintf(buffer, buffer_len, "sub  c"); break;
			case 0x92: my_snprintf(buffer, buffer_len, "sub  d"); break;
			case 0x93: my_snprintf(buffer, buffer_len, "sub  e"); break;
			case 0x94: my_snprintf(buffer, buffer_len, "sub  h"); break;
			case 0x95: my_snprintf(buffer, buffer_len, "sub  l"); break;
			case 0x96: my_snprintf(buffer, buffer_len, "sub  m"); break;
			case 0x97: my_snprintf(buffer, buffer_len, "sub  a"); break;
			case 0x98: my_snprintf(buffer, buffer_len, "sbb  b"); break;
			case 0x99: my_snprintf(buffer, buffer_len, "sbb  c"); break;
			case 0x9a: my_snprintf(buffer, buffer_len, "sbb  d"); break;
			case 0x9b: my_snprintf(buffer, buffer_len, "sbb  e"); break;
			case 0x9c: my_snprintf(buffer, buffer_len, "sbb  h"); break;
			case 0x9d: my_snprintf(buffer, buffer_len, "sbb  l"); break;
			case 0x9e: my_snprintf(buffer, buffer_len, "sbb  m"); break;
			case 0x9f: my_snprintf(buffer, buffer_len, "sbb  a"); break;
			case 0xa0: my_snprintf(buffer, buffer_len, "ana  b"); break;
			case 0xa1: my_snprintf(buffer, buffer_len, "ana  c"); break;
			case 0xa2: my_snprintf(buffer, buffer_len, "ana  d"); break;
			case 0xa3: my_snprintf(buffer, buffer_len, "ana  e"); break;
			case 0xa4: my_snprintf(buffer, buffer_len, "ana  h"); break;
			case 0xa5: my_snprintf(buffer, buffer_len, "ana  l"); break;
			case 0xa6: my_snprintf(buffer, buffer_len, "ana  m"); break;
			case 0xa7: my_snprintf(buffer, buffer_len, "ana  a"); break;
			case 0xa8: my_snprintf(buffer, buffer_len, "xra  b"); break;
			case 0xa9: my_snprintf(buffer, buffer_len, "xra  c"); break;
			case 0xaa: my_snprintf(buffer, buffer_len, "xra  d"); break;
			case 0xab: my_snprintf(buffer, buffer_len, "xra  e"); break;
			case 0xac: my_snprintf(buffer, buffer_len, "xra  h"); break;
			case 0xad: my_snprintf(buffer, buffer_len, "xra  l"); break;
			case 0xae: my_snprintf(buffer, buffer_len, "xra  m"); break;
			case 0xaf: my_snprintf(buffer, buffer_len, "xra  a"); break;
			case 0xb0: my_snprintf(buffer, buffer_len, "ora  b"); break;
			case 0xb1: my_snprintf(buffer, buffer_len, "ora  c"); break;
			case 0xb2: my_snprintf(buffer, buffer_len, "ora  d"); break;
			case 0xb3: my_snprintf(buffer, buffer_len, "ora  e"); break;
			case 0xb4: my_snprintf(buffer, buffer_len, "ora  h"); break;
			case 0xb5: my_snprintf(buffer, buffer_len, "ora  l"); break;
			case 0xb6: my_snprintf(buffer, buffer_len, "ora  m"); break;
			case 0xb7: my_snprintf(buffer, buffer_len, "ora  a"); break;
			case 0xb8: my_snprintf(buffer, buffer_len, "cmp  b"); break;
			case 0xb9: my_snprintf(buffer, buffer_len, "cmp  c"); break;
			case 0xba: my_snprintf(buffer, buffer_len, "cmp  d"); break;
			case 0xbb: my_snprintf(buffer, buffer_len, "cmp  e"); break;
			case 0xbc: my_snprintf(buffer, buffer_len, "cmp  h"); break;
			case 0xbd: my_snprintf(buffer, buffer_len, "cmp  l"); break;
			case 0xbe: my_snprintf(buffer, buffer_len, "cmp  m"); break;
			case 0xbf: my_snprintf(buffer, buffer_len, "cmp  a"); break;
			case 0xc0: my_snprintf(buffer, buffer_len, "rnz"); break;
			case 0xc1: my_snprintf(buffer, buffer_len, "pop  b"); break;
			case 0xc2: my_snprintf(buffer, buffer_len, "jnz  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xc3: my_snprintf(buffer, buffer_len, "jmp  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xc4: my_snprintf(buffer, buffer_len, "cnz  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xc5: my_snprintf(buffer, buffer_len, "push b"); break;
			case 0xc6: my_snprintf(buffer, buffer_len, "adi  $%02x", oprom[ptr++]); break;
			case 0xc7: my_snprintf(buffer, buffer_len, "rst  0"); break;
			case 0xc8: my_snprintf(buffer, buffer_len, "rz"); break;
			case 0xc9: my_snprintf(buffer, buffer_len, "ret"); break;
			case 0xca: my_snprintf(buffer, buffer_len, "jz   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xcb: my_snprintf(buffer, buffer_len, "jmp  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xcc: my_snprintf(buffer, buffer_len, "cz   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xcd: my_snprintf(buffer, buffer_len, "call $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xce: my_snprintf(buffer, buffer_len, "aci  $%02x", oprom[ptr++]); break;
			case 0xcf: my_snprintf(buffer, buffer_len, "rst  1"); break;
			case 0xd0: my_snprintf(buffer, buffer_len, "rnc"); break;
			case 0xd1: my_snprintf(buffer, buffer_len, "pop  d"); break;
			case 0xd2: my_snprintf(buffer, buffer_len, "jnc  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xd3: my_snprintf(buffer, buffer_len, "out  $%02x", oprom[ptr++]); break;
			case 0xd4: my_snprintf(buffer, buffer_len, "cnc  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xd5: my_snprintf(buffer, buffer_len, "push d"); break;
			case 0xd6: my_snprintf(buffer, buffer_len, "sui  $%02x", oprom[ptr++]); break;
			case 0xd7: my_snprintf(buffer, buffer_len, "rst  2"); break;
			case 0xd8: my_snprintf(buffer, buffer_len, "rc"); break;
			case 0xd9: my_snprintf(buffer, buffer_len, "ret"); break;
			case 0xda: my_snprintf(buffer, buffer_len, "jc   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xdb: my_snprintf(buffer, buffer_len, "in   $%02x", oprom[ptr++]); break;
			case 0xdc: my_snprintf(buffer, buffer_len, "cc   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xdd: my_snprintf(buffer, buffer_len, "call $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xde: my_snprintf(buffer, buffer_len, "sbi  $%02x", oprom[ptr++]); break;
			case 0xdf: my_snprintf(buffer, buffer_len, "rst  3"); break;
			case 0xe0: my_snprintf(buffer, buffer_len, "rpo"); break;
			case 0xe1: my_snprintf(buffer, buffer_len, "pop  h"); break;
			case 0xe2: my_snprintf(buffer, buffer_len, "jpo  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xe3: my_snprintf(buffer, buffer_len, "xthl"); break;
			case 0xe4: my_snprintf(buffer, buffer_len, "cpo  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xe5: my_snprintf(buffer, buffer_len, "push h"); break;
			case 0xe6: my_snprintf(buffer, buffer_len, "ani  $%02x", oprom[ptr++]); break;
			case 0xe7: my_snprintf(buffer, buffer_len, "rst  4"); break;
			case 0xe8: my_snprintf(buffer, buffer_len, "rpe"); break;
			case 0xe9: my_snprintf(buffer, buffer_len, "PChl"); break;
			case 0xea: my_snprintf(buffer, buffer_len, "jpe  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xeb: my_snprintf(buffer, buffer_len, "xchg"); break;
			case 0xec: my_snprintf(buffer, buffer_len, "cpe  $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xed: 
				if(oprom[ptr] == 0xed) {
					my_snprintf(buffer, buffer_len, "calln $%02x", oprom[ptr + 1]);
				} else if(oprom[ptr] == 0xfd) {
					my_snprintf(buffer, buffer_len, "retem");
				} else {
					my_snprintf(buffer, buffer_len, "call $%04x", oprom[ptr] | (oprom[ptr + 1] << 8));
				}
				 ptr += 2;
				 break;
			case 0xee: my_snprintf(buffer, buffer_len, "xri  $%02x", oprom[ptr++]); break;
			case 0xef: my_snprintf(buffer, buffer_len, "rst  5"); break;
			case 0xf0: my_snprintf(buffer, buffer_len, "rp"); break;
			case 0xf1: my_snprintf(buffer, buffer_len, "pop  a"); break;
			case 0xf2: my_snprintf(buffer, buffer_len, "jp   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xf3: my_snprintf(buffer, buffer_len, "di"); break;
			case 0xf4: my_snprintf(buffer, buffer_len, "cp   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xf5: my_snprintf(buffer, buffer_len, "push a"); break;
			case 0xf6: my_snprintf(buffer, buffer_len, "ori  $%02x", oprom[ptr++]); break;
			case 0xf7: my_snprintf(buffer, buffer_len, "rst  6"); break;
			case 0xf8: my_snprintf(buffer, buffer_len, "rm"); break;
			case 0xf9: my_snprintf(buffer, buffer_len, "sphl"); break;
			case 0xfa: my_snprintf(buffer, buffer_len, "jm   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xfb: my_snprintf(buffer, buffer_len, "ei"); break;
			case 0xfc: my_snprintf(buffer, buffer_len, "cm   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xfd: my_snprintf(buffer, buffer_len, "cm   $%04x", oprom[ptr] | (oprom[ptr + 1] << 8)); ptr += 2; break;
			case 0xfe: my_snprintf(buffer, buffer_len, "cpi  $%02x", oprom[ptr++]); break;
			case 0xff: my_snprintf(buffer, buffer_len, "rst  7"); break;
		}
		return ptr;
	}
	return CPU_DISASSEMBLE_CALL(nec_generic) & DASMFLAG_LENGTHMASK;
#else
	return CPU_DISASSEMBLE_CALL(x86_16) & DASMFLAG_LENGTHMASK;
#endif
}
#endif

#define CPU_AX				m_regs.w[AX]
#define CPU_CX				m_regs.w[CX]
#define CPU_DX				m_regs.w[DX]
#define CPU_BX				m_regs.w[BX]
#define CPU_SP				m_regs.w[SP]
#define CPU_BP				m_regs.w[BP]
#define CPU_SI				m_regs.w[SI]
#define CPU_DI				m_regs.w[DI]

#define CPU_AL				m_regs.b[AL]
#define CPU_CL				m_regs.b[CL]
#define CPU_DL				m_regs.b[DL]
#define CPU_BL				m_regs.b[BL]
#define CPU_AH				m_regs.b[AH]
#define CPU_CH				m_regs.b[CH]
#define CPU_DH				m_regs.b[DH]
#define CPU_BH				m_regs.b[BH]

#define CPU_ES				m_sregs[ES]
#define CPU_CS				m_sregs[CS]
#define CPU_SS				m_sregs[SS]
#define CPU_DS				m_sregs[DS]
#define CPU_FS				m_sregs[FS]
#define CPU_GS				m_sregs[GS]

#ifdef USE_DEBUGGER
#define CPU_PREV_CS			m_prev_cs
#endif

#define CPU_ES_BASE			m_base[ES]
#define CPU_CS_BASE			m_base[CS]
#define CPU_SS_BASE			m_base[SS]
#define CPU_DS_BASE			m_base[DS]
#define CPU_FS_BASE			m_base[FS]
#define CPU_GS_BASE			m_base[GS]

#define CPU_ES_INDEX			ES
#define CPU_CS_INDEX			CS
#define CPU_SS_INDEX			SS
#define CPU_DS_INDEX			DS
#define CPU_FS_INDEX			FS
#define CPU_GS_INDEX			GS

void CPU_LOAD_SREG(UINT8 reg, UINT16 selector)
{
#if defined(HAS_I286)
	i80286_data_descriptor(reg, selector);
#else
	m_sregs[reg] = selector;
	m_base[reg] = selector << 4;
#endif
}

#define CPU_EIP_CHANGED			(m_pc != m_prevpc)
#define CPU_EIP				(m_pc - m_base[CS])
#define CPU_PREV_EIP			(m_prevpc - (m_prev_cs << 4))

inline void CPU_SET_PC(UINT32 value)
{
	m_pc = value;
	CHANGE_PC(m_pc);
}

inline void CPU_INC_EIP(UINT32 value)
{
	m_pc = (m_pc + value) & ADDR_MASK;
	CHANGE_PC(m_pc);
}

#define CPU_GDTR_LIMIT			m_gdtr.limit
#define CPU_GDTR_BASE			m_gdtr.base
#define CPU_IDTR_LIMIT			m_idtr.limit
#define CPU_IDTR_BASE			m_idtr.base

#define CPU_MSW				m_msw

#define CPU_C_FLAG			(m_CarryVal != 0)
#define CPU_Z_FLAG			(m_ZeroVal == 0)
#define CPU_S_FLAG			(m_SignVal < 0)
#define CPU_I_FLAG			(m_IF != 0)

inline void CPU_SET_C_FLAG(INT32 value)
{
	m_CarryVal = value;
}

inline void CPU_SET_P_FLAG(UINT8 value)
{
	m_ParityVal = (value != 0) ? 0 : 1;
}

inline void CPU_SET_A_FLAG(UINT8 value)
{
	m_AuxVal = value;
}

inline void CPU_SET_Z_FLAG(INT32 value)
{
	m_ZeroVal = (value != 0) ? 0 : 1;
}

inline void CPU_SET_S_FLAG(INT32 value)
{
	m_SignVal = (value != 0) ? -1 : 0;
}

inline void CPU_SET_T_FLAG(UINT8 value)
{
	m_TF = value;
}

inline void CPU_SET_I_FLAG(INT32 value)
{
	m_IF = value;
}

inline void CPU_SET_D_FLAG(UINT8 value)
{
	m_DirVal = (value != 0) ? -1 : 0;
}

inline void CPU_SET_O_FLAG(UINT8 value)
{
	m_OverVal = value;
}


#define CPU_EFLAG			CompressFlags()
#define CPU_SET_EFLAG(x)		ExpandFlags(x)

#define CPU_ADRSMASK			AMASK

#if defined(HAS_I286)
#define CPU_A20_LINE(x)			i80286_set_a20_line(x)
#define CPU_STAT_PM			PM
#else
#define CPU_A20_LINE(x)
#define CPU_STAT_PM			0
#endif
#define CPU_STAT_VM86			0

inline void CPU_IRQ_LINE(int state)
{
	if(state) {
		set_irq_line(INPUT_LINE_IRQ, HOLD_LINE);
	} else {
		set_irq_line(INPUT_LINE_IRQ, CLEAR_LINE);
	}
}

#ifdef HAS_V30
#define CPU_INST_8080			(m_MF == 0)
#endif
#define CPU_INST_OP32			0

void CPU_INIT()
{
	CPU_INIT_CALL(CPU_MODEL);
}

void CPU_RELEASE()
{
}

void CPU_FINISH()
{
	CPU_RELEASE();
}

void CPU_RESET()
{
	CPU_RESET_CALL(CPU_MODEL);
}

void CPU_EXECUTE()
{
	CPU_EXECUTE_CALL(CPU_MODEL);
}

void CPU_SOFT_INTERRUPT(int irq)
{
	PREFIX86(_interrupt)(irq);
}

void CPU_JMP_FAR(UINT16 selector, UINT32 address)
{
#if defined(HAS_I286)
	i80286_code_descriptor(selector, address, 1);
#else
	m_sregs[CS] = selector;
	m_base[CS] = selector << 4;
	m_pc = (m_base[CS] + address) & AMASK;
#endif
}

void CPU_CALL_FAR(UINT16 selector, UINT32 address)
{
	UINT16 ip = m_pc - m_base[CS];
	UINT16 cs = m_sregs[CS];
#if defined(HAS_I286)
	i80286_code_descriptor(selector, address, 2);
#else
	m_sregs[CS] = selector;
	m_base[CS] = selector << 4;
	m_pc = (m_base[CS] + address) & AMASK;
#endif
	PUSH(cs);
	PUSH(ip);
	CHANGE_PC(m_pc);
}

void CPU_IRET()
{
	// Don't call msdos_syscall() in iret routine
	m_pc = 1;
	PREFIX86(_iret());
}

void CPU_PUSH(UINT16 value)
{
	PUSH(value);
}

UINT16 CPU_POP()
{
	UINT16 value;
	POP(value);
	return value;
}

void CPU_PUSHF()
{
	PREFIX86(_pushf());
}

UINT16 CPU_READ_STACK()
{
	UINT16 sp = m_regs.w[SP] + 2;
	return ReadWord(((m_base[SS] + ((sp - 2) & 0xffff)) & AMASK));
}

void CPU_WRITE_STACK(UINT16 value)
{
	UINT16 sp = m_regs.w[SP] + 2;
	WriteWord(((m_base[SS] + ((sp - 2) & 0xffff)) & AMASK), value);
}

UINT32 CPU_TRANS_PAGING_ADDR(UINT32 addr)
{
	return addr;
}

UINT32 CPU_TRANS_CODE_ADDR(UINT32 seg, UINT32 ofs)
{
#if defined(HAS_I286)
	if(PM) {
		UINT32 seg_base = 0;
		if(seg) {
			UINT32 base = (seg & 4) ? m_ldtr.base : m_gdtr.base;
			UINT16 desc[3];
			desc[0] = read_word((base + (seg & ~7) + 0) & AMASK);
			desc[1] = read_word((base + (seg & ~7) + 2) & AMASK);
			desc[2] = read_word((base + (seg & ~7) + 4) & AMASK);
			seg_base = (desc[1] & 0xffff) | ((desc[2] & 0xff) << 16);
		}
		return seg_base + ofs;
	}
#endif
	return (seg << 4) + ofs;
}

#ifdef USE_DEBUGGER
UINT32 CPU_GET_PREV_PC()
{
	return m_prevpc;
}

UINT32 CPU_GET_NEXT_PC()
{
	return m_pc;
}
#endif
