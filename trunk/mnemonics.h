/*
mnemonics.h

Copyright (C) 2003-2009 Gil Dabah, http://ragestorm.net/distorm/
This file is licensed under the GPL license. See the file COPYING.
*/


#ifndef MNEMONICS_H
#define MNEMONICS_H

#ifdef __cplusplus
 extern "C" {
#endif

typedef struct WMnemonic {
	unsigned int length;
	unsigned char p[17]; /* p is a null terminated string. */
} _WMnemonic;

typedef struct WRegister {
	unsigned int length;
	unsigned char p[6]; /* p is a null terminated string. */
} _WRegister;

extern const _WMnemonic _MNEMONICS[];
extern const _WRegister _REGISTERS[];

#ifdef __cplusplus
} /* End Of Extern */
#endif

#define GET_REGISTER_NAME(r) (unsigned char*)_REGISTERS[(x)].p
#define GET_MNEMONIC_NAME(m) (unsigned char*)_MNEMONICS[(m)].p

typedef enum {
	I_UNDEFINED,
	I_ADD, I_PUSH, I_POP, I_OR, I_ADC, I_SBB, I_AND, I_DAA, I_SUB, I_DAS, I_XOR, I_AAA,
	I_CMP, I_AAS, I_INC, I_DEC, I_PUSHA, I_POPA, I_BOUND, I_ARPL, I_IMUL, I_INS, I_OUTS,
	I_JO, I_JNO, I_JB, I_JAE, I_JZ, I_JNZ, I_JBE, I_JA, I_JS, I_JNS, I_JP, I_JNP, I_JL,
	I_JGE, I_JLE, I_JG, I_TEST, I_XCHG, I_MOV, I_LEA, I_CBW, I_CWDE, I_CDQE, I_CWD, I_CDQ,
	I_CQO, I_CALL_FAR, I_PUSHF, I_POPF, I_SAHF, I_LAHF, I_MOVS, I_CMPS, I_STOS, I_LODS,
	I_SCAS, I_RET, I_LES, I_LDS, I_ENTER, I_LEAVE, I_RETF, I_INT_3, I_INT, I_INTO, I_IRET,
	I_AAM, I_AAD, I_SALC, I_XLAT, I_LOOPNZ, I_LOOPZ, I_LOOP, I_JCXZ, I_JECXZ, I_JRCXZ,
	I_IN, I_OUT, I_CALL, I_JMP, I_JMP_FAR, I_INT1, I_HLT, I_CMC, I_CLC, I_STC, I_CLI,
	I_STI, I_CLD, I_STD, I_LAR, I_LSL, I_SYSCALL, I_CLTS, I_SYSRET, I_INVD, I_WBINVD,
	I_UD2, I_FEMMS, I_NOP, I_WRMSR, I_RDTSC, I_RDMSR, I_RDPMC, I_SYSENTER, I_SYSEXIT,
	I_GETSEC, I_CMOVO, I_CMOVNO, I_CMOVB, I_CMOVAE, I_CMOVZ, I_CMOVNZ, I_CMOVBE, I_CMOVA,
	I_CMOVS, I_CMOVNS, I_CMOVP, I_CMOVNP, I_CMOVL, I_CMOVGE, I_CMOVLE, I_CMOVG, I_SETO,
	I_SETNO, I_SETB, I_SETAE, I_SETZ, I_SETNZ, I_SETBE, I_SETA, I_SETS, I_SETNS, I_SETP,
	I_SETNP, I_SETL, I_SETGE, I_SETLE, I_SETG, I_CPUID, I_BT, I_SHLD, I_RSM, I_BTS,
	I_SHRD, I_CMPXCHG, I_LSS, I_BTR, I_LFS, I_LGS, I_MOVZX, I_BTC, I_BSF, I_MOVSX, I_XADD,
	I_MOVNTI, I_BSWAP, I_SLDT, I_STR, I_LLDT, I_LTR, I_VERR, I_VERW, I_SGDT, I_SIDT,
	I_LGDT, I_LIDT, I_SMSW, I_LMSW, I_INVLPG, I_VMCALL, I_VMLAUNCH, I_VMRESUME, I_VMXOFF,
	I_MONITOR, I_MWAIT, I_XGETBV, I_XSETBV, I_VMRUN, I_VMMCALL, I_VMLOAD, I_VMSAVE,
	I_STGI, I_CLGI, I_SKINIT, I_INVLPGA, I_SWAPGS, I_RDTSCP, I_PREFETCH, I_PREFETCHW,
	I_PI2FW, I_PI2FD, I_PF2IW, I_PF2ID, I_PFNACC, I_PFPNACC, I_PFCMPGE, I_PFMIN, I_PFRCP,
	I_PFRSQRT, I_PFSUB, I_PFADD, I_PFCMPGT, I_PFMAX, I_PFRCPIT1, I_PFRSQIT1, I_PFSUBR,
	I_PFACC, I_PFCMPEQ, I_PFMUL, I_PFRCPIT2, I_PMULHRW, I_PSWAPD, I_PAVGUSB, I_MOVUPS,
	I_MOVUPD, I_MOVSS, I_MOVSD, I_VMOVSS, I_VMOVSD, I_VMOVUPS, I_VMOVUPD, I_MOVHLPS,
	I_MOVLPS, I_MOVLPD, I_MOVSLDUP, I_MOVDDUP, I_VMOVHLPS, I_VMOVLPS, I_VMOVLPD,
	I_VMOVSLDUP, I_VMOVDDUP, I_UNPCKLPS, I_UNPCKLPD, I_VUNPCKLPS, I_VUNPCKLPD, I_UNPCKHPS,
	I_UNPCKHPD, I_VUNPCKHPS, I_VUNPCKHPD, I_MOVLHPS, I_MOVHPS, I_MOVHPD, I_MOVSHDUP,
	I_VMOVLHPS, I_VMOVHPS, I_VMOVHPD, I_VMOVSHDUP, I_PREFETCHNTA, I_PREFETCHT0,
	I_PREFETCHT1, I_PREFETCHT2, I_MOVAPS, I_MOVAPD, I_VMOVAPS, I_VMOVAPD, I_CVTPI2PS,
	I_CVTPI2PD, I_CVTSI2SS, I_CVTSI2SD, I_VCVTSI2SS, I_VCVTSI2SD, I_MOVNTPS, I_MOVNTPD,
	I_MOVNTSS, I_MOVNTSD, I_VMOVNTPS, I_VMOVNTPD, I_CVTTPS2PI, I_CVTTPD2PI, I_CVTTSS2SI,
	I_CVTTSD2SI, I_VCVTTSS2SI, I_VCVTTSD2SI, I_CVTPS2PI, I_CVTPD2PI, I_CVTSS2SI,
	I_CVTSD2SI, I_VCVTSS2SI, I_VCVTSD2SI, I_UCOMISS, I_UCOMISD, I_VUCOMISS, I_VUCOMISD,
	I_COMISS, I_COMISD, I_VCOMISS, I_VCOMISD, I_PSHUFB, I_VPSHUFB, I_PHADDW, I_VPHADDW,
	I_PHADDD, I_VPHADDD, I_PHADDSW, I_VPHADDSW, I_PMADDUBSW, I_VPMADDUBSW, I_PHSUBW,
	I_VPHSUBW, I_PHSUBD, I_VPHSUBD, I_PHSUBSW, I_VPHSUBSW, I_PSIGNB, I_VPSIGNB, I_PSIGNW,
	I_VPSIGNW, I_PSIGND, I_VPSIGND, I_PMULHRSW, I_VPMULHRSW, I_VPERMILPS, I_VPERMILPD,
	I_VPTESTPS, I_VPTESTPD, I_PBLENDVB, I_BLENDVPS, I_BLENDVPD, I_PTEST, I_VPTEST,
	I_VBROADCASTSS, I_VBROADCASTSD, I_VBROADCASTF128, I_PABSB, I_VPABSB, I_PABSW,
	I_VPABSW, I_PABSD, I_VPABSD, I_PMOVSXBW, I_VPMOVSXBW, I_PMOVSXBD, I_VPMOVSXBD,
	I_PMOVSXBQ, I_VPMOVSXBQ, I_PMOVSXWD, I_VPMOVSXWD, I_PMOVSXWQ, I_VPMOVSXWQ, I_PMOVSXDQ,
	I_VPMOVSXDQ, I_PMULDQ, I_VPMULDQ, I_PCMPEQQ, I_VPCMPEQQ, I_MOVNTDQA, I_VMOVNTDQA,
	I_PACKUSDW, I_VPACKUSDW, I_VMASKMOVPS, I_VMASKMOVPD, I_PMOVZXBW, I_VPMOVZXBW,
	I_PMOVZXBD, I_VPMOVZXBD, I_PMOVZXBQ, I_VPMOVZXBQ, I_PMOVZXWD, I_VPMOVZXWD, I_PMOVZXWQ,
	I_VPMOVZXWQ, I_PMOVZXDQ, I_VPMOVZXDQ, I_PCMPGTQ, I_VPCMPGTQ, I_PMINSB, I_VPMINSB,
	I_PMINSD, I_VPMINSD, I_PMINUW, I_VPMINUW, I_PMINUD, I_VPMINUD, I_PMAXSB, I_VPMAXSB,
	I_PMAXSD, I_VPMAXSD, I_PMAXUW, I_VPMAXUW, I_PMAXUD, I_VPMAXUD, I_PMULLD, I_VPMULLD,
	I_PHMINPOSUW, I_VPHMINPOSUW, I_INVEPT, I_INVVPID, I_VFMADDSUB132PS, I_VFMADDSUB132PD,
	I_VFMSUBADD132PS, I_VFMSUBADD132PD, I_VFMADD132PS, I_VFMADD132PD, I_VFMADD132SS,
	I_VFMADD132SD, I_VFMSUB132PS, I_VFMSUB132PD, I_VFMSUB132SS, I_VFMSUB132SD,
	I_VFNMADD132PS, I_VFNMADD132PD, I_VFNMADD132SS, I_VFNMADD132SD, I_VFNMSUB132PS,
	I_VFNMSUB132PD, I_VFNMSUB132SS, I_VFNMSUB132SD, I_VFMADDSUB213PS, I_VFMADDSUB213PD,
	I_VFMSUBADD213PS, I_VFMSUBADD213PD, I_VFMADD213PS, I_VFMADD213PD, I_VFMADD213SS,
	I_VFMADD213SD, I_VFMSUB213PS, I_VFMSUB213PD, I_VFMSUB213SS, I_VFMSUB213SD,
	I_VFNMADD213PS, I_VFNMADD213PD, I_VFNMADD213SS, I_VFNMADD213SD, I_VFNMSUB213PS,
	I_VFNMSUB213PD, I_VFNMSUB213SS, I_VFNMSUB213SD, I_VFMADDSUB231PS, I_VFMADDSUB231PD,
	I_VFMSUBADD231PS, I_VFMSUBADD231PD, I_VFMADD231PS, I_VFMADD231PD, I_VFMADD231SS,
	I_VFMADD231SD, I_VFMSUB231PS, I_VFMSUB231PD, I_VFMSUB231SS, I_VFMSUB231SD,
	I_VFNMADD231PS, I_VFNMADD231PD, I_VFNMADD231SS, I_VFNMADD231SD, I_VFNMSUB231PS,
	I_VFNMSUB231PD, I_VFNMSUB231SS, I_VFNMSUB231SD, I_AESIMC, I_VAESIMC, I_AESENC,
	I_VAESENC, I_AESENCLAST, I_VAESENCLAST, I_AESDEC, I_VAESDEC, I_AESDECLAST, I_VAESDECLAST,
	I_MOVBE, I_CRC32, I_VPERM2F128, I_ROUNDPS, I_VROUNDPS, I_ROUNDPD, I_VROUNDPD,
	I_ROUNDSS, I_VROUNDSS, I_ROUNDSD, I_VROUNDSD, I_BLENDPS, I_VBLENDPS, I_BLENDPD,
	I_VBLENDPD, I_PBLENDW, I_VPBLENDVW, I_PALIGNR, I_VPALIGNR, I_PEXTRB, I_VPEXTRB,
	I_PEXTRW, I_VPEXTRW, I_PEXTRD, I_PEXTRQ, I_VPEXTRD, I_EXTRACTPS, I_VEXTRACTPS,
	I_VINSERTF128, I_VEXTRACTF128, I_PINSRB, I_VPINSRB, I_INSERTPS, I_VINSERTPS,
	I_PINSRD, I_PINSRQ, I_VPINSRD, I_VPINSRQ, I_DPPS, I_VDPPS, I_DPPD, I_VDPPD, I_MPSADBW,
	I_VMPSADBW, I_PCLMULQDQ, I_VPCLMULQDQ, I_VBLENDVPS, I_VBLENDVPD, I_VPBLENDVB,
	I_PCMPESTRM, I_VPCMPESTRM, I_PCMPESTRI, I_VCMPESTRI, I_PCMPISTRM, I_VPCMPISTRM,
	I_PCMPISTRI, I_VPCMPISTRI, I_AESKEYGENASSIST, I_VAESKEYGENASSIST, I_MOVMSKPS,
	I_MOVMSKPD, I_VMOVMSKPS, I_VMOVMSKPD, I_SQRTPS, I_SQRTPD, I_SQRTSS, I_SQRTSD,
	I_VSQRTSS, I_VSQRTSD, I_VSQRTPS, I_VSQRTPD, I_RSQRTPS, I_RSQRTSS, I_VRSQRTSS,
	I_VRSQRTPS, I_RCPPS, I_RCPSS, I_VRCPSS, I_VRCPPS, I_ANDPS, I_ANDPD, I_VANDPS,
	I_VANDPD, I_ANDNPS, I_ANDNPD, I_VANDNPS, I_VANDNPD, I_ORPS, I_ORPD, I_VORPS, I_VORPD,
	I_XORPS, I_XORPD, I_VXORPS, I_VXORPD, I_ADDPS, I_ADDPD, I_ADDSS, I_ADDSD, I_VADDPS,
	I_VADDPD, I_VADDSS, I_VADDSD, I_MULPS, I_MULPD, I_MULSS, I_MULSD, I_VMULPS, I_VMULPD,
	I_VMULSS, I_VMULSD, I_CVTPS2PD, I_CVTPD2PS, I_CVTSS2SD, I_CVTSD2SS, I_VCVTSS2SD,
	I_VCVTSD2SS, I_VCVTPS2PD, I_VCVTPD2PS, I_CVTDQ2PS, I_CVTPS2DQ, I_CVTTPS2DQ,
	I_VCVTDQ2PS, I_VCVTPS2DQ, I_VCVTTPS2DQ, I_SUBPS, I_SUBPD, I_SUBSS, I_SUBSD, I_VSUBPS,
	I_VSUBPD, I_VSUBSS, I_VSUBSD, I_MINPS, I_MINPD, I_MINSS, I_MINSD, I_VMINPS, I_VMINPD,
	I_VMINSS, I_VMINSD, I_DIVPS, I_DIVPD, I_DIVSS, I_DIVSD, I_VDIVPS, I_VDIVPD, I_VDIVSS,
	I_VDIVSD, I_MAXPS, I_MAXPD, I_MAXSS, I_MAXSD, I_VMAXPS, I_VMAXPD, I_VMAXSS, I_VMAXSD,
	I_PUNPCKLBW, I_VPUNPCKLBW, I_PUNPCKLWD, I_VPUNPCKLWD, I_PUNPCKLDQ, I_VPUNPCKLDQ,
	I_PACKSSWB, I_VPACKSSWB, I_PCMPGTB, I_VPCMPGTB, I_PCMPGTW, I_VPCMPGTW, I_PCMPGTD,
	I_VPCMPGTD, I_PACKUSWB, I_VPACKUSWB, I_PUNPCKHBW, I_VPUNPCKHBW, I_PUNPCKHWD,
	I_VPUNPCKHWD, I_PUNPCKHDQ, I_VPUNPCKHDQ, I_PACKSSDW, I_VPACKSSDW, I_PUNPCKLQDQ,
	I_VPUNPCKLQDQ, I_PUNPCKHQDQ, I_VPUNPCKHQDQ, I_MOVD, I_MOVQ, I_VMOVD, I_VMOVQ,
	I_MOVDQA, I_MOVDQU, I_VMOVDQA, I_VMOVDQU, I_PSHUFW, I_PSHUFD, I_PSHUFHW, I_PSHUFLW,
	I_VPSHUFD, I_VPSHUFHW, I_VPSHUFLW, I_PSRLW, I_VPSRLW, I_PSRAW, I_VPSRAW, I_PSLLW,
	I_VPSLLW, I_PSRLD, I_VPSRLD, I_PSRAD, I_VPSRAD, I_PSLLD, I_VPSLLD, I_PSRLQ, I_VPSRLQ,
	I_PSRLDQ, I_VPSRLDQ, I_PSLLQ, I_VPSLLQ, I_PSLLDQ, I_VPSLLDQ, I_PCMPEQB, I_VPCMPEQB,
	I_PCMPEQW, I_VPCMPEQW, I_PCMPEQD, I_VPCMPEQD, I_EMMS, I_VZEROUPPER, I_VZEROALL,
	I_VMREAD, I_EXTRQ, I_INSERTQ, I_VMWRITE, I_HADDPD, I_HADDPS, I_VHADDPD, I_VHADDPS,
	I_HSUBPD, I_HSUBPS, I_VHSUBPD, I_VHSUBPS, I_FXSAVE, I_FXRSTOR, I_XAVE, I_LFENCE,
	I_XRSTOR, I_MFENCE, I_SFENCE, I_CLFLUSH, I_LDMXCSR, I_VLDMXCSR, I_STMXCSR, I_VSTMXCSR,
	I_POPCNT, I_BSR, I_LZCNT, I_CMPEQPS, I_CMPLTPS, I_CMPLEPS, I_CMPUNORDPS, I_CMPNEQPS,
	I_CMPNLTPS, I_CMPNLEPS, I_CMPORDPS, I_CMPEQPD, I_CMPLTPD, I_CMPLEPD, I_CMPUNORDPD,
	I_CMPNEQPD, I_CMPNLTPD, I_CMPNLEPD, I_CMPORDPD, I_CMPEQSS, I_CMPLTSS, I_CMPLESS,
	I_CMPUNORDSS, I_CMPNEQSS, I_CMPNLTSS, I_CMPNLESS, I_CMPORDSS, I_CMPEQSD, I_CMPLTSD,
	I_CMPLESD, I_CMPUNORDSD, I_CMPNEQSD, I_CMPNLTSD, I_CMPNLESD, I_CMPORDSD, I_VCMPEQPS,
	I_VCMPLTPS, I_VCMPLEPS, I_VCMPUNORDPS, I_VCMPNEQPS, I_VCMPNLTPS, I_VCMPNLEPS,
	I_VCMPORDPS, I_VCMPEQPD, I_VCMPLTPD, I_VCMPLEPD, I_VCMPUNORDPD, I_VCMPNEQPD,
	I_VCMPNLTPD, I_VCMPNLEPD, I_VCMPORDPD, I_VCMPEQSS, I_VCMPLTSS, I_VCMPLESS, I_VCMPUNORDSS,
	I_VCMPNEQSS, I_VCMPNLTSS, I_VCMPNLESS, I_VCMPORDSS, I_VCMPEQSD, I_VCMPLTSD,
	I_VCMPLESD, I_VCMPUNORDSD, I_VCMPNEQSD, I_VCMPNLTSD, I_VCMPNLESD, I_VCMPORDSD,
	I_PINSRW, I_VPINSRW, I_SHUFPS, I_SHUFPD, I_VSHUFPS, I_VSHUFPD, I_CMPXCHG8B, I_CMPXCHG16B,
	I_VMPTRST, I_VMPTRLD, I_VMCLEAR, I_VMXON, I_ADDSUBPD, I_ADDSUBPS, I_VADDSUBPD,
	I_VADDSUBPS, I_PADDQ, I_VPADDQ, I_PMULLW, I_VPMULLW, I_MOVQ2DQ, I_MOVDQ2Q, I_PMOVMSKB,
	I_VPMOVMSKB, I_PSUBUSB, I_VPSUBUSB, I_PSUBUSW, I_VPSUBUSW, I_PMINUB, I_VPMINUB,
	I_PAND, I_VPAND, I_PADDUSB, I_VPADDUSW, I_PADDUSW, I_PMAXUB, I_VPMAXUB, I_PANDN,
	I_VPANDN, I_PAVGB, I_VPAVGB, I_PAVGW, I_VPAVGW, I_PMULHUW, I_VPMULHUW, I_PMULHW,
	I_VPMULHW, I_CVTTPD2DQ, I_CVTDQ2PD, I_CVTPD2DQ, I_VCVTTPD2DQ, I_VCVTDQ2PD, I_VCVTPD2DQ,
	I_MOVNTQ, I_MOVNTDQ, I_VMOVNTDQ, I_PSUBSB, I_VPSUBSB, I_PSUBSW, I_VPSUBSW, I_PMINSW,
	I_VPMINSW, I_POR, I_VPOR, I_PADDSB, I_VPADDSB, I_PADDSW, I_VPADDSW, I_PMAXSW,
	I_VPMAXSW, I_PXOR, I_VPXOR, I_LDDQU, I_VLDDQU, I_PMULUDQ, I_VPMULUDQ, I_PMADDWD,
	I_VPMADDWD, I_PSADBW, I_VPSADBW, I_MASKMOVQ, I_MASKMOVDQU, I_VMASKMOVDQU, I_PSUBB,
	I_VPSUBB, I_PSUBW, I_VPSUBW, I_PSUBD, I_VPSUBD, I_PSUBQ, I_VPSUBQ, I_PADDB, I_VPADDB,
	I_PADDW, I_VPADDW, I_PADDD, I_VPADDD, I_ROL, I_ROR, I_RCL, I_RCR, I_SHL, I_SHR,
	I_SAL, I_SAR, I_FADD, I_FMUL, I_FCOM, I_FCOMP, I_FSUB, I_FSUBR, I_FDIV, I_FDIVR,
	I_FLD, I_FST, I_FSTP, I_FLDENV, I_FLDCW, I_FXCH, I_FNOP, I_FCHS, I_FABS, I_FTST,
	I_FXAM, I_FLD1, I_FLDL2T, I_FLDL2E, I_FLDPI, I_FLDLG2, I_FLDLN2, I_FLDZ, I_F2XM1,
	I_FYL2X, I_FPTAN, I_FPATAN, I_FXTRACT, I_FPREM1, I_FDECSTP, I_FINCSTP, I_FPREM,
	I_FYL2XP1, I_FSQRT, I_FSINCOS, I_FRNDINT, I_FSCALE, I_FSIN, I_FCOS, I_FNSTENV,
	I_FSTENV, I_FNSTCW, I_FSTCW, I_FIADD, I_FIMUL, I_FICOM, I_FICOMP, I_FISUB, I_FISUBR,
	I_FIDIV, I_FIDIVR, I_FCMOVB, I_FCMOVE, I_FCMOVBE, I_FCMOVU, I_FUCOMPP, I_FILD,
	I_FISTTP, I_FIST, I_FISTP, I_FCMOVNB, I_FCMOVNE, I_FCMOVNBE, I_FCMOVNU, I_FENI,
	I_FEDISI, I_FSETPM, I_FUCOMI, I_FCOMI, I_FNCLEX, I_FCLEX, I_FNINIT, I_FINIT, I_FRSTOR,
	I_FFREE, I_FUCOM, I_FUCOMP, I_FNSAVE, I_FSAVE, I_FNSTSW, I_FSTSW, I_FADDP, I_FMULP,
	I_FCOMPP, I_FSUBRP, I_FSUBP, I_FDIVRP, I_FDIVP, I_FBLD, I_FBSTP, I_FUCOMIP, I_FCOMIP,
	I_NOT, I_NEG, I_MUL, I_DIV, I_IDIV, I_WAIT, I_MOVSXD, I_PAUSE
} _InstructionType;

typedef enum {
	R_RAX, R_RCX, R_RDX, R_RBX, R_RSP, R_RBP, R_RSI, R_RDI, R_R8, R_R9, R_R10, R_R11, R_R12, R_R13, R_R14, R_R15,
	R_EAX, R_ECX, R_EDX, R_EBX, R_ESP, R_EBP, R_ESI, R_EDI, R_R8D, R_R9D, R_R10D, R_R11D, R_R12D, R_R13D, R_R14D, R_R15D,
	R_AX, R_CX, R_DX, R_BX, R_SP, R_BP, R_SI, R_DI, R_R8W, R_R9W, R_R10W, R_R11W, R_R12W, R_R13W, R_R14W, R_R15W,
	R_AL, R_CL, R_DL, R_BL, R_AH, R_CH, R_DH, R_BH, R_R8B, R_R9B, R_R10B, R_R11B, R_R12B, R_R13B, R_R14B, R_R15B,
	R_SPL, R_BPL, R_SIL, R_DIL,
	R_ES, R_CS, R_SS, R_DS, R_FS, R_GS,
	R_RIP,
	R_ST0, R_ST1, R_ST2, R_ST3, R_ST4, R_ST5, R_ST6, R_ST7,
	R_MM0, R_MM1, R_MM2, R_MM3, R_MM4, R_MM5, R_MM6, R_MM7,
	R_XMM0, R_XMM1, R_XMM2, R_XMM3, R_XMM4, R_XMM5, R_XMM6, R_XMM7, R_XMM8, R_XMM9, R_XMM10, R_XMM11, R_XMM12, R_XMM13, R_XMM14, R_XMM15,
	R_YMM0, R_YMM1, R_YMM2, R_YMM3, R_YMM4, R_YMM5, R_YMM6, R_YMM7, R_YMM8, R_YMM9, R_YMM10, R_YMM11, R_YMM12, R_YMM13, R_YMM14, R_YMM15,
	R_CR0, R_UNUSED0, R_CR2, R_CR3, R_CR4, R_UNUSED1, R_UNUSED2, R_UNUSED3, R_CR8,
	R_DR0, R_DR1, R_DR2, R_DR3, R_UNUSED4, R_UNUSED5, R_DR6, R_DR7
} _RegisterType;

#endif /* MNEMONICS_H */
