/*
 * Copyright (c) 2003 NONAKA Kimihiro
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

//#include "compiler.h"
#include "../cpu.h"
#include "../ia32.mcr"

#include "dec_arith.h"

// from DOSBox
#define SETFLAGBIT(FLAG, TEST) if (TEST) CPU_FLAGL |= FLAG; else CPU_FLAGL &= ~FLAG


/*
 * decimal arithmetic
 */
void
DAA(void)
{
#if defined(IA32_CPU_ENABLE_XC)
	UINT8 __s = CPU_AL;
	UINT8 __r = __s;
	UINT8 __R;
	UINT8 __f;
	XC_STORE_FLAGL();
#endif

	CPU_WORKCLOCK(3);
#if 0
	if ((CPU_FLAGL & A_FLAG) || (CPU_AL & 0x0f) > 9) {
		CPU_FLAGL |= A_FLAG;
		CPU_FLAGL |= (((UINT16)CPU_AL + 6) >> 8) & 1; /* C_FLAG */
		CPU_AL += 6;
	}
	if ((CPU_FLAGL & C_FLAG) || (CPU_AL & 0xf0) > 0x90) {
		CPU_FLAGL |= C_FLAG;
		CPU_AL += 0x60;
	}
	CPU_FLAGL &= A_FLAG | C_FLAG;
	CPU_FLAGL |= szpcflag[CPU_AL] & (S_FLAG | Z_FLAG | P_FLAG);
#else
	// from DOSBox
	if (((CPU_AL & 0x0f) > 0x09) || (CPU_FLAGL & A_FLAG)) {
		if ((CPU_AL > 0x99) || (CPU_FLAGL & C_FLAG)) {
			CPU_AL += 0x60;
			SETFLAGBIT(C_FLAG, true);
		} else {
			SETFLAGBIT(C_FLAG, false);
		}
		CPU_AL += 0x06;
		SETFLAGBIT(A_FLAG, true);
	} else {
		if ((CPU_AL > 0x99) || (CPU_FLAGL & C_FLAG)) {
			CPU_AL += 0x60;
			SETFLAGBIT(C_FLAG, true);
		} else {
			SETFLAGBIT(C_FLAG, false);
		}
		SETFLAGBIT(A_FLAG, false);
	}
	SETFLAGBIT(S_FLAG, (CPU_AL & 0x80));
	SETFLAGBIT(Z_FLAG, (CPU_AL == 0));
	SETFLAGBIT(P_FLAG, (szpcflag[CPU_AL] & P_FLAG));
#endif

#if defined(IA32_CPU_ENABLE_XC)
	__R = CPU_AL;

	__asm__ __volatile__(
		"pushf\n\t"
		"pushl %%eax\n\t"
		"movb %3, %%ah\n\t"
		"sahf\n\t"
		"movb %2, %%al\n\t"
		"daa\n\t"
		"movb %%al, %0\n\t"
		"lahf\n\t"
		"movb %%ah, %1\n\t"
		"popl %%eax\n\t"
		"popf\n\t"
		: "=m" (__r), "=m" (__f)
		: "0" (__r), "m" (__xc_flagl)
		: "eax");
	if ((__R != __r) ||
	    (((__f ^ CPU_FLAGL) & SZAPC_FLAG) != 0)) {
		ia32_warning("XC_DAA: __s = %02x", __s);
		ia32_warning("XC_DAA: __R = %02x, __r = %02x", __R, __r);
		ia32_warning("XC_DAA: CPU_FLAGL = %02x, __f = %02x, "
		    "mask = %02x", CPU_FLAGL, __f, SZAPC_FLAG);
		ia32_warning("XC_DAA: __xc_flagl = %02x", __xc_flagl);
		__ASSERT(__R == __r);
		__ASSERT(((__f ^ CPU_FLAGL) & SZAPC_FLAG) == 0);
	}
#endif
}

void
DAS(void)
{
#if defined(IA32_CPU_ENABLE_XC)
	UINT8 __s = CPU_AL;
	UINT8 __r = __s;
	UINT8 __R;
	UINT8 __f;
	XC_STORE_FLAGL();
#endif

	CPU_WORKCLOCK(3);
#if 0
	if ((CPU_FLAGL & A_FLAG) || (CPU_AL & 0x0f) > 9) {
		CPU_FLAGL |= A_FLAG;
		CPU_FLAGL |= (((UINT16)CPU_AL - 6) >> 8) & 1; /* C_FLAG */
		CPU_AL -= 6;
	}
	if ((CPU_FLAGL & C_FLAG) || CPU_AL > 0x9f) {
		CPU_FLAGL |= C_FLAG;
		CPU_AL -= 0x60;
	}
	CPU_FLAGL &= A_FLAG | C_FLAG;
	CPU_FLAGL |= szpcflag[CPU_AL] & (S_FLAG | Z_FLAG | P_FLAG);
#else
	// from DOSBox
	UINT8 osigned = CPU_AL & 0x80;
	if (((CPU_AL & 0x0f) > 9) || (CPU_FLAGL & A_FLAG)) {
		if ((CPU_AL > 0x99) || (CPU_FLAGL & C_FLAG)) {
			CPU_AL -= 0x60;
			SETFLAGBIT(C_FLAG, true);
		} else {
			SETFLAGBIT(C_FLAG, (CPU_AL <= 0x05));
		}
		CPU_AL -= 6;
		SETFLAGBIT(A_FLAG, true);
	} else {
		if ((CPU_AL > 0x99) || (CPU_FLAGL & C_FLAG)) {
			CPU_AL -= 0x60;
			SETFLAGBIT(C_FLAG, true);
		} else {
			SETFLAGBIT(C_FLAG, false);
		}
		SETFLAGBIT(A_FLAG, false);
	}
	SETFLAGBIT(O_FLAG, osigned && ((CPU_AL & 0x80) == 0));
	SETFLAGBIT(S_FLAG, (CPU_AL & 0x80));
	SETFLAGBIT(Z_FLAG, (CPU_AL == 0));
	SETFLAGBIT(P_FLAG, (szpcflag[CPU_AL] & P_FLAG));
#endif

#if defined(IA32_CPU_ENABLE_XC)
	__R = CPU_AL;

	__asm__ __volatile__(
		"pushf\n\t"
		"pushl %%eax\n\t"
		"movb %3, %%ah\n\t"
		"sahf\n\t"
		"movb %2, %%al\n\t"
		"das\n\t"
		"movb %%al, %0\n\t"
		"lahf\n\t"
		"movb %%ah, %1\n\t"
		"popl %%eax\n\t"
		"popf\n\t"
		: "=m" (__r), "=m" (__f)
		: "0" (__r), "m" (__xc_flagl)
		: "eax");
	if ((__R != __r) ||
	    (((__f ^ CPU_FLAGL) & SZAPC_FLAG) != 0)) {
		ia32_warning("XC_DAS: __s = %02x", __s);
		ia32_warning("XC_DAS: __R = %02x, __r = %02x", __R, __r);
		ia32_warning("XC_DAS: CPU_FLAGL = %02x, __f = %02x, "
		    "mask = %02x", CPU_FLAGL, __f, SZAPC_FLAG);
		ia32_warning("XC_DAS: __xc_flagl = %02x", __xc_flagl);
		__ASSERT(__R == __r);
		__ASSERT(((__f ^ CPU_FLAGL) & SZAPC_FLAG) == 0);
	}
#endif
}

void
AAA(void)
{
#if defined(IA32_CPU_ENABLE_XC)
	UINT8 __s = CPU_AL;
	UINT8 __s1 = CPU_AH;
	UINT8 __r = __s;
	UINT8 __r1;
	UINT8 __R;
	UINT8 __R1;
	UINT8 __f;
	XC_STORE_FLAGL();
#endif

	CPU_WORKCLOCK(3);
#if 0
	if ((CPU_FLAGL & A_FLAG) || (CPU_AL & 0x0f) > 9) {
		CPU_AL += 6;
		CPU_AH++;
		CPU_FLAGL |= (A_FLAG | C_FLAG);
	} else {
		CPU_FLAGL &= ~(A_FLAG | C_FLAG);
	}
	CPU_AL &= 0x0f;
#else
	// from DOSBox
	SETFLAGBIT(S_FLAG, ((CPU_AL >= 0x7a) && (CPU_AL <= 0xf9)));
	if ((CPU_AL & 0xf) > 9) {
		SETFLAGBIT(O_FLAG, (CPU_AL & 0xf0) == 0x70);
		CPU_AX += 0x106;
		SETFLAGBIT(C_FLAG, true);
		SETFLAGBIT(Z_FLAG, (CPU_AL == 0));
		SETFLAGBIT(A_FLAG, true);
	} else if (CPU_FLAGL & A_FLAG) {
		CPU_AX += 0x106;
		SETFLAGBIT(O_FLAG, false);
		SETFLAGBIT(C_FLAG, true);
		SETFLAGBIT(Z_FLAG, false);
		SETFLAGBIT(A_FLAG, true);
	} else {
		SETFLAGBIT(O_FLAG, false);
		SETFLAGBIT(C_FLAG, false);
		SETFLAGBIT(Z_FLAG, (CPU_AL == 0));
		SETFLAGBIT(A_FLAG, false);
	}
	SETFLAGBIT(P_FLAG, (szpcflag[CPU_AL] & P_FLAG));
	CPU_AL &= 0x0f;
#endif

#if defined(IA32_CPU_ENABLE_XC)
	__R = CPU_AL;
	__R1 = CPU_AH;

	__asm__ __volatile__(
		"pushf\n\t"
		"pushl %%eax\n\t"
		"movb %4, %%ah\n\t"
		"sahf\n\t"
		"movb %3, %%al\n\t"
		"aaa\n\t"
		"movb %%al, %0\n\t"
		"movb %%ah, %1\n\t"
		"lahf\n\t"
		"movb %%ah, %2\n\t"
		"popl %%eax\n\t"
		"popf\n\t"
		: "=m" (__r), "=m" (__r1), "=m" (__f)
		: "0" (__r), "m" (__xc_flagl)
		: "eax");
	if ((__R != __r) ||
	    (__R1 != __r1) ||
	    (((__f ^ CPU_FLAGL) & (A_FLAG|C_FLAG)) != 0)) {
		ia32_warning("XC_AAA: __s = %02x, __s1 = %02x", __s, __s1);
		ia32_warning("XC_AAA: __R = %02x, __R1 = %02x", __R, __R1);
		ia32_warning("XC_AAA: __r = %02x, __r1 = %02x", __r, __r1);
		ia32_warning("XC_AAA: CPU_FLAGL = %02x, __f = %02x, "
		    "mask = %02x", CPU_FLAGL, __f, (A_FLAG|C_FLAG));
		ia32_warning("XC_AAA: __xc_flagl = %02x", __xc_flagl);
		__ASSERT(__R == __r);
		__ASSERT(__R1 == __r1);
		__ASSERT(((__f ^ CPU_FLAGL) & (A_FLAG|C_FLAG)) == 0);
	}
#endif
}

void
AAS(void)
{
#if defined(IA32_CPU_ENABLE_XC)
	UINT8 __s = CPU_AL;
	UINT8 __s1 = CPU_AH;
	UINT8 __r = __s;
	UINT8 __r1;
	UINT8 __R;
	UINT8 __R1;
	UINT8 __f;
	XC_STORE_FLAGL();
#endif

	CPU_WORKCLOCK(3);
#if 0
	if ((CPU_FLAGL & A_FLAG) || (CPU_AL & 0x0f) > 9) {
		CPU_AL -= 6;
		CPU_AH--;
		CPU_FLAGL |= (A_FLAG | C_FLAG);
	} else {
		CPU_FLAGL &= ~(A_FLAG | C_FLAG);
	}
	CPU_AL &= 0x0f;
#else
	// from DOSBox
	if ((CPU_AL & 0x0f) > 9) {
		SETFLAGBIT(S_FLAG, (CPU_AL > 0x85));
		CPU_AX -= 0x106;
		SETFLAGBIT(O_FLAG, false);
		SETFLAGBIT(C_FLAG, true);
		SETFLAGBIT(A_FLAG, true);
	} else if (CPU_FLAGL & A_FLAG) {
		SETFLAGBIT(O_FLAG, ((CPU_AL >= 0x80) && (CPU_AL <= 0x85)));
		SETFLAGBIT(S_FLAG, (CPU_AL < 0x06) || (CPU_AL > 0x85));
		CPU_AX -= 0x106;
		SETFLAGBIT(C_FLAG, true);
		SETFLAGBIT(A_FLAG, true);
	} else {
		SETFLAGBIT(S_FLAG, (CPU_AL >= 0x80));
		SETFLAGBIT(O_FLAG, false);
		SETFLAGBIT(C_FLAG, false);
		SETFLAGBIT(A_FLAG ,false);
	}
	SETFLAGBIT(Z_FLAG, (CPU_AL == 0));
	SETFLAGBIT(P_FLAG, (szpcflag[CPU_AL] & P_FLAG));
	CPU_AL &= 0x0f;
#endif

#if defined(IA32_CPU_ENABLE_XC)
	__R = CPU_AL;
	__R1 = CPU_AH;

	__asm__ __volatile__(
		"pushf\n\t"
		"pushl %%eax\n\t"
		"movb %4, %%ah\n\t"
		"sahf\n\t"
		"movb %3, %%al\n\t"
		"aas\n\t"
		"movb %%al, %0\n\t"
		"movb %%ah, %1\n\t"
		"lahf\n\t"
		"movb %%ah, %2\n\t"
		"popl %%eax\n\t"
		"popf\n\t"
		: "=m" (__r), "=m" (__r1), "=m" (__f)
		: "0" (__r), "m" (__xc_flagl)
		: "eax");
	if ((__R != __r) ||
	    (__R1 != __r1) ||
	    (((__f ^ CPU_FLAGL) & (A_FLAG|C_FLAG)) != 0)) {
		ia32_warning("XC_AAS: __s = %02x, __s1 = %02x", __s, __s1);
		ia32_warning("XC_AAS: __R = %02x, __R1 = %02x", __R, __R1);
		ia32_warning("XC_AAS: __r = %02x, __r1 = %02x", __r, __r1);
		ia32_warning("XC_AAS: CPU_FLAGL = %02x, __f = %02x, "
		    "mask = %02x", CPU_FLAGL, __f, (A_FLAG|C_FLAG));
		ia32_warning("XC_AAS: __xc_flagl = %02x", __xc_flagl);
		__ASSERT(__R == __r);
		__ASSERT(__R1 == __r1);
		__ASSERT(((__f ^ CPU_FLAGL) & (A_FLAG|C_FLAG)) == 0);
	}
#endif
}

void
AAM(void)
{
	UINT8 base;
//	UINT8 al;

	CPU_WORKCLOCK(16);
	GET_MODRM_PCBYTE(base);
	if (base != 0) {
#if 0
		al = CPU_AL;
		CPU_AH = al / base;
		CPU_AL = al % base;
		CPU_FLAGL = szpcflag[CPU_AL];
#else
		// from DOSBox
		CPU_AH = CPU_AL / base;
		CPU_AL = CPU_AL % base;
		SETFLAGBIT(S_FLAG, (CPU_AL & 0x80));
		SETFLAGBIT(Z_FLAG, (CPU_AL == 0));
		SETFLAGBIT(P_FLAG, (szpcflag[CPU_AL] & P_FLAG));
		SETFLAGBIT(C_FLAG, false);
		SETFLAGBIT(O_FLAG, false);
		SETFLAGBIT(A_FLAG, false);
#endif
		return;
	}
	EXCEPTION(DE_EXCEPTION, 0);
}

void
AAD(void)
{
	UINT32 base;

	CPU_WORKCLOCK(14);
	GET_MODRM_PCBYTE(base);
#if 0
	CPU_AL += (UINT8)(CPU_AH * base);
	CPU_AH = 0;
	CPU_FLAGL &= ~(S_FLAG | Z_FLAG | P_FLAG);
	CPU_FLAGL |= szpcflag[CPU_AL];
#else
	// from DOSBox
	UINT16 ax1 = CPU_AH * base;
	UINT16 ax2 = ax1 + CPU_AL;
	CPU_AL = (UINT8) ax2;
	CPU_AH = 0;
	SETFLAGBIT(C_FLAG, false);
	SETFLAGBIT(O_FLAG, false);
	SETFLAGBIT(A_FLAG, false);
	SETFLAGBIT(S_FLAG, CPU_AL >= 0x80);
	SETFLAGBIT(Z_FLAG, CPU_AL == 0);
	SETFLAGBIT(P_FLAG, (szpcflag[CPU_AL] & P_FLAG));
#endif
}
