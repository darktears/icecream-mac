/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace X86 {
enum {
  Feature3DNow = 0,
  Feature3DNowA = 1,
  Feature64Bit = 2,
  FeatureADX = 3,
  FeatureAES = 4,
  FeatureAVX = 5,
  FeatureAVX2 = 6,
  FeatureAVX512 = 7,
  FeatureBMI = 8,
  FeatureBMI2 = 9,
  FeatureBWI = 10,
  FeatureCDI = 11,
  FeatureCLFLUSHOPT = 12,
  FeatureCLWB = 13,
  FeatureCLZERO = 14,
  FeatureCMOV = 15,
  FeatureCMPXCHG16B = 16,
  FeatureCallRegIndirect = 17,
  FeatureDQI = 18,
  FeatureERI = 19,
  FeatureERMSB = 20,
  FeatureF16C = 21,
  FeatureFMA = 22,
  FeatureFMA4 = 23,
  FeatureFSGSBase = 24,
  FeatureFXSR = 25,
  FeatureFastLZCNT = 26,
  FeatureFastPartialYMMorZMMWrite = 27,
  FeatureFastSHLDRotate = 28,
  FeatureFastScalarFSQRT = 29,
  FeatureFastVectorFSQRT = 30,
  FeatureIFMA = 31,
  FeatureLAHFSAHF = 32,
  FeatureLEAForSP = 33,
  FeatureLEAUsesAG = 34,
  FeatureLWP = 35,
  FeatureLZCNT = 36,
  FeatureMMX = 37,
  FeatureMOVBE = 38,
  FeatureMPX = 39,
  FeatureMWAITX = 40,
  FeaturePCLMUL = 41,
  FeaturePFI = 42,
  FeaturePKU = 43,
  FeaturePOPCNT = 44,
  FeaturePREFETCHWT1 = 45,
  FeaturePRFCHW = 46,
  FeaturePadShortFunctions = 47,
  FeatureRDRAND = 48,
  FeatureRDSEED = 49,
  FeatureRTM = 50,
  FeatureSGX = 51,
  FeatureSHA = 52,
  FeatureSSE1 = 53,
  FeatureSSE2 = 54,
  FeatureSSE3 = 55,
  FeatureSSE4A = 56,
  FeatureSSE41 = 57,
  FeatureSSE42 = 58,
  FeatureSSEUnalignedMem = 59,
  FeatureSSSE3 = 60,
  FeatureSlow3OpsLEA = 61,
  FeatureSlowBTMem = 62,
  FeatureSlowDivide32 = 63,
  FeatureSlowDivide64 = 64,
  FeatureSlowIncDec = 65,
  FeatureSlowLEA = 66,
  FeatureSlowPMULLD = 67,
  FeatureSlowSHLD = 68,
  FeatureSlowUAMem16 = 69,
  FeatureSlowUAMem32 = 70,
  FeatureSoftFloat = 71,
  FeatureTBM = 72,
  FeatureVBMI = 73,
  FeatureVLX = 74,
  FeatureVPOPCNTDQ = 75,
  FeatureX87 = 76,
  FeatureXOP = 77,
  FeatureXSAVE = 78,
  FeatureXSAVEC = 79,
  FeatureXSAVEOPT = 80,
  FeatureXSAVES = 81,
  Mode16Bit = 82,
  Mode32Bit = 83,
  Mode64Bit = 84,
  ProcIntelAtom = 85,
  ProcIntelSLM = 86
};
} // end namespace X86
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV X86FeatureKV[] = {
  { "16bit-mode", "16-bit mode (i8086)", { X86::Mode16Bit }, { } },
  { "32bit-mode", "32-bit mode (80386)", { X86::Mode32Bit }, { } },
  { "3dnow", "Enable 3DNow! instructions", { X86::Feature3DNow }, { X86::FeatureMMX } },
  { "3dnowa", "Enable 3DNow! Athlon instructions", { X86::Feature3DNowA }, { X86::Feature3DNow } },
  { "64bit", "Support 64-bit instructions", { X86::Feature64Bit }, { X86::FeatureCMOV } },
  { "64bit-mode", "64-bit mode (x86_64)", { X86::Mode64Bit }, { } },
  { "adx", "Support ADX instructions", { X86::FeatureADX }, { } },
  { "aes", "Enable AES instructions", { X86::FeatureAES }, { X86::FeatureSSE2 } },
  { "atom", "Intel Atom processors", { X86::ProcIntelAtom }, { } },
  { "avx", "Enable AVX instructions", { X86::FeatureAVX }, { X86::FeatureSSE42 } },
  { "avx2", "Enable AVX2 instructions", { X86::FeatureAVX2 }, { X86::FeatureAVX } },
  { "avx512bw", "Enable AVX-512 Byte and Word Instructions", { X86::FeatureBWI }, { X86::FeatureAVX512 } },
  { "avx512cd", "Enable AVX-512 Conflict Detection Instructions", { X86::FeatureCDI }, { X86::FeatureAVX512 } },
  { "avx512dq", "Enable AVX-512 Doubleword and Quadword Instructions", { X86::FeatureDQI }, { X86::FeatureAVX512 } },
  { "avx512er", "Enable AVX-512 Exponential and Reciprocal Instructions", { X86::FeatureERI }, { X86::FeatureAVX512 } },
  { "avx512f", "Enable AVX-512 instructions", { X86::FeatureAVX512 }, { X86::FeatureAVX2 } },
  { "avx512ifma", "Enable AVX-512 Integer Fused Multiple-Add", { X86::FeatureIFMA }, { X86::FeatureAVX512 } },
  { "avx512pf", "Enable AVX-512 PreFetch Instructions", { X86::FeaturePFI }, { X86::FeatureAVX512 } },
  { "avx512vbmi", "Enable AVX-512 Vector Byte Manipulation Instructions", { X86::FeatureVBMI }, { X86::FeatureBWI } },
  { "avx512vl", "Enable AVX-512 Vector Length eXtensions", { X86::FeatureVLX }, { X86::FeatureAVX512 } },
  { "avx512vpopcntdq", "Enable AVX-512 Population Count Instructions", { X86::FeatureVPOPCNTDQ }, { X86::FeatureAVX512 } },
  { "bmi", "Support BMI instructions", { X86::FeatureBMI }, { } },
  { "bmi2", "Support BMI2 instructions", { X86::FeatureBMI2 }, { } },
  { "call-reg-indirect", "Call register indirect", { X86::FeatureCallRegIndirect }, { } },
  { "clflushopt", "Flush A Cache Line Optimized", { X86::FeatureCLFLUSHOPT }, { } },
  { "clwb", "Cache Line Write Back", { X86::FeatureCLWB }, { } },
  { "clzero", "Enable Cache Line Zero", { X86::FeatureCLZERO }, { } },
  { "cmov", "Enable conditional move instructions", { X86::FeatureCMOV }, { } },
  { "cx16", "64-bit with cmpxchg16b", { X86::FeatureCMPXCHG16B }, { X86::Feature64Bit } },
  { "ermsb", "REP MOVS/STOS are fast", { X86::FeatureERMSB }, { } },
  { "f16c", "Support 16-bit floating point conversion instructions", { X86::FeatureF16C }, { X86::FeatureAVX } },
  { "fast-lzcnt", "LZCNT instructions are as fast as most simple integer ops", { X86::FeatureFastLZCNT }, { } },
  { "fast-partial-ymm-or-zmm-write", "Partial writes to YMM/ZMM registers are fast", { X86::FeatureFastPartialYMMorZMMWrite }, { } },
  { "fast-scalar-fsqrt", "Scalar SQRT is fast (disable Newton-Raphson)", { X86::FeatureFastScalarFSQRT }, { } },
  { "fast-shld-rotate", "SHLD can be used as a faster rotate", { X86::FeatureFastSHLDRotate }, { } },
  { "fast-vector-fsqrt", "Vector SQRT is fast (disable Newton-Raphson)", { X86::FeatureFastVectorFSQRT }, { } },
  { "fma", "Enable three-operand fused multiple-add", { X86::FeatureFMA }, { X86::FeatureAVX } },
  { "fma4", "Enable four-operand fused multiple-add", { X86::FeatureFMA4 }, { X86::FeatureAVX, X86::FeatureSSE4A } },
  { "fsgsbase", "Support FS/GS Base instructions", { X86::FeatureFSGSBase }, { } },
  { "fxsr", "Support fxsave/fxrestore instructions", { X86::FeatureFXSR }, { } },
  { "idivl-to-divb", "Use 8-bit divide for positive values less than 256", { X86::FeatureSlowDivide32 }, { } },
  { "idivq-to-divl", "Use 32-bit divide for positive values less than 2^32", { X86::FeatureSlowDivide64 }, { } },
  { "lea-sp", "Use LEA for adjusting the stack pointer", { X86::FeatureLEAForSP }, { } },
  { "lea-uses-ag", "LEA instruction needs inputs at AG stage", { X86::FeatureLEAUsesAG }, { } },
  { "lwp", "Enable LWP instructions", { X86::FeatureLWP }, { } },
  { "lzcnt", "Support LZCNT instruction", { X86::FeatureLZCNT }, { } },
  { "mmx", "Enable MMX instructions", { X86::FeatureMMX }, { } },
  { "movbe", "Support MOVBE instruction", { X86::FeatureMOVBE }, { } },
  { "mpx", "Support MPX instructions", { X86::FeatureMPX }, { } },
  { "mwaitx", "Enable MONITORX/MWAITX timer functionality", { X86::FeatureMWAITX }, { } },
  { "pad-short-functions", "Pad short functions", { X86::FeaturePadShortFunctions }, { } },
  { "pclmul", "Enable packed carry-less multiplication instructions", { X86::FeaturePCLMUL }, { X86::FeatureSSE2 } },
  { "pku", "Enable protection keys", { X86::FeaturePKU }, { } },
  { "popcnt", "Support POPCNT instruction", { X86::FeaturePOPCNT }, { } },
  { "prefetchwt1", "Prefetch with Intent to Write and T1 Hint", { X86::FeaturePREFETCHWT1 }, { } },
  { "prfchw", "Support PRFCHW instructions", { X86::FeaturePRFCHW }, { } },
  { "rdrnd", "Support RDRAND instruction", { X86::FeatureRDRAND }, { } },
  { "rdseed", "Support RDSEED instruction", { X86::FeatureRDSEED }, { } },
  { "rtm", "Support RTM instructions", { X86::FeatureRTM }, { } },
  { "sahf", "Support LAHF and SAHF instructions", { X86::FeatureLAHFSAHF }, { } },
  { "sgx", "Enable Software Guard Extensions", { X86::FeatureSGX }, { } },
  { "sha", "Enable SHA instructions", { X86::FeatureSHA }, { X86::FeatureSSE2 } },
  { "slm", "Intel Silvermont processors", { X86::ProcIntelSLM }, { } },
  { "slow-3ops-lea", "LEA instruction with 3 ops or certain registers is slow", { X86::FeatureSlow3OpsLEA }, { } },
  { "slow-bt-mem", "Bit testing of memory is slow", { X86::FeatureSlowBTMem }, { } },
  { "slow-incdec", "INC and DEC instructions are slower than ADD and SUB", { X86::FeatureSlowIncDec }, { } },
  { "slow-lea", "LEA instruction with certain arguments is slow", { X86::FeatureSlowLEA }, { } },
  { "slow-pmulld", "PMULLD instruction is slow", { X86::FeatureSlowPMULLD }, { } },
  { "slow-shld", "SHLD instruction is slow", { X86::FeatureSlowSHLD }, { } },
  { "slow-unaligned-mem-16", "Slow unaligned 16-byte memory access", { X86::FeatureSlowUAMem16 }, { } },
  { "slow-unaligned-mem-32", "Slow unaligned 32-byte memory access", { X86::FeatureSlowUAMem32 }, { } },
  { "soft-float", "Use software floating point features.", { X86::FeatureSoftFloat }, { } },
  { "sse", "Enable SSE instructions", { X86::FeatureSSE1 }, { X86::FeatureCMOV } },
  { "sse-unaligned-mem", "Allow unaligned memory operands with SSE instructions", { X86::FeatureSSEUnalignedMem }, { } },
  { "sse2", "Enable SSE2 instructions", { X86::FeatureSSE2 }, { X86::FeatureSSE1 } },
  { "sse3", "Enable SSE3 instructions", { X86::FeatureSSE3 }, { X86::FeatureSSE2 } },
  { "sse4.1", "Enable SSE 4.1 instructions", { X86::FeatureSSE41 }, { X86::FeatureSSSE3 } },
  { "sse4.2", "Enable SSE 4.2 instructions", { X86::FeatureSSE42 }, { X86::FeatureSSE41 } },
  { "sse4a", "Support SSE 4a instructions", { X86::FeatureSSE4A }, { X86::FeatureSSE3 } },
  { "ssse3", "Enable SSSE3 instructions", { X86::FeatureSSSE3 }, { X86::FeatureSSE3 } },
  { "tbm", "Enable TBM instructions", { X86::FeatureTBM }, { } },
  { "x87", "Enable X87 float instructions", { X86::FeatureX87 }, { } },
  { "xop", "Enable XOP instructions", { X86::FeatureXOP }, { X86::FeatureFMA4 } },
  { "xsave", "Support xsave instructions", { X86::FeatureXSAVE }, { } },
  { "xsavec", "Support xsavec instructions", { X86::FeatureXSAVEC }, { } },
  { "xsaveopt", "Support xsaveopt instructions", { X86::FeatureXSAVEOPT }, { } },
  { "xsaves", "Support xsaves instructions", { X86::FeatureXSAVES }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV X86SubTypeKV[] = {
  { "amdfam10", "Select the amdfam10 processor", { X86::FeatureX87, X86::FeatureSSE4A, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureLZCNT, X86::FeaturePOPCNT, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD, X86::FeatureLAHFSAHF }, { } },
  { "athlon", "Select the athlon processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::Feature3DNowA, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "athlon-4", "Select the athlon-4 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE1, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "athlon-fx", "Select the athlon-fx processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE2, X86::Feature3DNowA, X86::FeatureFXSR, X86::Feature64Bit, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "athlon-mp", "Select the athlon-mp processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE1, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "athlon-tbird", "Select the athlon-tbird processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::Feature3DNowA, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "athlon-xp", "Select the athlon-xp processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE1, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "athlon64", "Select the athlon64 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE2, X86::Feature3DNowA, X86::FeatureFXSR, X86::Feature64Bit, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "athlon64-sse3", "Select the athlon64-sse3 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE3, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "atom", "Select the atom processor", { X86::ProcIntelAtom, X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSSE3, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureMOVBE, X86::FeatureSlowBTMem, X86::FeatureLEAForSP, X86::FeatureSlowDivide32, X86::FeatureSlowDivide64, X86::FeatureCallRegIndirect, X86::FeatureLEAUsesAG, X86::FeaturePadShortFunctions, X86::FeatureLAHFSAHF }, { } },
  { "barcelona", "Select the barcelona processor", { X86::FeatureX87, X86::FeatureSSE4A, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureLZCNT, X86::FeaturePOPCNT, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD, X86::FeatureLAHFSAHF }, { } },
  { "bdver1", "Select the bdver1 processor", { X86::FeatureX87, X86::FeatureXOP, X86::FeatureFMA4, X86::FeatureCMPXCHG16B, X86::FeatureAES, X86::FeaturePRFCHW, X86::FeaturePCLMUL, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureSSE4A, X86::FeatureLZCNT, X86::FeaturePOPCNT, X86::FeatureXSAVE, X86::FeatureLWP, X86::FeatureSlowSHLD, X86::FeatureLAHFSAHF }, { } },
  { "bdver2", "Select the bdver2 processor", { X86::FeatureX87, X86::FeatureXOP, X86::FeatureFMA4, X86::FeatureCMPXCHG16B, X86::FeatureAES, X86::FeaturePRFCHW, X86::FeaturePCLMUL, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureSSE4A, X86::FeatureF16C, X86::FeatureLZCNT, X86::FeaturePOPCNT, X86::FeatureXSAVE, X86::FeatureBMI, X86::FeatureTBM, X86::FeatureLWP, X86::FeatureFMA, X86::FeatureSlowSHLD, X86::FeatureLAHFSAHF }, { } },
  { "bdver3", "Select the bdver3 processor", { X86::FeatureX87, X86::FeatureXOP, X86::FeatureFMA4, X86::FeatureCMPXCHG16B, X86::FeatureAES, X86::FeaturePRFCHW, X86::FeaturePCLMUL, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureSSE4A, X86::FeatureF16C, X86::FeatureLZCNT, X86::FeaturePOPCNT, X86::FeatureXSAVE, X86::FeatureBMI, X86::FeatureTBM, X86::FeatureLWP, X86::FeatureFMA, X86::FeatureXSAVEOPT, X86::FeatureSlowSHLD, X86::FeatureFSGSBase, X86::FeatureLAHFSAHF }, { } },
  { "bdver4", "Select the bdver4 processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX2, X86::FeatureFXSR, X86::FeatureXOP, X86::FeatureFMA4, X86::FeatureCMPXCHG16B, X86::FeatureAES, X86::FeaturePRFCHW, X86::FeaturePCLMUL, X86::FeatureF16C, X86::FeatureLZCNT, X86::FeaturePOPCNT, X86::FeatureXSAVE, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureTBM, X86::FeatureLWP, X86::FeatureFMA, X86::FeatureXSAVEOPT, X86::FeatureSlowSHLD, X86::FeatureFSGSBase, X86::FeatureLAHFSAHF, X86::FeatureMWAITX }, { } },
  { "bonnell", "Select the bonnell processor", { X86::ProcIntelAtom, X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSSE3, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureMOVBE, X86::FeatureSlowBTMem, X86::FeatureLEAForSP, X86::FeatureSlowDivide32, X86::FeatureSlowDivide64, X86::FeatureCallRegIndirect, X86::FeatureLEAUsesAG, X86::FeaturePadShortFunctions, X86::FeatureLAHFSAHF }, { } },
  { "broadwell", "Select the broadwell processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureERMSB, X86::FeatureFMA, X86::FeatureLZCNT, X86::FeatureMOVBE, X86::FeatureSlowIncDec, X86::FeatureADX, X86::FeatureRDSEED }, { } },
  { "btver1", "Select the btver1 processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureSSSE3, X86::FeatureSSE4A, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePRFCHW, X86::FeatureLZCNT, X86::FeaturePOPCNT, X86::FeatureSlowSHLD, X86::FeatureLAHFSAHF }, { } },
  { "btver2", "Select the btver2 processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureSSE4A, X86::FeatureCMPXCHG16B, X86::FeaturePRFCHW, X86::FeatureAES, X86::FeaturePCLMUL, X86::FeatureBMI, X86::FeatureF16C, X86::FeatureMOVBE, X86::FeatureLZCNT, X86::FeatureFastLZCNT, X86::FeaturePOPCNT, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureSlowSHLD, X86::FeatureLAHFSAHF, X86::FeatureFastPartialYMMorZMMWrite }, { } },
  { "c3", "Select the c3 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::Feature3DNow }, { } },
  { "c3-2", "Select the c3-2 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE1, X86::FeatureFXSR }, { } },
  { "cannonlake", "Select the cannonlake processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureERMSB, X86::FeatureFMA, X86::FeatureLZCNT, X86::FeatureMOVBE, X86::FeatureSlowIncDec, X86::FeatureADX, X86::FeatureRDSEED, X86::FeatureMPX, X86::FeatureRTM, X86::FeatureXSAVEC, X86::FeatureXSAVES, X86::FeatureSGX, X86::FeatureCLFLUSHOPT, X86::FeatureFastVectorFSQRT, X86::FeatureAVX512, X86::FeatureCDI, X86::FeatureDQI, X86::FeatureBWI, X86::FeatureVLX, X86::FeaturePKU, X86::FeatureCLWB, X86::FeatureVBMI, X86::FeatureIFMA, X86::FeatureSHA }, { } },
  { "core-avx-i", "Select the core-avx-i processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureSlowBTMem, X86::FeatureSlowUAMem32 }, { } },
  { "core-avx2", "Select the core-avx2 processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureERMSB, X86::FeatureFMA, X86::FeatureLZCNT, X86::FeatureMOVBE, X86::FeatureSlowIncDec }, { } },
  { "core2", "Select the core2 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSSE3, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeatureLAHFSAHF }, { } },
  { "corei7", "Select the corei7 processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureSSE42, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeaturePOPCNT, X86::FeatureLAHFSAHF }, { } },
  { "corei7-avx", "Select the corei7-avx processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureSlowBTMem, X86::FeatureSlowUAMem32 }, { } },
  { "generic", "Select the generic processor", { X86::FeatureX87, X86::FeatureSlowUAMem16 }, { } },
  { "geode", "Select the geode processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::Feature3DNowA }, { } },
  { "haswell", "Select the haswell processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureERMSB, X86::FeatureFMA, X86::FeatureLZCNT, X86::FeatureMOVBE, X86::FeatureSlowIncDec }, { } },
  { "i386", "Select the i386 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16 }, { } },
  { "i486", "Select the i486 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16 }, { } },
  { "i586", "Select the i586 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16 }, { } },
  { "i686", "Select the i686 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16 }, { } },
  { "ivybridge", "Select the ivybridge processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureSlowBTMem, X86::FeatureSlowUAMem32 }, { } },
  { "k6", "Select the k6 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX }, { } },
  { "k6-2", "Select the k6-2 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::Feature3DNow }, { } },
  { "k6-3", "Select the k6-3 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::Feature3DNow }, { } },
  { "k8", "Select the k8 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE2, X86::Feature3DNowA, X86::FeatureFXSR, X86::Feature64Bit, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "k8-sse3", "Select the k8-sse3 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE3, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "knl", "Select the knl processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX512, X86::FeatureERI, X86::FeatureCDI, X86::FeaturePFI, X86::FeaturePREFETCHWT1, X86::FeatureADX, X86::FeatureRDSEED, X86::FeatureMOVBE, X86::FeatureLZCNT, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureFMA, X86::FeatureFastPartialYMMorZMMWrite }, { } },
  { "lakemont", "Select the lakemont processor", { }, { } },
  { "nehalem", "Select the nehalem processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureSSE42, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeaturePOPCNT, X86::FeatureLAHFSAHF }, { } },
  { "nocona", "Select the nocona processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE3, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem }, { } },
  { "opteron", "Select the opteron processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE2, X86::Feature3DNowA, X86::FeatureFXSR, X86::Feature64Bit, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "opteron-sse3", "Select the opteron-sse3 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureSSE3, X86::Feature3DNowA, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeatureSlowSHLD }, { } },
  { "penryn", "Select the penryn processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE41, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeatureLAHFSAHF }, { } },
  { "pentium", "Select the pentium processor", { X86::FeatureX87, X86::FeatureSlowUAMem16 }, { } },
  { "pentium-m", "Select the pentium-m processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE2, X86::FeatureFXSR, X86::FeatureSlowBTMem }, { } },
  { "pentium-mmx", "Select the pentium-mmx processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX }, { } },
  { "pentium2", "Select the pentium2 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureCMOV, X86::FeatureFXSR }, { } },
  { "pentium3", "Select the pentium3 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE1, X86::FeatureFXSR }, { } },
  { "pentium3m", "Select the pentium3m processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE1, X86::FeatureFXSR, X86::FeatureSlowBTMem }, { } },
  { "pentium4", "Select the pentium4 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE2, X86::FeatureFXSR }, { } },
  { "pentium4m", "Select the pentium4m processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE2, X86::FeatureFXSR, X86::FeatureSlowBTMem }, { } },
  { "pentiumpro", "Select the pentiumpro processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureCMOV }, { } },
  { "prescott", "Select the prescott processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE3, X86::FeatureFXSR, X86::FeatureSlowBTMem }, { } },
  { "sandybridge", "Select the sandybridge processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureSlowBTMem, X86::FeatureSlowUAMem32 }, { } },
  { "silvermont", "Select the silvermont processor", { X86::ProcIntelSLM, X86::FeatureX87, X86::FeatureMMX, X86::FeatureSSE42, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureMOVBE, X86::FeaturePOPCNT, X86::FeaturePCLMUL, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeatureCallRegIndirect, X86::FeaturePRFCHW, X86::FeatureSlowLEA, X86::FeatureSlowIncDec, X86::FeatureSlowBTMem, X86::FeatureSlowPMULLD, X86::FeatureLAHFSAHF }, { } },
  { "skx", "Select the skx processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureERMSB, X86::FeatureFMA, X86::FeatureLZCNT, X86::FeatureMOVBE, X86::FeatureSlowIncDec, X86::FeatureADX, X86::FeatureRDSEED, X86::FeatureMPX, X86::FeatureRTM, X86::FeatureXSAVEC, X86::FeatureXSAVES, X86::FeatureSGX, X86::FeatureCLFLUSHOPT, X86::FeatureFastVectorFSQRT, X86::FeatureAVX512, X86::FeatureCDI, X86::FeatureDQI, X86::FeatureBWI, X86::FeatureVLX, X86::FeaturePKU, X86::FeatureCLWB }, { } },
  { "skylake", "Select the skylake processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureERMSB, X86::FeatureFMA, X86::FeatureLZCNT, X86::FeatureMOVBE, X86::FeatureSlowIncDec, X86::FeatureADX, X86::FeatureRDSEED, X86::FeatureMPX, X86::FeatureRTM, X86::FeatureXSAVEC, X86::FeatureXSAVES, X86::FeatureSGX, X86::FeatureCLFLUSHOPT, X86::FeatureFastVectorFSQRT }, { } },
  { "skylake-avx512", "Select the skylake-avx512 processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureAVX, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeaturePCLMUL, X86::FeatureXSAVE, X86::FeatureXSAVEOPT, X86::FeatureLAHFSAHF, X86::FeatureSlow3OpsLEA, X86::FeatureFastScalarFSQRT, X86::FeatureFastSHLDRotate, X86::FeatureRDRAND, X86::FeatureF16C, X86::FeatureFSGSBase, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureERMSB, X86::FeatureFMA, X86::FeatureLZCNT, X86::FeatureMOVBE, X86::FeatureSlowIncDec, X86::FeatureADX, X86::FeatureRDSEED, X86::FeatureMPX, X86::FeatureRTM, X86::FeatureXSAVEC, X86::FeatureXSAVES, X86::FeatureSGX, X86::FeatureCLFLUSHOPT, X86::FeatureFastVectorFSQRT, X86::FeatureAVX512, X86::FeatureCDI, X86::FeatureDQI, X86::FeatureBWI, X86::FeatureVLX, X86::FeaturePKU, X86::FeatureCLWB }, { } },
  { "slm", "Select the slm processor", { X86::ProcIntelSLM, X86::FeatureX87, X86::FeatureMMX, X86::FeatureSSE42, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureMOVBE, X86::FeaturePOPCNT, X86::FeaturePCLMUL, X86::FeatureAES, X86::FeatureSlowDivide64, X86::FeatureCallRegIndirect, X86::FeaturePRFCHW, X86::FeatureSlowLEA, X86::FeatureSlowIncDec, X86::FeatureSlowBTMem, X86::FeatureSlowPMULLD, X86::FeatureLAHFSAHF }, { } },
  { "westmere", "Select the westmere processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureSSE42, X86::FeatureFXSR, X86::FeatureCMPXCHG16B, X86::FeatureSlowBTMem, X86::FeaturePOPCNT, X86::FeatureAES, X86::FeaturePCLMUL, X86::FeatureLAHFSAHF }, { } },
  { "winchip-c6", "Select the winchip-c6 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX }, { } },
  { "winchip2", "Select the winchip2 processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::Feature3DNow }, { } },
  { "x86-64", "Select the x86-64 processor", { X86::FeatureX87, X86::FeatureMMX, X86::FeatureSSE2, X86::FeatureFXSR, X86::Feature64Bit, X86::FeatureSlowBTMem }, { } },
  { "yonah", "Select the yonah processor", { X86::FeatureX87, X86::FeatureSlowUAMem16, X86::FeatureMMX, X86::FeatureSSE3, X86::FeatureFXSR, X86::FeatureSlowBTMem }, { } },
  { "znver1", "Select the znver1 processor", { X86::FeatureADX, X86::FeatureAES, X86::FeatureAVX2, X86::FeatureBMI, X86::FeatureBMI2, X86::FeatureCLFLUSHOPT, X86::FeatureCLZERO, X86::FeatureCMPXCHG16B, X86::FeatureF16C, X86::FeatureFMA, X86::FeatureFSGSBase, X86::FeatureFXSR, X86::FeatureFastLZCNT, X86::FeatureLAHFSAHF, X86::FeatureLZCNT, X86::FeatureMMX, X86::FeatureMOVBE, X86::FeatureMWAITX, X86::FeaturePCLMUL, X86::FeaturePOPCNT, X86::FeaturePRFCHW, X86::FeatureRDRAND, X86::FeatureRDSEED, X86::FeatureSHA, X86::FeatureSSE4A, X86::FeatureSlowSHLD, X86::FeatureX87, X86::FeatureXSAVE, X86::FeatureXSAVEC, X86::FeatureXSAVEOPT, X86::FeatureXSAVES }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "AtomItineraries"
namespace AtomItinerariesFU {
  const unsigned Port0 = 1 << 0;
  const unsigned Port1 = 1 << 1;
} // end namespace AtomItinerariesFU

extern const llvm::InstrStage X86Stages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 13, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 7, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 21, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, AtomItinerariesFU::Port0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 6, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 5, AtomItinerariesFU::Port0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7-8
  { 5, AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 23, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 24, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 11, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 16, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 9, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 1, AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 2, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 15, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17
  { 1, AtomItinerariesFU::Port0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 18-19
  { 4, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20
  { 3, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21
  { 14, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 33, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 22, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 18, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25
  { 10, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26
  { 121, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27
  { 8, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28
  { 20, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29
  { 50, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30
  { 130, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31
  { 68, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32
  { 125, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33
  { 70, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 34
  { 62, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35
  { 34, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36
  { 79, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 37
  { 32, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38
  { 99, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 39
  { 39, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40
  { 40, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 41
  { 31, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 42
  { 5, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 43
  { 25, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44
  { 63, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45
  { 183, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46
  { 55, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 47
  { 71, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48
  { 168, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 49
  { 46, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50
  { 77, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 51
  { 174, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 52
  { 141, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53
  { 140, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 54
  { 146, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55
  { 147, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56
  { 5, AtomItinerariesFU::Port0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 57
  { 12, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58
  { 92, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 59
  { 94, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60
  { 59, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 61
  { 127, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62
  { 1003, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63
  { 109, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 64
  { 54, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65
  { 44, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66
  { 64, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 67
  { 60, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68
  { 69, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69
  { 67, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 17, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 49, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 83, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 3, AtomItinerariesFU::Port0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 4, AtomItinerariesFU::Port0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 45, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 26, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77
  { 136, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78
  { 123, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 88, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 72, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 74, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 29, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 48, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 78, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85
  { 30, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 75, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 741, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 96, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 41, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 51, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 202, AtomItinerariesFU::Port0 | AtomItinerariesFU::Port1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned X86OperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned X86ForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary AtomItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 IIC_AAA_WriteMicrocoded
  { 1, 2, 3, 0, 0 }, // 2 IIC_AAD_WriteMicrocoded
  { 1, 3, 4, 0, 0 }, // 3 IIC_AAM_WriteMicrocoded
  { 1, 1, 2, 0, 0 }, // 4 IIC_AAS_WriteMicrocoded
  { 1, 4, 5, 0, 0 }, // 5 IIC_BIN_CARRY_NONMEM_WriteALU
  { 1, 5, 6, 0, 0 }, // 6 IIC_BIN_CARRY_MEM_WriteALULd_WriteRMW
  { 1, 5, 6, 0, 0 }, // 7 IIC_BIN_CARRY_MEM_WriteALULd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 8 IIC_BIN_CARRY_MEM_WriteALULd
  { 1, 4, 5, 0, 0 }, // 9 IIC_BIN_NONMEM_WriteALU
  { 1, 5, 6, 0, 0 }, // 10 IIC_BIN_MEM_WriteALULd_WriteRMW
  { 0, 0, 0, 0, 0 }, // 11 WriteALU
  { 1, 5, 6, 0, 0 }, // 12 IIC_BIN_MEM_WriteALULd_ReadAfterLd
  { 1, 2, 3, 0, 0 }, // 13 IIC_SSE_ALU_F64P_RM_WriteFAddLd_ReadAfterLd
  { 1, 6, 7, 0, 0 }, // 14 IIC_SSE_ALU_F64P_RR_WriteFAdd
  { 1, 7, 9, 0, 0 }, // 15 IIC_SSE_ALU_F32P_RM_WriteFAddLd_ReadAfterLd
  { 1, 9, 10, 0, 0 }, // 16 IIC_SSE_ALU_F32P_RR_WriteFAdd
  { 1, 7, 9, 0, 0 }, // 17 IIC_SSE_ALU_F64S_RM_WriteFAddLd_ReadAfterLd
  { 1, 9, 10, 0, 0 }, // 18 IIC_SSE_ALU_F64S_RR_WriteFAdd
  { 1, 7, 9, 0, 0 }, // 19 IIC_SSE_ALU_F32S_RM_WriteFAddLd_ReadAfterLd
  { 1, 9, 10, 0, 0 }, // 20 IIC_SSE_ALU_F32S_RR_WriteFAdd
  { 1, 6, 7, 0, 0 }, // 21 IIC_SSE_ALU_F64P_RR_WriteFAddLd_ReadAfterLd
  { 1, 9, 10, 0, 0 }, // 22 IIC_SSE_ALU_F32P_RR_WriteFAddLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 23 WriteFAddLd
  { 0, 0, 0, 0, 0 }, // 24 WriteFAdd
  { 1, 5, 6, 0, 0 }, // 25 IIC_BIN_MEM_WriteALULd
  { 0, 0, 0, 0, 0 }, // 26 IIC_AES_WriteAESDecEncLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 27 IIC_AES_WriteAESDecEnc
  { 0, 0, 0, 0, 0 }, // 28 IIC_AES_WriteAESIMCLd
  { 0, 0, 0, 0, 0 }, // 29 IIC_AES_WriteAESIMC
  { 0, 0, 0, 0, 0 }, // 30 WriteAESKeyGenLd
  { 0, 0, 0, 0, 0 }, // 31 WriteAESKeyGen
  { 0, 0, 0, 0, 0 }, // 32 WriteVecLogicLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 33 WriteVecLogic
  { 1, 10, 11, 0, 0 }, // 34 IIC_ARPL_MEM_WriteSystem
  { 1, 11, 12, 0, 0 }, // 35 IIC_ARPL_REG_WriteSystem
  { 0, 0, 0, 0, 0 }, // 36 WriteZero
  { 1, 5, 6, 0, 0 }, // 37 IIC_SSE_INTALU_P_RM_WriteFBlendLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 38 IIC_SSE_INTALU_P_RR_WriteFBlend
  { 1, 5, 6, 0, 0 }, // 39 IIC_ALU_MEM_WriteFBlendLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 40 IIC_ALU_NONMEM_WriteFBlend
  { 1, 12, 13, 0, 0 }, // 41 IIC_BOUND_WriteSystem
  { 1, 13, 14, 0, 0 }, // 42 IIC_BIT_SCAN_MEM_WriteShiftLd
  { 1, 13, 14, 0, 0 }, // 43 IIC_BIT_SCAN_REG_WriteShift
  { 1, 5, 6, 0, 0 }, // 44 IIC_BSWAP_WriteALU
  { 1, 4, 5, 0, 0 }, // 45 IIC_BT_MI_WriteALU
  { 1, 14, 15, 0, 0 }, // 46 IIC_BT_MR_WriteALULd
  { 1, 15, 16, 0, 0 }, // 47 IIC_BT_RI_WriteALU
  { 1, 15, 16, 0, 0 }, // 48 IIC_BT_RR_WriteALU
  { 1, 16, 17, 0, 0 }, // 49 IIC_BTX_MI_WriteALULd_WriteRMW
  { 1, 12, 13, 0, 0 }, // 50 IIC_BTX_MR_WriteALULd_WriteRMW
  { 1, 15, 16, 0, 0 }, // 51 IIC_BTX_RI_WriteALU
  { 1, 15, 16, 0, 0 }, // 52 IIC_BTX_RR_WriteALU
  { 1, 17, 18, 0, 0 }, // 53 IIC_CALL_MEM_WriteJumpLd
  { 1, 18, 20, 0, 0 }, // 54 IIC_CALL_RI_WriteJump
  { 1, 17, 18, 0, 0 }, // 55 IIC_CALL_MEM_WriteJump
  { 0, 0, 0, 0, 0 }, // 56 WriteSystem
  { 1, 20, 21, 0, 0 }, // 57 IIC_CBW
  { 1, 4, 5, 0, 0 }, // 58 IIC_CLC_WriteALU
  { 1, 21, 22, 0, 0 }, // 59 IIC_CLD_WriteALU
  { 1, 5, 6, 0, 0 }, // 60 IIC_SSE_PREFETCH_WriteLoad
  { 1, 22, 23, 0, 0 }, // 61 IIC_CLI_WriteALU
  { 1, 23, 24, 0, 0 }, // 62 IIC_CLTS_WriteALU
  { 0, 0, 0, 0, 0 }, // 63 IIC_SSE_CLZERO_WriteSystem
  { 1, 4, 5, 0, 0 }, // 64 IIC_CMC_WriteALU
  { 1, 5, 6, 0, 0 }, // 65 IIC_CMOV16_RM_WriteALULd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 66 IIC_CMOV16_RR_WriteALU
  { 1, 5, 6, 0, 0 }, // 67 IIC_CMOV32_RM_WriteALULd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 68 IIC_CMOV32_RR_WriteALU
  { 1, 21, 22, 0, 0 }, // 69 IIC_CMPS_WriteMicrocoded
  { 1, 24, 25, 0, 0 }, // 70 IIC_CMPXCHG_16B_WriteALULd_WriteRMW
  { 1, 22, 23, 0, 0 }, // 71 IIC_CMPXCHG_MEM_WriteALULd_WriteRMW
  { 1, 17, 18, 0, 0 }, // 72 IIC_CMPXCHG_REG_WriteALU
  { 1, 25, 26, 0, 0 }, // 73 IIC_CMPXCHG_8B_WriteALULd_WriteRMW
  { 1, 6, 7, 0, 0 }, // 74 IIC_CMPXCHG_MEM8_WriteALULd_WriteRMW
  { 1, 14, 15, 0, 0 }, // 75 IIC_CMPXCHG_REG8_WriteALU
  { 1, 26, 27, 0, 0 }, // 76 IIC_SSE_COMIS_RM_WriteFAddLd_ReadAfterLd
  { 1, 14, 15, 0, 0 }, // 77 IIC_SSE_COMIS_RR_WriteFAdd
  { 1, 14, 15, 0, 0 }, // 78 IIC_FCOMI_WriteFAdd
  { 1, 27, 28, 0, 0 }, // 79 IIC_CPUID_WriteSystem
  { 0, 0, 0, 0, 0 }, // 80 IIC_CRC32_MEM_WriteFAddLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 81 IIC_CRC32_REG_WriteFAdd
  { 1, 2, 3, 0, 0 }, // 82 IIC_SSE_CVT_PD_RR_WriteCvtI2FLd
  { 1, 28, 29, 0, 0 }, // 83 IIC_SSE_CVT_PD_RM_WriteCvtI2F
  { 1, 2, 3, 0, 0 }, // 84 IIC_SSE_CVT_PS_RM_WriteCvtI2FLd
  { 1, 6, 7, 0, 0 }, // 85 IIC_SSE_CVT_PS_RR_WriteCvtI2F
  { 1, 28, 29, 0, 0 }, // 86 IIC_SSE_CVT_PD_RM_WriteCvtF2ILd
  { 1, 2, 3, 0, 0 }, // 87 IIC_SSE_CVT_PD_RR_WriteCvtF2I
  { 1, 28, 29, 0, 0 }, // 88 IIC_SSE_CVT_PD_RM_WriteCvtF2FLd
  { 1, 2, 3, 0, 0 }, // 89 IIC_SSE_CVT_PD_RR_WriteCvtF2F
  { 1, 2, 3, 0, 0 }, // 90 IIC_SSE_CVT_PS_RM_WriteCvtF2ILd
  { 1, 6, 7, 0, 0 }, // 91 IIC_SSE_CVT_PS_RR_WriteCvtF2I
  { 1, 14, 15, 0, 0 }, // 92 IIC_SSE_CVT_SD2SI_RM_WriteCvtF2ILd
  { 1, 28, 29, 0, 0 }, // 93 IIC_SSE_CVT_SD2SI_RR_WriteCvtF2I
  { 1, 2, 3, 0, 0 }, // 94 IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd
  { 1, 6, 7, 0, 0 }, // 95 IIC_SSE_CVT_Scalar_RR_WriteCvtF2F
  { 1, 2, 3, 0, 0 }, // 96 IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd
  { 1, 6, 7, 0, 0 }, // 97 IIC_SSE_CVT_Scalar_RR_WriteCvtI2F
  { 1, 26, 27, 0, 0 }, // 98 IIC_SSE_CVT_SS2SI64_RM_WriteCvtF2ILd
  { 1, 14, 15, 0, 0 }, // 99 IIC_SSE_CVT_SS2SI64_RR_WriteCvtF2I
  { 1, 14, 15, 0, 0 }, // 100 IIC_SSE_CVT_SS2SI32_RM_WriteCvtF2ILd
  { 1, 28, 29, 0, 0 }, // 101 IIC_SSE_CVT_SS2SI32_RR_WriteCvtF2I
  { 1, 25, 26, 0, 0 }, // 102 IIC_DAA_WriteMicrocoded
  { 1, 29, 30, 0, 0 }, // 103 IIC_DAS_WriteMicrocoded
  { 1, 5, 6, 0, 0 }, // 104 IIC_UNARY_MEM_WriteALULd_WriteRMW
  { 1, 4, 5, 0, 0 }, // 105 IIC_UNARY_REG_WriteALU
  { 1, 30, 31, 0, 0 }, // 106 IIC_DIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 30, 31, 0, 0 }, // 107 IIC_DIV16_WriteIDiv
  { 1, 30, 31, 0, 0 }, // 108 IIC_DIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 30, 31, 0, 0 }, // 109 IIC_DIV32_WriteIDiv
  { 1, 31, 32, 0, 0 }, // 110 IIC_DIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 31, 32, 0, 0 }, // 111 IIC_DIV64_WriteIDiv
  { 1, 32, 33, 0, 0 }, // 112 IIC_DIV8_MEM_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 30, 31, 0, 0 }, // 113 IIC_DIV8_REG_WriteIDiv
  { 1, 33, 34, 0, 0 }, // 114 IIC_SSE_DIV_F64P_RM_WriteFDivLd_ReadAfterLd
  { 1, 33, 34, 0, 0 }, // 115 IIC_SSE_DIV_F64P_RR_WriteFDiv
  { 1, 34, 35, 0, 0 }, // 116 IIC_SSE_DIV_F32P_RR_WriteFDiv
  { 0, 0, 0, 0, 0 }, // 117 WriteFDivLd
  { 0, 0, 0, 0, 0 }, // 118 WriteFDiv
  { 1, 35, 36, 0, 0 }, // 119 IIC_SSE_DIV_F64S_RM_WriteFDivLd_ReadAfterLd
  { 1, 35, 36, 0, 0 }, // 120 IIC_SSE_DIV_F64S_RR_WriteFDiv
  { 1, 36, 37, 0, 0 }, // 121 IIC_SSE_DIV_F32S_RR_WriteFDiv
  { 0, 0, 0, 0, 0 }, // 122 IIC_SSE_DPPD_RM_WriteFAddLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 123 IIC_SSE_DPPD_RR_WriteFAdd
  { 0, 0, 0, 0, 0 }, // 124 IIC_SSE_DPPS_RR_WriteFAdd
  { 1, 37, 38, 0, 0 }, // 125 IIC_RET_WriteSystem
  { 1, 38, 39, 0, 0 }, // 126 IIC_ENTER_WriteMicrocoded
  { 0, 0, 0, 0, 0 }, // 127 IIC_SSE_EXTRACTPS_RM_WriteFBlendLd_WriteRMW
  { 0, 0, 0, 0, 0 }, // 128 IIC_SSE_EXTRACTPS_RR_WriteFBlend
  { 1, 39, 40, 0, 0 }, // 129 IIC_F2XM1_WriteMicrocoded
  { 1, 40, 41, 0, 0 }, // 130 IIC_CALL_FAR_PTR_WriteJump
  { 1, 41, 42, 0, 0 }, // 131 IIC_CALL_FAR_MEM_WriteJumpLd
  { 1, 41, 42, 0, 0 }, // 132 IIC_CALL_FAR_MEM_WriteJump
  { 1, 42, 43, 0, 0 }, // 133 IIC_JMP_FAR_PTR_WriteJump
  { 1, 38, 39, 0, 0 }, // 134 IIC_JMP_FAR_MEM_WriteJumpLd
  { 1, 38, 39, 0, 0 }, // 135 IIC_JMP_FAR_MEM_WriteJump
  { 1, 15, 16, 0, 0 }, // 136 IIC_FCOMPP_WriteMicrocoded
  { 1, 4, 5, 0, 0 }, // 137 IIC_FPSTP_WriteMicrocoded
  { 1, 4, 5, 0, 0 }, // 138 IIC_FFREE_WriteMicrocoded
  { 1, 43, 44, 0, 0 }, // 139 IIC_FLDCW_WriteLoad
  { 1, 26, 27, 0, 0 }, // 140 IIC_FLDL_WriteMicrocoded
  { 1, 44, 45, 0, 0 }, // 141 IIC_FNCLEX_WriteMicrocoded
  { 1, 45, 46, 0, 0 }, // 142 IIC_FNINIT_WriteMicrocoded
  { 1, 4, 5, 0, 0 }, // 143 IIC_FNOP_WriteMicrocoded
  { 1, 28, 29, 0, 0 }, // 144 IIC_FNSTCW_WriteALU
  { 1, 26, 27, 0, 0 }, // 145 IIC_FNSTSW_WriteALU
  { 1, 46, 47, 0, 0 }, // 146 IIC_FPATAN_WriteMicrocoded
  { 1, 47, 48, 0, 0 }, // 147 IIC_FPREM_WriteMicrocoded
  { 1, 48, 49, 0, 0 }, // 148 IIC_FPREM1_WriteMicrocoded
  { 1, 49, 50, 0, 0 }, // 149 IIC_FPTAN_WriteMicrocoded
  { 1, 50, 51, 0, 0 }, // 150 IIC_FRNDINT_WriteMicrocoded
  { 1, 51, 52, 0, 0 }, // 151 IIC_FSCALE_WriteMicrocoded
  { 1, 52, 53, 0, 0 }, // 152 IIC_FSINCOS_WriteMicrocoded
  { 1, 5, 6, 0, 0 }, // 153 IIC_FXAM_WriteMicrocoded
  { 1, 53, 54, 0, 0 }, // 154 IIC_FXRSTOR_WriteMicrocoded
  { 1, 54, 55, 0, 0 }, // 155 IIC_FXSAVE_WriteMicrocoded
  { 1, 44, 45, 0, 0 }, // 156 IIC_FXTRACT_WriteMicrocoded
  { 1, 55, 56, 0, 0 }, // 157 IIC_FYL2X_WriteMicrocoded
  { 1, 56, 57, 0, 0 }, // 158 IIC_FYL2XP1_WriteMicrocoded
  { 1, 14, 15, 0, 0 }, // 159 IIC_SSE_HADDSUB_RM_WriteFHAddLd_ReadAfterLd
  { 1, 28, 29, 0, 0 }, // 160 IIC_SSE_HADDSUB_RR_WriteFHAdd
  { 1, 27, 28, 0, 0 }, // 161 IIC_HLT_WriteSystem
  { 1, 35, 36, 0, 0 }, // 162 IIC_IDIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 35, 36, 0, 0 }, // 163 IIC_IDIV16_WriteIDiv
  { 1, 35, 36, 0, 0 }, // 164 IIC_IDIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 35, 36, 0, 0 }, // 165 IIC_IDIV32_WriteIDiv
  { 1, 31, 32, 0, 0 }, // 166 IIC_IDIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 31, 32, 0, 0 }, // 167 IIC_IDIV64_WriteIDiv
  { 1, 35, 36, 0, 0 }, // 168 IIC_IDIV8_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 35, 36, 0, 0 }, // 169 IIC_IDIV8_WriteIDiv
  { 1, 7, 9, 0, 0 }, // 170 IIC_FILD_WriteLoad
  { 1, 28, 29, 0, 0 }, // 171 IIC_IMUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 6, 7, 0, 0 }, // 172 IIC_IMUL16_RR_WriteIMul
  { 1, 2, 3, 0, 0 }, // 173 IIC_IMUL16_RM_WriteIMulLd_ReadAfterLd
  { 1, 2, 3, 0, 0 }, // 174 IIC_IMUL16_RMI_WriteIMulLd
  { 1, 6, 7, 0, 0 }, // 175 IIC_IMUL16_RRI_WriteIMul
  { 1, 2, 3, 0, 0 }, // 176 IIC_IMUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 57, 58, 0, 0 }, // 177 IIC_IMUL32_RR_WriteIMul
  { 1, 57, 58, 0, 0 }, // 178 IIC_IMUL32_RM_WriteIMulLd_ReadAfterLd
  { 1, 57, 58, 0, 0 }, // 179 IIC_IMUL32_RMI_WriteIMulLd
  { 1, 57, 58, 0, 0 }, // 180 IIC_IMUL32_RRI_WriteIMul
  { 1, 58, 59, 0, 0 }, // 181 IIC_IMUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 58, 59, 0, 0 }, // 182 IIC_IMUL64_RR_WriteIMul
  { 1, 58, 59, 0, 0 }, // 183 IIC_IMUL64_RM_WriteIMulLd_ReadAfterLd
  { 1, 22, 23, 0, 0 }, // 184 IIC_IMUL64_RMI_WriteIMulLd
  { 1, 22, 23, 0, 0 }, // 185 IIC_IMUL64_RRI_WriteIMul
  { 1, 2, 3, 0, 0 }, // 186 IIC_IMUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 2, 3, 0, 0 }, // 187 IIC_IMUL8_WriteIMul
  { 1, 59, 60, 0, 0 }, // 188 IIC_IN_RI_WriteSystem
  { 1, 60, 61, 0, 0 }, // 189 IIC_IN_RR_WriteSystem
  { 1, 61, 62, 0, 0 }, // 190 IIC_INS_WriteSystem
  { 0, 0, 0, 0, 0 }, // 191 IIC_SSE_INSERTPS_RM_WriteFShuffleLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 192 IIC_SSE_INSERTPS_RR_WriteFShuffle
  { 1, 62, 63, 0, 0 }, // 193 IIC_INT_WriteSystem
  { 1, 31, 32, 0, 0 }, // 194 IIC_INT3_WriteSystem
  { 1, 63, 64, 0, 0 }, // 195 IIC_INVD_WriteSystem
  { 1, 48, 49, 0, 0 }, // 196 IIC_INVLPG_WriteSystem
  { 0, 0, 0, 0, 0 }, // 197 WriteJumpLd
  { 1, 64, 65, 0, 0 }, // 198 IIC_IRET_WriteJumpLd
  { 1, 16, 17, 0, 0 }, // 199 IIC_FST_WriteStore
  { 1, 6, 7, 0, 0 }, // 200 IIC_FIST_WriteStore
  { 1, 2, 3, 0, 0 }, // 201 IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd_ReadAfterLd
  { 1, 2, 3, 0, 0 }, // 202 IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 203 WriteLoad
  { 1, 15, 16, 0, 0 }, // 204 IIC_Jcc_WriteJump
  { 1, 20, 21, 0, 0 }, // 205 IIC_JCXZ_WriteJump
  { 1, 16, 17, 0, 0 }, // 206 IIC_JMP_MEM_WriteJumpLd
  { 1, 15, 16, 0, 0 }, // 207 IIC_JMP_REG_WriteJump
  { 1, 15, 16, 0, 0 }, // 208 IIC_JMP_REL_WriteJump
  { 1, 4, 5, 0, 0 }, // 209 IIC_AHF_WriteALU
  { 1, 30, 31, 0, 0 }, // 210 IIC_LAR_RM_WriteSystem
  { 1, 65, 66, 0, 0 }, // 211 IIC_LAR_RR_WriteSystem
  { 1, 22, 23, 0, 0 }, // 212 IIC_CMPX_LOCK_WriteALULd_WriteRMW
  { 1, 24, 25, 0, 0 }, // 213 IIC_CMPX_LOCK_16B_WriteALULd_WriteRMW
  { 1, 6, 7, 0, 0 }, // 214 IIC_CMPX_LOCK_8_WriteALULd_WriteRMW
  { 1, 25, 26, 0, 0 }, // 215 IIC_CMPX_LOCK_8B_WriteALULd_WriteRMW
  { 1, 21, 22, 0, 0 }, // 216 IIC_SSE_LDDQU_WriteLoad
  { 1, 43, 44, 0, 0 }, // 217 IIC_SSE_LDMXCSR_WriteLoad
  { 1, 26, 27, 0, 0 }, // 218 IIC_LXS_WriteSystem
  { 1, 4, 5, 0, 0 }, // 219 IIC_FLDZ_WriteZero
  { 1, 6, 7, 0, 0 }, // 220 IIC_FIST_WriteZero
  { 1, 5, 6, 0, 0 }, // 221 IIC_FLD_WriteLoad
  { 1, 20, 21, 0, 0 }, // 222 IIC_FLD80_WriteLoad
  { 1, 5, 6, 0, 0 }, // 223 IIC_FLD_WriteMove
  { 1, 16, 17, 0, 0 }, // 224 IIC_LEA_16_WriteLEA
  { 1, 15, 16, 0, 0 }, // 225 IIC_LEA_WriteLEA
  { 1, 16, 17, 0, 0 }, // 226 IIC_LEAVE_WriteALU
  { 1, 4, 5, 0, 0 }, // 227 IIC_SSE_LFENCE_WriteFence
  { 1, 66, 67, 0, 0 }, // 228 IIC_LGDT_WriteSystem
  { 1, 66, 67, 0, 0 }, // 229 IIC_LIDT_WriteSystem
  { 1, 67, 68, 0, 0 }, // 230 IIC_LLDT_MEM_WriteSystem
  { 1, 68, 69, 0, 0 }, // 231 IIC_LLDT_REG_WriteSystem
  { 0, 0, 0, 0, 0 }, // 232 IIC_LWP
  { 1, 69, 70, 0, 0 }, // 233 IIC_LMSW_REG_WriteSystem
  { 1, 70, 71, 0, 0 }, // 234 IIC_LMSW_MEM_WriteSystem
  { 1, 5, 6, 0, 0 }, // 235 IIC_ALU_MEM_WriteALULd_WriteRMW
  { 1, 4, 5, 0, 0 }, // 236 IIC_ALU_NONMEM_WriteALULd_WriteRMW
  { 1, 16, 17, 0, 0 }, // 237 IIC_LODS_WriteMicrocoded
  { 1, 25, 26, 0, 0 }, // 238 IIC_LOOP_WriteJump
  { 1, 28, 29, 0, 0 }, // 239 IIC_LOOPE_WriteJump
  { 1, 71, 72, 0, 0 }, // 240 IIC_LOOPNE_WriteJump
  { 1, 37, 38, 0, 0 }, // 241 IIC_RET_WriteJumpLd
  { 1, 50, 51, 0, 0 }, // 242 IIC_LSL_RM_WriteSystem
  { 1, 72, 73, 0, 0 }, // 243 IIC_LSL_RR_WriteSystem
  { 1, 73, 74, 0, 0 }, // 244 IIC_LTR_WriteSystem
  { 1, 21, 22, 0, 0 }, // 245 IIC_XADD_LOCK_MEM_WriteALULd_WriteRMW
  { 0, 0, 0, 0, 0 }, // 246 IIC_XADD_LOCK_MEM8_WriteALULd_WriteRMW
  { 1, 16, 17, 0, 0 }, // 247 IIC_SSE_MASKMOV_WriteStore
  { 1, 5, 6, 0, 0 }, // 248 IIC_SSE_MFENCE_WriteFence
  { 1, 28, 29, 0, 0 }, // 249 IIC_MMX_CVT_PD_RM_WriteCvtF2ILd
  { 1, 2, 3, 0, 0 }, // 250 IIC_MMX_CVT_PD_RR_WriteCvtF2I
  { 0, 0, 0, 0, 0 }, // 251 WriteCvtI2FLd
  { 0, 0, 0, 0, 0 }, // 252 WriteCvtI2F
  { 1, 7, 9, 0, 0 }, // 253 IIC_MMX_CVT_PS_RM_WriteCvtF2ILd
  { 1, 9, 10, 0, 0 }, // 254 IIC_MMX_CVT_PS_RR_WriteCvtF2I
  { 1, 43, 44, 0, 0 }, // 255 IIC_MMX_EMMS
  { 1, 5, 6, 0, 0 }, // 256 IIC_MMX_MASKMOV_WriteShuffle
  { 1, 74, 75, 0, 0 }, // 257 IIC_MMX_MOV_REG_MM_WriteStore
  { 1, 74, 75, 0, 0 }, // 258 IIC_MMX_MOV_REG_MM_WriteMove
  { 1, 5, 6, 0, 0 }, // 259 IIC_MMX_MOV_MM_RM_WriteStore
  { 1, 5, 6, 0, 0 }, // 260 IIC_MMX_MOV_MM_RM_WriteLoad
  { 1, 5, 6, 0, 0 }, // 261 IIC_MMX_MOV_MM_RM_WriteMove
  { 1, 5, 6, 0, 0 }, // 262 IIC_MMX_MOVQ_RM_WriteLoad
  { 1, 4, 5, 0, 0 }, // 263 IIC_MMX_MOVQ_RR_WriteMove
  { 1, 5, 6, 0, 0 }, // 264 IIC_MMX_MOVQ_RM_WriteStore
  { 0, 0, 0, 0, 0 }, // 265 WriteMove
  { 1, 5, 6, 0, 0 }, // 266 IIC_MMX_ALU_RM_WriteVecALULd
  { 1, 4, 5, 0, 0 }, // 267 IIC_MMX_ALU_RR_WriteVecALU
  { 1, 5, 6, 0, 0 }, // 268 IIC_MMX_PCK_RM_WriteShuffleLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 269 IIC_MMX_PCK_RR_WriteShuffle
  { 1, 5, 6, 0, 0 }, // 270 IIC_MMX_ALU_RM_WriteVecALULd_ReadAfterLd
  { 1, 21, 22, 0, 0 }, // 271 IIC_MMX_ALUQ_RM_WriteVecALULd_ReadAfterLd
  { 1, 16, 17, 0, 0 }, // 272 IIC_MMX_ALUQ_RR_WriteVecALU
  { 0, 0, 0, 0, 0 }, // 273 WriteShuffleLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 274 WriteShuffle
  { 1, 5, 6, 0, 0 }, // 275 IIC_MMX_ALU_RM_WriteVecLogicLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 276 IIC_MMX_ALU_RR_WriteVecLogic
  { 1, 4, 5, 0, 0 }, // 277 IIC_MMX_MISC_FUNC_REG_WriteVecIMulLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 278 IIC_MMX_MISC_FUNC_MEM_WriteVecIMul
  { 1, 20, 21, 0, 0 }, // 279 IIC_MMX_PEXTR_WriteShuffle
  { 1, 6, 7, 0, 0 }, // 280 IIC_MMX_PHADDSUBW_RM_WriteVecALULd_ReadAfterLd
  { 1, 43, 44, 0, 0 }, // 281 IIC_MMX_PHADDSUBW_RR_WriteVecALU
  { 1, 20, 21, 0, 0 }, // 282 IIC_MMX_PHADDSUBD_RM_WriteVecALULd_ReadAfterLd
  { 1, 21, 22, 0, 0 }, // 283 IIC_MMX_PHADDSUBD_RR_WriteVecALU
  { 1, 5, 6, 0, 0 }, // 284 IIC_MMX_PINSRW_WriteShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 285 IIC_MMX_PINSRW_WriteShuffle
  { 1, 75, 76, 0, 0 }, // 286 IIC_MMX_PMUL_WriteVecIMulLd_ReadAfterLd
  { 1, 75, 76, 0, 0 }, // 287 IIC_MMX_PMUL_WriteVecIMul
  { 1, 20, 21, 0, 0 }, // 288 IIC_MMX_PSADBW_WriteVecIMulLd_ReadAfterLd
  { 1, 20, 21, 0, 0 }, // 289 IIC_MMX_PSADBW_WriteVecIMul
  { 1, 5, 6, 0, 0 }, // 290 IIC_MMX_PSHUF_WriteShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 291 IIC_MMX_PSHUF_WriteShuffle
  { 1, 5, 6, 0, 0 }, // 292 IIC_MMX_PSHUF_WriteShuffleLd
  { 1, 4, 5, 0, 0 }, // 293 IIC_MMX_SHIFT_RI_WriteVecShift
  { 1, 21, 22, 0, 0 }, // 294 IIC_MMX_SHIFT_RM_WriteVecShiftLd_ReadAfterLd
  { 1, 16, 17, 0, 0 }, // 295 IIC_MMX_SHIFT_RR_WriteVecShift
  { 1, 5, 6, 0, 0 }, // 296 IIC_MMX_UNPCK_H_RM_WriteShuffleLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 297 IIC_MMX_UNPCK_H_RR_WriteShuffle
  { 1, 5, 6, 0, 0 }, // 298 IIC_MMX_UNPCK_L_WriteShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 299 IIC_MMX_UNPCK_L_WriteShuffle
  { 0, 0, 0, 0, 0 }, // 300 IIC_SSE_MONITORX_WriteSystem
  { 1, 76, 77, 0, 0 }, // 301 IIC_SSE_MONITOR_WriteSystem
  { 1, 5, 6, 0, 0 }, // 302 IIC_MOV_MEM_WriteALU
  { 1, 5, 6, 0, 0 }, // 303 IIC_MOV_MEM_WriteStore
  { 1, 16, 17, 0, 0 }, // 304 IIC_MOV_MEM_SR_WriteMove
  { 1, 4, 5, 0, 0 }, // 305 IIC_MOV_WriteMove
  { 1, 5, 6, 0, 0 }, // 306 IIC_MOV_MEM_WriteLoad
  { 1, 5, 6, 0, 0 }, // 307 IIC_MOV_REG_SR_WriteMove
  { 1, 77, 78, 0, 0 }, // 308 IIC_MOV_SR_MEM_WriteMove
  { 1, 3, 4, 0, 0 }, // 309 IIC_MOV_SR_REG_WriteMove
  { 1, 78, 79, 0, 0 }, // 310 IIC_MOV_CR_REG_WriteSystem
  { 1, 79, 80, 0, 0 }, // 311 IIC_MOV_DR_REG_WriteSystem
  { 1, 4, 5, 0, 0 }, // 312 IIC_ALU_NONMEM_WriteZero
  { 1, 58, 59, 0, 0 }, // 313 IIC_MOV_REG_CR_WriteSystem
  { 1, 80, 81, 0, 0 }, // 314 IIC_MOV_REG_DR_WriteSystem
  { 1, 5, 6, 0, 0 }, // 315 IIC_SSE_MOVDQ_WriteLoad
  { 1, 5, 6, 0, 0 }, // 316 IIC_SSE_MOVDQ_WriteMove
  { 1, 5, 6, 0, 0 }, // 317 IIC_SSE_MOVA_P_MR_WriteStore
  { 1, 5, 6, 0, 0 }, // 318 IIC_SSE_MOVA_P_RM_WriteLoad
  { 1, 4, 5, 0, 0 }, // 319 IIC_SSE_MOVA_P_RR_WriteFShuffle
  { 1, 5, 6, 0, 0 }, // 320 IIC_MOVBE_WriteStore
  { 1, 5, 6, 0, 0 }, // 321 IIC_MOVBE_WriteALULd
  { 1, 5, 6, 0, 0 }, // 322 IIC_SSE_MOV_LH_WriteLoad
  { 1, 5, 6, 0, 0 }, // 323 IIC_SSE_MOV_LH_WriteFShuffle
  { 1, 4, 5, 0, 0 }, // 324 IIC_SSE_MOVA_P_RR_WriteMove
  { 1, 16, 17, 0, 0 }, // 325 IIC_SSE_MOVU_P_MR_WriteStore
  { 1, 21, 22, 0, 0 }, // 326 IIC_SSE_MOVU_P_RM_WriteLoad
  { 1, 4, 5, 0, 0 }, // 327 IIC_SSE_MOVU_P_RR_WriteMove
  { 1, 5, 6, 0, 0 }, // 328 IIC_SSE_MOV_LH_WriteStore
  { 1, 5, 6, 0, 0 }, // 329 IIC_SSE_MOV_LH_WriteFShuffleLd_ReadAfterLd
  { 1, 74, 75, 0, 0 }, // 330 IIC_SSE_MOVMSK_WriteVecLogic
  { 1, 5, 6, 0, 0 }, // 331 IIC_SSE_MOVNT_WriteStore
  { 1, 5, 6, 0, 0 }, // 332 IIC_SSE_MOVDQ_WriteStore
  { 1, 74, 75, 0, 0 }, // 333 IIC_SSE_MOVD_ToGP_WriteMove
  { 1, 4, 5, 0, 0 }, // 334 IIC_SSE_MOVQ_RR_WriteVecLogic
  { 1, 21, 22, 0, 0 }, // 335 IIC_MOVS_WriteMicrocoded
  { 1, 5, 6, 0, 0 }, // 336 IIC_SSE_MOV_S_MR_WriteStore
  { 1, 5, 6, 0, 0 }, // 337 IIC_SSE_MOV_S_RM_WriteLoad
  { 1, 4, 5, 0, 0 }, // 338 IIC_SSE_MOV_S_RR_WriteFShuffle
  { 1, 21, 22, 0, 0 }, // 339 IIC_MOVSX_R16_M8_WriteALULd
  { 1, 16, 17, 0, 0 }, // 340 IIC_MOVSX_R16_R8_WriteALU
  { 1, 5, 6, 0, 0 }, // 341 IIC_MOVSX_WriteALULd
  { 1, 5, 6, 0, 0 }, // 342 IIC_MOVSX_WriteALU
  { 1, 4, 5, 0, 0 }, // 343 IIC_SSE_MOVU_P_RR_WriteFShuffle
  { 1, 21, 22, 0, 0 }, // 344 IIC_MOVZX_R16_M8_WriteALULd
  { 1, 16, 17, 0, 0 }, // 345 IIC_MOVZX_R16_R8_WriteALU
  { 1, 5, 6, 0, 0 }, // 346 IIC_MOVZX_WriteALULd
  { 1, 5, 6, 0, 0 }, // 347 IIC_MOVZX_WriteALU
  { 0, 0, 0, 0, 0 }, // 348 IIC_SSE_MPSADBW_RM_WriteMPSADLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 349 IIC_SSE_MPSADBW_RR_WriteMPSAD
  { 1, 28, 29, 0, 0 }, // 350 IIC_MUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 2, 3, 0, 0 }, // 351 IIC_MUL16_REG_WriteIMul
  { 1, 2, 3, 0, 0 }, // 352 IIC_MUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 6, 7, 0, 0 }, // 353 IIC_MUL32_REG_WriteIMul
  { 1, 58, 59, 0, 0 }, // 354 IIC_MUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 58, 59, 0, 0 }, // 355 IIC_MUL64_WriteIMul
  { 1, 2, 3, 0, 0 }, // 356 IIC_MUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd
  { 1, 2, 3, 0, 0 }, // 357 IIC_MUL8_WriteIMul
  { 1, 26, 27, 0, 0 }, // 358 IIC_SSE_MUL_F64P_RM_WriteFMulLd_ReadAfterLd
  { 1, 14, 15, 0, 0 }, // 359 IIC_SSE_MUL_F64P_RR_WriteFMul
  { 1, 57, 58, 0, 0 }, // 360 IIC_SSE_MUL_F32P_RR_WriteFMul
  { 1, 57, 58, 0, 0 }, // 361 IIC_SSE_MUL_F64S_RM_WriteFMulLd_ReadAfterLd
  { 1, 57, 58, 0, 0 }, // 362 IIC_SSE_MUL_F64S_RR_WriteFMul
  { 1, 75, 76, 0, 0 }, // 363 IIC_SSE_MUL_F32S_RR_WriteFMul
  { 1, 2, 3, 0, 0 }, // 364 IIC_MUL8_WriteIMulLd_WriteIMulH
  { 1, 2, 3, 0, 0 }, // 365 IIC_MUL8_WriteIMul_WriteIMulH
  { 0, 0, 0, 0, 0 }, // 366 WriteFMulLd
  { 0, 0, 0, 0, 0 }, // 367 WriteFMul
  { 0, 0, 0, 0, 0 }, // 368 IIC_SSE_MWAITX_WriteSystem
  { 1, 50, 51, 0, 0 }, // 369 IIC_SSE_MWAIT_WriteSystem
  { 1, 4, 5, 0, 0 }, // 370 IIC_NOP_WriteZero
  { 1, 81, 82, 0, 0 }, // 371 IIC_OUT_IR_WriteSystem
  { 1, 32, 33, 0, 0 }, // 372 IIC_OUT_RR_WriteSystem
  { 1, 82, 83, 0, 0 }, // 373 IIC_OUTS_WriteSystem
  { 1, 5, 6, 0, 0 }, // 374 IIC_SSE_PABS_RM_WriteVecALULd
  { 1, 4, 5, 0, 0 }, // 375 IIC_SSE_PABS_RR_WriteVecALU
  { 1, 5, 6, 0, 0 }, // 376 IIC_SSE_INTALU_P_RM_WriteVecALULd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 377 IIC_SSE_INTALU_P_RR_WriteVecALU
  { 1, 21, 22, 0, 0 }, // 378 IIC_SSE_INTALUQ_P_RM_WriteVecALULd_ReadAfterLd
  { 1, 16, 17, 0, 0 }, // 379 IIC_SSE_INTALUQ_P_RR_WriteVecALU
  { 1, 5, 6, 0, 0 }, // 380 IIC_SSE_PALIGNRM_WriteShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 381 IIC_SSE_PALIGNRR_WriteShuffle
  { 1, 5, 6, 0, 0 }, // 382 IIC_SSE_BIT_P_RM_WriteVecLogicLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 383 IIC_SSE_BIT_P_RR_WriteVecLogic
  { 1, 71, 72, 0, 0 }, // 384 IIC_SSE_PAUSE_WriteNop
  { 1, 5, 6, 0, 0 }, // 385 IIC_ALU_MEM_WriteVarBlendLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 386 IIC_ALU_NONMEM_WriteVarBlend
  { 1, 5, 6, 0, 0 }, // 387 IIC_SSE_INTALU_P_RM_WriteBlendLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 388 IIC_SSE_INTALU_P_RR_WriteBlend
  { 0, 0, 0, 0, 0 }, // 389 IIC_SSE_PCLMULQDQ_RM_WriteCLMulLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 390 IIC_SSE_PCLMULQDQ_RR_WriteCLMul
  { 0, 0, 0, 0, 0 }, // 391 WriteVecALULd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 392 WriteVecALU
  { 0, 0, 0, 0, 0 }, // 393 WritePCmpEStrILd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 394 WritePCmpEStrI
  { 0, 0, 0, 0, 0 }, // 395 WritePCmpEStrMLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 396 WritePCmpEStrM
  { 0, 0, 0, 0, 0 }, // 397 WritePCmpIStrILd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 398 WritePCmpIStrI
  { 0, 0, 0, 0, 0 }, // 399 WritePCmpIStrMLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 400 WritePCmpIStrM
  { 0, 0, 0, 0, 0 }, // 401 WriteShuffleLd_WriteRMW
  { 1, 20, 21, 0, 0 }, // 402 IIC_SSE_PEXTRW_WriteShuffleLd_ReadAfterLd
  { 1, 20, 21, 0, 0 }, // 403 IIC_SSE_PHADDSUBD_RM_WritePHAddLd_ReadAfterLd
  { 1, 21, 22, 0, 0 }, // 404 IIC_SSE_PHADDSUBD_RR_WritePHAdd
  { 0, 0, 0, 0, 0 }, // 405 WritePHAddLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 406 WritePHAdd
  { 1, 28, 29, 0, 0 }, // 407 IIC_SSE_PHADDSUBW_RM_WritePHAddLd_ReadAfterLd
  { 1, 2, 3, 0, 0 }, // 408 IIC_SSE_PHADDSUBW_RR_WritePHAdd
  { 0, 0, 0, 0, 0 }, // 409 WriteVecIMulLd
  { 0, 0, 0, 0, 0 }, // 410 WriteVecIMul
  { 1, 5, 6, 0, 0 }, // 411 IIC_SSE_PINSRW_WriteShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 412 IIC_SSE_PINSRW_WriteShuffle
  { 1, 57, 58, 0, 0 }, // 413 IIC_SSE_PMADD_WriteVecIMulLd_ReadAfterLd
  { 1, 57, 58, 0, 0 }, // 414 IIC_SSE_PMADD_WriteVecIMul
  { 0, 0, 0, 0, 0 }, // 415 WriteVecIMulLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 416 IIC_SSE_INTALU_P_RM_WriteShuffleLd
  { 1, 4, 5, 0, 0 }, // 417 IIC_SSE_INTALU_P_RR_WriteShuffle
  { 1, 57, 58, 0, 0 }, // 418 IIC_SSE_PMULHRSW_WriteVecIMulLd_ReadAfterLd
  { 1, 57, 58, 0, 0 }, // 419 IIC_SSE_PMULHRSW_WriteVecIMul
  { 1, 57, 58, 0, 0 }, // 420 IIC_SSE_INTMUL_P_RM_WriteVecIMulLd_ReadAfterLd
  { 1, 57, 58, 0, 0 }, // 421 IIC_SSE_INTMUL_P_RR_WriteVecIMul
  { 1, 16, 17, 0, 0 }, // 422 IIC_POP_REG16_WriteLoad
  { 1, 21, 22, 0, 0 }, // 423 IIC_POP_MEM_WriteRMW
  { 1, 18, 20, 0, 0 }, // 424 IIC_POP_REG_WriteLoad
  { 1, 14, 15, 0, 0 }, // 425 IIC_POP_A_WriteLoad
  { 0, 0, 0, 0, 0 }, // 426 IIC_SSE_POPCNT_RM_WriteFAddLd
  { 0, 0, 0, 0, 0 }, // 427 IIC_SSE_POPCNT_RR_WriteFAdd
  { 1, 83, 84, 0, 0 }, // 428 IIC_POP_SR_WriteSystem
  { 1, 38, 39, 0, 0 }, // 429 IIC_POP_F_WriteLoad
  { 1, 77, 78, 0, 0 }, // 430 IIC_POP_FD_WriteLoad
  { 1, 84, 85, 0, 0 }, // 431 IIC_POP_SR_SS_WriteSystem
  { 1, 43, 44, 0, 0 }, // 432 IIC_SSE_PSHUFB_RM_WriteShuffleLd_ReadAfterLd
  { 1, 20, 21, 0, 0 }, // 433 IIC_SSE_PSHUFB_RR_WriteShuffle
  { 1, 5, 6, 0, 0 }, // 434 IIC_SSE_PSHUF_MI_WriteShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 435 IIC_SSE_PSHUF_RI_WriteShuffle
  { 1, 4, 5, 0, 0 }, // 436 IIC_SSE_INTSHDQ_P_RI_WriteVecShift
  { 1, 4, 5, 0, 0 }, // 437 IIC_SSE_INTSH_P_RI_WriteVecShift
  { 1, 21, 22, 0, 0 }, // 438 IIC_SSE_INTSH_P_RM_WriteVecShiftLd_ReadAfterLd
  { 1, 16, 17, 0, 0 }, // 439 IIC_SSE_INTSH_P_RR_WriteVecShift
  { 1, 5, 6, 0, 0 }, // 440 IIC_SSE_UNPCK_WriteShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 441 IIC_SSE_UNPCK_WriteShuffle
  { 1, 18, 20, 0, 0 }, // 442 IIC_PUSH_IMM_WriteStore
  { 1, 18, 20, 0, 0 }, // 443 IIC_PUSH_REG_WriteStore
  { 1, 16, 17, 0, 0 }, // 444 IIC_PUSH_MEM_WriteRMW
  { 1, 28, 29, 0, 0 }, // 445 IIC_PUSH_A_WriteStore
  { 1, 16, 17, 0, 0 }, // 446 IIC_PUSH_SR_WriteSystem
  { 1, 16, 17, 0, 0 }, // 447 IIC_PUSH_CS_WriteSystem
  { 1, 14, 15, 0, 0 }, // 448 IIC_PUSH_F_WriteStore
  { 1, 5, 6, 0, 0 }, // 449 IIC_SR_WriteShiftLd_WriteRMW
  { 1, 5, 6, 0, 0 }, // 450 IIC_SR_WriteShift
  { 1, 26, 27, 0, 0 }, // 451 IIC_SSE_RCPP_RM_WriteFRcpLd
  { 1, 14, 15, 0, 0 }, // 452 IIC_SSE_RCPP_RR_WriteFRcp
  { 1, 75, 76, 0, 0 }, // 453 IIC_SSE_RCPS_RM_WriteFRcpLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 454 WriteFRcpLd_ReadAfterLd
  { 1, 75, 76, 0, 0 }, // 455 IIC_SSE_RCPS_RR_WriteFRcp
  { 0, 0, 0, 0, 0 }, // 456 WriteRMW
  { 1, 85, 86, 0, 0 }, // 457 IIC_RDMSR_WriteSystem
  { 1, 50, 51, 0, 0 }, // 458 IIC_RDPMC_WriteSystem
  { 1, 86, 87, 0, 0 }, // 459 IIC_RDTSC_WriteSystem
  { 1, 87, 88, 0, 0 }, // 460 IIC_REP_MOVS_WriteMicrocoded
  { 1, 82, 83, 0, 0 }, // 461 IIC_REP_STOS_WriteMicrocoded
  { 1, 18, 20, 0, 0 }, // 462 IIC_RET_IMM_WriteJumpLd
  { 0, 0, 0, 0, 0 }, // 463 WriteShiftLd
  { 0, 0, 0, 0, 0 }, // 464 WriteShift
  { 0, 0, 0, 0, 0 }, // 465 IIC_SSE_ROUNDPS_REG_WriteFAddLd
  { 0, 0, 0, 0, 0 }, // 466 IIC_SSE_ROUNDPS_REG_WriteFAdd
  { 0, 0, 0, 0, 0 }, // 467 IIC_SSE_ROUNDPS_MEM_WriteFAddLd
  { 0, 0, 0, 0, 0 }, // 468 WriteFAddLd_ReadAfterLd
  { 1, 88, 89, 0, 0 }, // 469 IIC_RSM_WriteSystem
  { 1, 26, 27, 0, 0 }, // 470 IIC_SSE_RSQRTPS_RM_WriteFRsqrtLd
  { 1, 14, 15, 0, 0 }, // 471 IIC_SSE_RSQRTPS_RR_WriteFRsqrt
  { 1, 75, 76, 0, 0 }, // 472 IIC_SSE_RSQRTSS_RM_WriteFRsqrtLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 473 WriteFRsqrtLd_ReadAfterLd
  { 1, 75, 76, 0, 0 }, // 474 IIC_SSE_RSQRTSS_RR_WriteFRsqrt
  { 0, 0, 0, 0, 0 }, // 475 WriteShiftLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd
  { 1, 16, 17, 0, 0 }, // 476 IIC_SCAS_WriteMicrocoded
  { 1, 16, 17, 0, 0 }, // 477 IIC_SET_M_WriteALU_WriteStore
  { 1, 4, 5, 0, 0 }, // 478 IIC_SET_R_WriteALU
  { 1, 5, 6, 0, 0 }, // 479 IIC_SSE_SFENCE_WriteFence
  { 1, 20, 21, 0, 0 }, // 480 IIC_SGDT_WriteSystem
  { 1, 6, 7, 0, 0 }, // 481 IIC_SHD16_MEM_CL_WriteShiftLd_WriteRMW
  { 1, 6, 7, 0, 0 }, // 482 IIC_SHD16_MEM_IM_WriteShiftLd_WriteRMW
  { 1, 6, 7, 0, 0 }, // 483 IIC_SHD16_REG_CL_WriteShift
  { 1, 6, 7, 0, 0 }, // 484 IIC_SHD16_REG_IM_WriteShift
  { 1, 20, 21, 0, 0 }, // 485 IIC_SHD32_MEM_CL_WriteShiftLd_WriteRMW
  { 1, 20, 21, 0, 0 }, // 486 IIC_SHD32_MEM_IM_WriteShiftLd_WriteRMW
  { 1, 16, 17, 0, 0 }, // 487 IIC_SHD32_REG_CL_WriteShift
  { 1, 16, 17, 0, 0 }, // 488 IIC_SHD32_REG_IM_WriteShift
  { 1, 14, 15, 0, 0 }, // 489 IIC_SHD64_MEM_CL_WriteShiftLd_WriteRMW
  { 1, 14, 15, 0, 0 }, // 490 IIC_SHD64_MEM_IM_WriteShiftLd_WriteRMW
  { 1, 28, 29, 0, 0 }, // 491 IIC_SHD64_REG_CL_WriteShift
  { 1, 14, 15, 0, 0 }, // 492 IIC_SHD64_REG_IM_WriteShift
  { 1, 5, 6, 0, 0 }, // 493 IIC_SSE_SHUFP_WriteFShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 494 IIC_SSE_SHUFP_WriteFShuffle
  { 1, 20, 21, 0, 0 }, // 495 IIC_SIDT_WriteSystem
  { 1, 21, 22, 0, 0 }, // 496 IIC_SLDT_WriteSystem
  { 1, 14, 15, 0, 0 }, // 497 IIC_SMSW_WriteSystem
  { 1, 33, 34, 0, 0 }, // 498 IIC_SSE_SQRTPD_RM_WriteFSqrtLd
  { 1, 33, 34, 0, 0 }, // 499 IIC_SSE_SQRTPD_RR_WriteFSqrt
  { 1, 34, 35, 0, 0 }, // 500 IIC_SSE_SQRTPS_RM_WriteFSqrtLd
  { 1, 34, 35, 0, 0 }, // 501 IIC_SSE_SQRTPS_RR_WriteFSqrt
  { 1, 35, 36, 0, 0 }, // 502 IIC_SSE_SQRTSD_RM_WriteFSqrtLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 503 WriteFSqrtLd_ReadAfterLd
  { 1, 35, 36, 0, 0 }, // 504 IIC_SSE_SQRTSD_RR_WriteFSqrt
  { 1, 36, 37, 0, 0 }, // 505 IIC_SSE_SQRTSS_RM_WriteFSqrtLd_ReadAfterLd
  { 1, 36, 37, 0, 0 }, // 506 IIC_SSE_SQRTSS_RR_WriteFSqrt
  { 0, 0, 0, 0, 0 }, // 507 WriteFSqrt
  { 1, 4, 5, 0, 0 }, // 508 IIC_STC_WriteALU
  { 1, 3, 4, 0, 0 }, // 509 IIC_STD_WriteALU
  { 1, 71, 72, 0, 0 }, // 510 IIC_STI_WriteALU
  { 1, 17, 18, 0, 0 }, // 511 IIC_SSE_STMXCSR_WriteStore
  { 1, 4, 5, 0, 0 }, // 512 IIC_STOS_WriteMicrocoded
  { 1, 21, 22, 0, 0 }, // 513 IIC_STR_WriteSystem
  { 1, 43, 44, 0, 0 }, // 514 IIC_FST80_WriteStore
  { 1, 16, 17, 0, 0 }, // 515 IIC_FST_WriteMove
  { 1, 24, 25, 0, 0 }, // 516 IIC_SWAPGS_WriteSystem
  { 1, 89, 90, 0, 0 }, // 517 IIC_SYSCALL_WriteSystem
  { 1, 80, 81, 0, 0 }, // 518 IIC_SYS_ENTER_EXIT_WriteSystem
  { 1, 15, 16, 0, 0 }, // 519 IIC_JMP_REL_WriteJumpLd
  { 1, 16, 17, 0, 0 }, // 520 IIC_JMP_MEM_WriteJump
  { 1, 15, 16, 0, 0 }, // 521 IIC_JMP_REG_WriteJumpLd
  { 0, 0, 0, 0, 0 }, // 522 WriteJump
  { 1, 14, 15, 0, 0 }, // 523 IIC_FUCOMI_WriteFAdd
  { 1, 15, 16, 0, 0 }, // 524 IIC_FUCOM_WriteFAdd
  { 1, 5, 6, 0, 0 }, // 525 IIC_SSE_UNPCK_WriteFShuffleLd_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 526 IIC_SSE_UNPCK_WriteFShuffle
  { 1, 7, 9, 0, 0 }, // 527 IIC_SSE_ALU_F64S_RM
  { 1, 9, 10, 0, 0 }, // 528 IIC_SSE_ALU_F64S_RR
  { 1, 7, 9, 0, 0 }, // 529 IIC_SSE_ALU_F32S_RM
  { 1, 9, 10, 0, 0 }, // 530 IIC_SSE_ALU_F32S_RR
  { 0, 0, 0, 0, 0 }, // 531 WriteFVarBlendLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 532 WriteFVarBlend
  { 0, 0, 0, 0, 0 }, // 533 WriteFShuffleLd
  { 0, 0, 0, 0, 0 }, // 534 WriteFShuffle256
  { 0, 0, 0, 0, 0 }, // 535 WriteFShuffle
  { 1, 7, 9, 0, 0 }, // 536 IIC_SSE_ALU_F32P_RM
  { 0, 0, 0, 0, 0 }, // 537 WriteCvtF2ILd
  { 0, 0, 0, 0, 0 }, // 538 WriteCvtF2I
  { 0, 0, 0, 0, 0 }, // 539 WriteCvtF2FLd
  { 0, 0, 0, 0, 0 }, // 540 WriteCvtF2F
  { 0, 0, 0, 0, 0 }, // 541 WriteCvtF2FLd_WriteRMW
  { 0, 0, 0, 0, 0 }, // 542 WriteCvtF2FLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 543 WriteCvtI2FLd_ReadAfterLd
  { 1, 35, 36, 0, 0 }, // 544 IIC_SSE_DIV_F64S_RM
  { 1, 35, 36, 0, 0 }, // 545 IIC_SSE_DIV_F64S_RR
  { 1, 36, 37, 0, 0 }, // 546 IIC_SSE_DIV_F32S_RR
  { 1, 90, 91, 0, 0 }, // 547 IIC_VERR_WriteSystem
  { 1, 91, 92, 0, 0 }, // 548 IIC_VERW_REG_WriteSystem
  { 1, 30, 31, 0, 0 }, // 549 IIC_VERW_MEM_WriteSystem
  { 0, 0, 0, 0, 0 }, // 550 WriteStore
  { 0, 0, 0, 0, 0 }, // 551 WriteShuffle256
  { 1, 5, 6, 0, 0 }, // 552 IIC_ALU_MEM_WriteFBlendLd_WriteRMW
  { 0, 0, 0, 0, 0 }, // 553 WriteFShuffleLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 554 WriteShuffle256Ld_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 555 IIC_ALU_MEM_WriteFShuffleLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 556 IIC_ALU_NONMEM_WriteFShuffle
  { 1, 5, 6, 0, 0 }, // 557 IIC_SSE_MOVDQ
  { 1, 5, 6, 0, 0 }, // 558 IIC_SSE_MOV_LH
  { 1, 74, 75, 0, 0 }, // 559 IIC_SSE_MOVD_ToGP
  { 1, 5, 6, 0, 0 }, // 560 IIC_SSE_MOV_S_MR
  { 1, 5, 6, 0, 0 }, // 561 IIC_SSE_MOV_S_RM
  { 1, 4, 5, 0, 0 }, // 562 IIC_SSE_MOV_S_RR
  { 1, 4, 5, 0, 0 }, // 563 IIC_SSE_MOVQ_RR
  { 1, 5, 6, 0, 0 }, // 564 IIC_ALU_MEM_WriteMPSADLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 565 IIC_ALU_NONMEM_WriteMPSAD
  { 1, 57, 58, 0, 0 }, // 566 IIC_SSE_MUL_F64S_RM
  { 1, 57, 58, 0, 0 }, // 567 IIC_SSE_MUL_F64S_RR
  { 1, 75, 76, 0, 0 }, // 568 IIC_SSE_MUL_F32S_RR
  { 0, 0, 0, 0, 0 }, // 569 WriteVecALULd
  { 1, 5, 6, 0, 0 }, // 570 IIC_SSE_BIT_P_RM
  { 1, 4, 5, 0, 0 }, // 571 IIC_SSE_BIT_P_RR
  { 0, 0, 0, 0, 0 }, // 572 WriteBlendLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 573 WriteBlend
  { 0, 0, 0, 0, 0 }, // 574 WriteVarBlendLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 575 WriteVarBlend
  { 1, 5, 6, 0, 0 }, // 576 IIC_ALU_MEM_WriteBlendLd_ReadAfterLd
  { 1, 4, 5, 0, 0 }, // 577 IIC_ALU_NONMEM_WriteBlend
  { 0, 0, 0, 0, 0 }, // 578 WriteCLMulLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 579 WriteCLMul
  { 1, 9, 10, 0, 0 }, // 580 IIC_SSE_ALU_F32P_RR
  { 0, 0, 0, 0, 0 }, // 581 WriteFShuffle256Ld_ReadAfterLd
  { 1, 5, 6, 0, 0 }, // 582 IIC_ALU_MEM_WriteShuffleLd
  { 1, 4, 5, 0, 0 }, // 583 IIC_ALU_NONMEM_WriteShuffle
  { 0, 0, 0, 0, 0 }, // 584 WriteVarVecShift_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 585 WriteVarVecShift
  { 1, 5, 6, 0, 0 }, // 586 IIC_SSE_PSHUF_MI_WriteShuffleLd
  { 0, 0, 0, 0, 0 }, // 587 WriteVarVecShiftLd_ReadAfterLd
  { 0, 0, 0, 0, 0 }, // 588 WriteFRcpLd
  { 0, 0, 0, 0, 0 }, // 589 WriteFRsqrtLd
  { 0, 0, 0, 0, 0 }, // 590 WriteFSqrtLd
  { 1, 4, 5, 0, 0 }, // 591 IIC_WAIT_WriteMicrocoded
  { 1, 92, 93, 0, 0 }, // 592 IIC_WRMSR_WriteSystem
  { 1, 21, 22, 0, 0 }, // 593 IIC_XADD_MEM_WriteALULd_WriteRMW
  { 1, 16, 17, 0, 0 }, // 594 IIC_XADD_REG_WriteALU
  { 1, 16, 17, 0, 0 }, // 595 IIC_XCHG_REG_WriteALU
  { 1, 21, 22, 0, 0 }, // 596 IIC_XCHG_MEM_WriteALULd_WriteRMW
  { 1, 18, 20, 0, 0 }, // 597 IIC_FXCH_WriteMove
  { 1, 6, 7, 0, 0 }, // 598 IIC_XLAT_WriteLoad
  { 1, 5, 6, 0, 0 }, // 599 MOV16rm
  { 1, 5, 6, 0, 0 }, // 600 MOVSX32rm16_MOVSX32rm8
  { 1, 5, 6, 0, 0 }, // 601 MOVZX32rm16_MOVZX32rm8
  { 1, 4, 5, 0, 0 }, // 602 CMOVA16rr_CMOVAE16rr_CMOVB16rr_CMOVBE16rr_CMOVE16rr_CMOVG16rr_CMOVGE16rr_CMOVL16rr_CMOVLE16rr_CMOVNE16rr_CMOVNO16rr_CMOVNP16rr_CMOVNS16rr_CMOVO16rr_CMOVP16rr_CMOVS16rr
  { 1, 4, 5, 0, 0 }, // 603 CMOVA32rr_CMOVA64rr_CMOVAE32rr_CMOVAE64rr_CMOVB32rr_CMOVB64rr_CMOVBE32rr_CMOVBE64rr_CMOVE32rr_CMOVE64rr_CMOVG32rr_CMOVG64rr_CMOVGE32rr_CMOVGE64rr_CMOVL32rr_CMOVL64rr_CMOVLE32rr_CMOVLE64rr_CMOVNE32rr_CMOVNE64rr_CMOVNO32rr_CMOVNO64rr_CMOVNP32rr_CMOVNP64rr_CMOVNS32rr_CMOVNS64rr_CMOVO32rr_CMOVO64rr_CMOVP32rr_CMOVP64rr_CMOVS32rr_CMOVS64rr
  { 1, 5, 6, 0, 0 }, // 604 CMOVA16rm_CMOVAE16rm_CMOVB16rm_CMOVBE16rm_CMOVE16rm_CMOVG16rm_CMOVGE16rm_CMOVL16rm_CMOVLE16rm_CMOVNE16rm_CMOVNO16rm_CMOVNP16rm_CMOVNS16rm_CMOVO16rm_CMOVP16rm_CMOVS16rm
  { 1, 5, 6, 0, 0 }, // 605 CMOVA32rm_CMOVA64rm_CMOVAE32rm_CMOVAE64rm_CMOVB32rm_CMOVB64rm_CMOVBE32rm_CMOVBE64rm_CMOVE32rm_CMOVE64rm_CMOVG32rm_CMOVG64rm_CMOVGE32rm_CMOVGE64rm_CMOVL32rm_CMOVL64rm_CMOVLE32rm_CMOVLE64rm_CMOVNE32rm_CMOVNE64rm_CMOVNO32rm_CMOVNO64rm_CMOVNP32rm_CMOVNP64rm_CMOVNS32rm_CMOVNS64rm_CMOVO32rm_CMOVO64rm_CMOVP32rm_CMOVP64rm_CMOVS32rm_CMOVS64rm
  { 1, 16, 17, 0, 0 }, // 606 XCHG16ar_XCHG16rr_XCHG32ar_XCHG32ar64_XCHG32rr_XCHG64ar_XCHG64rr_XCHG8rr
  { 1, 21, 22, 0, 0 }, // 607 XCHG16rm_XCHG32rm_XCHG64rm_XCHG8rm
  { 1, 6, 7, 0, 0 }, // 608 XLAT
  { 1, 16, 17, 0, 0 }, // 609 PUSH16rmm_PUSH32rmm
  { 1, 14, 15, 0, 0 }, // 610 PUSHF16_PUSHF32
  { 1, 28, 29, 0, 0 }, // 611 PUSHA16_PUSHA32
  { 1, 21, 22, 0, 0 }, // 612 POP16rmm_POP32rmm
  { 1, 38, 39, 0, 0 }, // 613 POPF16
  { 1, 77, 78, 0, 0 }, // 614 POPF32
  { 1, 14, 15, 0, 0 }, // 615 POPA16_POPA32
  { 1, 4, 5, 0, 0 }, // 616 LAHF_SAHF
  { 1, 5, 6, 0, 0 }, // 617 BSWAP32r
  { 1, 5, 6, 0, 0 }, // 618 BSWAP64r
  { 1, 5, 6, 0, 0 }, // 619 MOVBE16rm_MOVBE64rm
  { 1, 5, 6, 0, 0 }, // 620 MOVBE32rm
  { 1, 5, 6, 0, 0 }, // 621 MOVBE16mr
  { 1, 5, 6, 0, 0 }, // 622 MOVBE32mr
  { 1, 5, 6, 0, 0 }, // 623 MOVBE64mr
  { 1, 5, 6, 0, 0 }, // 624 ADD16mi_ADD16mi8_ADD16mr_ADD32mi_ADD32mi8_ADD32mr_ADD64mi32_ADD64mi8_ADD64mr_ADD8mi_ADD8mi8_ADD8mr_SUB16mi_SUB16mi8_SUB16mr_SUB32mi_SUB32mi8_SUB32mr_SUB64mi32_SUB64mi8_SUB64mr_SUB8mi_SUB8mi8_SUB8mr
  { 1, 4, 5, 0, 0 }, // 625 ADC16ri_ADC16ri8_ADC16rr_ADC16rr_REV_ADC32ri_ADC32ri8_ADC32rr_ADC32rr_REV_ADC64ri32_ADC64ri8_ADC64rr_ADC64rr_REV_ADC8ri_ADC8ri8_ADC8rr_ADC8rr_REV_SBB16ri_SBB16ri8_SBB16rr_SBB16rr_REV_SBB32ri_SBB32ri8_SBB32rr_SBB32rr_REV_SBB64ri32_SBB64ri8_SBB64rr_SBB64rr_REV_SBB8ri_SBB8ri8_SBB8rr_SBB8rr_REV
  { 1, 5, 6, 0, 0 }, // 626 ADC16rm_ADC32rm_ADC64rm_ADC8rm_SBB16rm_SBB32rm_SBB64rm_SBB8rm
  { 1, 5, 6, 0, 0 }, // 627 ADC16mi_ADC16mi8_ADC16mr_ADC32mi_ADC32mi8_ADC32mr_ADC64mi32_ADC64mi8_ADC64mr_ADC8mi_ADC8mi8_ADC8mr_SBB16mi_SBB16mi8_SBB16mr_SBB32mi_SBB32mi8_SBB32mr_SBB64mi32_SBB64mi8_SBB64mr_SBB8mi_SBB8mi8_SBB8mr
  { 1, 5, 6, 0, 0 }, // 628 DEC16m_DEC32m_DEC64m_DEC8m_INC16m_INC32m_INC64m_INC8m_NEG16m_NEG32m_NEG64m_NEG8m_NOT16m_NOT32m_NOT64m_NOT8m
  { 1, 6, 7, 0, 0 }, // 629 IMUL16r_IMUL16rr
  { 1, 2, 3, 0, 0 }, // 630 IMUL16rm
  { 1, 2, 3, 0, 0 }, // 631 IMUL16rmi_IMUL16rmi8
  { 1, 6, 7, 0, 0 }, // 632 IMUL16rri_IMUL16rri8
  { 1, 2, 3, 0, 0 }, // 633 MUL16r
  { 1, 28, 29, 0, 0 }, // 634 IMUL16m
  { 1, 28, 29, 0, 0 }, // 635 MUL16m
  { 1, 57, 58, 0, 0 }, // 636 IMUL32r_IMUL32rr
  { 1, 57, 58, 0, 0 }, // 637 IMUL32rm
  { 1, 57, 58, 0, 0 }, // 638 IMUL32rmi_IMUL32rmi8
  { 1, 57, 58, 0, 0 }, // 639 IMUL32rri_IMUL32rri8
  { 1, 6, 7, 0, 0 }, // 640 MUL32r
  { 1, 2, 3, 0, 0 }, // 641 IMUL32m
  { 1, 2, 3, 0, 0 }, // 642 MUL32m
  { 1, 58, 59, 0, 0 }, // 643 IMUL64r_IMUL64rr
  { 1, 58, 59, 0, 0 }, // 644 IMUL64rm
  { 1, 22, 23, 0, 0 }, // 645 IMUL64rmi32_IMUL64rmi8
  { 1, 22, 23, 0, 0 }, // 646 IMUL64rri32_IMUL64rri8
  { 1, 58, 59, 0, 0 }, // 647 MUL64r
  { 1, 58, 59, 0, 0 }, // 648 IMUL64m
  { 1, 58, 59, 0, 0 }, // 649 MUL64m
  { 1, 2, 3, 0, 0 }, // 650 MULX32rr
  { 1, 2, 3, 0, 0 }, // 651 MULX32rm
  { 1, 2, 3, 0, 0 }, // 652 MULX64rr
  { 1, 2, 3, 0, 0 }, // 653 MULX64rm
  { 1, 30, 31, 0, 0 }, // 654 DIV8r
  { 1, 30, 31, 0, 0 }, // 655 DIV16r
  { 1, 30, 31, 0, 0 }, // 656 DIV32r
  { 1, 31, 32, 0, 0 }, // 657 DIV64r
  { 1, 35, 36, 0, 0 }, // 658 IDIV8r
  { 1, 35, 36, 0, 0 }, // 659 IDIV16r
  { 1, 35, 36, 0, 0 }, // 660 IDIV32r
  { 1, 31, 32, 0, 0 }, // 661 IDIV64r
  { 1, 5, 6, 0, 0 }, // 662 AND16mi_AND16mi8_AND16mr_AND32mi_AND32mi8_AND32mr_AND64mi32_AND64mi8_AND64mr_AND8mi_AND8mi8_AND8mr_OR16mi_OR16mi8_OR16mr_OR32mi_OR32mi8_OR32mr_OR64mi32_OR64mi8_OR64mr_OR8mi_OR8mi8_OR8mr_XOR16mi_XOR16mi8_XOR16mr_XOR32mi_XOR32mi8_XOR32mr_XOR64mi32_XOR64mi8_XOR64mr_XOR8mi_XOR8mi8_XOR8mr
  { 1, 5, 6, 0, 0 }, // 663 OR32mrLocked
  { 1, 5, 6, 0, 0 }, // 664 SAR16m1_SAR16mi_SAR32m1_SAR32mi_SAR64m1_SAR64mi_SAR8m1_SAR8mi_SHL16m1_SHL16mi_SHL32m1_SHL32mi_SHL64m1_SHL64mi_SHL8m1_SHL8mi_SHR16m1_SHR16mi_SHR32m1_SHR32mi_SHR64m1_SHR64mi_SHR8m1_SHR8mi
  { 1, 5, 6, 0, 0 }, // 665 SAR16rCL_SAR32rCL_SAR64rCL_SAR8rCL_SHL16rCL_SHL32rCL_SHL64rCL_SHL8rCL_SHR16rCL_SHR32rCL_SHR64rCL_SHR8rCL
  { 1, 5, 6, 0, 0 }, // 666 SAR16mCL_SAR32mCL_SAR64mCL_SAR8mCL_SHL16mCL_SHL32mCL_SHL64mCL_SHL8mCL_SHR16mCL_SHR32mCL_SHR64mCL_SHR8mCL
  { 1, 5, 6, 0, 0 }, // 667 ROL16r1_ROL32r1_ROL64r1_ROL8r1_ROR16r1_ROR32r1_ROR64r1_ROR8r1
  { 1, 5, 6, 0, 0 }, // 668 ROL16mi_ROL32mi_ROL64mi_ROL8mi_ROR16mi_ROR32mi_ROR64mi_ROR8mi
  { 1, 5, 6, 0, 0 }, // 669 ROL16rCL_ROL32rCL_ROL64rCL_ROL8rCL_ROR16rCL_ROR32rCL_ROR64rCL_ROR8rCL
  { 1, 5, 6, 0, 0 }, // 670 ROL16mCL_ROL32mCL_ROL64mCL_ROL8mCL_ROR16mCL_ROR32mCL_ROR64mCL_ROR8mCL
  { 1, 5, 6, 0, 0 }, // 671 RCL16r1_RCL32r1_RCL64r1_RCL8r1_RCR16r1_RCR32r1_RCR64r1_RCR8r1
  { 1, 5, 6, 0, 0 }, // 672 RCL16m1_RCL32m1_RCL64m1_RCL8m1_RCR16m1_RCR32m1_RCR64m1_RCR8m1
  { 1, 5, 6, 0, 0 }, // 673 RCL16rCL_RCL16ri_RCL32rCL_RCL32ri_RCL64rCL_RCL64ri_RCL8rCL_RCL8ri_RCR16rCL_RCR16ri_RCR32rCL_RCR32ri_RCR64rCL_RCR64ri_RCR8rCL_RCR8ri
  { 1, 5, 6, 0, 0 }, // 674 RCL16mCL_RCL16mi_RCL32mCL_RCL32mi_RCL64mCL_RCL64mi_RCL8mCL_RCL8mi_RCR16mCL_RCR16mi_RCR32mCL_RCR32mi_RCR64mCL_RCR64mi_RCR8mCL_RCR8mi
  { 1, 6, 7, 0, 0 }, // 675 SHLD16rri8_SHRD16rri8
  { 1, 16, 17, 0, 0 }, // 676 SHLD32rri8_SHRD32rri8
  { 1, 14, 15, 0, 0 }, // 677 SHLD64rri8_SHRD64rri8
  { 1, 6, 7, 0, 0 }, // 678 SHLD16mri8_SHRD16mri8
  { 1, 20, 21, 0, 0 }, // 679 SHLD32mri8_SHRD32mri8
  { 1, 14, 15, 0, 0 }, // 680 SHLD64mri8_SHRD64mri8
  { 1, 6, 7, 0, 0 }, // 681 SHLD16rrCL
  { 1, 16, 17, 0, 0 }, // 682 SHLD32rrCL
  { 1, 28, 29, 0, 0 }, // 683 SHLD64rrCL
  { 1, 6, 7, 0, 0 }, // 684 SHRD16rrCL
  { 1, 16, 17, 0, 0 }, // 685 SHRD32rrCL
  { 1, 28, 29, 0, 0 }, // 686 SHRD64rrCL
  { 1, 6, 7, 0, 0 }, // 687 SHLD16mrCL_SHRD16mrCL
  { 1, 20, 21, 0, 0 }, // 688 SHLD32mrCL_SHRD32mrCL
  { 1, 14, 15, 0, 0 }, // 689 SHLD64mrCL_SHRD64mrCL
  { 1, 15, 16, 0, 0 }, // 690 BT16ri8_BT32ri8_BT64ri8
  { 1, 15, 16, 0, 0 }, // 691 BT16rr_BT32rr_BT64rr
  { 1, 14, 15, 0, 0 }, // 692 BT16mr_BT32mr_BT64mr
  { 1, 4, 5, 0, 0 }, // 693 BT16mi8_BT32mi8_BT64mi8
  { 1, 15, 16, 0, 0 }, // 694 BTC16ri8_BTC32ri8_BTC64ri8_BTR16ri8_BTR32ri8_BTR64ri8_BTS16ri8_BTS32ri8_BTS64ri8
  { 1, 15, 16, 0, 0 }, // 695 BTC16rr_BTC32rr_BTC64rr_BTR16rr_BTR32rr_BTS16rr_BTS32rr_BTS64rr
  { 0, 0, 0, 0, 0 }, // 696 BTR64rr
  { 1, 12, 13, 0, 0 }, // 697 BTC16mr_BTC32mr_BTC64mr_BTR16mr_BTR32mr_BTR64mr_BTS16mr_BTS32mr_BTS64mr
  { 1, 16, 17, 0, 0 }, // 698 BTC16mi8_BTC32mi8_BTC64mi8_BTR16mi8_BTR32mi8_BTR64mi8_BTS16mi8_BTS32mi8_BTS64mi8
  { 1, 13, 14, 0, 0 }, // 699 BSF16rr_BSF32rr_BSF64rr_BSR16rr_BSR32rr_BSR64rr
  { 1, 13, 14, 0, 0 }, // 700 BSF16rm_BSF32rm_BSF64rm_BSR16rm_BSR32rm_BSR64rm
  { 1, 4, 5, 0, 0 }, // 701 SETAEr_SETAr_SETBEr_SETBr_SETEr_SETGEr_SETGr_SETLEr_SETLr_SETNEr_SETNOr_SETNPr_SETNSr_SETOr_SETPr_SETSr
  { 1, 16, 17, 0, 0 }, // 702 SETAEm_SETAm_SETBEm_SETBm_SETEm_SETGEm_SETGm_SETLEm_SETLm_SETNEm_SETNOm_SETNPm_SETNSm_SETOm_SETPm_SETSm
  { 1, 21, 22, 0, 0 }, // 703 CLD
  { 1, 3, 4, 0, 0 }, // 704 STD
  { 0, 0, 0, 0, 0 }, // 705 TZCNT16rr_TZCNT32rr_TZCNT64rr
  { 0, 0, 0, 0, 0 }, // 706 TZCNT16rm_TZCNT32rm_TZCNT64rm
  { 1, 4, 5, 0, 0 }, // 707 ANDN32rr_ANDN64rr
  { 1, 5, 6, 0, 0 }, // 708 ANDN32rm_ANDN64rm
  { 0, 0, 0, 0, 0 }, // 709 BLSI32rr_BLSI64rr_BLSMSK32rr_BLSMSK64rr_BLSR32rr_BLSR64rr
  { 0, 0, 0, 0, 0 }, // 710 BLSI32rm_BLSI64rm_BLSMSK32rm_BLSMSK64rm_BLSR32rm_BLSR64rm
  { 0, 0, 0, 0, 0 }, // 711 BEXTR32rr_BEXTR64rr
  { 0, 0, 0, 0, 0 }, // 712 BEXTR32rm_BEXTR64rm
  { 0, 0, 0, 0, 0 }, // 713 BZHI32rr_BZHI64rr
  { 0, 0, 0, 0, 0 }, // 714 BZHI32rm_BZHI64rm
  { 0, 0, 0, 0, 0 }, // 715 PDEP32rr_PDEP64rr_PEXT32rr_PEXT64rr
  { 0, 0, 0, 0, 0 }, // 716 PDEP32rm_PDEP64rm_PEXT32rm_PEXT64rm
  { 1, 20, 21, 0, 0 }, // 717 JCXZ_JRCXZ
  { 1, 25, 26, 0, 0 }, // 718 LOOP
  { 1, 28, 29, 0, 0 }, // 719 LOOPE
  { 1, 71, 72, 0, 0 }, // 720 LOOPNE
  { 1, 18, 20, 0, 0 }, // 721 CALL16r_CALL32r
  { 1, 17, 18, 0, 0 }, // 722 CALL16m_CALL32m
  { 1, 37, 38, 0, 0 }, // 723 LRETL_LRETQ_LRETW_RETL_RETQ_RETW
  { 1, 37, 38, 0, 0 }, // 724 LRETIL_LRETIQ_LRETIW
  { 1, 18, 20, 0, 0 }, // 725 RETIL_RETIQ_RETIW
  { 1, 12, 13, 0, 0 }, // 726 BOUNDS16rm_BOUNDS32rm
  { 0, 0, 0, 0, 0 }, // 727 INTO
  { 1, 16, 17, 0, 0 }, // 728 LODSB_LODSW
  { 1, 16, 17, 0, 0 }, // 729 LODSL_LODSQ
  { 1, 4, 5, 0, 0 }, // 730 STOSB_STOSL_STOSQ_STOSW
  { 1, 21, 22, 0, 0 }, // 731 MOVSB_MOVSL_MOVSQ_MOVSW
  { 1, 5, 6, 0, 0 }, // 732 MOVSLDUPrm
  { 1, 5, 6, 0, 0 }, // 733 MOVSLDUPrr
  { 1, 16, 17, 0, 0 }, // 734 SCASB_SCASL_SCASQ_SCASW
  { 1, 21, 22, 0, 0 }, // 735 CMPSB_CMPSL_CMPSQ_CMPSW
  { 1, 21, 22, 0, 0 }, // 736 XADD16rm_XADD32rm_XADD64rm_XADD8rm
  { 1, 22, 23, 0, 0 }, // 737 CMPXCHG16rm_CMPXCHG32rm_CMPXCHG64rm
  { 1, 6, 7, 0, 0 }, // 738 CMPXCHG8rm
  { 1, 25, 26, 0, 0 }, // 739 CMPXCHG8B
  { 1, 24, 25, 0, 0 }, // 740 CMPXCHG16B
  { 1, 71, 72, 0, 0 }, // 741 PAUSE
  { 1, 16, 17, 0, 0 }, // 742 LEAVE_LEAVE64
  { 0, 0, 0, 0, 0 }, // 743 XGETBV
  { 1, 86, 87, 0, 0 }, // 744 RDTSC
  { 0, 0, 0, 0, 0 }, // 745 RDTSCP
  { 1, 50, 51, 0, 0 }, // 746 RDPMC
  { 0, 0, 0, 0, 0 }, // 747 RDRAND16r_RDRAND32r_RDRAND64r
  { 1, 5, 6, 0, 0 }, // 748 LD_Frr
  { 1, 20, 21, 0, 0 }, // 749 LD_F80m
  { 0, 0, 0, 0, 0 }, // 750 FBLDm
  { 1, 16, 17, 0, 0 }, // 751 ST_FPrr_ST_Frr
  { 1, 43, 44, 0, 0 }, // 752 ST_FP80m
  { 0, 0, 0, 0, 0 }, // 753 FBSTPm
  { 1, 18, 20, 0, 0 }, // 754 XCH_F
  { 1, 7, 9, 0, 0 }, // 755 ILD_F16m_ILD_F32m_ILD_F64m
  { 1, 6, 7, 0, 0 }, // 756 IST_F16m_IST_F32m_IST_FP16m_IST_FP32m
  { 1, 4, 5, 0, 0 }, // 757 LD_F0
  { 1, 6, 7, 0, 0 }, // 758 LD_F1
  { 1, 26, 27, 0, 0 }, // 759 FLDPI
  { 0, 0, 0, 0, 0 }, // 760 CMOVBE_F_CMOVBE_Fp32_CMOVBE_Fp64_CMOVBE_Fp80_CMOVB_F_CMOVB_Fp32_CMOVB_Fp64_CMOVB_Fp80_CMOVNBE_F_CMOVNBE_Fp32_CMOVNBE_Fp64_CMOVNBE_Fp80_CMOVNB_F_CMOVNB_Fp32_CMOVNB_Fp64_CMOVNB_Fp80_CMOVNE_F_CMOVNE_Fp32_CMOVNE_Fp64_CMOVNE_Fp80_CMOVNP_F_CMOVNP_Fp32_CMOVNP_Fp64_CMOVNP_Fp80_CMOVP_F_CMOVP_Fp32_CMOVP_Fp64_CMOVP_Fp80
  { 1, 26, 27, 0, 0 }, // 761 FNSTSW16r
  { 0, 0, 0, 0, 0 }, // 762 FNSTSWm
  { 1, 43, 44, 0, 0 }, // 763 FLDCW16m
  { 1, 28, 29, 0, 0 }, // 764 FNSTCW16m
  { 1, 4, 5, 0, 0 }, // 765 FDECSTP_FINCSTP
  { 1, 4, 5, 0, 0 }, // 766 FFREE_FFREEP
  { 0, 0, 0, 0, 0 }, // 767 FSAVEm
  { 0, 0, 0, 0, 0 }, // 768 FRSTORm
  { 0, 0, 0, 0, 0 }, // 769 ABS_F_ABS_Fp32_ABS_Fp64_ABS_Fp80
  { 0, 0, 0, 0, 0 }, // 770 CHS_F_CHS_Fp32_CHS_Fp64_CHS_Fp80
  { 0, 0, 0, 0, 0 }, // 771 COMP_FST0r_COM_FST0r
  { 1, 15, 16, 0, 0 }, // 772 UCOM_FPr_UCOM_Fr
  { 0, 0, 0, 0, 0 }, // 773 FCOM32m_FCOM64m_FCOMP32m_FCOMP64m
  { 1, 15, 16, 0, 0 }, // 774 FCOMPP
  { 1, 15, 16, 0, 0 }, // 775 UCOM_FPPr
  { 1, 14, 15, 0, 0 }, // 776 COM_FIPr_COM_FIr
  { 1, 14, 15, 0, 0 }, // 777 UCOM_FIPr_UCOM_FIr
  { 0, 0, 0, 0, 0 }, // 778 FICOM16m_FICOM32m_FICOMP16m_FICOMP32m
  { 0, 0, 0, 0, 0 }, // 779 TST_F_TST_Fp32_TST_Fp64_TST_Fp80
  { 1, 5, 6, 0, 0 }, // 780 FXAM
  { 1, 47, 48, 0, 0 }, // 781 FPREM
  { 1, 48, 49, 0, 0 }, // 782 FPREM1
  { 1, 50, 51, 0, 0 }, // 783 FRNDINT
  { 1, 51, 52, 0, 0 }, // 784 FSCALE
  { 1, 44, 45, 0, 0 }, // 785 FXTRACT
  { 1, 4, 5, 0, 0 }, // 786 FNOP
  { 1, 4, 5, 0, 0 }, // 787 WAIT
  { 1, 44, 45, 0, 0 }, // 788 FNCLEX
  { 1, 45, 46, 0, 0 }, // 789 FNINIT
  { 1, 74, 75, 0, 0 }, // 790 MMX_MOVD64from64rr_MMX_MOVD64grr
  { 1, 74, 75, 0, 0 }, // 791 MOVPDI2DIrr_VMOVPDI2DIrr
  { 1, 5, 6, 0, 0 }, // 792 MMX_MOVD64rr_MMX_MOVD64to64rr
  { 1, 5, 6, 0, 0 }, // 793 MOVDI2PDIrr_VMOVDI2PDIrr
  { 1, 74, 75, 0, 0 }, // 794 VMOVPQIto64rr
  { 1, 5, 6, 0, 0 }, // 795 VMOV64toPQIrr
  { 1, 4, 5, 0, 0 }, // 796 MMX_MOVQ64rr_MMX_MOVQ64rr_REV
  { 1, 4, 5, 0, 0 }, // 797 MOVDQArr_MOVDQArr_REV_VMOVDQAYrr_VMOVDQAYrr_REV_VMOVDQArr_VMOVDQArr_REV
  { 1, 4, 5, 0, 0 }, // 798 MOVDQUrr_MOVDQUrr_REV_VMOVDQUYrr_VMOVDQUYrr_REV_VMOVDQUrr_VMOVDQUrr_REV
  { 1, 4, 5, 0, 0 }, // 799 MMX_MOVDQ2Qrr
  { 0, 0, 0, 0, 0 }, // 800 MMX_MOVQ2DQrr
  { 1, 4, 5, 0, 0 }, // 801 MMX_PACKSSDWirr_MMX_PACKSSWBirr_MMX_PACKUSWBirr
  { 1, 5, 6, 0, 0 }, // 802 MMX_PACKSSDWirm_MMX_PACKSSWBirm_MMX_PACKUSWBirm
  { 1, 4, 5, 0, 0 }, // 803 VPMOVSXBQYrr_VPMOVSXBWYrr_VPMOVSXDQYrr_VPMOVZXBQYrr_VPMOVZXBWYrr_VPMOVZXDQYrr
  { 1, 4, 5, 0, 0 }, // 804 PBLENDWrri
  { 1, 4, 5, 0, 0 }, // 805 VPBLENDWYrri_VPBLENDWrri
  { 1, 5, 6, 0, 0 }, // 806 PBLENDWrmi
  { 1, 5, 6, 0, 0 }, // 807 VPBLENDWYrmi_VPBLENDWrmi
  { 0, 0, 0, 0, 0 }, // 808 VPBLENDDYrri_VPBLENDDrri
  { 0, 0, 0, 0, 0 }, // 809 VPBLENDDYrmi_VPBLENDDrmi
  { 1, 5, 6, 0, 0 }, // 810 MMX_MASKMOVQ_MMX_MASKMOVQ64
  { 1, 16, 17, 0, 0 }, // 811 MASKMOVDQU_MASKMOVDQU64_VMASKMOVDQU_VMASKMOVDQU64
  { 0, 0, 0, 0, 0 }, // 812 VPMASKMOVDYrm_VPMASKMOVDrm_VPMASKMOVQYrm_VPMASKMOVQrm
  { 0, 0, 0, 0, 0 }, // 813 VPMASKMOVDYmr_VPMASKMOVDmr_VPMASKMOVQYmr_VPMASKMOVQmr
  { 0, 0, 0, 0, 0 }, // 814 MMX_PMOVMSKBrr
  { 1, 74, 75, 0, 0 }, // 815 PMOVMSKBrr_VPMOVMSKBrr
  { 0, 0, 0, 0, 0 }, // 816 VPMOVMSKBYrr
  { 1, 20, 21, 0, 0 }, // 817 MMX_PEXTRWirri
  { 0, 0, 0, 0, 0 }, // 818 PEXTRBrr_PEXTRDrr_PEXTRQrr_PEXTRWrr_REV
  { 0, 0, 0, 0, 0 }, // 819 PEXTRBmr_PEXTRDmr_PEXTRQmr_PEXTRWmr
  { 0, 0, 0, 0, 0 }, // 820 VPBROADCASTBrm_VPBROADCASTWrm
  { 0, 0, 0, 0, 0 }, // 821 VPBROADCASTBYrm_VPBROADCASTWYrm
  { 0, 0, 0, 0, 0 }, // 822 VPGATHERDDrm
  { 0, 0, 0, 0, 0 }, // 823 VPGATHERDDYrm
  { 0, 0, 0, 0, 0 }, // 824 VPGATHERQDrm
  { 0, 0, 0, 0, 0 }, // 825 VPGATHERQDYrm
  { 0, 0, 0, 0, 0 }, // 826 VPGATHERDQrm
  { 0, 0, 0, 0, 0 }, // 827 VPGATHERDQYrm
  { 0, 0, 0, 0, 0 }, // 828 VPGATHERQQrm
  { 0, 0, 0, 0, 0 }, // 829 VPGATHERQQYrm
  { 1, 43, 44, 0, 0 }, // 830 MMX_PHADDSWrr64_MMX_PHADDWrr64_MMX_PHSUBSWrr64_MMX_PHSUBWrr64
  { 1, 21, 22, 0, 0 }, // 831 MMX_PHADDrr64_MMX_PHSUBDrr64
  { 1, 21, 22, 0, 0 }, // 832 PHADDDrr_PHSUBDrr_VPHADDDrr_VPHSUBDrr
  { 0, 0, 0, 0, 0 }, // 833 PHADDSWrr128_PHSUBSWrr128_VPHADDSWrr128_VPHSUBSWrr128
  { 1, 2, 3, 0, 0 }, // 834 PHADDWrr_PHSUBWrr_VPHADDDYrr_VPHADDWYrr_VPHADDWrr_VPHSUBDYrr_VPHSUBWYrr_VPHSUBWrr
  { 0, 0, 0, 0, 0 }, // 835 VPHADDSWrr256_VPHSUBSWrr256
  { 1, 6, 7, 0, 0 }, // 836 MMX_PHADDSWrm64_MMX_PHADDWrm64_MMX_PHSUBSWrm64_MMX_PHSUBWrm64
  { 1, 20, 21, 0, 0 }, // 837 MMX_PHADDrm64_MMX_PHSUBDrm64
  { 1, 20, 21, 0, 0 }, // 838 PHADDDrm_PHSUBDrm_VPHADDDrm_VPHSUBDrm
  { 0, 0, 0, 0, 0 }, // 839 PHADDSWrm128_PHSUBSWrm128_VPHADDSWrm128_VPHSUBSWrm128
  { 1, 28, 29, 0, 0 }, // 840 PHADDWrm_PHSUBWrm_VPHADDDYrm_VPHADDWYrm_VPHADDWrm_VPHSUBDYrm_VPHSUBWYrm_VPHSUBWrm
  { 0, 0, 0, 0, 0 }, // 841 VPHADDSWrm256_VPHSUBSWrm256
  { 0, 0, 0, 0, 0 }, // 842 PCMPGTQrr_VPCMPGTQYrr_VPCMPGTQrr
  { 0, 0, 0, 0, 0 }, // 843 PCMPGTQrm_VPCMPGTQYrm_VPCMPGTQrm
  { 0, 0, 0, 0, 0 }, // 844 PMULLDrr_VPMULLDYrr_VPMULLDrr
  { 0, 0, 0, 0, 0 }, // 845 PMULLDrm_VPMULLDYrm_VPMULLDrm
  { 0, 0, 0, 0, 0 }, // 846 PTESTrr_VPTESTYrr_VPTESTrr
  { 0, 0, 0, 0, 0 }, // 847 PTESTrm_VPTESTYrm_VPTESTrm
  { 1, 16, 17, 0, 0 }, // 848 PSLLDrr_PSLLQrr_PSLLWrr_PSRADrr_PSRAWrr_PSRLDrr_PSRLQrr_PSRLWrr_VPSLLDYrr_VPSLLDrr_VPSLLQYrr_VPSLLQrr_VPSLLWYrr_VPSLLWrr_VPSRADYrr_VPSRADrr_VPSRAWYrr_VPSRAWrr_VPSRLDYrr_VPSRLDrr_VPSRLQYrr_VPSRLQrr_VPSRLWYrr_VPSRLWrr
  { 1, 4, 5, 0, 0 }, // 849 PSLLDQri_PSRLDQri_VPSLLDQYri_VPSLLDQri_VPSRLDQYri_VPSRLDQri
  { 1, 43, 44, 0, 0 }, // 850 MMX_EMMS
  { 1, 74, 75, 0, 0 }, // 851 MOVMSKPDrr_MOVMSKPSrr_VMOVMSKPDrr_VMOVMSKPSrr
  { 1, 74, 75, 0, 0 }, // 852 VMOVMSKPDYrr_VMOVMSKPSYrr
  { 0, 0, 0, 0, 0 }, // 853 VPERM2F128rr
  { 0, 0, 0, 0, 0 }, // 854 VPERM2F128rm
  { 1, 4, 5, 0, 0 }, // 855 BLENDVPDrr0_BLENDVPSrr0
  { 1, 5, 6, 0, 0 }, // 856 BLENDVPDrm0_BLENDVPSrm0
  { 0, 0, 0, 0, 0 }, // 857 VBROADCASTF128
  { 0, 0, 0, 0, 0 }, // 858 EXTRACTPSrr
  { 1, 4, 5, 0, 0 }, // 859 VEXTRACTPSrr
  { 0, 0, 0, 0, 0 }, // 860 EXTRACTPSmr
  { 1, 5, 6, 0, 0 }, // 861 VEXTRACTPSmr
  { 0, 0, 0, 0, 0 }, // 862 VEXTRACTF128rr
  { 0, 0, 0, 0, 0 }, // 863 VEXTRACTF128mr
  { 0, 0, 0, 0, 0 }, // 864 VINSERTF128rr
  { 0, 0, 0, 0, 0 }, // 865 VINSERTF128rm
  { 0, 0, 0, 0, 0 }, // 866 VMASKMOVPDYrm_VMASKMOVPDrm_VMASKMOVPSYrm_VMASKMOVPSrm
  { 0, 0, 0, 0, 0 }, // 867 VMASKMOVPDmr_VMASKMOVPSmr
  { 0, 0, 0, 0, 0 }, // 868 VMASKMOVPDYmr_VMASKMOVPSYmr
  { 0, 0, 0, 0, 0 }, // 869 VGATHERDPSrm
  { 0, 0, 0, 0, 0 }, // 870 VGATHERDPSYrm
  { 0, 0, 0, 0, 0 }, // 871 VGATHERQPSrm
  { 0, 0, 0, 0, 0 }, // 872 VGATHERQPSYrm
  { 0, 0, 0, 0, 0 }, // 873 VGATHERDPDrm
  { 0, 0, 0, 0, 0 }, // 874 VGATHERDPDYrm
  { 0, 0, 0, 0, 0 }, // 875 VGATHERQPDrm
  { 0, 0, 0, 0, 0 }, // 876 VGATHERQPDYrm
  { 1, 2, 3, 0, 0 }, // 877 CVTPD2PSrr_VCVTPD2PSrr
  { 1, 28, 29, 0, 0 }, // 878 CVTPD2PSrm_VCVTPD2PSrm
  { 1, 2, 3, 0, 0 }, // 879 VCVTPD2PSYrr
  { 1, 28, 29, 0, 0 }, // 880 VCVTPD2PSYrm
  { 1, 6, 7, 0, 0 }, // 881 CVTSD2SSrr_Int_CVTSD2SSrr_Int_VCVTSD2SSrr_VCVTSD2SSrr
  { 1, 2, 3, 0, 0 }, // 882 CVTSD2SSrm
  { 1, 2, 3, 0, 0 }, // 883 Int_CVTSD2SSrm_Int_VCVTSD2SSrm_VCVTSD2SSrm
  { 1, 2, 3, 0, 0 }, // 884 CVTPS2PDrr_VCVTPS2PDrr
  { 1, 28, 29, 0, 0 }, // 885 CVTPS2PDrm_VCVTPS2PDYrm_VCVTPS2PDrm
  { 1, 2, 3, 0, 0 }, // 886 VCVTPS2PDYrr
  { 1, 6, 7, 0, 0 }, // 887 CVTSS2SDrr_Int_CVTSS2SDrr_Int_VCVTSS2SDrr_VCVTSS2SDrr
  { 1, 2, 3, 0, 0 }, // 888 CVTSS2SDrm
  { 1, 2, 3, 0, 0 }, // 889 Int_CVTSS2SDrm_Int_VCVTSS2SDrm_VCVTSS2SDrm
  { 1, 28, 29, 0, 0 }, // 890 CVTDQ2PDrr
  { 0, 0, 0, 0, 0 }, // 891 VCVTDQ2PDrr
  { 0, 0, 0, 0, 0 }, // 892 VCVTDQ2PDYrr
  { 1, 2, 3, 0, 0 }, // 893 CVTPD2DQrr_CVTTPD2DQrr_VCVTTPD2DQrr
  { 0, 0, 0, 0, 0 }, // 894 VCVTPD2DQrr
  { 1, 28, 29, 0, 0 }, // 895 CVTPD2DQrm_CVTTPD2DQrm_VCVTTPD2DQrm
  { 0, 0, 0, 0, 0 }, // 896 VCVTPD2DQrm
  { 0, 0, 0, 0, 0 }, // 897 VCVTPD2DQYrr
  { 1, 2, 3, 0, 0 }, // 898 VCVTTPD2DQYrr
  { 0, 0, 0, 0, 0 }, // 899 VCVTPD2DQYrm
  { 1, 28, 29, 0, 0 }, // 900 VCVTTPD2DQYrm
  { 1, 9, 10, 0, 0 }, // 901 MMX_CVTPS2PIirr_MMX_CVTTPS2PIirr
  { 1, 2, 3, 0, 0 }, // 902 MMX_CVTPI2PDirr
  { 1, 2, 3, 0, 0 }, // 903 MMX_CVTPD2PIirr_MMX_CVTTPD2PIirr
  { 1, 6, 7, 0, 0 }, // 904 CVTSI2SS64rr_CVTSI2SSrr_Int_CVTSI2SS64rr_Int_CVTSI2SSrr_Int_VCVTSI2SS64rr_Int_VCVTSI2SSrr
  { 0, 0, 0, 0, 0 }, // 905 VCVTSI2SS64rr_VCVTSI2SSrr
  { 1, 14, 15, 0, 0 }, // 906 CVTSS2SI64rr_CVTTSS2SI64rr_Int_CVTTSS2SI64rr_Int_VCVTTSS2SI64rr_VCVTSS2SI64rr_VCVTTSS2SI64rr
  { 1, 28, 29, 0, 0 }, // 907 CVTSS2SIrr_CVTTSS2SIrr_Int_CVTTSS2SIrr_Int_VCVTTSS2SIrr_VCVTSS2SIrr_VCVTTSS2SIrr
  { 1, 26, 27, 0, 0 }, // 908 CVTSS2SI64rm_CVTTSS2SI64rm_Int_CVTTSS2SI64rm_Int_VCVTTSS2SI64rm_VCVTSS2SI64rm_VCVTTSS2SI64rm
  { 1, 14, 15, 0, 0 }, // 909 CVTSS2SIrm_CVTTSS2SIrm_Int_CVTTSS2SIrm_Int_VCVTTSS2SIrm_VCVTSS2SIrm_VCVTTSS2SIrm
  { 1, 28, 29, 0, 0 }, // 910 CVTSD2SI64rr_CVTSD2SIrr_CVTTSD2SI64rr_CVTTSD2SIrr_Int_CVTTSD2SI64rr_Int_CVTTSD2SIrr_Int_VCVTTSD2SI64rr_Int_VCVTTSD2SIrr_VCVTSD2SI64rr_VCVTSD2SIrr_VCVTTSD2SI64rr_VCVTTSD2SIrr
  { 1, 14, 15, 0, 0 }, // 911 CVTSD2SI64rm_CVTSD2SIrm_CVTTSD2SI64rm_CVTTSD2SIrm_Int_CVTTSD2SI64rm_Int_CVTTSD2SIrm_Int_VCVTTSD2SI64rm_Int_VCVTTSD2SIrm_VCVTSD2SI64rm_VCVTSD2SIrm_VCVTTSD2SI64rm_VCVTTSD2SIrm
  { 0, 0, 0, 0, 0 }, // 912 VCVTPS2PHYrr_VCVTPS2PHrr
  { 0, 0, 0, 0, 0 }, // 913 VCVTPS2PHYmr_VCVTPS2PHmr
  { 0, 0, 0, 0, 0 }, // 914 VCVTPH2PSYrr_VCVTPH2PSrr
  { 1, 28, 29, 0, 0 }, // 915 HADDPDrr_HADDPSrr_HSUBPDrr_HSUBPSrr_VHADDPDYrr_VHADDPDrr_VHADDPSYrr_VHADDPSrr_VHSUBPDYrr_VHSUBPDrr_VHSUBPSYrr_VHSUBPSrr
  { 1, 14, 15, 0, 0 }, // 916 HADDPDrm_HADDPSrm_HSUBPDrm_HSUBPSrm_VHADDPDYrm_VHADDPDrm_VHADDPSYrm_VHADDPSrm_VHSUBPDYrm_VHSUBPDrm_VHSUBPSYrm_VHSUBPSrm
  { 1, 14, 15, 0, 0 }, // 917 MULPDrr_VMULPDrr
  { 1, 57, 58, 0, 0 }, // 918 MULPSrr_VMULPSrr
  { 1, 57, 58, 0, 0 }, // 919 MULSDrr_MULSDrr_Int_VMULSDrr_VMULSDrr_Int
  { 1, 75, 76, 0, 0 }, // 920 MULSSrr_MULSSrr_Int_VMULSSrr_VMULSSrr_Int
  { 1, 26, 27, 0, 0 }, // 921 MULPDrm_MULPSrm_VMULPDrm_VMULPSrm
  { 1, 57, 58, 0, 0 }, // 922 MULSDrm_MULSDrm_Int_MULSSrm_MULSSrm_Int_VMULSDrm_VMULSDrm_Int_VMULSSrm_VMULSSrm_Int
  { 1, 34, 35, 0, 0 }, // 923 VDIVPSYrr
  { 1, 33, 34, 0, 0 }, // 924 VDIVPSYrm
  { 1, 33, 34, 0, 0 }, // 925 VDIVPDYrr
  { 1, 33, 34, 0, 0 }, // 926 VDIVPDYrm
  { 1, 14, 15, 0, 0 }, // 927 VRCPPSYr
  { 1, 26, 27, 0, 0 }, // 928 VRCPPSYm
  { 0, 0, 0, 0, 0 }, // 929 ROUNDPDr_ROUNDPSr_VROUNDPDr_VROUNDPSr_VROUNDYPDr_VROUNDYPSr
  { 0, 0, 0, 0, 0 }, // 930 ROUNDSDr_ROUNDSDr_Int_ROUNDSSr_ROUNDSSr_Int_VROUNDSDr_VROUNDSDr_Int_VROUNDSSr_VROUNDSSr_Int
  { 0, 0, 0, 0, 0 }, // 931 ROUNDPDm_VROUNDPDm_VROUNDYPDm
  { 0, 0, 0, 0, 0 }, // 932 ROUNDPSm_VROUNDPSm_VROUNDYPSm
  { 0, 0, 0, 0, 0 }, // 933 ROUNDSDm_ROUNDSDm_Int_ROUNDSSm_ROUNDSSm_Int_VROUNDSDm_VROUNDSDm_Int_VROUNDSSm_VROUNDSSm_Int
  { 0, 0, 0, 0, 0 }, // 934 DPPSrri_VDPPSYrri_VDPPSrri
  { 0, 0, 0, 0, 0 }, // 935 DPPSrmi_VDPPSYrmi_VDPPSrmi
  { 0, 0, 0, 0, 0 }, // 936 DPPDrri
  { 0, 0, 0, 0, 0 }, // 937 VDPPDrri
  { 0, 0, 0, 0, 0 }, // 938 DPPDrmi_VDPPDrmi
  { 0, 0, 0, 0, 0 }, // 939 VFMADDPD4rr_VFMADDPD4rr_REV_VFMADDPS4rr_VFMADDPS4rr_REV_VFMADDSD4rr_VFMADDSD4rr_Int_VFMADDSD4rr_Int_REV_VFMADDSD4rr_REV_VFMADDSS4rr_VFMADDSS4rr_Int_VFMADDSS4rr_Int_REV_VFMADDSS4rr_REV_VFMSUBPD4rr_VFMSUBPD4rr_REV_VFMSUBPS4rr_VFMSUBPS4rr_REV_VFMSUBSD4rr_VFMSUBSD4rr_Int_VFMSUBSD4rr_Int_REV_VFMSUBSD4rr_REV_VFMSUBSS4rr_VFMSUBSS4rr_Int_VFMSUBSS4rr_Int_REV_VFMSUBSS4rr_REV_VFNMADDPD4rr_VFNMADDPD4rr_REV_VFNMADDPS4rr_VFNMADDPS4rr_REV_VFNMADDSD4rr_VFNMADDSD4rr_Int_VFNMADDSD4rr_Int_REV_VFNMADDSD4rr_REV_VFNMADDSS4rr_VFNMADDSS4rr_Int_VFNMADDSS4rr_Int_REV_VFNMADDSS4rr_REV_VFNMSUBPD4rr_VFNMSUBPD4rr_REV_VFNMSUBPS4rr_VFNMSUBPS4rr_REV_VFNMSUBSD4rr_VFNMSUBSD4rr_Int_VFNMSUBSD4rr_Int_REV_VFNMSUBSD4rr_REV_VFNMSUBSS4rr_VFNMSUBSS4rr_Int_VFNMSUBSS4rr_Int_REV_VFNMSUBSS4rr_REV
  { 0, 0, 0, 0, 0 }, // 940 VFMADDPD4mr_VFMADDPD4rm_VFMADDPS4mr_VFMADDPS4rm_VFMADDSD4mr_VFMADDSD4mr_Int_VFMADDSD4rm_VFMADDSD4rm_Int_VFMADDSS4mr_VFMADDSS4mr_Int_VFMADDSS4rm_VFMADDSS4rm_Int_VFMSUBPD4mr_VFMSUBPD4rm_VFMSUBPS4mr_VFMSUBPS4rm_VFMSUBSD4mr_VFMSUBSD4mr_Int_VFMSUBSD4rm_VFMSUBSD4rm_Int_VFMSUBSS4mr_VFMSUBSS4mr_Int_VFMSUBSS4rm_VFMSUBSS4rm_Int_VFNMADDPD4mr_VFNMADDPD4rm_VFNMADDPS4mr_VFNMADDPS4rm_VFNMADDSD4mr_VFNMADDSD4mr_Int_VFNMADDSD4rm_VFNMADDSD4rm_Int_VFNMADDSS4mr_VFNMADDSS4mr_Int_VFNMADDSS4rm_VFNMADDSS4rm_Int_VFNMSUBPD4mr_VFNMSUBPD4rm_VFNMSUBPS4mr_VFNMSUBPS4rm_VFNMSUBSD4mr_VFNMSUBSD4mr_Int_VFNMSUBSD4rm_VFNMSUBSD4rm_Int_VFNMSUBSS4mr_VFNMSUBSS4mr_Int_VFNMSUBSS4rm_VFNMSUBSS4rm_Int
  { 1, 34, 35, 0, 0 }, // 941 VSQRTPSYr
  { 1, 34, 35, 0, 0 }, // 942 VSQRTPSYm
  { 1, 33, 34, 0, 0 }, // 943 VSQRTPDYr
  { 1, 33, 34, 0, 0 }, // 944 VSQRTPDYm
  { 1, 14, 15, 0, 0 }, // 945 RSQRTPSr_VRSQRTPSr
  { 1, 75, 76, 0, 0 }, // 946 RSQRTSSr_VRSQRTSSr
  { 0, 0, 0, 0, 0 }, // 947 RSQRTSSr_Int
  { 0, 0, 0, 0, 0 }, // 948 VRSQRTSSr_Int
  { 1, 26, 27, 0, 0 }, // 949 RSQRTPSm_VRSQRTPSm
  { 1, 75, 76, 0, 0 }, // 950 RSQRTSSm_VRSQRTSSm
  { 0, 0, 0, 0, 0 }, // 951 RSQRTSSm_Int_VRSQRTSSm_Int
  { 1, 14, 15, 0, 0 }, // 952 VRSQRTPSYr
  { 1, 26, 27, 0, 0 }, // 953 VRSQRTPSYm
  { 0, 0, 0, 0, 0 }, // 954 ANDNPDrr_ANDNPSrr_ANDPDrr_ANDPSrr_ORPDrr_ORPSrr_VANDNPDYrr_VANDNPDrr_VANDNPSYrr_VANDNPSrr_VANDPDYrr_VANDPDrr_VANDPSYrr_VANDPSrr_VORPDYrr_VORPDrr_VORPSYrr_VORPSrr_VXORPDYrr_VXORPDrr_VXORPSYrr_VXORPSrr_XORPDrr_XORPSrr
  { 0, 0, 0, 0, 0 }, // 955 ANDNPDrm_ANDNPSrm_ANDPDrm_ANDPSrm_ORPDrm_ORPSrm_VANDNPDYrm_VANDNPDrm_VANDNPSYrm_VANDNPSrm_VANDPDYrm_VANDPDrm_VANDPSYrm_VANDPSrm_VORPDYrm_VORPDrm_VORPSYrm_VORPSrm_VXORPDYrm_VXORPDrm_VXORPSYrm_VXORPSrm_XORPDrm_XORPSrm
  { 0, 0, 0, 0, 0 }, // 956 VZEROUPPER
  { 0, 0, 0, 0, 0 }, // 957 VZEROALL
  { 1, 43, 44, 0, 0 }, // 958 LDMXCSR_VLDMXCSR
  { 1, 17, 18, 0, 0 }, // 959 STMXCSR_VSTMXCSR
  { 1, 28, 29, 0, 0 }, // 960 VHADDPDYrr_VHADDPSYrr_VHSUBPDYrr_VHSUBPSYrr
  { 1, 14, 15, 0, 0 }, // 961 VHADDPDYrm_VHADDPSYrm_VHSUBPDYrm_VHSUBPSYrm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry X86WriteProcResTable[] = {
  { 0,  0}, // Invalid
  {18,  1}, // #1
  {19,  1}, // #2
  { 4,  1}, // #3
  { 8,  1}, // #4
  {13,  1}, // #5
  {17,  1}, // #6
  {18,  1}, // #7
  {19,  3}, // #8
  {13,  1}, // #9
  {17,  1}, // #10
  {18,  1}, // #11
  {19,  2}, // #12
  { 3,  1}, // #13
  { 7,  1}, // #14
  {11,  1}, // #15
  {12,  1}, // #16
  {13,  1}, // #17
  {15,  1}, // #18
  {17,  1}, // #19
  {18,  1}, // #20
  {19,  2}, // #21
  { 3,  1}, // #22
  { 7,  1}, // #23
  {11,  1}, // #24
  {12,  1}, // #25
  {15,  1}, // #26
  {18,  1}, // #27
  {19,  1}, // #28
  { 5,  1}, // #29
  { 9,  1}, // #30
  {11,  1}, // #31
  {13,  1}, // #32
  {14,  1}, // #33
  {15,  1}, // #34
  {16,  1}, // #35
  {17,  1}, // #36
  {18,  1}, // #37
  {19,  2}, // #38
  { 5,  1}, // #39
  { 9,  1}, // #40
  {11,  1}, // #41
  {14,  1}, // #42
  {15,  1}, // #43
  {16,  1}, // #44
  {18,  1}, // #45
  {19,  1}, // #46
  { 5,  2}, // #47
  { 9,  2}, // #48
  {11,  2}, // #49
  {13,  1}, // #50
  {14,  2}, // #51
  {15,  2}, // #52
  {16,  2}, // #53
  {17,  1}, // #54
  {18,  2}, // #55
  {19,  3}, // #56
  { 5,  2}, // #57
  { 9,  2}, // #58
  {11,  2}, // #59
  {14,  2}, // #60
  {15,  2}, // #61
  {16,  2}, // #62
  {18,  2}, // #63
  {19,  2}, // #64
  { 2,  2}, // #65
  { 5,  7}, // #66
  { 7,  2}, // #67
  { 8,  2}, // #68
  { 9,  9}, // #69
  {10,  2}, // #70
  {11,  7}, // #71
  {13,  1}, // #72
  {14,  7}, // #73
  {15,  9}, // #74
  {16,  9}, // #75
  {17,  1}, // #76
  {18,  9}, // #77
  {19, 10}, // #78
  { 2,  2}, // #79
  { 5,  8}, // #80
  { 7,  2}, // #81
  { 8,  2}, // #82
  { 9, 10}, // #83
  {10,  2}, // #84
  {11,  8}, // #85
  {14,  8}, // #86
  {15, 10}, // #87
  {16, 10}, // #88
  {18, 10}, // #89
  {19, 10}, // #90
  {10,  1}, // #91
  {13,  1}, // #92
  {16,  1}, // #93
  {17,  1}, // #94
  {18,  1}, // #95
  {19,  2}, // #96
  {10,  1}, // #97
  {16,  1}, // #98
  {18,  1}, // #99
  {19,  1}, // #100
  {13,  1}, // #101
  {17,  1}, // #102
  {19,  1}, // #103
  { 1, 10}, // #104
  { 2,  1}, // #105
  { 7,  1}, // #106
  { 8,  1}, // #107
  { 9,  1}, // #108
  {10,  1}, // #109
  {13,  1}, // #110
  {15,  1}, // #111
  {16,  1}, // #112
  {17,  1}, // #113
  {18,  1}, // #114
  {19,  2}, // #115
  { 1, 10}, // #116
  { 2,  1}, // #117
  { 7,  1}, // #118
  { 8,  1}, // #119
  { 9,  1}, // #120
  {10,  1}, // #121
  {15,  1}, // #122
  {16,  1}, // #123
  {18,  1}, // #124
  {19,  1}, // #125
  { 4,  1}, // #126
  { 8,  1}, // #127
  {13,  1}, // #128
  {15,  1}, // #129
  {17,  1}, // #130
  {18,  1}, // #131
  {19,  3}, // #132
  { 3,  1}, // #133
  { 5,  2}, // #134
  { 7,  1}, // #135
  { 9,  2}, // #136
  {11,  3}, // #137
  {12,  1}, // #138
  {13,  1}, // #139
  {14,  2}, // #140
  {15,  3}, // #141
  {16,  2}, // #142
  {17,  1}, // #143
  {18,  3}, // #144
  {19,  4}, // #145
  { 3,  1}, // #146
  { 5,  2}, // #147
  { 7,  1}, // #148
  { 9,  2}, // #149
  {11,  3}, // #150
  {12,  1}, // #151
  {14,  2}, // #152
  {15,  3}, // #153
  {16,  2}, // #154
  {18,  3}, // #155
  {19,  3}, // #156
  { 4,  1}, // #157
  { 8,  1}, // #158
  {17,  1}, // #159
  {19,  2}, // #160
  {11,  1}, // #161
  {15,  1}, // #162
  {18,  1}, // #163
  {19,  1}, // #164
  { 4,  1}, // #165
  { 8,  1}, // #166
  {13,  1}, // #167
  {17,  1}, // #168
  {19,  2}, // #169
  {11,  1}, // #170
  {13,  1}, // #171
  {15,  1}, // #172
  {17,  1}, // #173
  {18,  1}, // #174
  {19,  2}, // #175
  { 2,  1}, // #176
  { 5,  2}, // #177
  { 7,  1}, // #178
  { 8,  1}, // #179
  { 9,  3}, // #180
  {10,  1}, // #181
  {11,  2}, // #182
  {13,  1}, // #183
  {14,  2}, // #184
  {15,  3}, // #185
  {16,  3}, // #186
  {17,  1}, // #187
  {18,  3}, // #188
  {19,  4}, // #189
  { 2,  1}, // #190
  { 5,  2}, // #191
  { 7,  1}, // #192
  { 8,  1}, // #193
  { 9,  3}, // #194
  {10,  1}, // #195
  {11,  2}, // #196
  {14,  2}, // #197
  {15,  3}, // #198
  {16,  3}, // #199
  {18,  3}, // #200
  {19,  3}, // #201
  { 2,  2}, // #202
  { 5,  1}, // #203
  { 7,  2}, // #204
  { 8,  2}, // #205
  { 9,  3}, // #206
  {10,  2}, // #207
  {11,  1}, // #208
  {13,  1}, // #209
  {14,  1}, // #210
  {15,  3}, // #211
  {16,  3}, // #212
  {17,  1}, // #213
  {18,  3}, // #214
  {19,  4}, // #215
  { 2,  2}, // #216
  { 5,  1}, // #217
  { 7,  2}, // #218
  { 8,  2}, // #219
  { 9,  3}, // #220
  {10,  2}, // #221
  {11,  1}, // #222
  {14,  1}, // #223
  {15,  3}, // #224
  {16,  3}, // #225
  {18,  3}, // #226
  {19,  3}, // #227
  { 2,  3}, // #228
  { 5,  2}, // #229
  { 7,  3}, // #230
  { 8,  3}, // #231
  { 9,  5}, // #232
  {10,  3}, // #233
  {11,  2}, // #234
  {12,  2}, // #235
  {13,  1}, // #236
  {14,  2}, // #237
  {15,  5}, // #238
  {16,  5}, // #239
  {17,  1}, // #240
  {18,  7}, // #241
  {19,  8}, // #242
  { 9,  6}, // #243
  {12,  2}, // #244
  {15,  6}, // #245
  {16,  6}, // #246
  {18,  8}, // #247
  {19,  8}, // #248
  { 9,  6}, // #249
  {12,  2}, // #250
  {13,  1}, // #251
  {15,  6}, // #252
  {16,  6}, // #253
  {17,  1}, // #254
  {18,  8}, // #255
  {19,  9}, // #256
  { 2,  3}, // #257
  { 5,  4}, // #258
  { 7,  3}, // #259
  { 8,  3}, // #260
  { 9,  7}, // #261
  {10,  3}, // #262
  {11,  4}, // #263
  {12,  2}, // #264
  {14,  4}, // #265
  {15,  7}, // #266
  {16,  7}, // #267
  {18,  9}, // #268
  {19,  9}, // #269
  { 2,  3}, // #270
  { 7,  3}, // #271
  { 8,  3}, // #272
  { 9,  3}, // #273
  {10,  3}, // #274
  {13,  1}, // #275
  {15,  3}, // #276
  {16,  3}, // #277
  {17,  1}, // #278
  {18,  3}, // #279
  {19,  4}, // #280
  { 2,  3}, // #281
  { 7,  3}, // #282
  { 8,  3}, // #283
  { 9,  3}, // #284
  {10,  3}, // #285
  {15,  3}, // #286
  {16,  3}, // #287
  {18,  3}, // #288
  {19,  3}, // #289
  { 4,  1}, // #290
  { 5,  1}, // #291
  { 8,  1}, // #292
  { 9,  1}, // #293
  {11,  1}, // #294
  {13,  1}, // #295
  {14,  1}, // #296
  {15,  1}, // #297
  {16,  1}, // #298
  {17,  1}, // #299
  {18,  1}, // #300
  {19,  3}, // #301
  { 4,  1}, // #302
  { 8,  1}, // #303
  {19,  1}, // #304
  { 4,  1}, // #305
  { 8,  1}, // #306
  {10,  1}, // #307
  {13,  1}, // #308
  {16,  1}, // #309
  {17,  1}, // #310
  {18,  1}, // #311
  {19,  3}, // #312
  { 4,  1}, // #313
  { 8,  1}, // #314
  {17,  1}, // #315
  {18,  1}, // #316
  {19,  3}, // #317
  { 3,  1}, // #318
  { 4,  1}, // #319
  { 7,  1}, // #320
  { 8,  1}, // #321
  {11,  1}, // #322
  {12,  1}, // #323
  {13,  1}, // #324
  {15,  1}, // #325
  {17,  1}, // #326
  {18,  1}, // #327
  {19,  3}, // #328
  {13,  1}, // #329
  {17,  1}, // #330
  {18,  2}, // #331
  {19,  3}, // #332
  { 4,  1}, // #333
  { 8,  1}, // #334
  {17,  2}, // #335
  {19,  3}, // #336
  { 3,  1}, // #337
  { 4,  1}, // #338
  { 7,  1}, // #339
  { 8,  1}, // #340
  {10,  1}, // #341
  {11,  1}, // #342
  {12,  1}, // #343
  {15,  1}, // #344
  {16,  1}, // #345
  {17,  1}, // #346
  {18,  2}, // #347
  {19,  4}, // #348
  {10,  1}, // #349
  {11,  1}, // #350
  {15,  1}, // #351
  {16,  1}, // #352
  {18,  2}, // #353
  {19,  2}, // #354
  { 4,  1}, // #355
  { 8,  1}, // #356
  {10,  1}, // #357
  {16,  1}, // #358
  {17,  1}, // #359
  {18,  1}, // #360
  {19,  3}, // #361
  { 4,  1}, // #362
  { 8,  1}, // #363
  {11,  1}, // #364
  {15,  1}, // #365
  {17,  1}, // #366
  {18,  1}, // #367
  {19,  3}, // #368
  { 4,  1}, // #369
  { 8,  1}, // #370
  {10,  1}, // #371
  {11,  1}, // #372
  {15,  1}, // #373
  {16,  1}, // #374
  {17,  1}, // #375
  {18,  2}, // #376
  {19,  4}, // #377
  { 4,  1}, // #378
  { 8,  1}, // #379
  {17,  2}, // #380
  {18,  2}, // #381
  {19,  5}, // #382
  { 4,  1}, // #383
  { 8,  1}, // #384
  {17,  2}, // #385
  {18,  3}, // #386
  {19,  6}, // #387
  { 4,  1}, // #388
  { 8,  1}, // #389
  {17,  2}, // #390
  {18,  1}, // #391
  {19,  4}, // #392
  { 3,  1}, // #393
  { 7,  1}, // #394
  {11,  1}, // #395
  {12,  1}, // #396
  {15,  1}, // #397
  {18,  2}, // #398
  {19,  2}, // #399
  { 3,  1}, // #400
  { 7,  1}, // #401
  {11,  1}, // #402
  {12,  1}, // #403
  {13,  1}, // #404
  {15,  1}, // #405
  {17,  1}, // #406
  {18,  2}, // #407
  {19,  3}, // #408
  { 3,  1}, // #409
  { 6,  1}, // #410
  { 7,  1}, // #411
  {10,  1}, // #412
  {11,  1}, // #413
  {12,  2}, // #414
  {14,  1}, // #415
  {15,  1}, // #416
  {16,  1}, // #417
  {18,  2}, // #418
  {19,  2}, // #419
  { 3,  1}, // #420
  { 6,  1}, // #421
  { 7,  1}, // #422
  {10,  1}, // #423
  {11,  1}, // #424
  {12,  2}, // #425
  {13,  1}, // #426
  {14,  1}, // #427
  {15,  1}, // #428
  {16,  1}, // #429
  {17,  1}, // #430
  {18,  2}, // #431
  {19,  3}, // #432
  { 3,  1}, // #433
  { 7,  1}, // #434
  {11,  1}, // #435
  {12,  1}, // #436
  {15,  1}, // #437
  {16,  2}, // #438
  {18,  3}, // #439
  {19,  3}, // #440
  { 3,  1}, // #441
  { 7,  1}, // #442
  {11,  1}, // #443
  {12,  1}, // #444
  {13,  1}, // #445
  {15,  1}, // #446
  {16,  2}, // #447
  {17,  1}, // #448
  {18,  3}, // #449
  {19,  4}, // #450
  { 2,  1}, // #451
  { 3,  1}, // #452
  { 5,  1}, // #453
  { 6,  1}, // #454
  { 7,  2}, // #455
  { 8,  1}, // #456
  { 9,  2}, // #457
  {10,  2}, // #458
  {11,  2}, // #459
  {12,  2}, // #460
  {14,  2}, // #461
  {15,  3}, // #462
  {16,  3}, // #463
  {18,  4}, // #464
  {19,  4}, // #465
  { 4,  1}, // #466
  { 8,  1}, // #467
  {10,  2}, // #468
  {16,  2}, // #469
  {17,  1}, // #470
  {18,  2}, // #471
  {19,  4}, // #472
  {10,  3}, // #473
  {16,  3}, // #474
  {18,  3}, // #475
  {19,  3}, // #476
  { 4,  1}, // #477
  { 8,  1}, // #478
  {10,  3}, // #479
  {13,  2}, // #480
  {16,  3}, // #481
  {17,  2}, // #482
  {18,  3}, // #483
  {19,  6}, // #484
  {10,  2}, // #485
  {16,  2}, // #486
  {18,  2}, // #487
  {19,  2}, // #488
  { 4,  1}, // #489
  { 8,  1}, // #490
  {10,  2}, // #491
  {16,  2}, // #492
  {17,  2}, // #493
  {18,  2}, // #494
  {19,  5}, // #495
  {10,  2}, // #496
  {16,  2}, // #497
  {18,  3}, // #498
  {19,  3}, // #499
  { 6,  1}, // #500
  {10,  1}, // #501
  {11,  1}, // #502
  {12,  1}, // #503
  {14,  1}, // #504
  {15,  1}, // #505
  {16,  1}, // #506
  {18,  2}, // #507
  {19,  2}, // #508
  { 6,  1}, // #509
  {10,  1}, // #510
  {12,  1}, // #511
  {14,  1}, // #512
  {16,  1}, // #513
  {18,  2}, // #514
  {19,  2}, // #515
  { 4,  1}, // #516
  { 6,  1}, // #517
  { 8,  1}, // #518
  {10,  1}, // #519
  {12,  1}, // #520
  {14,  1}, // #521
  {16,  1}, // #522
  {17,  1}, // #523
  {18,  1}, // #524
  {19,  3}, // #525
  { 4,  1}, // #526
  { 6,  1}, // #527
  { 8,  1}, // #528
  {10,  1}, // #529
  {12,  1}, // #530
  {14,  1}, // #531
  {16,  1}, // #532
  {17,  2}, // #533
  {18,  1}, // #534
  {19,  4}, // #535
  { 6,  1}, // #536
  {10,  1}, // #537
  {12,  1}, // #538
  {14,  1}, // #539
  {16,  1}, // #540
  {17,  1}, // #541
  {18,  1}, // #542
  {19,  2}, // #543
  { 6,  2}, // #544
  {10,  2}, // #545
  {12,  2}, // #546
  {13,  1}, // #547
  {14,  2}, // #548
  {15,  1}, // #549
  {16,  2}, // #550
  {17,  1}, // #551
  {18,  3}, // #552
  {19,  4}, // #553
  { 4,  1}, // #554
  { 8,  1}, // #555
  {13,  2}, // #556
  {17,  2}, // #557
  {18,  2}, // #558
  {19,  5}, // #559
  {13,  2}, // #560
  {17,  2}, // #561
  {18,  3}, // #562
  {19,  5}, // #563
  { 6,  3}, // #564
  { 9,  1}, // #565
  {10,  3}, // #566
  {12,  3}, // #567
  {14,  3}, // #568
  {15,  1}, // #569
  {16,  4}, // #570
  {18,  4}, // #571
  {19,  4}, // #572
  {13,  1}, // #573
  {15, 16}, // #574
  {17,  1}, // #575
  {18, 16}, // #576
  {19, 17}, // #577
  { 7,  1}, // #578
  {15,  1}, // #579
  {18,  1}, // #580
  {19,  1}, // #581
  { 7,  2}, // #582
  {13,  2}, // #583
  {15,  2}, // #584
  {17,  2}, // #585
  {18,  2}, // #586
  {19,  4}, // #587
  { 4,  2}, // #588
  { 8,  2}, // #589
  {13,  2}, // #590
  {17,  2}, // #591
  {18,  3}, // #592
  {19,  7}, // #593
  { 7,  1}, // #594
  {13,  1}, // #595
  {15,  1}, // #596
  {17,  1}, // #597
  {18,  1}, // #598
  {19,  2}, // #599
  { 2,  1}, // #600
  { 7,  1}, // #601
  { 8,  1}, // #602
  { 9,  1}, // #603
  {10,  1}, // #604
  {15,  1}, // #605
  {16,  1}, // #606
  {18,  2}, // #607
  {19,  2}, // #608
  { 2,  1}, // #609
  { 4,  1}, // #610
  { 7,  1}, // #611
  { 8,  2}, // #612
  { 9,  1}, // #613
  {10,  1}, // #614
  {15,  1}, // #615
  {16,  1}, // #616
  {17,  1}, // #617
  {18,  1}, // #618
  {19,  3}, // #619
  { 6,  1}, // #620
  { 7,  1}, // #621
  {10,  1}, // #622
  {12,  1}, // #623
  {13,  1}, // #624
  {14,  1}, // #625
  {15,  1}, // #626
  {16,  1}, // #627
  {17,  1}, // #628
  {18,  2}, // #629
  {19,  3}, // #630
  { 3,  2}, // #631
  { 7,  2}, // #632
  {11,  2}, // #633
  {12,  2}, // #634
  {13,  1}, // #635
  {15,  2}, // #636
  {17,  1}, // #637
  {18,  2}, // #638
  {19,  3}, // #639
  { 3,  2}, // #640
  { 7,  2}, // #641
  {11,  2}, // #642
  {12,  2}, // #643
  {15,  2}, // #644
  {18,  2}, // #645
  {19,  2}, // #646
  {18,  5}, // #647
  {19,  5}, // #648
  { 5,  1}, // #649
  { 7,  1}, // #650
  { 9,  1}, // #651
  {11,  1}, // #652
  {14,  1}, // #653
  {15,  2}, // #654
  {16,  1}, // #655
  {18,  2}, // #656
  {19,  2}, // #657
  { 5,  3}, // #658
  { 9,  3}, // #659
  {11,  3}, // #660
  {14,  3}, // #661
  {15,  3}, // #662
  {16,  3}, // #663
  {18,  3}, // #664
  {19,  3}, // #665
  { 5,  3}, // #666
  { 9,  3}, // #667
  {11,  3}, // #668
  {13,  1}, // #669
  {14,  3}, // #670
  {15,  3}, // #671
  {16,  3}, // #672
  {17,  1}, // #673
  {18,  3}, // #674
  {19,  4}, // #675
  { 2,  1}, // #676
  { 4,  1}, // #677
  { 7,  1}, // #678
  { 8,  2}, // #679
  { 9,  1}, // #680
  {10,  1}, // #681
  {13,  2}, // #682
  {15,  1}, // #683
  {16,  1}, // #684
  {17,  2}, // #685
  {18,  1}, // #686
  {19,  4}, // #687
  { 8,  4}, // #688
  {13,  4}, // #689
  {14,  2}, // #690
  {16,  2}, // #691
  {17,  4}, // #692
  {18,  2}, // #693
  {19, 10}, // #694
  { 2,  1}, // #695
  { 3,  1}, // #696
  { 4,  1}, // #697
  { 7,  2}, // #698
  { 8,  2}, // #699
  { 9,  1}, // #700
  {10,  1}, // #701
  {11,  1}, // #702
  {12,  1}, // #703
  {13,  1}, // #704
  {15,  2}, // #705
  {16,  1}, // #706
  {17,  1}, // #707
  {18,  2}, // #708
  {19,  4}, // #709
  { 2,  1}, // #710
  { 5,  1}, // #711
  { 7,  1}, // #712
  { 8,  1}, // #713
  { 9,  2}, // #714
  {10,  1}, // #715
  {11,  1}, // #716
  {14,  1}, // #717
  {15,  2}, // #718
  {16,  2}, // #719
  {18,  2}, // #720
  {19,  2}, // #721
  { 5,  1}, // #722
  { 7,  1}, // #723
  { 9,  1}, // #724
  {11,  1}, // #725
  {13,  1}, // #726
  {14,  1}, // #727
  {15,  2}, // #728
  {16,  1}, // #729
  {17,  1}, // #730
  {18,  2}, // #731
  {19,  3}, // #732
  { 2,  2}, // #733
  { 7,  2}, // #734
  { 8,  2}, // #735
  { 9,  2}, // #736
  {10,  2}, // #737
  {15,  2}, // #738
  {16,  2}, // #739
  {18,  2}, // #740
  {19,  2}, // #741
  { 2,  2}, // #742
  { 7,  2}, // #743
  { 8,  2}, // #744
  { 9,  2}, // #745
  {10,  2}, // #746
  {13,  1}, // #747
  {15,  2}, // #748
  {16,  2}, // #749
  {17,  1}, // #750
  {18,  2}, // #751
  {19,  3}, // #752
  { 2,  1}, // #753
  { 5,  1}, // #754
  { 7,  1}, // #755
  { 8,  1}, // #756
  { 9,  2}, // #757
  {10,  1}, // #758
  {11,  1}, // #759
  {13,  1}, // #760
  {14,  1}, // #761
  {15,  2}, // #762
  {16,  2}, // #763
  {17,  1}, // #764
  {18,  2}, // #765
  {19,  3}, // #766
  { 3,  1}, // #767
  { 5,  1}, // #768
  { 7,  1}, // #769
  { 9,  1}, // #770
  {11,  2}, // #771
  {12,  1}, // #772
  {14,  1}, // #773
  {15,  2}, // #774
  {16,  1}, // #775
  {18,  2}, // #776
  {19,  2}, // #777
  { 3,  1}, // #778
  { 5,  1}, // #779
  { 7,  1}, // #780
  { 9,  1}, // #781
  {11,  2}, // #782
  {12,  1}, // #783
  {13,  1}, // #784
  {14,  1}, // #785
  {15,  2}, // #786
  {16,  1}, // #787
  {17,  1}, // #788
  {18,  2}, // #789
  {19,  3}, // #790
  { 2,  1}, // #791
  { 3,  1}, // #792
  { 7,  2}, // #793
  { 8,  1}, // #794
  { 9,  1}, // #795
  {10,  1}, // #796
  {11,  1}, // #797
  {12,  1}, // #798
  {15,  2}, // #799
  {16,  1}, // #800
  {18,  2}, // #801
  {19,  2}, // #802
  { 2,  1}, // #803
  { 3,  1}, // #804
  { 7,  2}, // #805
  { 8,  1}, // #806
  { 9,  1}, // #807
  {10,  1}, // #808
  {11,  1}, // #809
  {12,  1}, // #810
  {13,  1}, // #811
  {15,  2}, // #812
  {16,  1}, // #813
  {17,  1}, // #814
  {18,  2}, // #815
  {19,  3}, // #816
  { 3,  1}, // #817
  { 4,  1}, // #818
  { 5,  1}, // #819
  { 7,  1}, // #820
  { 8,  1}, // #821
  { 9,  1}, // #822
  {11,  2}, // #823
  {12,  1}, // #824
  {13,  1}, // #825
  {14,  1}, // #826
  {15,  2}, // #827
  {16,  1}, // #828
  {17,  1}, // #829
  {18,  2}, // #830
  {19,  4}, // #831
  { 2,  2}, // #832
  { 7,  2}, // #833
  { 8,  2}, // #834
  { 9,  2}, // #835
  {10,  2}, // #836
  {11,  1}, // #837
  {15,  3}, // #838
  {16,  2}, // #839
  {18,  3}, // #840
  {19,  3}, // #841
  { 2,  2}, // #842
  { 7,  2}, // #843
  { 8,  2}, // #844
  { 9,  2}, // #845
  {10,  2}, // #846
  {11,  1}, // #847
  {13,  1}, // #848
  {15,  3}, // #849
  {16,  2}, // #850
  {17,  1}, // #851
  {18,  3}, // #852
  {19,  4}, // #853
  { 2,  2}, // #854
  { 3,  1}, // #855
  { 5,  1}, // #856
  { 7,  3}, // #857
  { 8,  2}, // #858
  { 9,  3}, // #859
  {10,  2}, // #860
  {11,  2}, // #861
  {12,  1}, // #862
  {14,  1}, // #863
  {15,  4}, // #864
  {16,  3}, // #865
  {18,  4}, // #866
  {19,  4}, // #867
  { 2,  2}, // #868
  { 3,  1}, // #869
  { 5,  1}, // #870
  { 6,  1}, // #871
  { 7,  3}, // #872
  { 8,  2}, // #873
  { 9,  3}, // #874
  {10,  3}, // #875
  {11,  2}, // #876
  {12,  2}, // #877
  {13,  1}, // #878
  {14,  2}, // #879
  {15,  4}, // #880
  {16,  4}, // #881
  {17,  1}, // #882
  {18,  5}, // #883
  {19,  6}, // #884
  { 2,  1}, // #885
  { 3,  1}, // #886
  { 5,  1}, // #887
  { 7,  2}, // #888
  { 8,  1}, // #889
  { 9,  2}, // #890
  {10,  1}, // #891
  {11,  2}, // #892
  {12,  1}, // #893
  {14,  1}, // #894
  {15,  3}, // #895
  {16,  2}, // #896
  {18,  3}, // #897
  {19,  3}, // #898
  { 2,  1}, // #899
  { 3,  1}, // #900
  { 5,  1}, // #901
  { 7,  2}, // #902
  { 8,  1}, // #903
  { 9,  2}, // #904
  {10,  1}, // #905
  {11,  2}, // #906
  {12,  1}, // #907
  {13,  1}, // #908
  {14,  1}, // #909
  {15,  3}, // #910
  {16,  2}, // #911
  {17,  1}, // #912
  {18,  3}, // #913
  {19,  4}, // #914
  { 2,  1}, // #915
  { 6,  1}, // #916
  { 7,  1}, // #917
  { 8,  1}, // #918
  { 9,  1}, // #919
  {10,  2}, // #920
  {12,  1}, // #921
  {13,  1}, // #922
  {14,  1}, // #923
  {15,  1}, // #924
  {16,  2}, // #925
  {17,  1}, // #926
  {18,  2}, // #927
  {19,  3}, // #928
  { 2,  1}, // #929
  { 4,  1}, // #930
  { 6,  1}, // #931
  { 7,  1}, // #932
  { 8,  2}, // #933
  { 9,  1}, // #934
  {10,  2}, // #935
  {12,  1}, // #936
  {14,  1}, // #937
  {15,  1}, // #938
  {16,  2}, // #939
  {17,  1}, // #940
  {18,  2}, // #941
  {19,  4}, // #942
  { 2,  1}, // #943
  { 3,  3}, // #944
  { 9,  1}, // #945
  {10,  2}, // #946
  {11,  1}, // #947
  { 2,  1}, // #948
  { 3,  2}, // #949
  { 9,  1}, // #950
  {10,  1}, // #951
  { 3,  2}, // #952
  { 6,  1}, // #953
  { 8,  1}, // #954
  { 9,  1}, // #955
  {10,  1}, // #956
  { 3,  1}, // #957
  { 6,  1}, // #958
  { 8,  1}, // #959
  { 3,  2}, // #960
  { 8,  1}, // #961
  { 9,  1}, // #962
  {10,  1}, // #963
  {12,  1}, // #964
  { 3,  1}, // #965
  { 8,  1}, // #966
  {12,  1}, // #967
  { 3,  1}, // #968
  { 9,  1}, // #969
  {10,  1}, // #970
  {12,  1}, // #971
  { 3,  2}, // #972
  { 7,  1}, // #973
  { 8,  1}, // #974
  { 9,  1}, // #975
  {10,  1}, // #976
  { 3,  1}, // #977
  { 7,  1}, // #978
  { 8,  1}, // #979
  { 1,  1}, // #980
  { 2,  1}, // #981
  { 3,  2}, // #982
  { 4, 25}, // #983
  { 9,  1}, // #984
  {10,  1}, // #985
  { 1,  1}, // #986
  { 2,  1}, // #987
  { 3,  1}, // #988
  { 4, 25}, // #989
  { 3,  2}, // #990
  { 5, 19}, // #991
  { 7,  1}, // #992
  { 8,  1}, // #993
  { 9,  1}, // #994
  {10,  1}, // #995
  { 3,  3}, // #996
  { 8,  1}, // #997
  { 9,  1}, // #998
  {10,  2}, // #999
  {11,  1}, // #1000
  { 1,  1}, // #1001
  { 2,  1}, // #1002
  { 3,  2}, // #1003
  { 9,  1}, // #1004
  {10,  1}, // #1005
  { 3,  1}, // #1006
  {10,  1}, // #1007
  {11,  1}, // #1008
  { 3,  3}, // #1009
  { 6,  2}, // #1010
  { 8,  2}, // #1011
  { 9,  1}, // #1012
  {10,  1}, // #1013
  { 3,  2}, // #1014
  { 6,  2}, // #1015
  { 8,  2}, // #1016
  { 1,  5}, // #1017
  { 2,  5}, // #1018
  { 3,  6}, // #1019
  { 9,  1}, // #1020
  {10,  1}, // #1021
  { 1,  5}, // #1022
  { 2,  5}, // #1023
  { 3,  5}, // #1024
  { 3,  3}, // #1025
  { 8,  2}, // #1026
  { 9,  1}, // #1027
  {10,  1}, // #1028
  { 3,  2}, // #1029
  { 8,  2}, // #1030
  { 3,  6}, // #1031
  { 8,  5}, // #1032
  { 9,  1}, // #1033
  {10,  1}, // #1034
  { 3,  5}, // #1035
  { 8,  5}, // #1036
  { 2,  1}, // #1037
  { 3,  2}, // #1038
  {10,  1}, // #1039
  {11,  1}, // #1040
  { 3,  2}, // #1041
  { 5, 21}, // #1042
  { 7,  1}, // #1043
  { 8,  1}, // #1044
  { 9,  1}, // #1045
  {10,  1}, // #1046
  { 3,  3}, // #1047
  { 7,  1}, // #1048
  { 8,  1}, // #1049
  { 9,  1}, // #1050
  {10,  2}, // #1051
  {11,  1}, // #1052
  { 4,  1}, // #1053
  { 8,  1}, // #1054
  { 9,  1}, // #1055
  {10,  3}, // #1056
  { 3,  1}, // #1057
  { 7,  1}, // #1058
  { 8,  1}, // #1059
  { 9,  1}, // #1060
  {10,  2}, // #1061
  { 3,  1}, // #1062
  { 7,  1}, // #1063
  { 9,  1}, // #1064
  {10,  1}, // #1065
  { 8,  1}, // #1066
  { 9,  2}, // #1067
  {10,  3}, // #1068
  { 8,  1}, // #1069
  { 9, 10}, // #1070
  {10, 11}, // #1071
  { 9, 11}, // #1072
  {10, 11}, // #1073
  { 6,  1}, // #1074
  { 8,  1}, // #1075
  { 9,  1}, // #1076
  {10,  2}, // #1077
  { 6,  1}, // #1078
  { 9,  1}, // #1079
  {10,  1}, // #1080
  { 5,  1}, // #1081
  { 6,  1}, // #1082
  { 7,  1}, // #1083
  { 8,  1}, // #1084
  { 9,  1}, // #1085
  {10,  2}, // #1086
  { 5,  1}, // #1087
  { 6,  1}, // #1088
  { 7,  1}, // #1089
  { 9,  1}, // #1090
  {10,  1}, // #1091
  { 1, 10}, // #1092
  { 2,  1}, // #1093
  { 6,  1}, // #1094
  { 8,  1}, // #1095
  { 9,  1}, // #1096
  {10,  2}, // #1097
  { 1, 10}, // #1098
  { 2,  1}, // #1099
  { 6,  1}, // #1100
  { 9,  1}, // #1101
  {10,  1}, // #1102
  { 4,  1}, // #1103
  { 6,  1}, // #1104
  { 8,  1}, // #1105
  { 9,  1}, // #1106
  {10,  3}, // #1107
  { 2,  1}, // #1108
  { 3,  1}, // #1109
  { 5,  1}, // #1110
  { 6,  2}, // #1111
  { 7,  2}, // #1112
  { 8,  1}, // #1113
  { 9,  3}, // #1114
  {10,  4}, // #1115
  { 2,  1}, // #1116
  { 3,  1}, // #1117
  { 5,  1}, // #1118
  { 6,  2}, // #1119
  { 7,  2}, // #1120
  { 9,  3}, // #1121
  {10,  3}, // #1122
  { 3,  1}, // #1123
  { 5,  1}, // #1124
  { 6,  1}, // #1125
  { 7,  2}, // #1126
  { 8,  1}, // #1127
  { 9,  2}, // #1128
  {10,  3}, // #1129
  { 3,  1}, // #1130
  { 5,  1}, // #1131
  { 6,  1}, // #1132
  { 7,  2}, // #1133
  { 9,  2}, // #1134
  {10,  2}, // #1135
  { 8,  1}, // #1136
  { 9, 17}, // #1137
  {10, 18}, // #1138
  { 9, 18}, // #1139
  {10, 18}, // #1140
  { 8,  1}, // #1141
  { 9,  7}, // #1142
  {10,  8}, // #1143
  { 9,  8}, // #1144
  {10,  8}, // #1145
  { 4,  1}, // #1146
  { 7,  1}, // #1147
  { 8,  1}, // #1148
  { 9,  1}, // #1149
  {10,  3}, // #1150
  { 4,  1}, // #1151
  {10,  1}, // #1152
  { 2,  1}, // #1153
  { 5,  1}, // #1154
  { 6,  2}, // #1155
  { 7,  1}, // #1156
  { 8,  1}, // #1157
  { 9,  2}, // #1158
  {10,  3}, // #1159
  { 2,  1}, // #1160
  { 5,  1}, // #1161
  { 6,  2}, // #1162
  { 7,  1}, // #1163
  { 9,  2}, // #1164
  {10,  2}, // #1165
  { 3,  1}, // #1166
  { 4,  1}, // #1167
  { 7,  1}, // #1168
  { 8,  1}, // #1169
  { 9,  1}, // #1170
  {10,  3}, // #1171
  { 1,  1}, // #1172
  { 3,  1}, // #1173
  { 2,  1}, // #1174
  { 3,  1}, // #1175
  { 7,  1}, // #1176
  { 1,  5}, // #1177
  { 3,  5}, // #1178
  { 7,  1}, // #1179
  { 1,  1}, // #1180
  { 3,  1}, // #1181
  { 7,  1}, // #1182
  { 6,  1}, // #1183
  { 7,  1}, // #1184
  { 8, 25}, // #1185
  { 6,  1}, // #1186
  { 8, 25}, // #1187
  { 1,  1}, // #1188
  { 3,  1}, // #1189
  { 7,  1}, // #1190
  { 9, 34}, // #1191
  { 1,  1}, // #1192
  { 3,  1}, // #1193
  { 9, 34}, // #1194
  { 1,  1}, // #1195
  { 3,  1}, // #1196
  { 7,  2}, // #1197
  { 1,  1}, // #1198
  { 3,  1}, // #1199
  { 7,  1}, // #1200
  {10,  2}, // #1201
  { 1,  1}, // #1202
  { 3,  1}, // #1203
  {10,  2}, // #1204
  { 1,  1}, // #1205
  { 3,  1}, // #1206
  { 5,  1}, // #1207
  { 6,  1}, // #1208
  { 7,  1}, // #1209
  { 1, 10}, // #1210
  { 3, 10}, // #1211
  { 7,  1}, // #1212
  { 1, 21}, // #1213
  { 3, 21}, // #1214
  { 7,  1}, // #1215
  { 1, 17}, // #1216
  { 3, 17}, // #1217
  { 7,  1}, // #1218
  { 1, 13}, // #1219
  { 3, 13}, // #1220
  { 7,  1}, // #1221
  { 4,  1}, // #1222
  { 6,  1}, // #1223
  { 7,  2} // #1224
}; // X86WriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry X86WriteLatencyTable[] = {
  { 0,  0}, // Invalid
  {100,  0}, // #1 WriteMicrocoded_WriteSystem
  { 1,  0}, // #2 WriteALU_WriteVecLogic_WriteZero_WriteFBlend_WriteShift_WriteJump_WriteFShuffle_WriteStore_WriteMove_WriteLEA_WriteFence_WriteShuffle_WriteVecALU_WriteVecShift_WriteNop_WriteBlend_WriteRMW_Write2P237_P4_WritePushF_WritePushA_WritePopF_WritePopA_WriteP06_WriteBSwap32_WriteBSwap64_WriteMoveBE32rm_WriteMoveBE16mr_WriteMoveBE32mr_WriteMoveBE64mr_Write2P0156_2P237_P4_Write3P0156_2P237_P4_WriteP0156_2P237_P4_WriteShiftRMW_WriteShiftClLdRMW_Write2P06_WriteRotateRMW_WriteRotateRMWCL_WriteRCm1_WriteRCmi_WriteShDmr_WriteShDmrCL_WriteBTmr_WriteBTRSCmr_WriteSetCCm_WriteCldStd_WriteP15_WriteJCXZ_WriteLOOP_WriteCALLr_WriteCALLm_WriteRET_WriteRETI_WriteBOUND_WriteINTO_Write2P0156_P23_WriteP0156_P23_WriteSTOS_WriteXADD_WriteCMPXCHG_WriteCMPXCHG8B_WriteCMPXCHG16B_WritePAUSE_WriteXGETBV_WriteRDTSC_WriteRDPMC_WriteRDRAND_WriteST_FP80m_WriteFBSTP_WriteFNSTSW_WriteFNSTCW_WriteFNSAVE_WriteFRSTOR_WriteP1_P23_Write2P1_P23_Write5P0156_WriteFNINIT_WriteP5_WriteP01_P5_WritePBLENDWr_WriteVPBLENDDr_WritePEXTRm_WriteVPGATHERDD128_WriteVPGATHERDD256_WriteVPGATHERQD128_WriteVPGATHERQD256_WriteVPGATHERDQ128_WriteVPGATHERDQ256_WriteVPGATHERQQ128_WriteVPGATHERQQ256_WriteEXTRACTPSr_WriteVGATHERDPS128_WriteVGATHERDPS256_WriteVGATHERQPS128_WriteVGATHERQPS256_WriteVGATHERDPD128_WriteVGATHERDPD256_WriteVGATHERQPD128_WriteVGATHERQPD256_WriteVZEROUPPER_WriteVZEROALL_WritePHAdd_WriteFShuffle256_WriteShuffle256_WriteVarVecShift_WriteVarBlend_WriteFVarBlend
  { 5,  0}, // #3 WriteALULd_WriteVecLogicLd_WriteFBlendLd_WriteShiftLd_WriteJumpLd_WriteFHAdd_WriteFShuffleLd_WriteVecALULd_WriteShuffleLd_WriteVecIMul_WriteVecShiftLd_WriteFMul_WriteBlendLd_WriteFRcp_WriteFRsqrt_WriteVPBROADCAST128Ld_WritePCMPGTQr_WritePCMPGTQm_WriteCVTPD2PSYrr_WriteCVTPS2PDrm_WriteVCVTPS2PDYrr_WriteCVTSS2SDrm_WriteHADDSUBPr_WriteMULr_WriteFMADDr_WriteRSQRTr_WriteP5Ld_WriteLoad_WritePHAddLd_WriteShuffle256Ld_WriteFShuffle256Ld_WriteVarVecShiftLd
  { 1,  0}, // #4 WriteRMW
  { 7,  0}, // #5 WriteFAddLd_WriteAESDecEncLd_WriteCvtF2ILd_WriteCvtF2FLd_WriteIMulLd_WriteCLMulLd_WriteShuffle256Ld_WriteFShuffle256Ld_WriteXLAT_WriteMul64Ld_WriteP1_Lat3Ld_WriteFIST_WriteFLDCW_WriteVPBROADCAST256Ld_WriteVRCPPSr_WriteRSQRTPSYr_WriteSTMXCSR_WriteAESIMCLd_WriteAESKeyGenLd_WriteVecIMulLd_WriteFMulLd_WriteVarBlendLd_WritePCmpIStrM_WriteFRcpLd_WriteFRsqrtLd_WriteFVarBlendLd_WriteFHAddLd_WriteCvtI2FLd_WriteMPSAD
  { 3,  0}, // #6 WriteFAdd_WriteCvtF2I_WriteCvtF2F_WriteIMul_WriteIMulH_WritePHAdd_WriteFShuffle256_WriteShuffle256_WriteMul64_WriteShDrr_WriteShlDCL_WriteP1_Lat3_WriteVPMOVSX_WritePMOVMSKB_WritePHADDSUBr_WriteMOVMSKPr_WriteAESDecEnc_WriteCvtI2F_WriteFHAdd_WriteMPSAD_WriteFHAddY_WritePCmpIStrILd_WriteLoad
  {14,  0}, // #7 WriteAESIMCLd_WriteMASKMOVDQU_WriteVMASKMOVPYmr_WriteDPPSr_WriteCLMulLd
  {10,  0}, // #8 WriteAESKeyGenLd_WritePCmpEStrMLd_WritePCmpIStrMLd_WritePMULLDr_WritePMULLDm_WriteP1_P5_Lat6Ld_WriteROUNDm_WriteMPSADLd_WriteCLMulLd
  { 4,  0}, // #9 WriteLoad_WriteCvtI2F_WriteMul16_WriteMul32_WriteMulX32_WriteMulX64_WriteShrDCL_WriteP15Ld_WriteMOVS_WriteCMPS_WriteLD_F80m_WriteMMXPACKSSrm_WritePBLENDWm_WriteVPBLENDDm_WriteVPMASKMOVr_WriteEXTRACTPSm_WriteVEXTRACTF128m_WriteVMASKMOVPrm_WriteP1_P5_Lat4_WriteP0_P1_Lat4_WriteALULd_WriteShiftLd_WriteJumpLd_WritePCmpEStrILd_WriteVecLogicLd_WriteFBlendLd_WriteCvtF2I_WriteCvtF2F_WriteFShuffleLd_WriteVecALULd_WriteShuffleLd_WriteVecIMul_WriteVecShiftLd_WriteVarBlendLd_WriteBlendLd_WritePHAddLd_WriteFVarBlendLd_WriteShuffle256Ld_WriteFShuffle256Ld_WriteVarVecShiftLd
  { 8,  0}, // #10 WriteCvtI2FLd_WriteMul16Ld_WriteMul32Ld_WriteMulX32Ld_WriteMulX64Ld_WriteP1_P5_Lat4Ld_WriteP0_P1_Lat4Ld_WriteFAddLd_WriteAESDecEncLd_WriteCvtF2ILd_WriteCvtF2FLd_WriteFHAddLd_WriteMPSADLd_WriteFHAddYLd_WriteAESIMCLd_WriteAESKeyGenLd_WriteFMulLd_WriteFRcpLd_WriteFRsqrtLd
  {29,  0}, // #11 WriteIDivLd
  {25,  0}, // #12 WriteIDiv
  {16,  0}, // #13 WriteFDivLd
  {12,  0}, // #14 WriteFDiv_WritePCmpIStrMLd
  { 9,  0}, // #15 WriteFHAddLd_WriteVecIMulLd_WriteFMulLd_WriteFRcpLd_WriteFRsqrtLd_WriteCVTPD2PSYrm_WriteHADDSUBPm_WriteMULm_WriteDPPDr_WriteFMADDm_WriteRSQRTm
  { 6,  0}, // #16 WriteMPSADLd_WriteVarBlendLd_WritePHAddLd_WriteFVarBlendLd_WriteVarVecShiftLd_Write2P0156_Lat2Ld_WriteRCri_WriteFILD_WriteFNSTSWm_WritePHADDSUBm_WriteP1_P5_Lat6_WriteROUNDr_WriteLDMXCSR_WriteVecLogicLd_WriteFBlendLd_WriteIMulLd_WriteFShuffleLd_WriteVecALULd_WriteShuffleLd_WriteVecShiftLd_WriteBlendLd_WritePCmpIStrI_WriteShuffle256Ld_WriteFShuffle256Ld_WriteFAddLd_WriteFHAddLd
  { 3,  0}, // #17 WriteIMul
  { 3,  0}, // #18 WriteIMulH
  { 2,  0}, // #19 WriteVarBlend_WriteFVarBlend_WriteVarVecShift_Write2P0156_Lat2_WriteXCHG_Write3P06_Lat2_WriteRCr1_WriteFCMOVcc_WriteMMXPACKSSrr_WritePEXTRr_WritePTESTr_WritePShift_WriteVMOVMSKPYr_WriteCVTPS2PDrr_WriteCVTSS2SDrr_WriteAESIMC_WriteAESKeyGen_WriteVecIMul_WriteFMul_WriteCLMul_WriteFRcp_WriteFRsqrt
  {11,  0}, // #20 WritePCmpEStrILd_WritePCmpIStrILd_WriteFRNDINT_WriteVRCPPSm_WriteRSQRTPSYm_WritePCmpEStrMLd_WritePCmpIStrMLd
  { 1,  0}, // #21 WriteALU
  { 1,  0}, // #22 WriteStore
  {19,  0}, // #23 WriteFSqrtLd_WriteFPREM_WriteVDIVPSYrr_WriteVSQRTPSYr_WriteFDiv
  {15,  0}, // #24 WriteFSqrt_WriteFXTRACT
  { 7,  0}, // #25 WriteCvtF2FLd
  { 1,  0}, // #26 WriteRMW
  {21,  0}, // #27 WriteXCHGrm_WriteFSqrt_WritePCmpEStrILd
  {22,  0}, // #28 WriteDiv8_WriteDiv32_WriteIDiv32
  {23,  0}, // #29 WriteDiv16_WriteIDiv8_WriteIDiv16_WriteVDIVPSYrm_WriteVSQRTPSYm
  {32,  0}, // #30 WriteDiv64_WriteVSQRTPDYm
  {39,  0}, // #31 WriteIDiv64
  {47,  0}, // #32 WriteFBLD
  {75,  0}, // #33 WriteFSCALE
  {13,  0}, // #34 WriteMASKMOVQ_WriteVPMASKMOVm_WriteEMMS_WriteVMASKMOVPmr_WriteDPPDm_WritePCmpEStrI_WritePCmpEStrM_WritePCmpIStrMLd
  { 8,  0}, // #35 WriteP1_P5_Lat4Ld_WriteCvtF2FLd
  { 1,  0}, // #36 WriteRMW
  {27,  0}, // #37 WriteVDIVPDYrr
  {31,  0}, // #38 WriteVDIVPDYrm
  {18,  0}, // #39 WriteDPPSm_WritePCmpEStrILd_WritePCmpEStrMLd_WriteFSqrtLd
  {28,  0}, // #40 WriteVSQRTPDYr
  { 4,  0}, // #41 WriteALULd_WriteShiftLd_WriteFBlendLd_WriteShuffleLd
  { 1,  0}, // #42 WriteRMW
  {41,  0}, // #43 WriteIDivLd
  {24,  0}, // #44 WriteFDivLd
  { 6,  0}, // #45 WriteFBlendLd_WriteShuffleLd_WriteIMulLd
  { 1,  0}, // #46 WriteRMW_WriteIMulH
  { 6,  0}, // #47 WriteIMulLd
  { 6,  0}, // #48 WriteIMulH
  { 3,  0}, // #49 WriteIMul
  { 6,  0}, // #50 WriteIMulH
  {26,  0}, // #51 WriteFSqrtLd
  {37,  0}, // #52 WriteFDivLd
  {34,  0}, // #53 WriteFDiv
  { 3,  0}, // #54 WriteIMul
  { 1,  0}, // #55 WriteIMulH
  {17,  0} // #56 WritePCmpEStrMLd_WritePCmpIStrILd
}; // X86WriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry X86ReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0,  0,  4}, // #1
  {5,  0,  4}, // #2
  {6,  0,  4}, // #3
  {0,  0,  3}, // #4
  {5,  0,  3}, // #5
  {6,  0,  3} // #6
}; // X86ReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc HaswellModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_AAA_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #1
  {DBGFIELD("IIC_AAD_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #2
  {DBGFIELD("IIC_AAM_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #3
  {DBGFIELD("IIC_AAS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #4
  {DBGFIELD("IIC_BIN_CARRY_NONMEM_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #5
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #6
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_ReadAfterLd") 1, false, false,  9, 4,  3, 1,  1, 1}, // #7
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #8
  {DBGFIELD("IIC_BIN_NONMEM_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #9
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #10
  {DBGFIELD("WriteALU")           1, false, false,  1, 2,  2, 1,  0, 0}, // #11
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_ReadAfterLd") 1, false, false,  9, 4,  3, 1,  1, 1}, // #12
  {DBGFIELD("IIC_SSE_ALU_F64P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #13
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #14
  {DBGFIELD("IIC_SSE_ALU_F32P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #15
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #16
  {DBGFIELD("IIC_SSE_ALU_F64S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #17
  {DBGFIELD("IIC_SSE_ALU_F64S_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #18
  {DBGFIELD("IIC_SSE_ALU_F32S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #19
  {DBGFIELD("IIC_SSE_ALU_F32S_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #20
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #21
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #22
  {DBGFIELD("WriteFAddLd")        1, false, false, 13, 9,  5, 1,  0, 0}, // #23
  {DBGFIELD("WriteFAdd")          1, false, false, 22, 7,  6, 1,  0, 0}, // #24
  {DBGFIELD("IIC_BIN_MEM_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #25
  {DBGFIELD("IIC_AES_WriteAESDecEncLd_ReadAfterLd") 1, false, false, 29, 10,  5, 1,  1, 1}, // #26
  {DBGFIELD("IIC_AES_WriteAESDecEnc") 1, false, false, 39, 8,  5, 1,  0, 0}, // #27
  {DBGFIELD("IIC_AES_WriteAESIMCLd") 1, false, false, 47, 10,  7, 1,  0, 0}, // #28
  {DBGFIELD("IIC_AES_WriteAESIMC") 1, false, false, 57, 8,  7, 1,  0, 0}, // #29
  {DBGFIELD("WriteAESKeyGenLd")   1, false, false, 65, 14,  8, 1,  0, 0}, // #30
  {DBGFIELD("WriteAESKeyGen")     1, false, false, 79, 12,  8, 1,  0, 0}, // #31
  {DBGFIELD("WriteVecLogicLd_ReadAfterLd") 1, false, false, 17, 5,  3, 1,  1, 1}, // #32
  {DBGFIELD("WriteVecLogic")      1, false, false, 26, 3,  2, 1,  0, 0}, // #33
  {DBGFIELD("IIC_ARPL_MEM_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #34
  {DBGFIELD("IIC_ARPL_REG_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #35
  {DBGFIELD("WriteZero")          1, false, false,  0, 0,  2, 1,  0, 0}, // #36
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteFBlendLd_ReadAfterLd") 1, false, false, 17, 5,  3, 1,  1, 1}, // #37
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteFBlend") 1, false, false, 26, 3,  2, 1,  0, 0}, // #38
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_ReadAfterLd") 1, false, false, 17, 5,  3, 1,  1, 1}, // #39
  {DBGFIELD("IIC_ALU_NONMEM_WriteFBlend") 1, false, false, 26, 3,  2, 1,  0, 0}, // #40
  {DBGFIELD("IIC_BOUND_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #41
  {DBGFIELD("IIC_BIT_SCAN_MEM_WriteShiftLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #42
  {DBGFIELD("IIC_BIT_SCAN_REG_WriteShift") 1, false, false, 97, 4,  2, 1,  0, 0}, // #43
  {DBGFIELD("IIC_BSWAP_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #44
  {DBGFIELD("IIC_BT_MI_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #45
  {DBGFIELD("IIC_BT_MR_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #46
  {DBGFIELD("IIC_BT_RI_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #47
  {DBGFIELD("IIC_BT_RR_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #48
  {DBGFIELD("IIC_BTX_MI_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #49
  {DBGFIELD("IIC_BTX_MR_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #50
  {DBGFIELD("IIC_BTX_RI_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #51
  {DBGFIELD("IIC_BTX_RR_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #52
  {DBGFIELD("IIC_CALL_MEM_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #53
  {DBGFIELD("IIC_CALL_RI_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #54
  {DBGFIELD("IIC_CALL_MEM_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #55
  {DBGFIELD("WriteSystem")        1, false, false,  1, 2,  1, 1,  0, 0}, // #56
  {DBGFIELD("IIC_CBW")            0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_CLC_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #58
  {DBGFIELD("IIC_CLD_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #59
  {DBGFIELD("IIC_SSE_PREFETCH_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #60
  {DBGFIELD("IIC_CLI_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #61
  {DBGFIELD("IIC_CLTS_WriteALU")  1, false, false,  1, 2,  2, 1,  0, 0}, // #62
  {DBGFIELD("IIC_SSE_CLZERO_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #63
  {DBGFIELD("IIC_CMC_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #64
  {DBGFIELD("IIC_CMOV16_RM_WriteALULd_ReadAfterLd") 1, false, false,  9, 4,  3, 1,  1, 1}, // #65
  {DBGFIELD("IIC_CMOV16_RR_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #66
  {DBGFIELD("IIC_CMOV32_RM_WriteALULd_ReadAfterLd") 1, false, false,  9, 4,  3, 1,  1, 1}, // #67
  {DBGFIELD("IIC_CMOV32_RR_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #68
  {DBGFIELD("IIC_CMPS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #69
  {DBGFIELD("IIC_CMPXCHG_16B_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #70
  {DBGFIELD("IIC_CMPXCHG_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #71
  {DBGFIELD("IIC_CMPXCHG_REG_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #72
  {DBGFIELD("IIC_CMPXCHG_8B_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #73
  {DBGFIELD("IIC_CMPXCHG_MEM8_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #74
  {DBGFIELD("IIC_CMPXCHG_REG8_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #75
  {DBGFIELD("IIC_SSE_COMIS_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #76
  {DBGFIELD("IIC_SSE_COMIS_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #77
  {DBGFIELD("IIC_FCOMI_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #78
  {DBGFIELD("IIC_CPUID_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #79
  {DBGFIELD("IIC_CRC32_MEM_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #80
  {DBGFIELD("IIC_CRC32_REG_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #81
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtI2FLd") 1, false, false, 13, 9, 10, 1,  0, 0}, // #82
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtI2F") 1, false, false, 22, 7,  9, 1,  0, 0}, // #83
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtI2FLd") 1, false, false, 13, 9, 10, 1,  0, 0}, // #84
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtI2F") 1, false, false, 22, 7,  9, 1,  0, 0}, // #85
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #86
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2I") 1, false, false, 22, 7,  6, 1,  0, 0}, // #87
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2FLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #88
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2F") 1, false, false, 22, 7,  6, 1,  0, 0}, // #89
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #90
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtF2I") 1, false, false, 22, 7,  6, 1,  0, 0}, // #91
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RM_WriteCvtF2ILd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #92
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RR_WriteCvtF2I") 1, false, false, 22, 7,  6, 1,  0, 0}, // #93
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #94
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtF2F") 1, false, false, 22, 7,  6, 1,  0, 0}, // #95
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd") 1, false, false, 13, 9, 10, 1,  0, 0}, // #96
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtI2F") 1, false, false, 22, 7,  9, 1,  0, 0}, // #97
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RM_WriteCvtF2ILd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #98
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RR_WriteCvtF2I") 1, false, false, 22, 7,  6, 1,  0, 0}, // #99
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RM_WriteCvtF2ILd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #100
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RR_WriteCvtF2I") 1, false, false, 22, 7,  6, 1,  0, 0}, // #101
  {DBGFIELD("IIC_DAA_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIC_DAS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIC_UNARY_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #104
  {DBGFIELD("IIC_UNARY_REG_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #105
  {DBGFIELD("IIC_DIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #106
  {DBGFIELD("IIC_DIV16_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #107
  {DBGFIELD("IIC_DIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #108
  {DBGFIELD("IIC_DIV32_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #109
  {DBGFIELD("IIC_DIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #110
  {DBGFIELD("IIC_DIV64_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #111
  {DBGFIELD("IIC_DIV8_MEM_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #112
  {DBGFIELD("IIC_DIV8_REG_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #113
  {DBGFIELD("IIC_SSE_DIV_F64P_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 105, 11, 13, 1,  1, 1}, // #114
  {DBGFIELD("IIC_SSE_DIV_F64P_RR_WriteFDiv") 1, false, false, 117, 9, 14, 1,  0, 0}, // #115
  {DBGFIELD("IIC_SSE_DIV_F32P_RR_WriteFDiv") 1, false, false, 117, 9, 14, 1,  0, 0}, // #116
  {DBGFIELD("WriteFDivLd")        1, false, false, 105, 11, 13, 1,  0, 0}, // #117
  {DBGFIELD("WriteFDiv")          1, false, false, 117, 9, 14, 1,  0, 0}, // #118
  {DBGFIELD("IIC_SSE_DIV_F64S_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 105, 11, 13, 1,  1, 1}, // #119
  {DBGFIELD("IIC_SSE_DIV_F64S_RR_WriteFDiv") 1, false, false, 117, 9, 14, 1,  0, 0}, // #120
  {DBGFIELD("IIC_SSE_DIV_F32S_RR_WriteFDiv") 1, false, false, 117, 9, 14, 1,  0, 0}, // #121
  {DBGFIELD("IIC_SSE_DPPD_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #122
  {DBGFIELD("IIC_SSE_DPPD_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #123
  {DBGFIELD("IIC_SSE_DPPS_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #124
  {DBGFIELD("IIC_RET_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #125
  {DBGFIELD("IIC_ENTER_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #126
  {DBGFIELD("IIC_SSE_EXTRACTPS_RM_WriteFBlendLd_WriteRMW") 2, false, false, 126, 7,  3, 2,  0, 0}, // #127
  {DBGFIELD("IIC_SSE_EXTRACTPS_RR_WriteFBlend") 1, false, false, 26, 3,  2, 1,  0, 0}, // #128
  {DBGFIELD("IIC_F2XM1_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #129
  {DBGFIELD("IIC_CALL_FAR_PTR_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #130
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #131
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #132
  {DBGFIELD("IIC_JMP_FAR_PTR_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #133
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #134
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #135
  {DBGFIELD("IIC_FCOMPP_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #136
  {DBGFIELD("IIC_FPSTP_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #137
  {DBGFIELD("IIC_FFREE_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #138
  {DBGFIELD("IIC_FLDCW_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #139
  {DBGFIELD("IIC_FLDL_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #140
  {DBGFIELD("IIC_FNCLEX_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #141
  {DBGFIELD("IIC_FNINIT_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #142
  {DBGFIELD("IIC_FNOP_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #143
  {DBGFIELD("IIC_FNSTCW_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #144
  {DBGFIELD("IIC_FNSTSW_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #145
  {DBGFIELD("IIC_FPATAN_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #146
  {DBGFIELD("IIC_FPREM_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #147
  {DBGFIELD("IIC_FPREM1_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #148
  {DBGFIELD("IIC_FPTAN_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #149
  {DBGFIELD("IIC_FRNDINT_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #150
  {DBGFIELD("IIC_FSCALE_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #151
  {DBGFIELD("IIC_FSINCOS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #152
  {DBGFIELD("IIC_FXAM_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #153
  {DBGFIELD("IIC_FXRSTOR_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #154
  {DBGFIELD("IIC_FXSAVE_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #155
  {DBGFIELD("IIC_FXTRACT_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #156
  {DBGFIELD("IIC_FYL2X_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #157
  {DBGFIELD("IIC_FYL2XP1_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #158
  {DBGFIELD("IIC_SSE_HADDSUB_RM_WriteFHAddLd_ReadAfterLd") 4, false, false, 133, 13, 15, 1,  1, 1}, // #159
  {DBGFIELD("IIC_SSE_HADDSUB_RR_WriteFHAdd") 3, false, false, 146, 11,  3, 1,  0, 0}, // #160
  {DBGFIELD("IIC_HLT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #161
  {DBGFIELD("IIC_IDIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #162
  {DBGFIELD("IIC_IDIV16_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #163
  {DBGFIELD("IIC_IDIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #164
  {DBGFIELD("IIC_IDIV32_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #165
  {DBGFIELD("IIC_IDIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #166
  {DBGFIELD("IIC_IDIV64_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #167
  {DBGFIELD("IIC_IDIV8_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 104, 12, 11, 1,  2, 2}, // #168
  {DBGFIELD("IIC_IDIV8_WriteIDiv") 1, false, false, 116, 10, 12, 1,  0, 0}, // #169
  {DBGFIELD("IIC_FILD_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #170
  {DBGFIELD("IIC_IMUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #171
  {DBGFIELD("IIC_IMUL16_RR_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #172
  {DBGFIELD("IIC_IMUL16_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #173
  {DBGFIELD("IIC_IMUL16_RMI_WriteIMulLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #174
  {DBGFIELD("IIC_IMUL16_RRI_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #175
  {DBGFIELD("IIC_IMUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #176
  {DBGFIELD("IIC_IMUL32_RR_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #177
  {DBGFIELD("IIC_IMUL32_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #178
  {DBGFIELD("IIC_IMUL32_RMI_WriteIMulLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #179
  {DBGFIELD("IIC_IMUL32_RRI_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #180
  {DBGFIELD("IIC_IMUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #181
  {DBGFIELD("IIC_IMUL64_RR_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #182
  {DBGFIELD("IIC_IMUL64_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #183
  {DBGFIELD("IIC_IMUL64_RMI_WriteIMulLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #184
  {DBGFIELD("IIC_IMUL64_RRI_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #185
  {DBGFIELD("IIC_IMUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #186
  {DBGFIELD("IIC_IMUL8_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #187
  {DBGFIELD("IIC_IN_RI_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #188
  {DBGFIELD("IIC_IN_RR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #189
  {DBGFIELD("IIC_INS_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #190
  {DBGFIELD("IIC_SSE_INSERTPS_RM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #191
  {DBGFIELD("IIC_SSE_INSERTPS_RR_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #192
  {DBGFIELD("IIC_INT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #193
  {DBGFIELD("IIC_INT3_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #194
  {DBGFIELD("IIC_INVD_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #195
  {DBGFIELD("IIC_INVLPG_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #196
  {DBGFIELD("WriteJumpLd")        1, false, false, 91, 6,  3, 1,  0, 0}, // #197
  {DBGFIELD("IIC_IRET_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #198
  {DBGFIELD("IIC_FST_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #199
  {DBGFIELD("IIC_FIST_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #200
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #201
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd_ReadAfterLd") 1, false, false, 13, 9, 10, 1,  1, 1}, // #202
  {DBGFIELD("WriteLoad")          1, false, false, 101, 3,  9, 1,  0, 0}, // #203
  {DBGFIELD("IIC_Jcc_WriteJump")  1, false, false, 97, 4,  2, 1,  0, 0}, // #204
  {DBGFIELD("IIC_JCXZ_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #205
  {DBGFIELD("IIC_JMP_MEM_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #206
  {DBGFIELD("IIC_JMP_REG_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #207
  {DBGFIELD("IIC_JMP_REL_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #208
  {DBGFIELD("IIC_AHF_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #209
  {DBGFIELD("IIC_LAR_RM_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #210
  {DBGFIELD("IIC_LAR_RR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #211
  {DBGFIELD("IIC_CMPX_LOCK_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #212
  {DBGFIELD("IIC_CMPX_LOCK_16B_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #213
  {DBGFIELD("IIC_CMPX_LOCK_8_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #214
  {DBGFIELD("IIC_CMPX_LOCK_8B_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #215
  {DBGFIELD("IIC_SSE_LDDQU_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #216
  {DBGFIELD("IIC_SSE_LDMXCSR_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #217
  {DBGFIELD("IIC_LXS_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #218
  {DBGFIELD("IIC_FLDZ_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #219
  {DBGFIELD("IIC_FIST_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #220
  {DBGFIELD("IIC_FLD_WriteLoad")  1, false, false, 101, 3,  9, 1,  0, 0}, // #221
  {DBGFIELD("IIC_FLD80_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #222
  {DBGFIELD("IIC_FLD_WriteMove")  1, false, false,  1, 2,  2, 1,  0, 0}, // #223
  {DBGFIELD("IIC_LEA_16_WriteLEA") 1, false, false, 161, 4,  2, 1,  0, 0}, // #224
  {DBGFIELD("IIC_LEA_WriteLEA")   1, false, false, 161, 4,  2, 1,  0, 0}, // #225
  {DBGFIELD("IIC_LEAVE_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #226
  {DBGFIELD("IIC_SSE_LFENCE_WriteFence") 1, false, false, 165, 5,  2, 1,  0, 0}, // #227
  {DBGFIELD("IIC_LGDT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #228
  {DBGFIELD("IIC_LIDT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #229
  {DBGFIELD("IIC_LLDT_MEM_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #230
  {DBGFIELD("IIC_LLDT_REG_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #231
  {DBGFIELD("IIC_LWP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #232
  {DBGFIELD("IIC_LMSW_REG_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #233
  {DBGFIELD("IIC_LMSW_MEM_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #234
  {DBGFIELD("IIC_ALU_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #235
  {DBGFIELD("IIC_ALU_NONMEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #236
  {DBGFIELD("IIC_LODS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #237
  {DBGFIELD("IIC_LOOP_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #238
  {DBGFIELD("IIC_LOOPE_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #239
  {DBGFIELD("IIC_LOOPNE_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #240
  {DBGFIELD("IIC_RET_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #241
  {DBGFIELD("IIC_LSL_RM_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #242
  {DBGFIELD("IIC_LSL_RR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #243
  {DBGFIELD("IIC_LTR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #244
  {DBGFIELD("IIC_XADD_LOCK_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #245
  {DBGFIELD("IIC_XADD_LOCK_MEM8_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #246
  {DBGFIELD("IIC_SSE_MASKMOV_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #247
  {DBGFIELD("IIC_SSE_MFENCE_WriteFence") 1, false, false, 165, 5,  2, 1,  0, 0}, // #248
  {DBGFIELD("IIC_MMX_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #249
  {DBGFIELD("IIC_MMX_CVT_PD_RR_WriteCvtF2I") 1, false, false, 22, 7,  6, 1,  0, 0}, // #250
  {DBGFIELD("WriteCvtI2FLd")      1, false, false, 13, 9, 10, 1,  0, 0}, // #251
  {DBGFIELD("WriteCvtI2F")        1, false, false, 22, 7,  9, 1,  0, 0}, // #252
  {DBGFIELD("IIC_MMX_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #253
  {DBGFIELD("IIC_MMX_CVT_PS_RR_WriteCvtF2I") 1, false, false, 22, 7,  6, 1,  0, 0}, // #254
  {DBGFIELD("IIC_MMX_EMMS")       0, false, false,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("IIC_MMX_MASKMOV_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #256
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #257
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #258
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #259
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #260
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #261
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #262
  {DBGFIELD("IIC_MMX_MOVQ_RR_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #263
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #264
  {DBGFIELD("WriteMove")          1, false, false,  1, 2,  2, 1,  0, 0}, // #265
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd") 1, false, false, 170, 6,  3, 1,  0, 0}, // #266
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecALU") 1, false, false, 161, 4,  2, 1,  0, 0}, // #267
  {DBGFIELD("IIC_MMX_PCK_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #268
  {DBGFIELD("IIC_MMX_PCK_RR_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #269
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #270
  {DBGFIELD("IIC_MMX_ALUQ_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #271
  {DBGFIELD("IIC_MMX_ALUQ_RR_WriteVecALU") 1, false, false, 161, 4,  2, 1,  0, 0}, // #272
  {DBGFIELD("WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #273
  {DBGFIELD("WriteShuffle")       1, false, false, 39, 8,  2, 1,  0, 0}, // #274
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 17, 5,  3, 1,  1, 1}, // #275
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecLogic") 1, false, false, 26, 3,  2, 1,  0, 0}, // #276
  {DBGFIELD("IIC_MMX_MISC_FUNC_REG_WriteVecIMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #277
  {DBGFIELD("IIC_MMX_MISC_FUNC_MEM_WriteVecIMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #278
  {DBGFIELD("IIC_MMX_PEXTR_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #279
  {DBGFIELD("IIC_MMX_PHADDSUBW_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #280
  {DBGFIELD("IIC_MMX_PHADDSUBW_RR_WriteVecALU") 1, false, false, 161, 4,  2, 1,  0, 0}, // #281
  {DBGFIELD("IIC_MMX_PHADDSUBD_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #282
  {DBGFIELD("IIC_MMX_PHADDSUBD_RR_WriteVecALU") 1, false, false, 161, 4,  2, 1,  0, 0}, // #283
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #284
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #285
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #286
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #287
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #288
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #289
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #290
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #291
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd") 1, false, false, 29, 10,  3, 1,  0, 0}, // #292
  {DBGFIELD("IIC_MMX_SHIFT_RI_WriteVecShift") 1, false, false, 117, 9,  2, 1,  0, 0}, // #293
  {DBGFIELD("IIC_MMX_SHIFT_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 105, 11,  3, 1,  1, 1}, // #294
  {DBGFIELD("IIC_MMX_SHIFT_RR_WriteVecShift") 1, false, false, 117, 9,  2, 1,  0, 0}, // #295
  {DBGFIELD("IIC_MMX_UNPCK_H_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #296
  {DBGFIELD("IIC_MMX_UNPCK_H_RR_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #297
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #298
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #299
  {DBGFIELD("IIC_SSE_MONITORX_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #300
  {DBGFIELD("IIC_SSE_MONITOR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #301
  {DBGFIELD("IIC_MOV_MEM_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #302
  {DBGFIELD("IIC_MOV_MEM_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #303
  {DBGFIELD("IIC_MOV_MEM_SR_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #304
  {DBGFIELD("IIC_MOV_WriteMove")  1, false, false,  1, 2,  2, 1,  0, 0}, // #305
  {DBGFIELD("IIC_MOV_MEM_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #306
  {DBGFIELD("IIC_MOV_REG_SR_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #307
  {DBGFIELD("IIC_MOV_SR_MEM_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #308
  {DBGFIELD("IIC_MOV_SR_REG_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #309
  {DBGFIELD("IIC_MOV_CR_REG_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #310
  {DBGFIELD("IIC_MOV_DR_REG_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #311
  {DBGFIELD("IIC_ALU_NONMEM_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #312
  {DBGFIELD("IIC_MOV_REG_CR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #313
  {DBGFIELD("IIC_MOV_REG_DR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #314
  {DBGFIELD("IIC_SSE_MOVDQ_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #315
  {DBGFIELD("IIC_SSE_MOVDQ_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #316
  {DBGFIELD("IIC_SSE_MOVA_P_MR_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #317
  {DBGFIELD("IIC_SSE_MOVA_P_RM_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #318
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #319
  {DBGFIELD("IIC_MOVBE_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #320
  {DBGFIELD("IIC_MOVBE_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #321
  {DBGFIELD("IIC_SSE_MOV_LH_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #322
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #323
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #324
  {DBGFIELD("IIC_SSE_MOVU_P_MR_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #325
  {DBGFIELD("IIC_SSE_MOVU_P_RM_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #326
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #327
  {DBGFIELD("IIC_SSE_MOV_LH_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #328
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #329
  {DBGFIELD("IIC_SSE_MOVMSK_WriteVecLogic") 1, false, false, 26, 3,  2, 1,  0, 0}, // #330
  {DBGFIELD("IIC_SSE_MOVNT_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #331
  {DBGFIELD("IIC_SSE_MOVDQ_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #332
  {DBGFIELD("IIC_SSE_MOVD_ToGP_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #333
  {DBGFIELD("IIC_SSE_MOVQ_RR_WriteVecLogic") 1, false, false, 26, 3,  2, 1,  0, 0}, // #334
  {DBGFIELD("IIC_MOVS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #335
  {DBGFIELD("IIC_SSE_MOV_S_MR_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #336
  {DBGFIELD("IIC_SSE_MOV_S_RM_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #337
  {DBGFIELD("IIC_SSE_MOV_S_RR_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #338
  {DBGFIELD("IIC_MOVSX_R16_M8_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #339
  {DBGFIELD("IIC_MOVSX_R16_R8_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #340
  {DBGFIELD("IIC_MOVSX_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #341
  {DBGFIELD("IIC_MOVSX_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #342
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #343
  {DBGFIELD("IIC_MOVZX_R16_M8_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #344
  {DBGFIELD("IIC_MOVZX_R16_R8_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #345
  {DBGFIELD("IIC_MOVZX_WriteALULd") 1, false, false,  9, 4,  3, 1,  0, 0}, // #346
  {DBGFIELD("IIC_MOVZX_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #347
  {DBGFIELD("IIC_SSE_MPSADBW_RM_WriteMPSADLd_ReadAfterLd") 1, false, false, 176, 14, 16, 1,  1, 1}, // #348
  {DBGFIELD("IIC_SSE_MPSADBW_RR_WriteMPSAD") 1, false, false, 190, 12, 16, 1,  0, 0}, // #349
  {DBGFIELD("IIC_MUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #350
  {DBGFIELD("IIC_MUL16_REG_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #351
  {DBGFIELD("IIC_MUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #352
  {DBGFIELD("IIC_MUL32_REG_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #353
  {DBGFIELD("IIC_MUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #354
  {DBGFIELD("IIC_MUL64_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #355
  {DBGFIELD("IIC_MUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  2, 2}, // #356
  {DBGFIELD("IIC_MUL8_WriteIMul") 1, false, false, 22, 7,  6, 1,  0, 0}, // #357
  {DBGFIELD("IIC_SSE_MUL_F64P_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #358
  {DBGFIELD("IIC_SSE_MUL_F64P_RR_WriteFMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #359
  {DBGFIELD("IIC_SSE_MUL_F32P_RR_WriteFMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #360
  {DBGFIELD("IIC_SSE_MUL_F64S_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #361
  {DBGFIELD("IIC_SSE_MUL_F64S_RR_WriteFMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #362
  {DBGFIELD("IIC_SSE_MUL_F32S_RR_WriteFMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #363
  {DBGFIELD("IIC_MUL8_WriteIMulLd_WriteIMulH") 2, false, false, 13, 9,  5, 2,  0, 0}, // #364
  {DBGFIELD("IIC_MUL8_WriteIMul_WriteIMulH") 2, false, false, 22, 7, 17, 2,  0, 0}, // #365
  {DBGFIELD("WriteFMulLd")        1, false, false, 105, 11, 15, 1,  0, 0}, // #366
  {DBGFIELD("WriteFMul")          1, false, false, 117, 9,  3, 1,  0, 0}, // #367
  {DBGFIELD("IIC_SSE_MWAITX_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #368
  {DBGFIELD("IIC_SSE_MWAIT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #369
  {DBGFIELD("IIC_NOP_WriteZero")  1, false, false,  0, 0,  2, 1,  0, 0}, // #370
  {DBGFIELD("IIC_OUT_IR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #371
  {DBGFIELD("IIC_OUT_RR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #372
  {DBGFIELD("IIC_OUTS_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #373
  {DBGFIELD("IIC_SSE_PABS_RM_WriteVecALULd") 1, false, false, 170, 6,  3, 1,  0, 0}, // #374
  {DBGFIELD("IIC_SSE_PABS_RR_WriteVecALU") 1, false, false, 161, 4,  2, 1,  0, 0}, // #375
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #376
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteVecALU") 1, false, false, 161, 4,  2, 1,  0, 0}, // #377
  {DBGFIELD("IIC_SSE_INTALUQ_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #378
  {DBGFIELD("IIC_SSE_INTALUQ_P_RR_WriteVecALU") 1, false, false, 161, 4,  2, 1,  0, 0}, // #379
  {DBGFIELD("IIC_SSE_PALIGNRM_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #380
  {DBGFIELD("IIC_SSE_PALIGNRR_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #381
  {DBGFIELD("IIC_SSE_BIT_P_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 17, 5,  3, 1,  1, 1}, // #382
  {DBGFIELD("IIC_SSE_BIT_P_RR_WriteVecLogic") 1, false, false, 26, 3,  2, 1,  0, 0}, // #383
  {DBGFIELD("IIC_SSE_PAUSE_WriteNop") 1, false, false,  0, 0,  2, 1,  0, 0}, // #384
  {DBGFIELD("IIC_ALU_MEM_WriteVarBlendLd_ReadAfterLd") 1, false, false, 47, 10, 16, 1,  1, 1}, // #385
  {DBGFIELD("IIC_ALU_NONMEM_WriteVarBlend") 1, false, false, 57, 8, 19, 1,  0, 0}, // #386
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteBlendLd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #387
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteBlend") 1, false, false, 161, 4,  2, 1,  0, 0}, // #388
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RM_WriteCLMulLd_ReadAfterLd") 1, false, false, 202, 14,  5, 1,  1, 1}, // #389
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RR_WriteCLMul") 1, false, false, 216, 12,  5, 1,  0, 0}, // #390
  {DBGFIELD("WriteVecALULd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #391
  {DBGFIELD("WriteVecALU")        1, false, false, 161, 4,  2, 1,  0, 0}, // #392
  {DBGFIELD("WritePCmpEStrILd_ReadAfterLd") 1, false, false, 228, 15, 20, 1,  1, 1}, // #393
  {DBGFIELD("WritePCmpEStrI")     1, false, false, 243, 6, 20, 1,  0, 0}, // #394
  {DBGFIELD("WritePCmpEStrMLd_ReadAfterLd") 1, false, false, 249, 8,  8, 1,  1, 1}, // #395
  {DBGFIELD("WritePCmpEStrM")     1, false, false, 257, 13,  8, 1,  0, 0}, // #396
  {DBGFIELD("WritePCmpIStrILd_ReadAfterLd") 1, false, false, 270, 11, 20, 1,  1, 1}, // #397
  {DBGFIELD("WritePCmpIStrI")     1, false, false, 281, 9, 20, 1,  0, 0}, // #398
  {DBGFIELD("WritePCmpIStrMLd_ReadAfterLd") 1, false, false, 270, 11,  8, 1,  1, 1}, // #399
  {DBGFIELD("WritePCmpIStrM")     1, false, false, 281, 9,  8, 1,  0, 0}, // #400
  {DBGFIELD("WriteShuffleLd_WriteRMW") 2, false, false, 290, 12,  3, 2,  0, 0}, // #401
  {DBGFIELD("IIC_SSE_PEXTRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #402
  {DBGFIELD("IIC_SSE_PHADDSUBD_RM_WritePHAddLd_ReadAfterLd") 3, false, false, 133, 13, 16, 1,  1, 1}, // #403
  {DBGFIELD("IIC_SSE_PHADDSUBD_RR_WritePHAdd") 3, false, false, 146, 11,  6, 1,  0, 0}, // #404
  {DBGFIELD("WritePHAddLd_ReadAfterLd") 3, false, false, 133, 13, 16, 1,  1, 1}, // #405
  {DBGFIELD("WritePHAdd")         3, false, false, 146, 11,  6, 1,  0, 0}, // #406
  {DBGFIELD("IIC_SSE_PHADDSUBW_RM_WritePHAddLd_ReadAfterLd") 3, false, false, 133, 13, 16, 1,  1, 1}, // #407
  {DBGFIELD("IIC_SSE_PHADDSUBW_RR_WritePHAdd") 3, false, false, 146, 11,  6, 1,  0, 0}, // #408
  {DBGFIELD("WriteVecIMulLd")     1, false, false, 105, 11, 15, 1,  0, 0}, // #409
  {DBGFIELD("WriteVecIMul")       1, false, false, 117, 9,  3, 1,  0, 0}, // #410
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #411
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #412
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #413
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #414
  {DBGFIELD("WriteVecIMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #415
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteShuffleLd") 1, false, false, 29, 10,  3, 1,  0, 0}, // #416
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #417
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #418
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #419
  {DBGFIELD("IIC_SSE_INTMUL_P_RM_WriteVecIMulLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #420
  {DBGFIELD("IIC_SSE_INTMUL_P_RR_WriteVecIMul") 1, false, false, 117, 9,  3, 1,  0, 0}, // #421
  {DBGFIELD("IIC_POP_REG16_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #422
  {DBGFIELD("IIC_POP_MEM_WriteRMW") 1, false, false, 302, 3,  2, 1,  0, 0}, // #423
  {DBGFIELD("IIC_POP_REG_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #424
  {DBGFIELD("IIC_POP_A_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #425
  {DBGFIELD("IIC_SSE_POPCNT_RM_WriteFAddLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #426
  {DBGFIELD("IIC_SSE_POPCNT_RR_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #427
  {DBGFIELD("IIC_POP_SR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #428
  {DBGFIELD("IIC_POP_F_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #429
  {DBGFIELD("IIC_POP_FD_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #430
  {DBGFIELD("IIC_POP_SR_SS_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #431
  {DBGFIELD("IIC_SSE_PSHUFB_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #432
  {DBGFIELD("IIC_SSE_PSHUFB_RR_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #433
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #434
  {DBGFIELD("IIC_SSE_PSHUF_RI_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #435
  {DBGFIELD("IIC_SSE_INTSHDQ_P_RI_WriteVecShift") 1, false, false, 117, 9,  2, 1,  0, 0}, // #436
  {DBGFIELD("IIC_SSE_INTSH_P_RI_WriteVecShift") 1, false, false, 117, 9,  2, 1,  0, 0}, // #437
  {DBGFIELD("IIC_SSE_INTSH_P_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 105, 11,  3, 1,  1, 1}, // #438
  {DBGFIELD("IIC_SSE_INTSH_P_RR_WriteVecShift") 1, false, false, 117, 9,  2, 1,  0, 0}, // #439
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #440
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #441
  {DBGFIELD("IIC_PUSH_IMM_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #442
  {DBGFIELD("IIC_PUSH_REG_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #443
  {DBGFIELD("IIC_PUSH_MEM_WriteRMW") 1, false, false, 302, 3,  2, 1,  0, 0}, // #444
  {DBGFIELD("IIC_PUSH_A_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #445
  {DBGFIELD("IIC_PUSH_SR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #446
  {DBGFIELD("IIC_PUSH_CS_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #447
  {DBGFIELD("IIC_PUSH_F_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #448
  {DBGFIELD("IIC_SR_WriteShiftLd_WriteRMW") 2, false, false, 305, 8,  3, 2,  0, 0}, // #449
  {DBGFIELD("IIC_SR_WriteShift")  1, false, false, 97, 4,  2, 1,  0, 0}, // #450
  {DBGFIELD("IIC_SSE_RCPP_RM_WriteFRcpLd") 1, false, false, 105, 11, 15, 1,  0, 0}, // #451
  {DBGFIELD("IIC_SSE_RCPP_RR_WriteFRcp") 1, false, false, 117, 9,  3, 1,  0, 0}, // #452
  {DBGFIELD("IIC_SSE_RCPS_RM_WriteFRcpLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #453
  {DBGFIELD("WriteFRcpLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #454
  {DBGFIELD("IIC_SSE_RCPS_RR_WriteFRcp") 1, false, false, 117, 9,  3, 1,  0, 0}, // #455
  {DBGFIELD("WriteRMW")           1, false, false, 302, 3,  2, 1,  0, 0}, // #456
  {DBGFIELD("IIC_RDMSR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #457
  {DBGFIELD("IIC_RDPMC_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #458
  {DBGFIELD("IIC_RDTSC_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #459
  {DBGFIELD("IIC_REP_MOVS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #460
  {DBGFIELD("IIC_REP_STOS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #461
  {DBGFIELD("IIC_RET_IMM_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #462
  {DBGFIELD("WriteShiftLd")       1, false, false, 91, 6,  3, 1,  0, 0}, // #463
  {DBGFIELD("WriteShift")         1, false, false, 97, 4,  2, 1,  0, 0}, // #464
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAddLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #465
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #466
  {DBGFIELD("IIC_SSE_ROUNDPS_MEM_WriteFAddLd") 1, false, false, 13, 9,  5, 1,  0, 0}, // #467
  {DBGFIELD("WriteFAddLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #468
  {DBGFIELD("IIC_RSM_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #469
  {DBGFIELD("IIC_SSE_RSQRTPS_RM_WriteFRsqrtLd") 1, false, false, 105, 11, 15, 1,  0, 0}, // #470
  {DBGFIELD("IIC_SSE_RSQRTPS_RR_WriteFRsqrt") 1, false, false, 117, 9,  3, 1,  0, 0}, // #471
  {DBGFIELD("IIC_SSE_RSQRTSS_RM_WriteFRsqrtLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #472
  {DBGFIELD("WriteFRsqrtLd_ReadAfterLd") 1, false, false, 105, 11, 15, 1,  1, 1}, // #473
  {DBGFIELD("IIC_SSE_RSQRTSS_RR_WriteFRsqrt") 1, false, false, 117, 9,  3, 1,  0, 0}, // #474
  {DBGFIELD("WriteShiftLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd") 1, false, false, 91, 6,  3, 1,  2, 1}, // #475
  {DBGFIELD("IIC_SCAS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #476
  {DBGFIELD("IIC_SET_M_WriteALU_WriteStore") 2, false, false, 313, 5, 21, 2,  0, 0}, // #477
  {DBGFIELD("IIC_SET_R_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #478
  {DBGFIELD("IIC_SSE_SFENCE_WriteFence") 1, false, false, 165, 5,  2, 1,  0, 0}, // #479
  {DBGFIELD("IIC_SGDT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #480
  {DBGFIELD("IIC_SHD16_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 305, 8,  3, 2,  0, 0}, // #481
  {DBGFIELD("IIC_SHD16_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 305, 8,  3, 2,  0, 0}, // #482
  {DBGFIELD("IIC_SHD16_REG_CL_WriteShift") 1, false, false, 97, 4,  2, 1,  0, 0}, // #483
  {DBGFIELD("IIC_SHD16_REG_IM_WriteShift") 1, false, false, 97, 4,  2, 1,  0, 0}, // #484
  {DBGFIELD("IIC_SHD32_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 305, 8,  3, 2,  0, 0}, // #485
  {DBGFIELD("IIC_SHD32_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 305, 8,  3, 2,  0, 0}, // #486
  {DBGFIELD("IIC_SHD32_REG_CL_WriteShift") 1, false, false, 97, 4,  2, 1,  0, 0}, // #487
  {DBGFIELD("IIC_SHD32_REG_IM_WriteShift") 1, false, false, 97, 4,  2, 1,  0, 0}, // #488
  {DBGFIELD("IIC_SHD64_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 305, 8,  3, 2,  0, 0}, // #489
  {DBGFIELD("IIC_SHD64_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 305, 8,  3, 2,  0, 0}, // #490
  {DBGFIELD("IIC_SHD64_REG_CL_WriteShift") 1, false, false, 97, 4,  2, 1,  0, 0}, // #491
  {DBGFIELD("IIC_SHD64_REG_IM_WriteShift") 1, false, false, 97, 4,  2, 1,  0, 0}, // #492
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #493
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #494
  {DBGFIELD("IIC_SIDT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #495
  {DBGFIELD("IIC_SLDT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #496
  {DBGFIELD("IIC_SMSW_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #497
  {DBGFIELD("IIC_SSE_SQRTPD_RM_WriteFSqrtLd") 1, false, false, 105, 11, 23, 1,  0, 0}, // #498
  {DBGFIELD("IIC_SSE_SQRTPD_RR_WriteFSqrt") 1, false, false, 117, 9, 24, 1,  0, 0}, // #499
  {DBGFIELD("IIC_SSE_SQRTPS_RM_WriteFSqrtLd") 1, false, false, 105, 11, 23, 1,  0, 0}, // #500
  {DBGFIELD("IIC_SSE_SQRTPS_RR_WriteFSqrt") 1, false, false, 117, 9, 24, 1,  0, 0}, // #501
  {DBGFIELD("IIC_SSE_SQRTSD_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 105, 11, 23, 1,  1, 1}, // #502
  {DBGFIELD("WriteFSqrtLd_ReadAfterLd") 1, false, false, 105, 11, 23, 1,  1, 1}, // #503
  {DBGFIELD("IIC_SSE_SQRTSD_RR_WriteFSqrt") 1, false, false, 117, 9, 24, 1,  0, 0}, // #504
  {DBGFIELD("IIC_SSE_SQRTSS_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 105, 11, 23, 1,  1, 1}, // #505
  {DBGFIELD("IIC_SSE_SQRTSS_RR_WriteFSqrt") 1, false, false, 117, 9, 24, 1,  0, 0}, // #506
  {DBGFIELD("WriteFSqrt")         1, false, false, 117, 9, 24, 1,  0, 0}, // #507
  {DBGFIELD("IIC_STC_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #508
  {DBGFIELD("IIC_STD_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #509
  {DBGFIELD("IIC_STI_WriteALU")   1, false, false,  1, 2,  2, 1,  0, 0}, // #510
  {DBGFIELD("IIC_SSE_STMXCSR_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #511
  {DBGFIELD("IIC_STOS_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #512
  {DBGFIELD("IIC_STR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #513
  {DBGFIELD("IIC_FST80_WriteStore") 1, false, false, 157, 4,  2, 1,  0, 0}, // #514
  {DBGFIELD("IIC_FST_WriteMove")  1, false, false,  1, 2,  2, 1,  0, 0}, // #515
  {DBGFIELD("IIC_SWAPGS_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #516
  {DBGFIELD("IIC_SYSCALL_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #517
  {DBGFIELD("IIC_SYS_ENTER_EXIT_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #518
  {DBGFIELD("IIC_JMP_REL_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #519
  {DBGFIELD("IIC_JMP_MEM_WriteJump") 1, false, false, 97, 4,  2, 1,  0, 0}, // #520
  {DBGFIELD("IIC_JMP_REG_WriteJumpLd") 1, false, false, 91, 6,  3, 1,  0, 0}, // #521
  {DBGFIELD("WriteJump")          1, false, false, 97, 4,  2, 1,  0, 0}, // #522
  {DBGFIELD("IIC_FUCOMI_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #523
  {DBGFIELD("IIC_FUCOM_WriteFAdd") 1, false, false, 22, 7,  6, 1,  0, 0}, // #524
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #525
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #526
  {DBGFIELD("IIC_SSE_ALU_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("IIC_SSE_ALU_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("IIC_SSE_ALU_F32S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("IIC_SSE_ALU_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("WriteFVarBlendLd_ReadAfterLd") 1, false, false, 47, 10, 16, 1,  1, 1}, // #531
  {DBGFIELD("WriteFVarBlend")     1, false, false, 57, 8, 19, 1,  0, 0}, // #532
  {DBGFIELD("WriteFShuffleLd")    1, false, false, 29, 10,  3, 1,  0, 0}, // #533
  {DBGFIELD("WriteFShuffle256")   1, false, false, 39, 8,  6, 1,  0, 0}, // #534
  {DBGFIELD("WriteFShuffle")      1, false, false, 39, 8,  2, 1,  0, 0}, // #535
  {DBGFIELD("IIC_SSE_ALU_F32P_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("WriteCvtF2ILd")      1, false, false, 13, 9,  5, 1,  0, 0}, // #537
  {DBGFIELD("WriteCvtF2I")        1, false, false, 22, 7,  6, 1,  0, 0}, // #538
  {DBGFIELD("WriteCvtF2FLd")      1, false, false, 13, 9,  5, 1,  0, 0}, // #539
  {DBGFIELD("WriteCvtF2F")        1, false, false, 22, 7,  6, 1,  0, 0}, // #540
  {DBGFIELD("WriteCvtF2FLd_WriteRMW") 2, false, false, 318, 11, 25, 2,  0, 0}, // #541
  {DBGFIELD("WriteCvtF2FLd_ReadAfterLd") 1, false, false, 13, 9,  5, 1,  1, 1}, // #542
  {DBGFIELD("WriteCvtI2FLd_ReadAfterLd") 1, false, false, 13, 9, 10, 1,  1, 1}, // #543
  {DBGFIELD("IIC_SSE_DIV_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("IIC_SSE_DIV_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("IIC_SSE_DIV_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("IIC_VERR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #547
  {DBGFIELD("IIC_VERW_REG_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #548
  {DBGFIELD("IIC_VERW_MEM_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #549
  {DBGFIELD("WriteStore")         1, false, false, 157, 4,  2, 1,  0, 0}, // #550
  {DBGFIELD("WriteShuffle256")    1, false, false, 39, 8,  6, 1,  0, 0}, // #551
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_WriteRMW") 2, false, false, 126, 7,  3, 2,  0, 0}, // #552
  {DBGFIELD("WriteFShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #553
  {DBGFIELD("WriteShuffle256Ld_ReadAfterLd") 1, false, false, 29, 10,  5, 1,  1, 1}, // #554
  {DBGFIELD("IIC_ALU_MEM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 29, 10,  3, 1,  1, 1}, // #555
  {DBGFIELD("IIC_ALU_NONMEM_WriteFShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #556
  {DBGFIELD("IIC_SSE_MOVDQ")      0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("IIC_SSE_MOV_LH")     0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("IIC_SSE_MOVD_ToGP")  0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("IIC_SSE_MOV_S_MR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("IIC_SSE_MOV_S_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("IIC_SSE_MOV_S_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("IIC_SSE_MOVQ_RR")    0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("IIC_ALU_MEM_WriteMPSADLd_ReadAfterLd") 1, false, false, 176, 14, 16, 1,  1, 1}, // #564
  {DBGFIELD("IIC_ALU_NONMEM_WriteMPSAD") 1, false, false, 190, 12, 16, 1,  0, 0}, // #565
  {DBGFIELD("IIC_SSE_MUL_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("IIC_SSE_MUL_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("IIC_SSE_MUL_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("WriteVecALULd")      1, false, false, 170, 6,  3, 1,  0, 0}, // #569
  {DBGFIELD("IIC_SSE_BIT_P_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("IIC_SSE_BIT_P_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("WriteBlendLd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #572
  {DBGFIELD("WriteBlend")         1, false, false, 161, 4,  2, 1,  0, 0}, // #573
  {DBGFIELD("WriteVarBlendLd_ReadAfterLd") 1, false, false, 47, 10, 16, 1,  1, 1}, // #574
  {DBGFIELD("WriteVarBlend")      1, false, false, 57, 8, 19, 1,  0, 0}, // #575
  {DBGFIELD("IIC_ALU_MEM_WriteBlendLd_ReadAfterLd") 1, false, false, 170, 6,  3, 1,  1, 1}, // #576
  {DBGFIELD("IIC_ALU_NONMEM_WriteBlend") 1, false, false, 161, 4,  2, 1,  0, 0}, // #577
  {DBGFIELD("WriteCLMulLd_ReadAfterLd") 1, false, false, 202, 14,  5, 1,  1, 1}, // #578
  {DBGFIELD("WriteCLMul")         1, false, false, 216, 12,  5, 1,  0, 0}, // #579
  {DBGFIELD("IIC_SSE_ALU_F32P_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("WriteFShuffle256Ld_ReadAfterLd") 1, false, false, 29, 10,  5, 1,  1, 1}, // #581
  {DBGFIELD("IIC_ALU_MEM_WriteShuffleLd") 1, false, false, 29, 10,  3, 1,  0, 0}, // #582
  {DBGFIELD("IIC_ALU_NONMEM_WriteShuffle") 1, false, false, 39, 8,  2, 1,  0, 0}, // #583
  {DBGFIELD("WriteVarVecShift_ReadAfterLd") 1, false, false, 216, 12, 19, 1,  1, 1}, // #584
  {DBGFIELD("WriteVarVecShift")   1, false, false, 216, 12, 19, 1,  0, 0}, // #585
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd") 1, false, false, 29, 10,  3, 1,  0, 0}, // #586
  {DBGFIELD("WriteVarVecShiftLd_ReadAfterLd") 1, false, false, 202, 14, 16, 1,  1, 1}, // #587
  {DBGFIELD("WriteFRcpLd")        1, false, false, 105, 11, 15, 1,  0, 0}, // #588
  {DBGFIELD("WriteFRsqrtLd")      1, false, false, 105, 11, 15, 1,  0, 0}, // #589
  {DBGFIELD("WriteFSqrtLd")       1, false, false, 105, 11, 23, 1,  0, 0}, // #590
  {DBGFIELD("IIC_WAIT_WriteMicrocoded") 1, false, false,  1, 2,  1, 1,  0, 0}, // #591
  {DBGFIELD("IIC_WRMSR_WriteSystem") 1, false, false,  1, 2,  1, 1,  0, 0}, // #592
  {DBGFIELD("IIC_XADD_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #593
  {DBGFIELD("IIC_XADD_REG_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #594
  {DBGFIELD("IIC_XCHG_REG_WriteALU") 1, false, false,  1, 2,  2, 1,  0, 0}, // #595
  {DBGFIELD("IIC_XCHG_MEM_WriteALULd_WriteRMW") 2, false, false,  3, 6,  3, 2,  0, 0}, // #596
  {DBGFIELD("IIC_FXCH_WriteMove") 1, false, false,  1, 2,  2, 1,  0, 0}, // #597
  {DBGFIELD("IIC_XLAT_WriteLoad") 1, false, false, 101, 3,  9, 1,  0, 0}, // #598
  {DBGFIELD("MOV16rm")            1, false, false,  9, 4,  3, 1,  0, 0}, // #599
  {DBGFIELD("MOVSX32rm16_MOVSX32rm8") 1, false, false, 101, 3,  9, 1,  0, 0}, // #600
  {DBGFIELD("MOVZX32rm16_MOVZX32rm8") 1, false, false, 101, 3,  9, 1,  0, 0}, // #601
  {DBGFIELD("CMOVA16rr_CMOVAE16rr_CMOVB16rr_CMOVBE16rr_CMOVE16rr_CMOVG16rr_CMOVGE16rr_CMOVL16rr_CMOVLE16rr_CMOVNE16rr_CMOVNO16rr_CMOVNP16rr_CMOVNS16rr_CMOVO16rr_CMOVP16rr_CMOVS16rr") 1, false, false, 63, 2, 19, 1,  0, 0}, // #602
  {DBGFIELD("CMOVA32rr_CMOVA64rr_CMOVAE32rr_CMOVAE64rr_CMOVB32rr_CMOVB64rr_CMOVBE32rr_CMOVBE64rr_CMOVE32rr_CMOVE64rr_CMOVG32rr_CMOVG64rr_CMOVGE32rr_CMOVGE64rr_CMOVL32rr_CMOVL64rr_CMOVLE32rr_CMOVLE64rr_CMOVNE32rr_CMOVNE64rr_CMOVNO32rr_CMOVNO64rr_CMOVNP32rr_CMOVNP64rr_CMOVNS32rr_CMOVNS64rr_CMOVO32rr_CMOVO64rr_CMOVP32rr_CMOVP64rr_CMOVS32rr_CMOVS64rr") 1, false, false, 63, 2, 19, 1,  0, 0}, // #603
  {DBGFIELD("CMOVA16rm_CMOVAE16rm_CMOVB16rm_CMOVBE16rm_CMOVE16rm_CMOVG16rm_CMOVGE16rm_CMOVL16rm_CMOVLE16rm_CMOVNE16rm_CMOVNO16rm_CMOVNP16rm_CMOVNS16rm_CMOVO16rm_CMOVP16rm_CMOVS16rm") 1, false, false, 329, 4, 16, 1,  1, 1}, // #604
  {DBGFIELD("CMOVA32rm_CMOVA64rm_CMOVAE32rm_CMOVAE64rm_CMOVB32rm_CMOVB64rm_CMOVBE32rm_CMOVBE64rm_CMOVE32rm_CMOVE64rm_CMOVG32rm_CMOVG64rm_CMOVGE32rm_CMOVGE64rm_CMOVL32rm_CMOVL64rm_CMOVLE32rm_CMOVLE64rm_CMOVNE32rm_CMOVNE64rm_CMOVNO32rm_CMOVNO64rm_CMOVNP32rm_CMOVNP64rm_CMOVNS32rm_CMOVNS64rm_CMOVO32rm_CMOVO64rm_CMOVP32rm_CMOVP64rm_CMOVS32rm_CMOVS64rm") 1, false, false, 329, 4, 16, 1,  1, 1}, // #605
  {DBGFIELD("XCHG16ar_XCHG16rr_XCHG32ar_XCHG32ar64_XCHG32rr_XCHG64ar_XCHG64rr_XCHG8rr") 1, false, false, 155, 2, 19, 1,  0, 0}, // #606
  {DBGFIELD("XCHG16rm_XCHG32rm_XCHG64rm_XCHG8rm") 8, false, false,  0, 0, 27, 1,  0, 0}, // #607
  {DBGFIELD("XLAT")               3, false, false,  0, 0,  5, 1,  0, 0}, // #608
  {DBGFIELD("PUSH16rmm_PUSH32rmm") 1, false, false, 333, 4,  2, 1,  0, 0}, // #609
  {DBGFIELD("PUSHF16_PUSHF32")    4, false, false, 337, 12,  2, 1,  0, 0}, // #610
  {DBGFIELD("PUSHA16_PUSHA32")    19, false, false,  0, 0,  2, 1,  0, 0}, // #611
  {DBGFIELD("POP16rmm_POP32rmm")  1, false, false, 333, 4,  2, 1,  0, 0}, // #612
  {DBGFIELD("POPF16")             9, false, false,  0, 0,  2, 1,  0, 0}, // #613
  {DBGFIELD("POPF32")             9, false, false,  0, 0,  2, 1,  0, 0}, // #614
  {DBGFIELD("POPA16_POPA32")      18, false, false,  0, 0,  2, 1,  0, 0}, // #615
  {DBGFIELD("LAHF_SAHF")          1, false, false, 97, 4,  2, 1,  0, 0}, // #616
  {DBGFIELD("BSWAP32r")           1, false, false, 161, 4,  2, 1,  0, 0}, // #617
  {DBGFIELD("BSWAP64r")           2, false, false, 349, 6,  2, 1,  0, 0}, // #618
  {DBGFIELD("MOVBE16rm_MOVBE64rm") 1, false, false, 329, 4, 16, 1,  0, 0}, // #619
  {DBGFIELD("MOVBE32rm")          2, false, false, 170, 6,  2, 1,  0, 0}, // #620
  {DBGFIELD("MOVBE16mr")          3, false, false, 355, 7,  2, 1,  0, 0}, // #621
  {DBGFIELD("MOVBE32mr")          3, false, false, 362, 7,  2, 1,  0, 0}, // #622
  {DBGFIELD("MOVBE64mr")          4, false, false, 369, 9,  2, 1,  0, 0}, // #623
  {DBGFIELD("ADD16mi_ADD16mi8_ADD16mr_ADD32mi_ADD32mi8_ADD32mr_ADD64mi32_ADD64mi8_ADD64mr_ADD8mi_ADD8mi8_ADD8mr_SUB16mi_SUB16mi8_SUB16mr_SUB32mi_SUB32mi8_SUB32mr_SUB64mi32_SUB64mi8_SUB64mr_SUB8mi_SUB8mi8_SUB8mr") 1, false, false, 378, 5,  2, 1,  0, 0}, // #624
  {DBGFIELD("ADC16ri_ADC16ri8_ADC16rr_ADC16rr_REV_ADC32ri_ADC32ri8_ADC32rr_ADC32rr_REV_ADC64ri32_ADC64ri8_ADC64rr_ADC64rr_REV_ADC8ri_ADC8ri8_ADC8rr_ADC8rr_REV_SBB16ri_SBB16ri8_SBB16rr_SBB16rr_REV_SBB32ri_SBB32ri8_SBB32rr_SBB32rr_REV_SBB64ri32_SBB64ri8_SBB64rr_SBB64rr_REV_SBB8ri_SBB8ri8_SBB8rr_SBB8rr_REV") 1, false, false, 63, 2, 19, 1,  0, 0}, // #625
  {DBGFIELD("ADC16rm_ADC32rm_ADC64rm_ADC8rm_SBB16rm_SBB32rm_SBB64rm_SBB8rm") 1, false, false, 329, 4, 16, 1,  1, 1}, // #626
  {DBGFIELD("ADC16mi_ADC16mi8_ADC16mr_ADC32mi_ADC32mi8_ADC32mr_ADC64mi32_ADC64mi8_ADC64mr_ADC8mi_ADC8mi8_ADC8mr_SBB16mi_SBB16mi8_SBB16mr_SBB32mi_SBB32mi8_SBB32mr_SBB64mi32_SBB64mi8_SBB64mr_SBB8mi_SBB8mi8_SBB8mr") 1, false, false, 383, 5,  2, 1,  0, 0}, // #627
  {DBGFIELD("DEC16m_DEC32m_DEC64m_DEC8m_INC16m_INC32m_INC64m_INC8m_NEG16m_NEG32m_NEG64m_NEG8m_NOT16m_NOT32m_NOT64m_NOT8m") 1, false, false, 388, 5,  2, 1,  0, 0}, // #628
  {DBGFIELD("IMUL16r_IMUL16rr")   4, false, false, 393, 7,  9, 1,  0, 0}, // #629
  {DBGFIELD("IMUL16rm")           4, false, false, 393, 7,  9, 1,  0, 0}, // #630
  {DBGFIELD("IMUL16rmi_IMUL16rmi8") 4, false, false, 393, 7,  9, 1,  0, 0}, // #631
  {DBGFIELD("IMUL16rri_IMUL16rri8") 4, false, false, 393, 7,  9, 1,  0, 0}, // #632
  {DBGFIELD("MUL16r")             4, false, false, 393, 7,  9, 1,  0, 0}, // #633
  {DBGFIELD("IMUL16m")            5, false, false, 400, 9, 10, 1,  0, 0}, // #634
  {DBGFIELD("MUL16m")             5, false, false, 400, 9, 10, 1,  0, 0}, // #635
  {DBGFIELD("IMUL32r_IMUL32rr")   3, false, false, 393, 7,  9, 1,  0, 0}, // #636
  {DBGFIELD("IMUL32rm")           3, false, false, 393, 7,  9, 1,  0, 0}, // #637
  {DBGFIELD("IMUL32rmi_IMUL32rmi8") 3, false, false, 393, 7,  9, 1,  0, 0}, // #638
  {DBGFIELD("IMUL32rri_IMUL32rri8") 3, false, false, 393, 7,  9, 1,  0, 0}, // #639
  {DBGFIELD("MUL32r")             3, false, false, 393, 7,  9, 1,  0, 0}, // #640
  {DBGFIELD("IMUL32m")            4, false, false, 400, 9, 10, 1,  0, 0}, // #641
  {DBGFIELD("MUL32m")             4, false, false, 400, 9, 10, 1,  0, 0}, // #642
  {DBGFIELD("IMUL64r_IMUL64rr")   2, false, false, 409, 11,  6, 1,  0, 0}, // #643
  {DBGFIELD("IMUL64rm")           2, false, false, 409, 11,  6, 1,  0, 0}, // #644
  {DBGFIELD("IMUL64rmi32_IMUL64rmi8") 2, false, false, 409, 11,  6, 1,  0, 0}, // #645
  {DBGFIELD("IMUL64rri32_IMUL64rri8") 2, false, false, 409, 11,  6, 1,  0, 0}, // #646
  {DBGFIELD("MUL64r")             2, false, false, 409, 11,  6, 1,  0, 0}, // #647
  {DBGFIELD("IMUL64m")            3, false, false, 420, 13,  5, 1,  0, 0}, // #648
  {DBGFIELD("MUL64m")             3, false, false, 420, 13,  5, 1,  0, 0}, // #649
  {DBGFIELD("MULX32rr")           3, false, false, 433, 8,  9, 1,  0, 0}, // #650
  {DBGFIELD("MULX32rm")           4, false, false, 441, 10, 10, 1,  0, 0}, // #651
  {DBGFIELD("MULX64rr")           2, false, false, 409, 11,  9, 1,  0, 0}, // #652
  {DBGFIELD("MULX64rm")           3, false, false, 420, 13, 10, 1,  0, 0}, // #653
  {DBGFIELD("DIV8r")              9, false, false, 451, 15, 28, 1,  0, 0}, // #654
  {DBGFIELD("DIV16r")             10, false, false, 451, 15, 29, 1,  0, 0}, // #655
  {DBGFIELD("DIV32r")             10, false, false, 451, 15, 28, 1,  0, 0}, // #656
  {DBGFIELD("DIV64r")             36, false, false, 451, 15, 30, 1,  0, 0}, // #657
  {DBGFIELD("IDIV8r")             9, false, false, 451, 15, 29, 1,  0, 0}, // #658
  {DBGFIELD("IDIV16r")            10, false, false, 451, 15, 29, 1,  0, 0}, // #659
  {DBGFIELD("IDIV32r")            9, false, false, 451, 15, 28, 1,  0, 0}, // #660
  {DBGFIELD("IDIV64r")            59, false, false, 451, 15, 31, 1,  0, 0}, // #661
  {DBGFIELD("AND16mi_AND16mi8_AND16mr_AND32mi_AND32mi8_AND32mr_AND64mi32_AND64mi8_AND64mr_AND8mi_AND8mi8_AND8mr_OR16mi_OR16mi8_OR16mr_OR32mi_OR32mi8_OR32mr_OR64mi32_OR64mi8_OR64mr_OR8mi_OR8mi8_OR8mr_XOR16mi_XOR16mi8_XOR16mr_XOR32mi_XOR32mi8_XOR32mr_XOR64mi32_XOR64mi8_XOR64mr_XOR8mi_XOR8mi8_XOR8mr") 1, false, false, 378, 5,  2, 1,  0, 0}, // #662
  {DBGFIELD("OR32mrLocked")       1, false, false, 378, 5,  2, 1,  0, 0}, // #663
  {DBGFIELD("SAR16m1_SAR16mi_SAR32m1_SAR32mi_SAR64m1_SAR64mi_SAR8m1_SAR8mi_SHL16m1_SHL16mi_SHL32m1_SHL32mi_SHL64m1_SHL64mi_SHL8m1_SHL8mi_SHR16m1_SHR16mi_SHR32m1_SHR32mi_SHR64m1_SHR64mi_SHR8m1_SHR8mi") 4, false, false, 466, 7,  2, 1,  0, 0}, // #664
  {DBGFIELD("SAR16rCL_SAR32rCL_SAR64rCL_SAR8rCL_SHL16rCL_SHL32rCL_SHL64rCL_SHL8rCL_SHR16rCL_SHR32rCL_SHR64rCL_SHR8rCL") 3, false, false, 473, 4, 19, 1,  0, 0}, // #665
  {DBGFIELD("SAR16mCL_SAR32mCL_SAR64mCL_SAR8mCL_SHL16mCL_SHL32mCL_SHL64mCL_SHL8mCL_SHR16mCL_SHR32mCL_SHR64mCL_SHR8mCL") 6, false, false, 477, 8,  2, 1,  0, 0}, // #666
  {DBGFIELD("ROL16r1_ROL32r1_ROL64r1_ROL8r1_ROR16r1_ROR32r1_ROR64r1_ROR8r1") 2, false, false, 485, 4,  2, 1,  0, 0}, // #667
  {DBGFIELD("ROL16mi_ROL32mi_ROL64mi_ROL8mi_ROR16mi_ROR32mi_ROR64mi_ROR8mi") 5, false, false, 489, 7,  2, 1,  0, 0}, // #668
  {DBGFIELD("ROL16rCL_ROL32rCL_ROL64rCL_ROL8rCL_ROR16rCL_ROR32rCL_ROR64rCL_ROR8rCL") 3, false, false, 473, 4, 19, 1,  0, 0}, // #669
  {DBGFIELD("ROL16mCL_ROL32mCL_ROL64mCL_ROL8mCL_ROR16mCL_ROR32mCL_ROR64mCL_ROR8mCL") 6, false, false,  0, 0,  2, 1,  0, 0}, // #670
  {DBGFIELD("RCL16r1_RCL32r1_RCL64r1_RCL8r1_RCR16r1_RCR32r1_RCR64r1_RCR8r1") 3, false, false, 496, 4, 19, 1,  0, 0}, // #671
  {DBGFIELD("RCL16m1_RCL32m1_RCL64m1_RCL8m1_RCR16m1_RCR32m1_RCR64m1_RCR8m1") 6, false, false,  0, 0,  2, 1,  0, 0}, // #672
  {DBGFIELD("RCL16rCL_RCL16ri_RCL32rCL_RCL32ri_RCL64rCL_RCL64ri_RCL8rCL_RCL8ri_RCR16rCL_RCR16ri_RCR32rCL_RCR32ri_RCR64rCL_RCR64ri_RCR8rCL_RCR8ri") 8, false, false,  1, 2, 16, 1,  0, 0}, // #673
  {DBGFIELD("RCL16mCL_RCL16mi_RCL32mCL_RCL32mi_RCL64mCL_RCL64mi_RCL8mCL_RCL8mi_RCR16mCL_RCR16mi_RCR32mCL_RCR32mi_RCR64mCL_RCR64mi_RCR8mCL_RCR8mi") 11, false, false,  0, 0,  2, 1,  0, 0}, // #674
  {DBGFIELD("SHLD16rri8_SHRD16rri8") 1, false, false, 22, 7,  6, 1,  0, 0}, // #675
  {DBGFIELD("SHLD32rri8_SHRD32rri8") 1, false, false, 22, 7,  6, 1,  0, 0}, // #676
  {DBGFIELD("SHLD64rri8_SHRD64rri8") 1, false, false, 22, 7,  6, 1,  0, 0}, // #677
  {DBGFIELD("SHLD16mri8_SHRD16mri8") 5, false, false,  0, 0,  2, 1,  0, 0}, // #678
  {DBGFIELD("SHLD32mri8_SHRD32mri8") 5, false, false,  0, 0,  2, 1,  0, 0}, // #679
  {DBGFIELD("SHLD64mri8_SHRD64mri8") 5, false, false,  0, 0,  2, 1,  0, 0}, // #680
  {DBGFIELD("SHLD16rrCL")         4, false, false,  1, 2,  6, 1,  0, 0}, // #681
  {DBGFIELD("SHLD32rrCL")         4, false, false,  1, 2,  6, 1,  0, 0}, // #682
  {DBGFIELD("SHLD64rrCL")         4, false, false,  1, 2,  6, 1,  0, 0}, // #683
  {DBGFIELD("SHRD16rrCL")         4, false, false,  1, 2,  9, 1,  0, 0}, // #684
  {DBGFIELD("SHRD32rrCL")         4, false, false,  1, 2,  9, 1,  0, 0}, // #685
  {DBGFIELD("SHRD64rrCL")         4, false, false,  1, 2,  9, 1,  0, 0}, // #686
  {DBGFIELD("SHLD16mrCL_SHRD16mrCL") 7, false, false,  0, 0,  2, 1,  0, 0}, // #687
  {DBGFIELD("SHLD32mrCL_SHRD32mrCL") 7, false, false,  0, 0,  2, 1,  0, 0}, // #688
  {DBGFIELD("SHLD64mrCL_SHRD64mrCL") 7, false, false,  0, 0,  2, 1,  0, 0}, // #689
  {DBGFIELD("BT16ri8_BT32ri8_BT64ri8") 1, false, false, 97, 4,  2, 1,  0, 0}, // #690
  {DBGFIELD("BT16rr_BT32rr_BT64rr") 1, false, false, 97, 4,  2, 1,  0, 0}, // #691
  {DBGFIELD("BT16mr_BT32mr_BT64mr") 10, false, false,  0, 0,  2, 1,  0, 0}, // #692
  {DBGFIELD("BT16mi8_BT32mi8_BT64mi8") 1, false, false, 91, 6,  3, 1,  0, 0}, // #693
  {DBGFIELD("BTC16ri8_BTC32ri8_BTC64ri8_BTR16ri8_BTR32ri8_BTR64ri8_BTS16ri8_BTS32ri8_BTS64ri8") 1, false, false, 97, 4,  2, 1,  0, 0}, // #694
  {DBGFIELD("BTC16rr_BTC32rr_BTC64rr_BTR16rr_BTR32rr_BTS16rr_BTS32rr_BTS64rr") 1, false, false, 97, 4,  2, 1,  0, 0}, // #695
  {DBGFIELD("BTR64rr")            1, false, false, 97, 4,  2, 1,  0, 0}, // #696
  {DBGFIELD("BTC16mr_BTC32mr_BTC64mr_BTR16mr_BTR32mr_BTR64mr_BTS16mr_BTS32mr_BTS64mr") 11, false, false,  0, 0,  2, 1,  0, 0}, // #697
  {DBGFIELD("BTC16mi8_BTC32mi8_BTC64mi8_BTR16mi8_BTR32mi8_BTR64mi8_BTS16mi8_BTS32mi8_BTS64mi8") 1, false, false, 91, 6,  3, 1,  0, 0}, // #698
  {DBGFIELD("BSF16rr_BSF32rr_BSF64rr_BSR16rr_BSR32rr_BSR64rr") 1, false, false, 22, 7,  6, 1,  0, 0}, // #699
  {DBGFIELD("BSF16rm_BSF32rm_BSF64rm_BSR16rm_BSR32rm_BSR64rm") 1, false, false, 13, 9,  5, 1,  0, 0}, // #700
  {DBGFIELD("SETAEr_SETAr_SETBEr_SETBr_SETEr_SETGEr_SETGr_SETLEr_SETLr_SETNEr_SETNOr_SETNPr_SETNSr_SETOr_SETPr_SETSr") 1, false, false, 97, 4,  2, 1,  0, 0}, // #701
  {DBGFIELD("SETAEm_SETAm_SETBEm_SETBm_SETEm_SETGEm_SETGm_SETLEm_SETLm_SETNEm_SETNOm_SETNPm_SETNSm_SETOm_SETPm_SETSm") 3, false, false, 355, 7,  2, 1,  0, 0}, // #702
  {DBGFIELD("CLD")                3, false, false, 500, 9,  2, 1,  0, 0}, // #703
  {DBGFIELD("STD")                3, false, false, 500, 9,  2, 1,  0, 0}, // #704
  {DBGFIELD("TZCNT16rr_TZCNT32rr_TZCNT64rr") 1, false, false, 22, 7,  6, 1,  0, 0}, // #705
  {DBGFIELD("TZCNT16rm_TZCNT32rm_TZCNT64rm") 1, false, false, 13, 9,  5, 1,  0, 0}, // #706
  {DBGFIELD("ANDN32rr_ANDN64rr")  1, false, false, 161, 4,  2, 1,  0, 0}, // #707
  {DBGFIELD("ANDN32rm_ANDN64rm")  1, false, false, 170, 6,  9, 1,  0, 0}, // #708
  {DBGFIELD("BLSI32rr_BLSI64rr_BLSMSK32rr_BLSMSK64rr_BLSR32rr_BLSR64rr") 1, false, false, 161, 4,  2, 1,  0, 0}, // #709
  {DBGFIELD("BLSI32rm_BLSI64rm_BLSMSK32rm_BLSMSK64rm_BLSR32rm_BLSR64rm") 1, false, false, 170, 6,  9, 1,  0, 0}, // #710
  {DBGFIELD("BEXTR32rr_BEXTR64rr") 1, false, false, 63, 2, 19, 1,  0, 0}, // #711
  {DBGFIELD("BEXTR32rm_BEXTR64rm") 1, false, false, 329, 4, 16, 1,  0, 0}, // #712
  {DBGFIELD("BZHI32rr_BZHI64rr")  1, false, false, 161, 4,  2, 1,  0, 0}, // #713
  {DBGFIELD("BZHI32rm_BZHI64rm")  1, false, false, 170, 6,  9, 1,  0, 0}, // #714
  {DBGFIELD("PDEP32rr_PDEP64rr_PEXT32rr_PEXT64rr") 1, false, false, 22, 7,  6, 1,  0, 0}, // #715
  {DBGFIELD("PDEP32rm_PDEP64rm_PEXT32rm_PEXT64rm") 1, false, false, 13, 9,  5, 1,  0, 0}, // #716
  {DBGFIELD("JCXZ_JRCXZ")         2, false, false, 509, 7,  2, 1,  0, 0}, // #717
  {DBGFIELD("LOOP")               7, false, false,  0, 0,  2, 1,  0, 0}, // #718
  {DBGFIELD("LOOPE")              7, false, false,  0, 0,  2, 1,  0, 0}, // #719
  {DBGFIELD("LOOPNE")             7, false, false,  0, 0,  2, 1,  0, 0}, // #720
  {DBGFIELD("CALL16r_CALL32r")    3, false, false, 516, 10,  2, 1,  0, 0}, // #721
  {DBGFIELD("CALL16m_CALL32m")    4, false, false, 526, 10,  2, 1,  0, 0}, // #722
  {DBGFIELD("LRETL_LRETQ_LRETW_RETL_RETQ_RETW") 2, false, false, 536, 8,  2, 1,  0, 0}, // #723
  {DBGFIELD("LRETIL_LRETIQ_LRETIW") 4, false, false, 544, 10,  2, 1,  0, 0}, // #724
  {DBGFIELD("RETIL_RETIQ_RETIW")  4, false, false, 544, 10,  2, 1,  0, 0}, // #725
  {DBGFIELD("BOUNDS16rm_BOUNDS32rm") 15, false, false,  0, 0,  2, 1,  0, 0}, // #726
  {DBGFIELD("INTO")               4, false, false,  0, 0,  2, 1,  0, 0}, // #727
  {DBGFIELD("LODSB_LODSW")        3, false, false, 329, 4,  2, 1,  0, 0}, // #728
  {DBGFIELD("LODSL_LODSQ")        2, false, false,  9, 4,  2, 1,  0, 0}, // #729
  {DBGFIELD("STOSB_STOSL_STOSQ_STOSW") 3, false, false,  3, 6,  2, 1,  0, 0}, // #730
  {DBGFIELD("MOVSB_MOVSL_MOVSQ_MOVSW") 5, false, false, 554, 6,  9, 1,  0, 0}, // #731
  {DBGFIELD("MOVSLDUPrm")         5, false, false, 554, 6,  9, 1,  0, 0}, // #732
  {DBGFIELD("MOVSLDUPrr")         5, false, false, 554, 6,  9, 1,  0, 0}, // #733
  {DBGFIELD("SCASB_SCASL_SCASQ_SCASW") 3, false, false, 329, 4,  2, 1,  0, 0}, // #734
  {DBGFIELD("CMPSB_CMPSL_CMPSQ_CMPSW") 5, false, false, 560, 4,  9, 1,  0, 0}, // #735
  {DBGFIELD("XADD16rm_XADD32rm_XADD64rm_XADD8rm") 5, false, false,  0, 0,  2, 1,  0, 0}, // #736
  {DBGFIELD("CMPXCHG16rm_CMPXCHG32rm_CMPXCHG64rm") 6, false, false,  0, 0,  2, 1,  0, 0}, // #737
  {DBGFIELD("CMPXCHG8rm")         6, false, false,  0, 0,  2, 1,  0, 0}, // #738
  {DBGFIELD("CMPXCHG8B")          15, false, false,  0, 0,  2, 1,  0, 0}, // #739
  {DBGFIELD("CMPXCHG16B")         22, false, false,  0, 0,  2, 1,  0, 0}, // #740
  {DBGFIELD("PAUSE")              5, false, false, 564, 9,  2, 1,  0, 0}, // #741
  {DBGFIELD("LEAVE_LEAVE64")      3, false, false, 329, 4,  2, 1,  0, 0}, // #742
  {DBGFIELD("XGETBV")             8, false, false,  0, 0,  2, 1,  0, 0}, // #743
  {DBGFIELD("RDTSC")              15, false, false,  0, 0,  2, 1,  0, 0}, // #744
  {DBGFIELD("RDTSCP")             15, false, false,  0, 0,  2, 1,  0, 0}, // #745
  {DBGFIELD("RDPMC")              34, false, false,  0, 0,  2, 1,  0, 0}, // #746
  {DBGFIELD("RDRAND16r_RDRAND32r_RDRAND64r") 17, false, false, 573, 5,  2, 1,  0, 0}, // #747
  {DBGFIELD("LD_Frr")             1, false, false, 578, 4,  2, 1,  0, 0}, // #748
  {DBGFIELD("LD_F80m")            4, false, false, 582, 6,  9, 1,  0, 0}, // #749
  {DBGFIELD("FBLDm")              43, false, false,  0, 0, 32, 1,  0, 0}, // #750
  {DBGFIELD("ST_FPrr_ST_Frr")     1, false, false, 578, 4,  2, 1,  0, 0}, // #751
  {DBGFIELD("ST_FP80m")           7, false, false, 588, 6,  2, 1,  0, 0}, // #752
  {DBGFIELD("FBSTPm")             226, false, false,  0, 0,  2, 1,  0, 0}, // #753
  {DBGFIELD("XCH_F")              1, false, false,  0, 0,  2, 1,  0, 0}, // #754
  {DBGFIELD("ILD_F16m_ILD_F32m_ILD_F64m") 2, false, false, 594, 6, 16, 1,  0, 0}, // #755
  {DBGFIELD("IST_F16m_IST_F32m_IST_FP16m_IST_FP32m") 3, false, false, 318, 11,  5, 1,  0, 0}, // #756
  {DBGFIELD("LD_F0")              1, false, false, 578, 4,  2, 1,  0, 0}, // #757
  {DBGFIELD("LD_F1")              2, false, false, 578, 4,  2, 1,  0, 0}, // #758
  {DBGFIELD("FLDPI")              2, false, false, 578, 4,  2, 1,  0, 0}, // #759
  {DBGFIELD("CMOVBE_F_CMOVBE_Fp32_CMOVBE_Fp64_CMOVBE_Fp80_CMOVB_F_CMOVB_Fp32_CMOVB_Fp64_CMOVB_Fp80_CMOVNBE_F_CMOVNBE_Fp32_CMOVNBE_Fp64_CMOVNBE_Fp80_CMOVNB_F_CMOVNB_Fp32_CMOVNB_Fp64_CMOVNB_Fp80_CMOVNE_F_CMOVNE_Fp32_CMOVNE_Fp64_CMOVNE_Fp80_CMOVNP_F_CMOVNP_Fp32_CMOVNP_Fp64_CMOVNP_Fp80_CMOVP_F_CMOVP_Fp32_CMOVP_Fp64_CMOVP_Fp80") 3, false, false, 216, 12, 19, 1,  0, 0}, // #760
  {DBGFIELD("FNSTSW16r")          2, false, false, 600, 9,  2, 1,  0, 0}, // #761
  {DBGFIELD("FNSTSWm")            3, false, false, 609, 11, 16, 1,  0, 0}, // #762
  {DBGFIELD("FLDCW16m")           3, false, false, 620, 11,  5, 1,  0, 0}, // #763
  {DBGFIELD("FNSTCW16m")          3, false, false, 516, 10,  2, 1,  0, 0}, // #764
  {DBGFIELD("FDECSTP_FINCSTP")    1, false, false, 578, 4,  2, 1,  0, 0}, // #765
  {DBGFIELD("FFREE_FFREEP")       1, false, false, 578, 4,  2, 1,  0, 0}, // #766
  {DBGFIELD("FSAVEm")             147, false, false,  0, 0,  2, 1,  0, 0}, // #767
  {DBGFIELD("FRSTORm")            90, false, false,  0, 0,  2, 1,  0, 0}, // #768
  {DBGFIELD("ABS_F_ABS_Fp32_ABS_Fp64_ABS_Fp80") 1, false, false, 117, 9,  2, 1,  0, 0}, // #769
  {DBGFIELD("CHS_F_CHS_Fp32_CHS_Fp64_CHS_Fp80") 1, false, false, 117, 9,  2, 1,  0, 0}, // #770
  {DBGFIELD("COMP_FST0r_COM_FST0r") 1, false, false, 22, 7,  2, 1,  0, 0}, // #771
  {DBGFIELD("UCOM_FPr_UCOM_Fr")   1, false, false, 22, 7,  2, 1,  0, 0}, // #772
  {DBGFIELD("FCOM32m_FCOM64m_FCOMP32m_FCOMP64m") 2, false, false, 13, 9,  2, 1,  0, 0}, // #773
  {DBGFIELD("FCOMPP")             2, false, false, 578, 4,  2, 1,  0, 0}, // #774
  {DBGFIELD("UCOM_FPPr")          2, false, false, 578, 4,  2, 1,  0, 0}, // #775
  {DBGFIELD("COM_FIPr_COM_FIr")   3, false, false, 578, 4,  2, 1,  0, 0}, // #776
  {DBGFIELD("UCOM_FIPr_UCOM_FIr") 3, false, false, 578, 4,  2, 1,  0, 0}, // #777
  {DBGFIELD("FICOM16m_FICOM32m_FICOMP16m_FICOMP32m") 3, false, false, 631, 9,  2, 1,  0, 0}, // #778
  {DBGFIELD("TST_F_TST_Fp32_TST_Fp64_TST_Fp80") 1, false, false, 22, 7,  2, 1,  0, 0}, // #779
  {DBGFIELD("FXAM")               2, false, false, 640, 7,  2, 1,  0, 0}, // #780
  {DBGFIELD("FPREM")              28, false, false,  0, 0, 23, 1,  0, 0}, // #781
  {DBGFIELD("FPREM1")             28, false, false,  0, 0, 23, 1,  0, 0}, // #782
  {DBGFIELD("FRNDINT")            17, false, false,  0, 0, 20, 1,  0, 0}, // #783
  {DBGFIELD("FSCALE")             50, false, false,  0, 0, 33, 1,  0, 0}, // #784
  {DBGFIELD("FXTRACT")            17, false, false,  0, 0, 24, 1,  0, 0}, // #785
  {DBGFIELD("FNOP")               1, false, false, 578, 4,  2, 1,  0, 0}, // #786
  {DBGFIELD("WAIT")               2, false, false, 578, 4,  2, 1,  0, 0}, // #787
  {DBGFIELD("FNCLEX")             5, false, false, 647, 2,  2, 1,  0, 0}, // #788
  {DBGFIELD("FNINIT")             26, false, false,  0, 0,  2, 1,  0, 0}, // #789
  {DBGFIELD("MMX_MOVD64from64rr_MMX_MOVD64grr") 1, false, false, 117, 9,  2, 1,  0, 0}, // #790
  {DBGFIELD("MOVPDI2DIrr_VMOVPDI2DIrr") 1, false, false, 117, 9,  2, 1,  0, 0}, // #791
  {DBGFIELD("MMX_MOVD64rr_MMX_MOVD64to64rr") 1, false, false, 39, 8,  2, 1,  0, 0}, // #792
  {DBGFIELD("MOVDI2PDIrr_VMOVDI2PDIrr") 1, false, false, 39, 8,  2, 1,  0, 0}, // #793
  {DBGFIELD("VMOVPQIto64rr")      1, false, false, 117, 9,  2, 1,  0, 0}, // #794
  {DBGFIELD("VMOV64toPQIrr")      1, false, false, 39, 8,  2, 1,  0, 0}, // #795
  {DBGFIELD("MMX_MOVQ64rr_MMX_MOVQ64rr_REV") 1, false, false, 26, 3,  2, 1,  0, 0}, // #796
  {DBGFIELD("MOVDQArr_MOVDQArr_REV_VMOVDQAYrr_VMOVDQAYrr_REV_VMOVDQArr_VMOVDQArr_REV") 1, false, false, 26, 3,  2, 1,  0, 0}, // #797
  {DBGFIELD("MOVDQUrr_MOVDQUrr_REV_VMOVDQUYrr_VMOVDQUYrr_REV_VMOVDQUrr_VMOVDQUrr_REV") 1, false, false, 26, 3,  2, 1,  0, 0}, // #798
  {DBGFIELD("MMX_MOVDQ2Qrr")      2, false, false, 649, 9,  2, 1,  0, 0}, // #799
  {DBGFIELD("MMX_MOVQ2DQrr")      1, false, false, 26, 3,  2, 1,  0, 0}, // #800
  {DBGFIELD("MMX_PACKSSDWirr_MMX_PACKSSWBirr_MMX_PACKUSWBirr") 3, false, false, 658, 8, 19, 1,  0, 0}, // #801
  {DBGFIELD("MMX_PACKSSDWirm_MMX_PACKSSWBirm_MMX_PACKUSWBirm") 3, false, false, 666, 10,  9, 1,  0, 0}, // #802
  {DBGFIELD("VPMOVSXBQYrr_VPMOVSXBWYrr_VPMOVSXDQYrr_VPMOVZXBQYrr_VPMOVZXBWYrr_VPMOVZXDQYrr") 1, false, false, 39, 8,  6, 1,  0, 0}, // #803
  {DBGFIELD("PBLENDWrri")         1, false, false, 39, 8,  2, 1,  0, 0}, // #804
  {DBGFIELD("VPBLENDWYrri_VPBLENDWrri") 1, false, false, 39, 8,  2, 1,  0, 0}, // #805
  {DBGFIELD("PBLENDWrmi")         2, false, false, 29, 10,  9, 1,  1, 1}, // #806
  {DBGFIELD("VPBLENDWYrmi_VPBLENDWrmi") 2, false, false, 29, 10,  9, 1,  1, 1}, // #807
  {DBGFIELD("VPBLENDDYrri_VPBLENDDrri") 1, false, false, 26, 3,  2, 1,  0, 0}, // #808
  {DBGFIELD("VPBLENDDYrmi_VPBLENDDrmi") 2, false, false, 17, 5,  9, 1,  1, 1}, // #809
  {DBGFIELD("MMX_MASKMOVQ_MMX_MASKMOVQ64") 4, false, false, 676, 12, 34, 1,  0, 0}, // #810
  {DBGFIELD("MASKMOVDQU_MASKMOVDQU64_VMASKMOVDQU_VMASKMOVDQU64") 10, false, false, 688, 7,  7, 1,  0, 0}, // #811
  {DBGFIELD("VPMASKMOVDYrm_VPMASKMOVDrm_VPMASKMOVQYrm_VPMASKMOVQrm") 3, false, false, 47, 10,  9, 1,  1, 1}, // #812
  {DBGFIELD("VPMASKMOVDYmr_VPMASKMOVDmr_VPMASKMOVQYmr_VPMASKMOVQmr") 4, false, false, 695, 15, 34, 1,  0, 0}, // #813
  {DBGFIELD("MMX_PMOVMSKBrr")     1, false, false, 117, 9,  6, 1,  0, 0}, // #814
  {DBGFIELD("PMOVMSKBrr_VPMOVMSKBrr") 1, false, false, 117, 9,  6, 1,  0, 0}, // #815
  {DBGFIELD("VPMOVMSKBYrr")       1, false, false, 117, 9,  6, 1,  0, 0}, // #816
  {DBGFIELD("MMX_PEXTRWirri")     2, false, false, 710, 12, 19, 1,  0, 0}, // #817
  {DBGFIELD("PEXTRBrr_PEXTRDrr_PEXTRQrr_PEXTRWrr_REV") 2, false, false, 710, 12, 19, 1,  0, 0}, // #818
  {DBGFIELD("PEXTRBmr_PEXTRDmr_PEXTRQmr_PEXTRWmr") 3, false, false, 290, 12,  2, 1,  0, 0}, // #819
  {DBGFIELD("VPBROADCASTBrm_VPBROADCASTWrm") 3, false, false, 722, 11,  3, 1,  1, 1}, // #820
  {DBGFIELD("VPBROADCASTBYrm_VPBROADCASTWYrm") 3, false, false, 722, 11,  5, 1,  1, 1}, // #821
  {DBGFIELD("VPGATHERDDrm")       20, false, false,  0, 0,  2, 1,  1, 1}, // #822
  {DBGFIELD("VPGATHERDDYrm")      34, false, false,  0, 0,  2, 1,  1, 1}, // #823
  {DBGFIELD("VPGATHERQDrm")       15, false, false,  0, 0,  2, 1,  1, 1}, // #824
  {DBGFIELD("VPGATHERQDYrm")      22, false, false,  0, 0,  2, 1,  1, 1}, // #825
  {DBGFIELD("VPGATHERDQrm")       12, false, false,  0, 0,  2, 1,  1, 1}, // #826
  {DBGFIELD("VPGATHERDQYrm")      20, false, false,  0, 0,  2, 1,  1, 1}, // #827
  {DBGFIELD("VPGATHERQQrm")       14, false, false,  0, 0,  2, 1,  1, 1}, // #828
  {DBGFIELD("VPGATHERQQYrm")      22, false, false,  0, 0,  2, 1,  1, 1}, // #829
  {DBGFIELD("MMX_PHADDSWrr64_MMX_PHADDWrr64_MMX_PHSUBSWrr64_MMX_PHSUBWrr64") 3, false, false, 146, 11,  6, 1,  0, 0}, // #830
  {DBGFIELD("MMX_PHADDrr64_MMX_PHSUBDrr64") 3, false, false, 146, 11,  6, 1,  0, 0}, // #831
  {DBGFIELD("PHADDDrr_PHSUBDrr_VPHADDDrr_VPHSUBDrr") 3, false, false, 146, 11,  6, 1,  0, 0}, // #832
  {DBGFIELD("PHADDSWrr128_PHSUBSWrr128_VPHADDSWrr128_VPHSUBSWrr128") 3, false, false, 146, 11,  6, 1,  0, 0}, // #833
  {DBGFIELD("PHADDWrr_PHSUBWrr_VPHADDDYrr_VPHADDWYrr_VPHADDWrr_VPHSUBDYrr_VPHSUBWYrr_VPHSUBWrr") 3, false, false, 146, 11,  6, 1,  0, 0}, // #834
  {DBGFIELD("VPHADDSWrr256_VPHSUBSWrr256") 3, false, false, 146, 11,  6, 1,  0, 0}, // #835
  {DBGFIELD("MMX_PHADDSWrm64_MMX_PHADDWrm64_MMX_PHSUBSWrm64_MMX_PHSUBWrm64") 3, false, false, 133, 13, 16, 1,  1, 1}, // #836
  {DBGFIELD("MMX_PHADDrm64_MMX_PHSUBDrm64") 3, false, false, 133, 13, 16, 1,  1, 1}, // #837
  {DBGFIELD("PHADDDrm_PHSUBDrm_VPHADDDrm_VPHSUBDrm") 3, false, false, 133, 13, 16, 1,  1, 1}, // #838
  {DBGFIELD("PHADDSWrm128_PHSUBSWrm128_VPHADDSWrm128_VPHSUBSWrm128") 3, false, false, 133, 13, 16, 1,  1, 1}, // #839
  {DBGFIELD("PHADDWrm_PHSUBWrm_VPHADDDYrm_VPHADDWYrm_VPHADDWrm_VPHSUBDYrm_VPHSUBWYrm_VPHSUBWrm") 3, false, false, 133, 13, 16, 1,  1, 1}, // #840
  {DBGFIELD("VPHADDSWrm256_VPHSUBSWrm256") 3, false, false, 133, 13, 16, 1,  1, 1}, // #841
  {DBGFIELD("PCMPGTQrr_VPCMPGTQYrr_VPCMPGTQrr") 1, false, false, 117, 9,  3, 1,  0, 0}, // #842
  {DBGFIELD("PCMPGTQrm_VPCMPGTQYrm_VPCMPGTQrm") 2, false, false, 105, 11,  3, 1,  1, 1}, // #843
  {DBGFIELD("PMULLDrr_VPMULLDYrr_VPMULLDrr") 2, false, false, 733, 9,  8, 1,  0, 0}, // #844
  {DBGFIELD("PMULLDrm_VPMULLDYrm_VPMULLDrm") 3, false, false, 742, 11,  8, 1,  1, 1}, // #845
  {DBGFIELD("PTESTrr_VPTESTYrr_VPTESTrr") 2, false, false, 710, 12, 19, 1,  0, 0}, // #846
  {DBGFIELD("PTESTrm_VPTESTYrm_VPTESTrm") 2, false, false, 710, 12, 19, 1,  0, 0}, // #847
  {DBGFIELD("PSLLDrr_PSLLQrr_PSLLWrr_PSRADrr_PSRAWrr_PSRLDrr_PSRLQrr_PSRLWrr_VPSLLDYrr_VPSLLDrr_VPSLLQYrr_VPSLLQrr_VPSLLWYrr_VPSLLWrr_VPSRADYrr_VPSRADrr_VPSRAWYrr_VPSRAWrr_VPSRLDYrr_VPSRLDrr_VPSRLQYrr_VPSRLQrr_VPSRLWYrr_VPSRLWrr") 2, false, false, 710, 12, 19, 1,  0, 0}, // #848
  {DBGFIELD("PSLLDQri_PSRLDQri_VPSLLDQYri_VPSLLDQri_VPSRLDQYri_VPSRLDQri") 1, false, false, 39, 8,  2, 1,  0, 0}, // #849
  {DBGFIELD("MMX_EMMS")           31, false, false,  0, 0, 34, 1,  0, 0}, // #850
  {DBGFIELD("MOVMSKPDrr_MOVMSKPSrr_VMOVMSKPDrr_VMOVMSKPSrr") 1, false, false, 117, 9,  6, 1,  0, 0}, // #851
  {DBGFIELD("VMOVMSKPDYrr_VMOVMSKPSYrr") 1, false, false, 117, 9, 19, 1,  0, 0}, // #852
  {DBGFIELD("VPERM2F128rr")       1, false, false, 39, 8,  6, 1,  0, 0}, // #853
  {DBGFIELD("VPERM2F128rm")       1, false, false, 29, 10,  5, 1,  1, 1}, // #854
  {DBGFIELD("BLENDVPDrr0_BLENDVPSrr0") 1, false, false, 57, 8, 19, 1,  0, 0}, // #855
  {DBGFIELD("BLENDVPDrm0_BLENDVPSrm0") 1, false, false, 47, 10, 16, 1,  1, 1}, // #856
  {DBGFIELD("VBROADCASTF128")     1, false, false, 101, 3,  9, 1,  0, 0}, // #857
  {DBGFIELD("EXTRACTPSrr")        2, false, false, 710, 12,  2, 1,  0, 0}, // #858
  {DBGFIELD("VEXTRACTPSrr")       2, false, false, 710, 12,  2, 1,  0, 0}, // #859
  {DBGFIELD("EXTRACTPSmr")        3, false, false, 753, 14,  9, 1,  0, 0}, // #860
  {DBGFIELD("VEXTRACTPSmr")       3, false, false, 753, 14,  9, 1,  0, 0}, // #861
  {DBGFIELD("VEXTRACTF128rr")     1, false, false, 39, 8,  6, 1,  0, 0}, // #862
  {DBGFIELD("VEXTRACTF128mr")     2, false, false, 165, 5,  9, 1,  0, 0}, // #863
  {DBGFIELD("VINSERTF128rr")      1, false, false, 39, 8,  6, 1,  0, 0}, // #864
  {DBGFIELD("VINSERTF128rm")      1, false, false, 39, 8,  6, 1,  1, 1}, // #865
  {DBGFIELD("VMASKMOVPDYrm_VMASKMOVPDrm_VMASKMOVPSYrm_VMASKMOVPSrm") 3, false, false, 47, 10,  9, 1,  0, 0}, // #866
  {DBGFIELD("VMASKMOVPDmr_VMASKMOVPSmr") 4, false, false, 695, 15, 34, 1,  0, 0}, // #867
  {DBGFIELD("VMASKMOVPDYmr_VMASKMOVPSYmr") 4, false, false, 695, 15,  7, 1,  0, 0}, // #868
  {DBGFIELD("VGATHERDPSrm")       20, false, false,  0, 0,  2, 1,  1, 1}, // #869
  {DBGFIELD("VGATHERDPSYrm")      34, false, false,  0, 0,  2, 1,  1, 1}, // #870
  {DBGFIELD("VGATHERQPSrm")       15, false, false,  0, 0,  2, 1,  1, 1}, // #871
  {DBGFIELD("VGATHERQPSYrm")      22, false, false,  0, 0,  2, 1,  1, 1}, // #872
  {DBGFIELD("VGATHERDPDrm")       12, false, false,  0, 0,  2, 1,  1, 1}, // #873
  {DBGFIELD("VGATHERDPDYrm")      20, false, false,  0, 0,  2, 1,  1, 1}, // #874
  {DBGFIELD("VGATHERQPDrm")       14, false, false,  0, 0,  2, 1,  1, 1}, // #875
  {DBGFIELD("VGATHERQPDYrm")      22, false, false,  0, 0,  2, 1,  1, 1}, // #876
  {DBGFIELD("CVTPD2PSrr_VCVTPD2PSrr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #877
  {DBGFIELD("CVTPD2PSrm_VCVTPD2PSrm") 3, false, false, 778, 13, 10, 1,  0, 0}, // #878
  {DBGFIELD("VCVTPD2PSYrr")       2, false, false, 767, 11,  3, 1,  0, 0}, // #879
  {DBGFIELD("VCVTPD2PSYrm")       3, false, false, 778, 13, 15, 1,  0, 0}, // #880
  {DBGFIELD("CVTSD2SSrr_Int_CVTSD2SSrr_Int_VCVTSD2SSrr_VCVTSD2SSrr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #881
  {DBGFIELD("CVTSD2SSrm")         3, false, false, 778, 13, 10, 1,  0, 0}, // #882
  {DBGFIELD("Int_CVTSD2SSrm_Int_VCVTSD2SSrm_VCVTSD2SSrm") 3, false, false, 778, 13, 10, 1,  0, 0}, // #883
  {DBGFIELD("CVTPS2PDrr_VCVTPS2PDrr") 2, false, false, 710, 12, 19, 1,  0, 0}, // #884
  {DBGFIELD("CVTPS2PDrm_VCVTPS2PDYrm_VCVTPS2PDrm") 2, false, false, 105, 11,  3, 1,  0, 0}, // #885
  {DBGFIELD("VCVTPS2PDYrr")       2, false, false, 710, 12,  3, 1,  0, 0}, // #886
  {DBGFIELD("CVTSS2SDrr_Int_CVTSS2SDrr_Int_VCVTSS2SDrr_VCVTSS2SDrr") 2, false, false, 710, 12, 19, 1,  0, 0}, // #887
  {DBGFIELD("CVTSS2SDrm")         2, false, false, 105, 11,  3, 1,  0, 0}, // #888
  {DBGFIELD("Int_CVTSS2SDrm_Int_VCVTSS2SDrm_VCVTSS2SDrm") 2, false, false, 105, 11,  3, 1,  0, 0}, // #889
  {DBGFIELD("CVTDQ2PDrr")         2, false, false, 767, 11,  9, 1,  0, 0}, // #890
  {DBGFIELD("VCVTDQ2PDrr")        2, false, false, 767, 11,  9, 1,  0, 0}, // #891
  {DBGFIELD("VCVTDQ2PDYrr")       2, false, false, 767, 11, 16, 1,  0, 0}, // #892
  {DBGFIELD("CVTPD2DQrr_CVTTPD2DQrr_VCVTTPD2DQrr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #893
  {DBGFIELD("VCVTPD2DQrr")        2, false, false, 767, 11,  9, 1,  0, 0}, // #894
  {DBGFIELD("CVTPD2DQrm_CVTTPD2DQrm_VCVTTPD2DQrm") 3, false, false, 778, 13, 10, 1,  0, 0}, // #895
  {DBGFIELD("VCVTPD2DQrm")        3, false, false, 778, 13, 10, 1,  0, 0}, // #896
  {DBGFIELD("VCVTPD2DQYrr")       2, false, false, 767, 11, 16, 1,  0, 0}, // #897
  {DBGFIELD("VCVTTPD2DQYrr")      2, false, false, 767, 11, 16, 1,  0, 0}, // #898
  {DBGFIELD("VCVTPD2DQYrm")       3, false, false, 778, 13,  8, 1,  0, 0}, // #899
  {DBGFIELD("VCVTTPD2DQYrm")      3, false, false, 778, 13,  8, 1,  0, 0}, // #900
  {DBGFIELD("MMX_CVTPS2PIirr_MMX_CVTTPS2PIirr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #901
  {DBGFIELD("MMX_CVTPI2PDirr")    2, false, false, 767, 11,  9, 1,  0, 0}, // #902
  {DBGFIELD("MMX_CVTPD2PIirr_MMX_CVTTPD2PIirr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #903
  {DBGFIELD("CVTSI2SS64rr_CVTSI2SSrr_Int_CVTSI2SS64rr_Int_CVTSI2SSrr_Int_VCVTSI2SS64rr_Int_VCVTSI2SSrr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #904
  {DBGFIELD("VCVTSI2SS64rr_VCVTSI2SSrr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #905
  {DBGFIELD("CVTSS2SI64rr_CVTTSS2SI64rr_Int_CVTTSS2SI64rr_Int_VCVTTSS2SI64rr_VCVTSS2SI64rr_VCVTTSS2SI64rr") 2, false, false, 791, 12,  9, 1,  0, 0}, // #906
  {DBGFIELD("CVTSS2SIrr_CVTTSS2SIrr_Int_CVTTSS2SIrr_Int_VCVTTSS2SIrr_VCVTSS2SIrr_VCVTTSS2SIrr") 2, false, false, 791, 12,  9, 1,  0, 0}, // #907
  {DBGFIELD("CVTSS2SI64rm_CVTTSS2SI64rm_Int_CVTTSS2SI64rm_Int_VCVTTSS2SI64rm_VCVTSS2SI64rm_VCVTTSS2SI64rm") 3, false, false, 803, 14, 10, 1,  0, 0}, // #908
  {DBGFIELD("CVTSS2SIrm_CVTTSS2SIrm_Int_CVTTSS2SIrm_Int_VCVTTSS2SIrm_VCVTSS2SIrm_VCVTTSS2SIrm") 3, false, false, 803, 14, 10, 1,  0, 0}, // #909
  {DBGFIELD("CVTSD2SI64rr_CVTSD2SIrr_CVTTSD2SI64rr_CVTTSD2SIrr_Int_CVTTSD2SI64rr_Int_CVTTSD2SIrr_Int_VCVTTSD2SI64rr_Int_VCVTTSD2SIrr_VCVTSD2SI64rr_VCVTSD2SIrr_VCVTTSD2SI64rr_VCVTTSD2SIrr") 2, false, false, 791, 12,  9, 1,  0, 0}, // #910
  {DBGFIELD("CVTSD2SI64rm_CVTSD2SIrm_CVTTSD2SI64rm_CVTTSD2SIrm_Int_CVTTSD2SI64rm_Int_CVTTSD2SIrm_Int_VCVTTSD2SI64rm_Int_VCVTTSD2SIrm_VCVTSD2SI64rm_VCVTSD2SIrm_VCVTTSD2SI64rm_VCVTTSD2SIrm") 3, false, false, 803, 14, 10, 1,  0, 0}, // #911
  {DBGFIELD("VCVTPS2PHYrr_VCVTPS2PHrr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #912
  {DBGFIELD("VCVTPS2PHYmr_VCVTPS2PHmr") 4, false, false, 817, 15, 35, 2,  0, 0}, // #913
  {DBGFIELD("VCVTPH2PSYrr_VCVTPH2PSrr") 2, false, false, 767, 11,  9, 1,  0, 0}, // #914
  {DBGFIELD("HADDPDrr_HADDPSrr_HSUBPDrr_HSUBPSrr_VHADDPDYrr_VHADDPDrr_VHADDPSYrr_VHADDPSrr_VHSUBPDYrr_VHSUBPDrr_VHSUBPSYrr_VHSUBPSrr") 3, false, false, 146, 11,  3, 1,  0, 0}, // #915
  {DBGFIELD("HADDPDrm_HADDPSrm_HSUBPDrm_HSUBPSrm_VHADDPDYrm_VHADDPDrm_VHADDPSYrm_VHADDPSrm_VHSUBPDYrm_VHSUBPDrm_VHSUBPSYrm_VHSUBPSrm") 4, false, false, 133, 13, 15, 1,  0, 0}, // #916
  {DBGFIELD("MULPDrr_VMULPDrr")   1, false, false, 578, 4,  3, 1,  0, 0}, // #917
  {DBGFIELD("MULPSrr_VMULPSrr")   1, false, false, 578, 4,  3, 1,  0, 0}, // #918
  {DBGFIELD("MULSDrr_MULSDrr_Int_VMULSDrr_VMULSDrr_Int") 1, false, false, 578, 4,  3, 1,  0, 0}, // #919
  {DBGFIELD("MULSSrr_MULSSrr_Int_VMULSSrr_VMULSSrr_Int") 1, false, false, 578, 4,  3, 1,  0, 0}, // #920
  {DBGFIELD("MULPDrm_MULPSrm_VMULPDrm_VMULPSrm") 2, false, false, 594, 6, 15, 1,  0, 0}, // #921
  {DBGFIELD("MULSDrm_MULSDrm_Int_MULSSrm_MULSSrm_Int_VMULSDrm_VMULSDrm_Int_VMULSSrm_VMULSSrm_Int") 2, false, false, 594, 6, 15, 1,  0, 0}, // #922
  {DBGFIELD("VDIVPSYrr")          3, false, false, 832, 10, 23, 1,  0, 0}, // #923
  {DBGFIELD("VDIVPSYrm")          4, false, false, 842, 12, 29, 1,  1, 1}, // #924
  {DBGFIELD("VDIVPDYrr")          3, false, false, 832, 10, 37, 1,  0, 0}, // #925
  {DBGFIELD("VDIVPDYrm")          4, false, false, 842, 12, 38, 1,  1, 1}, // #926
  {DBGFIELD("VRCPPSYr")           3, false, false, 832, 10,  5, 1,  0, 0}, // #927
  {DBGFIELD("VRCPPSYm")           4, false, false, 842, 12, 20, 1,  0, 0}, // #928
  {DBGFIELD("ROUNDPDr_ROUNDPSr_VROUNDPDr_VROUNDPSr_VROUNDYPDr_VROUNDYPSr") 2, false, false, 640, 7, 16, 1,  0, 0}, // #929
  {DBGFIELD("ROUNDSDr_ROUNDSDr_Int_ROUNDSSr_ROUNDSSr_Int_VROUNDSDr_VROUNDSDr_Int_VROUNDSSr_VROUNDSSr_Int") 2, false, false, 640, 7, 16, 1,  0, 0}, // #930
  {DBGFIELD("ROUNDPDm_VROUNDPDm_VROUNDYPDm") 3, false, false, 631, 9,  8, 1,  0, 0}, // #931
  {DBGFIELD("ROUNDPSm_VROUNDPSm_VROUNDYPSm") 3, false, false, 631, 9,  8, 1,  0, 0}, // #932
  {DBGFIELD("ROUNDSDm_ROUNDSDm_Int_ROUNDSSm_ROUNDSSm_Int_VROUNDSDm_VROUNDSDm_Int_VROUNDSSm_VROUNDSSm_Int") 3, false, false, 631, 9,  8, 1,  0, 0}, // #933
  {DBGFIELD("DPPSrri_VDPPSYrri_VDPPSrri") 4, false, false, 854, 14,  7, 1,  0, 0}, // #934
  {DBGFIELD("DPPSrmi_VDPPSYrmi_VDPPSrmi") 6, false, false, 868, 17, 39, 1,  1, 1}, // #935
  {DBGFIELD("DPPDrri")            3, false, false, 885, 14, 15, 1,  0, 0}, // #936
  {DBGFIELD("VDPPDrri")           3, false, false, 885, 14, 15, 1,  0, 0}, // #937
  {DBGFIELD("DPPDrmi_VDPPDrmi")   4, false, false, 899, 16, 34, 1,  0, 0}, // #938
  {DBGFIELD("VFMADDPD4rr_VFMADDPD4rr_REV_VFMADDPS4rr_VFMADDPS4rr_REV_VFMADDSD4rr_VFMADDSD4rr_Int_VFMADDSD4rr_Int_REV_VFMADDSD4rr_REV_VFMADDSS4rr_VFMADDSS4rr_Int_VFMADDSS4rr_Int_REV_VFMADDSS4rr_REV_VFMSUBPD4rr_VFMSUBPD4rr_REV_VFMSUBPS4rr_VFMSUBPS4rr_REV_VFMSUBSD4rr_VFMSUBSD4rr_Int_VFMSUBSD4rr_Int_REV_VFMSUBSD4rr_REV_VFMSUBSS4rr_VFMSUBSS4rr_Int_VFMSUBSS4rr_Int_REV_VFMSUBSS4rr_REV_VFNMADDPD4rr_VFNMADDPD4rr_REV_VFNMADDPS4rr_VFNMADDPS4rr_REV_VFNMADDSD4rr_VFNMADDSD4rr_Int_VFNMADDSD4rr_Int_REV_VFNMADDSD4rr_REV_VFNMADDSS4rr_VFNMADDSS4rr_Int_VFNMADDSS4rr_Int_REV_VFNMADDSS4rr_REV_VFNMSUBPD4rr_VFNMSUBPD4rr_REV_VFNMSUBPS4rr_VFNMSUBPS4rr_REV_VFNMSUBSD4rr_VFNMSUBSD4rr_Int_VFNMSUBSD4rr_Int_REV_VFNMSUBSD4rr_REV_VFNMSUBSS4rr_VFNMSUBSS4rr_Int_VFNMSUBSS4rr_Int_REV_VFNMSUBSS4rr_REV") 1, false, false, 578, 4,  3, 1,  0, 0}, // #939
  {DBGFIELD("VFMADDPD4mr_VFMADDPD4rm_VFMADDPS4mr_VFMADDPS4rm_VFMADDSD4mr_VFMADDSD4mr_Int_VFMADDSD4rm_VFMADDSD4rm_Int_VFMADDSS4mr_VFMADDSS4mr_Int_VFMADDSS4rm_VFMADDSS4rm_Int_VFMSUBPD4mr_VFMSUBPD4rm_VFMSUBPS4mr_VFMSUBPS4rm_VFMSUBSD4mr_VFMSUBSD4mr_Int_VFMSUBSD4rm_VFMSUBSD4rm_Int_VFMSUBSS4mr_VFMSUBSS4mr_Int_VFMSUBSS4rm_VFMSUBSS4rm_Int_VFNMADDPD4mr_VFNMADDPD4rm_VFNMADDPS4mr_VFNMADDPS4rm_VFNMADDSD4mr_VFNMADDSD4mr_Int_VFNMADDSD4rm_VFNMADDSD4rm_Int_VFNMADDSS4mr_VFNMADDSS4mr_Int_VFNMADDSS4rm_VFNMADDSS4rm_Int_VFNMSUBPD4mr_VFNMSUBPD4rm_VFNMSUBPS4mr_VFNMSUBPS4rm_VFNMSUBSD4mr_VFNMSUBSD4mr_Int_VFNMSUBSD4rm_VFNMSUBSD4rm_Int_VFNMSUBSS4mr_VFNMSUBSS4mr_Int_VFNMSUBSS4rm_VFNMSUBSS4rm_Int") 2, false, false, 594, 6, 15, 1,  0, 0}, // #940
  {DBGFIELD("VSQRTPSYr")          3, false, false, 832, 10, 23, 1,  0, 0}, // #941
  {DBGFIELD("VSQRTPSYm")          4, false, false, 842, 12, 29, 1,  0, 0}, // #942
  {DBGFIELD("VSQRTPDYr")          3, false, false, 832, 10, 40, 1,  0, 0}, // #943
  {DBGFIELD("VSQRTPDYm")          4, false, false, 842, 12, 30, 1,  0, 0}, // #944
  {DBGFIELD("RSQRTPSr_VRSQRTPSr") 1, false, false, 117, 9,  3, 1,  0, 0}, // #945
  {DBGFIELD("RSQRTSSr_VRSQRTSSr") 1, false, false, 117, 9,  3, 1,  0, 0}, // #946
  {DBGFIELD("RSQRTSSr_Int")       1, false, false, 117, 9,  3, 1,  0, 0}, // #947
  {DBGFIELD("VRSQRTSSr_Int")      1, false, false, 117, 9,  3, 1,  0, 0}, // #948
  {DBGFIELD("RSQRTPSm_VRSQRTPSm") 2, false, false, 105, 11, 15, 1,  0, 0}, // #949
  {DBGFIELD("RSQRTSSm_VRSQRTSSm") 2, false, false, 105, 11, 15, 1,  0, 0}, // #950
  {DBGFIELD("RSQRTSSm_Int_VRSQRTSSm_Int") 2, false, false, 105, 11, 15, 1,  0, 0}, // #951
  {DBGFIELD("VRSQRTPSYr")         3, false, false, 832, 10,  5, 1,  0, 0}, // #952
  {DBGFIELD("VRSQRTPSYm")         4, false, false, 842, 12, 20, 1,  0, 0}, // #953
  {DBGFIELD("ANDNPDrr_ANDNPSrr_ANDPDrr_ANDPSrr_ORPDrr_ORPSrr_VANDNPDYrr_VANDNPDrr_VANDNPSYrr_VANDNPSrr_VANDPDYrr_VANDPDrr_VANDPSYrr_VANDPSrr_VORPDYrr_VORPDrr_VORPSYrr_VORPSrr_VXORPDYrr_VXORPDrr_VXORPSYrr_VXORPSrr_XORPDrr_XORPSrr") 1, false, false, 39, 8,  2, 1,  0, 0}, // #954
  {DBGFIELD("ANDNPDrm_ANDNPSrm_ANDPDrm_ANDPSrm_ORPDrm_ORPSrm_VANDNPDYrm_VANDNPDrm_VANDNPSYrm_VANDNPSrm_VANDPDYrm_VANDPDrm_VANDPSYrm_VANDPSrm_VORPDYrm_VORPDrm_VORPSYrm_VORPSrm_VXORPDYrm_VXORPDrm_VXORPSYrm_VXORPSrm_XORPDrm_XORPSrm") 2, false, false, 29, 10,  3, 1,  1, 1}, // #955
  {DBGFIELD("VZEROUPPER")         4, false, false,  0, 0,  2, 1,  0, 0}, // #956
  {DBGFIELD("VZEROALL")           12, false, false,  0, 0,  2, 1,  0, 0}, // #957
  {DBGFIELD("LDMXCSR_VLDMXCSR")   3, false, false, 915, 14, 16, 1,  0, 0}, // #958
  {DBGFIELD("STMXCSR_VSTMXCSR")   4, false, false, 929, 14,  5, 1,  0, 0}, // #959
  {DBGFIELD("VHADDPDYrr_VHADDPSYrr_VHSUBPDYrr_VHSUBPSYrr") 3, false, false, 146, 11,  3, 1,  0, 0}, // #960
  {DBGFIELD("VHADDPDYrm_VHADDPSYrm_VHSUBPDYrm_VHSUBPSYrm") 4, false, false, 133, 13, 15, 1,  0, 0} // #961
}; // HaswellModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc BtVer2ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_AAA_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("IIC_AAD_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("IIC_AAM_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #3
  {DBGFIELD("IIC_AAS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #4
  {DBGFIELD("IIC_BIN_CARRY_NONMEM_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #5
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #6
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_ReadAfterLd") 1, false, false, 948, 4,  9, 1,  4, 1}, // #7
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #8
  {DBGFIELD("IIC_BIN_NONMEM_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #9
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #10
  {DBGFIELD("WriteALU")           1, false, false, 451, 2,  2, 1,  0, 0}, // #11
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_ReadAfterLd") 1, false, false, 948, 4,  9, 1,  4, 1}, // #12
  {DBGFIELD("IIC_SSE_ALU_F64P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #13
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #14
  {DBGFIELD("IIC_SSE_ALU_F32P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #15
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #16
  {DBGFIELD("IIC_SSE_ALU_F64S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #17
  {DBGFIELD("IIC_SSE_ALU_F64S_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #18
  {DBGFIELD("IIC_SSE_ALU_F32S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #19
  {DBGFIELD("IIC_SSE_ALU_F32S_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #20
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #21
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #22
  {DBGFIELD("WriteFAddLd")        1, false, false, 952, 5, 10, 1,  0, 0}, // #23
  {DBGFIELD("WriteFAdd")          1, false, false, 957, 3,  6, 1,  0, 0}, // #24
  {DBGFIELD("IIC_BIN_MEM_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #25
  {DBGFIELD("IIC_AES_WriteAESDecEncLd_ReadAfterLd") 1, false, false, 960, 5, 10, 1,  4, 1}, // #26
  {DBGFIELD("IIC_AES_WriteAESDecEnc") 1, false, false, 965, 3,  6, 1,  0, 0}, // #27
  {DBGFIELD("IIC_AES_WriteAESIMCLd") 1, false, false, 968, 4,  5, 1,  0, 0}, // #28
  {DBGFIELD("IIC_AES_WriteAESIMC") 1, false, false, 16, 1, 19, 1,  0, 0}, // #29
  {DBGFIELD("WriteAESKeyGenLd")   1, false, false, 968, 4,  5, 1,  0, 0}, // #30
  {DBGFIELD("WriteAESKeyGen")     1, false, false, 16, 1, 19, 1,  0, 0}, // #31
  {DBGFIELD("WriteVecLogicLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #32
  {DBGFIELD("WriteVecLogic")      1, false, false, 965, 2,  2, 1,  0, 0}, // #33
  {DBGFIELD("IIC_ARPL_MEM_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #34
  {DBGFIELD("IIC_ARPL_REG_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("WriteZero")          1, false, false,  0, 0,  2, 1,  0, 0}, // #36
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteFBlendLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #37
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteFBlend") 1, false, false, 965, 2,  2, 1,  0, 0}, // #38
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #39
  {DBGFIELD("IIC_ALU_NONMEM_WriteFBlend") 1, false, false, 965, 2,  2, 1,  0, 0}, // #40
  {DBGFIELD("IIC_BOUND_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #41
  {DBGFIELD("IIC_BIT_SCAN_MEM_WriteShiftLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #42
  {DBGFIELD("IIC_BIT_SCAN_REG_WriteShift") 1, false, false, 451, 2,  2, 1,  0, 0}, // #43
  {DBGFIELD("IIC_BSWAP_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #44
  {DBGFIELD("IIC_BT_MI_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #45
  {DBGFIELD("IIC_BT_MR_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #46
  {DBGFIELD("IIC_BT_RI_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #47
  {DBGFIELD("IIC_BT_RR_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #48
  {DBGFIELD("IIC_BTX_MI_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #49
  {DBGFIELD("IIC_BTX_MR_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #50
  {DBGFIELD("IIC_BTX_RI_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #51
  {DBGFIELD("IIC_BTX_RR_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #52
  {DBGFIELD("IIC_CALL_MEM_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #53
  {DBGFIELD("IIC_CALL_RI_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #54
  {DBGFIELD("IIC_CALL_MEM_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #55
  {DBGFIELD("WriteSystem")        1, false, false, 13, 1,  1, 1,  0, 0}, // #56
  {DBGFIELD("IIC_CBW")            0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_CLC_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #58
  {DBGFIELD("IIC_CLD_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #59
  {DBGFIELD("IIC_SSE_PREFETCH_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #60
  {DBGFIELD("IIC_CLI_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #61
  {DBGFIELD("IIC_CLTS_WriteALU")  1, false, false, 451, 2,  2, 1,  0, 0}, // #62
  {DBGFIELD("IIC_SSE_CLZERO_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("IIC_CMC_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #64
  {DBGFIELD("IIC_CMOV16_RM_WriteALULd_ReadAfterLd") 1, false, false, 948, 4,  9, 1,  4, 1}, // #65
  {DBGFIELD("IIC_CMOV16_RR_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #66
  {DBGFIELD("IIC_CMOV32_RM_WriteALULd_ReadAfterLd") 1, false, false, 948, 4,  9, 1,  4, 1}, // #67
  {DBGFIELD("IIC_CMOV32_RR_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #68
  {DBGFIELD("IIC_CMPS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #69
  {DBGFIELD("IIC_CMPXCHG_16B_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #70
  {DBGFIELD("IIC_CMPXCHG_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #71
  {DBGFIELD("IIC_CMPXCHG_REG_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #72
  {DBGFIELD("IIC_CMPXCHG_8B_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #73
  {DBGFIELD("IIC_CMPXCHG_MEM8_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #74
  {DBGFIELD("IIC_CMPXCHG_REG8_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #75
  {DBGFIELD("IIC_SSE_COMIS_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #76
  {DBGFIELD("IIC_SSE_COMIS_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #77
  {DBGFIELD("IIC_FCOMI_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #78
  {DBGFIELD("IIC_CPUID_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #79
  {DBGFIELD("IIC_CRC32_MEM_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #80
  {DBGFIELD("IIC_CRC32_REG_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #81
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtI2FLd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #82
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtI2F") 1, false, false, 977, 3,  6, 1,  0, 0}, // #83
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtI2FLd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #84
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtI2F") 1, false, false, 977, 3,  6, 1,  0, 0}, // #85
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #86
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2I") 1, false, false, 977, 3,  6, 1,  0, 0}, // #87
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2FLd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #88
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2F") 1, false, false, 977, 3,  6, 1,  0, 0}, // #89
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #90
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtF2I") 1, false, false, 977, 3,  6, 1,  0, 0}, // #91
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RM_WriteCvtF2ILd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #92
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RR_WriteCvtF2I") 1, false, false, 977, 3,  6, 1,  0, 0}, // #93
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #94
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtF2F") 1, false, false, 977, 3,  6, 1,  0, 0}, // #95
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #96
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtI2F") 1, false, false, 977, 3,  6, 1,  0, 0}, // #97
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RM_WriteCvtF2ILd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #98
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RR_WriteCvtF2I") 1, false, false, 977, 3,  6, 1,  0, 0}, // #99
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RM_WriteCvtF2ILd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #100
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RR_WriteCvtF2I") 1, false, false, 977, 3,  6, 1,  0, 0}, // #101
  {DBGFIELD("IIC_DAA_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIC_DAS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIC_UNARY_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #104
  {DBGFIELD("IIC_UNARY_REG_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #105
  {DBGFIELD("IIC_DIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #106
  {DBGFIELD("IIC_DIV16_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #107
  {DBGFIELD("IIC_DIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #108
  {DBGFIELD("IIC_DIV32_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #109
  {DBGFIELD("IIC_DIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #110
  {DBGFIELD("IIC_DIV64_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #111
  {DBGFIELD("IIC_DIV8_MEM_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #112
  {DBGFIELD("IIC_DIV8_REG_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #113
  {DBGFIELD("IIC_SSE_DIV_F64P_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 990, 6, 44, 1,  4, 1}, // #114
  {DBGFIELD("IIC_SSE_DIV_F64P_RR_WriteFDiv") 1, false, false, 990, 6, 23, 1,  0, 0}, // #115
  {DBGFIELD("IIC_SSE_DIV_F32P_RR_WriteFDiv") 1, false, false, 990, 6, 23, 1,  0, 0}, // #116
  {DBGFIELD("WriteFDivLd")        1, false, false, 990, 6, 44, 1,  0, 0}, // #117
  {DBGFIELD("WriteFDiv")          1, false, false, 990, 6, 23, 1,  0, 0}, // #118
  {DBGFIELD("IIC_SSE_DIV_F64S_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 990, 6, 44, 1,  4, 1}, // #119
  {DBGFIELD("IIC_SSE_DIV_F64S_RR_WriteFDiv") 1, false, false, 990, 6, 23, 1,  0, 0}, // #120
  {DBGFIELD("IIC_SSE_DIV_F32S_RR_WriteFDiv") 1, false, false, 990, 6, 23, 1,  0, 0}, // #121
  {DBGFIELD("IIC_SSE_DPPD_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #122
  {DBGFIELD("IIC_SSE_DPPD_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #123
  {DBGFIELD("IIC_SSE_DPPS_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #124
  {DBGFIELD("IIC_RET_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #125
  {DBGFIELD("IIC_ENTER_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #126
  {DBGFIELD("IIC_SSE_EXTRACTPS_RM_WriteFBlendLd_WriteRMW") 2, false, false, 996, 5, 45, 2,  0, 0}, // #127
  {DBGFIELD("IIC_SSE_EXTRACTPS_RR_WriteFBlend") 1, false, false, 965, 2,  2, 1,  0, 0}, // #128
  {DBGFIELD("IIC_F2XM1_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #129
  {DBGFIELD("IIC_CALL_FAR_PTR_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #130
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #131
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #132
  {DBGFIELD("IIC_JMP_FAR_PTR_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #133
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #134
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #135
  {DBGFIELD("IIC_FCOMPP_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("IIC_FPSTP_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("IIC_FFREE_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #138
  {DBGFIELD("IIC_FLDCW_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #139
  {DBGFIELD("IIC_FLDL_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("IIC_FNCLEX_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("IIC_FNINIT_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #142
  {DBGFIELD("IIC_FNOP_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("IIC_FNSTCW_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #144
  {DBGFIELD("IIC_FNSTSW_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #145
  {DBGFIELD("IIC_FPATAN_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #146
  {DBGFIELD("IIC_FPREM_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #147
  {DBGFIELD("IIC_FPREM1_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #148
  {DBGFIELD("IIC_FPTAN_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #149
  {DBGFIELD("IIC_FRNDINT_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("IIC_FSCALE_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("IIC_FSINCOS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("IIC_FXAM_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("IIC_FXRSTOR_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("IIC_FXSAVE_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("IIC_FXTRACT_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("IIC_FYL2X_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("IIC_FYL2XP1_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("IIC_SSE_HADDSUB_RM_WriteFHAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #159
  {DBGFIELD("IIC_SSE_HADDSUB_RR_WriteFHAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #160
  {DBGFIELD("IIC_HLT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("IIC_IDIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #162
  {DBGFIELD("IIC_IDIV16_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #163
  {DBGFIELD("IIC_IDIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #164
  {DBGFIELD("IIC_IDIV32_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #165
  {DBGFIELD("IIC_IDIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #166
  {DBGFIELD("IIC_IDIV64_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #167
  {DBGFIELD("IIC_IDIV8_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 980, 6, 43, 1,  5, 2}, // #168
  {DBGFIELD("IIC_IDIV8_WriteIDiv") 1, false, false, 986, 4, 12, 1,  0, 0}, // #169
  {DBGFIELD("IIC_FILD_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #170
  {DBGFIELD("IIC_IMUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #171
  {DBGFIELD("IIC_IMUL16_RR_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #172
  {DBGFIELD("IIC_IMUL16_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  4, 1}, // #173
  {DBGFIELD("IIC_IMUL16_RMI_WriteIMulLd") 1, false, false, 1001, 5, 16, 1,  0, 0}, // #174
  {DBGFIELD("IIC_IMUL16_RRI_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #175
  {DBGFIELD("IIC_IMUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #176
  {DBGFIELD("IIC_IMUL32_RR_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #177
  {DBGFIELD("IIC_IMUL32_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  4, 1}, // #178
  {DBGFIELD("IIC_IMUL32_RMI_WriteIMulLd") 1, false, false, 1001, 5, 16, 1,  0, 0}, // #179
  {DBGFIELD("IIC_IMUL32_RRI_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #180
  {DBGFIELD("IIC_IMUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #181
  {DBGFIELD("IIC_IMUL64_RR_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #182
  {DBGFIELD("IIC_IMUL64_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  4, 1}, // #183
  {DBGFIELD("IIC_IMUL64_RMI_WriteIMulLd") 1, false, false, 1001, 5, 16, 1,  0, 0}, // #184
  {DBGFIELD("IIC_IMUL64_RRI_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #185
  {DBGFIELD("IIC_IMUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #186
  {DBGFIELD("IIC_IMUL8_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #187
  {DBGFIELD("IIC_IN_RI_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #188
  {DBGFIELD("IIC_IN_RR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #189
  {DBGFIELD("IIC_INS_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #190
  {DBGFIELD("IIC_SSE_INSERTPS_RM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #191
  {DBGFIELD("IIC_SSE_INSERTPS_RR_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #192
  {DBGFIELD("IIC_INT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #193
  {DBGFIELD("IIC_INT3_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("IIC_INVD_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #195
  {DBGFIELD("IIC_INVLPG_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #196
  {DBGFIELD("WriteJumpLd")        1, false, false, 948, 4,  9, 1,  0, 0}, // #197
  {DBGFIELD("IIC_IRET_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #198
  {DBGFIELD("IIC_FST_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #199
  {DBGFIELD("IIC_FIST_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #200
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd_ReadAfterLd") 1, false, false, 972, 5, 10, 1,  4, 1}, // #201
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd_ReadAfterLd") 1, false, false, 972, 5, 10, 1,  4, 1}, // #202
  {DBGFIELD("WriteLoad")          1, false, false, 968, 3,  3, 1,  0, 0}, // #203
  {DBGFIELD("IIC_Jcc_WriteJump")  1, false, false, 451, 2,  2, 1,  0, 0}, // #204
  {DBGFIELD("IIC_JCXZ_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #205
  {DBGFIELD("IIC_JMP_MEM_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #206
  {DBGFIELD("IIC_JMP_REG_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #207
  {DBGFIELD("IIC_JMP_REL_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #208
  {DBGFIELD("IIC_AHF_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #209
  {DBGFIELD("IIC_LAR_RM_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("IIC_LAR_RR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #211
  {DBGFIELD("IIC_CMPX_LOCK_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #212
  {DBGFIELD("IIC_CMPX_LOCK_16B_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #213
  {DBGFIELD("IIC_CMPX_LOCK_8_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #214
  {DBGFIELD("IIC_CMPX_LOCK_8B_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #215
  {DBGFIELD("IIC_SSE_LDDQU_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #216
  {DBGFIELD("IIC_SSE_LDMXCSR_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #217
  {DBGFIELD("IIC_LXS_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #218
  {DBGFIELD("IIC_FLDZ_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #219
  {DBGFIELD("IIC_FIST_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #220
  {DBGFIELD("IIC_FLD_WriteLoad")  1, false, false, 968, 3,  3, 1,  0, 0}, // #221
  {DBGFIELD("IIC_FLD80_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #222
  {DBGFIELD("IIC_FLD_WriteMove")  1, false, false, 13, 1,  2, 1,  0, 0}, // #223
  {DBGFIELD("IIC_LEA_16_WriteLEA") 1, false, false, 451, 2,  2, 1,  0, 0}, // #224
  {DBGFIELD("IIC_LEA_WriteLEA")   1, false, false, 451, 2,  2, 1,  0, 0}, // #225
  {DBGFIELD("IIC_LEAVE_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #226
  {DBGFIELD("IIC_SSE_LFENCE_WriteFence") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #227
  {DBGFIELD("IIC_LGDT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #228
  {DBGFIELD("IIC_LIDT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #229
  {DBGFIELD("IIC_LLDT_MEM_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #230
  {DBGFIELD("IIC_LLDT_REG_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #231
  {DBGFIELD("IIC_LWP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #232
  {DBGFIELD("IIC_LMSW_REG_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("IIC_LMSW_MEM_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #234
  {DBGFIELD("IIC_ALU_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #235
  {DBGFIELD("IIC_ALU_NONMEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #236
  {DBGFIELD("IIC_LODS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("IIC_LOOP_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #238
  {DBGFIELD("IIC_LOOPE_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #239
  {DBGFIELD("IIC_LOOPNE_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #240
  {DBGFIELD("IIC_RET_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #241
  {DBGFIELD("IIC_LSL_RM_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #242
  {DBGFIELD("IIC_LSL_RR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #243
  {DBGFIELD("IIC_LTR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #244
  {DBGFIELD("IIC_XADD_LOCK_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #245
  {DBGFIELD("IIC_XADD_LOCK_MEM8_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #246
  {DBGFIELD("IIC_SSE_MASKMOV_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #247
  {DBGFIELD("IIC_SSE_MFENCE_WriteFence") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #248
  {DBGFIELD("IIC_MMX_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #249
  {DBGFIELD("IIC_MMX_CVT_PD_RR_WriteCvtF2I") 1, false, false, 977, 3,  6, 1,  0, 0}, // #250
  {DBGFIELD("WriteCvtI2FLd")      1, false, false, 972, 5, 10, 1,  0, 0}, // #251
  {DBGFIELD("WriteCvtI2F")        1, false, false, 977, 3,  6, 1,  0, 0}, // #252
  {DBGFIELD("IIC_MMX_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 972, 5, 10, 1,  0, 0}, // #253
  {DBGFIELD("IIC_MMX_CVT_PS_RR_WriteCvtF2I") 1, false, false, 977, 3,  6, 1,  0, 0}, // #254
  {DBGFIELD("IIC_MMX_EMMS")       0, false, false,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("IIC_MMX_MASKMOV_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #256
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #257
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #258
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #259
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #260
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #261
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #262
  {DBGFIELD("IIC_MMX_MOVQ_RR_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #263
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #264
  {DBGFIELD("WriteMove")          1, false, false, 13, 1,  2, 1,  0, 0}, // #265
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd") 1, false, false, 960, 4, 16, 1,  0, 0}, // #266
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecALU") 1, false, false, 965, 2,  2, 1,  0, 0}, // #267
  {DBGFIELD("IIC_MMX_PCK_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #268
  {DBGFIELD("IIC_MMX_PCK_RR_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #269
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #270
  {DBGFIELD("IIC_MMX_ALUQ_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #271
  {DBGFIELD("IIC_MMX_ALUQ_RR_WriteVecALU") 1, false, false, 965, 2,  2, 1,  0, 0}, // #272
  {DBGFIELD("WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #273
  {DBGFIELD("WriteShuffle")       1, false, false, 965, 2,  2, 1,  0, 0}, // #274
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #275
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecLogic") 1, false, false, 965, 2,  2, 1,  0, 0}, // #276
  {DBGFIELD("IIC_MMX_MISC_FUNC_REG_WriteVecIMulLd_ReadAfterLd") 1, false, false, 952, 5,  5, 1,  4, 1}, // #277
  {DBGFIELD("IIC_MMX_MISC_FUNC_MEM_WriteVecIMul") 1, false, false, 957, 3, 19, 1,  0, 0}, // #278
  {DBGFIELD("IIC_MMX_PEXTR_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #279
  {DBGFIELD("IIC_MMX_PHADDSUBW_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #280
  {DBGFIELD("IIC_MMX_PHADDSUBW_RR_WriteVecALU") 1, false, false, 965, 2,  2, 1,  0, 0}, // #281
  {DBGFIELD("IIC_MMX_PHADDSUBD_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #282
  {DBGFIELD("IIC_MMX_PHADDSUBD_RR_WriteVecALU") 1, false, false, 965, 2,  2, 1,  0, 0}, // #283
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #284
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #285
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMulLd_ReadAfterLd") 1, false, false, 952, 5,  5, 1,  4, 1}, // #286
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMul") 1, false, false, 957, 3, 19, 1,  0, 0}, // #287
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 952, 5,  5, 1,  4, 1}, // #288
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMul") 1, false, false, 957, 3, 19, 1,  0, 0}, // #289
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #290
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #291
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd") 1, false, false, 960, 4, 16, 1,  0, 0}, // #292
  {DBGFIELD("IIC_MMX_SHIFT_RI_WriteVecShift") 1, false, false, 965, 2,  2, 1,  0, 0}, // #293
  {DBGFIELD("IIC_MMX_SHIFT_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #294
  {DBGFIELD("IIC_MMX_SHIFT_RR_WriteVecShift") 1, false, false, 965, 2,  2, 1,  0, 0}, // #295
  {DBGFIELD("IIC_MMX_UNPCK_H_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #296
  {DBGFIELD("IIC_MMX_UNPCK_H_RR_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #297
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #298
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #299
  {DBGFIELD("IIC_SSE_MONITORX_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #300
  {DBGFIELD("IIC_SSE_MONITOR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #301
  {DBGFIELD("IIC_MOV_MEM_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #302
  {DBGFIELD("IIC_MOV_MEM_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #303
  {DBGFIELD("IIC_MOV_MEM_SR_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #304
  {DBGFIELD("IIC_MOV_WriteMove")  1, false, false, 13, 1,  2, 1,  0, 0}, // #305
  {DBGFIELD("IIC_MOV_MEM_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #306
  {DBGFIELD("IIC_MOV_REG_SR_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #307
  {DBGFIELD("IIC_MOV_SR_MEM_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #308
  {DBGFIELD("IIC_MOV_SR_REG_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #309
  {DBGFIELD("IIC_MOV_CR_REG_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #310
  {DBGFIELD("IIC_MOV_DR_REG_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #311
  {DBGFIELD("IIC_ALU_NONMEM_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #312
  {DBGFIELD("IIC_MOV_REG_CR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #313
  {DBGFIELD("IIC_MOV_REG_DR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #314
  {DBGFIELD("IIC_SSE_MOVDQ_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #315
  {DBGFIELD("IIC_SSE_MOVDQ_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #316
  {DBGFIELD("IIC_SSE_MOVA_P_MR_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #317
  {DBGFIELD("IIC_SSE_MOVA_P_RM_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #318
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #319
  {DBGFIELD("IIC_MOVBE_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #320
  {DBGFIELD("IIC_MOVBE_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #321
  {DBGFIELD("IIC_SSE_MOV_LH_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #322
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #323
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #324
  {DBGFIELD("IIC_SSE_MOVU_P_MR_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #325
  {DBGFIELD("IIC_SSE_MOVU_P_RM_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #326
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #327
  {DBGFIELD("IIC_SSE_MOV_LH_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #328
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #329
  {DBGFIELD("IIC_SSE_MOVMSK_WriteVecLogic") 1, false, false, 965, 2,  2, 1,  0, 0}, // #330
  {DBGFIELD("IIC_SSE_MOVNT_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #331
  {DBGFIELD("IIC_SSE_MOVDQ_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #332
  {DBGFIELD("IIC_SSE_MOVD_ToGP_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #333
  {DBGFIELD("IIC_SSE_MOVQ_RR_WriteVecLogic") 1, false, false, 965, 2,  2, 1,  0, 0}, // #334
  {DBGFIELD("IIC_MOVS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #335
  {DBGFIELD("IIC_SSE_MOV_S_MR_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #336
  {DBGFIELD("IIC_SSE_MOV_S_RM_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #337
  {DBGFIELD("IIC_SSE_MOV_S_RR_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #338
  {DBGFIELD("IIC_MOVSX_R16_M8_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #339
  {DBGFIELD("IIC_MOVSX_R16_R8_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #340
  {DBGFIELD("IIC_MOVSX_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #341
  {DBGFIELD("IIC_MOVSX_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #342
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #343
  {DBGFIELD("IIC_MOVZX_R16_M8_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #344
  {DBGFIELD("IIC_MOVZX_R16_R8_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #345
  {DBGFIELD("IIC_MOVZX_WriteALULd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #346
  {DBGFIELD("IIC_MOVZX_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #347
  {DBGFIELD("IIC_SSE_MPSADBW_RM_WriteMPSADLd_ReadAfterLd") 1, false, false, 1009, 5, 10, 1,  4, 1}, // #348
  {DBGFIELD("IIC_SSE_MPSADBW_RR_WriteMPSAD") 1, false, false, 1014, 3,  6, 1,  0, 0}, // #349
  {DBGFIELD("IIC_MUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #350
  {DBGFIELD("IIC_MUL16_REG_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #351
  {DBGFIELD("IIC_MUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #352
  {DBGFIELD("IIC_MUL32_REG_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #353
  {DBGFIELD("IIC_MUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #354
  {DBGFIELD("IIC_MUL64_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #355
  {DBGFIELD("IIC_MUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1001, 5, 16, 1,  5, 2}, // #356
  {DBGFIELD("IIC_MUL8_WriteIMul") 1, false, false, 986, 3,  6, 1,  0, 0}, // #357
  {DBGFIELD("IIC_SSE_MUL_F64P_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 972, 5,  5, 1,  4, 1}, // #358
  {DBGFIELD("IIC_SSE_MUL_F64P_RR_WriteFMul") 1, false, false, 977, 3, 19, 1,  0, 0}, // #359
  {DBGFIELD("IIC_SSE_MUL_F32P_RR_WriteFMul") 1, false, false, 977, 3, 19, 1,  0, 0}, // #360
  {DBGFIELD("IIC_SSE_MUL_F64S_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 972, 5,  5, 1,  4, 1}, // #361
  {DBGFIELD("IIC_SSE_MUL_F64S_RR_WriteFMul") 1, false, false, 977, 3, 19, 1,  0, 0}, // #362
  {DBGFIELD("IIC_SSE_MUL_F32S_RR_WriteFMul") 1, false, false, 977, 3, 19, 1,  0, 0}, // #363
  {DBGFIELD("IIC_MUL8_WriteIMulLd_WriteIMulH") 2, false, false, 1017, 5, 47, 2,  0, 0}, // #364
  {DBGFIELD("IIC_MUL8_WriteIMul_WriteIMulH") 2, false, false, 1022, 3, 49, 2,  0, 0}, // #365
  {DBGFIELD("WriteFMulLd")        1, false, false, 972, 5,  5, 1,  0, 0}, // #366
  {DBGFIELD("WriteFMul")          1, false, false, 977, 3, 19, 1,  0, 0}, // #367
  {DBGFIELD("IIC_SSE_MWAITX_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #368
  {DBGFIELD("IIC_SSE_MWAIT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #369
  {DBGFIELD("IIC_NOP_WriteZero")  1, false, false,  0, 0,  2, 1,  0, 0}, // #370
  {DBGFIELD("IIC_OUT_IR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #371
  {DBGFIELD("IIC_OUT_RR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #372
  {DBGFIELD("IIC_OUTS_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #373
  {DBGFIELD("IIC_SSE_PABS_RM_WriteVecALULd") 1, false, false, 960, 4, 16, 1,  0, 0}, // #374
  {DBGFIELD("IIC_SSE_PABS_RR_WriteVecALU") 1, false, false, 965, 2,  2, 1,  0, 0}, // #375
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #376
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteVecALU") 1, false, false, 965, 2,  2, 1,  0, 0}, // #377
  {DBGFIELD("IIC_SSE_INTALUQ_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #378
  {DBGFIELD("IIC_SSE_INTALUQ_P_RR_WriteVecALU") 1, false, false, 965, 2,  2, 1,  0, 0}, // #379
  {DBGFIELD("IIC_SSE_PALIGNRM_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #380
  {DBGFIELD("IIC_SSE_PALIGNRR_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #381
  {DBGFIELD("IIC_SSE_BIT_P_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #382
  {DBGFIELD("IIC_SSE_BIT_P_RR_WriteVecLogic") 1, false, false, 965, 2,  2, 1,  0, 0}, // #383
  {DBGFIELD("IIC_SSE_PAUSE_WriteNop") 1, false, false,  0, 0,  2, 1,  0, 0}, // #384
  {DBGFIELD("IIC_ALU_MEM_WriteVarBlendLd_ReadAfterLd") 1, false, false, 1025, 4,  5, 1,  4, 1}, // #385
  {DBGFIELD("IIC_ALU_NONMEM_WriteVarBlend") 1, false, false, 1029, 2, 19, 1,  0, 0}, // #386
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteBlendLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #387
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteBlend") 1, false, false, 965, 2,  2, 1,  0, 0}, // #388
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RM_WriteCLMulLd_ReadAfterLd") 1, false, false, 968, 4,  5, 1,  4, 1}, // #389
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RR_WriteCLMul") 1, false, false, 16, 1, 19, 1,  0, 0}, // #390
  {DBGFIELD("WriteVecALULd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #391
  {DBGFIELD("WriteVecALU")        1, false, false, 965, 2,  2, 1,  0, 0}, // #392
  {DBGFIELD("WritePCmpEStrILd_ReadAfterLd") 1, false, false, 1031, 4, 39, 1,  4, 1}, // #393
  {DBGFIELD("WritePCmpEStrI")     1, false, false, 1035, 2, 34, 1,  0, 0}, // #394
  {DBGFIELD("WritePCmpEStrMLd_ReadAfterLd") 1, false, false, 1031, 4, 39, 1,  4, 1}, // #395
  {DBGFIELD("WritePCmpEStrM")     1, false, false, 1035, 2, 34, 1,  0, 0}, // #396
  {DBGFIELD("WritePCmpIStrILd_ReadAfterLd") 1, false, false, 1025, 4, 20, 1,  4, 1}, // #397
  {DBGFIELD("WritePCmpIStrI")     1, false, false, 1029, 2, 16, 1,  0, 0}, // #398
  {DBGFIELD("WritePCmpIStrMLd_ReadAfterLd") 1, false, false, 1025, 4, 14, 1,  4, 1}, // #399
  {DBGFIELD("WritePCmpIStrM")     1, false, false, 1029, 2,  5, 1,  0, 0}, // #400
  {DBGFIELD("WriteShuffleLd_WriteRMW") 2, false, false, 996, 5, 45, 2,  0, 0}, // #401
  {DBGFIELD("IIC_SSE_PEXTRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #402
  {DBGFIELD("IIC_SSE_PHADDSUBD_RM_WritePHAddLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #403
  {DBGFIELD("IIC_SSE_PHADDSUBD_RR_WritePHAdd") 1, false, false, 965, 2,  2, 1,  0, 0}, // #404
  {DBGFIELD("WritePHAddLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #405
  {DBGFIELD("WritePHAdd")         1, false, false, 965, 2,  2, 1,  0, 0}, // #406
  {DBGFIELD("IIC_SSE_PHADDSUBW_RM_WritePHAddLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #407
  {DBGFIELD("IIC_SSE_PHADDSUBW_RR_WritePHAdd") 1, false, false, 965, 2,  2, 1,  0, 0}, // #408
  {DBGFIELD("WriteVecIMulLd")     1, false, false, 952, 5,  5, 1,  0, 0}, // #409
  {DBGFIELD("WriteVecIMul")       1, false, false, 957, 3, 19, 1,  0, 0}, // #410
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #411
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #412
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMulLd_ReadAfterLd") 1, false, false, 952, 5,  5, 1,  4, 1}, // #413
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMul") 1, false, false, 957, 3, 19, 1,  0, 0}, // #414
  {DBGFIELD("WriteVecIMulLd_ReadAfterLd") 1, false, false, 952, 5,  5, 1,  4, 1}, // #415
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteShuffleLd") 1, false, false, 960, 4, 16, 1,  0, 0}, // #416
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #417
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 952, 5,  5, 1,  4, 1}, // #418
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMul") 1, false, false, 957, 3, 19, 1,  0, 0}, // #419
  {DBGFIELD("IIC_SSE_INTMUL_P_RM_WriteVecIMulLd_ReadAfterLd") 1, false, false, 952, 5,  5, 1,  4, 1}, // #420
  {DBGFIELD("IIC_SSE_INTMUL_P_RR_WriteVecIMul") 1, false, false, 957, 3, 19, 1,  0, 0}, // #421
  {DBGFIELD("IIC_POP_REG16_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #422
  {DBGFIELD("IIC_POP_MEM_WriteRMW") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #423
  {DBGFIELD("IIC_POP_REG_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #424
  {DBGFIELD("IIC_POP_A_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #425
  {DBGFIELD("IIC_SSE_POPCNT_RM_WriteFAddLd") 1, false, false, 952, 5, 10, 1,  0, 0}, // #426
  {DBGFIELD("IIC_SSE_POPCNT_RR_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #427
  {DBGFIELD("IIC_POP_SR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #428
  {DBGFIELD("IIC_POP_F_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #429
  {DBGFIELD("IIC_POP_FD_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #430
  {DBGFIELD("IIC_POP_SR_SS_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #431
  {DBGFIELD("IIC_SSE_PSHUFB_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #432
  {DBGFIELD("IIC_SSE_PSHUFB_RR_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #433
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #434
  {DBGFIELD("IIC_SSE_PSHUF_RI_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #435
  {DBGFIELD("IIC_SSE_INTSHDQ_P_RI_WriteVecShift") 1, false, false, 965, 2,  2, 1,  0, 0}, // #436
  {DBGFIELD("IIC_SSE_INTSH_P_RI_WriteVecShift") 1, false, false, 965, 2,  2, 1,  0, 0}, // #437
  {DBGFIELD("IIC_SSE_INTSH_P_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #438
  {DBGFIELD("IIC_SSE_INTSH_P_RR_WriteVecShift") 1, false, false, 965, 2,  2, 1,  0, 0}, // #439
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #440
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #441
  {DBGFIELD("IIC_PUSH_IMM_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #442
  {DBGFIELD("IIC_PUSH_REG_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #443
  {DBGFIELD("IIC_PUSH_MEM_WriteRMW") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #444
  {DBGFIELD("IIC_PUSH_A_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #445
  {DBGFIELD("IIC_PUSH_SR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #446
  {DBGFIELD("IIC_PUSH_CS_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #447
  {DBGFIELD("IIC_PUSH_F_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #448
  {DBGFIELD("IIC_SR_WriteShiftLd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #449
  {DBGFIELD("IIC_SR_WriteShift")  1, false, false, 451, 2,  2, 1,  0, 0}, // #450
  {DBGFIELD("IIC_SSE_RCPP_RM_WriteFRcpLd") 1, false, false, 972, 5,  5, 1,  0, 0}, // #451
  {DBGFIELD("IIC_SSE_RCPP_RR_WriteFRcp") 1, false, false, 977, 3, 19, 1,  0, 0}, // #452
  {DBGFIELD("IIC_SSE_RCPS_RM_WriteFRcpLd_ReadAfterLd") 1, false, false, 972, 5,  5, 1,  4, 1}, // #453
  {DBGFIELD("WriteFRcpLd_ReadAfterLd") 1, false, false, 972, 5,  5, 1,  4, 1}, // #454
  {DBGFIELD("IIC_SSE_RCPS_RR_WriteFRcp") 1, false, false, 977, 3, 19, 1,  0, 0}, // #455
  {DBGFIELD("WriteRMW")           1, false, false, 1006, 3,  2, 1,  0, 0}, // #456
  {DBGFIELD("IIC_RDMSR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #457
  {DBGFIELD("IIC_RDPMC_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #458
  {DBGFIELD("IIC_RDTSC_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #459
  {DBGFIELD("IIC_REP_MOVS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #460
  {DBGFIELD("IIC_REP_STOS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #461
  {DBGFIELD("IIC_RET_IMM_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #462
  {DBGFIELD("WriteShiftLd")       1, false, false, 948, 4,  9, 1,  0, 0}, // #463
  {DBGFIELD("WriteShift")         1, false, false, 451, 2,  2, 1,  0, 0}, // #464
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAddLd") 1, false, false, 952, 5, 10, 1,  0, 0}, // #465
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #466
  {DBGFIELD("IIC_SSE_ROUNDPS_MEM_WriteFAddLd") 1, false, false, 952, 5, 10, 1,  0, 0}, // #467
  {DBGFIELD("WriteFAddLd_ReadAfterLd") 1, false, false, 952, 5, 10, 1,  4, 1}, // #468
  {DBGFIELD("IIC_RSM_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #469
  {DBGFIELD("IIC_SSE_RSQRTPS_RM_WriteFRsqrtLd") 1, false, false, 972, 5,  5, 1,  0, 0}, // #470
  {DBGFIELD("IIC_SSE_RSQRTPS_RR_WriteFRsqrt") 1, false, false, 977, 3, 19, 1,  0, 0}, // #471
  {DBGFIELD("IIC_SSE_RSQRTSS_RM_WriteFRsqrtLd_ReadAfterLd") 1, false, false, 972, 5,  5, 1,  4, 1}, // #472
  {DBGFIELD("WriteFRsqrtLd_ReadAfterLd") 1, false, false, 972, 5,  5, 1,  4, 1}, // #473
  {DBGFIELD("IIC_SSE_RSQRTSS_RR_WriteFRsqrt") 1, false, false, 977, 3, 19, 1,  0, 0}, // #474
  {DBGFIELD("WriteShiftLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd") 1, false, false, 948, 4,  9, 1,  5, 1}, // #475
  {DBGFIELD("IIC_SCAS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #476
  {DBGFIELD("IIC_SET_M_WriteALU_WriteStore") 2, false, false, 1037, 4, 21, 2,  0, 0}, // #477
  {DBGFIELD("IIC_SET_R_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #478
  {DBGFIELD("IIC_SSE_SFENCE_WriteFence") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #479
  {DBGFIELD("IIC_SGDT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #480
  {DBGFIELD("IIC_SHD16_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #481
  {DBGFIELD("IIC_SHD16_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #482
  {DBGFIELD("IIC_SHD16_REG_CL_WriteShift") 1, false, false, 451, 2,  2, 1,  0, 0}, // #483
  {DBGFIELD("IIC_SHD16_REG_IM_WriteShift") 1, false, false, 451, 2,  2, 1,  0, 0}, // #484
  {DBGFIELD("IIC_SHD32_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #485
  {DBGFIELD("IIC_SHD32_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #486
  {DBGFIELD("IIC_SHD32_REG_CL_WriteShift") 1, false, false, 451, 2,  2, 1,  0, 0}, // #487
  {DBGFIELD("IIC_SHD32_REG_IM_WriteShift") 1, false, false, 451, 2,  2, 1,  0, 0}, // #488
  {DBGFIELD("IIC_SHD64_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #489
  {DBGFIELD("IIC_SHD64_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #490
  {DBGFIELD("IIC_SHD64_REG_CL_WriteShift") 1, false, false, 451, 2,  2, 1,  0, 0}, // #491
  {DBGFIELD("IIC_SHD64_REG_IM_WriteShift") 1, false, false, 451, 2,  2, 1,  0, 0}, // #492
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #493
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #494
  {DBGFIELD("IIC_SIDT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #495
  {DBGFIELD("IIC_SLDT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #496
  {DBGFIELD("IIC_SMSW_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #497
  {DBGFIELD("IIC_SSE_SQRTPD_RM_WriteFSqrtLd") 1, false, false, 1041, 6, 51, 1,  0, 0}, // #498
  {DBGFIELD("IIC_SSE_SQRTPD_RR_WriteFSqrt") 1, false, false, 1041, 6, 27, 1,  0, 0}, // #499
  {DBGFIELD("IIC_SSE_SQRTPS_RM_WriteFSqrtLd") 1, false, false, 1041, 6, 51, 1,  0, 0}, // #500
  {DBGFIELD("IIC_SSE_SQRTPS_RR_WriteFSqrt") 1, false, false, 1041, 6, 27, 1,  0, 0}, // #501
  {DBGFIELD("IIC_SSE_SQRTSD_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 1041, 6, 51, 1,  4, 1}, // #502
  {DBGFIELD("WriteFSqrtLd_ReadAfterLd") 1, false, false, 1041, 6, 51, 1,  4, 1}, // #503
  {DBGFIELD("IIC_SSE_SQRTSD_RR_WriteFSqrt") 1, false, false, 1041, 6, 27, 1,  0, 0}, // #504
  {DBGFIELD("IIC_SSE_SQRTSS_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 1041, 6, 51, 1,  4, 1}, // #505
  {DBGFIELD("IIC_SSE_SQRTSS_RR_WriteFSqrt") 1, false, false, 1041, 6, 27, 1,  0, 0}, // #506
  {DBGFIELD("WriteFSqrt")         1, false, false, 1041, 6, 27, 1,  0, 0}, // #507
  {DBGFIELD("IIC_STC_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #508
  {DBGFIELD("IIC_STD_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #509
  {DBGFIELD("IIC_STI_WriteALU")   1, false, false, 451, 2,  2, 1,  0, 0}, // #510
  {DBGFIELD("IIC_SSE_STMXCSR_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #511
  {DBGFIELD("IIC_STOS_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #512
  {DBGFIELD("IIC_STR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #513
  {DBGFIELD("IIC_FST80_WriteStore") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #514
  {DBGFIELD("IIC_FST_WriteMove")  1, false, false, 13, 1,  2, 1,  0, 0}, // #515
  {DBGFIELD("IIC_SWAPGS_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #516
  {DBGFIELD("IIC_SYSCALL_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #517
  {DBGFIELD("IIC_SYS_ENTER_EXIT_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #518
  {DBGFIELD("IIC_JMP_REL_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #519
  {DBGFIELD("IIC_JMP_MEM_WriteJump") 1, false, false, 451, 2,  2, 1,  0, 0}, // #520
  {DBGFIELD("IIC_JMP_REG_WriteJumpLd") 1, false, false, 948, 4,  9, 1,  0, 0}, // #521
  {DBGFIELD("WriteJump")          1, false, false, 451, 2,  2, 1,  0, 0}, // #522
  {DBGFIELD("IIC_FUCOMI_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #523
  {DBGFIELD("IIC_FUCOM_WriteFAdd") 1, false, false, 957, 3,  6, 1,  0, 0}, // #524
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #525
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #526
  {DBGFIELD("IIC_SSE_ALU_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("IIC_SSE_ALU_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("IIC_SSE_ALU_F32S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("IIC_SSE_ALU_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("WriteFVarBlendLd_ReadAfterLd") 1, false, false, 1025, 4,  5, 1,  4, 1}, // #531
  {DBGFIELD("WriteFVarBlend")     1, false, false, 1029, 2, 19, 1,  0, 0}, // #532
  {DBGFIELD("WriteFShuffleLd")    1, false, false, 960, 4, 16, 1,  0, 0}, // #533
  {DBGFIELD("WriteFShuffle256")   1, false, false, 965, 2,  2, 1,  0, 0}, // #534
  {DBGFIELD("WriteFShuffle")      1, false, false, 965, 2,  2, 1,  0, 0}, // #535
  {DBGFIELD("IIC_SSE_ALU_F32P_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("WriteCvtF2ILd")      1, false, false, 972, 5, 10, 1,  0, 0}, // #537
  {DBGFIELD("WriteCvtF2I")        1, false, false, 977, 3,  6, 1,  0, 0}, // #538
  {DBGFIELD("WriteCvtF2FLd")      1, false, false, 972, 5, 10, 1,  0, 0}, // #539
  {DBGFIELD("WriteCvtF2F")        1, false, false, 977, 3,  6, 1,  0, 0}, // #540
  {DBGFIELD("WriteCvtF2FLd_WriteRMW") 2, false, false, 1047, 6, 35, 2,  0, 0}, // #541
  {DBGFIELD("WriteCvtF2FLd_ReadAfterLd") 1, false, false, 972, 5, 10, 1,  4, 1}, // #542
  {DBGFIELD("WriteCvtI2FLd_ReadAfterLd") 1, false, false, 972, 5, 10, 1,  4, 1}, // #543
  {DBGFIELD("IIC_SSE_DIV_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("IIC_SSE_DIV_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("IIC_SSE_DIV_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("IIC_VERR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #547
  {DBGFIELD("IIC_VERW_REG_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #548
  {DBGFIELD("IIC_VERW_MEM_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #549
  {DBGFIELD("WriteStore")         1, false, false, 1006, 3,  2, 1,  0, 0}, // #550
  {DBGFIELD("WriteShuffle256")    1, false, false, 965, 2,  2, 1,  0, 0}, // #551
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_WriteRMW") 2, false, false, 996, 5, 45, 2,  0, 0}, // #552
  {DBGFIELD("WriteFShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #553
  {DBGFIELD("WriteShuffle256Ld_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #554
  {DBGFIELD("IIC_ALU_MEM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #555
  {DBGFIELD("IIC_ALU_NONMEM_WriteFShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #556
  {DBGFIELD("IIC_SSE_MOVDQ")      0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("IIC_SSE_MOV_LH")     0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("IIC_SSE_MOVD_ToGP")  0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("IIC_SSE_MOV_S_MR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("IIC_SSE_MOV_S_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("IIC_SSE_MOV_S_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("IIC_SSE_MOVQ_RR")    0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("IIC_ALU_MEM_WriteMPSADLd_ReadAfterLd") 1, false, false, 1009, 5, 10, 1,  4, 1}, // #564
  {DBGFIELD("IIC_ALU_NONMEM_WriteMPSAD") 1, false, false, 1014, 3,  6, 1,  0, 0}, // #565
  {DBGFIELD("IIC_SSE_MUL_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("IIC_SSE_MUL_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("IIC_SSE_MUL_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("WriteVecALULd")      1, false, false, 960, 4, 16, 1,  0, 0}, // #569
  {DBGFIELD("IIC_SSE_BIT_P_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("IIC_SSE_BIT_P_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("WriteBlendLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #572
  {DBGFIELD("WriteBlend")         1, false, false, 965, 2,  2, 1,  0, 0}, // #573
  {DBGFIELD("WriteVarBlendLd_ReadAfterLd") 1, false, false, 1025, 4,  5, 1,  4, 1}, // #574
  {DBGFIELD("WriteVarBlend")      1, false, false, 1029, 2, 19, 1,  0, 0}, // #575
  {DBGFIELD("IIC_ALU_MEM_WriteBlendLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #576
  {DBGFIELD("IIC_ALU_NONMEM_WriteBlend") 1, false, false, 965, 2,  2, 1,  0, 0}, // #577
  {DBGFIELD("WriteCLMulLd_ReadAfterLd") 1, false, false, 968, 4,  5, 1,  4, 1}, // #578
  {DBGFIELD("WriteCLMul")         1, false, false, 16, 1, 19, 1,  0, 0}, // #579
  {DBGFIELD("IIC_SSE_ALU_F32P_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("WriteFShuffle256Ld_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #581
  {DBGFIELD("IIC_ALU_MEM_WriteShuffleLd") 1, false, false, 960, 4, 16, 1,  0, 0}, // #582
  {DBGFIELD("IIC_ALU_NONMEM_WriteShuffle") 1, false, false, 965, 2,  2, 1,  0, 0}, // #583
  {DBGFIELD("WriteVarVecShift_ReadAfterLd") 1, false, false, 965, 2,  2, 1,  4, 1}, // #584
  {DBGFIELD("WriteVarVecShift")   1, false, false, 965, 2,  2, 1,  0, 0}, // #585
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd") 1, false, false, 960, 4, 16, 1,  0, 0}, // #586
  {DBGFIELD("WriteVarVecShiftLd_ReadAfterLd") 1, false, false, 960, 4, 16, 1,  4, 1}, // #587
  {DBGFIELD("WriteFRcpLd")        1, false, false, 972, 5,  5, 1,  0, 0}, // #588
  {DBGFIELD("WriteFRsqrtLd")      1, false, false, 972, 5,  5, 1,  0, 0}, // #589
  {DBGFIELD("WriteFSqrtLd")       1, false, false, 1041, 6, 51, 1,  0, 0}, // #590
  {DBGFIELD("IIC_WAIT_WriteMicrocoded") 1, false, false, 13, 1,  1, 1,  0, 0}, // #591
  {DBGFIELD("IIC_WRMSR_WriteSystem") 1, false, false, 13, 1,  1, 1,  0, 0}, // #592
  {DBGFIELD("IIC_XADD_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #593
  {DBGFIELD("IIC_XADD_REG_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #594
  {DBGFIELD("IIC_XCHG_REG_WriteALU") 1, false, false, 451, 2,  2, 1,  0, 0}, // #595
  {DBGFIELD("IIC_XCHG_MEM_WriteALULd_WriteRMW") 2, false, false, 943, 5, 41, 2,  0, 0}, // #596
  {DBGFIELD("IIC_FXCH_WriteMove") 1, false, false, 13, 1,  2, 1,  0, 0}, // #597
  {DBGFIELD("IIC_XLAT_WriteLoad") 1, false, false, 968, 3,  3, 1,  0, 0}, // #598
  {DBGFIELD("MOV16rm")            1, false, false, 968, 3,  3, 1,  0, 0}, // #599
  {DBGFIELD("MOVSX32rm16_MOVSX32rm8") 1, false, false, 948, 4,  9, 1,  0, 0}, // #600
  {DBGFIELD("MOVZX32rm16_MOVZX32rm8") 1, false, false, 948, 4,  9, 1,  0, 0}, // #601
  {DBGFIELD("CMOVA16rr_CMOVAE16rr_CMOVB16rr_CMOVBE16rr_CMOVE16rr_CMOVG16rr_CMOVGE16rr_CMOVL16rr_CMOVLE16rr_CMOVNE16rr_CMOVNO16rr_CMOVNP16rr_CMOVNS16rr_CMOVO16rr_CMOVP16rr_CMOVS16rr") 1, false, false, 451, 2,  2, 1,  0, 0}, // #602
  {DBGFIELD("CMOVA32rr_CMOVA64rr_CMOVAE32rr_CMOVAE64rr_CMOVB32rr_CMOVB64rr_CMOVBE32rr_CMOVBE64rr_CMOVE32rr_CMOVE64rr_CMOVG32rr_CMOVG64rr_CMOVGE32rr_CMOVGE64rr_CMOVL32rr_CMOVL64rr_CMOVLE32rr_CMOVLE64rr_CMOVNE32rr_CMOVNE64rr_CMOVNO32rr_CMOVNO64rr_CMOVNP32rr_CMOVNP64rr_CMOVNS32rr_CMOVNS64rr_CMOVO32rr_CMOVO64rr_CMOVP32rr_CMOVP64rr_CMOVS32rr_CMOVS64rr") 1, false, false, 451, 2,  2, 1,  0, 0}, // #603
  {DBGFIELD("CMOVA16rm_CMOVAE16rm_CMOVB16rm_CMOVBE16rm_CMOVE16rm_CMOVG16rm_CMOVGE16rm_CMOVL16rm_CMOVLE16rm_CMOVNE16rm_CMOVNO16rm_CMOVNP16rm_CMOVNS16rm_CMOVO16rm_CMOVP16rm_CMOVS16rm") 1, false, false, 948, 4,  9, 1,  4, 1}, // #604
  {DBGFIELD("CMOVA32rm_CMOVA64rm_CMOVAE32rm_CMOVAE64rm_CMOVB32rm_CMOVB64rm_CMOVBE32rm_CMOVBE64rm_CMOVE32rm_CMOVE64rm_CMOVG32rm_CMOVG64rm_CMOVGE32rm_CMOVGE64rm_CMOVL32rm_CMOVL64rm_CMOVLE32rm_CMOVLE64rm_CMOVNE32rm_CMOVNE64rm_CMOVNO32rm_CMOVNO64rm_CMOVNP32rm_CMOVNP64rm_CMOVNS32rm_CMOVNS64rm_CMOVO32rm_CMOVO64rm_CMOVP32rm_CMOVP64rm_CMOVS32rm_CMOVS64rm") 1, false, false, 948, 4,  9, 1,  4, 1}, // #605
  {DBGFIELD("XCHG16ar_XCHG16rr_XCHG32ar_XCHG32ar64_XCHG32rr_XCHG64ar_XCHG64rr_XCHG8rr") 1, false, false, 451, 2,  2, 1,  0, 0}, // #606
  {DBGFIELD("XCHG16rm_XCHG32rm_XCHG64rm_XCHG8rm") 2, false, false, 943, 5, 41, 2,  0, 0}, // #607
  {DBGFIELD("XLAT")               1, false, false, 968, 3,  3, 1,  0, 0}, // #608
  {DBGFIELD("PUSH16rmm_PUSH32rmm") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #609
  {DBGFIELD("PUSHF16_PUSHF32")    1, false, false, 1006, 3,  2, 1,  0, 0}, // #610
  {DBGFIELD("PUSHA16_PUSHA32")    1, false, false, 1006, 3,  2, 1,  0, 0}, // #611
  {DBGFIELD("POP16rmm_POP32rmm")  1, false, false, 1006, 3,  2, 1,  0, 0}, // #612
  {DBGFIELD("POPF16")             1, false, false, 968, 3,  3, 1,  0, 0}, // #613
  {DBGFIELD("POPF32")             1, false, false, 968, 3,  3, 1,  0, 0}, // #614
  {DBGFIELD("POPA16_POPA32")      1, false, false, 968, 3,  3, 1,  0, 0}, // #615
  {DBGFIELD("LAHF_SAHF")          1, false, false, 451, 2,  2, 1,  0, 0}, // #616
  {DBGFIELD("BSWAP32r")           1, false, false, 451, 2,  2, 1,  0, 0}, // #617
  {DBGFIELD("BSWAP64r")           1, false, false, 451, 2,  2, 1,  0, 0}, // #618
  {DBGFIELD("MOVBE16rm_MOVBE64rm") 1, false, false, 948, 4,  9, 1,  0, 0}, // #619
  {DBGFIELD("MOVBE32rm")          1, false, false, 948, 4,  9, 1,  0, 0}, // #620
  {DBGFIELD("MOVBE16mr")          1, false, false, 1006, 3,  2, 1,  0, 0}, // #621
  {DBGFIELD("MOVBE32mr")          1, false, false, 1006, 3,  2, 1,  0, 0}, // #622
  {DBGFIELD("MOVBE64mr")          1, false, false, 1006, 3,  2, 1,  0, 0}, // #623
  {DBGFIELD("ADD16mi_ADD16mi8_ADD16mr_ADD32mi_ADD32mi8_ADD32mr_ADD64mi32_ADD64mi8_ADD64mr_ADD8mi_ADD8mi8_ADD8mr_SUB16mi_SUB16mi8_SUB16mr_SUB32mi_SUB32mi8_SUB32mr_SUB64mi32_SUB64mi8_SUB64mr_SUB8mi_SUB8mi8_SUB8mr") 2, false, false, 943, 5, 41, 2,  0, 0}, // #624
  {DBGFIELD("ADC16ri_ADC16ri8_ADC16rr_ADC16rr_REV_ADC32ri_ADC32ri8_ADC32rr_ADC32rr_REV_ADC64ri32_ADC64ri8_ADC64rr_ADC64rr_REV_ADC8ri_ADC8ri8_ADC8rr_ADC8rr_REV_SBB16ri_SBB16ri8_SBB16rr_SBB16rr_REV_SBB32ri_SBB32ri8_SBB32rr_SBB32rr_REV_SBB64ri32_SBB64ri8_SBB64rr_SBB64rr_REV_SBB8ri_SBB8ri8_SBB8rr_SBB8rr_REV") 1, false, false, 451, 2,  2, 1,  0, 0}, // #625
  {DBGFIELD("ADC16rm_ADC32rm_ADC64rm_ADC8rm_SBB16rm_SBB32rm_SBB64rm_SBB8rm") 1, false, false, 948, 4,  9, 1,  4, 1}, // #626
  {DBGFIELD("ADC16mi_ADC16mi8_ADC16mr_ADC32mi_ADC32mi8_ADC32mr_ADC64mi32_ADC64mi8_ADC64mr_ADC8mi_ADC8mi8_ADC8mr_SBB16mi_SBB16mi8_SBB16mr_SBB32mi_SBB32mi8_SBB32mr_SBB64mi32_SBB64mi8_SBB64mr_SBB8mi_SBB8mi8_SBB8mr") 2, false, false, 943, 5, 41, 2,  0, 0}, // #627
  {DBGFIELD("DEC16m_DEC32m_DEC64m_DEC8m_INC16m_INC32m_INC64m_INC8m_NEG16m_NEG32m_NEG64m_NEG8m_NOT16m_NOT32m_NOT64m_NOT8m") 2, false, false, 943, 5, 41, 2,  0, 0}, // #628
  {DBGFIELD("IMUL16r_IMUL16rr")   1, false, false, 986, 3,  6, 1,  0, 0}, // #629
  {DBGFIELD("IMUL16rm")           1, false, false, 1001, 5, 16, 1,  4, 1}, // #630
  {DBGFIELD("IMUL16rmi_IMUL16rmi8") 1, false, false, 1001, 5, 16, 1,  0, 0}, // #631
  {DBGFIELD("IMUL16rri_IMUL16rri8") 1, false, false, 986, 3,  6, 1,  0, 0}, // #632
  {DBGFIELD("MUL16r")             1, false, false, 986, 3,  6, 1,  0, 0}, // #633
  {DBGFIELD("IMUL16m")            1, false, false, 1001, 5, 16, 1,  5, 2}, // #634
  {DBGFIELD("MUL16m")             1, false, false, 1001, 5, 16, 1,  5, 2}, // #635
  {DBGFIELD("IMUL32r_IMUL32rr")   1, false, false, 986, 3,  6, 1,  0, 0}, // #636
  {DBGFIELD("IMUL32rm")           1, false, false, 1001, 5, 16, 1,  4, 1}, // #637
  {DBGFIELD("IMUL32rmi_IMUL32rmi8") 1, false, false, 1001, 5, 16, 1,  0, 0}, // #638
  {DBGFIELD("IMUL32rri_IMUL32rri8") 1, false, false, 986, 3,  6, 1,  0, 0}, // #639
  {DBGFIELD("MUL32r")             1, false, false, 986, 3,  6, 1,  0, 0}, // #640
  {DBGFIELD("IMUL32m")            1, false, false, 1001, 5, 16, 1,  5, 2}, // #641
  {DBGFIELD("MUL32m")             1, false, false, 1001, 5, 16, 1,  5, 2}, // #642
  {DBGFIELD("IMUL64r_IMUL64rr")   1, false, false, 986, 3,  6, 1,  0, 0}, // #643
  {DBGFIELD("IMUL64rm")           1, false, false, 1001, 5, 16, 1,  4, 1}, // #644
  {DBGFIELD("IMUL64rmi32_IMUL64rmi8") 1, false, false, 1001, 5, 16, 1,  0, 0}, // #645
  {DBGFIELD("IMUL64rri32_IMUL64rri8") 1, false, false, 986, 3,  6, 1,  0, 0}, // #646
  {DBGFIELD("MUL64r")             1, false, false, 986, 3,  6, 1,  0, 0}, // #647
  {DBGFIELD("IMUL64m")            1, false, false, 1001, 5, 16, 1,  5, 2}, // #648
  {DBGFIELD("MUL64m")             1, false, false, 1001, 5, 16, 1,  5, 2}, // #649
  {DBGFIELD("MULX32rr")           2, false, false, 1022, 3, 49, 2,  0, 0}, // #650
  {DBGFIELD("MULX32rm")           2, false, false, 1017, 5, 47, 2,  0, 0}, // #651
  {DBGFIELD("MULX64rr")           2, false, false, 1022, 3, 49, 2,  0, 0}, // #652
  {DBGFIELD("MULX64rm")           2, false, false, 1017, 5, 47, 2,  0, 0}, // #653
  {DBGFIELD("DIV8r")              1, false, false, 986, 4, 12, 1,  0, 0}, // #654
  {DBGFIELD("DIV16r")             1, false, false, 986, 4, 12, 1,  0, 0}, // #655
  {DBGFIELD("DIV32r")             1, false, false, 986, 4, 12, 1,  0, 0}, // #656
  {DBGFIELD("DIV64r")             1, false, false, 986, 4, 12, 1,  0, 0}, // #657
  {DBGFIELD("IDIV8r")             1, false, false, 986, 4, 12, 1,  0, 0}, // #658
  {DBGFIELD("IDIV16r")            1, false, false, 986, 4, 12, 1,  0, 0}, // #659
  {DBGFIELD("IDIV32r")            1, false, false, 986, 4, 12, 1,  0, 0}, // #660
  {DBGFIELD("IDIV64r")            1, false, false, 986, 4, 12, 1,  0, 0}, // #661
  {DBGFIELD("AND16mi_AND16mi8_AND16mr_AND32mi_AND32mi8_AND32mr_AND64mi32_AND64mi8_AND64mr_AND8mi_AND8mi8_AND8mr_OR16mi_OR16mi8_OR16mr_OR32mi_OR32mi8_OR32mr_OR64mi32_OR64mi8_OR64mr_OR8mi_OR8mi8_OR8mr_XOR16mi_XOR16mi8_XOR16mr_XOR32mi_XOR32mi8_XOR32mr_XOR64mi32_XOR64mi8_XOR64mr_XOR8mi_XOR8mi8_XOR8mr") 2, false, false, 943, 5, 41, 2,  0, 0}, // #662
  {DBGFIELD("OR32mrLocked")       2, false, false, 943, 5, 41, 2,  0, 0}, // #663
  {DBGFIELD("SAR16m1_SAR16mi_SAR32m1_SAR32mi_SAR64m1_SAR64mi_SAR8m1_SAR8mi_SHL16m1_SHL16mi_SHL32m1_SHL32mi_SHL64m1_SHL64mi_SHL8m1_SHL8mi_SHR16m1_SHR16mi_SHR32m1_SHR32mi_SHR64m1_SHR64mi_SHR8m1_SHR8mi") 2, false, false, 943, 5, 41, 2,  0, 0}, // #664
  {DBGFIELD("SAR16rCL_SAR32rCL_SAR64rCL_SAR8rCL_SHL16rCL_SHL32rCL_SHL64rCL_SHL8rCL_SHR16rCL_SHR32rCL_SHR64rCL_SHR8rCL") 1, false, false, 451, 2,  2, 1,  0, 0}, // #665
  {DBGFIELD("SAR16mCL_SAR32mCL_SAR64mCL_SAR8mCL_SHL16mCL_SHL32mCL_SHL64mCL_SHL8mCL_SHR16mCL_SHR32mCL_SHR64mCL_SHR8mCL") 2, false, false, 943, 5, 41, 2,  0, 0}, // #666
  {DBGFIELD("ROL16r1_ROL32r1_ROL64r1_ROL8r1_ROR16r1_ROR32r1_ROR64r1_ROR8r1") 1, false, false, 451, 2,  2, 1,  0, 0}, // #667
  {DBGFIELD("ROL16mi_ROL32mi_ROL64mi_ROL8mi_ROR16mi_ROR32mi_ROR64mi_ROR8mi") 2, false, false, 943, 5, 41, 2,  0, 0}, // #668
  {DBGFIELD("ROL16rCL_ROL32rCL_ROL64rCL_ROL8rCL_ROR16rCL_ROR32rCL_ROR64rCL_ROR8rCL") 1, false, false, 451, 2,  2, 1,  0, 0}, // #669
  {DBGFIELD("ROL16mCL_ROL32mCL_ROL64mCL_ROL8mCL_ROR16mCL_ROR32mCL_ROR64mCL_ROR8mCL") 2, false, false, 943, 5, 41, 2,  0, 0}, // #670
  {DBGFIELD("RCL16r1_RCL32r1_RCL64r1_RCL8r1_RCR16r1_RCR32r1_RCR64r1_RCR8r1") 1, false, false, 451, 2,  2, 1,  0, 0}, // #671
  {DBGFIELD("RCL16m1_RCL32m1_RCL64m1_RCL8m1_RCR16m1_RCR32m1_RCR64m1_RCR8m1") 2, false, false, 943, 5, 41, 2,  0, 0}, // #672
  {DBGFIELD("RCL16rCL_RCL16ri_RCL32rCL_RCL32ri_RCL64rCL_RCL64ri_RCL8rCL_RCL8ri_RCR16rCL_RCR16ri_RCR32rCL_RCR32ri_RCR64rCL_RCR64ri_RCR8rCL_RCR8ri") 1, false, false, 451, 2,  2, 1,  0, 0}, // #673
  {DBGFIELD("RCL16mCL_RCL16mi_RCL32mCL_RCL32mi_RCL64mCL_RCL64mi_RCL8mCL_RCL8mi_RCR16mCL_RCR16mi_RCR32mCL_RCR32mi_RCR64mCL_RCR64mi_RCR8mCL_RCR8mi") 2, false, false, 943, 5, 41, 2,  0, 0}, // #674
  {DBGFIELD("SHLD16rri8_SHRD16rri8") 1, false, false, 451, 2,  2, 1,  0, 0}, // #675
  {DBGFIELD("SHLD32rri8_SHRD32rri8") 1, false, false, 451, 2,  2, 1,  0, 0}, // #676
  {DBGFIELD("SHLD64rri8_SHRD64rri8") 1, false, false, 451, 2,  2, 1,  0, 0}, // #677
  {DBGFIELD("SHLD16mri8_SHRD16mri8") 2, false, false, 943, 5, 41, 2,  0, 0}, // #678
  {DBGFIELD("SHLD32mri8_SHRD32mri8") 2, false, false, 943, 5, 41, 2,  0, 0}, // #679
  {DBGFIELD("SHLD64mri8_SHRD64mri8") 2, false, false, 943, 5, 41, 2,  0, 0}, // #680
  {DBGFIELD("SHLD16rrCL")         1, false, false, 451, 2,  2, 1,  0, 0}, // #681
  {DBGFIELD("SHLD32rrCL")         1, false, false, 451, 2,  2, 1,  0, 0}, // #682
  {DBGFIELD("SHLD64rrCL")         1, false, false, 451, 2,  2, 1,  0, 0}, // #683
  {DBGFIELD("SHRD16rrCL")         1, false, false, 451, 2,  2, 1,  0, 0}, // #684
  {DBGFIELD("SHRD32rrCL")         1, false, false, 451, 2,  2, 1,  0, 0}, // #685
  {DBGFIELD("SHRD64rrCL")         1, false, false, 451, 2,  2, 1,  0, 0}, // #686
  {DBGFIELD("SHLD16mrCL_SHRD16mrCL") 2, false, false, 943, 5, 41, 2,  0, 0}, // #687
  {DBGFIELD("SHLD32mrCL_SHRD32mrCL") 2, false, false, 943, 5, 41, 2,  0, 0}, // #688
  {DBGFIELD("SHLD64mrCL_SHRD64mrCL") 2, false, false, 943, 5, 41, 2,  0, 0}, // #689
  {DBGFIELD("BT16ri8_BT32ri8_BT64ri8") 1, false, false, 451, 2,  2, 1,  0, 0}, // #690
  {DBGFIELD("BT16rr_BT32rr_BT64rr") 1, false, false, 451, 2,  2, 1,  0, 0}, // #691
  {DBGFIELD("BT16mr_BT32mr_BT64mr") 1, false, false, 948, 4,  9, 1,  0, 0}, // #692
  {DBGFIELD("BT16mi8_BT32mi8_BT64mi8") 1, false, false, 451, 2,  2, 1,  0, 0}, // #693
  {DBGFIELD("BTC16ri8_BTC32ri8_BTC64ri8_BTR16ri8_BTR32ri8_BTR64ri8_BTS16ri8_BTS32ri8_BTS64ri8") 1, false, false, 451, 2,  2, 1,  0, 0}, // #694
  {DBGFIELD("BTC16rr_BTC32rr_BTC64rr_BTR16rr_BTR32rr_BTS16rr_BTS32rr_BTS64rr") 1, false, false, 451, 2,  2, 1,  0, 0}, // #695
  {DBGFIELD("BTR64rr")            1, false, false, 451, 2,  2, 1,  0, 0}, // #696
  {DBGFIELD("BTC16mr_BTC32mr_BTC64mr_BTR16mr_BTR32mr_BTR64mr_BTS16mr_BTS32mr_BTS64mr") 2, false, false, 943, 5, 41, 2,  0, 0}, // #697
  {DBGFIELD("BTC16mi8_BTC32mi8_BTC64mi8_BTR16mi8_BTR32mi8_BTR64mi8_BTS16mi8_BTS32mi8_BTS64mi8") 2, false, false, 943, 5, 41, 2,  0, 0}, // #698
  {DBGFIELD("BSF16rr_BSF32rr_BSF64rr_BSR16rr_BSR32rr_BSR64rr") 1, false, false, 451, 2,  2, 1,  0, 0}, // #699
  {DBGFIELD("BSF16rm_BSF32rm_BSF64rm_BSR16rm_BSR32rm_BSR64rm") 1, false, false, 948, 4,  9, 1,  0, 0}, // #700
  {DBGFIELD("SETAEr_SETAr_SETBEr_SETBr_SETEr_SETGEr_SETGr_SETLEr_SETLr_SETNEr_SETNOr_SETNPr_SETNSr_SETOr_SETPr_SETSr") 1, false, false, 451, 2,  2, 1,  0, 0}, // #701
  {DBGFIELD("SETAEm_SETAm_SETBEm_SETBm_SETEm_SETGEm_SETGm_SETLEm_SETLm_SETNEm_SETNOm_SETNPm_SETNSm_SETOm_SETPm_SETSm") 2, false, false, 1037, 4, 21, 2,  0, 0}, // #702
  {DBGFIELD("CLD")                1, false, false, 451, 2,  2, 1,  0, 0}, // #703
  {DBGFIELD("STD")                1, false, false, 451, 2,  2, 1,  0, 0}, // #704
  {DBGFIELD("TZCNT16rr_TZCNT32rr_TZCNT64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("TZCNT16rm_TZCNT32rm_TZCNT64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("ANDN32rr_ANDN64rr")  1, false, false, 451, 2,  2, 1,  0, 0}, // #707
  {DBGFIELD("ANDN32rm_ANDN64rm")  1, false, false, 948, 4,  9, 1,  4, 1}, // #708
  {DBGFIELD("BLSI32rr_BLSI64rr_BLSMSK32rr_BLSMSK64rr_BLSR32rr_BLSR64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("BLSI32rm_BLSI64rm_BLSMSK32rm_BLSMSK64rm_BLSR32rm_BLSR64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("BEXTR32rr_BEXTR64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("BEXTR32rm_BEXTR64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("BZHI32rr_BZHI64rr")  0, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("BZHI32rm_BZHI64rm")  0, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("PDEP32rr_PDEP64rr_PEXT32rr_PEXT64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("PDEP32rm_PDEP64rm_PEXT32rm_PEXT64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("JCXZ_JRCXZ")         1, false, false, 451, 2,  2, 1,  0, 0}, // #717
  {DBGFIELD("LOOP")               1, false, false, 451, 2,  2, 1,  0, 0}, // #718
  {DBGFIELD("LOOPE")              1, false, false, 451, 2,  2, 1,  0, 0}, // #719
  {DBGFIELD("LOOPNE")             1, false, false, 451, 2,  2, 1,  0, 0}, // #720
  {DBGFIELD("CALL16r_CALL32r")    1, false, false, 451, 2,  2, 1,  0, 0}, // #721
  {DBGFIELD("CALL16m_CALL32m")    1, false, false, 948, 4,  9, 1,  0, 0}, // #722
  {DBGFIELD("LRETL_LRETQ_LRETW_RETL_RETQ_RETW") 1, false, false, 948, 4,  9, 1,  0, 0}, // #723
  {DBGFIELD("LRETIL_LRETIQ_LRETIW") 1, false, false, 948, 4,  9, 1,  0, 0}, // #724
  {DBGFIELD("RETIL_RETIQ_RETIW")  1, false, false, 948, 4,  9, 1,  0, 0}, // #725
  {DBGFIELD("BOUNDS16rm_BOUNDS32rm") 1, false, false, 13, 1,  1, 1,  0, 0}, // #726
  {DBGFIELD("INTO")               1, false, false, 13, 1,  1, 1,  0, 0}, // #727
  {DBGFIELD("LODSB_LODSW")        1, false, false, 13, 1,  1, 1,  0, 0}, // #728
  {DBGFIELD("LODSL_LODSQ")        1, false, false, 13, 1,  1, 1,  0, 0}, // #729
  {DBGFIELD("STOSB_STOSL_STOSQ_STOSW") 1, false, false, 13, 1,  1, 1,  0, 0}, // #730
  {DBGFIELD("MOVSB_MOVSL_MOVSQ_MOVSW") 1, false, false, 13, 1,  1, 1,  0, 0}, // #731
  {DBGFIELD("MOVSLDUPrm")         1, false, false, 968, 3,  3, 1,  0, 0}, // #732
  {DBGFIELD("MOVSLDUPrr")         1, false, false, 965, 2,  2, 1,  0, 0}, // #733
  {DBGFIELD("SCASB_SCASL_SCASQ_SCASW") 1, false, false, 13, 1,  1, 1,  0, 0}, // #734
  {DBGFIELD("CMPSB_CMPSL_CMPSQ_CMPSW") 1, false, false, 13, 1,  1, 1,  0, 0}, // #735
  {DBGFIELD("XADD16rm_XADD32rm_XADD64rm_XADD8rm") 2, false, false, 943, 5, 41, 2,  0, 0}, // #736
  {DBGFIELD("CMPXCHG16rm_CMPXCHG32rm_CMPXCHG64rm") 2, false, false, 943, 5, 41, 2,  0, 0}, // #737
  {DBGFIELD("CMPXCHG8rm")         2, false, false, 943, 5, 41, 2,  0, 0}, // #738
  {DBGFIELD("CMPXCHG8B")          2, false, false, 943, 5, 41, 2,  0, 0}, // #739
  {DBGFIELD("CMPXCHG16B")         2, false, false, 943, 5, 41, 2,  0, 0}, // #740
  {DBGFIELD("PAUSE")              1, false, false,  0, 0,  2, 1,  0, 0}, // #741
  {DBGFIELD("LEAVE_LEAVE64")      1, false, false, 451, 2,  2, 1,  0, 0}, // #742
  {DBGFIELD("XGETBV")             1, false, false, 13, 1,  1, 1,  0, 0}, // #743
  {DBGFIELD("RDTSC")              1, false, false, 13, 1,  1, 1,  0, 0}, // #744
  {DBGFIELD("RDTSCP")             1, false, false, 13, 1,  1, 1,  0, 0}, // #745
  {DBGFIELD("RDPMC")              1, false, false, 13, 1,  1, 1,  0, 0}, // #746
  {DBGFIELD("RDRAND16r_RDRAND32r_RDRAND64r") 0, false, false,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("LD_Frr")             1, false, false, 13, 1,  2, 1,  0, 0}, // #748
  {DBGFIELD("LD_F80m")            1, false, false, 968, 3,  3, 1,  0, 0}, // #749
  {DBGFIELD("FBLDm")              0, false, false,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("ST_FPrr_ST_Frr")     1, false, false, 13, 1,  2, 1,  0, 0}, // #751
  {DBGFIELD("ST_FP80m")           1, false, false, 1006, 3,  2, 1,  0, 0}, // #752
  {DBGFIELD("FBSTPm")             0, false, false,  0, 0,  0, 0,  0, 0}, // #753
  {DBGFIELD("XCH_F")              1, false, false, 13, 1,  2, 1,  0, 0}, // #754
  {DBGFIELD("ILD_F16m_ILD_F32m_ILD_F64m") 1, false, false, 968, 3,  3, 1,  0, 0}, // #755
  {DBGFIELD("IST_F16m_IST_F32m_IST_FP16m_IST_FP32m") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #756
  {DBGFIELD("LD_F0")              1, false, false,  0, 0,  2, 1,  0, 0}, // #757
  {DBGFIELD("LD_F1")              1, false, false,  0, 0,  2, 1,  0, 0}, // #758
  {DBGFIELD("FLDPI")              1, false, false, 13, 1,  1, 1,  0, 0}, // #759
  {DBGFIELD("CMOVBE_F_CMOVBE_Fp32_CMOVBE_Fp64_CMOVBE_Fp80_CMOVB_F_CMOVB_Fp32_CMOVB_Fp64_CMOVB_Fp80_CMOVNBE_F_CMOVNBE_Fp32_CMOVNBE_Fp64_CMOVNBE_Fp80_CMOVNB_F_CMOVNB_Fp32_CMOVNB_Fp64_CMOVNB_Fp80_CMOVNE_F_CMOVNE_Fp32_CMOVNE_Fp64_CMOVNE_Fp80_CMOVNP_F_CMOVNP_Fp32_CMOVNP_Fp64_CMOVNP_Fp80_CMOVP_F_CMOVP_Fp32_CMOVP_Fp64_CMOVP_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #760
  {DBGFIELD("FNSTSW16r")          1, false, false, 451, 2,  2, 1,  0, 0}, // #761
  {DBGFIELD("FNSTSWm")            0, false, false,  0, 0,  0, 0,  0, 0}, // #762
  {DBGFIELD("FLDCW16m")           1, false, false, 968, 3,  3, 1,  0, 0}, // #763
  {DBGFIELD("FNSTCW16m")          1, false, false, 451, 2,  2, 1,  0, 0}, // #764
  {DBGFIELD("FDECSTP_FINCSTP")    1, false, false, 13, 1,  1, 1,  0, 0}, // #765
  {DBGFIELD("FFREE_FFREEP")       1, false, false, 13, 1,  1, 1,  0, 0}, // #766
  {DBGFIELD("FSAVEm")             0, false, false,  0, 0,  0, 0,  0, 0}, // #767
  {DBGFIELD("FRSTORm")            0, false, false,  0, 0,  0, 0,  0, 0}, // #768
  {DBGFIELD("ABS_F_ABS_Fp32_ABS_Fp64_ABS_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #769
  {DBGFIELD("CHS_F_CHS_Fp32_CHS_Fp64_CHS_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #770
  {DBGFIELD("COMP_FST0r_COM_FST0r") 0, false, false,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("UCOM_FPr_UCOM_Fr")   1, false, false, 957, 3,  6, 1,  0, 0}, // #772
  {DBGFIELD("FCOM32m_FCOM64m_FCOMP32m_FCOMP64m") 0, false, false,  0, 0,  0, 0,  0, 0}, // #773
  {DBGFIELD("FCOMPP")             1, false, false, 13, 1,  1, 1,  0, 0}, // #774
  {DBGFIELD("UCOM_FPPr")          1, false, false, 957, 3,  6, 1,  0, 0}, // #775
  {DBGFIELD("COM_FIPr_COM_FIr")   1, false, false, 957, 3,  6, 1,  0, 0}, // #776
  {DBGFIELD("UCOM_FIPr_UCOM_FIr") 1, false, false, 957, 3,  6, 1,  0, 0}, // #777
  {DBGFIELD("FICOM16m_FICOM32m_FICOMP16m_FICOMP32m") 0, false, false,  0, 0,  0, 0,  0, 0}, // #778
  {DBGFIELD("TST_F_TST_Fp32_TST_Fp64_TST_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #779
  {DBGFIELD("FXAM")               1, false, false, 13, 1,  1, 1,  0, 0}, // #780
  {DBGFIELD("FPREM")              1, false, false, 13, 1,  1, 1,  0, 0}, // #781
  {DBGFIELD("FPREM1")             1, false, false, 13, 1,  1, 1,  0, 0}, // #782
  {DBGFIELD("FRNDINT")            1, false, false, 13, 1,  1, 1,  0, 0}, // #783
  {DBGFIELD("FSCALE")             1, false, false, 13, 1,  1, 1,  0, 0}, // #784
  {DBGFIELD("FXTRACT")            1, false, false, 13, 1,  1, 1,  0, 0}, // #785
  {DBGFIELD("FNOP")               1, false, false, 13, 1,  1, 1,  0, 0}, // #786
  {DBGFIELD("WAIT")               1, false, false, 13, 1,  1, 1,  0, 0}, // #787
  {DBGFIELD("FNCLEX")             1, false, false, 13, 1,  1, 1,  0, 0}, // #788
  {DBGFIELD("FNINIT")             1, false, false, 13, 1,  1, 1,  0, 0}, // #789
  {DBGFIELD("MMX_MOVD64from64rr_MMX_MOVD64grr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #790
  {DBGFIELD("MOVPDI2DIrr_VMOVPDI2DIrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #791
  {DBGFIELD("MMX_MOVD64rr_MMX_MOVD64to64rr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #792
  {DBGFIELD("MOVDI2PDIrr_VMOVDI2PDIrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #793
  {DBGFIELD("VMOVPQIto64rr")      1, false, false, 13, 1,  2, 1,  0, 0}, // #794
  {DBGFIELD("VMOV64toPQIrr")      1, false, false, 13, 1,  2, 1,  0, 0}, // #795
  {DBGFIELD("MMX_MOVQ64rr_MMX_MOVQ64rr_REV") 1, false, false, 13, 1,  2, 1,  0, 0}, // #796
  {DBGFIELD("MOVDQArr_MOVDQArr_REV_VMOVDQAYrr_VMOVDQAYrr_REV_VMOVDQArr_VMOVDQArr_REV") 1, false, false, 13, 1,  2, 1,  0, 0}, // #797
  {DBGFIELD("MOVDQUrr_MOVDQUrr_REV_VMOVDQUYrr_VMOVDQUYrr_REV_VMOVDQUrr_VMOVDQUrr_REV") 1, false, false, 13, 1,  2, 1,  0, 0}, // #798
  {DBGFIELD("MMX_MOVDQ2Qrr")      1, false, false, 13, 1,  2, 1,  0, 0}, // #799
  {DBGFIELD("MMX_MOVQ2DQrr")      1, false, false, 13, 1,  2, 1,  0, 0}, // #800
  {DBGFIELD("MMX_PACKSSDWirr_MMX_PACKSSWBirr_MMX_PACKUSWBirr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #801
  {DBGFIELD("MMX_PACKSSDWirm_MMX_PACKSSWBirm_MMX_PACKUSWBirm") 1, false, false, 960, 4, 16, 1,  4, 1}, // #802
  {DBGFIELD("VPMOVSXBQYrr_VPMOVSXBWYrr_VPMOVSXDQYrr_VPMOVZXBQYrr_VPMOVZXBWYrr_VPMOVZXDQYrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #803
  {DBGFIELD("PBLENDWrri")         1, false, false, 965, 2,  2, 1,  0, 0}, // #804
  {DBGFIELD("VPBLENDWYrri_VPBLENDWrri") 1, false, false, 965, 2,  2, 1,  0, 0}, // #805
  {DBGFIELD("PBLENDWrmi")         1, false, false, 960, 4, 16, 1,  4, 1}, // #806
  {DBGFIELD("VPBLENDWYrmi_VPBLENDWrmi") 1, false, false, 960, 4, 16, 1,  4, 1}, // #807
  {DBGFIELD("VPBLENDDYrri_VPBLENDDrri") 1, false, false, 965, 2,  2, 1,  0, 0}, // #808
  {DBGFIELD("VPBLENDDYrmi_VPBLENDDrmi") 1, false, false, 960, 4, 16, 1,  4, 1}, // #809
  {DBGFIELD("MMX_MASKMOVQ_MMX_MASKMOVQ64") 1, false, false, 965, 2,  2, 1,  0, 0}, // #810
  {DBGFIELD("MASKMOVDQU_MASKMOVDQU64_VMASKMOVDQU_VMASKMOVDQU64") 1, false, false, 1006, 3,  2, 1,  0, 0}, // #811
  {DBGFIELD("VPMASKMOVDYrm_VPMASKMOVDrm_VPMASKMOVQYrm_VPMASKMOVQrm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #812
  {DBGFIELD("VPMASKMOVDYmr_VPMASKMOVDmr_VPMASKMOVQYmr_VPMASKMOVQmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #813
  {DBGFIELD("MMX_PMOVMSKBrr")     0, false, false,  0, 0,  0, 0,  0, 0}, // #814
  {DBGFIELD("PMOVMSKBrr_VPMOVMSKBrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #815
  {DBGFIELD("VPMOVMSKBYrr")       1, false, false, 965, 2,  2, 1,  0, 0}, // #816
  {DBGFIELD("MMX_PEXTRWirri")     1, false, false, 965, 2,  2, 1,  0, 0}, // #817
  {DBGFIELD("PEXTRBrr_PEXTRDrr_PEXTRQrr_PEXTRWrr_REV") 1, false, false, 965, 2,  2, 1,  0, 0}, // #818
  {DBGFIELD("PEXTRBmr_PEXTRDmr_PEXTRQmr_PEXTRWmr") 2, false, false, 996, 5, 45, 2,  0, 0}, // #819
  {DBGFIELD("VPBROADCASTBrm_VPBROADCASTWrm") 1, false, false, 968, 3,  3, 1,  0, 0}, // #820
  {DBGFIELD("VPBROADCASTBYrm_VPBROADCASTWYrm") 1, false, false, 968, 3,  3, 1,  0, 0}, // #821
  {DBGFIELD("VPGATHERDDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #822
  {DBGFIELD("VPGATHERDDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #823
  {DBGFIELD("VPGATHERQDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #824
  {DBGFIELD("VPGATHERQDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #825
  {DBGFIELD("VPGATHERDQrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #826
  {DBGFIELD("VPGATHERDQYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #827
  {DBGFIELD("VPGATHERQQrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #828
  {DBGFIELD("VPGATHERQQYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #829
  {DBGFIELD("MMX_PHADDSWrr64_MMX_PHADDWrr64_MMX_PHSUBSWrr64_MMX_PHSUBWrr64") 1, false, false, 965, 2,  2, 1,  0, 0}, // #830
  {DBGFIELD("MMX_PHADDrr64_MMX_PHSUBDrr64") 1, false, false, 965, 2,  2, 1,  0, 0}, // #831
  {DBGFIELD("PHADDDrr_PHSUBDrr_VPHADDDrr_VPHSUBDrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #832
  {DBGFIELD("PHADDSWrr128_PHSUBSWrr128_VPHADDSWrr128_VPHSUBSWrr128") 1, false, false, 965, 2,  2, 1,  0, 0}, // #833
  {DBGFIELD("PHADDWrr_PHSUBWrr_VPHADDDYrr_VPHADDWYrr_VPHADDWrr_VPHSUBDYrr_VPHSUBWYrr_VPHSUBWrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #834
  {DBGFIELD("VPHADDSWrr256_VPHSUBSWrr256") 1, false, false, 965, 2,  2, 1,  0, 0}, // #835
  {DBGFIELD("MMX_PHADDSWrm64_MMX_PHADDWrm64_MMX_PHSUBSWrm64_MMX_PHSUBWrm64") 1, false, false, 960, 4, 16, 1,  4, 1}, // #836
  {DBGFIELD("MMX_PHADDrm64_MMX_PHSUBDrm64") 1, false, false, 960, 4, 16, 1,  4, 1}, // #837
  {DBGFIELD("PHADDDrm_PHSUBDrm_VPHADDDrm_VPHSUBDrm") 1, false, false, 960, 4, 16, 1,  4, 1}, // #838
  {DBGFIELD("PHADDSWrm128_PHSUBSWrm128_VPHADDSWrm128_VPHSUBSWrm128") 1, false, false, 960, 4, 16, 1,  4, 1}, // #839
  {DBGFIELD("PHADDWrm_PHSUBWrm_VPHADDDYrm_VPHADDWYrm_VPHADDWrm_VPHSUBDYrm_VPHSUBWYrm_VPHSUBWrm") 1, false, false, 960, 4, 16, 1,  4, 1}, // #840
  {DBGFIELD("VPHADDSWrm256_VPHSUBSWrm256") 1, false, false, 960, 4, 16, 1,  4, 1}, // #841
  {DBGFIELD("PCMPGTQrr_VPCMPGTQYrr_VPCMPGTQrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #842
  {DBGFIELD("PCMPGTQrm_VPCMPGTQYrm_VPCMPGTQrm") 1, false, false, 960, 4, 16, 1,  4, 1}, // #843
  {DBGFIELD("PMULLDrr_VPMULLDYrr_VPMULLDrr") 1, false, false, 957, 3, 19, 1,  0, 0}, // #844
  {DBGFIELD("PMULLDrm_VPMULLDYrm_VPMULLDrm") 1, false, false, 952, 5,  5, 1,  4, 1}, // #845
  {DBGFIELD("PTESTrr_VPTESTYrr_VPTESTrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #846
  {DBGFIELD("PTESTrm_VPTESTYrm_VPTESTrm") 1, false, false, 960, 4, 16, 1,  4, 1}, // #847
  {DBGFIELD("PSLLDrr_PSLLQrr_PSLLWrr_PSRADrr_PSRAWrr_PSRLDrr_PSRLQrr_PSRLWrr_VPSLLDYrr_VPSLLDrr_VPSLLQYrr_VPSLLQrr_VPSLLWYrr_VPSLLWrr_VPSRADYrr_VPSRADrr_VPSRAWYrr_VPSRAWrr_VPSRLDYrr_VPSRLDrr_VPSRLQYrr_VPSRLQrr_VPSRLWYrr_VPSRLWrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #848
  {DBGFIELD("PSLLDQri_PSRLDQri_VPSLLDQYri_VPSLLDQri_VPSRLDQYri_VPSRLDQri") 1, false, false, 965, 2,  2, 1,  0, 0}, // #849
  {DBGFIELD("MMX_EMMS")           0, false, false,  0, 0,  0, 0,  0, 0}, // #850
  {DBGFIELD("MOVMSKPDrr_MOVMSKPSrr_VMOVMSKPDrr_VMOVMSKPSrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #851
  {DBGFIELD("VMOVMSKPDYrr_VMOVMSKPSYrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #852
  {DBGFIELD("VPERM2F128rr")       1, false, false, 965, 2,  2, 1,  0, 0}, // #853
  {DBGFIELD("VPERM2F128rm")       1, false, false, 960, 4, 16, 1,  4, 1}, // #854
  {DBGFIELD("BLENDVPDrr0_BLENDVPSrr0") 1, false, false, 965, 2,  2, 1,  0, 0}, // #855
  {DBGFIELD("BLENDVPDrm0_BLENDVPSrm0") 1, false, false, 960, 4, 16, 1,  4, 1}, // #856
  {DBGFIELD("VBROADCASTF128")     1, false, false, 960, 4, 16, 1,  0, 0}, // #857
  {DBGFIELD("EXTRACTPSrr")        1, false, false, 965, 2,  2, 1,  0, 0}, // #858
  {DBGFIELD("VEXTRACTPSrr")       1, false, false, 965, 2,  2, 1,  0, 0}, // #859
  {DBGFIELD("EXTRACTPSmr")        2, false, false, 996, 5, 45, 2,  0, 0}, // #860
  {DBGFIELD("VEXTRACTPSmr")       2, false, false, 996, 5, 45, 2,  0, 0}, // #861
  {DBGFIELD("VEXTRACTF128rr")     1, false, false, 965, 2,  2, 1,  0, 0}, // #862
  {DBGFIELD("VEXTRACTF128mr")     1, false, false, 1006, 3,  2, 1,  0, 0}, // #863
  {DBGFIELD("VINSERTF128rr")      1, false, false, 965, 2,  2, 1,  0, 0}, // #864
  {DBGFIELD("VINSERTF128rm")      1, false, false, 960, 4, 16, 1,  4, 1}, // #865
  {DBGFIELD("VMASKMOVPDYrm_VMASKMOVPDrm_VMASKMOVPSYrm_VMASKMOVPSrm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #866
  {DBGFIELD("VMASKMOVPDmr_VMASKMOVPSmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #867
  {DBGFIELD("VMASKMOVPDYmr_VMASKMOVPSYmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #868
  {DBGFIELD("VGATHERDPSrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #869
  {DBGFIELD("VGATHERDPSYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #870
  {DBGFIELD("VGATHERQPSrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #871
  {DBGFIELD("VGATHERQPSYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #872
  {DBGFIELD("VGATHERDPDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #873
  {DBGFIELD("VGATHERDPDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #874
  {DBGFIELD("VGATHERQPDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #875
  {DBGFIELD("VGATHERQPDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #876
  {DBGFIELD("CVTPD2PSrr_VCVTPD2PSrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #877
  {DBGFIELD("CVTPD2PSrm_VCVTPD2PSrm") 1, false, false, 972, 5, 10, 1,  0, 0}, // #878
  {DBGFIELD("VCVTPD2PSYrr")       1, false, false, 977, 3,  6, 1,  0, 0}, // #879
  {DBGFIELD("VCVTPD2PSYrm")       1, false, false, 972, 5, 10, 1,  0, 0}, // #880
  {DBGFIELD("CVTSD2SSrr_Int_CVTSD2SSrr_Int_VCVTSD2SSrr_VCVTSD2SSrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #881
  {DBGFIELD("CVTSD2SSrm")         1, false, false, 972, 5, 10, 1,  0, 0}, // #882
  {DBGFIELD("Int_CVTSD2SSrm_Int_VCVTSD2SSrm_VCVTSD2SSrm") 1, false, false, 972, 5, 10, 1,  4, 1}, // #883
  {DBGFIELD("CVTPS2PDrr_VCVTPS2PDrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #884
  {DBGFIELD("CVTPS2PDrm_VCVTPS2PDYrm_VCVTPS2PDrm") 1, false, false, 972, 5, 10, 1,  0, 0}, // #885
  {DBGFIELD("VCVTPS2PDYrr")       1, false, false, 977, 3,  6, 1,  0, 0}, // #886
  {DBGFIELD("CVTSS2SDrr_Int_CVTSS2SDrr_Int_VCVTSS2SDrr_VCVTSS2SDrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #887
  {DBGFIELD("CVTSS2SDrm")         1, false, false, 972, 5, 10, 1,  0, 0}, // #888
  {DBGFIELD("Int_CVTSS2SDrm_Int_VCVTSS2SDrm_VCVTSS2SDrm") 1, false, false, 972, 5, 10, 1,  4, 1}, // #889
  {DBGFIELD("CVTDQ2PDrr")         1, false, false, 977, 3,  6, 1,  0, 0}, // #890
  {DBGFIELD("VCVTDQ2PDrr")        1, false, false, 977, 3,  6, 1,  0, 0}, // #891
  {DBGFIELD("VCVTDQ2PDYrr")       1, false, false, 977, 3,  6, 1,  0, 0}, // #892
  {DBGFIELD("CVTPD2DQrr_CVTTPD2DQrr_VCVTTPD2DQrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #893
  {DBGFIELD("VCVTPD2DQrr")        1, false, false, 977, 3,  6, 1,  0, 0}, // #894
  {DBGFIELD("CVTPD2DQrm_CVTTPD2DQrm_VCVTTPD2DQrm") 1, false, false, 972, 5, 10, 1,  0, 0}, // #895
  {DBGFIELD("VCVTPD2DQrm")        1, false, false, 972, 5, 10, 1,  0, 0}, // #896
  {DBGFIELD("VCVTPD2DQYrr")       1, false, false, 977, 3,  6, 1,  0, 0}, // #897
  {DBGFIELD("VCVTTPD2DQYrr")      1, false, false, 977, 3,  6, 1,  0, 0}, // #898
  {DBGFIELD("VCVTPD2DQYrm")       1, false, false, 972, 5, 10, 1,  0, 0}, // #899
  {DBGFIELD("VCVTTPD2DQYrm")      1, false, false, 972, 5, 10, 1,  0, 0}, // #900
  {DBGFIELD("MMX_CVTPS2PIirr_MMX_CVTTPS2PIirr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #901
  {DBGFIELD("MMX_CVTPI2PDirr")    1, false, false, 977, 3,  6, 1,  0, 0}, // #902
  {DBGFIELD("MMX_CVTPD2PIirr_MMX_CVTTPD2PIirr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #903
  {DBGFIELD("CVTSI2SS64rr_CVTSI2SSrr_Int_CVTSI2SS64rr_Int_CVTSI2SSrr_Int_VCVTSI2SS64rr_Int_VCVTSI2SSrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #904
  {DBGFIELD("VCVTSI2SS64rr_VCVTSI2SSrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #905
  {DBGFIELD("CVTSS2SI64rr_CVTTSS2SI64rr_Int_CVTTSS2SI64rr_Int_VCVTTSS2SI64rr_VCVTSS2SI64rr_VCVTTSS2SI64rr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #906
  {DBGFIELD("CVTSS2SIrr_CVTTSS2SIrr_Int_CVTTSS2SIrr_Int_VCVTTSS2SIrr_VCVTSS2SIrr_VCVTTSS2SIrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #907
  {DBGFIELD("CVTSS2SI64rm_CVTTSS2SI64rm_Int_CVTTSS2SI64rm_Int_VCVTTSS2SI64rm_VCVTSS2SI64rm_VCVTTSS2SI64rm") 1, false, false, 972, 5, 10, 1,  0, 0}, // #908
  {DBGFIELD("CVTSS2SIrm_CVTTSS2SIrm_Int_CVTTSS2SIrm_Int_VCVTTSS2SIrm_VCVTSS2SIrm_VCVTTSS2SIrm") 1, false, false, 972, 5, 10, 1,  0, 0}, // #909
  {DBGFIELD("CVTSD2SI64rr_CVTSD2SIrr_CVTTSD2SI64rr_CVTTSD2SIrr_Int_CVTTSD2SI64rr_Int_CVTTSD2SIrr_Int_VCVTTSD2SI64rr_Int_VCVTTSD2SIrr_VCVTSD2SI64rr_VCVTSD2SIrr_VCVTTSD2SI64rr_VCVTTSD2SIrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #910
  {DBGFIELD("CVTSD2SI64rm_CVTSD2SIrm_CVTTSD2SI64rm_CVTTSD2SIrm_Int_CVTTSD2SI64rm_Int_CVTTSD2SIrm_Int_VCVTTSD2SI64rm_Int_VCVTTSD2SIrm_VCVTSD2SI64rm_VCVTSD2SIrm_VCVTTSD2SI64rm_VCVTTSD2SIrm") 1, false, false, 972, 5, 10, 1,  0, 0}, // #911
  {DBGFIELD("VCVTPS2PHYrr_VCVTPS2PHrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #912
  {DBGFIELD("VCVTPS2PHYmr_VCVTPS2PHmr") 2, false, false, 1047, 6, 35, 2,  0, 0}, // #913
  {DBGFIELD("VCVTPH2PSYrr_VCVTPH2PSrr") 1, false, false, 977, 3,  6, 1,  0, 0}, // #914
  {DBGFIELD("HADDPDrr_HADDPSrr_HSUBPDrr_HSUBPSrr_VHADDPDYrr_VHADDPDrr_VHADDPSYrr_VHADDPSrr_VHSUBPDYrr_VHSUBPDrr_VHSUBPSYrr_VHSUBPSrr") 1, false, false, 957, 3,  6, 1,  0, 0}, // #915
  {DBGFIELD("HADDPDrm_HADDPSrm_HSUBPDrm_HSUBPSrm_VHADDPDYrm_VHADDPDrm_VHADDPSYrm_VHADDPSrm_VHSUBPDYrm_VHSUBPDrm_VHSUBPSYrm_VHSUBPSrm") 1, false, false, 952, 5, 10, 1,  4, 1}, // #916
  {DBGFIELD("MULPDrr_VMULPDrr")   1, false, false, 977, 3, 19, 1,  0, 0}, // #917
  {DBGFIELD("MULPSrr_VMULPSrr")   1, false, false, 977, 3, 19, 1,  0, 0}, // #918
  {DBGFIELD("MULSDrr_MULSDrr_Int_VMULSDrr_VMULSDrr_Int") 1, false, false, 977, 3, 19, 1,  0, 0}, // #919
  {DBGFIELD("MULSSrr_MULSSrr_Int_VMULSSrr_VMULSSrr_Int") 1, false, false, 977, 3, 19, 1,  0, 0}, // #920
  {DBGFIELD("MULPDrm_MULPSrm_VMULPDrm_VMULPSrm") 1, false, false, 972, 5,  5, 1,  4, 1}, // #921
  {DBGFIELD("MULSDrm_MULSDrm_Int_MULSSrm_MULSSrm_Int_VMULSDrm_VMULSDrm_Int_VMULSSrm_VMULSSrm_Int") 1, false, false, 972, 5,  5, 1,  4, 1}, // #922
  {DBGFIELD("VDIVPSYrr")          1, false, false, 990, 6, 23, 1,  0, 0}, // #923
  {DBGFIELD("VDIVPSYrm")          1, false, false, 990, 6, 44, 1,  4, 1}, // #924
  {DBGFIELD("VDIVPDYrr")          1, false, false, 990, 6, 23, 1,  0, 0}, // #925
  {DBGFIELD("VDIVPDYrm")          1, false, false, 990, 6, 44, 1,  4, 1}, // #926
  {DBGFIELD("VRCPPSYr")           1, false, false, 977, 3, 19, 1,  0, 0}, // #927
  {DBGFIELD("VRCPPSYm")           1, false, false, 972, 5,  5, 1,  0, 0}, // #928
  {DBGFIELD("ROUNDPDr_ROUNDPSr_VROUNDPDr_VROUNDPSr_VROUNDYPDr_VROUNDYPSr") 1, false, false, 957, 3,  6, 1,  0, 0}, // #929
  {DBGFIELD("ROUNDSDr_ROUNDSDr_Int_ROUNDSSr_ROUNDSSr_Int_VROUNDSDr_VROUNDSDr_Int_VROUNDSSr_VROUNDSSr_Int") 1, false, false, 957, 3,  6, 1,  0, 0}, // #930
  {DBGFIELD("ROUNDPDm_VROUNDPDm_VROUNDYPDm") 1, false, false, 952, 5, 10, 1,  0, 0}, // #931
  {DBGFIELD("ROUNDPSm_VROUNDPSm_VROUNDYPSm") 1, false, false, 952, 5, 10, 1,  0, 0}, // #932
  {DBGFIELD("ROUNDSDm_ROUNDSDm_Int_ROUNDSSm_ROUNDSSm_Int_VROUNDSDm_VROUNDSDm_Int_VROUNDSSm_VROUNDSSm_Int") 1, false, false, 952, 5, 10, 1,  4, 1}, // #933
  {DBGFIELD("DPPSrri_VDPPSYrri_VDPPSrri") 1, false, false, 957, 3,  6, 1,  0, 0}, // #934
  {DBGFIELD("DPPSrmi_VDPPSYrmi_VDPPSrmi") 1, false, false, 952, 5, 10, 1,  4, 1}, // #935
  {DBGFIELD("DPPDrri")            1, false, false, 957, 3,  6, 1,  0, 0}, // #936
  {DBGFIELD("VDPPDrri")           1, false, false, 957, 3,  6, 1,  0, 0}, // #937
  {DBGFIELD("DPPDrmi_VDPPDrmi")   1, false, false, 952, 5, 10, 1,  4, 1}, // #938
  {DBGFIELD("VFMADDPD4rr_VFMADDPD4rr_REV_VFMADDPS4rr_VFMADDPS4rr_REV_VFMADDSD4rr_VFMADDSD4rr_Int_VFMADDSD4rr_Int_REV_VFMADDSD4rr_REV_VFMADDSS4rr_VFMADDSS4rr_Int_VFMADDSS4rr_Int_REV_VFMADDSS4rr_REV_VFMSUBPD4rr_VFMSUBPD4rr_REV_VFMSUBPS4rr_VFMSUBPS4rr_REV_VFMSUBSD4rr_VFMSUBSD4rr_Int_VFMSUBSD4rr_Int_REV_VFMSUBSD4rr_REV_VFMSUBSS4rr_VFMSUBSS4rr_Int_VFMSUBSS4rr_Int_REV_VFMSUBSS4rr_REV_VFNMADDPD4rr_VFNMADDPD4rr_REV_VFNMADDPS4rr_VFNMADDPS4rr_REV_VFNMADDSD4rr_VFNMADDSD4rr_Int_VFNMADDSD4rr_Int_REV_VFNMADDSD4rr_REV_VFNMADDSS4rr_VFNMADDSS4rr_Int_VFNMADDSS4rr_Int_REV_VFNMADDSS4rr_REV_VFNMSUBPD4rr_VFNMSUBPD4rr_REV_VFNMSUBPS4rr_VFNMSUBPS4rr_REV_VFNMSUBSD4rr_VFNMSUBSD4rr_Int_VFNMSUBSD4rr_Int_REV_VFNMSUBSD4rr_REV_VFNMSUBSS4rr_VFNMSUBSS4rr_Int_VFNMSUBSS4rr_Int_REV_VFNMSUBSS4rr_REV") 0, false, false,  0, 0,  0, 0,  0, 0}, // #939
  {DBGFIELD("VFMADDPD4mr_VFMADDPD4rm_VFMADDPS4mr_VFMADDPS4rm_VFMADDSD4mr_VFMADDSD4mr_Int_VFMADDSD4rm_VFMADDSD4rm_Int_VFMADDSS4mr_VFMADDSS4mr_Int_VFMADDSS4rm_VFMADDSS4rm_Int_VFMSUBPD4mr_VFMSUBPD4rm_VFMSUBPS4mr_VFMSUBPS4rm_VFMSUBSD4mr_VFMSUBSD4mr_Int_VFMSUBSD4rm_VFMSUBSD4rm_Int_VFMSUBSS4mr_VFMSUBSS4mr_Int_VFMSUBSS4rm_VFMSUBSS4rm_Int_VFNMADDPD4mr_VFNMADDPD4rm_VFNMADDPS4mr_VFNMADDPS4rm_VFNMADDSD4mr_VFNMADDSD4mr_Int_VFNMADDSD4rm_VFNMADDSD4rm_Int_VFNMADDSS4mr_VFNMADDSS4mr_Int_VFNMADDSS4rm_VFNMADDSS4rm_Int_VFNMSUBPD4mr_VFNMSUBPD4rm_VFNMSUBPS4mr_VFNMSUBPS4rm_VFNMSUBSD4mr_VFNMSUBSD4mr_Int_VFNMSUBSD4rm_VFNMSUBSD4rm_Int_VFNMSUBSS4mr_VFNMSUBSS4mr_Int_VFNMSUBSS4rm_VFNMSUBSS4rm_Int") 0, false, false,  0, 0,  0, 0,  0, 0}, // #940
  {DBGFIELD("VSQRTPSYr")          1, false, false, 1041, 6, 27, 1,  0, 0}, // #941
  {DBGFIELD("VSQRTPSYm")          1, false, false, 1041, 6, 51, 1,  0, 0}, // #942
  {DBGFIELD("VSQRTPDYr")          1, false, false, 1041, 6, 27, 1,  0, 0}, // #943
  {DBGFIELD("VSQRTPDYm")          1, false, false, 1041, 6, 51, 1,  0, 0}, // #944
  {DBGFIELD("RSQRTPSr_VRSQRTPSr") 1, false, false, 977, 3, 19, 1,  0, 0}, // #945
  {DBGFIELD("RSQRTSSr_VRSQRTSSr") 1, false, false, 977, 3, 19, 1,  0, 0}, // #946
  {DBGFIELD("RSQRTSSr_Int")       1, false, false, 972, 5,  5, 1,  4, 1}, // #947
  {DBGFIELD("VRSQRTSSr_Int")      1, false, false, 972, 5,  5, 1,  0, 0}, // #948
  {DBGFIELD("RSQRTPSm_VRSQRTPSm") 1, false, false, 972, 5,  5, 1,  0, 0}, // #949
  {DBGFIELD("RSQRTSSm_VRSQRTSSm") 1, false, false, 972, 5,  5, 1,  4, 1}, // #950
  {DBGFIELD("RSQRTSSm_Int_VRSQRTSSm_Int") 1, false, false, 972, 5,  5, 1,  4, 1}, // #951
  {DBGFIELD("VRSQRTPSYr")         1, false, false, 977, 3, 19, 1,  0, 0}, // #952
  {DBGFIELD("VRSQRTPSYm")         1, false, false, 972, 5,  5, 1,  0, 0}, // #953
  {DBGFIELD("ANDNPDrr_ANDNPSrr_ANDPDrr_ANDPSrr_ORPDrr_ORPSrr_VANDNPDYrr_VANDNPDrr_VANDNPSYrr_VANDNPSrr_VANDPDYrr_VANDPDrr_VANDPSYrr_VANDPSrr_VORPDYrr_VORPDrr_VORPSYrr_VORPSrr_VXORPDYrr_VXORPDrr_VXORPSYrr_VXORPSrr_XORPDrr_XORPSrr") 1, false, false, 965, 2,  2, 1,  0, 0}, // #954
  {DBGFIELD("ANDNPDrm_ANDNPSrm_ANDPDrm_ANDPSrm_ORPDrm_ORPSrm_VANDNPDYrm_VANDNPDrm_VANDNPSYrm_VANDNPSrm_VANDPDYrm_VANDPDrm_VANDPSYrm_VANDPSrm_VORPDYrm_VORPDrm_VORPSYrm_VORPSrm_VXORPDYrm_VXORPDrm_VXORPSYrm_VXORPSrm_XORPDrm_XORPSrm") 1, false, false, 960, 4, 16, 1,  4, 1}, // #955
  {DBGFIELD("VZEROUPPER")         0, false, false,  0, 0,  0, 0,  0, 0}, // #956
  {DBGFIELD("VZEROALL")           0, false, false,  0, 0,  0, 0,  0, 0}, // #957
  {DBGFIELD("LDMXCSR_VLDMXCSR")   1, false, false, 968, 3,  3, 1,  0, 0}, // #958
  {DBGFIELD("STMXCSR_VSTMXCSR")   1, false, false, 1006, 3,  2, 1,  0, 0}, // #959
  {DBGFIELD("VHADDPDYrr_VHADDPSYrr_VHSUBPDYrr_VHSUBPSYrr") 1, false, false, 1014, 3,  6, 1,  0, 0}, // #960
  {DBGFIELD("VHADDPDYrm_VHADDPSYrm_VHSUBPDYrm_VHSUBPSYrm") 1, false, false, 1009, 5, 10, 1,  0, 0} // #961
}; // BtVer2ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SandyBridgeModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_AAA_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #1
  {DBGFIELD("IIC_AAD_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #2
  {DBGFIELD("IIC_AAM_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #3
  {DBGFIELD("IIC_AAS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #4
  {DBGFIELD("IIC_BIN_CARRY_NONMEM_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #5
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #6
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_ReadAfterLd") 1, false, false, 918, 3,  3, 1,  1, 1}, // #7
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #8
  {DBGFIELD("IIC_BIN_NONMEM_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #9
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #10
  {DBGFIELD("WriteALU")           1, false, false, 108, 2,  2, 1,  0, 0}, // #11
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_ReadAfterLd") 1, false, false, 918, 3,  3, 1,  1, 1}, // #12
  {DBGFIELD("IIC_SSE_ALU_F64P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #13
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #14
  {DBGFIELD("IIC_SSE_ALU_F32P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #15
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #16
  {DBGFIELD("IIC_SSE_ALU_F64S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #17
  {DBGFIELD("IIC_SSE_ALU_F64S_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #18
  {DBGFIELD("IIC_SSE_ALU_F32S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #19
  {DBGFIELD("IIC_SSE_ALU_F32S_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #20
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #21
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #22
  {DBGFIELD("WriteFAddLd")        1, false, false, 1057, 5,  5, 1,  0, 0}, // #23
  {DBGFIELD("WriteFAdd")          1, false, false, 1062, 4,  6, 1,  0, 0}, // #24
  {DBGFIELD("IIC_BIN_MEM_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #25
  {DBGFIELD("IIC_AES_WriteAESDecEncLd_ReadAfterLd") 1, false, false, 1066, 3, 10, 1,  1, 1}, // #26
  {DBGFIELD("IIC_AES_WriteAESDecEnc") 1, false, false, 457, 2, 10, 1,  0, 0}, // #27
  {DBGFIELD("IIC_AES_WriteAESIMCLd") 1, false, false, 1066, 3, 10, 1,  0, 0}, // #28
  {DBGFIELD("IIC_AES_WriteAESIMC") 1, false, false, 457, 2, 10, 1,  0, 0}, // #29
  {DBGFIELD("WriteAESKeyGenLd")   1, false, false, 1069, 3, 10, 1,  0, 0}, // #30
  {DBGFIELD("WriteAESKeyGen")     1, false, false, 1072, 2, 10, 1,  0, 0}, // #31
  {DBGFIELD("WriteVecLogicLd_ReadAfterLd") 1, false, false, 918, 3,  3, 1,  1, 1}, // #32
  {DBGFIELD("WriteVecLogic")      1, false, false, 108, 2,  2, 1,  0, 0}, // #33
  {DBGFIELD("IIC_ARPL_MEM_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #34
  {DBGFIELD("IIC_ARPL_REG_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #35
  {DBGFIELD("WriteZero")          1, false, false,  0, 0,  2, 1,  0, 0}, // #36
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteFBlendLd_ReadAfterLd") 1, false, false, 1074, 4,  3, 1,  1, 1}, // #37
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteFBlend") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #38
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_ReadAfterLd") 1, false, false, 1074, 4,  3, 1,  1, 1}, // #39
  {DBGFIELD("IIC_ALU_NONMEM_WriteFBlend") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #40
  {DBGFIELD("IIC_BOUND_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #41
  {DBGFIELD("IIC_BIT_SCAN_MEM_WriteShiftLd") 1, false, false, 1074, 4,  3, 1,  0, 0}, // #42
  {DBGFIELD("IIC_BIT_SCAN_REG_WriteShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #43
  {DBGFIELD("IIC_BSWAP_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #44
  {DBGFIELD("IIC_BT_MI_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #45
  {DBGFIELD("IIC_BT_MR_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #46
  {DBGFIELD("IIC_BT_RI_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #47
  {DBGFIELD("IIC_BT_RR_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #48
  {DBGFIELD("IIC_BTX_MI_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #49
  {DBGFIELD("IIC_BTX_MR_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #50
  {DBGFIELD("IIC_BTX_RI_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #51
  {DBGFIELD("IIC_BTX_RR_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #52
  {DBGFIELD("IIC_CALL_MEM_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #53
  {DBGFIELD("IIC_CALL_RI_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #54
  {DBGFIELD("IIC_CALL_MEM_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #55
  {DBGFIELD("WriteSystem")        1, false, false, 108, 2,  1, 1,  0, 0}, // #56
  {DBGFIELD("IIC_CBW")            0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_CLC_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #58
  {DBGFIELD("IIC_CLD_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #59
  {DBGFIELD("IIC_SSE_PREFETCH_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #60
  {DBGFIELD("IIC_CLI_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #61
  {DBGFIELD("IIC_CLTS_WriteALU")  1, false, false, 108, 2,  2, 1,  0, 0}, // #62
  {DBGFIELD("IIC_SSE_CLZERO_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #63
  {DBGFIELD("IIC_CMC_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #64
  {DBGFIELD("IIC_CMOV16_RM_WriteALULd_ReadAfterLd") 1, false, false, 918, 3,  3, 1,  1, 1}, // #65
  {DBGFIELD("IIC_CMOV16_RR_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #66
  {DBGFIELD("IIC_CMOV32_RM_WriteALULd_ReadAfterLd") 1, false, false, 918, 3,  3, 1,  1, 1}, // #67
  {DBGFIELD("IIC_CMOV32_RR_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #68
  {DBGFIELD("IIC_CMPS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #69
  {DBGFIELD("IIC_CMPXCHG_16B_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #70
  {DBGFIELD("IIC_CMPXCHG_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #71
  {DBGFIELD("IIC_CMPXCHG_REG_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #72
  {DBGFIELD("IIC_CMPXCHG_8B_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #73
  {DBGFIELD("IIC_CMPXCHG_MEM8_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #74
  {DBGFIELD("IIC_CMPXCHG_REG8_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #75
  {DBGFIELD("IIC_SSE_COMIS_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #76
  {DBGFIELD("IIC_SSE_COMIS_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #77
  {DBGFIELD("IIC_FCOMI_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #78
  {DBGFIELD("IIC_CPUID_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #79
  {DBGFIELD("IIC_CRC32_MEM_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #80
  {DBGFIELD("IIC_CRC32_REG_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #81
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtI2FLd") 1, false, false, 1057, 5, 10, 1,  0, 0}, // #82
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtI2F") 1, false, false, 1062, 4,  9, 1,  0, 0}, // #83
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtI2FLd") 1, false, false, 1057, 5, 10, 1,  0, 0}, // #84
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtI2F") 1, false, false, 1062, 4,  9, 1,  0, 0}, // #85
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #86
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2I") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #87
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2FLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #88
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2F") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #89
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #90
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtF2I") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #91
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RM_WriteCvtF2ILd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #92
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RR_WriteCvtF2I") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #93
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #94
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtF2F") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #95
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd") 1, false, false, 1057, 5, 10, 1,  0, 0}, // #96
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtI2F") 1, false, false, 1062, 4,  9, 1,  0, 0}, // #97
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RM_WriteCvtF2ILd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #98
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RR_WriteCvtF2I") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #99
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RM_WriteCvtF2ILd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #100
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RR_WriteCvtF2I") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #101
  {DBGFIELD("IIC_DAA_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIC_DAS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIC_UNARY_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #104
  {DBGFIELD("IIC_UNARY_REG_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #105
  {DBGFIELD("IIC_DIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #106
  {DBGFIELD("IIC_DIV16_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #107
  {DBGFIELD("IIC_DIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #108
  {DBGFIELD("IIC_DIV32_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #109
  {DBGFIELD("IIC_DIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #110
  {DBGFIELD("IIC_DIV64_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #111
  {DBGFIELD("IIC_DIV8_MEM_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #112
  {DBGFIELD("IIC_DIV8_REG_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #113
  {DBGFIELD("IIC_SSE_DIV_F64P_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 1093, 5, 13, 1,  1, 1}, // #114
  {DBGFIELD("IIC_SSE_DIV_F64P_RR_WriteFDiv") 1, false, false, 1099, 4, 14, 1,  0, 0}, // #115
  {DBGFIELD("IIC_SSE_DIV_F32P_RR_WriteFDiv") 1, false, false, 1099, 4, 14, 1,  0, 0}, // #116
  {DBGFIELD("WriteFDivLd")        1, false, false, 1093, 5, 13, 1,  0, 0}, // #117
  {DBGFIELD("WriteFDiv")          1, false, false, 1099, 4, 14, 1,  0, 0}, // #118
  {DBGFIELD("IIC_SSE_DIV_F64S_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 1093, 5, 13, 1,  1, 1}, // #119
  {DBGFIELD("IIC_SSE_DIV_F64S_RR_WriteFDiv") 1, false, false, 1099, 4, 14, 1,  0, 0}, // #120
  {DBGFIELD("IIC_SSE_DIV_F32S_RR_WriteFDiv") 1, false, false, 1099, 4, 14, 1,  0, 0}, // #121
  {DBGFIELD("IIC_SSE_DPPD_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #122
  {DBGFIELD("IIC_SSE_DPPD_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #123
  {DBGFIELD("IIC_SSE_DPPS_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #124
  {DBGFIELD("IIC_RET_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #125
  {DBGFIELD("IIC_ENTER_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #126
  {DBGFIELD("IIC_SSE_EXTRACTPS_RM_WriteFBlendLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #127
  {DBGFIELD("IIC_SSE_EXTRACTPS_RR_WriteFBlend") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #128
  {DBGFIELD("IIC_F2XM1_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #129
  {DBGFIELD("IIC_CALL_FAR_PTR_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #130
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #131
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #132
  {DBGFIELD("IIC_JMP_FAR_PTR_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #133
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #134
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #135
  {DBGFIELD("IIC_FCOMPP_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #136
  {DBGFIELD("IIC_FPSTP_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #137
  {DBGFIELD("IIC_FFREE_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #138
  {DBGFIELD("IIC_FLDCW_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #139
  {DBGFIELD("IIC_FLDL_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #140
  {DBGFIELD("IIC_FNCLEX_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #141
  {DBGFIELD("IIC_FNINIT_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #142
  {DBGFIELD("IIC_FNOP_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #143
  {DBGFIELD("IIC_FNSTCW_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #144
  {DBGFIELD("IIC_FNSTSW_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #145
  {DBGFIELD("IIC_FPATAN_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #146
  {DBGFIELD("IIC_FPREM_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #147
  {DBGFIELD("IIC_FPREM1_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #148
  {DBGFIELD("IIC_FPTAN_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #149
  {DBGFIELD("IIC_FRNDINT_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #150
  {DBGFIELD("IIC_FSCALE_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #151
  {DBGFIELD("IIC_FSINCOS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #152
  {DBGFIELD("IIC_FXAM_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #153
  {DBGFIELD("IIC_FXRSTOR_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #154
  {DBGFIELD("IIC_FXSAVE_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #155
  {DBGFIELD("IIC_FXTRACT_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #156
  {DBGFIELD("IIC_FYL2X_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #157
  {DBGFIELD("IIC_FYL2XP1_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #158
  {DBGFIELD("IIC_SSE_HADDSUB_RM_WriteFHAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #159
  {DBGFIELD("IIC_SSE_HADDSUB_RR_WriteFHAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #160
  {DBGFIELD("IIC_HLT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #161
  {DBGFIELD("IIC_IDIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #162
  {DBGFIELD("IIC_IDIV16_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #163
  {DBGFIELD("IIC_IDIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #164
  {DBGFIELD("IIC_IDIV32_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #165
  {DBGFIELD("IIC_IDIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #166
  {DBGFIELD("IIC_IDIV64_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #167
  {DBGFIELD("IIC_IDIV8_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1092, 6, 11, 1,  2, 2}, // #168
  {DBGFIELD("IIC_IDIV8_WriteIDiv") 1, false, false, 1098, 5, 12, 1,  0, 0}, // #169
  {DBGFIELD("IIC_FILD_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #170
  {DBGFIELD("IIC_IMUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #171
  {DBGFIELD("IIC_IMUL16_RR_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #172
  {DBGFIELD("IIC_IMUL16_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #173
  {DBGFIELD("IIC_IMUL16_RMI_WriteIMulLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #174
  {DBGFIELD("IIC_IMUL16_RRI_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #175
  {DBGFIELD("IIC_IMUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #176
  {DBGFIELD("IIC_IMUL32_RR_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #177
  {DBGFIELD("IIC_IMUL32_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #178
  {DBGFIELD("IIC_IMUL32_RMI_WriteIMulLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #179
  {DBGFIELD("IIC_IMUL32_RRI_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #180
  {DBGFIELD("IIC_IMUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #181
  {DBGFIELD("IIC_IMUL64_RR_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #182
  {DBGFIELD("IIC_IMUL64_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #183
  {DBGFIELD("IIC_IMUL64_RMI_WriteIMulLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #184
  {DBGFIELD("IIC_IMUL64_RRI_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #185
  {DBGFIELD("IIC_IMUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #186
  {DBGFIELD("IIC_IMUL8_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #187
  {DBGFIELD("IIC_IN_RI_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #188
  {DBGFIELD("IIC_IN_RR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #189
  {DBGFIELD("IIC_INS_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #190
  {DBGFIELD("IIC_SSE_INSERTPS_RM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1081, 6,  3, 1,  1, 1}, // #191
  {DBGFIELD("IIC_SSE_INSERTPS_RR_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #192
  {DBGFIELD("IIC_INT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #193
  {DBGFIELD("IIC_INT3_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #194
  {DBGFIELD("IIC_INVD_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #195
  {DBGFIELD("IIC_INVLPG_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #196
  {DBGFIELD("WriteJumpLd")        1, false, false, 1081, 6,  3, 1,  0, 0}, // #197
  {DBGFIELD("IIC_IRET_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #198
  {DBGFIELD("IIC_FST_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #199
  {DBGFIELD("IIC_FIST_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #200
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #201
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd_ReadAfterLd") 1, false, false, 1057, 5, 10, 1,  1, 1}, // #202
  {DBGFIELD("WriteLoad")          1, false, false, 306, 2,  9, 1,  0, 0}, // #203
  {DBGFIELD("IIC_Jcc_WriteJump")  1, false, false, 1087, 5,  2, 1,  0, 0}, // #204
  {DBGFIELD("IIC_JCXZ_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #205
  {DBGFIELD("IIC_JMP_MEM_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #206
  {DBGFIELD("IIC_JMP_REG_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #207
  {DBGFIELD("IIC_JMP_REL_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #208
  {DBGFIELD("IIC_AHF_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #209
  {DBGFIELD("IIC_LAR_RM_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #210
  {DBGFIELD("IIC_LAR_RR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #211
  {DBGFIELD("IIC_CMPX_LOCK_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #212
  {DBGFIELD("IIC_CMPX_LOCK_16B_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #213
  {DBGFIELD("IIC_CMPX_LOCK_8_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #214
  {DBGFIELD("IIC_CMPX_LOCK_8B_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #215
  {DBGFIELD("IIC_SSE_LDDQU_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #216
  {DBGFIELD("IIC_SSE_LDMXCSR_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #217
  {DBGFIELD("IIC_LXS_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #218
  {DBGFIELD("IIC_FLDZ_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #219
  {DBGFIELD("IIC_FIST_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #220
  {DBGFIELD("IIC_FLD_WriteLoad")  1, false, false, 306, 2,  9, 1,  0, 0}, // #221
  {DBGFIELD("IIC_FLD80_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #222
  {DBGFIELD("IIC_FLD_WriteMove")  1, false, false, 108, 2,  2, 1,  0, 0}, // #223
  {DBGFIELD("IIC_LEA_16_WriteLEA") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #224
  {DBGFIELD("IIC_LEA_WriteLEA")   1, false, false, 1063, 3,  2, 1,  0, 0}, // #225
  {DBGFIELD("IIC_LEAVE_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #226
  {DBGFIELD("IIC_SSE_LFENCE_WriteFence") 1, false, false, 466, 3,  2, 1,  0, 0}, // #227
  {DBGFIELD("IIC_LGDT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #228
  {DBGFIELD("IIC_LIDT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #229
  {DBGFIELD("IIC_LLDT_MEM_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #230
  {DBGFIELD("IIC_LLDT_REG_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #231
  {DBGFIELD("IIC_LWP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #232
  {DBGFIELD("IIC_LMSW_REG_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #233
  {DBGFIELD("IIC_LMSW_MEM_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #234
  {DBGFIELD("IIC_ALU_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #235
  {DBGFIELD("IIC_ALU_NONMEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #236
  {DBGFIELD("IIC_LODS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #237
  {DBGFIELD("IIC_LOOP_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #238
  {DBGFIELD("IIC_LOOPE_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #239
  {DBGFIELD("IIC_LOOPNE_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #240
  {DBGFIELD("IIC_RET_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #241
  {DBGFIELD("IIC_LSL_RM_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #242
  {DBGFIELD("IIC_LSL_RR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #243
  {DBGFIELD("IIC_LTR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #244
  {DBGFIELD("IIC_XADD_LOCK_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #245
  {DBGFIELD("IIC_XADD_LOCK_MEM8_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #246
  {DBGFIELD("IIC_SSE_MASKMOV_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #247
  {DBGFIELD("IIC_SSE_MFENCE_WriteFence") 1, false, false, 466, 3,  2, 1,  0, 0}, // #248
  {DBGFIELD("IIC_MMX_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #249
  {DBGFIELD("IIC_MMX_CVT_PD_RR_WriteCvtF2I") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #250
  {DBGFIELD("WriteCvtI2FLd")      1, false, false, 1057, 5, 10, 1,  0, 0}, // #251
  {DBGFIELD("WriteCvtI2F")        1, false, false, 1062, 4,  9, 1,  0, 0}, // #252
  {DBGFIELD("IIC_MMX_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #253
  {DBGFIELD("IIC_MMX_CVT_PS_RR_WriteCvtF2I") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #254
  {DBGFIELD("IIC_MMX_EMMS")       0, false, false,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("IIC_MMX_MASKMOV_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #256
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #257
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #258
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #259
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #260
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #261
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #262
  {DBGFIELD("IIC_MMX_MOVQ_RR_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #263
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #264
  {DBGFIELD("WriteMove")          1, false, false, 108, 2,  2, 1,  0, 0}, // #265
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd") 1, false, false, 917, 4,  3, 1,  0, 0}, // #266
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecALU") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #267
  {DBGFIELD("IIC_MMX_PCK_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #268
  {DBGFIELD("IIC_MMX_PCK_RR_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #269
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #270
  {DBGFIELD("IIC_MMX_ALUQ_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #271
  {DBGFIELD("IIC_MMX_ALUQ_RR_WriteVecALU") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #272
  {DBGFIELD("WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #273
  {DBGFIELD("WriteShuffle")       1, false, false, 1063, 3,  2, 1,  0, 0}, // #274
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 918, 3,  3, 1,  1, 1}, // #275
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecLogic") 1, false, false, 108, 2,  2, 1,  0, 0}, // #276
  {DBGFIELD("IIC_MMX_MISC_FUNC_REG_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #277
  {DBGFIELD("IIC_MMX_MISC_FUNC_MEM_WriteVecIMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #278
  {DBGFIELD("IIC_MMX_PEXTR_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #279
  {DBGFIELD("IIC_MMX_PHADDSUBW_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #280
  {DBGFIELD("IIC_MMX_PHADDSUBW_RR_WriteVecALU") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #281
  {DBGFIELD("IIC_MMX_PHADDSUBD_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #282
  {DBGFIELD("IIC_MMX_PHADDSUBD_RR_WriteVecALU") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #283
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #284
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #285
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #286
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #287
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #288
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #289
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #290
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #291
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd") 1, false, false, 917, 4,  3, 1,  0, 0}, // #292
  {DBGFIELD("IIC_MMX_SHIFT_RI_WriteVecShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #293
  {DBGFIELD("IIC_MMX_SHIFT_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 1074, 4,  3, 1,  1, 1}, // #294
  {DBGFIELD("IIC_MMX_SHIFT_RR_WriteVecShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #295
  {DBGFIELD("IIC_MMX_UNPCK_H_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #296
  {DBGFIELD("IIC_MMX_UNPCK_H_RR_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #297
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #298
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #299
  {DBGFIELD("IIC_SSE_MONITORX_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #300
  {DBGFIELD("IIC_SSE_MONITOR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #301
  {DBGFIELD("IIC_MOV_MEM_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #302
  {DBGFIELD("IIC_MOV_MEM_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #303
  {DBGFIELD("IIC_MOV_MEM_SR_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #304
  {DBGFIELD("IIC_MOV_WriteMove")  1, false, false, 108, 2,  2, 1,  0, 0}, // #305
  {DBGFIELD("IIC_MOV_MEM_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #306
  {DBGFIELD("IIC_MOV_REG_SR_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #307
  {DBGFIELD("IIC_MOV_SR_MEM_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #308
  {DBGFIELD("IIC_MOV_SR_REG_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #309
  {DBGFIELD("IIC_MOV_CR_REG_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #310
  {DBGFIELD("IIC_MOV_DR_REG_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #311
  {DBGFIELD("IIC_ALU_NONMEM_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #312
  {DBGFIELD("IIC_MOV_REG_CR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #313
  {DBGFIELD("IIC_MOV_REG_DR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #314
  {DBGFIELD("IIC_SSE_MOVDQ_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #315
  {DBGFIELD("IIC_SSE_MOVDQ_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #316
  {DBGFIELD("IIC_SSE_MOVA_P_MR_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #317
  {DBGFIELD("IIC_SSE_MOVA_P_RM_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #318
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #319
  {DBGFIELD("IIC_MOVBE_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #320
  {DBGFIELD("IIC_MOVBE_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #321
  {DBGFIELD("IIC_SSE_MOV_LH_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #322
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #323
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #324
  {DBGFIELD("IIC_SSE_MOVU_P_MR_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #325
  {DBGFIELD("IIC_SSE_MOVU_P_RM_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #326
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #327
  {DBGFIELD("IIC_SSE_MOV_LH_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #328
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1081, 6,  3, 1,  1, 1}, // #329
  {DBGFIELD("IIC_SSE_MOVMSK_WriteVecLogic") 1, false, false, 108, 2,  2, 1,  0, 0}, // #330
  {DBGFIELD("IIC_SSE_MOVNT_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #331
  {DBGFIELD("IIC_SSE_MOVDQ_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #332
  {DBGFIELD("IIC_SSE_MOVD_ToGP_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #333
  {DBGFIELD("IIC_SSE_MOVQ_RR_WriteVecLogic") 1, false, false, 108, 2,  2, 1,  0, 0}, // #334
  {DBGFIELD("IIC_MOVS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #335
  {DBGFIELD("IIC_SSE_MOV_S_MR_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #336
  {DBGFIELD("IIC_SSE_MOV_S_RM_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #337
  {DBGFIELD("IIC_SSE_MOV_S_RR_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #338
  {DBGFIELD("IIC_MOVSX_R16_M8_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #339
  {DBGFIELD("IIC_MOVSX_R16_R8_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #340
  {DBGFIELD("IIC_MOVSX_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #341
  {DBGFIELD("IIC_MOVSX_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #342
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #343
  {DBGFIELD("IIC_MOVZX_R16_M8_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #344
  {DBGFIELD("IIC_MOVZX_R16_R8_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #345
  {DBGFIELD("IIC_MOVZX_WriteALULd") 1, false, false, 918, 3,  3, 1,  0, 0}, // #346
  {DBGFIELD("IIC_MOVZX_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #347
  {DBGFIELD("IIC_SSE_MPSADBW_RM_WriteMPSADLd_ReadAfterLd") 1, false, false, 1108, 8, 16, 1,  1, 1}, // #348
  {DBGFIELD("IIC_SSE_MPSADBW_RR_WriteMPSAD") 1, false, false, 1116, 7, 16, 1,  0, 0}, // #349
  {DBGFIELD("IIC_MUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #350
  {DBGFIELD("IIC_MUL16_REG_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #351
  {DBGFIELD("IIC_MUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #352
  {DBGFIELD("IIC_MUL32_REG_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #353
  {DBGFIELD("IIC_MUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #354
  {DBGFIELD("IIC_MUL64_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #355
  {DBGFIELD("IIC_MUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  2, 2}, // #356
  {DBGFIELD("IIC_MUL8_WriteIMul") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #357
  {DBGFIELD("IIC_SSE_MUL_F64P_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #358
  {DBGFIELD("IIC_SSE_MUL_F64P_RR_WriteFMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #359
  {DBGFIELD("IIC_SSE_MUL_F32P_RR_WriteFMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #360
  {DBGFIELD("IIC_SSE_MUL_F64S_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #361
  {DBGFIELD("IIC_SSE_MUL_F64S_RR_WriteFMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #362
  {DBGFIELD("IIC_SSE_MUL_F32S_RR_WriteFMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #363
  {DBGFIELD("IIC_MUL8_WriteIMulLd_WriteIMulH") 2, false, false, 1057, 5,  5, 2,  0, 0}, // #364
  {DBGFIELD("IIC_MUL8_WriteIMul_WriteIMulH") 2, false, false, 1062, 4, 17, 2,  0, 0}, // #365
  {DBGFIELD("WriteFMulLd")        1, false, false, 1093, 5, 15, 1,  0, 0}, // #366
  {DBGFIELD("WriteFMul")          1, false, false, 1099, 4,  3, 1,  0, 0}, // #367
  {DBGFIELD("IIC_SSE_MWAITX_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #368
  {DBGFIELD("IIC_SSE_MWAIT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #369
  {DBGFIELD("IIC_NOP_WriteZero")  1, false, false,  0, 0,  2, 1,  0, 0}, // #370
  {DBGFIELD("IIC_OUT_IR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #371
  {DBGFIELD("IIC_OUT_RR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #372
  {DBGFIELD("IIC_OUTS_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #373
  {DBGFIELD("IIC_SSE_PABS_RM_WriteVecALULd") 1, false, false, 917, 4,  3, 1,  0, 0}, // #374
  {DBGFIELD("IIC_SSE_PABS_RR_WriteVecALU") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #375
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #376
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteVecALU") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #377
  {DBGFIELD("IIC_SSE_INTALUQ_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #378
  {DBGFIELD("IIC_SSE_INTALUQ_P_RR_WriteVecALU") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #379
  {DBGFIELD("IIC_SSE_PALIGNRM_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #380
  {DBGFIELD("IIC_SSE_PALIGNRR_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #381
  {DBGFIELD("IIC_SSE_BIT_P_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 918, 3,  3, 1,  1, 1}, // #382
  {DBGFIELD("IIC_SSE_BIT_P_RR_WriteVecLogic") 1, false, false, 108, 2,  2, 1,  0, 0}, // #383
  {DBGFIELD("IIC_SSE_PAUSE_WriteNop") 1, false, false,  0, 0,  2, 1,  0, 0}, // #384
  {DBGFIELD("IIC_ALU_MEM_WriteVarBlendLd_ReadAfterLd") 1, false, false, 1123, 7, 16, 1,  1, 1}, // #385
  {DBGFIELD("IIC_ALU_NONMEM_WriteVarBlend") 1, false, false, 1130, 6, 19, 1,  0, 0}, // #386
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteBlendLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #387
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteBlend") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #388
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RM_WriteCLMulLd_ReadAfterLd") 1, false, false, 1136, 3,  7, 1,  1, 1}, // #389
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RR_WriteCLMul") 1, false, false, 1139, 2,  7, 1,  0, 0}, // #390
  {DBGFIELD("WriteVecALULd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #391
  {DBGFIELD("WriteVecALU")        1, false, false, 1063, 3,  2, 1,  0, 0}, // #392
  {DBGFIELD("WritePCmpEStrILd_ReadAfterLd") 1, false, false, 1141, 3,  9, 1,  1, 1}, // #393
  {DBGFIELD("WritePCmpEStrI")     1, false, false, 1144, 2,  9, 1,  0, 0}, // #394
  {DBGFIELD("WritePCmpEStrMLd_ReadAfterLd") 1, false, false, 1141, 3, 20, 1,  1, 1}, // #395
  {DBGFIELD("WritePCmpEStrM")     1, false, false, 1144, 2, 20, 1,  0, 0}, // #396
  {DBGFIELD("WritePCmpIStrILd_ReadAfterLd") 1, false, false, 1113, 3,  6, 1,  1, 1}, // #397
  {DBGFIELD("WritePCmpIStrI")     1, false, false, 273, 2,  6, 1,  0, 0}, // #398
  {DBGFIELD("WritePCmpIStrMLd_ReadAfterLd") 1, false, false, 1113, 3, 20, 1,  1, 1}, // #399
  {DBGFIELD("WritePCmpIStrM")     1, false, false, 273, 2, 20, 1,  0, 0}, // #400
  {DBGFIELD("WriteShuffleLd_WriteRMW") 2, false, false, 1146, 5,  3, 2,  0, 0}, // #401
  {DBGFIELD("IIC_SSE_PEXTRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #402
  {DBGFIELD("IIC_SSE_PHADDSUBD_RM_WritePHAddLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #403
  {DBGFIELD("IIC_SSE_PHADDSUBD_RR_WritePHAdd") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #404
  {DBGFIELD("WritePHAddLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #405
  {DBGFIELD("WritePHAdd")         1, false, false, 1063, 3,  2, 1,  0, 0}, // #406
  {DBGFIELD("IIC_SSE_PHADDSUBW_RM_WritePHAddLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #407
  {DBGFIELD("IIC_SSE_PHADDSUBW_RR_WritePHAdd") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #408
  {DBGFIELD("WriteVecIMulLd")     1, false, false, 1093, 5, 15, 1,  0, 0}, // #409
  {DBGFIELD("WriteVecIMul")       1, false, false, 1099, 4,  3, 1,  0, 0}, // #410
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #411
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #412
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #413
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #414
  {DBGFIELD("WriteVecIMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #415
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteShuffleLd") 1, false, false, 917, 4,  3, 1,  0, 0}, // #416
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #417
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #418
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #419
  {DBGFIELD("IIC_SSE_INTMUL_P_RM_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #420
  {DBGFIELD("IIC_SSE_INTMUL_P_RR_WriteVecIMul") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #421
  {DBGFIELD("IIC_POP_REG16_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #422
  {DBGFIELD("IIC_POP_MEM_WriteRMW") 1, false, false, 1151, 2,  2, 1,  0, 0}, // #423
  {DBGFIELD("IIC_POP_REG_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #424
  {DBGFIELD("IIC_POP_A_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #425
  {DBGFIELD("IIC_SSE_POPCNT_RM_WriteFAddLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #426
  {DBGFIELD("IIC_SSE_POPCNT_RR_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #427
  {DBGFIELD("IIC_POP_SR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #428
  {DBGFIELD("IIC_POP_F_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #429
  {DBGFIELD("IIC_POP_FD_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #430
  {DBGFIELD("IIC_POP_SR_SS_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #431
  {DBGFIELD("IIC_SSE_PSHUFB_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #432
  {DBGFIELD("IIC_SSE_PSHUFB_RR_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #433
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #434
  {DBGFIELD("IIC_SSE_PSHUF_RI_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #435
  {DBGFIELD("IIC_SSE_INTSHDQ_P_RI_WriteVecShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #436
  {DBGFIELD("IIC_SSE_INTSH_P_RI_WriteVecShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #437
  {DBGFIELD("IIC_SSE_INTSH_P_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 1074, 4,  3, 1,  1, 1}, // #438
  {DBGFIELD("IIC_SSE_INTSH_P_RR_WriteVecShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #439
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffleLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #440
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #441
  {DBGFIELD("IIC_PUSH_IMM_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #442
  {DBGFIELD("IIC_PUSH_REG_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #443
  {DBGFIELD("IIC_PUSH_MEM_WriteRMW") 1, false, false, 1151, 2,  2, 1,  0, 0}, // #444
  {DBGFIELD("IIC_PUSH_A_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #445
  {DBGFIELD("IIC_PUSH_SR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #446
  {DBGFIELD("IIC_PUSH_CS_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #447
  {DBGFIELD("IIC_PUSH_F_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #448
  {DBGFIELD("IIC_SR_WriteShiftLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #449
  {DBGFIELD("IIC_SR_WriteShift")  1, false, false, 1078, 3,  2, 1,  0, 0}, // #450
  {DBGFIELD("IIC_SSE_RCPP_RM_WriteFRcpLd") 1, false, false, 1093, 5, 15, 1,  0, 0}, // #451
  {DBGFIELD("IIC_SSE_RCPP_RR_WriteFRcp") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #452
  {DBGFIELD("IIC_SSE_RCPS_RM_WriteFRcpLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #453
  {DBGFIELD("WriteFRcpLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #454
  {DBGFIELD("IIC_SSE_RCPS_RR_WriteFRcp") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #455
  {DBGFIELD("WriteRMW")           1, false, false, 1151, 2,  2, 1,  0, 0}, // #456
  {DBGFIELD("IIC_RDMSR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #457
  {DBGFIELD("IIC_RDPMC_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #458
  {DBGFIELD("IIC_RDTSC_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #459
  {DBGFIELD("IIC_REP_MOVS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #460
  {DBGFIELD("IIC_REP_STOS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #461
  {DBGFIELD("IIC_RET_IMM_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #462
  {DBGFIELD("WriteShiftLd")       1, false, false, 1074, 4,  3, 1,  0, 0}, // #463
  {DBGFIELD("WriteShift")         1, false, false, 1078, 3,  2, 1,  0, 0}, // #464
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAddLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #465
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #466
  {DBGFIELD("IIC_SSE_ROUNDPS_MEM_WriteFAddLd") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #467
  {DBGFIELD("WriteFAddLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #468
  {DBGFIELD("IIC_RSM_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #469
  {DBGFIELD("IIC_SSE_RSQRTPS_RM_WriteFRsqrtLd") 1, false, false, 1093, 5, 15, 1,  0, 0}, // #470
  {DBGFIELD("IIC_SSE_RSQRTPS_RR_WriteFRsqrt") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #471
  {DBGFIELD("IIC_SSE_RSQRTSS_RM_WriteFRsqrtLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #472
  {DBGFIELD("WriteFRsqrtLd_ReadAfterLd") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #473
  {DBGFIELD("IIC_SSE_RSQRTSS_RR_WriteFRsqrt") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #474
  {DBGFIELD("WriteShiftLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd") 1, false, false, 1074, 4,  3, 1,  2, 1}, // #475
  {DBGFIELD("IIC_SCAS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #476
  {DBGFIELD("IIC_SET_M_WriteALU_WriteStore") 2, false, false, 1053, 4, 21, 2,  0, 0}, // #477
  {DBGFIELD("IIC_SET_R_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #478
  {DBGFIELD("IIC_SSE_SFENCE_WriteFence") 1, false, false, 466, 3,  2, 1,  0, 0}, // #479
  {DBGFIELD("IIC_SGDT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #480
  {DBGFIELD("IIC_SHD16_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #481
  {DBGFIELD("IIC_SHD16_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #482
  {DBGFIELD("IIC_SHD16_REG_CL_WriteShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #483
  {DBGFIELD("IIC_SHD16_REG_IM_WriteShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #484
  {DBGFIELD("IIC_SHD32_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #485
  {DBGFIELD("IIC_SHD32_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #486
  {DBGFIELD("IIC_SHD32_REG_CL_WriteShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #487
  {DBGFIELD("IIC_SHD32_REG_IM_WriteShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #488
  {DBGFIELD("IIC_SHD64_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #489
  {DBGFIELD("IIC_SHD64_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #490
  {DBGFIELD("IIC_SHD64_REG_CL_WriteShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #491
  {DBGFIELD("IIC_SHD64_REG_IM_WriteShift") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #492
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1081, 6,  3, 1,  1, 1}, // #493
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #494
  {DBGFIELD("IIC_SIDT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #495
  {DBGFIELD("IIC_SLDT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #496
  {DBGFIELD("IIC_SMSW_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #497
  {DBGFIELD("IIC_SSE_SQRTPD_RM_WriteFSqrtLd") 1, false, false, 1093, 5, 23, 1,  0, 0}, // #498
  {DBGFIELD("IIC_SSE_SQRTPD_RR_WriteFSqrt") 1, false, false, 1099, 4, 24, 1,  0, 0}, // #499
  {DBGFIELD("IIC_SSE_SQRTPS_RM_WriteFSqrtLd") 1, false, false, 1093, 5, 23, 1,  0, 0}, // #500
  {DBGFIELD("IIC_SSE_SQRTPS_RR_WriteFSqrt") 1, false, false, 1099, 4, 24, 1,  0, 0}, // #501
  {DBGFIELD("IIC_SSE_SQRTSD_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 1093, 5, 23, 1,  1, 1}, // #502
  {DBGFIELD("WriteFSqrtLd_ReadAfterLd") 1, false, false, 1093, 5, 23, 1,  1, 1}, // #503
  {DBGFIELD("IIC_SSE_SQRTSD_RR_WriteFSqrt") 1, false, false, 1099, 4, 24, 1,  0, 0}, // #504
  {DBGFIELD("IIC_SSE_SQRTSS_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 1093, 5, 23, 1,  1, 1}, // #505
  {DBGFIELD("IIC_SSE_SQRTSS_RR_WriteFSqrt") 1, false, false, 1099, 4, 24, 1,  0, 0}, // #506
  {DBGFIELD("WriteFSqrt")         1, false, false, 1099, 4, 24, 1,  0, 0}, // #507
  {DBGFIELD("IIC_STC_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #508
  {DBGFIELD("IIC_STD_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #509
  {DBGFIELD("IIC_STI_WriteALU")   1, false, false, 108, 2,  2, 1,  0, 0}, // #510
  {DBGFIELD("IIC_SSE_STMXCSR_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #511
  {DBGFIELD("IIC_STOS_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #512
  {DBGFIELD("IIC_STR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #513
  {DBGFIELD("IIC_FST80_WriteStore") 1, false, false, 466, 3,  2, 1,  0, 0}, // #514
  {DBGFIELD("IIC_FST_WriteMove")  1, false, false, 108, 2,  2, 1,  0, 0}, // #515
  {DBGFIELD("IIC_SWAPGS_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #516
  {DBGFIELD("IIC_SYSCALL_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #517
  {DBGFIELD("IIC_SYS_ENTER_EXIT_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #518
  {DBGFIELD("IIC_JMP_REL_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #519
  {DBGFIELD("IIC_JMP_MEM_WriteJump") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #520
  {DBGFIELD("IIC_JMP_REG_WriteJumpLd") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #521
  {DBGFIELD("WriteJump")          1, false, false, 1087, 5,  2, 1,  0, 0}, // #522
  {DBGFIELD("IIC_FUCOMI_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #523
  {DBGFIELD("IIC_FUCOM_WriteFAdd") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #524
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1081, 6,  3, 1,  1, 1}, // #525
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #526
  {DBGFIELD("IIC_SSE_ALU_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("IIC_SSE_ALU_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("IIC_SSE_ALU_F32S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("IIC_SSE_ALU_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("WriteFVarBlendLd_ReadAfterLd") 1, false, false, 1153, 7, 16, 1,  1, 1}, // #531
  {DBGFIELD("WriteFVarBlend")     1, false, false, 1160, 6, 19, 1,  0, 0}, // #532
  {DBGFIELD("WriteFShuffleLd")    1, false, false, 1081, 6,  3, 1,  0, 0}, // #533
  {DBGFIELD("WriteFShuffle256")   1, false, false, 1099, 4,  2, 1,  0, 0}, // #534
  {DBGFIELD("WriteFShuffle")      1, false, false, 1087, 5,  2, 1,  0, 0}, // #535
  {DBGFIELD("IIC_SSE_ALU_F32P_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("WriteCvtF2ILd")      1, false, false, 1057, 5,  5, 1,  0, 0}, // #537
  {DBGFIELD("WriteCvtF2I")        1, false, false, 1062, 4,  6, 1,  0, 0}, // #538
  {DBGFIELD("WriteCvtF2FLd")      1, false, false, 1057, 5,  5, 1,  0, 0}, // #539
  {DBGFIELD("WriteCvtF2F")        1, false, false, 1062, 4,  6, 1,  0, 0}, // #540
  {DBGFIELD("WriteCvtF2FLd_WriteRMW") 2, false, false, 1166, 6, 25, 2,  0, 0}, // #541
  {DBGFIELD("WriteCvtF2FLd_ReadAfterLd") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #542
  {DBGFIELD("WriteCvtI2FLd_ReadAfterLd") 1, false, false, 1057, 5, 10, 1,  1, 1}, // #543
  {DBGFIELD("IIC_SSE_DIV_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("IIC_SSE_DIV_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("IIC_SSE_DIV_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("IIC_VERR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #547
  {DBGFIELD("IIC_VERW_REG_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #548
  {DBGFIELD("IIC_VERW_MEM_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #549
  {DBGFIELD("WriteStore")         1, false, false, 466, 3,  2, 1,  0, 0}, // #550
  {DBGFIELD("WriteShuffle256")    1, false, false, 1099, 4,  2, 1,  0, 0}, // #551
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_WriteRMW") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #552
  {DBGFIELD("WriteFShuffleLd_ReadAfterLd") 1, false, false, 1081, 6,  3, 1,  1, 1}, // #553
  {DBGFIELD("WriteShuffle256Ld_ReadAfterLd") 1, false, false, 1093, 5,  3, 1,  1, 1}, // #554
  {DBGFIELD("IIC_ALU_MEM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1081, 6,  3, 1,  1, 1}, // #555
  {DBGFIELD("IIC_ALU_NONMEM_WriteFShuffle") 1, false, false, 1087, 5,  2, 1,  0, 0}, // #556
  {DBGFIELD("IIC_SSE_MOVDQ")      0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("IIC_SSE_MOV_LH")     0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("IIC_SSE_MOVD_ToGP")  0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("IIC_SSE_MOV_S_MR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("IIC_SSE_MOV_S_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("IIC_SSE_MOV_S_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("IIC_SSE_MOVQ_RR")    0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("IIC_ALU_MEM_WriteMPSADLd_ReadAfterLd") 1, false, false, 1108, 8, 16, 1,  1, 1}, // #564
  {DBGFIELD("IIC_ALU_NONMEM_WriteMPSAD") 1, false, false, 1116, 7, 16, 1,  0, 0}, // #565
  {DBGFIELD("IIC_SSE_MUL_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("IIC_SSE_MUL_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("IIC_SSE_MUL_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("WriteVecALULd")      1, false, false, 917, 4,  3, 1,  0, 0}, // #569
  {DBGFIELD("IIC_SSE_BIT_P_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("IIC_SSE_BIT_P_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("WriteBlendLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #572
  {DBGFIELD("WriteBlend")         1, false, false, 1063, 3,  2, 1,  0, 0}, // #573
  {DBGFIELD("WriteVarBlendLd_ReadAfterLd") 1, false, false, 1123, 7, 16, 1,  1, 1}, // #574
  {DBGFIELD("WriteVarBlend")      1, false, false, 1130, 6, 19, 1,  0, 0}, // #575
  {DBGFIELD("IIC_ALU_MEM_WriteBlendLd_ReadAfterLd") 1, false, false, 917, 4,  3, 1,  1, 1}, // #576
  {DBGFIELD("IIC_ALU_NONMEM_WriteBlend") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #577
  {DBGFIELD("WriteCLMulLd_ReadAfterLd") 1, false, false, 1136, 3,  7, 1,  1, 1}, // #578
  {DBGFIELD("WriteCLMul")         1, false, false, 1139, 2,  7, 1,  0, 0}, // #579
  {DBGFIELD("IIC_SSE_ALU_F32P_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("WriteFShuffle256Ld_ReadAfterLd") 1, false, false, 1093, 5,  3, 1,  1, 1}, // #581
  {DBGFIELD("IIC_ALU_MEM_WriteShuffleLd") 1, false, false, 917, 4,  3, 1,  0, 0}, // #582
  {DBGFIELD("IIC_ALU_NONMEM_WriteShuffle") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #583
  {DBGFIELD("WriteVarVecShift_ReadAfterLd") 1, false, false, 1099, 4,  2, 1,  1, 1}, // #584
  {DBGFIELD("WriteVarVecShift")   1, false, false, 1099, 4,  2, 1,  0, 0}, // #585
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd") 1, false, false, 917, 4,  3, 1,  0, 0}, // #586
  {DBGFIELD("WriteVarVecShiftLd_ReadAfterLd") 1, false, false, 1093, 5,  3, 1,  1, 1}, // #587
  {DBGFIELD("WriteFRcpLd")        1, false, false, 1093, 5, 15, 1,  0, 0}, // #588
  {DBGFIELD("WriteFRsqrtLd")      1, false, false, 1093, 5, 15, 1,  0, 0}, // #589
  {DBGFIELD("WriteFSqrtLd")       1, false, false, 1093, 5, 23, 1,  0, 0}, // #590
  {DBGFIELD("IIC_WAIT_WriteMicrocoded") 1, false, false, 108, 2,  1, 1,  0, 0}, // #591
  {DBGFIELD("IIC_WRMSR_WriteSystem") 1, false, false, 108, 2,  1, 1,  0, 0}, // #592
  {DBGFIELD("IIC_XADD_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #593
  {DBGFIELD("IIC_XADD_REG_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #594
  {DBGFIELD("IIC_XCHG_REG_WriteALU") 1, false, false, 108, 2,  2, 1,  0, 0}, // #595
  {DBGFIELD("IIC_XCHG_MEM_WriteALULd_WriteRMW") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #596
  {DBGFIELD("IIC_FXCH_WriteMove") 1, false, false, 108, 2,  2, 1,  0, 0}, // #597
  {DBGFIELD("IIC_XLAT_WriteLoad") 1, false, false, 306, 2,  9, 1,  0, 0}, // #598
  {DBGFIELD("MOV16rm")            1, false, false, 306, 2,  9, 1,  0, 0}, // #599
  {DBGFIELD("MOVSX32rm16_MOVSX32rm8") 1, false, false, 918, 3,  3, 1,  0, 0}, // #600
  {DBGFIELD("MOVZX32rm16_MOVZX32rm8") 1, false, false, 918, 3,  3, 1,  0, 0}, // #601
  {DBGFIELD("CMOVA16rr_CMOVAE16rr_CMOVB16rr_CMOVBE16rr_CMOVE16rr_CMOVG16rr_CMOVGE16rr_CMOVL16rr_CMOVLE16rr_CMOVNE16rr_CMOVNO16rr_CMOVNP16rr_CMOVNS16rr_CMOVO16rr_CMOVP16rr_CMOVS16rr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #602
  {DBGFIELD("CMOVA32rr_CMOVA64rr_CMOVAE32rr_CMOVAE64rr_CMOVB32rr_CMOVB64rr_CMOVBE32rr_CMOVBE64rr_CMOVE32rr_CMOVE64rr_CMOVG32rr_CMOVG64rr_CMOVGE32rr_CMOVGE64rr_CMOVL32rr_CMOVL64rr_CMOVLE32rr_CMOVLE64rr_CMOVNE32rr_CMOVNE64rr_CMOVNO32rr_CMOVNO64rr_CMOVNP32rr_CMOVNP64rr_CMOVNS32rr_CMOVNS64rr_CMOVO32rr_CMOVO64rr_CMOVP32rr_CMOVP64rr_CMOVS32rr_CMOVS64rr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #603
  {DBGFIELD("CMOVA16rm_CMOVAE16rm_CMOVB16rm_CMOVBE16rm_CMOVE16rm_CMOVG16rm_CMOVGE16rm_CMOVL16rm_CMOVLE16rm_CMOVNE16rm_CMOVNO16rm_CMOVNP16rm_CMOVNS16rm_CMOVO16rm_CMOVP16rm_CMOVS16rm") 1, false, false, 918, 3,  3, 1,  1, 1}, // #604
  {DBGFIELD("CMOVA32rm_CMOVA64rm_CMOVAE32rm_CMOVAE64rm_CMOVB32rm_CMOVB64rm_CMOVBE32rm_CMOVBE64rm_CMOVE32rm_CMOVE64rm_CMOVG32rm_CMOVG64rm_CMOVGE32rm_CMOVGE64rm_CMOVL32rm_CMOVL64rm_CMOVLE32rm_CMOVLE64rm_CMOVNE32rm_CMOVNE64rm_CMOVNO32rm_CMOVNO64rm_CMOVNP32rm_CMOVNP64rm_CMOVNS32rm_CMOVNS64rm_CMOVO32rm_CMOVO64rm_CMOVP32rm_CMOVP64rm_CMOVS32rm_CMOVS64rm") 1, false, false, 918, 3,  3, 1,  1, 1}, // #605
  {DBGFIELD("XCHG16ar_XCHG16rr_XCHG32ar_XCHG32ar64_XCHG32rr_XCHG64ar_XCHG64rr_XCHG8rr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #606
  {DBGFIELD("XCHG16rm_XCHG32rm_XCHG64rm_XCHG8rm") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #607
  {DBGFIELD("XLAT")               1, false, false, 306, 2,  9, 1,  0, 0}, // #608
  {DBGFIELD("PUSH16rmm_PUSH32rmm") 1, false, false, 1151, 2,  2, 1,  0, 0}, // #609
  {DBGFIELD("PUSHF16_PUSHF32")    1, false, false, 466, 3,  2, 1,  0, 0}, // #610
  {DBGFIELD("PUSHA16_PUSHA32")    1, false, false, 466, 3,  2, 1,  0, 0}, // #611
  {DBGFIELD("POP16rmm_POP32rmm")  1, false, false, 1151, 2,  2, 1,  0, 0}, // #612
  {DBGFIELD("POPF16")             1, false, false, 306, 2,  9, 1,  0, 0}, // #613
  {DBGFIELD("POPF32")             1, false, false, 306, 2,  9, 1,  0, 0}, // #614
  {DBGFIELD("POPA16_POPA32")      1, false, false, 306, 2,  9, 1,  0, 0}, // #615
  {DBGFIELD("LAHF_SAHF")          1, false, false, 108, 2,  2, 1,  0, 0}, // #616
  {DBGFIELD("BSWAP32r")           1, false, false, 108, 2,  2, 1,  0, 0}, // #617
  {DBGFIELD("BSWAP64r")           1, false, false, 108, 2,  2, 1,  0, 0}, // #618
  {DBGFIELD("MOVBE16rm_MOVBE64rm") 1, false, false, 918, 3,  3, 1,  0, 0}, // #619
  {DBGFIELD("MOVBE32rm")          1, false, false, 918, 3,  3, 1,  0, 0}, // #620
  {DBGFIELD("MOVBE16mr")          1, false, false, 466, 3,  2, 1,  0, 0}, // #621
  {DBGFIELD("MOVBE32mr")          1, false, false, 466, 3,  2, 1,  0, 0}, // #622
  {DBGFIELD("MOVBE64mr")          1, false, false, 466, 3,  2, 1,  0, 0}, // #623
  {DBGFIELD("ADD16mi_ADD16mi8_ADD16mr_ADD32mi_ADD32mi8_ADD32mr_ADD64mi32_ADD64mi8_ADD64mr_ADD8mi_ADD8mi8_ADD8mr_SUB16mi_SUB16mi8_SUB16mr_SUB32mi_SUB32mi8_SUB32mr_SUB64mi32_SUB64mi8_SUB64mr_SUB8mi_SUB8mi8_SUB8mr") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #624
  {DBGFIELD("ADC16ri_ADC16ri8_ADC16rr_ADC16rr_REV_ADC32ri_ADC32ri8_ADC32rr_ADC32rr_REV_ADC64ri32_ADC64ri8_ADC64rr_ADC64rr_REV_ADC8ri_ADC8ri8_ADC8rr_ADC8rr_REV_SBB16ri_SBB16ri8_SBB16rr_SBB16rr_REV_SBB32ri_SBB32ri8_SBB32rr_SBB32rr_REV_SBB64ri32_SBB64ri8_SBB64rr_SBB64rr_REV_SBB8ri_SBB8ri8_SBB8rr_SBB8rr_REV") 1, false, false, 108, 2,  2, 1,  0, 0}, // #625
  {DBGFIELD("ADC16rm_ADC32rm_ADC64rm_ADC8rm_SBB16rm_SBB32rm_SBB64rm_SBB8rm") 1, false, false, 918, 3,  3, 1,  1, 1}, // #626
  {DBGFIELD("ADC16mi_ADC16mi8_ADC16mr_ADC32mi_ADC32mi8_ADC32mr_ADC64mi32_ADC64mi8_ADC64mr_ADC8mi_ADC8mi8_ADC8mr_SBB16mi_SBB16mi8_SBB16mr_SBB32mi_SBB32mi8_SBB32mr_SBB64mi32_SBB64mi8_SBB64mr_SBB8mi_SBB8mi8_SBB8mr") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #627
  {DBGFIELD("DEC16m_DEC32m_DEC64m_DEC8m_INC16m_INC32m_INC64m_INC8m_NEG16m_NEG32m_NEG64m_NEG8m_NOT16m_NOT32m_NOT64m_NOT8m") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #628
  {DBGFIELD("IMUL16r_IMUL16rr")   1, false, false, 1062, 4,  6, 1,  0, 0}, // #629
  {DBGFIELD("IMUL16rm")           1, false, false, 1057, 5,  5, 1,  1, 1}, // #630
  {DBGFIELD("IMUL16rmi_IMUL16rmi8") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #631
  {DBGFIELD("IMUL16rri_IMUL16rri8") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #632
  {DBGFIELD("MUL16r")             1, false, false, 1062, 4,  6, 1,  0, 0}, // #633
  {DBGFIELD("IMUL16m")            1, false, false, 1057, 5,  5, 1,  2, 2}, // #634
  {DBGFIELD("MUL16m")             1, false, false, 1057, 5,  5, 1,  2, 2}, // #635
  {DBGFIELD("IMUL32r_IMUL32rr")   1, false, false, 1062, 4,  6, 1,  0, 0}, // #636
  {DBGFIELD("IMUL32rm")           1, false, false, 1057, 5,  5, 1,  1, 1}, // #637
  {DBGFIELD("IMUL32rmi_IMUL32rmi8") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #638
  {DBGFIELD("IMUL32rri_IMUL32rri8") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #639
  {DBGFIELD("MUL32r")             1, false, false, 1062, 4,  6, 1,  0, 0}, // #640
  {DBGFIELD("IMUL32m")            1, false, false, 1057, 5,  5, 1,  2, 2}, // #641
  {DBGFIELD("MUL32m")             1, false, false, 1057, 5,  5, 1,  2, 2}, // #642
  {DBGFIELD("IMUL64r_IMUL64rr")   1, false, false, 1062, 4,  6, 1,  0, 0}, // #643
  {DBGFIELD("IMUL64rm")           1, false, false, 1057, 5,  5, 1,  1, 1}, // #644
  {DBGFIELD("IMUL64rmi32_IMUL64rmi8") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #645
  {DBGFIELD("IMUL64rri32_IMUL64rri8") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #646
  {DBGFIELD("MUL64r")             1, false, false, 1062, 4,  6, 1,  0, 0}, // #647
  {DBGFIELD("IMUL64m")            1, false, false, 1057, 5,  5, 1,  2, 2}, // #648
  {DBGFIELD("MUL64m")             1, false, false, 1057, 5,  5, 1,  2, 2}, // #649
  {DBGFIELD("MULX32rr")           2, false, false, 1062, 4, 17, 2,  0, 0}, // #650
  {DBGFIELD("MULX32rm")           2, false, false, 1057, 5,  5, 2,  0, 0}, // #651
  {DBGFIELD("MULX64rr")           2, false, false, 1062, 4, 17, 2,  0, 0}, // #652
  {DBGFIELD("MULX64rm")           2, false, false, 1057, 5,  5, 2,  0, 0}, // #653
  {DBGFIELD("DIV8r")              1, false, false, 1098, 5, 12, 1,  0, 0}, // #654
  {DBGFIELD("DIV16r")             1, false, false, 1098, 5, 12, 1,  0, 0}, // #655
  {DBGFIELD("DIV32r")             1, false, false, 1098, 5, 12, 1,  0, 0}, // #656
  {DBGFIELD("DIV64r")             1, false, false, 1098, 5, 12, 1,  0, 0}, // #657
  {DBGFIELD("IDIV8r")             1, false, false, 1098, 5, 12, 1,  0, 0}, // #658
  {DBGFIELD("IDIV16r")            1, false, false, 1098, 5, 12, 1,  0, 0}, // #659
  {DBGFIELD("IDIV32r")            1, false, false, 1098, 5, 12, 1,  0, 0}, // #660
  {DBGFIELD("IDIV64r")            1, false, false, 1098, 5, 12, 1,  0, 0}, // #661
  {DBGFIELD("AND16mi_AND16mi8_AND16mr_AND32mi_AND32mi8_AND32mr_AND64mi32_AND64mi8_AND64mr_AND8mi_AND8mi8_AND8mr_OR16mi_OR16mi8_OR16mr_OR32mi_OR32mi8_OR32mr_OR64mi32_OR64mi8_OR64mr_OR8mi_OR8mi8_OR8mr_XOR16mi_XOR16mi8_XOR16mr_XOR32mi_XOR32mi8_XOR32mr_XOR64mi32_XOR64mi8_XOR64mr_XOR8mi_XOR8mi8_XOR8mr") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #662
  {DBGFIELD("OR32mrLocked")       2, false, false, 1053, 4,  3, 2,  0, 0}, // #663
  {DBGFIELD("SAR16m1_SAR16mi_SAR32m1_SAR32mi_SAR64m1_SAR64mi_SAR8m1_SAR8mi_SHL16m1_SHL16mi_SHL32m1_SHL32mi_SHL64m1_SHL64mi_SHL8m1_SHL8mi_SHR16m1_SHR16mi_SHR32m1_SHR32mi_SHR64m1_SHR64mi_SHR8m1_SHR8mi") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #664
  {DBGFIELD("SAR16rCL_SAR32rCL_SAR64rCL_SAR8rCL_SHL16rCL_SHL32rCL_SHL64rCL_SHL8rCL_SHR16rCL_SHR32rCL_SHR64rCL_SHR8rCL") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #665
  {DBGFIELD("SAR16mCL_SAR32mCL_SAR64mCL_SAR8mCL_SHL16mCL_SHL32mCL_SHL64mCL_SHL8mCL_SHR16mCL_SHR32mCL_SHR64mCL_SHR8mCL") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #666
  {DBGFIELD("ROL16r1_ROL32r1_ROL64r1_ROL8r1_ROR16r1_ROR32r1_ROR64r1_ROR8r1") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #667
  {DBGFIELD("ROL16mi_ROL32mi_ROL64mi_ROL8mi_ROR16mi_ROR32mi_ROR64mi_ROR8mi") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #668
  {DBGFIELD("ROL16rCL_ROL32rCL_ROL64rCL_ROL8rCL_ROR16rCL_ROR32rCL_ROR64rCL_ROR8rCL") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #669
  {DBGFIELD("ROL16mCL_ROL32mCL_ROL64mCL_ROL8mCL_ROR16mCL_ROR32mCL_ROR64mCL_ROR8mCL") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #670
  {DBGFIELD("RCL16r1_RCL32r1_RCL64r1_RCL8r1_RCR16r1_RCR32r1_RCR64r1_RCR8r1") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #671
  {DBGFIELD("RCL16m1_RCL32m1_RCL64m1_RCL8m1_RCR16m1_RCR32m1_RCR64m1_RCR8m1") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #672
  {DBGFIELD("RCL16rCL_RCL16ri_RCL32rCL_RCL32ri_RCL64rCL_RCL64ri_RCL8rCL_RCL8ri_RCR16rCL_RCR16ri_RCR32rCL_RCR32ri_RCR64rCL_RCR64ri_RCR8rCL_RCR8ri") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #673
  {DBGFIELD("RCL16mCL_RCL16mi_RCL32mCL_RCL32mi_RCL64mCL_RCL64mi_RCL8mCL_RCL8mi_RCR16mCL_RCR16mi_RCR32mCL_RCR32mi_RCR64mCL_RCR64mi_RCR8mCL_RCR8mi") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #674
  {DBGFIELD("SHLD16rri8_SHRD16rri8") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #675
  {DBGFIELD("SHLD32rri8_SHRD32rri8") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #676
  {DBGFIELD("SHLD64rri8_SHRD64rri8") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #677
  {DBGFIELD("SHLD16mri8_SHRD16mri8") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #678
  {DBGFIELD("SHLD32mri8_SHRD32mri8") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #679
  {DBGFIELD("SHLD64mri8_SHRD64mri8") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #680
  {DBGFIELD("SHLD16rrCL")         1, false, false, 1078, 3,  2, 1,  0, 0}, // #681
  {DBGFIELD("SHLD32rrCL")         1, false, false, 1078, 3,  2, 1,  0, 0}, // #682
  {DBGFIELD("SHLD64rrCL")         1, false, false, 1078, 3,  2, 1,  0, 0}, // #683
  {DBGFIELD("SHRD16rrCL")         1, false, false, 1078, 3,  2, 1,  0, 0}, // #684
  {DBGFIELD("SHRD32rrCL")         1, false, false, 1078, 3,  2, 1,  0, 0}, // #685
  {DBGFIELD("SHRD64rrCL")         1, false, false, 1078, 3,  2, 1,  0, 0}, // #686
  {DBGFIELD("SHLD16mrCL_SHRD16mrCL") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #687
  {DBGFIELD("SHLD32mrCL_SHRD32mrCL") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #688
  {DBGFIELD("SHLD64mrCL_SHRD64mrCL") 2, false, false, 1103, 5,  3, 2,  0, 0}, // #689
  {DBGFIELD("BT16ri8_BT32ri8_BT64ri8") 1, false, false, 108, 2,  2, 1,  0, 0}, // #690
  {DBGFIELD("BT16rr_BT32rr_BT64rr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #691
  {DBGFIELD("BT16mr_BT32mr_BT64mr") 1, false, false, 918, 3,  3, 1,  0, 0}, // #692
  {DBGFIELD("BT16mi8_BT32mi8_BT64mi8") 1, false, false, 108, 2,  2, 1,  0, 0}, // #693
  {DBGFIELD("BTC16ri8_BTC32ri8_BTC64ri8_BTR16ri8_BTR32ri8_BTR64ri8_BTS16ri8_BTS32ri8_BTS64ri8") 1, false, false, 108, 2,  2, 1,  0, 0}, // #694
  {DBGFIELD("BTC16rr_BTC32rr_BTC64rr_BTR16rr_BTR32rr_BTS16rr_BTS32rr_BTS64rr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #695
  {DBGFIELD("BTR64rr")            1, false, false, 108, 2,  2, 1,  0, 0}, // #696
  {DBGFIELD("BTC16mr_BTC32mr_BTC64mr_BTR16mr_BTR32mr_BTR64mr_BTS16mr_BTS32mr_BTS64mr") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #697
  {DBGFIELD("BTC16mi8_BTC32mi8_BTC64mi8_BTR16mi8_BTR32mi8_BTR64mi8_BTS16mi8_BTS32mi8_BTS64mi8") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #698
  {DBGFIELD("BSF16rr_BSF32rr_BSF64rr_BSR16rr_BSR32rr_BSR64rr") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #699
  {DBGFIELD("BSF16rm_BSF32rm_BSF64rm_BSR16rm_BSR32rm_BSR64rm") 1, false, false, 1074, 4,  3, 1,  0, 0}, // #700
  {DBGFIELD("SETAEr_SETAr_SETBEr_SETBr_SETEr_SETGEr_SETGr_SETLEr_SETLr_SETNEr_SETNOr_SETNPr_SETNSr_SETOr_SETPr_SETSr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #701
  {DBGFIELD("SETAEm_SETAm_SETBEm_SETBm_SETEm_SETGEm_SETGm_SETLEm_SETLm_SETNEm_SETNOm_SETNPm_SETNSm_SETOm_SETPm_SETSm") 2, false, false, 1053, 4, 21, 2,  0, 0}, // #702
  {DBGFIELD("CLD")                1, false, false, 108, 2,  2, 1,  0, 0}, // #703
  {DBGFIELD("STD")                1, false, false, 108, 2,  2, 1,  0, 0}, // #704
  {DBGFIELD("TZCNT16rr_TZCNT32rr_TZCNT64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("TZCNT16rm_TZCNT32rm_TZCNT64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("ANDN32rr_ANDN64rr")  1, false, false, 108, 2,  2, 1,  0, 0}, // #707
  {DBGFIELD("ANDN32rm_ANDN64rm")  1, false, false, 918, 3,  3, 1,  1, 1}, // #708
  {DBGFIELD("BLSI32rr_BLSI64rr_BLSMSK32rr_BLSMSK64rr_BLSR32rr_BLSR64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("BLSI32rm_BLSI64rm_BLSMSK32rm_BLSMSK64rm_BLSR32rm_BLSR64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("BEXTR32rr_BEXTR64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("BEXTR32rm_BEXTR64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("BZHI32rr_BZHI64rr")  0, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("BZHI32rm_BZHI64rm")  0, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("PDEP32rr_PDEP64rr_PEXT32rr_PEXT64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("PDEP32rm_PDEP64rm_PEXT32rm_PEXT64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("JCXZ_JRCXZ")         1, false, false, 1087, 5,  2, 1,  0, 0}, // #717
  {DBGFIELD("LOOP")               1, false, false, 1087, 5,  2, 1,  0, 0}, // #718
  {DBGFIELD("LOOPE")              1, false, false, 1087, 5,  2, 1,  0, 0}, // #719
  {DBGFIELD("LOOPNE")             1, false, false, 1087, 5,  2, 1,  0, 0}, // #720
  {DBGFIELD("CALL16r_CALL32r")    1, false, false, 1087, 5,  2, 1,  0, 0}, // #721
  {DBGFIELD("CALL16m_CALL32m")    1, false, false, 1081, 6,  3, 1,  0, 0}, // #722
  {DBGFIELD("LRETL_LRETQ_LRETW_RETL_RETQ_RETW") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #723
  {DBGFIELD("LRETIL_LRETIQ_LRETIW") 1, false, false, 1081, 6,  3, 1,  0, 0}, // #724
  {DBGFIELD("RETIL_RETIQ_RETIW")  1, false, false, 1081, 6,  3, 1,  0, 0}, // #725
  {DBGFIELD("BOUNDS16rm_BOUNDS32rm") 1, false, false, 108, 2,  1, 1,  0, 0}, // #726
  {DBGFIELD("INTO")               1, false, false, 108, 2,  1, 1,  0, 0}, // #727
  {DBGFIELD("LODSB_LODSW")        1, false, false, 108, 2,  1, 1,  0, 0}, // #728
  {DBGFIELD("LODSL_LODSQ")        1, false, false, 108, 2,  1, 1,  0, 0}, // #729
  {DBGFIELD("STOSB_STOSL_STOSQ_STOSW") 1, false, false, 108, 2,  1, 1,  0, 0}, // #730
  {DBGFIELD("MOVSB_MOVSL_MOVSQ_MOVSW") 1, false, false, 108, 2,  1, 1,  0, 0}, // #731
  {DBGFIELD("MOVSLDUPrm")         1, false, false, 306, 2,  9, 1,  0, 0}, // #732
  {DBGFIELD("MOVSLDUPrr")         1, false, false, 1087, 5,  2, 1,  0, 0}, // #733
  {DBGFIELD("SCASB_SCASL_SCASQ_SCASW") 1, false, false, 108, 2,  1, 1,  0, 0}, // #734
  {DBGFIELD("CMPSB_CMPSL_CMPSQ_CMPSW") 1, false, false, 108, 2,  1, 1,  0, 0}, // #735
  {DBGFIELD("XADD16rm_XADD32rm_XADD64rm_XADD8rm") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #736
  {DBGFIELD("CMPXCHG16rm_CMPXCHG32rm_CMPXCHG64rm") 2, false, false, 1053, 4,  3, 2,  0, 0}, // #737
  {DBGFIELD("CMPXCHG8rm")         2, false, false, 1053, 4,  3, 2,  0, 0}, // #738
  {DBGFIELD("CMPXCHG8B")          2, false, false, 1053, 4,  3, 2,  0, 0}, // #739
  {DBGFIELD("CMPXCHG16B")         2, false, false, 1053, 4,  3, 2,  0, 0}, // #740
  {DBGFIELD("PAUSE")              1, false, false,  0, 0,  2, 1,  0, 0}, // #741
  {DBGFIELD("LEAVE_LEAVE64")      1, false, false, 108, 2,  2, 1,  0, 0}, // #742
  {DBGFIELD("XGETBV")             1, false, false, 108, 2,  1, 1,  0, 0}, // #743
  {DBGFIELD("RDTSC")              1, false, false, 108, 2,  1, 1,  0, 0}, // #744
  {DBGFIELD("RDTSCP")             1, false, false, 108, 2,  1, 1,  0, 0}, // #745
  {DBGFIELD("RDPMC")              1, false, false, 108, 2,  1, 1,  0, 0}, // #746
  {DBGFIELD("RDRAND16r_RDRAND32r_RDRAND64r") 0, false, false,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("LD_Frr")             1, false, false, 108, 2,  2, 1,  0, 0}, // #748
  {DBGFIELD("LD_F80m")            1, false, false, 306, 2,  9, 1,  0, 0}, // #749
  {DBGFIELD("FBLDm")              0, false, false,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("ST_FPrr_ST_Frr")     1, false, false, 108, 2,  2, 1,  0, 0}, // #751
  {DBGFIELD("ST_FP80m")           1, false, false, 466, 3,  2, 1,  0, 0}, // #752
  {DBGFIELD("FBSTPm")             0, false, false,  0, 0,  0, 0,  0, 0}, // #753
  {DBGFIELD("XCH_F")              1, false, false, 108, 2,  2, 1,  0, 0}, // #754
  {DBGFIELD("ILD_F16m_ILD_F32m_ILD_F64m") 1, false, false, 306, 2,  9, 1,  0, 0}, // #755
  {DBGFIELD("IST_F16m_IST_F32m_IST_FP16m_IST_FP32m") 1, false, false, 466, 3,  2, 1,  0, 0}, // #756
  {DBGFIELD("LD_F0")              1, false, false,  0, 0,  2, 1,  0, 0}, // #757
  {DBGFIELD("LD_F1")              1, false, false,  0, 0,  2, 1,  0, 0}, // #758
  {DBGFIELD("FLDPI")              1, false, false, 108, 2,  1, 1,  0, 0}, // #759
  {DBGFIELD("CMOVBE_F_CMOVBE_Fp32_CMOVBE_Fp64_CMOVBE_Fp80_CMOVB_F_CMOVB_Fp32_CMOVB_Fp64_CMOVB_Fp80_CMOVNBE_F_CMOVNBE_Fp32_CMOVNBE_Fp64_CMOVNBE_Fp80_CMOVNB_F_CMOVNB_Fp32_CMOVNB_Fp64_CMOVNB_Fp80_CMOVNE_F_CMOVNE_Fp32_CMOVNE_Fp64_CMOVNE_Fp80_CMOVNP_F_CMOVNP_Fp32_CMOVNP_Fp64_CMOVNP_Fp80_CMOVP_F_CMOVP_Fp32_CMOVP_Fp64_CMOVP_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #760
  {DBGFIELD("FNSTSW16r")          1, false, false, 108, 2,  2, 1,  0, 0}, // #761
  {DBGFIELD("FNSTSWm")            0, false, false,  0, 0,  0, 0,  0, 0}, // #762
  {DBGFIELD("FLDCW16m")           1, false, false, 306, 2,  9, 1,  0, 0}, // #763
  {DBGFIELD("FNSTCW16m")          1, false, false, 108, 2,  2, 1,  0, 0}, // #764
  {DBGFIELD("FDECSTP_FINCSTP")    1, false, false, 108, 2,  1, 1,  0, 0}, // #765
  {DBGFIELD("FFREE_FFREEP")       1, false, false, 108, 2,  1, 1,  0, 0}, // #766
  {DBGFIELD("FSAVEm")             0, false, false,  0, 0,  0, 0,  0, 0}, // #767
  {DBGFIELD("FRSTORm")            0, false, false,  0, 0,  0, 0,  0, 0}, // #768
  {DBGFIELD("ABS_F_ABS_Fp32_ABS_Fp64_ABS_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #769
  {DBGFIELD("CHS_F_CHS_Fp32_CHS_Fp64_CHS_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #770
  {DBGFIELD("COMP_FST0r_COM_FST0r") 0, false, false,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("UCOM_FPr_UCOM_Fr")   1, false, false, 1062, 4,  6, 1,  0, 0}, // #772
  {DBGFIELD("FCOM32m_FCOM64m_FCOMP32m_FCOMP64m") 0, false, false,  0, 0,  0, 0,  0, 0}, // #773
  {DBGFIELD("FCOMPP")             1, false, false, 108, 2,  1, 1,  0, 0}, // #774
  {DBGFIELD("UCOM_FPPr")          1, false, false, 1062, 4,  6, 1,  0, 0}, // #775
  {DBGFIELD("COM_FIPr_COM_FIr")   1, false, false, 1062, 4,  6, 1,  0, 0}, // #776
  {DBGFIELD("UCOM_FIPr_UCOM_FIr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #777
  {DBGFIELD("FICOM16m_FICOM32m_FICOMP16m_FICOMP32m") 0, false, false,  0, 0,  0, 0,  0, 0}, // #778
  {DBGFIELD("TST_F_TST_Fp32_TST_Fp64_TST_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #779
  {DBGFIELD("FXAM")               1, false, false, 108, 2,  1, 1,  0, 0}, // #780
  {DBGFIELD("FPREM")              1, false, false, 108, 2,  1, 1,  0, 0}, // #781
  {DBGFIELD("FPREM1")             1, false, false, 108, 2,  1, 1,  0, 0}, // #782
  {DBGFIELD("FRNDINT")            1, false, false, 108, 2,  1, 1,  0, 0}, // #783
  {DBGFIELD("FSCALE")             1, false, false, 108, 2,  1, 1,  0, 0}, // #784
  {DBGFIELD("FXTRACT")            1, false, false, 108, 2,  1, 1,  0, 0}, // #785
  {DBGFIELD("FNOP")               1, false, false, 108, 2,  1, 1,  0, 0}, // #786
  {DBGFIELD("WAIT")               1, false, false, 108, 2,  1, 1,  0, 0}, // #787
  {DBGFIELD("FNCLEX")             1, false, false, 108, 2,  1, 1,  0, 0}, // #788
  {DBGFIELD("FNINIT")             1, false, false, 108, 2,  1, 1,  0, 0}, // #789
  {DBGFIELD("MMX_MOVD64from64rr_MMX_MOVD64grr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #790
  {DBGFIELD("MOVPDI2DIrr_VMOVPDI2DIrr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #791
  {DBGFIELD("MMX_MOVD64rr_MMX_MOVD64to64rr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #792
  {DBGFIELD("MOVDI2PDIrr_VMOVDI2PDIrr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #793
  {DBGFIELD("VMOVPQIto64rr")      1, false, false, 108, 2,  2, 1,  0, 0}, // #794
  {DBGFIELD("VMOV64toPQIrr")      1, false, false, 108, 2,  2, 1,  0, 0}, // #795
  {DBGFIELD("MMX_MOVQ64rr_MMX_MOVQ64rr_REV") 1, false, false, 108, 2,  2, 1,  0, 0}, // #796
  {DBGFIELD("MOVDQArr_MOVDQArr_REV_VMOVDQAYrr_VMOVDQAYrr_REV_VMOVDQArr_VMOVDQArr_REV") 1, false, false, 108, 2,  2, 1,  0, 0}, // #797
  {DBGFIELD("MOVDQUrr_MOVDQUrr_REV_VMOVDQUYrr_VMOVDQUYrr_REV_VMOVDQUrr_VMOVDQUrr_REV") 1, false, false, 108, 2,  2, 1,  0, 0}, // #798
  {DBGFIELD("MMX_MOVDQ2Qrr")      1, false, false, 108, 2,  2, 1,  0, 0}, // #799
  {DBGFIELD("MMX_MOVQ2DQrr")      1, false, false, 108, 2,  2, 1,  0, 0}, // #800
  {DBGFIELD("MMX_PACKSSDWirr_MMX_PACKSSWBirr_MMX_PACKUSWBirr") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #801
  {DBGFIELD("MMX_PACKSSDWirm_MMX_PACKSSWBirm_MMX_PACKUSWBirm") 1, false, false, 917, 4,  3, 1,  1, 1}, // #802
  {DBGFIELD("VPMOVSXBQYrr_VPMOVSXBWYrr_VPMOVSXDQYrr_VPMOVZXBQYrr_VPMOVZXBWYrr_VPMOVZXDQYrr") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #803
  {DBGFIELD("PBLENDWrri")         1, false, false, 1063, 3,  2, 1,  0, 0}, // #804
  {DBGFIELD("VPBLENDWYrri_VPBLENDWrri") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #805
  {DBGFIELD("PBLENDWrmi")         1, false, false, 917, 4,  3, 1,  1, 1}, // #806
  {DBGFIELD("VPBLENDWYrmi_VPBLENDWrmi") 1, false, false, 917, 4,  3, 1,  1, 1}, // #807
  {DBGFIELD("VPBLENDDYrri_VPBLENDDrri") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #808
  {DBGFIELD("VPBLENDDYrmi_VPBLENDDrmi") 1, false, false, 917, 4,  3, 1,  1, 1}, // #809
  {DBGFIELD("MMX_MASKMOVQ_MMX_MASKMOVQ64") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #810
  {DBGFIELD("MASKMOVDQU_MASKMOVDQU64_VMASKMOVDQU_VMASKMOVDQU64") 1, false, false, 466, 3,  2, 1,  0, 0}, // #811
  {DBGFIELD("VPMASKMOVDYrm_VPMASKMOVDrm_VPMASKMOVQYrm_VPMASKMOVQrm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #812
  {DBGFIELD("VPMASKMOVDYmr_VPMASKMOVDmr_VPMASKMOVQYmr_VPMASKMOVQmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #813
  {DBGFIELD("MMX_PMOVMSKBrr")     0, false, false,  0, 0,  0, 0,  0, 0}, // #814
  {DBGFIELD("PMOVMSKBrr_VPMOVMSKBrr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #815
  {DBGFIELD("VPMOVMSKBYrr")       1, false, false, 108, 2,  2, 1,  0, 0}, // #816
  {DBGFIELD("MMX_PEXTRWirri")     1, false, false, 1063, 3,  2, 1,  0, 0}, // #817
  {DBGFIELD("PEXTRBrr_PEXTRDrr_PEXTRQrr_PEXTRWrr_REV") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #818
  {DBGFIELD("PEXTRBmr_PEXTRDmr_PEXTRQmr_PEXTRWmr") 2, false, false, 1146, 5,  3, 2,  0, 0}, // #819
  {DBGFIELD("VPBROADCASTBrm_VPBROADCASTWrm") 1, false, false, 306, 2,  9, 1,  0, 0}, // #820
  {DBGFIELD("VPBROADCASTBYrm_VPBROADCASTWYrm") 1, false, false, 306, 2,  9, 1,  0, 0}, // #821
  {DBGFIELD("VPGATHERDDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #822
  {DBGFIELD("VPGATHERDDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #823
  {DBGFIELD("VPGATHERQDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #824
  {DBGFIELD("VPGATHERQDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #825
  {DBGFIELD("VPGATHERDQrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #826
  {DBGFIELD("VPGATHERDQYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #827
  {DBGFIELD("VPGATHERQQrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #828
  {DBGFIELD("VPGATHERQQYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #829
  {DBGFIELD("MMX_PHADDSWrr64_MMX_PHADDWrr64_MMX_PHSUBSWrr64_MMX_PHSUBWrr64") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #830
  {DBGFIELD("MMX_PHADDrr64_MMX_PHSUBDrr64") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #831
  {DBGFIELD("PHADDDrr_PHSUBDrr_VPHADDDrr_VPHSUBDrr") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #832
  {DBGFIELD("PHADDSWrr128_PHSUBSWrr128_VPHADDSWrr128_VPHSUBSWrr128") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #833
  {DBGFIELD("PHADDWrr_PHSUBWrr_VPHADDDYrr_VPHADDWYrr_VPHADDWrr_VPHSUBDYrr_VPHSUBWYrr_VPHSUBWrr") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #834
  {DBGFIELD("VPHADDSWrr256_VPHSUBSWrr256") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #835
  {DBGFIELD("MMX_PHADDSWrm64_MMX_PHADDWrm64_MMX_PHSUBSWrm64_MMX_PHSUBWrm64") 1, false, false, 917, 4,  3, 1,  1, 1}, // #836
  {DBGFIELD("MMX_PHADDrm64_MMX_PHSUBDrm64") 1, false, false, 917, 4,  3, 1,  1, 1}, // #837
  {DBGFIELD("PHADDDrm_PHSUBDrm_VPHADDDrm_VPHSUBDrm") 1, false, false, 917, 4,  3, 1,  1, 1}, // #838
  {DBGFIELD("PHADDSWrm128_PHSUBSWrm128_VPHADDSWrm128_VPHSUBSWrm128") 1, false, false, 917, 4,  3, 1,  1, 1}, // #839
  {DBGFIELD("PHADDWrm_PHSUBWrm_VPHADDDYrm_VPHADDWYrm_VPHADDWrm_VPHSUBDYrm_VPHSUBWYrm_VPHSUBWrm") 1, false, false, 917, 4,  3, 1,  1, 1}, // #840
  {DBGFIELD("VPHADDSWrm256_VPHSUBSWrm256") 1, false, false, 917, 4,  3, 1,  1, 1}, // #841
  {DBGFIELD("PCMPGTQrr_VPCMPGTQYrr_VPCMPGTQrr") 1, false, false, 1063, 3,  2, 1,  0, 0}, // #842
  {DBGFIELD("PCMPGTQrm_VPCMPGTQYrm_VPCMPGTQrm") 1, false, false, 917, 4,  3, 1,  1, 1}, // #843
  {DBGFIELD("PMULLDrr_VPMULLDYrr_VPMULLDrr") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #844
  {DBGFIELD("PMULLDrm_VPMULLDYrm_VPMULLDrm") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #845
  {DBGFIELD("PTESTrr_VPTESTYrr_VPTESTrr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #846
  {DBGFIELD("PTESTrm_VPTESTYrm_VPTESTrm") 1, false, false, 918, 3,  3, 1,  1, 1}, // #847
  {DBGFIELD("PSLLDrr_PSLLQrr_PSLLWrr_PSRADrr_PSRAWrr_PSRLDrr_PSRLQrr_PSRLWrr_VPSLLDYrr_VPSLLDrr_VPSLLQYrr_VPSLLQrr_VPSLLWYrr_VPSLLWrr_VPSRADYrr_VPSRADrr_VPSRAWYrr_VPSRAWrr_VPSRLDYrr_VPSRLDrr_VPSRLQYrr_VPSRLQrr_VPSRLWYrr_VPSRLWrr") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #848
  {DBGFIELD("PSLLDQri_PSRLDQri_VPSLLDQYri_VPSLLDQri_VPSRLDQYri_VPSRLDQri") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #849
  {DBGFIELD("MMX_EMMS")           0, false, false,  0, 0,  0, 0,  0, 0}, // #850
  {DBGFIELD("MOVMSKPDrr_MOVMSKPSrr_VMOVMSKPDrr_VMOVMSKPSrr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #851
  {DBGFIELD("VMOVMSKPDYrr_VMOVMSKPSYrr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #852
  {DBGFIELD("VPERM2F128rr")       1, false, false, 1087, 5,  2, 1,  0, 0}, // #853
  {DBGFIELD("VPERM2F128rm")       1, false, false, 1081, 6,  3, 1,  1, 1}, // #854
  {DBGFIELD("BLENDVPDrr0_BLENDVPSrr0") 1, false, false, 1078, 3,  2, 1,  0, 0}, // #855
  {DBGFIELD("BLENDVPDrm0_BLENDVPSrm0") 1, false, false, 1074, 4,  3, 1,  1, 1}, // #856
  {DBGFIELD("VBROADCASTF128")     1, false, false, 1081, 6,  3, 1,  0, 0}, // #857
  {DBGFIELD("EXTRACTPSrr")        1, false, false, 1078, 3,  2, 1,  0, 0}, // #858
  {DBGFIELD("VEXTRACTPSrr")       1, false, false, 1078, 3,  2, 1,  0, 0}, // #859
  {DBGFIELD("EXTRACTPSmr")        2, false, false, 1103, 5,  3, 2,  0, 0}, // #860
  {DBGFIELD("VEXTRACTPSmr")       2, false, false, 1103, 5,  3, 2,  0, 0}, // #861
  {DBGFIELD("VEXTRACTF128rr")     1, false, false, 1087, 5,  2, 1,  0, 0}, // #862
  {DBGFIELD("VEXTRACTF128mr")     1, false, false, 466, 3,  2, 1,  0, 0}, // #863
  {DBGFIELD("VINSERTF128rr")      1, false, false, 1087, 5,  2, 1,  0, 0}, // #864
  {DBGFIELD("VINSERTF128rm")      1, false, false, 1081, 6,  3, 1,  1, 1}, // #865
  {DBGFIELD("VMASKMOVPDYrm_VMASKMOVPDrm_VMASKMOVPSYrm_VMASKMOVPSrm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #866
  {DBGFIELD("VMASKMOVPDmr_VMASKMOVPSmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #867
  {DBGFIELD("VMASKMOVPDYmr_VMASKMOVPSYmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #868
  {DBGFIELD("VGATHERDPSrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #869
  {DBGFIELD("VGATHERDPSYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #870
  {DBGFIELD("VGATHERQPSrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #871
  {DBGFIELD("VGATHERQPSYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #872
  {DBGFIELD("VGATHERDPDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #873
  {DBGFIELD("VGATHERDPDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #874
  {DBGFIELD("VGATHERQPDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #875
  {DBGFIELD("VGATHERQPDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #876
  {DBGFIELD("CVTPD2PSrr_VCVTPD2PSrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #877
  {DBGFIELD("CVTPD2PSrm_VCVTPD2PSrm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #878
  {DBGFIELD("VCVTPD2PSYrr")       1, false, false, 1062, 4,  6, 1,  0, 0}, // #879
  {DBGFIELD("VCVTPD2PSYrm")       1, false, false, 1057, 5,  5, 1,  0, 0}, // #880
  {DBGFIELD("CVTSD2SSrr_Int_CVTSD2SSrr_Int_VCVTSD2SSrr_VCVTSD2SSrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #881
  {DBGFIELD("CVTSD2SSrm")         1, false, false, 1057, 5,  5, 1,  0, 0}, // #882
  {DBGFIELD("Int_CVTSD2SSrm_Int_VCVTSD2SSrm_VCVTSD2SSrm") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #883
  {DBGFIELD("CVTPS2PDrr_VCVTPS2PDrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #884
  {DBGFIELD("CVTPS2PDrm_VCVTPS2PDYrm_VCVTPS2PDrm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #885
  {DBGFIELD("VCVTPS2PDYrr")       1, false, false, 1062, 4,  6, 1,  0, 0}, // #886
  {DBGFIELD("CVTSS2SDrr_Int_CVTSS2SDrr_Int_VCVTSS2SDrr_VCVTSS2SDrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #887
  {DBGFIELD("CVTSS2SDrm")         1, false, false, 1057, 5,  5, 1,  0, 0}, // #888
  {DBGFIELD("Int_CVTSS2SDrm_Int_VCVTSS2SDrm_VCVTSS2SDrm") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #889
  {DBGFIELD("CVTDQ2PDrr")         1, false, false, 1062, 4,  9, 1,  0, 0}, // #890
  {DBGFIELD("VCVTDQ2PDrr")        1, false, false, 1062, 4,  9, 1,  0, 0}, // #891
  {DBGFIELD("VCVTDQ2PDYrr")       1, false, false, 1062, 4,  9, 1,  0, 0}, // #892
  {DBGFIELD("CVTPD2DQrr_CVTTPD2DQrr_VCVTTPD2DQrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #893
  {DBGFIELD("VCVTPD2DQrr")        1, false, false, 1062, 4,  6, 1,  0, 0}, // #894
  {DBGFIELD("CVTPD2DQrm_CVTTPD2DQrm_VCVTTPD2DQrm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #895
  {DBGFIELD("VCVTPD2DQrm")        1, false, false, 1057, 5,  5, 1,  0, 0}, // #896
  {DBGFIELD("VCVTPD2DQYrr")       1, false, false, 1062, 4,  6, 1,  0, 0}, // #897
  {DBGFIELD("VCVTTPD2DQYrr")      1, false, false, 1062, 4,  6, 1,  0, 0}, // #898
  {DBGFIELD("VCVTPD2DQYrm")       1, false, false, 1057, 5,  5, 1,  0, 0}, // #899
  {DBGFIELD("VCVTTPD2DQYrm")      1, false, false, 1057, 5,  5, 1,  0, 0}, // #900
  {DBGFIELD("MMX_CVTPS2PIirr_MMX_CVTTPS2PIirr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #901
  {DBGFIELD("MMX_CVTPI2PDirr")    1, false, false, 1062, 4,  6, 1,  0, 0}, // #902
  {DBGFIELD("MMX_CVTPD2PIirr_MMX_CVTTPD2PIirr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #903
  {DBGFIELD("CVTSI2SS64rr_CVTSI2SSrr_Int_CVTSI2SS64rr_Int_CVTSI2SSrr_Int_VCVTSI2SS64rr_Int_VCVTSI2SSrr") 1, false, false, 1062, 4,  9, 1,  0, 0}, // #904
  {DBGFIELD("VCVTSI2SS64rr_VCVTSI2SSrr") 1, false, false, 1062, 4,  9, 1,  0, 0}, // #905
  {DBGFIELD("CVTSS2SI64rr_CVTTSS2SI64rr_Int_CVTTSS2SI64rr_Int_VCVTTSS2SI64rr_VCVTSS2SI64rr_VCVTTSS2SI64rr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #906
  {DBGFIELD("CVTSS2SIrr_CVTTSS2SIrr_Int_CVTTSS2SIrr_Int_VCVTTSS2SIrr_VCVTSS2SIrr_VCVTTSS2SIrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #907
  {DBGFIELD("CVTSS2SI64rm_CVTTSS2SI64rm_Int_CVTTSS2SI64rm_Int_VCVTTSS2SI64rm_VCVTSS2SI64rm_VCVTTSS2SI64rm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #908
  {DBGFIELD("CVTSS2SIrm_CVTTSS2SIrm_Int_CVTTSS2SIrm_Int_VCVTTSS2SIrm_VCVTSS2SIrm_VCVTTSS2SIrm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #909
  {DBGFIELD("CVTSD2SI64rr_CVTSD2SIrr_CVTTSD2SI64rr_CVTTSD2SIrr_Int_CVTTSD2SI64rr_Int_CVTTSD2SIrr_Int_VCVTTSD2SI64rr_Int_VCVTTSD2SIrr_VCVTSD2SI64rr_VCVTSD2SIrr_VCVTTSD2SI64rr_VCVTTSD2SIrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #910
  {DBGFIELD("CVTSD2SI64rm_CVTSD2SIrm_CVTTSD2SI64rm_CVTTSD2SIrm_Int_CVTTSD2SI64rm_Int_CVTTSD2SIrm_Int_VCVTTSD2SI64rm_Int_VCVTTSD2SIrm_VCVTSD2SI64rm_VCVTSD2SIrm_VCVTTSD2SI64rm_VCVTTSD2SIrm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #911
  {DBGFIELD("VCVTPS2PHYrr_VCVTPS2PHrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #912
  {DBGFIELD("VCVTPS2PHYmr_VCVTPS2PHmr") 2, false, false, 1166, 6, 25, 2,  0, 0}, // #913
  {DBGFIELD("VCVTPH2PSYrr_VCVTPH2PSrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #914
  {DBGFIELD("HADDPDrr_HADDPSrr_HSUBPDrr_HSUBPSrr_VHADDPDYrr_VHADDPDrr_VHADDPSYrr_VHADDPSrr_VHSUBPDYrr_VHSUBPDrr_VHSUBPSYrr_VHSUBPSrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #915
  {DBGFIELD("HADDPDrm_HADDPSrm_HSUBPDrm_HSUBPSrm_VHADDPDYrm_VHADDPDrm_VHADDPSYrm_VHADDPSrm_VHSUBPDYrm_VHSUBPDrm_VHSUBPSYrm_VHSUBPSrm") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #916
  {DBGFIELD("MULPDrr_VMULPDrr")   1, false, false, 1099, 4,  3, 1,  0, 0}, // #917
  {DBGFIELD("MULPSrr_VMULPSrr")   1, false, false, 1099, 4,  3, 1,  0, 0}, // #918
  {DBGFIELD("MULSDrr_MULSDrr_Int_VMULSDrr_VMULSDrr_Int") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #919
  {DBGFIELD("MULSSrr_MULSSrr_Int_VMULSSrr_VMULSSrr_Int") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #920
  {DBGFIELD("MULPDrm_MULPSrm_VMULPDrm_VMULPSrm") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #921
  {DBGFIELD("MULSDrm_MULSDrm_Int_MULSSrm_MULSSrm_Int_VMULSDrm_VMULSDrm_Int_VMULSSrm_VMULSSrm_Int") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #922
  {DBGFIELD("VDIVPSYrr")          1, false, false, 1099, 4, 14, 1,  0, 0}, // #923
  {DBGFIELD("VDIVPSYrm")          1, false, false, 1093, 5, 13, 1,  1, 1}, // #924
  {DBGFIELD("VDIVPDYrr")          1, false, false, 1099, 4, 14, 1,  0, 0}, // #925
  {DBGFIELD("VDIVPDYrm")          1, false, false, 1093, 5, 13, 1,  1, 1}, // #926
  {DBGFIELD("VRCPPSYr")           1, false, false, 1099, 4,  3, 1,  0, 0}, // #927
  {DBGFIELD("VRCPPSYm")           1, false, false, 1093, 5, 15, 1,  0, 0}, // #928
  {DBGFIELD("ROUNDPDr_ROUNDPSr_VROUNDPDr_VROUNDPSr_VROUNDYPDr_VROUNDYPSr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #929
  {DBGFIELD("ROUNDSDr_ROUNDSDr_Int_ROUNDSSr_ROUNDSSr_Int_VROUNDSDr_VROUNDSDr_Int_VROUNDSSr_VROUNDSSr_Int") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #930
  {DBGFIELD("ROUNDPDm_VROUNDPDm_VROUNDYPDm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #931
  {DBGFIELD("ROUNDPSm_VROUNDPSm_VROUNDYPSm") 1, false, false, 1057, 5,  5, 1,  0, 0}, // #932
  {DBGFIELD("ROUNDSDm_ROUNDSDm_Int_ROUNDSSm_ROUNDSSm_Int_VROUNDSDm_VROUNDSDm_Int_VROUNDSSm_VROUNDSSm_Int") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #933
  {DBGFIELD("DPPSrri_VDPPSYrri_VDPPSrri") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #934
  {DBGFIELD("DPPSrmi_VDPPSYrmi_VDPPSrmi") 1, false, false, 1057, 5,  5, 1,  1, 1}, // #935
  {DBGFIELD("DPPDrri")            1, false, false, 1062, 4,  6, 1,  0, 0}, // #936
  {DBGFIELD("VDPPDrri")           1, false, false, 1062, 4,  6, 1,  0, 0}, // #937
  {DBGFIELD("DPPDrmi_VDPPDrmi")   1, false, false, 1057, 5,  5, 1,  1, 1}, // #938
  {DBGFIELD("VFMADDPD4rr_VFMADDPD4rr_REV_VFMADDPS4rr_VFMADDPS4rr_REV_VFMADDSD4rr_VFMADDSD4rr_Int_VFMADDSD4rr_Int_REV_VFMADDSD4rr_REV_VFMADDSS4rr_VFMADDSS4rr_Int_VFMADDSS4rr_Int_REV_VFMADDSS4rr_REV_VFMSUBPD4rr_VFMSUBPD4rr_REV_VFMSUBPS4rr_VFMSUBPS4rr_REV_VFMSUBSD4rr_VFMSUBSD4rr_Int_VFMSUBSD4rr_Int_REV_VFMSUBSD4rr_REV_VFMSUBSS4rr_VFMSUBSS4rr_Int_VFMSUBSS4rr_Int_REV_VFMSUBSS4rr_REV_VFNMADDPD4rr_VFNMADDPD4rr_REV_VFNMADDPS4rr_VFNMADDPS4rr_REV_VFNMADDSD4rr_VFNMADDSD4rr_Int_VFNMADDSD4rr_Int_REV_VFNMADDSD4rr_REV_VFNMADDSS4rr_VFNMADDSS4rr_Int_VFNMADDSS4rr_Int_REV_VFNMADDSS4rr_REV_VFNMSUBPD4rr_VFNMSUBPD4rr_REV_VFNMSUBPS4rr_VFNMSUBPS4rr_REV_VFNMSUBSD4rr_VFNMSUBSD4rr_Int_VFNMSUBSD4rr_Int_REV_VFNMSUBSD4rr_REV_VFNMSUBSS4rr_VFNMSUBSS4rr_Int_VFNMSUBSS4rr_Int_REV_VFNMSUBSS4rr_REV") 0, false, false,  0, 0,  0, 0,  0, 0}, // #939
  {DBGFIELD("VFMADDPD4mr_VFMADDPD4rm_VFMADDPS4mr_VFMADDPS4rm_VFMADDSD4mr_VFMADDSD4mr_Int_VFMADDSD4rm_VFMADDSD4rm_Int_VFMADDSS4mr_VFMADDSS4mr_Int_VFMADDSS4rm_VFMADDSS4rm_Int_VFMSUBPD4mr_VFMSUBPD4rm_VFMSUBPS4mr_VFMSUBPS4rm_VFMSUBSD4mr_VFMSUBSD4mr_Int_VFMSUBSD4rm_VFMSUBSD4rm_Int_VFMSUBSS4mr_VFMSUBSS4mr_Int_VFMSUBSS4rm_VFMSUBSS4rm_Int_VFNMADDPD4mr_VFNMADDPD4rm_VFNMADDPS4mr_VFNMADDPS4rm_VFNMADDSD4mr_VFNMADDSD4mr_Int_VFNMADDSD4rm_VFNMADDSD4rm_Int_VFNMADDSS4mr_VFNMADDSS4mr_Int_VFNMADDSS4rm_VFNMADDSS4rm_Int_VFNMSUBPD4mr_VFNMSUBPD4rm_VFNMSUBPS4mr_VFNMSUBPS4rm_VFNMSUBSD4mr_VFNMSUBSD4mr_Int_VFNMSUBSD4rm_VFNMSUBSD4rm_Int_VFNMSUBSS4mr_VFNMSUBSS4mr_Int_VFNMSUBSS4rm_VFNMSUBSS4rm_Int") 0, false, false,  0, 0,  0, 0,  0, 0}, // #940
  {DBGFIELD("VSQRTPSYr")          1, false, false, 1099, 4, 24, 1,  0, 0}, // #941
  {DBGFIELD("VSQRTPSYm")          1, false, false, 1093, 5, 23, 1,  0, 0}, // #942
  {DBGFIELD("VSQRTPDYr")          1, false, false, 1099, 4, 24, 1,  0, 0}, // #943
  {DBGFIELD("VSQRTPDYm")          1, false, false, 1093, 5, 23, 1,  0, 0}, // #944
  {DBGFIELD("RSQRTPSr_VRSQRTPSr") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #945
  {DBGFIELD("RSQRTSSr_VRSQRTSSr") 1, false, false, 1099, 4,  3, 1,  0, 0}, // #946
  {DBGFIELD("RSQRTSSr_Int")       1, false, false, 1093, 5, 15, 1,  1, 1}, // #947
  {DBGFIELD("VRSQRTSSr_Int")      1, false, false, 1093, 5, 15, 1,  0, 0}, // #948
  {DBGFIELD("RSQRTPSm_VRSQRTPSm") 1, false, false, 1093, 5, 15, 1,  0, 0}, // #949
  {DBGFIELD("RSQRTSSm_VRSQRTSSm") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #950
  {DBGFIELD("RSQRTSSm_Int_VRSQRTSSm_Int") 1, false, false, 1093, 5, 15, 1,  1, 1}, // #951
  {DBGFIELD("VRSQRTPSYr")         1, false, false, 1099, 4,  3, 1,  0, 0}, // #952
  {DBGFIELD("VRSQRTPSYm")         1, false, false, 1093, 5, 15, 1,  0, 0}, // #953
  {DBGFIELD("ANDNPDrr_ANDNPSrr_ANDPDrr_ANDPSrr_ORPDrr_ORPSrr_VANDNPDYrr_VANDNPDrr_VANDNPSYrr_VANDNPSrr_VANDPDYrr_VANDPDrr_VANDPSYrr_VANDPSrr_VORPDYrr_VORPDrr_VORPSYrr_VORPSrr_VXORPDYrr_VXORPDrr_VXORPSYrr_VXORPSrr_XORPDrr_XORPSrr") 1, false, false, 108, 2,  2, 1,  0, 0}, // #954
  {DBGFIELD("ANDNPDrm_ANDNPSrm_ANDPDrm_ANDPSrm_ORPDrm_ORPSrm_VANDNPDYrm_VANDNPDrm_VANDNPSYrm_VANDNPSrm_VANDPDYrm_VANDPDrm_VANDPSYrm_VANDPSrm_VORPDYrm_VORPDrm_VORPSYrm_VORPSrm_VXORPDYrm_VXORPDrm_VXORPSYrm_VXORPSrm_XORPDrm_XORPSrm") 1, false, false, 918, 3,  3, 1,  1, 1}, // #955
  {DBGFIELD("VZEROUPPER")         0, false, false,  0, 0,  0, 0,  0, 0}, // #956
  {DBGFIELD("VZEROALL")           0, false, false,  0, 0,  0, 0,  0, 0}, // #957
  {DBGFIELD("LDMXCSR_VLDMXCSR")   1, false, false, 306, 2,  9, 1,  0, 0}, // #958
  {DBGFIELD("STMXCSR_VSTMXCSR")   1, false, false, 466, 3,  2, 1,  0, 0}, // #959
  {DBGFIELD("VHADDPDYrr_VHADDPSYrr_VHSUBPDYrr_VHSUBPSYrr") 1, false, false, 1062, 4,  6, 1,  0, 0}, // #960
  {DBGFIELD("VHADDPDYrm_VHADDPSYrm_VHSUBPDYrm_VHSUBPSYrm") 1, false, false, 1057, 5,  5, 1,  1, 1} // #961
}; // SandyBridgeModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SLMModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_AAA_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #1
  {DBGFIELD("IIC_AAD_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #2
  {DBGFIELD("IIC_AAM_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #3
  {DBGFIELD("IIC_AAS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #4
  {DBGFIELD("IIC_BIN_CARRY_NONMEM_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #5
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #6
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd_ReadAfterLd") 1, false, false, 410, 2,  9, 1,  4, 1}, // #7
  {DBGFIELD("IIC_BIN_CARRY_MEM_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #8
  {DBGFIELD("IIC_BIN_NONMEM_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #9
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #10
  {DBGFIELD("WriteALU")           1, false, false, 410, 1,  2, 1,  0, 0}, // #11
  {DBGFIELD("IIC_BIN_MEM_WriteALULd_ReadAfterLd") 1, false, false, 410, 2,  9, 1,  4, 1}, // #12
  {DBGFIELD("IIC_SSE_ALU_F64P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #13
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #14
  {DBGFIELD("IIC_SSE_ALU_F32P_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #15
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #16
  {DBGFIELD("IIC_SSE_ALU_F64S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #17
  {DBGFIELD("IIC_SSE_ALU_F64S_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #18
  {DBGFIELD("IIC_SSE_ALU_F32S_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #19
  {DBGFIELD("IIC_SSE_ALU_F32S_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #20
  {DBGFIELD("IIC_SSE_ALU_F64P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #21
  {DBGFIELD("IIC_SSE_ALU_F32P_RR_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #22
  {DBGFIELD("WriteFAddLd")        1, false, false, 1174, 3, 16, 1,  0, 0}, // #23
  {DBGFIELD("WriteFAdd")          1, false, false, 451, 2,  6, 1,  0, 0}, // #24
  {DBGFIELD("IIC_BIN_MEM_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #25
  {DBGFIELD("IIC_AES_WriteAESDecEncLd_ReadAfterLd") 1, false, false, 1177, 3, 10, 1,  4, 1}, // #26
  {DBGFIELD("IIC_AES_WriteAESDecEnc") 1, false, false, 1177, 2, 10, 1,  0, 0}, // #27
  {DBGFIELD("IIC_AES_WriteAESIMCLd") 1, false, false, 1177, 3, 10, 1,  0, 0}, // #28
  {DBGFIELD("IIC_AES_WriteAESIMC") 1, false, false, 1177, 2, 10, 1,  0, 0}, // #29
  {DBGFIELD("WriteAESKeyGenLd")   1, false, false, 1177, 3, 10, 1,  0, 0}, // #30
  {DBGFIELD("WriteAESKeyGen")     1, false, false, 1177, 2, 10, 1,  0, 0}, // #31
  {DBGFIELD("WriteVecLogicLd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #32
  {DBGFIELD("WriteVecLogic")      1, false, false, 13, 1,  2, 1,  0, 0}, // #33
  {DBGFIELD("IIC_ARPL_MEM_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #34
  {DBGFIELD("IIC_ARPL_REG_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #35
  {DBGFIELD("WriteZero")          1, false, false,  0, 0,  2, 1,  0, 0}, // #36
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteFBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #37
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteFBlend") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #38
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #39
  {DBGFIELD("IIC_ALU_NONMEM_WriteFBlend") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #40
  {DBGFIELD("IIC_BOUND_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #41
  {DBGFIELD("IIC_BIT_SCAN_MEM_WriteShiftLd") 1, false, false, 930, 3,  9, 1,  0, 0}, // #42
  {DBGFIELD("IIC_BIT_SCAN_REG_WriteShift") 1, false, false, 516, 2,  2, 1,  0, 0}, // #43
  {DBGFIELD("IIC_BSWAP_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #44
  {DBGFIELD("IIC_BT_MI_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #45
  {DBGFIELD("IIC_BT_MR_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #46
  {DBGFIELD("IIC_BT_RI_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #47
  {DBGFIELD("IIC_BT_RR_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #48
  {DBGFIELD("IIC_BTX_MI_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #49
  {DBGFIELD("IIC_BTX_MR_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #50
  {DBGFIELD("IIC_BTX_RI_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #51
  {DBGFIELD("IIC_BTX_RR_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #52
  {DBGFIELD("IIC_CALL_MEM_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #53
  {DBGFIELD("IIC_CALL_RI_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #54
  {DBGFIELD("IIC_CALL_MEM_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #55
  {DBGFIELD("WriteSystem")        1, false, false, 1172, 2,  1, 1,  0, 0}, // #56
  {DBGFIELD("IIC_CBW")            0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_CLC_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #58
  {DBGFIELD("IIC_CLD_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #59
  {DBGFIELD("IIC_SSE_PREFETCH_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #60
  {DBGFIELD("IIC_CLI_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #61
  {DBGFIELD("IIC_CLTS_WriteALU")  1, false, false, 410, 1,  2, 1,  0, 0}, // #62
  {DBGFIELD("IIC_SSE_CLZERO_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #63
  {DBGFIELD("IIC_CMC_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #64
  {DBGFIELD("IIC_CMOV16_RM_WriteALULd_ReadAfterLd") 1, false, false, 410, 2,  9, 1,  4, 1}, // #65
  {DBGFIELD("IIC_CMOV16_RR_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #66
  {DBGFIELD("IIC_CMOV32_RM_WriteALULd_ReadAfterLd") 1, false, false, 410, 2,  9, 1,  4, 1}, // #67
  {DBGFIELD("IIC_CMOV32_RR_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #68
  {DBGFIELD("IIC_CMPS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #69
  {DBGFIELD("IIC_CMPXCHG_16B_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #70
  {DBGFIELD("IIC_CMPXCHG_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #71
  {DBGFIELD("IIC_CMPXCHG_REG_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #72
  {DBGFIELD("IIC_CMPXCHG_8B_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #73
  {DBGFIELD("IIC_CMPXCHG_MEM8_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #74
  {DBGFIELD("IIC_CMPXCHG_REG8_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("IIC_SSE_COMIS_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #76
  {DBGFIELD("IIC_SSE_COMIS_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #77
  {DBGFIELD("IIC_FCOMI_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #78
  {DBGFIELD("IIC_CPUID_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #79
  {DBGFIELD("IIC_CRC32_MEM_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #80
  {DBGFIELD("IIC_CRC32_REG_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #81
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtI2FLd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #82
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtI2F") 1, false, false, 13, 1,  9, 1,  0, 0}, // #83
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtI2FLd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #84
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtI2F") 1, false, false, 13, 1,  9, 1,  0, 0}, // #85
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #86
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2I") 1, false, false, 13, 1,  9, 1,  0, 0}, // #87
  {DBGFIELD("IIC_SSE_CVT_PD_RM_WriteCvtF2FLd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #88
  {DBGFIELD("IIC_SSE_CVT_PD_RR_WriteCvtF2F") 1, false, false, 13, 1,  9, 1,  0, 0}, // #89
  {DBGFIELD("IIC_SSE_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #90
  {DBGFIELD("IIC_SSE_CVT_PS_RR_WriteCvtF2I") 1, false, false, 13, 1,  9, 1,  0, 0}, // #91
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RM_WriteCvtF2ILd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #92
  {DBGFIELD("IIC_SSE_CVT_SD2SI_RR_WriteCvtF2I") 1, false, false, 13, 1,  9, 1,  0, 0}, // #93
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #94
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtF2F") 1, false, false, 13, 1,  9, 1,  0, 0}, // #95
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #96
  {DBGFIELD("IIC_SSE_CVT_Scalar_RR_WriteCvtI2F") 1, false, false, 13, 1,  9, 1,  0, 0}, // #97
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RM_WriteCvtF2ILd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #98
  {DBGFIELD("IIC_SSE_CVT_SS2SI64_RR_WriteCvtF2I") 1, false, false, 13, 1,  9, 1,  0, 0}, // #99
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RM_WriteCvtF2ILd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #100
  {DBGFIELD("IIC_SSE_CVT_SS2SI32_RR_WriteCvtF2I") 1, false, false, 13, 1,  9, 1,  0, 0}, // #101
  {DBGFIELD("IIC_DAA_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIC_DAS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #103
  {DBGFIELD("IIC_UNARY_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #104
  {DBGFIELD("IIC_UNARY_REG_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #105
  {DBGFIELD("IIC_DIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #106
  {DBGFIELD("IIC_DIV16_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #107
  {DBGFIELD("IIC_DIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #108
  {DBGFIELD("IIC_DIV32_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #109
  {DBGFIELD("IIC_DIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #110
  {DBGFIELD("IIC_DIV64_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #111
  {DBGFIELD("IIC_DIV8_MEM_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #112
  {DBGFIELD("IIC_DIV8_REG_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #113
  {DBGFIELD("IIC_SSE_DIV_F64P_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 1188, 4, 52, 1,  4, 1}, // #114
  {DBGFIELD("IIC_SSE_DIV_F64P_RR_WriteFDiv") 1, false, false, 1192, 3, 53, 1,  0, 0}, // #115
  {DBGFIELD("IIC_SSE_DIV_F32P_RR_WriteFDiv") 1, false, false, 1192, 3, 53, 1,  0, 0}, // #116
  {DBGFIELD("WriteFDivLd")        1, false, false, 1188, 4, 52, 1,  0, 0}, // #117
  {DBGFIELD("WriteFDiv")          1, false, false, 1192, 3, 53, 1,  0, 0}, // #118
  {DBGFIELD("IIC_SSE_DIV_F64S_RM_WriteFDivLd_ReadAfterLd") 1, false, false, 1188, 4, 52, 1,  4, 1}, // #119
  {DBGFIELD("IIC_SSE_DIV_F64S_RR_WriteFDiv") 1, false, false, 1192, 3, 53, 1,  0, 0}, // #120
  {DBGFIELD("IIC_SSE_DIV_F32S_RR_WriteFDiv") 1, false, false, 1192, 3, 53, 1,  0, 0}, // #121
  {DBGFIELD("IIC_SSE_DPPD_RM_WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #122
  {DBGFIELD("IIC_SSE_DPPD_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #123
  {DBGFIELD("IIC_SSE_DPPS_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #124
  {DBGFIELD("IIC_RET_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #125
  {DBGFIELD("IIC_ENTER_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #126
  {DBGFIELD("IIC_SSE_EXTRACTPS_RM_WriteFBlendLd_WriteRMW") 2, false, false, 1195, 3, 41, 2,  0, 0}, // #127
  {DBGFIELD("IIC_SSE_EXTRACTPS_RR_WriteFBlend") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #128
  {DBGFIELD("IIC_F2XM1_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #129
  {DBGFIELD("IIC_CALL_FAR_PTR_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #130
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #131
  {DBGFIELD("IIC_CALL_FAR_MEM_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #132
  {DBGFIELD("IIC_JMP_FAR_PTR_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #133
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #134
  {DBGFIELD("IIC_JMP_FAR_MEM_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #135
  {DBGFIELD("IIC_FCOMPP_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #136
  {DBGFIELD("IIC_FPSTP_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #137
  {DBGFIELD("IIC_FFREE_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #138
  {DBGFIELD("IIC_FLDCW_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #139
  {DBGFIELD("IIC_FLDL_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #140
  {DBGFIELD("IIC_FNCLEX_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #141
  {DBGFIELD("IIC_FNINIT_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #142
  {DBGFIELD("IIC_FNOP_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #143
  {DBGFIELD("IIC_FNSTCW_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #144
  {DBGFIELD("IIC_FNSTSW_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #145
  {DBGFIELD("IIC_FPATAN_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #146
  {DBGFIELD("IIC_FPREM_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #147
  {DBGFIELD("IIC_FPREM1_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #148
  {DBGFIELD("IIC_FPTAN_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #149
  {DBGFIELD("IIC_FRNDINT_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #150
  {DBGFIELD("IIC_FSCALE_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #151
  {DBGFIELD("IIC_FSINCOS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #152
  {DBGFIELD("IIC_FXAM_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #153
  {DBGFIELD("IIC_FXRSTOR_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #154
  {DBGFIELD("IIC_FXSAVE_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #155
  {DBGFIELD("IIC_FXTRACT_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #156
  {DBGFIELD("IIC_FYL2X_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #157
  {DBGFIELD("IIC_FYL2XP1_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #158
  {DBGFIELD("IIC_SSE_HADDSUB_RM_WriteFHAddLd_ReadAfterLd") 1, false, false, 972, 2, 16, 1,  4, 1}, // #159
  {DBGFIELD("IIC_SSE_HADDSUB_RR_WriteFHAdd") 1, false, false, 631, 1,  6, 1,  0, 0}, // #160
  {DBGFIELD("IIC_HLT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #161
  {DBGFIELD("IIC_IDIV16_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #162
  {DBGFIELD("IIC_IDIV16_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #163
  {DBGFIELD("IIC_IDIV32_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #164
  {DBGFIELD("IIC_IDIV32_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #165
  {DBGFIELD("IIC_IDIV64_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #166
  {DBGFIELD("IIC_IDIV64_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #167
  {DBGFIELD("IIC_IDIV8_WriteIDivLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1183, 3, 11, 1,  5, 2}, // #168
  {DBGFIELD("IIC_IDIV8_WriteIDiv") 1, false, false, 1186, 2, 12, 1,  0, 0}, // #169
  {DBGFIELD("IIC_FILD_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #170
  {DBGFIELD("IIC_IMUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #171
  {DBGFIELD("IIC_IMUL16_RR_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #172
  {DBGFIELD("IIC_IMUL16_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  4, 1}, // #173
  {DBGFIELD("IIC_IMUL16_RMI_WriteIMulLd") 1, false, false, 1081, 3, 16, 1,  0, 0}, // #174
  {DBGFIELD("IIC_IMUL16_RRI_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #175
  {DBGFIELD("IIC_IMUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #176
  {DBGFIELD("IIC_IMUL32_RR_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #177
  {DBGFIELD("IIC_IMUL32_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  4, 1}, // #178
  {DBGFIELD("IIC_IMUL32_RMI_WriteIMulLd") 1, false, false, 1081, 3, 16, 1,  0, 0}, // #179
  {DBGFIELD("IIC_IMUL32_RRI_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #180
  {DBGFIELD("IIC_IMUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #181
  {DBGFIELD("IIC_IMUL64_RR_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #182
  {DBGFIELD("IIC_IMUL64_RM_WriteIMulLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  4, 1}, // #183
  {DBGFIELD("IIC_IMUL64_RMI_WriteIMulLd") 1, false, false, 1081, 3, 16, 1,  0, 0}, // #184
  {DBGFIELD("IIC_IMUL64_RRI_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #185
  {DBGFIELD("IIC_IMUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #186
  {DBGFIELD("IIC_IMUL8_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #187
  {DBGFIELD("IIC_IN_RI_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #188
  {DBGFIELD("IIC_IN_RR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #189
  {DBGFIELD("IIC_INS_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #190
  {DBGFIELD("IIC_SSE_INSERTPS_RM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #191
  {DBGFIELD("IIC_SSE_INSERTPS_RR_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #192
  {DBGFIELD("IIC_INT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #193
  {DBGFIELD("IIC_INT3_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #194
  {DBGFIELD("IIC_INVD_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #195
  {DBGFIELD("IIC_INVLPG_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #196
  {DBGFIELD("WriteJumpLd")        1, false, false, 1081, 3,  9, 1,  0, 0}, // #197
  {DBGFIELD("IIC_IRET_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #198
  {DBGFIELD("IIC_FST_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #199
  {DBGFIELD("IIC_FIST_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #200
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtF2FLd_ReadAfterLd") 1, false, false, 13, 2,  5, 1,  4, 1}, // #201
  {DBGFIELD("IIC_SSE_CVT_Scalar_RM_WriteCvtI2FLd_ReadAfterLd") 1, false, false, 13, 2,  5, 1,  4, 1}, // #202
  {DBGFIELD("WriteLoad")          1, false, false, 14, 1,  6, 1,  0, 0}, // #203
  {DBGFIELD("IIC_Jcc_WriteJump")  1, false, false, 453, 2,  2, 1,  0, 0}, // #204
  {DBGFIELD("IIC_JCXZ_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #205
  {DBGFIELD("IIC_JMP_MEM_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #206
  {DBGFIELD("IIC_JMP_REG_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #207
  {DBGFIELD("IIC_JMP_REL_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #208
  {DBGFIELD("IIC_AHF_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #209
  {DBGFIELD("IIC_LAR_RM_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #210
  {DBGFIELD("IIC_LAR_RR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #211
  {DBGFIELD("IIC_CMPX_LOCK_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #212
  {DBGFIELD("IIC_CMPX_LOCK_16B_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #213
  {DBGFIELD("IIC_CMPX_LOCK_8_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #214
  {DBGFIELD("IIC_CMPX_LOCK_8B_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #215
  {DBGFIELD("IIC_SSE_LDDQU_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #216
  {DBGFIELD("IIC_SSE_LDMXCSR_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #217
  {DBGFIELD("IIC_LXS_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #218
  {DBGFIELD("IIC_FLDZ_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #219
  {DBGFIELD("IIC_FIST_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #220
  {DBGFIELD("IIC_FLD_WriteLoad")  1, false, false, 14, 1,  6, 1,  0, 0}, // #221
  {DBGFIELD("IIC_FLD80_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #222
  {DBGFIELD("IIC_FLD_WriteMove")  1, false, false, 410, 1,  2, 1,  0, 0}, // #223
  {DBGFIELD("IIC_LEA_16_WriteLEA") 1, false, false, 453, 2,  2, 1,  0, 0}, // #224
  {DBGFIELD("IIC_LEA_WriteLEA")   1, false, false, 453, 2,  2, 1,  0, 0}, // #225
  {DBGFIELD("IIC_LEAVE_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #226
  {DBGFIELD("IIC_SSE_LFENCE_WriteFence") 1, false, false, 14, 1,  2, 1,  0, 0}, // #227
  {DBGFIELD("IIC_LGDT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #228
  {DBGFIELD("IIC_LIDT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #229
  {DBGFIELD("IIC_LLDT_MEM_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #230
  {DBGFIELD("IIC_LLDT_REG_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #231
  {DBGFIELD("IIC_LWP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #232
  {DBGFIELD("IIC_LMSW_REG_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #233
  {DBGFIELD("IIC_LMSW_MEM_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #234
  {DBGFIELD("IIC_ALU_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #235
  {DBGFIELD("IIC_ALU_NONMEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #236
  {DBGFIELD("IIC_LODS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #237
  {DBGFIELD("IIC_LOOP_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #238
  {DBGFIELD("IIC_LOOPE_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #239
  {DBGFIELD("IIC_LOOPNE_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #240
  {DBGFIELD("IIC_RET_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #241
  {DBGFIELD("IIC_LSL_RM_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #242
  {DBGFIELD("IIC_LSL_RR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #243
  {DBGFIELD("IIC_LTR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #244
  {DBGFIELD("IIC_XADD_LOCK_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #245
  {DBGFIELD("IIC_XADD_LOCK_MEM8_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #246
  {DBGFIELD("IIC_SSE_MASKMOV_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #247
  {DBGFIELD("IIC_SSE_MFENCE_WriteFence") 1, false, false, 14, 1,  2, 1,  0, 0}, // #248
  {DBGFIELD("IIC_MMX_CVT_PD_RM_WriteCvtF2ILd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #249
  {DBGFIELD("IIC_MMX_CVT_PD_RR_WriteCvtF2I") 1, false, false, 13, 1,  9, 1,  0, 0}, // #250
  {DBGFIELD("WriteCvtI2FLd")      1, false, false, 13, 2,  5, 1,  0, 0}, // #251
  {DBGFIELD("WriteCvtI2F")        1, false, false, 13, 1,  9, 1,  0, 0}, // #252
  {DBGFIELD("IIC_MMX_CVT_PS_RM_WriteCvtF2ILd") 1, false, false, 13, 2,  5, 1,  0, 0}, // #253
  {DBGFIELD("IIC_MMX_CVT_PS_RR_WriteCvtF2I") 1, false, false, 13, 1,  9, 1,  0, 0}, // #254
  {DBGFIELD("IIC_MMX_EMMS")       0, false, false,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("IIC_MMX_MASKMOV_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #256
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #257
  {DBGFIELD("IIC_MMX_MOV_REG_MM_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #258
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #259
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #260
  {DBGFIELD("IIC_MMX_MOV_MM_RM_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #261
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #262
  {DBGFIELD("IIC_MMX_MOVQ_RR_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #263
  {DBGFIELD("IIC_MMX_MOVQ_RM_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #264
  {DBGFIELD("WriteMove")          1, false, false, 410, 1,  2, 1,  0, 0}, // #265
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd") 1, false, false, 13, 2,  9, 1,  0, 0}, // #266
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecALU") 1, false, false, 13, 1,  2, 1,  0, 0}, // #267
  {DBGFIELD("IIC_MMX_PCK_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #268
  {DBGFIELD("IIC_MMX_PCK_RR_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #269
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #270
  {DBGFIELD("IIC_MMX_ALUQ_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #271
  {DBGFIELD("IIC_MMX_ALUQ_RR_WriteVecALU") 1, false, false, 13, 1,  2, 1,  0, 0}, // #272
  {DBGFIELD("WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #273
  {DBGFIELD("WriteShuffle")       1, false, false, 1172, 2,  2, 1,  0, 0}, // #274
  {DBGFIELD("IIC_MMX_ALU_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #275
  {DBGFIELD("IIC_MMX_ALU_RR_WriteVecLogic") 1, false, false, 13, 1,  2, 1,  0, 0}, // #276
  {DBGFIELD("IIC_MMX_MISC_FUNC_REG_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #277
  {DBGFIELD("IIC_MMX_MISC_FUNC_MEM_WriteVecIMul") 1, false, false, 1172, 2,  9, 1,  0, 0}, // #278
  {DBGFIELD("IIC_MMX_PEXTR_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #279
  {DBGFIELD("IIC_MMX_PHADDSUBW_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #280
  {DBGFIELD("IIC_MMX_PHADDSUBW_RR_WriteVecALU") 1, false, false, 13, 1,  2, 1,  0, 0}, // #281
  {DBGFIELD("IIC_MMX_PHADDSUBD_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #282
  {DBGFIELD("IIC_MMX_PHADDSUBD_RR_WriteVecALU") 1, false, false, 13, 1,  2, 1,  0, 0}, // #283
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #284
  {DBGFIELD("IIC_MMX_PINSRW_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #285
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #286
  {DBGFIELD("IIC_MMX_PMUL_WriteVecIMul") 1, false, false, 1172, 2,  9, 1,  0, 0}, // #287
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #288
  {DBGFIELD("IIC_MMX_PSADBW_WriteVecIMul") 1, false, false, 1172, 2,  9, 1,  0, 0}, // #289
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #290
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #291
  {DBGFIELD("IIC_MMX_PSHUF_WriteShuffleLd") 1, false, false, 1180, 3,  9, 1,  0, 0}, // #292
  {DBGFIELD("IIC_MMX_SHIFT_RI_WriteVecShift") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #293
  {DBGFIELD("IIC_MMX_SHIFT_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #294
  {DBGFIELD("IIC_MMX_SHIFT_RR_WriteVecShift") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #295
  {DBGFIELD("IIC_MMX_UNPCK_H_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #296
  {DBGFIELD("IIC_MMX_UNPCK_H_RR_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #297
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #298
  {DBGFIELD("IIC_MMX_UNPCK_L_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #299
  {DBGFIELD("IIC_SSE_MONITORX_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #300
  {DBGFIELD("IIC_SSE_MONITOR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #301
  {DBGFIELD("IIC_MOV_MEM_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #302
  {DBGFIELD("IIC_MOV_MEM_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #303
  {DBGFIELD("IIC_MOV_MEM_SR_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #304
  {DBGFIELD("IIC_MOV_WriteMove")  1, false, false, 410, 1,  2, 1,  0, 0}, // #305
  {DBGFIELD("IIC_MOV_MEM_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #306
  {DBGFIELD("IIC_MOV_REG_SR_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #307
  {DBGFIELD("IIC_MOV_SR_MEM_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #308
  {DBGFIELD("IIC_MOV_SR_REG_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #309
  {DBGFIELD("IIC_MOV_CR_REG_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #310
  {DBGFIELD("IIC_MOV_DR_REG_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #311
  {DBGFIELD("IIC_ALU_NONMEM_WriteZero") 1, false, false,  0, 0,  2, 1,  0, 0}, // #312
  {DBGFIELD("IIC_MOV_REG_CR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #313
  {DBGFIELD("IIC_MOV_REG_DR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #314
  {DBGFIELD("IIC_SSE_MOVDQ_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #315
  {DBGFIELD("IIC_SSE_MOVDQ_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #316
  {DBGFIELD("IIC_SSE_MOVA_P_MR_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #317
  {DBGFIELD("IIC_SSE_MOVA_P_RM_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #318
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #319
  {DBGFIELD("IIC_MOVBE_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #320
  {DBGFIELD("IIC_MOVBE_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #321
  {DBGFIELD("IIC_SSE_MOV_LH_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #322
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #323
  {DBGFIELD("IIC_SSE_MOVA_P_RR_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #324
  {DBGFIELD("IIC_SSE_MOVU_P_MR_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #325
  {DBGFIELD("IIC_SSE_MOVU_P_RM_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #326
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #327
  {DBGFIELD("IIC_SSE_MOV_LH_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #328
  {DBGFIELD("IIC_SSE_MOV_LH_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #329
  {DBGFIELD("IIC_SSE_MOVMSK_WriteVecLogic") 1, false, false, 13, 1,  2, 1,  0, 0}, // #330
  {DBGFIELD("IIC_SSE_MOVNT_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #331
  {DBGFIELD("IIC_SSE_MOVDQ_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #332
  {DBGFIELD("IIC_SSE_MOVD_ToGP_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #333
  {DBGFIELD("IIC_SSE_MOVQ_RR_WriteVecLogic") 1, false, false, 13, 1,  2, 1,  0, 0}, // #334
  {DBGFIELD("IIC_MOVS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #335
  {DBGFIELD("IIC_SSE_MOV_S_MR_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #336
  {DBGFIELD("IIC_SSE_MOV_S_RM_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #337
  {DBGFIELD("IIC_SSE_MOV_S_RR_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #338
  {DBGFIELD("IIC_MOVSX_R16_M8_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #339
  {DBGFIELD("IIC_MOVSX_R16_R8_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #340
  {DBGFIELD("IIC_MOVSX_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #341
  {DBGFIELD("IIC_MOVSX_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #342
  {DBGFIELD("IIC_SSE_MOVU_P_RR_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #343
  {DBGFIELD("IIC_MOVZX_R16_M8_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #344
  {DBGFIELD("IIC_MOVZX_R16_R8_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #345
  {DBGFIELD("IIC_MOVZX_WriteALULd") 1, false, false, 410, 2,  9, 1,  0, 0}, // #346
  {DBGFIELD("IIC_MOVZX_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #347
  {DBGFIELD("IIC_SSE_MPSADBW_RM_WriteMPSADLd_ReadAfterLd") 1, false, false, 1180, 3,  8, 1,  4, 1}, // #348
  {DBGFIELD("IIC_SSE_MPSADBW_RR_WriteMPSAD") 1, false, false, 1172, 2,  5, 1,  0, 0}, // #349
  {DBGFIELD("IIC_MUL16_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #350
  {DBGFIELD("IIC_MUL16_REG_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #351
  {DBGFIELD("IIC_MUL32_MEM_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #352
  {DBGFIELD("IIC_MUL32_REG_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #353
  {DBGFIELD("IIC_MUL64_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #354
  {DBGFIELD("IIC_MUL64_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #355
  {DBGFIELD("IIC_MUL8_WriteIMulLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd_ReadAfterLd") 1, false, false, 1081, 3, 16, 1,  5, 2}, // #356
  {DBGFIELD("IIC_MUL8_WriteIMul") 1, false, false, 453, 2,  6, 1,  0, 0}, // #357
  {DBGFIELD("IIC_SSE_MUL_F64P_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 1198, 4, 10, 1,  4, 1}, // #358
  {DBGFIELD("IIC_SSE_MUL_F64P_RR_WriteFMul") 1, false, false, 1202, 3,  3, 1,  0, 0}, // #359
  {DBGFIELD("IIC_SSE_MUL_F32P_RR_WriteFMul") 1, false, false, 1202, 3,  3, 1,  0, 0}, // #360
  {DBGFIELD("IIC_SSE_MUL_F64S_RM_WriteFMulLd_ReadAfterLd") 1, false, false, 1198, 4, 10, 1,  4, 1}, // #361
  {DBGFIELD("IIC_SSE_MUL_F64S_RR_WriteFMul") 1, false, false, 1202, 3,  3, 1,  0, 0}, // #362
  {DBGFIELD("IIC_SSE_MUL_F32S_RR_WriteFMul") 1, false, false, 1202, 3,  3, 1,  0, 0}, // #363
  {DBGFIELD("IIC_MUL8_WriteIMulLd_WriteIMulH") 2, false, false, 1205, 5, 45, 2,  0, 0}, // #364
  {DBGFIELD("IIC_MUL8_WriteIMul_WriteIMulH") 2, false, false, 1205, 4, 54, 2,  0, 0}, // #365
  {DBGFIELD("WriteFMulLd")        1, false, false, 1198, 4, 10, 1,  0, 0}, // #366
  {DBGFIELD("WriteFMul")          1, false, false, 1202, 3,  3, 1,  0, 0}, // #367
  {DBGFIELD("IIC_SSE_MWAITX_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #368
  {DBGFIELD("IIC_SSE_MWAIT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #369
  {DBGFIELD("IIC_NOP_WriteZero")  1, false, false,  0, 0,  2, 1,  0, 0}, // #370
  {DBGFIELD("IIC_OUT_IR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #371
  {DBGFIELD("IIC_OUT_RR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #372
  {DBGFIELD("IIC_OUTS_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #373
  {DBGFIELD("IIC_SSE_PABS_RM_WriteVecALULd") 1, false, false, 13, 2,  9, 1,  0, 0}, // #374
  {DBGFIELD("IIC_SSE_PABS_RR_WriteVecALU") 1, false, false, 13, 1,  2, 1,  0, 0}, // #375
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #376
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteVecALU") 1, false, false, 13, 1,  2, 1,  0, 0}, // #377
  {DBGFIELD("IIC_SSE_INTALUQ_P_RM_WriteVecALULd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #378
  {DBGFIELD("IIC_SSE_INTALUQ_P_RR_WriteVecALU") 1, false, false, 13, 1,  2, 1,  0, 0}, // #379
  {DBGFIELD("IIC_SSE_PALIGNRM_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #380
  {DBGFIELD("IIC_SSE_PALIGNRR_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #381
  {DBGFIELD("IIC_SSE_BIT_P_RM_WriteVecLogicLd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #382
  {DBGFIELD("IIC_SSE_BIT_P_RR_WriteVecLogic") 1, false, false, 13, 1,  2, 1,  0, 0}, // #383
  {DBGFIELD("IIC_SSE_PAUSE_WriteNop") 1, false, false,  0, 0,  2, 1,  0, 0}, // #384
  {DBGFIELD("IIC_ALU_MEM_WriteVarBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #385
  {DBGFIELD("IIC_ALU_NONMEM_WriteVarBlend") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #386
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #387
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteBlend") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #388
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RM_WriteCLMulLd_ReadAfterLd") 1, false, false, 1210, 3,  8, 1,  4, 1}, // #389
  {DBGFIELD("IIC_SSE_PCLMULQDQ_RR_WriteCLMul") 1, false, false, 1210, 2,  8, 1,  0, 0}, // #390
  {DBGFIELD("WriteVecALULd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #391
  {DBGFIELD("WriteVecALU")        1, false, false, 13, 1,  2, 1,  0, 0}, // #392
  {DBGFIELD("WritePCmpEStrILd_ReadAfterLd") 1, false, false, 1213, 3, 27, 1,  4, 1}, // #393
  {DBGFIELD("WritePCmpEStrI")     1, false, false, 1213, 2, 27, 1,  0, 0}, // #394
  {DBGFIELD("WritePCmpEStrMLd_ReadAfterLd") 1, false, false, 1216, 3, 56, 1,  4, 1}, // #395
  {DBGFIELD("WritePCmpEStrM")     1, false, false, 1216, 2, 56, 1,  0, 0}, // #396
  {DBGFIELD("WritePCmpIStrILd_ReadAfterLd") 1, false, false, 1216, 3, 56, 1,  4, 1}, // #397
  {DBGFIELD("WritePCmpIStrI")     1, false, false, 1216, 2, 56, 1,  0, 0}, // #398
  {DBGFIELD("WritePCmpIStrMLd_ReadAfterLd") 1, false, false, 1219, 3, 34, 1,  4, 1}, // #399
  {DBGFIELD("WritePCmpIStrM")     1, false, false, 1219, 2, 34, 1,  0, 0}, // #400
  {DBGFIELD("WriteShuffleLd_WriteRMW") 2, false, false, 1195, 3, 41, 2,  0, 0}, // #401
  {DBGFIELD("IIC_SSE_PEXTRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #402
  {DBGFIELD("IIC_SSE_PHADDSUBD_RM_WritePHAddLd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #403
  {DBGFIELD("IIC_SSE_PHADDSUBD_RR_WritePHAdd") 1, false, false, 13, 1,  2, 1,  0, 0}, // #404
  {DBGFIELD("WritePHAddLd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #405
  {DBGFIELD("WritePHAdd")         1, false, false, 13, 1,  2, 1,  0, 0}, // #406
  {DBGFIELD("IIC_SSE_PHADDSUBW_RM_WritePHAddLd_ReadAfterLd") 1, false, false, 13, 2,  9, 1,  4, 1}, // #407
  {DBGFIELD("IIC_SSE_PHADDSUBW_RR_WritePHAdd") 1, false, false, 13, 1,  2, 1,  0, 0}, // #408
  {DBGFIELD("WriteVecIMulLd")     1, false, false, 1180, 3,  5, 1,  0, 0}, // #409
  {DBGFIELD("WriteVecIMul")       1, false, false, 1172, 2,  9, 1,  0, 0}, // #410
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #411
  {DBGFIELD("IIC_SSE_PINSRW_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #412
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #413
  {DBGFIELD("IIC_SSE_PMADD_WriteVecIMul") 1, false, false, 1172, 2,  9, 1,  0, 0}, // #414
  {DBGFIELD("WriteVecIMulLd_ReadAfterLd") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #415
  {DBGFIELD("IIC_SSE_INTALU_P_RM_WriteShuffleLd") 1, false, false, 1180, 3,  9, 1,  0, 0}, // #416
  {DBGFIELD("IIC_SSE_INTALU_P_RR_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #417
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #418
  {DBGFIELD("IIC_SSE_PMULHRSW_WriteVecIMul") 1, false, false, 1172, 2,  9, 1,  0, 0}, // #419
  {DBGFIELD("IIC_SSE_INTMUL_P_RM_WriteVecIMulLd_ReadAfterLd") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #420
  {DBGFIELD("IIC_SSE_INTMUL_P_RR_WriteVecIMul") 1, false, false, 1172, 2,  9, 1,  0, 0}, // #421
  {DBGFIELD("IIC_POP_REG16_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #422
  {DBGFIELD("IIC_POP_MEM_WriteRMW") 1, false, false, 14, 1,  2, 1,  0, 0}, // #423
  {DBGFIELD("IIC_POP_REG_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #424
  {DBGFIELD("IIC_POP_A_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #425
  {DBGFIELD("IIC_SSE_POPCNT_RM_WriteFAddLd") 1, false, false, 1174, 3, 16, 1,  0, 0}, // #426
  {DBGFIELD("IIC_SSE_POPCNT_RR_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #427
  {DBGFIELD("IIC_POP_SR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #428
  {DBGFIELD("IIC_POP_F_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #429
  {DBGFIELD("IIC_POP_FD_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #430
  {DBGFIELD("IIC_POP_SR_SS_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #431
  {DBGFIELD("IIC_SSE_PSHUFB_RM_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #432
  {DBGFIELD("IIC_SSE_PSHUFB_RR_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #433
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #434
  {DBGFIELD("IIC_SSE_PSHUF_RI_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #435
  {DBGFIELD("IIC_SSE_INTSHDQ_P_RI_WriteVecShift") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #436
  {DBGFIELD("IIC_SSE_INTSH_P_RI_WriteVecShift") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #437
  {DBGFIELD("IIC_SSE_INTSH_P_RM_WriteVecShiftLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #438
  {DBGFIELD("IIC_SSE_INTSH_P_RR_WriteVecShift") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #439
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #440
  {DBGFIELD("IIC_SSE_UNPCK_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #441
  {DBGFIELD("IIC_PUSH_IMM_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #442
  {DBGFIELD("IIC_PUSH_REG_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #443
  {DBGFIELD("IIC_PUSH_MEM_WriteRMW") 1, false, false, 14, 1,  2, 1,  0, 0}, // #444
  {DBGFIELD("IIC_PUSH_A_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #445
  {DBGFIELD("IIC_PUSH_SR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #446
  {DBGFIELD("IIC_PUSH_CS_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #447
  {DBGFIELD("IIC_PUSH_F_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #448
  {DBGFIELD("IIC_SR_WriteShiftLd_WriteRMW") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #449
  {DBGFIELD("IIC_SR_WriteShift")  1, false, false, 516, 2,  2, 1,  0, 0}, // #450
  {DBGFIELD("IIC_SSE_RCPP_RM_WriteFRcpLd") 1, false, false, 1180, 3, 10, 1,  0, 0}, // #451
  {DBGFIELD("IIC_SSE_RCPP_RR_WriteFRcp") 1, false, false, 1172, 2,  3, 1,  0, 0}, // #452
  {DBGFIELD("IIC_SSE_RCPS_RM_WriteFRcpLd_ReadAfterLd") 1, false, false, 1180, 3, 10, 1,  4, 1}, // #453
  {DBGFIELD("WriteFRcpLd_ReadAfterLd") 1, false, false, 1180, 3, 10, 1,  4, 1}, // #454
  {DBGFIELD("IIC_SSE_RCPS_RR_WriteFRcp") 1, false, false, 1172, 2,  3, 1,  0, 0}, // #455
  {DBGFIELD("WriteRMW")           1, false, false, 14, 1,  2, 1,  0, 0}, // #456
  {DBGFIELD("IIC_RDMSR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #457
  {DBGFIELD("IIC_RDPMC_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #458
  {DBGFIELD("IIC_RDTSC_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #459
  {DBGFIELD("IIC_REP_MOVS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #460
  {DBGFIELD("IIC_REP_STOS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #461
  {DBGFIELD("IIC_RET_IMM_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #462
  {DBGFIELD("WriteShiftLd")       1, false, false, 930, 3,  9, 1,  0, 0}, // #463
  {DBGFIELD("WriteShift")         1, false, false, 516, 2,  2, 1,  0, 0}, // #464
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAddLd") 1, false, false, 1174, 3, 16, 1,  0, 0}, // #465
  {DBGFIELD("IIC_SSE_ROUNDPS_REG_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #466
  {DBGFIELD("IIC_SSE_ROUNDPS_MEM_WriteFAddLd") 1, false, false, 1174, 3, 16, 1,  0, 0}, // #467
  {DBGFIELD("WriteFAddLd_ReadAfterLd") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #468
  {DBGFIELD("IIC_RSM_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #469
  {DBGFIELD("IIC_SSE_RSQRTPS_RM_WriteFRsqrtLd") 1, false, false, 1180, 3, 10, 1,  0, 0}, // #470
  {DBGFIELD("IIC_SSE_RSQRTPS_RR_WriteFRsqrt") 1, false, false, 1172, 2,  3, 1,  0, 0}, // #471
  {DBGFIELD("IIC_SSE_RSQRTSS_RM_WriteFRsqrtLd_ReadAfterLd") 1, false, false, 1180, 3, 10, 1,  4, 1}, // #472
  {DBGFIELD("WriteFRsqrtLd_ReadAfterLd") 1, false, false, 1180, 3, 10, 1,  4, 1}, // #473
  {DBGFIELD("IIC_SSE_RSQRTSS_RR_WriteFRsqrt") 1, false, false, 1172, 2,  3, 1,  0, 0}, // #474
  {DBGFIELD("WriteShiftLd_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadDefault_ReadAfterLd") 1, false, false, 930, 3,  9, 1,  5, 1}, // #475
  {DBGFIELD("IIC_SCAS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #476
  {DBGFIELD("IIC_SET_M_WriteALU_WriteStore") 2, false, false, 1155, 2, 21, 2,  0, 0}, // #477
  {DBGFIELD("IIC_SET_R_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #478
  {DBGFIELD("IIC_SSE_SFENCE_WriteFence") 1, false, false, 14, 1,  2, 1,  0, 0}, // #479
  {DBGFIELD("IIC_SGDT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #480
  {DBGFIELD("IIC_SHD16_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #481
  {DBGFIELD("IIC_SHD16_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #482
  {DBGFIELD("IIC_SHD16_REG_CL_WriteShift") 1, false, false, 516, 2,  2, 1,  0, 0}, // #483
  {DBGFIELD("IIC_SHD16_REG_IM_WriteShift") 1, false, false, 516, 2,  2, 1,  0, 0}, // #484
  {DBGFIELD("IIC_SHD32_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #485
  {DBGFIELD("IIC_SHD32_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #486
  {DBGFIELD("IIC_SHD32_REG_CL_WriteShift") 1, false, false, 516, 2,  2, 1,  0, 0}, // #487
  {DBGFIELD("IIC_SHD32_REG_IM_WriteShift") 1, false, false, 516, 2,  2, 1,  0, 0}, // #488
  {DBGFIELD("IIC_SHD64_MEM_CL_WriteShiftLd_WriteRMW") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #489
  {DBGFIELD("IIC_SHD64_MEM_IM_WriteShiftLd_WriteRMW") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #490
  {DBGFIELD("IIC_SHD64_REG_CL_WriteShift") 1, false, false, 516, 2,  2, 1,  0, 0}, // #491
  {DBGFIELD("IIC_SHD64_REG_IM_WriteShift") 1, false, false, 516, 2,  2, 1,  0, 0}, // #492
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #493
  {DBGFIELD("IIC_SSE_SHUFP_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #494
  {DBGFIELD("IIC_SIDT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #495
  {DBGFIELD("IIC_SLDT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #496
  {DBGFIELD("IIC_SMSW_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #497
  {DBGFIELD("IIC_SSE_SQRTPD_RM_WriteFSqrtLd") 1, false, false, 1180, 3, 39, 1,  0, 0}, // #498
  {DBGFIELD("IIC_SSE_SQRTPD_RR_WriteFSqrt") 1, false, false, 1172, 2, 24, 1,  0, 0}, // #499
  {DBGFIELD("IIC_SSE_SQRTPS_RM_WriteFSqrtLd") 1, false, false, 1180, 3, 39, 1,  0, 0}, // #500
  {DBGFIELD("IIC_SSE_SQRTPS_RR_WriteFSqrt") 1, false, false, 1172, 2, 24, 1,  0, 0}, // #501
  {DBGFIELD("IIC_SSE_SQRTSD_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 1180, 3, 39, 1,  4, 1}, // #502
  {DBGFIELD("WriteFSqrtLd_ReadAfterLd") 1, false, false, 1180, 3, 39, 1,  4, 1}, // #503
  {DBGFIELD("IIC_SSE_SQRTSD_RR_WriteFSqrt") 1, false, false, 1172, 2, 24, 1,  0, 0}, // #504
  {DBGFIELD("IIC_SSE_SQRTSS_RM_WriteFSqrtLd_ReadAfterLd") 1, false, false, 1180, 3, 39, 1,  4, 1}, // #505
  {DBGFIELD("IIC_SSE_SQRTSS_RR_WriteFSqrt") 1, false, false, 1172, 2, 24, 1,  0, 0}, // #506
  {DBGFIELD("WriteFSqrt")         1, false, false, 1172, 2, 24, 1,  0, 0}, // #507
  {DBGFIELD("IIC_STC_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #508
  {DBGFIELD("IIC_STD_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #509
  {DBGFIELD("IIC_STI_WriteALU")   1, false, false, 410, 1,  2, 1,  0, 0}, // #510
  {DBGFIELD("IIC_SSE_STMXCSR_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #511
  {DBGFIELD("IIC_STOS_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #512
  {DBGFIELD("IIC_STR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #513
  {DBGFIELD("IIC_FST80_WriteStore") 1, false, false, 410, 2,  2, 1,  0, 0}, // #514
  {DBGFIELD("IIC_FST_WriteMove")  1, false, false, 410, 1,  2, 1,  0, 0}, // #515
  {DBGFIELD("IIC_SWAPGS_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #516
  {DBGFIELD("IIC_SYSCALL_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #517
  {DBGFIELD("IIC_SYS_ENTER_EXIT_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #518
  {DBGFIELD("IIC_JMP_REL_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #519
  {DBGFIELD("IIC_JMP_MEM_WriteJump") 1, false, false, 453, 2,  2, 1,  0, 0}, // #520
  {DBGFIELD("IIC_JMP_REG_WriteJumpLd") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #521
  {DBGFIELD("WriteJump")          1, false, false, 453, 2,  2, 1,  0, 0}, // #522
  {DBGFIELD("IIC_FUCOMI_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #523
  {DBGFIELD("IIC_FUCOM_WriteFAdd") 1, false, false, 451, 2,  6, 1,  0, 0}, // #524
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #525
  {DBGFIELD("IIC_SSE_UNPCK_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #526
  {DBGFIELD("IIC_SSE_ALU_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("IIC_SSE_ALU_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("IIC_SSE_ALU_F32S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("IIC_SSE_ALU_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("WriteFVarBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #531
  {DBGFIELD("WriteFVarBlend")     1, false, false, 1172, 2,  2, 1,  0, 0}, // #532
  {DBGFIELD("WriteFShuffleLd")    1, false, false, 1180, 3,  9, 1,  0, 0}, // #533
  {DBGFIELD("WriteFShuffle256")   1, false, false, 1172, 2,  2, 1,  0, 0}, // #534
  {DBGFIELD("WriteFShuffle")      1, false, false, 1172, 2,  2, 1,  0, 0}, // #535
  {DBGFIELD("IIC_SSE_ALU_F32P_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("WriteCvtF2ILd")      1, false, false, 13, 2,  5, 1,  0, 0}, // #537
  {DBGFIELD("WriteCvtF2I")        1, false, false, 13, 1,  9, 1,  0, 0}, // #538
  {DBGFIELD("WriteCvtF2FLd")      1, false, false, 13, 2,  5, 1,  0, 0}, // #539
  {DBGFIELD("WriteCvtF2F")        1, false, false, 13, 1,  9, 1,  0, 0}, // #540
  {DBGFIELD("WriteCvtF2FLd_WriteRMW") 2, false, false, 792, 2, 25, 2,  0, 0}, // #541
  {DBGFIELD("WriteCvtF2FLd_ReadAfterLd") 1, false, false, 13, 2,  5, 1,  4, 1}, // #542
  {DBGFIELD("WriteCvtI2FLd_ReadAfterLd") 1, false, false, 13, 2,  5, 1,  4, 1}, // #543
  {DBGFIELD("IIC_SSE_DIV_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("IIC_SSE_DIV_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("IIC_SSE_DIV_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("IIC_VERR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #547
  {DBGFIELD("IIC_VERW_REG_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #548
  {DBGFIELD("IIC_VERW_MEM_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #549
  {DBGFIELD("WriteStore")         1, false, false, 410, 2,  2, 1,  0, 0}, // #550
  {DBGFIELD("WriteShuffle256")    1, false, false, 1172, 2,  2, 1,  0, 0}, // #551
  {DBGFIELD("IIC_ALU_MEM_WriteFBlendLd_WriteRMW") 2, false, false, 1195, 3, 41, 2,  0, 0}, // #552
  {DBGFIELD("WriteFShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #553
  {DBGFIELD("WriteShuffle256Ld_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #554
  {DBGFIELD("IIC_ALU_MEM_WriteFShuffleLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #555
  {DBGFIELD("IIC_ALU_NONMEM_WriteFShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #556
  {DBGFIELD("IIC_SSE_MOVDQ")      0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("IIC_SSE_MOV_LH")     0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("IIC_SSE_MOVD_ToGP")  0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("IIC_SSE_MOV_S_MR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("IIC_SSE_MOV_S_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("IIC_SSE_MOV_S_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("IIC_SSE_MOVQ_RR")    0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("IIC_ALU_MEM_WriteMPSADLd_ReadAfterLd") 1, false, false, 1180, 3,  8, 1,  4, 1}, // #564
  {DBGFIELD("IIC_ALU_NONMEM_WriteMPSAD") 1, false, false, 1172, 2,  5, 1,  0, 0}, // #565
  {DBGFIELD("IIC_SSE_MUL_F64S_RM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("IIC_SSE_MUL_F64S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("IIC_SSE_MUL_F32S_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("WriteVecALULd")      1, false, false, 13, 2,  9, 1,  0, 0}, // #569
  {DBGFIELD("IIC_SSE_BIT_P_RM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("IIC_SSE_BIT_P_RR")   0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("WriteBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #572
  {DBGFIELD("WriteBlend")         1, false, false, 1172, 2,  2, 1,  0, 0}, // #573
  {DBGFIELD("WriteVarBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #574
  {DBGFIELD("WriteVarBlend")      1, false, false, 1172, 2,  2, 1,  0, 0}, // #575
  {DBGFIELD("IIC_ALU_MEM_WriteBlendLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #576
  {DBGFIELD("IIC_ALU_NONMEM_WriteBlend") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #577
  {DBGFIELD("WriteCLMulLd_ReadAfterLd") 1, false, false, 1210, 3,  8, 1,  4, 1}, // #578
  {DBGFIELD("WriteCLMul")         1, false, false, 1210, 2,  8, 1,  0, 0}, // #579
  {DBGFIELD("IIC_SSE_ALU_F32P_RR") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("WriteFShuffle256Ld_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #581
  {DBGFIELD("IIC_ALU_MEM_WriteShuffleLd") 1, false, false, 1180, 3,  9, 1,  0, 0}, // #582
  {DBGFIELD("IIC_ALU_NONMEM_WriteShuffle") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #583
  {DBGFIELD("WriteVarVecShift_ReadAfterLd") 1, false, false, 1172, 2,  2, 1,  4, 1}, // #584
  {DBGFIELD("WriteVarVecShift")   1, false, false, 1172, 2,  2, 1,  0, 0}, // #585
  {DBGFIELD("IIC_SSE_PSHUF_MI_WriteShuffleLd") 1, false, false, 1180, 3,  9, 1,  0, 0}, // #586
  {DBGFIELD("WriteVarVecShiftLd_ReadAfterLd") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #587
  {DBGFIELD("WriteFRcpLd")        1, false, false, 1180, 3, 10, 1,  0, 0}, // #588
  {DBGFIELD("WriteFRsqrtLd")      1, false, false, 1180, 3, 10, 1,  0, 0}, // #589
  {DBGFIELD("WriteFSqrtLd")       1, false, false, 1180, 3, 39, 1,  0, 0}, // #590
  {DBGFIELD("IIC_WAIT_WriteMicrocoded") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #591
  {DBGFIELD("IIC_WRMSR_WriteSystem") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #592
  {DBGFIELD("IIC_XADD_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #593
  {DBGFIELD("IIC_XADD_REG_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #594
  {DBGFIELD("IIC_XCHG_REG_WriteALU") 1, false, false, 410, 1,  2, 1,  0, 0}, // #595
  {DBGFIELD("IIC_XCHG_MEM_WriteALULd_WriteRMW") 2, false, false, 454, 2, 41, 2,  0, 0}, // #596
  {DBGFIELD("IIC_FXCH_WriteMove") 1, false, false, 410, 1,  2, 1,  0, 0}, // #597
  {DBGFIELD("IIC_XLAT_WriteLoad") 1, false, false, 14, 1,  6, 1,  0, 0}, // #598
  {DBGFIELD("MOV16rm")            1, false, false, 14, 1,  6, 1,  0, 0}, // #599
  {DBGFIELD("MOVSX32rm16_MOVSX32rm8") 1, false, false, 410, 2,  9, 1,  0, 0}, // #600
  {DBGFIELD("MOVZX32rm16_MOVZX32rm8") 1, false, false, 410, 2,  9, 1,  0, 0}, // #601
  {DBGFIELD("CMOVA16rr_CMOVAE16rr_CMOVB16rr_CMOVBE16rr_CMOVE16rr_CMOVG16rr_CMOVGE16rr_CMOVL16rr_CMOVLE16rr_CMOVNE16rr_CMOVNO16rr_CMOVNP16rr_CMOVNS16rr_CMOVO16rr_CMOVP16rr_CMOVS16rr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #602
  {DBGFIELD("CMOVA32rr_CMOVA64rr_CMOVAE32rr_CMOVAE64rr_CMOVB32rr_CMOVB64rr_CMOVBE32rr_CMOVBE64rr_CMOVE32rr_CMOVE64rr_CMOVG32rr_CMOVG64rr_CMOVGE32rr_CMOVGE64rr_CMOVL32rr_CMOVL64rr_CMOVLE32rr_CMOVLE64rr_CMOVNE32rr_CMOVNE64rr_CMOVNO32rr_CMOVNO64rr_CMOVNP32rr_CMOVNP64rr_CMOVNS32rr_CMOVNS64rr_CMOVO32rr_CMOVO64rr_CMOVP32rr_CMOVP64rr_CMOVS32rr_CMOVS64rr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #603
  {DBGFIELD("CMOVA16rm_CMOVAE16rm_CMOVB16rm_CMOVBE16rm_CMOVE16rm_CMOVG16rm_CMOVGE16rm_CMOVL16rm_CMOVLE16rm_CMOVNE16rm_CMOVNO16rm_CMOVNP16rm_CMOVNS16rm_CMOVO16rm_CMOVP16rm_CMOVS16rm") 1, false, false, 410, 2,  9, 1,  4, 1}, // #604
  {DBGFIELD("CMOVA32rm_CMOVA64rm_CMOVAE32rm_CMOVAE64rm_CMOVB32rm_CMOVB64rm_CMOVBE32rm_CMOVBE64rm_CMOVE32rm_CMOVE64rm_CMOVG32rm_CMOVG64rm_CMOVGE32rm_CMOVGE64rm_CMOVL32rm_CMOVL64rm_CMOVLE32rm_CMOVLE64rm_CMOVNE32rm_CMOVNE64rm_CMOVNO32rm_CMOVNO64rm_CMOVNP32rm_CMOVNP64rm_CMOVNS32rm_CMOVNS64rm_CMOVO32rm_CMOVO64rm_CMOVP32rm_CMOVP64rm_CMOVS32rm_CMOVS64rm") 1, false, false, 410, 2,  9, 1,  4, 1}, // #605
  {DBGFIELD("XCHG16ar_XCHG16rr_XCHG32ar_XCHG32ar64_XCHG32rr_XCHG64ar_XCHG64rr_XCHG8rr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #606
  {DBGFIELD("XCHG16rm_XCHG32rm_XCHG64rm_XCHG8rm") 2, false, false, 454, 2, 41, 2,  0, 0}, // #607
  {DBGFIELD("XLAT")               1, false, false, 14, 1,  6, 1,  0, 0}, // #608
  {DBGFIELD("PUSH16rmm_PUSH32rmm") 1, false, false, 14, 1,  2, 1,  0, 0}, // #609
  {DBGFIELD("PUSHF16_PUSHF32")    1, false, false, 410, 2,  2, 1,  0, 0}, // #610
  {DBGFIELD("PUSHA16_PUSHA32")    1, false, false, 410, 2,  2, 1,  0, 0}, // #611
  {DBGFIELD("POP16rmm_POP32rmm")  1, false, false, 14, 1,  2, 1,  0, 0}, // #612
  {DBGFIELD("POPF16")             1, false, false, 14, 1,  6, 1,  0, 0}, // #613
  {DBGFIELD("POPF32")             1, false, false, 14, 1,  6, 1,  0, 0}, // #614
  {DBGFIELD("POPA16_POPA32")      1, false, false, 14, 1,  6, 1,  0, 0}, // #615
  {DBGFIELD("LAHF_SAHF")          1, false, false, 410, 1,  2, 1,  0, 0}, // #616
  {DBGFIELD("BSWAP32r")           1, false, false, 410, 1,  2, 1,  0, 0}, // #617
  {DBGFIELD("BSWAP64r")           1, false, false, 410, 1,  2, 1,  0, 0}, // #618
  {DBGFIELD("MOVBE16rm_MOVBE64rm") 1, false, false, 410, 2,  9, 1,  0, 0}, // #619
  {DBGFIELD("MOVBE32rm")          1, false, false, 410, 2,  9, 1,  0, 0}, // #620
  {DBGFIELD("MOVBE16mr")          1, false, false, 410, 2,  2, 1,  0, 0}, // #621
  {DBGFIELD("MOVBE32mr")          1, false, false, 410, 2,  2, 1,  0, 0}, // #622
  {DBGFIELD("MOVBE64mr")          1, false, false, 410, 2,  2, 1,  0, 0}, // #623
  {DBGFIELD("ADD16mi_ADD16mi8_ADD16mr_ADD32mi_ADD32mi8_ADD32mr_ADD64mi32_ADD64mi8_ADD64mr_ADD8mi_ADD8mi8_ADD8mr_SUB16mi_SUB16mi8_SUB16mr_SUB32mi_SUB32mi8_SUB32mr_SUB64mi32_SUB64mi8_SUB64mr_SUB8mi_SUB8mi8_SUB8mr") 2, false, false, 454, 2, 41, 2,  0, 0}, // #624
  {DBGFIELD("ADC16ri_ADC16ri8_ADC16rr_ADC16rr_REV_ADC32ri_ADC32ri8_ADC32rr_ADC32rr_REV_ADC64ri32_ADC64ri8_ADC64rr_ADC64rr_REV_ADC8ri_ADC8ri8_ADC8rr_ADC8rr_REV_SBB16ri_SBB16ri8_SBB16rr_SBB16rr_REV_SBB32ri_SBB32ri8_SBB32rr_SBB32rr_REV_SBB64ri32_SBB64ri8_SBB64rr_SBB64rr_REV_SBB8ri_SBB8ri8_SBB8rr_SBB8rr_REV") 1, false, false, 410, 1,  2, 1,  0, 0}, // #625
  {DBGFIELD("ADC16rm_ADC32rm_ADC64rm_ADC8rm_SBB16rm_SBB32rm_SBB64rm_SBB8rm") 1, false, false, 410, 2,  9, 1,  4, 1}, // #626
  {DBGFIELD("ADC16mi_ADC16mi8_ADC16mr_ADC32mi_ADC32mi8_ADC32mr_ADC64mi32_ADC64mi8_ADC64mr_ADC8mi_ADC8mi8_ADC8mr_SBB16mi_SBB16mi8_SBB16mr_SBB32mi_SBB32mi8_SBB32mr_SBB64mi32_SBB64mi8_SBB64mr_SBB8mi_SBB8mi8_SBB8mr") 2, false, false, 454, 2, 41, 2,  0, 0}, // #627
  {DBGFIELD("DEC16m_DEC32m_DEC64m_DEC8m_INC16m_INC32m_INC64m_INC8m_NEG16m_NEG32m_NEG64m_NEG8m_NOT16m_NOT32m_NOT64m_NOT8m") 2, false, false, 454, 2, 41, 2,  0, 0}, // #628
  {DBGFIELD("IMUL16r_IMUL16rr")   1, false, false, 453, 2,  6, 1,  0, 0}, // #629
  {DBGFIELD("IMUL16rm")           1, false, false, 1081, 3, 16, 1,  4, 1}, // #630
  {DBGFIELD("IMUL16rmi_IMUL16rmi8") 1, false, false, 1081, 3, 16, 1,  0, 0}, // #631
  {DBGFIELD("IMUL16rri_IMUL16rri8") 1, false, false, 453, 2,  6, 1,  0, 0}, // #632
  {DBGFIELD("MUL16r")             1, false, false, 453, 2,  6, 1,  0, 0}, // #633
  {DBGFIELD("IMUL16m")            1, false, false, 1081, 3, 16, 1,  5, 2}, // #634
  {DBGFIELD("MUL16m")             1, false, false, 1081, 3, 16, 1,  5, 2}, // #635
  {DBGFIELD("IMUL32r_IMUL32rr")   1, false, false, 453, 2,  6, 1,  0, 0}, // #636
  {DBGFIELD("IMUL32rm")           1, false, false, 1081, 3, 16, 1,  4, 1}, // #637
  {DBGFIELD("IMUL32rmi_IMUL32rmi8") 1, false, false, 1081, 3, 16, 1,  0, 0}, // #638
  {DBGFIELD("IMUL32rri_IMUL32rri8") 1, false, false, 453, 2,  6, 1,  0, 0}, // #639
  {DBGFIELD("MUL32r")             1, false, false, 453, 2,  6, 1,  0, 0}, // #640
  {DBGFIELD("IMUL32m")            1, false, false, 1081, 3, 16, 1,  5, 2}, // #641
  {DBGFIELD("MUL32m")             1, false, false, 1081, 3, 16, 1,  5, 2}, // #642
  {DBGFIELD("IMUL64r_IMUL64rr")   1, false, false, 453, 2,  6, 1,  0, 0}, // #643
  {DBGFIELD("IMUL64rm")           1, false, false, 1081, 3, 16, 1,  4, 1}, // #644
  {DBGFIELD("IMUL64rmi32_IMUL64rmi8") 1, false, false, 1081, 3, 16, 1,  0, 0}, // #645
  {DBGFIELD("IMUL64rri32_IMUL64rri8") 1, false, false, 453, 2,  6, 1,  0, 0}, // #646
  {DBGFIELD("MUL64r")             1, false, false, 453, 2,  6, 1,  0, 0}, // #647
  {DBGFIELD("IMUL64m")            1, false, false, 1081, 3, 16, 1,  5, 2}, // #648
  {DBGFIELD("MUL64m")             1, false, false, 1081, 3, 16, 1,  5, 2}, // #649
  {DBGFIELD("MULX32rr")           2, false, false, 1205, 4, 54, 2,  0, 0}, // #650
  {DBGFIELD("MULX32rm")           2, false, false, 1205, 5, 45, 2,  0, 0}, // #651
  {DBGFIELD("MULX64rr")           2, false, false, 1205, 4, 54, 2,  0, 0}, // #652
  {DBGFIELD("MULX64rm")           2, false, false, 1205, 5, 45, 2,  0, 0}, // #653
  {DBGFIELD("DIV8r")              1, false, false, 1186, 2, 12, 1,  0, 0}, // #654
  {DBGFIELD("DIV16r")             1, false, false, 1186, 2, 12, 1,  0, 0}, // #655
  {DBGFIELD("DIV32r")             1, false, false, 1186, 2, 12, 1,  0, 0}, // #656
  {DBGFIELD("DIV64r")             1, false, false, 1186, 2, 12, 1,  0, 0}, // #657
  {DBGFIELD("IDIV8r")             1, false, false, 1186, 2, 12, 1,  0, 0}, // #658
  {DBGFIELD("IDIV16r")            1, false, false, 1186, 2, 12, 1,  0, 0}, // #659
  {DBGFIELD("IDIV32r")            1, false, false, 1186, 2, 12, 1,  0, 0}, // #660
  {DBGFIELD("IDIV64r")            1, false, false, 1186, 2, 12, 1,  0, 0}, // #661
  {DBGFIELD("AND16mi_AND16mi8_AND16mr_AND32mi_AND32mi8_AND32mr_AND64mi32_AND64mi8_AND64mr_AND8mi_AND8mi8_AND8mr_OR16mi_OR16mi8_OR16mr_OR32mi_OR32mi8_OR32mr_OR64mi32_OR64mi8_OR64mr_OR8mi_OR8mi8_OR8mr_XOR16mi_XOR16mi8_XOR16mr_XOR32mi_XOR32mi8_XOR32mr_XOR64mi32_XOR64mi8_XOR64mr_XOR8mi_XOR8mi8_XOR8mr") 2, false, false, 454, 2, 41, 2,  0, 0}, // #662
  {DBGFIELD("OR32mrLocked")       2, false, false, 454, 2, 41, 2,  0, 0}, // #663
  {DBGFIELD("SAR16m1_SAR16mi_SAR32m1_SAR32mi_SAR64m1_SAR64mi_SAR8m1_SAR8mi_SHL16m1_SHL16mi_SHL32m1_SHL32mi_SHL64m1_SHL64mi_SHL8m1_SHL8mi_SHR16m1_SHR16mi_SHR32m1_SHR32mi_SHR64m1_SHR64mi_SHR8m1_SHR8mi") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #664
  {DBGFIELD("SAR16rCL_SAR32rCL_SAR64rCL_SAR8rCL_SHL16rCL_SHL32rCL_SHL64rCL_SHL8rCL_SHR16rCL_SHR32rCL_SHR64rCL_SHR8rCL") 1, false, false, 516, 2,  2, 1,  0, 0}, // #665
  {DBGFIELD("SAR16mCL_SAR32mCL_SAR64mCL_SAR8mCL_SHL16mCL_SHL32mCL_SHL64mCL_SHL8mCL_SHR16mCL_SHR32mCL_SHR64mCL_SHR8mCL") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #666
  {DBGFIELD("ROL16r1_ROL32r1_ROL64r1_ROL8r1_ROR16r1_ROR32r1_ROR64r1_ROR8r1") 1, false, false, 516, 2,  2, 1,  0, 0}, // #667
  {DBGFIELD("ROL16mi_ROL32mi_ROL64mi_ROL8mi_ROR16mi_ROR32mi_ROR64mi_ROR8mi") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #668
  {DBGFIELD("ROL16rCL_ROL32rCL_ROL64rCL_ROL8rCL_ROR16rCL_ROR32rCL_ROR64rCL_ROR8rCL") 1, false, false, 516, 2,  2, 1,  0, 0}, // #669
  {DBGFIELD("ROL16mCL_ROL32mCL_ROL64mCL_ROL8mCL_ROR16mCL_ROR32mCL_ROR64mCL_ROR8mCL") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #670
  {DBGFIELD("RCL16r1_RCL32r1_RCL64r1_RCL8r1_RCR16r1_RCR32r1_RCR64r1_RCR8r1") 1, false, false, 516, 2,  2, 1,  0, 0}, // #671
  {DBGFIELD("RCL16m1_RCL32m1_RCL64m1_RCL8m1_RCR16m1_RCR32m1_RCR64m1_RCR8m1") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #672
  {DBGFIELD("RCL16rCL_RCL16ri_RCL32rCL_RCL32ri_RCL64rCL_RCL64ri_RCL8rCL_RCL8ri_RCR16rCL_RCR16ri_RCR32rCL_RCR32ri_RCR64rCL_RCR64ri_RCR8rCL_RCR8ri") 1, false, false, 516, 2,  2, 1,  0, 0}, // #673
  {DBGFIELD("RCL16mCL_RCL16mi_RCL32mCL_RCL32mi_RCL64mCL_RCL64mi_RCL8mCL_RCL8mi_RCR16mCL_RCR16mi_RCR32mCL_RCR32mi_RCR64mCL_RCR64mi_RCR8mCL_RCR8mi") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #674
  {DBGFIELD("SHLD16rri8_SHRD16rri8") 1, false, false, 516, 2,  2, 1,  0, 0}, // #675
  {DBGFIELD("SHLD32rri8_SHRD32rri8") 1, false, false, 516, 2,  2, 1,  0, 0}, // #676
  {DBGFIELD("SHLD64rri8_SHRD64rri8") 1, false, false, 516, 2,  2, 1,  0, 0}, // #677
  {DBGFIELD("SHLD16mri8_SHRD16mri8") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #678
  {DBGFIELD("SHLD32mri8_SHRD32mri8") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #679
  {DBGFIELD("SHLD64mri8_SHRD64mri8") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #680
  {DBGFIELD("SHLD16rrCL")         1, false, false, 516, 2,  2, 1,  0, 0}, // #681
  {DBGFIELD("SHLD32rrCL")         1, false, false, 516, 2,  2, 1,  0, 0}, // #682
  {DBGFIELD("SHLD64rrCL")         1, false, false, 516, 2,  2, 1,  0, 0}, // #683
  {DBGFIELD("SHRD16rrCL")         1, false, false, 516, 2,  2, 1,  0, 0}, // #684
  {DBGFIELD("SHRD32rrCL")         1, false, false, 516, 2,  2, 1,  0, 0}, // #685
  {DBGFIELD("SHRD64rrCL")         1, false, false, 516, 2,  2, 1,  0, 0}, // #686
  {DBGFIELD("SHLD16mrCL_SHRD16mrCL") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #687
  {DBGFIELD("SHLD32mrCL_SHRD32mrCL") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #688
  {DBGFIELD("SHLD64mrCL_SHRD64mrCL") 2, false, false, 1222, 3, 41, 2,  0, 0}, // #689
  {DBGFIELD("BT16ri8_BT32ri8_BT64ri8") 1, false, false, 410, 1,  2, 1,  0, 0}, // #690
  {DBGFIELD("BT16rr_BT32rr_BT64rr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #691
  {DBGFIELD("BT16mr_BT32mr_BT64mr") 1, false, false, 410, 2,  9, 1,  0, 0}, // #692
  {DBGFIELD("BT16mi8_BT32mi8_BT64mi8") 1, false, false, 410, 1,  2, 1,  0, 0}, // #693
  {DBGFIELD("BTC16ri8_BTC32ri8_BTC64ri8_BTR16ri8_BTR32ri8_BTR64ri8_BTS16ri8_BTS32ri8_BTS64ri8") 1, false, false, 410, 1,  2, 1,  0, 0}, // #694
  {DBGFIELD("BTC16rr_BTC32rr_BTC64rr_BTR16rr_BTR32rr_BTS16rr_BTS32rr_BTS64rr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #695
  {DBGFIELD("BTR64rr")            1, false, false, 410, 1,  2, 1,  0, 0}, // #696
  {DBGFIELD("BTC16mr_BTC32mr_BTC64mr_BTR16mr_BTR32mr_BTR64mr_BTS16mr_BTS32mr_BTS64mr") 2, false, false, 454, 2, 41, 2,  0, 0}, // #697
  {DBGFIELD("BTC16mi8_BTC32mi8_BTC64mi8_BTR16mi8_BTR32mi8_BTR64mi8_BTS16mi8_BTS32mi8_BTS64mi8") 2, false, false, 454, 2, 41, 2,  0, 0}, // #698
  {DBGFIELD("BSF16rr_BSF32rr_BSF64rr_BSR16rr_BSR32rr_BSR64rr") 1, false, false, 516, 2,  2, 1,  0, 0}, // #699
  {DBGFIELD("BSF16rm_BSF32rm_BSF64rm_BSR16rm_BSR32rm_BSR64rm") 1, false, false, 930, 3,  9, 1,  0, 0}, // #700
  {DBGFIELD("SETAEr_SETAr_SETBEr_SETBr_SETEr_SETGEr_SETGr_SETLEr_SETLr_SETNEr_SETNOr_SETNPr_SETNSr_SETOr_SETPr_SETSr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #701
  {DBGFIELD("SETAEm_SETAm_SETBEm_SETBm_SETEm_SETGEm_SETGm_SETLEm_SETLm_SETNEm_SETNOm_SETNPm_SETNSm_SETOm_SETPm_SETSm") 2, false, false, 1155, 2, 21, 2,  0, 0}, // #702
  {DBGFIELD("CLD")                1, false, false, 410, 1,  2, 1,  0, 0}, // #703
  {DBGFIELD("STD")                1, false, false, 410, 1,  2, 1,  0, 0}, // #704
  {DBGFIELD("TZCNT16rr_TZCNT32rr_TZCNT64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("TZCNT16rm_TZCNT32rm_TZCNT64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("ANDN32rr_ANDN64rr")  1, false, false, 410, 1,  2, 1,  0, 0}, // #707
  {DBGFIELD("ANDN32rm_ANDN64rm")  1, false, false, 410, 2,  9, 1,  4, 1}, // #708
  {DBGFIELD("BLSI32rr_BLSI64rr_BLSMSK32rr_BLSMSK64rr_BLSR32rr_BLSR64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("BLSI32rm_BLSI64rm_BLSMSK32rm_BLSMSK64rm_BLSR32rm_BLSR64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("BEXTR32rr_BEXTR64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("BEXTR32rm_BEXTR64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("BZHI32rr_BZHI64rr")  0, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("BZHI32rm_BZHI64rm")  0, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("PDEP32rr_PDEP64rr_PEXT32rr_PEXT64rr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("PDEP32rm_PDEP64rm_PEXT32rm_PEXT64rm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("JCXZ_JRCXZ")         1, false, false, 453, 2,  2, 1,  0, 0}, // #717
  {DBGFIELD("LOOP")               1, false, false, 453, 2,  2, 1,  0, 0}, // #718
  {DBGFIELD("LOOPE")              1, false, false, 453, 2,  2, 1,  0, 0}, // #719
  {DBGFIELD("LOOPNE")             1, false, false, 453, 2,  2, 1,  0, 0}, // #720
  {DBGFIELD("CALL16r_CALL32r")    1, false, false, 453, 2,  2, 1,  0, 0}, // #721
  {DBGFIELD("CALL16m_CALL32m")    1, false, false, 1081, 3,  9, 1,  0, 0}, // #722
  {DBGFIELD("LRETL_LRETQ_LRETW_RETL_RETQ_RETW") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #723
  {DBGFIELD("LRETIL_LRETIQ_LRETIW") 1, false, false, 1081, 3,  9, 1,  0, 0}, // #724
  {DBGFIELD("RETIL_RETIQ_RETIW")  1, false, false, 1081, 3,  9, 1,  0, 0}, // #725
  {DBGFIELD("BOUNDS16rm_BOUNDS32rm") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #726
  {DBGFIELD("INTO")               1, false, false, 1172, 2,  1, 1,  0, 0}, // #727
  {DBGFIELD("LODSB_LODSW")        1, false, false, 1172, 2,  1, 1,  0, 0}, // #728
  {DBGFIELD("LODSL_LODSQ")        1, false, false, 1172, 2,  1, 1,  0, 0}, // #729
  {DBGFIELD("STOSB_STOSL_STOSQ_STOSW") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #730
  {DBGFIELD("MOVSB_MOVSL_MOVSQ_MOVSW") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #731
  {DBGFIELD("MOVSLDUPrm")         1, false, false, 14, 1,  6, 1,  0, 0}, // #732
  {DBGFIELD("MOVSLDUPrr")         1, false, false, 1172, 2,  2, 1,  0, 0}, // #733
  {DBGFIELD("SCASB_SCASL_SCASQ_SCASW") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #734
  {DBGFIELD("CMPSB_CMPSL_CMPSQ_CMPSW") 1, false, false, 1172, 2,  1, 1,  0, 0}, // #735
  {DBGFIELD("XADD16rm_XADD32rm_XADD64rm_XADD8rm") 2, false, false, 454, 2, 41, 2,  0, 0}, // #736
  {DBGFIELD("CMPXCHG16rm_CMPXCHG32rm_CMPXCHG64rm") 2, false, false, 454, 2, 41, 2,  0, 0}, // #737
  {DBGFIELD("CMPXCHG8rm")         2, false, false, 454, 2, 41, 2,  0, 0}, // #738
  {DBGFIELD("CMPXCHG8B")          2, false, false, 454, 2, 41, 2,  0, 0}, // #739
  {DBGFIELD("CMPXCHG16B")         2, false, false, 454, 2, 41, 2,  0, 0}, // #740
  {DBGFIELD("PAUSE")              1, false, false,  0, 0,  2, 1,  0, 0}, // #741
  {DBGFIELD("LEAVE_LEAVE64")      1, false, false, 410, 1,  2, 1,  0, 0}, // #742
  {DBGFIELD("XGETBV")             1, false, false, 1172, 2,  1, 1,  0, 0}, // #743
  {DBGFIELD("RDTSC")              1, false, false, 1172, 2,  1, 1,  0, 0}, // #744
  {DBGFIELD("RDTSCP")             1, false, false, 1172, 2,  1, 1,  0, 0}, // #745
  {DBGFIELD("RDPMC")              1, false, false, 1172, 2,  1, 1,  0, 0}, // #746
  {DBGFIELD("RDRAND16r_RDRAND32r_RDRAND64r") 0, false, false,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("LD_Frr")             1, false, false, 410, 1,  2, 1,  0, 0}, // #748
  {DBGFIELD("LD_F80m")            1, false, false, 14, 1,  6, 1,  0, 0}, // #749
  {DBGFIELD("FBLDm")              0, false, false,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("ST_FPrr_ST_Frr")     1, false, false, 410, 1,  2, 1,  0, 0}, // #751
  {DBGFIELD("ST_FP80m")           1, false, false, 410, 2,  2, 1,  0, 0}, // #752
  {DBGFIELD("FBSTPm")             0, false, false,  0, 0,  0, 0,  0, 0}, // #753
  {DBGFIELD("XCH_F")              1, false, false, 410, 1,  2, 1,  0, 0}, // #754
  {DBGFIELD("ILD_F16m_ILD_F32m_ILD_F64m") 1, false, false, 14, 1,  6, 1,  0, 0}, // #755
  {DBGFIELD("IST_F16m_IST_F32m_IST_FP16m_IST_FP32m") 1, false, false, 410, 2,  2, 1,  0, 0}, // #756
  {DBGFIELD("LD_F0")              1, false, false,  0, 0,  2, 1,  0, 0}, // #757
  {DBGFIELD("LD_F1")              1, false, false,  0, 0,  2, 1,  0, 0}, // #758
  {DBGFIELD("FLDPI")              1, false, false, 1172, 2,  1, 1,  0, 0}, // #759
  {DBGFIELD("CMOVBE_F_CMOVBE_Fp32_CMOVBE_Fp64_CMOVBE_Fp80_CMOVB_F_CMOVB_Fp32_CMOVB_Fp64_CMOVB_Fp80_CMOVNBE_F_CMOVNBE_Fp32_CMOVNBE_Fp64_CMOVNBE_Fp80_CMOVNB_F_CMOVNB_Fp32_CMOVNB_Fp64_CMOVNB_Fp80_CMOVNE_F_CMOVNE_Fp32_CMOVNE_Fp64_CMOVNE_Fp80_CMOVNP_F_CMOVNP_Fp32_CMOVNP_Fp64_CMOVNP_Fp80_CMOVP_F_CMOVP_Fp32_CMOVP_Fp64_CMOVP_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #760
  {DBGFIELD("FNSTSW16r")          1, false, false, 410, 1,  2, 1,  0, 0}, // #761
  {DBGFIELD("FNSTSWm")            0, false, false,  0, 0,  0, 0,  0, 0}, // #762
  {DBGFIELD("FLDCW16m")           1, false, false, 14, 1,  6, 1,  0, 0}, // #763
  {DBGFIELD("FNSTCW16m")          1, false, false, 410, 1,  2, 1,  0, 0}, // #764
  {DBGFIELD("FDECSTP_FINCSTP")    1, false, false, 1172, 2,  1, 1,  0, 0}, // #765
  {DBGFIELD("FFREE_FFREEP")       1, false, false, 1172, 2,  1, 1,  0, 0}, // #766
  {DBGFIELD("FSAVEm")             0, false, false,  0, 0,  0, 0,  0, 0}, // #767
  {DBGFIELD("FRSTORm")            0, false, false,  0, 0,  0, 0,  0, 0}, // #768
  {DBGFIELD("ABS_F_ABS_Fp32_ABS_Fp64_ABS_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #769
  {DBGFIELD("CHS_F_CHS_Fp32_CHS_Fp64_CHS_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #770
  {DBGFIELD("COMP_FST0r_COM_FST0r") 0, false, false,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("UCOM_FPr_UCOM_Fr")   1, false, false, 451, 2,  6, 1,  0, 0}, // #772
  {DBGFIELD("FCOM32m_FCOM64m_FCOMP32m_FCOMP64m") 0, false, false,  0, 0,  0, 0,  0, 0}, // #773
  {DBGFIELD("FCOMPP")             1, false, false, 1172, 2,  1, 1,  0, 0}, // #774
  {DBGFIELD("UCOM_FPPr")          1, false, false, 451, 2,  6, 1,  0, 0}, // #775
  {DBGFIELD("COM_FIPr_COM_FIr")   1, false, false, 451, 2,  6, 1,  0, 0}, // #776
  {DBGFIELD("UCOM_FIPr_UCOM_FIr") 1, false, false, 451, 2,  6, 1,  0, 0}, // #777
  {DBGFIELD("FICOM16m_FICOM32m_FICOMP16m_FICOMP32m") 0, false, false,  0, 0,  0, 0,  0, 0}, // #778
  {DBGFIELD("TST_F_TST_Fp32_TST_Fp64_TST_Fp80") 0, false, false,  0, 0,  0, 0,  0, 0}, // #779
  {DBGFIELD("FXAM")               1, false, false, 1172, 2,  1, 1,  0, 0}, // #780
  {DBGFIELD("FPREM")              1, false, false, 1172, 2,  1, 1,  0, 0}, // #781
  {DBGFIELD("FPREM1")             1, false, false, 1172, 2,  1, 1,  0, 0}, // #782
  {DBGFIELD("FRNDINT")            1, false, false, 1172, 2,  1, 1,  0, 0}, // #783
  {DBGFIELD("FSCALE")             1, false, false, 1172, 2,  1, 1,  0, 0}, // #784
  {DBGFIELD("FXTRACT")            1, false, false, 1172, 2,  1, 1,  0, 0}, // #785
  {DBGFIELD("FNOP")               1, false, false, 1172, 2,  1, 1,  0, 0}, // #786
  {DBGFIELD("WAIT")               1, false, false, 1172, 2,  1, 1,  0, 0}, // #787
  {DBGFIELD("FNCLEX")             1, false, false, 1172, 2,  1, 1,  0, 0}, // #788
  {DBGFIELD("FNINIT")             1, false, false, 1172, 2,  1, 1,  0, 0}, // #789
  {DBGFIELD("MMX_MOVD64from64rr_MMX_MOVD64grr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #790
  {DBGFIELD("MOVPDI2DIrr_VMOVPDI2DIrr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #791
  {DBGFIELD("MMX_MOVD64rr_MMX_MOVD64to64rr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #792
  {DBGFIELD("MOVDI2PDIrr_VMOVDI2PDIrr") 1, false, false, 410, 1,  2, 1,  0, 0}, // #793
  {DBGFIELD("VMOVPQIto64rr")      1, false, false, 410, 1,  2, 1,  0, 0}, // #794
  {DBGFIELD("VMOV64toPQIrr")      1, false, false, 410, 1,  2, 1,  0, 0}, // #795
  {DBGFIELD("MMX_MOVQ64rr_MMX_MOVQ64rr_REV") 1, false, false, 410, 1,  2, 1,  0, 0}, // #796
  {DBGFIELD("MOVDQArr_MOVDQArr_REV_VMOVDQAYrr_VMOVDQAYrr_REV_VMOVDQArr_VMOVDQArr_REV") 1, false, false, 410, 1,  2, 1,  0, 0}, // #797
  {DBGFIELD("MOVDQUrr_MOVDQUrr_REV_VMOVDQUYrr_VMOVDQUYrr_REV_VMOVDQUrr_VMOVDQUrr_REV") 1, false, false, 410, 1,  2, 1,  0, 0}, // #798
  {DBGFIELD("MMX_MOVDQ2Qrr")      1, false, false, 410, 1,  2, 1,  0, 0}, // #799
  {DBGFIELD("MMX_MOVQ2DQrr")      1, false, false, 410, 1,  2, 1,  0, 0}, // #800
  {DBGFIELD("MMX_PACKSSDWirr_MMX_PACKSSWBirr_MMX_PACKUSWBirr") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #801
  {DBGFIELD("MMX_PACKSSDWirm_MMX_PACKSSWBirm_MMX_PACKUSWBirm") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #802
  {DBGFIELD("VPMOVSXBQYrr_VPMOVSXBWYrr_VPMOVSXDQYrr_VPMOVZXBQYrr_VPMOVZXBWYrr_VPMOVZXDQYrr") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #803
  {DBGFIELD("PBLENDWrri")         1, false, false, 1172, 2,  2, 1,  0, 0}, // #804
  {DBGFIELD("VPBLENDWYrri_VPBLENDWrri") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #805
  {DBGFIELD("PBLENDWrmi")         1, false, false, 1180, 3,  9, 1,  4, 1}, // #806
  {DBGFIELD("VPBLENDWYrmi_VPBLENDWrmi") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #807
  {DBGFIELD("VPBLENDDYrri_VPBLENDDrri") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #808
  {DBGFIELD("VPBLENDDYrmi_VPBLENDDrmi") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #809
  {DBGFIELD("MMX_MASKMOVQ_MMX_MASKMOVQ64") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #810
  {DBGFIELD("MASKMOVDQU_MASKMOVDQU64_VMASKMOVDQU_VMASKMOVDQU64") 1, false, false, 410, 2,  2, 1,  0, 0}, // #811
  {DBGFIELD("VPMASKMOVDYrm_VPMASKMOVDrm_VPMASKMOVQYrm_VPMASKMOVQrm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #812
  {DBGFIELD("VPMASKMOVDYmr_VPMASKMOVDmr_VPMASKMOVQYmr_VPMASKMOVQmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #813
  {DBGFIELD("MMX_PMOVMSKBrr")     0, false, false,  0, 0,  0, 0,  0, 0}, // #814
  {DBGFIELD("PMOVMSKBrr_VPMOVMSKBrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #815
  {DBGFIELD("VPMOVMSKBYrr")       1, false, false, 13, 1,  2, 1,  0, 0}, // #816
  {DBGFIELD("MMX_PEXTRWirri")     1, false, false, 1172, 2,  2, 1,  0, 0}, // #817
  {DBGFIELD("PEXTRBrr_PEXTRDrr_PEXTRQrr_PEXTRWrr_REV") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #818
  {DBGFIELD("PEXTRBmr_PEXTRDmr_PEXTRQmr_PEXTRWmr") 2, false, false, 1195, 3, 41, 2,  0, 0}, // #819
  {DBGFIELD("VPBROADCASTBrm_VPBROADCASTWrm") 1, false, false, 14, 1,  6, 1,  0, 0}, // #820
  {DBGFIELD("VPBROADCASTBYrm_VPBROADCASTWYrm") 1, false, false, 14, 1,  6, 1,  0, 0}, // #821
  {DBGFIELD("VPGATHERDDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #822
  {DBGFIELD("VPGATHERDDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #823
  {DBGFIELD("VPGATHERQDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #824
  {DBGFIELD("VPGATHERQDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #825
  {DBGFIELD("VPGATHERDQrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #826
  {DBGFIELD("VPGATHERDQYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #827
  {DBGFIELD("VPGATHERQQrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #828
  {DBGFIELD("VPGATHERQQYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #829
  {DBGFIELD("MMX_PHADDSWrr64_MMX_PHADDWrr64_MMX_PHSUBSWrr64_MMX_PHSUBWrr64") 1, false, false, 13, 1,  2, 1,  0, 0}, // #830
  {DBGFIELD("MMX_PHADDrr64_MMX_PHSUBDrr64") 1, false, false, 13, 1,  2, 1,  0, 0}, // #831
  {DBGFIELD("PHADDDrr_PHSUBDrr_VPHADDDrr_VPHSUBDrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #832
  {DBGFIELD("PHADDSWrr128_PHSUBSWrr128_VPHADDSWrr128_VPHSUBSWrr128") 1, false, false, 13, 1,  2, 1,  0, 0}, // #833
  {DBGFIELD("PHADDWrr_PHSUBWrr_VPHADDDYrr_VPHADDWYrr_VPHADDWrr_VPHSUBDYrr_VPHSUBWYrr_VPHSUBWrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #834
  {DBGFIELD("VPHADDSWrr256_VPHSUBSWrr256") 1, false, false, 13, 1,  2, 1,  0, 0}, // #835
  {DBGFIELD("MMX_PHADDSWrm64_MMX_PHADDWrm64_MMX_PHSUBSWrm64_MMX_PHSUBWrm64") 1, false, false, 13, 2,  9, 1,  4, 1}, // #836
  {DBGFIELD("MMX_PHADDrm64_MMX_PHSUBDrm64") 1, false, false, 13, 2,  9, 1,  4, 1}, // #837
  {DBGFIELD("PHADDDrm_PHSUBDrm_VPHADDDrm_VPHSUBDrm") 1, false, false, 13, 2,  9, 1,  4, 1}, // #838
  {DBGFIELD("PHADDSWrm128_PHSUBSWrm128_VPHADDSWrm128_VPHSUBSWrm128") 1, false, false, 13, 2,  9, 1,  4, 1}, // #839
  {DBGFIELD("PHADDWrm_PHSUBWrm_VPHADDDYrm_VPHADDWYrm_VPHADDWrm_VPHSUBDYrm_VPHSUBWYrm_VPHSUBWrm") 1, false, false, 13, 2,  9, 1,  4, 1}, // #840
  {DBGFIELD("VPHADDSWrm256_VPHSUBSWrm256") 1, false, false, 13, 2,  9, 1,  4, 1}, // #841
  {DBGFIELD("PCMPGTQrr_VPCMPGTQYrr_VPCMPGTQrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #842
  {DBGFIELD("PCMPGTQrm_VPCMPGTQYrm_VPCMPGTQrm") 1, false, false, 13, 2,  9, 1,  4, 1}, // #843
  {DBGFIELD("PMULLDrr_VPMULLDYrr_VPMULLDrr") 1, false, false, 1172, 2,  9, 1,  0, 0}, // #844
  {DBGFIELD("PMULLDrm_VPMULLDYrm_VPMULLDrm") 1, false, false, 1180, 3,  5, 1,  4, 1}, // #845
  {DBGFIELD("PTESTrr_VPTESTYrr_VPTESTrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #846
  {DBGFIELD("PTESTrm_VPTESTYrm_VPTESTrm") 1, false, false, 13, 2,  9, 1,  4, 1}, // #847
  {DBGFIELD("PSLLDrr_PSLLQrr_PSLLWrr_PSRADrr_PSRAWrr_PSRLDrr_PSRLQrr_PSRLWrr_VPSLLDYrr_VPSLLDrr_VPSLLQYrr_VPSLLQrr_VPSLLWYrr_VPSLLWrr_VPSRADYrr_VPSRADrr_VPSRAWYrr_VPSRAWrr_VPSRLDYrr_VPSRLDrr_VPSRLQYrr_VPSRLQrr_VPSRLWYrr_VPSRLWrr") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #848
  {DBGFIELD("PSLLDQri_PSRLDQri_VPSLLDQYri_VPSLLDQri_VPSRLDQYri_VPSRLDQri") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #849
  {DBGFIELD("MMX_EMMS")           0, false, false,  0, 0,  0, 0,  0, 0}, // #850
  {DBGFIELD("MOVMSKPDrr_MOVMSKPSrr_VMOVMSKPDrr_VMOVMSKPSrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #851
  {DBGFIELD("VMOVMSKPDYrr_VMOVMSKPSYrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #852
  {DBGFIELD("VPERM2F128rr")       1, false, false, 1172, 2,  2, 1,  0, 0}, // #853
  {DBGFIELD("VPERM2F128rm")       1, false, false, 1180, 3,  9, 1,  4, 1}, // #854
  {DBGFIELD("BLENDVPDrr0_BLENDVPSrr0") 1, false, false, 1172, 2,  2, 1,  0, 0}, // #855
  {DBGFIELD("BLENDVPDrm0_BLENDVPSrm0") 1, false, false, 1180, 3,  9, 1,  4, 1}, // #856
  {DBGFIELD("VBROADCASTF128")     1, false, false, 1180, 3,  9, 1,  0, 0}, // #857
  {DBGFIELD("EXTRACTPSrr")        1, false, false, 1172, 2,  2, 1,  0, 0}, // #858
  {DBGFIELD("VEXTRACTPSrr")       1, false, false, 1172, 2,  2, 1,  0, 0}, // #859
  {DBGFIELD("EXTRACTPSmr")        2, false, false, 1195, 3, 41, 2,  0, 0}, // #860
  {DBGFIELD("VEXTRACTPSmr")       2, false, false, 1195, 3, 41, 2,  0, 0}, // #861
  {DBGFIELD("VEXTRACTF128rr")     1, false, false, 1172, 2,  2, 1,  0, 0}, // #862
  {DBGFIELD("VEXTRACTF128mr")     1, false, false, 410, 2,  2, 1,  0, 0}, // #863
  {DBGFIELD("VINSERTF128rr")      1, false, false, 1172, 2,  2, 1,  0, 0}, // #864
  {DBGFIELD("VINSERTF128rm")      1, false, false, 1180, 3,  9, 1,  4, 1}, // #865
  {DBGFIELD("VMASKMOVPDYrm_VMASKMOVPDrm_VMASKMOVPSYrm_VMASKMOVPSrm") 0, false, false,  0, 0,  0, 0,  0, 0}, // #866
  {DBGFIELD("VMASKMOVPDmr_VMASKMOVPSmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #867
  {DBGFIELD("VMASKMOVPDYmr_VMASKMOVPSYmr") 0, false, false,  0, 0,  0, 0,  0, 0}, // #868
  {DBGFIELD("VGATHERDPSrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #869
  {DBGFIELD("VGATHERDPSYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #870
  {DBGFIELD("VGATHERQPSrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #871
  {DBGFIELD("VGATHERQPSYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #872
  {DBGFIELD("VGATHERDPDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #873
  {DBGFIELD("VGATHERDPDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #874
  {DBGFIELD("VGATHERQPDrm")       0, false, false,  0, 0,  0, 0,  0, 0}, // #875
  {DBGFIELD("VGATHERQPDYrm")      0, false, false,  0, 0,  0, 0,  0, 0}, // #876
  {DBGFIELD("CVTPD2PSrr_VCVTPD2PSrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #877
  {DBGFIELD("CVTPD2PSrm_VCVTPD2PSrm") 1, false, false, 13, 2,  5, 1,  0, 0}, // #878
  {DBGFIELD("VCVTPD2PSYrr")       1, false, false, 13, 1,  9, 1,  0, 0}, // #879
  {DBGFIELD("VCVTPD2PSYrm")       1, false, false, 13, 2,  5, 1,  0, 0}, // #880
  {DBGFIELD("CVTSD2SSrr_Int_CVTSD2SSrr_Int_VCVTSD2SSrr_VCVTSD2SSrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #881
  {DBGFIELD("CVTSD2SSrm")         1, false, false, 13, 2,  5, 1,  0, 0}, // #882
  {DBGFIELD("Int_CVTSD2SSrm_Int_VCVTSD2SSrm_VCVTSD2SSrm") 1, false, false, 13, 2,  5, 1,  4, 1}, // #883
  {DBGFIELD("CVTPS2PDrr_VCVTPS2PDrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #884
  {DBGFIELD("CVTPS2PDrm_VCVTPS2PDYrm_VCVTPS2PDrm") 1, false, false, 13, 2,  5, 1,  0, 0}, // #885
  {DBGFIELD("VCVTPS2PDYrr")       1, false, false, 13, 1,  9, 1,  0, 0}, // #886
  {DBGFIELD("CVTSS2SDrr_Int_CVTSS2SDrr_Int_VCVTSS2SDrr_VCVTSS2SDrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #887
  {DBGFIELD("CVTSS2SDrm")         1, false, false, 13, 2,  5, 1,  0, 0}, // #888
  {DBGFIELD("Int_CVTSS2SDrm_Int_VCVTSS2SDrm_VCVTSS2SDrm") 1, false, false, 13, 2,  5, 1,  4, 1}, // #889
  {DBGFIELD("CVTDQ2PDrr")         1, false, false, 13, 1,  9, 1,  0, 0}, // #890
  {DBGFIELD("VCVTDQ2PDrr")        1, false, false, 13, 1,  9, 1,  0, 0}, // #891
  {DBGFIELD("VCVTDQ2PDYrr")       1, false, false, 13, 1,  9, 1,  0, 0}, // #892
  {DBGFIELD("CVTPD2DQrr_CVTTPD2DQrr_VCVTTPD2DQrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #893
  {DBGFIELD("VCVTPD2DQrr")        1, false, false, 13, 1,  9, 1,  0, 0}, // #894
  {DBGFIELD("CVTPD2DQrm_CVTTPD2DQrm_VCVTTPD2DQrm") 1, false, false, 13, 2,  5, 1,  0, 0}, // #895
  {DBGFIELD("VCVTPD2DQrm")        1, false, false, 13, 2,  5, 1,  0, 0}, // #896
  {DBGFIELD("VCVTPD2DQYrr")       1, false, false, 13, 1,  9, 1,  0, 0}, // #897
  {DBGFIELD("VCVTTPD2DQYrr")      1, false, false, 13, 1,  9, 1,  0, 0}, // #898
  {DBGFIELD("VCVTPD2DQYrm")       1, false, false, 13, 2,  5, 1,  0, 0}, // #899
  {DBGFIELD("VCVTTPD2DQYrm")      1, false, false, 13, 2,  5, 1,  0, 0}, // #900
  {DBGFIELD("MMX_CVTPS2PIirr_MMX_CVTTPS2PIirr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #901
  {DBGFIELD("MMX_CVTPI2PDirr")    1, false, false, 13, 1,  9, 1,  0, 0}, // #902
  {DBGFIELD("MMX_CVTPD2PIirr_MMX_CVTTPD2PIirr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #903
  {DBGFIELD("CVTSI2SS64rr_CVTSI2SSrr_Int_CVTSI2SS64rr_Int_CVTSI2SSrr_Int_VCVTSI2SS64rr_Int_VCVTSI2SSrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #904
  {DBGFIELD("VCVTSI2SS64rr_VCVTSI2SSrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #905
  {DBGFIELD("CVTSS2SI64rr_CVTTSS2SI64rr_Int_CVTTSS2SI64rr_Int_VCVTTSS2SI64rr_VCVTSS2SI64rr_VCVTTSS2SI64rr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #906
  {DBGFIELD("CVTSS2SIrr_CVTTSS2SIrr_Int_CVTTSS2SIrr_Int_VCVTTSS2SIrr_VCVTSS2SIrr_VCVTTSS2SIrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #907
  {DBGFIELD("CVTSS2SI64rm_CVTTSS2SI64rm_Int_CVTTSS2SI64rm_Int_VCVTTSS2SI64rm_VCVTSS2SI64rm_VCVTTSS2SI64rm") 1, false, false, 13, 2,  5, 1,  0, 0}, // #908
  {DBGFIELD("CVTSS2SIrm_CVTTSS2SIrm_Int_CVTTSS2SIrm_Int_VCVTTSS2SIrm_VCVTSS2SIrm_VCVTTSS2SIrm") 1, false, false, 13, 2,  5, 1,  0, 0}, // #909
  {DBGFIELD("CVTSD2SI64rr_CVTSD2SIrr_CVTTSD2SI64rr_CVTTSD2SIrr_Int_CVTTSD2SI64rr_Int_CVTTSD2SIrr_Int_VCVTTSD2SI64rr_Int_VCVTTSD2SIrr_VCVTSD2SI64rr_VCVTSD2SIrr_VCVTTSD2SI64rr_VCVTTSD2SIrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #910
  {DBGFIELD("CVTSD2SI64rm_CVTSD2SIrm_CVTTSD2SI64rm_CVTTSD2SIrm_Int_CVTTSD2SI64rm_Int_CVTTSD2SIrm_Int_VCVTTSD2SI64rm_Int_VCVTTSD2SIrm_VCVTSD2SI64rm_VCVTSD2SIrm_VCVTTSD2SI64rm_VCVTTSD2SIrm") 1, false, false, 13, 2,  5, 1,  0, 0}, // #911
  {DBGFIELD("VCVTPS2PHYrr_VCVTPS2PHrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #912
  {DBGFIELD("VCVTPS2PHYmr_VCVTPS2PHmr") 2, false, false, 792, 2, 25, 2,  0, 0}, // #913
  {DBGFIELD("VCVTPH2PSYrr_VCVTPH2PSrr") 1, false, false, 13, 1,  9, 1,  0, 0}, // #914
  {DBGFIELD("HADDPDrr_HADDPSrr_HSUBPDrr_HSUBPSrr_VHADDPDYrr_VHADDPDrr_VHADDPSYrr_VHADDPSrr_VHSUBPDYrr_VHSUBPDrr_VHSUBPSYrr_VHSUBPSrr") 1, false, false, 631, 1,  6, 1,  0, 0}, // #915
  {DBGFIELD("HADDPDrm_HADDPSrm_HSUBPDrm_HSUBPSrm_VHADDPDYrm_VHADDPDrm_VHADDPSYrm_VHADDPSrm_VHSUBPDYrm_VHSUBPDrm_VHSUBPSYrm_VHSUBPSrm") 1, false, false, 972, 2, 16, 1,  4, 1}, // #916
  {DBGFIELD("MULPDrr_VMULPDrr")   1, false, false, 1202, 3,  3, 1,  0, 0}, // #917
  {DBGFIELD("MULPSrr_VMULPSrr")   1, false, false, 1202, 3,  3, 1,  0, 0}, // #918
  {DBGFIELD("MULSDrr_MULSDrr_Int_VMULSDrr_VMULSDrr_Int") 1, false, false, 1202, 3,  3, 1,  0, 0}, // #919
  {DBGFIELD("MULSSrr_MULSSrr_Int_VMULSSrr_VMULSSrr_Int") 1, false, false, 1202, 3,  3, 1,  0, 0}, // #920
  {DBGFIELD("MULPDrm_MULPSrm_VMULPDrm_VMULPSrm") 1, false, false, 1198, 4, 10, 1,  4, 1}, // #921
  {DBGFIELD("MULSDrm_MULSDrm_Int_MULSSrm_MULSSrm_Int_VMULSDrm_VMULSDrm_Int_VMULSSrm_VMULSSrm_Int") 1, false, false, 1198, 4, 10, 1,  4, 1}, // #922
  {DBGFIELD("VDIVPSYrr")          1, false, false, 1192, 3, 53, 1,  0, 0}, // #923
  {DBGFIELD("VDIVPSYrm")          1, false, false, 1188, 4, 52, 1,  4, 1}, // #924
  {DBGFIELD("VDIVPDYrr")          1, false, false, 1192, 3, 53, 1,  0, 0}, // #925
  {DBGFIELD("VDIVPDYrm")          1, false, false, 1188, 4, 52, 1,  4, 1}, // #926
  {DBGFIELD("VRCPPSYr")           1, false, false, 1172, 2,  3, 1,  0, 0}, // #927
  {DBGFIELD("VRCPPSYm")           1, false, false, 1180, 3, 10, 1,  0, 0}, // #928
  {DBGFIELD("ROUNDPDr_ROUNDPSr_VROUNDPDr_VROUNDPSr_VROUNDYPDr_VROUNDYPSr") 1, false, false, 451, 2,  6, 1,  0, 0}, // #929
  {DBGFIELD("ROUNDSDr_ROUNDSDr_Int_ROUNDSSr_ROUNDSSr_Int_VROUNDSDr_VROUNDSDr_Int_VROUNDSSr_VROUNDSSr_Int") 1, false, false, 451, 2,  6, 1,  0, 0}, // #930
  {DBGFIELD("ROUNDPDm_VROUNDPDm_VROUNDYPDm") 1, false, false, 1174, 3, 16, 1,  0, 0}, // #931
  {DBGFIELD("ROUNDPSm_VROUNDPSm_VROUNDYPSm") 1, false, false, 1174, 3, 16, 1,  0, 0}, // #932
  {DBGFIELD("ROUNDSDm_ROUNDSDm_Int_ROUNDSSm_ROUNDSSm_Int_VROUNDSDm_VROUNDSDm_Int_VROUNDSSm_VROUNDSSm_Int") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #933
  {DBGFIELD("DPPSrri_VDPPSYrri_VDPPSrri") 1, false, false, 451, 2,  6, 1,  0, 0}, // #934
  {DBGFIELD("DPPSrmi_VDPPSYrmi_VDPPSrmi") 1, false, false, 1174, 3, 16, 1,  4, 1}, // #935
  {DBGFIELD("DPPDrri")            1, false, false, 451, 2,  6, 1,  0, 0}, // #936
  {DBGFIELD("VDPPDrri")           1, false, false, 451, 2,  6, 1,  0, 0}, // #937
  {DBGFIELD("DPPDrmi_VDPPDrmi")   1, false, false, 1174, 3, 16, 1,  4, 1}, // #938
  {DBGFIELD("VFMADDPD4rr_VFMADDPD4rr_REV_VFMADDPS4rr_VFMADDPS4rr_REV_VFMADDSD4rr_VFMADDSD4rr_Int_VFMADDSD4rr_Int_REV_VFMADDSD4rr_REV_VFMADDSS4rr_VFMADDSS4rr_Int_VFMADDSS4rr_Int_REV_VFMADDSS4rr_REV_VFMSUBPD4rr_VFMSUBPD4rr_REV_VFMSUBPS4rr_VFMSUBPS4rr_REV_VFMSUBSD4rr_VFMSUBSD4rr_Int_VFMSUBSD4rr_Int_REV_VFMSUBSD4rr_REV_VFMSUBSS4rr_VFMSUBSS4rr_Int_VFMSUBSS4rr_Int_REV_VFMSUBSS4rr_REV_VFNMADDPD4rr_VFNMADDPD4rr_REV_VFNMADDPS4rr_VFNMADDPS4rr_REV_VFNMADDSD4rr_VFNMADDSD4rr_Int_VFNMADDSD4rr_Int_REV_VFNMADDSD4rr_REV_VFNMADDSS4rr_VFNMADDSS4rr_Int_VFNMADDSS4rr_Int_REV_VFNMADDSS4rr_REV_VFNMSUBPD4rr_VFNMSUBPD4rr_REV_VFNMSUBPS4rr_VFNMSUBPS4rr_REV_VFNMSUBSD4rr_VFNMSUBSD4rr_Int_VFNMSUBSD4rr_Int_REV_VFNMSUBSD4rr_REV_VFNMSUBSS4rr_VFNMSUBSS4rr_Int_VFNMSUBSS4rr_Int_REV_VFNMSUBSS4rr_REV") 0, false, false,  0, 0,  0, 0,  0, 0}, // #939
  {DBGFIELD("VFMADDPD4mr_VFMADDPD4rm_VFMADDPS4mr_VFMADDPS4rm_VFMADDSD4mr_VFMADDSD4mr_Int_VFMADDSD4rm_VFMADDSD4rm_Int_VFMADDSS4mr_VFMADDSS4mr_Int_VFMADDSS4rm_VFMADDSS4rm_Int_VFMSUBPD4mr_VFMSUBPD4rm_VFMSUBPS4mr_VFMSUBPS4rm_VFMSUBSD4mr_VFMSUBSD4mr_Int_VFMSUBSD4rm_VFMSUBSD4rm_Int_VFMSUBSS4mr_VFMSUBSS4mr_Int_VFMSUBSS4rm_VFMSUBSS4rm_Int_VFNMADDPD4mr_VFNMADDPD4rm_VFNMADDPS4mr_VFNMADDPS4rm_VFNMADDSD4mr_VFNMADDSD4mr_Int_VFNMADDSD4rm_VFNMADDSD4rm_Int_VFNMADDSS4mr_VFNMADDSS4mr_Int_VFNMADDSS4rm_VFNMADDSS4rm_Int_VFNMSUBPD4mr_VFNMSUBPD4rm_VFNMSUBPS4mr_VFNMSUBPS4rm_VFNMSUBSD4mr_VFNMSUBSD4mr_Int_VFNMSUBSD4rm_VFNMSUBSD4rm_Int_VFNMSUBSS4mr_VFNMSUBSS4mr_Int_VFNMSUBSS4rm_VFNMSUBSS4rm_Int") 0, false, false,  0, 0,  0, 0,  0, 0}, // #940
  {DBGFIELD("VSQRTPSYr")          1, false, false, 1172, 2, 24, 1,  0, 0}, // #941
  {DBGFIELD("VSQRTPSYm")          1, false, false, 1180, 3, 39, 1,  0, 0}, // #942
  {DBGFIELD("VSQRTPDYr")          1, false, false, 1172, 2, 24, 1,  0, 0}, // #943
  {DBGFIELD("VSQRTPDYm")          1, false, false, 1180, 3, 39, 1,  0, 0}, // #944
  {DBGFIELD("RSQRTPSr_VRSQRTPSr") 1, false, false, 1172, 2,  3, 1,  0, 0}, // #945
  {DBGFIELD("RSQRTSSr_VRSQRTSSr") 1, false, false, 1172, 2,  3, 1,  0, 0}, // #946
  {DBGFIELD("RSQRTSSr_Int")       1, false, false, 1180, 3, 10, 1,  4, 1}, // #947
  {DBGFIELD("VRSQRTSSr_Int")      1, false, false, 1180, 3, 10, 1,  0, 0}, // #948
  {DBGFIELD("RSQRTPSm_VRSQRTPSm") 1, false, false, 1180, 3, 10, 1,  0, 0}, // #949
  {DBGFIELD("RSQRTSSm_VRSQRTSSm") 1, false, false, 1180, 3, 10, 1,  4, 1}, // #950
  {DBGFIELD("RSQRTSSm_Int_VRSQRTSSm_Int") 1, false, false, 1180, 3, 10, 1,  4, 1}, // #951
  {DBGFIELD("VRSQRTPSYr")         1, false, false, 1172, 2,  3, 1,  0, 0}, // #952
  {DBGFIELD("VRSQRTPSYm")         1, false, false, 1180, 3, 10, 1,  0, 0}, // #953
  {DBGFIELD("ANDNPDrr_ANDNPSrr_ANDPDrr_ANDPSrr_ORPDrr_ORPSrr_VANDNPDYrr_VANDNPDrr_VANDNPSYrr_VANDNPSrr_VANDPDYrr_VANDPDrr_VANDPSYrr_VANDPSrr_VORPDYrr_VORPDrr_VORPSYrr_VORPSrr_VXORPDYrr_VXORPDrr_VXORPSYrr_VXORPSrr_XORPDrr_XORPSrr") 1, false, false, 13, 1,  2, 1,  0, 0}, // #954
  {DBGFIELD("ANDNPDrm_ANDNPSrm_ANDPDrm_ANDPSrm_ORPDrm_ORPSrm_VANDNPDYrm_VANDNPDrm_VANDNPSYrm_VANDNPSrm_VANDPDYrm_VANDPDrm_VANDPSYrm_VANDPSrm_VORPDYrm_VORPDrm_VORPSYrm_VORPSrm_VXORPDYrm_VXORPDrm_VXORPSYrm_VXORPSrm_XORPDrm_XORPSrm") 1, false, false, 13, 2,  9, 1,  4, 1}, // #955
  {DBGFIELD("VZEROUPPER")         0, false, false,  0, 0,  0, 0,  0, 0}, // #956
  {DBGFIELD("VZEROALL")           0, false, false,  0, 0,  0, 0,  0, 0}, // #957
  {DBGFIELD("LDMXCSR_VLDMXCSR")   1, false, false, 14, 1,  6, 1,  0, 0}, // #958
  {DBGFIELD("STMXCSR_VSTMXCSR")   1, false, false, 410, 2,  2, 1,  0, 0}, // #959
  {DBGFIELD("VHADDPDYrr_VHADDPSYrr_VHSUBPDYrr_VHSUBPSYrr") 1, false, false, 631, 1,  6, 1,  0, 0}, // #960
  {DBGFIELD("VHADDPDYrm_VHADDPSYrm_VHSUBPDYrm_VHSUBPSYrm") 1, false, false, 972, 2, 16, 1,  4, 1} // #961
}; // SLMModelSchedClasses

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel GenericModel = {
  4, // IssueWidth
  32, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  4, // LoadLatency
  10, // HighLatency
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel AtomModel = {
  2, // IssueWidth
  0, // MicroOpBufferSize
  10, // LoopMicroOpBufferSize
  3, // LoadLatency
  30, // HighLatency
  MCSchedModel::DefaultMispredictPenalty,
  true, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  AtomItineraries};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc HaswellModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("HWDivider")       1, 0, -1}, // #1
  {DBGFIELD("HWPort0")         1, 0, -1}, // #2
  {DBGFIELD("HWPort1")         1, 0, -1}, // #3
  {DBGFIELD("HWPort4")         1, 0, -1}, // #4
  {DBGFIELD("HWPort5")         1, 0, -1}, // #5
  {DBGFIELD("HWPort6")         1, 0, -1}, // #6
  {DBGFIELD("HWPort01")        2, 0, -1}, // #7
  {DBGFIELD("HWPort04")        2, 0, -1}, // #8
  {DBGFIELD("HWPort05")        2, 0, -1}, // #9
  {DBGFIELD("HWPort06")        2, 0, -1}, // #10
  {DBGFIELD("HWPort15")        2, 0, -1}, // #11
  {DBGFIELD("HWPort16")        2, 0, -1}, // #12
  {DBGFIELD("HWPort23")        2, 0, -1}, // #13
  {DBGFIELD("HWPort56")        2, 0, -1}, // #14
  {DBGFIELD("HWPort015")       3, 0, -1}, // #15
  {DBGFIELD("HWPort056")       3, 0, -1}, // #16
  {DBGFIELD("HWPort237")       3, 0, -1}, // #17
  {DBGFIELD("HWPort0156")      4, 0, -1}, // #18
  {DBGFIELD("HWPortAny")       8, 0, 60}  // #19
};

static const llvm::MCSchedModel HaswellModel = {
  4, // IssueWidth
  192, // MicroOpBufferSize
  50, // LoopMicroOpBufferSize
  4, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  HaswellModelProcResources,
  HaswellModelSchedClasses,
  20,
  962,
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc BtVer2ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("JALU1")           1, 0, -1}, // #1
  {DBGFIELD("JALU01")          2, 0, 20}, // #2
  {DBGFIELD("JAny")            6, 0, -1}, // #3
  {DBGFIELD("JDiv")            1, 0, -1}, // #4
  {DBGFIELD("JFPM")            1, 0, -1}, // #5
  {DBGFIELD("JFPU0")           1, 0, -1}, // #6
  {DBGFIELD("JFPU1")           1, 0, -1}, // #7
  {DBGFIELD("JFPU01")          2, 0, 18}, // #8
  {DBGFIELD("JLAGU")           1, 0, -1}, // #9
  {DBGFIELD("JLSAGU")          2, 0, 12}, // #10
  {DBGFIELD("JSAGU")           1, 0, -1}, // #11
  {DBGFIELD("JVIMUL")          1, 0, -1}  // #12
};

static const llvm::MCSchedModel BtVer2Model = {
  2, // IssueWidth
  64, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  25, // HighLatency
  14, // MispredictPenalty
  true, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  BtVer2ModelProcResources,
  BtVer2ModelSchedClasses,
  13,
  962,
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc SandyBridgeModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("SBDivider")       1, 0, -1}, // #1
  {DBGFIELD("SBPort0")         1, 0, -1}, // #2
  {DBGFIELD("SBPort1")         1, 0, -1}, // #3
  {DBGFIELD("SBPort4")         1, 0, -1}, // #4
  {DBGFIELD("SBPort5")         1, 0, -1}, // #5
  {DBGFIELD("SBPort05")        2, 0, -1}, // #6
  {DBGFIELD("SBPort15")        2, 0, -1}, // #7
  {DBGFIELD("SBPort23")        2, 0, -1}, // #8
  {DBGFIELD("SBPort015")       3, 0, -1}, // #9
  {DBGFIELD("SBPortAny")       6, 0, 54}  // #10
};

static const llvm::MCSchedModel SandyBridgeModel = {
  4, // IssueWidth
  168, // MicroOpBufferSize
  28, // LoopMicroOpBufferSize
  4, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  SandyBridgeModelProcResources,
  SandyBridgeModelSchedClasses,
  11,
  962,
  nullptr}; // No Itinerary

static const llvm::MCSchedModel GenericPostRAModel = {
  4, // IssueWidth
  32, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  4, // LoadLatency
  10, // HighLatency
  MCSchedModel::DefaultMispredictPenalty,
  true, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc SLMModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("FPC_RSV0")        1, 0, 1}, // #1
  {DBGFIELD("FPC_RSV1")        1, 0, 1}, // #2
  {DBGFIELD("FPC_RSV01")       2, 0, -1}, // #3
  {DBGFIELD("IEC_RSV0")        1, 0, -1}, // #4
  {DBGFIELD("IEC_RSV1")        1, 0, -1}, // #5
  {DBGFIELD("IEC_RSV01")       2, 0, -1}, // #6
  {DBGFIELD("MEC_RSV")         1, 0, -1}, // #7
  {DBGFIELD("SMDivider")       1, 0, -1}, // #8
  {DBGFIELD("SMFPDivider")     1, 0, -1}, // #9
  {DBGFIELD("SMFPMultiplier")  1, 0, -1}  // #10
};

static const llvm::MCSchedModel SLMModel = {
  2, // IssueWidth
  32, // MicroOpBufferSize
  10, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  10, // MispredictPenalty
  true, // PostRAScheduler
  false, // CompleteModel
  7, // Processor ID
  SLMModelProcResources,
  SLMModelSchedClasses,
  11,
  962,
  nullptr}; // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV X86ProcSchedKV[] = {
  { "amdfam10", (const void *)&GenericModel },
  { "athlon", (const void *)&GenericModel },
  { "athlon-4", (const void *)&GenericModel },
  { "athlon-fx", (const void *)&GenericModel },
  { "athlon-mp", (const void *)&GenericModel },
  { "athlon-tbird", (const void *)&GenericModel },
  { "athlon-xp", (const void *)&GenericModel },
  { "athlon64", (const void *)&GenericModel },
  { "athlon64-sse3", (const void *)&GenericModel },
  { "atom", (const void *)&AtomModel },
  { "barcelona", (const void *)&GenericModel },
  { "bdver1", (const void *)&GenericModel },
  { "bdver2", (const void *)&GenericModel },
  { "bdver3", (const void *)&GenericModel },
  { "bdver4", (const void *)&GenericModel },
  { "bonnell", (const void *)&AtomModel },
  { "broadwell", (const void *)&HaswellModel },
  { "btver1", (const void *)&GenericModel },
  { "btver2", (const void *)&BtVer2Model },
  { "c3", (const void *)&GenericModel },
  { "c3-2", (const void *)&GenericModel },
  { "cannonlake", (const void *)&HaswellModel },
  { "core-avx-i", (const void *)&SandyBridgeModel },
  { "core-avx2", (const void *)&HaswellModel },
  { "core2", (const void *)&SandyBridgeModel },
  { "corei7", (const void *)&SandyBridgeModel },
  { "corei7-avx", (const void *)&SandyBridgeModel },
  { "generic", (const void *)&GenericModel },
  { "geode", (const void *)&GenericModel },
  { "haswell", (const void *)&HaswellModel },
  { "i386", (const void *)&GenericModel },
  { "i486", (const void *)&GenericModel },
  { "i586", (const void *)&GenericModel },
  { "i686", (const void *)&GenericModel },
  { "ivybridge", (const void *)&SandyBridgeModel },
  { "k6", (const void *)&GenericModel },
  { "k6-2", (const void *)&GenericModel },
  { "k6-3", (const void *)&GenericModel },
  { "k8", (const void *)&GenericModel },
  { "k8-sse3", (const void *)&GenericModel },
  { "knl", (const void *)&HaswellModel },
  { "lakemont", (const void *)&GenericModel },
  { "nehalem", (const void *)&SandyBridgeModel },
  { "nocona", (const void *)&GenericPostRAModel },
  { "opteron", (const void *)&GenericModel },
  { "opteron-sse3", (const void *)&GenericModel },
  { "penryn", (const void *)&SandyBridgeModel },
  { "pentium", (const void *)&GenericModel },
  { "pentium-m", (const void *)&GenericPostRAModel },
  { "pentium-mmx", (const void *)&GenericModel },
  { "pentium2", (const void *)&GenericModel },
  { "pentium3", (const void *)&GenericModel },
  { "pentium3m", (const void *)&GenericModel },
  { "pentium4", (const void *)&GenericPostRAModel },
  { "pentium4m", (const void *)&GenericPostRAModel },
  { "pentiumpro", (const void *)&GenericModel },
  { "prescott", (const void *)&GenericPostRAModel },
  { "sandybridge", (const void *)&SandyBridgeModel },
  { "silvermont", (const void *)&SLMModel },
  { "skx", (const void *)&HaswellModel },
  { "skylake", (const void *)&HaswellModel },
  { "skylake-avx512", (const void *)&HaswellModel },
  { "slm", (const void *)&SLMModel },
  { "westmere", (const void *)&SandyBridgeModel },
  { "winchip-c6", (const void *)&GenericModel },
  { "winchip2", (const void *)&GenericModel },
  { "x86-64", (const void *)&SandyBridgeModel },
  { "yonah", (const void *)&SandyBridgeModel },
  { "znver1", (const void *)&BtVer2Model }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createX86MCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, X86FeatureKV, X86SubTypeKV, 
                      X86ProcSchedKV, X86WriteProcResTable, X86WriteLatencyTable, X86ReadAdvanceTable, 
                      X86Stages, X86OperandCycles, X86ForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::X86Subtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[X86::Feature3DNow] && X863DNowLevel < ThreeDNow) X863DNowLevel = ThreeDNow;
  if (Bits[X86::Feature3DNowA] && X863DNowLevel < ThreeDNowA) X863DNowLevel = ThreeDNowA;
  if (Bits[X86::Feature64Bit]) HasX86_64 = true;
  if (Bits[X86::FeatureADX]) HasADX = true;
  if (Bits[X86::FeatureAES]) HasAES = true;
  if (Bits[X86::FeatureAVX] && X86SSELevel < AVX) X86SSELevel = AVX;
  if (Bits[X86::FeatureAVX2] && X86SSELevel < AVX2) X86SSELevel = AVX2;
  if (Bits[X86::FeatureAVX512] && X86SSELevel < AVX512F) X86SSELevel = AVX512F;
  if (Bits[X86::FeatureBMI]) HasBMI = true;
  if (Bits[X86::FeatureBMI2]) HasBMI2 = true;
  if (Bits[X86::FeatureBWI]) HasBWI = true;
  if (Bits[X86::FeatureCDI]) HasCDI = true;
  if (Bits[X86::FeatureCLFLUSHOPT]) HasCLFLUSHOPT = true;
  if (Bits[X86::FeatureCLWB]) HasCLWB = true;
  if (Bits[X86::FeatureCLZERO]) HasCLZERO = true;
  if (Bits[X86::FeatureCMOV]) HasCMov = true;
  if (Bits[X86::FeatureCMPXCHG16B]) HasCmpxchg16b = true;
  if (Bits[X86::FeatureCallRegIndirect]) CallRegIndirect = true;
  if (Bits[X86::FeatureDQI]) HasDQI = true;
  if (Bits[X86::FeatureERI]) HasERI = true;
  if (Bits[X86::FeatureERMSB]) HasERMSB = true;
  if (Bits[X86::FeatureF16C]) HasF16C = true;
  if (Bits[X86::FeatureFMA]) HasFMA = true;
  if (Bits[X86::FeatureFMA4]) HasFMA4 = true;
  if (Bits[X86::FeatureFSGSBase]) HasFSGSBase = true;
  if (Bits[X86::FeatureFXSR]) HasFXSR = true;
  if (Bits[X86::FeatureFastLZCNT]) HasFastLZCNT = true;
  if (Bits[X86::FeatureFastPartialYMMorZMMWrite]) HasFastPartialYMMorZMMWrite = true;
  if (Bits[X86::FeatureFastSHLDRotate]) HasFastSHLDRotate = true;
  if (Bits[X86::FeatureFastScalarFSQRT]) HasFastScalarFSQRT = true;
  if (Bits[X86::FeatureFastVectorFSQRT]) HasFastVectorFSQRT = true;
  if (Bits[X86::FeatureIFMA]) HasIFMA = true;
  if (Bits[X86::FeatureLAHFSAHF]) HasLAHFSAHF = true;
  if (Bits[X86::FeatureLEAForSP]) UseLeaForSP = true;
  if (Bits[X86::FeatureLEAUsesAG]) LEAUsesAG = true;
  if (Bits[X86::FeatureLWP]) HasLWP = true;
  if (Bits[X86::FeatureLZCNT]) HasLZCNT = true;
  if (Bits[X86::FeatureMMX] && X863DNowLevel < MMX) X863DNowLevel = MMX;
  if (Bits[X86::FeatureMOVBE]) HasMOVBE = true;
  if (Bits[X86::FeatureMPX]) HasMPX = true;
  if (Bits[X86::FeatureMWAITX]) HasMWAITX = true;
  if (Bits[X86::FeaturePCLMUL]) HasPCLMUL = true;
  if (Bits[X86::FeaturePFI]) HasPFI = true;
  if (Bits[X86::FeaturePKU]) HasPKU = true;
  if (Bits[X86::FeaturePOPCNT]) HasPOPCNT = true;
  if (Bits[X86::FeaturePREFETCHWT1]) HasPFPREFETCHWT1 = true;
  if (Bits[X86::FeaturePRFCHW]) HasPRFCHW = true;
  if (Bits[X86::FeaturePadShortFunctions]) PadShortFunctions = true;
  if (Bits[X86::FeatureRDRAND]) HasRDRAND = true;
  if (Bits[X86::FeatureRDSEED]) HasRDSEED = true;
  if (Bits[X86::FeatureRTM]) HasRTM = true;
  if (Bits[X86::FeatureSGX]) HasSGX = true;
  if (Bits[X86::FeatureSHA]) HasSHA = true;
  if (Bits[X86::FeatureSSE1] && X86SSELevel < SSE1) X86SSELevel = SSE1;
  if (Bits[X86::FeatureSSE2] && X86SSELevel < SSE2) X86SSELevel = SSE2;
  if (Bits[X86::FeatureSSE3] && X86SSELevel < SSE3) X86SSELevel = SSE3;
  if (Bits[X86::FeatureSSE4A]) HasSSE4A = true;
  if (Bits[X86::FeatureSSE41] && X86SSELevel < SSE41) X86SSELevel = SSE41;
  if (Bits[X86::FeatureSSE42] && X86SSELevel < SSE42) X86SSELevel = SSE42;
  if (Bits[X86::FeatureSSEUnalignedMem]) HasSSEUnalignedMem = true;
  if (Bits[X86::FeatureSSSE3] && X86SSELevel < SSSE3) X86SSELevel = SSSE3;
  if (Bits[X86::FeatureSlow3OpsLEA]) Slow3OpsLEA = true;
  if (Bits[X86::FeatureSlowBTMem]) IsBTMemSlow = true;
  if (Bits[X86::FeatureSlowDivide32]) HasSlowDivide32 = true;
  if (Bits[X86::FeatureSlowDivide64]) HasSlowDivide64 = true;
  if (Bits[X86::FeatureSlowIncDec]) SlowIncDec = true;
  if (Bits[X86::FeatureSlowLEA]) SlowLEA = true;
  if (Bits[X86::FeatureSlowPMULLD]) IsPMULLDSlow = true;
  if (Bits[X86::FeatureSlowSHLD]) IsSHLDSlow = true;
  if (Bits[X86::FeatureSlowUAMem16]) IsUAMem16Slow = true;
  if (Bits[X86::FeatureSlowUAMem32]) IsUAMem32Slow = true;
  if (Bits[X86::FeatureSoftFloat]) UseSoftFloat = true;
  if (Bits[X86::FeatureTBM]) HasTBM = true;
  if (Bits[X86::FeatureVBMI]) HasVBMI = true;
  if (Bits[X86::FeatureVLX]) HasVLX = true;
  if (Bits[X86::FeatureVPOPCNTDQ]) HasVPOPCNTDQ = true;
  if (Bits[X86::FeatureX87]) HasX87 = true;
  if (Bits[X86::FeatureXOP]) HasXOP = true;
  if (Bits[X86::FeatureXSAVE]) HasXSAVE = true;
  if (Bits[X86::FeatureXSAVEC]) HasXSAVEC = true;
  if (Bits[X86::FeatureXSAVEOPT]) HasXSAVEOPT = true;
  if (Bits[X86::FeatureXSAVES]) HasXSAVES = true;
  if (Bits[X86::Mode16Bit]) In16BitMode = true;
  if (Bits[X86::Mode32Bit]) In32BitMode = true;
  if (Bits[X86::Mode64Bit]) In64BitMode = true;
  if (Bits[X86::ProcIntelAtom] && X86ProcFamily < IntelAtom) X86ProcFamily = IntelAtom;
  if (Bits[X86::ProcIntelSLM] && X86ProcFamily < IntelSLM) X86ProcFamily = IntelSLM;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct X86GenSubtargetInfo : public TargetSubtargetInfo {
  explicit X86GenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV X86FeatureKV[];
extern const llvm::SubtargetFeatureKV X86SubTypeKV[];
extern const llvm::SubtargetInfoKV X86ProcSchedKV[];
extern const llvm::MCWriteProcResEntry X86WriteProcResTable[];
extern const llvm::MCWriteLatencyEntry X86WriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry X86ReadAdvanceTable[];
extern const llvm::InstrStage X86Stages[];
extern const unsigned X86OperandCycles[];
extern const unsigned X86ForwardingPaths[];
X86GenSubtargetInfo::X86GenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(X86FeatureKV, 87), makeArrayRef(X86SubTypeKV, 69), 
                        X86ProcSchedKV, X86WriteProcResTable, X86WriteLatencyTable, X86ReadAdvanceTable, 
                        X86Stages, X86OperandCycles, X86ForwardingPaths) {}

unsigned X86GenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // X86GenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

