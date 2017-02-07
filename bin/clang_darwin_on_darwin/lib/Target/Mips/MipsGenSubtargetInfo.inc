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
namespace Mips {
enum {
  FeatureCnMips = 0,
  FeatureDSP = 1,
  FeatureDSPR2 = 2,
  FeatureDSPR3 = 3,
  FeatureEVA = 4,
  FeatureFP64Bit = 5,
  FeatureFPXX = 6,
  FeatureGP64Bit = 7,
  FeatureMSA = 8,
  FeatureMicroMips = 9,
  FeatureMips1 = 10,
  FeatureMips2 = 11,
  FeatureMips3 = 12,
  FeatureMips3_32 = 13,
  FeatureMips3_32r2 = 14,
  FeatureMips4 = 15,
  FeatureMips4_32 = 16,
  FeatureMips4_32r2 = 17,
  FeatureMips5 = 18,
  FeatureMips5_32r2 = 19,
  FeatureMips16 = 20,
  FeatureMips32 = 21,
  FeatureMips32r2 = 22,
  FeatureMips32r3 = 23,
  FeatureMips32r5 = 24,
  FeatureMips32r6 = 25,
  FeatureMips64 = 26,
  FeatureMips64r2 = 27,
  FeatureMips64r3 = 28,
  FeatureMips64r5 = 29,
  FeatureMips64r6 = 30,
  FeatureNaN2008 = 31,
  FeatureNoABICalls = 32,
  FeatureNoOddSPReg = 33,
  FeaturePTR64Bit = 34,
  FeatureSingleFloat = 35,
  FeatureSoftFloat = 36,
  FeatureUseTCCInDIV = 37,
  FeatureVFPU = 38,
  ImplP5600 = 39
};
} // end namespace Mips
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV MipsFeatureKV[] = {
  { "cnmips", "Octeon cnMIPS Support", { Mips::FeatureCnMips }, { Mips::FeatureMips64r2 } },
  { "dsp", "Mips DSP ASE", { Mips::FeatureDSP }, { } },
  { "dspr2", "Mips DSP-R2 ASE", { Mips::FeatureDSPR2 }, { Mips::FeatureDSP } },
  { "dspr3", "Mips DSP-R3 ASE", { Mips::FeatureDSPR3 }, { Mips::FeatureDSP, Mips::FeatureDSPR2 } },
  { "eva", "Mips EVA ASE", { Mips::FeatureEVA }, { } },
  { "fp64", "Support 64-bit FP registers", { Mips::FeatureFP64Bit }, { } },
  { "fpxx", "Support for FPXX", { Mips::FeatureFPXX }, { } },
  { "gp64", "General Purpose Registers are 64-bit wide", { Mips::FeatureGP64Bit }, { } },
  { "micromips", "microMips mode", { Mips::FeatureMicroMips }, { } },
  { "mips1", "Mips I ISA Support [highly experimental]", { Mips::FeatureMips1 }, { } },
  { "mips16", "Mips16 mode", { Mips::FeatureMips16 }, { } },
  { "mips2", "Mips II ISA Support [highly experimental]", { Mips::FeatureMips2 }, { Mips::FeatureMips1 } },
  { "mips3", "MIPS III ISA Support [highly experimental]", { Mips::FeatureMips3 }, { Mips::FeatureMips2, Mips::FeatureMips3_32, Mips::FeatureMips3_32r2, Mips::FeatureGP64Bit, Mips::FeatureFP64Bit } },
  { "mips32", "Mips32 ISA Support", { Mips::FeatureMips32 }, { Mips::FeatureMips2, Mips::FeatureMips3_32, Mips::FeatureMips4_32 } },
  { "mips32r2", "Mips32r2 ISA Support", { Mips::FeatureMips32r2 }, { Mips::FeatureMips3_32r2, Mips::FeatureMips4_32r2, Mips::FeatureMips5_32r2, Mips::FeatureMips32 } },
  { "mips32r3", "Mips32r3 ISA Support", { Mips::FeatureMips32r3 }, { Mips::FeatureMips32r2 } },
  { "mips32r5", "Mips32r5 ISA Support", { Mips::FeatureMips32r5 }, { Mips::FeatureMips32r3 } },
  { "mips32r6", "Mips32r6 ISA Support [experimental]", { Mips::FeatureMips32r6 }, { Mips::FeatureMips32r5, Mips::FeatureFP64Bit, Mips::FeatureNaN2008 } },
  { "mips3_32", "Subset of MIPS-III that is also in MIPS32 [highly experimental]", { Mips::FeatureMips3_32 }, { } },
  { "mips3_32r2", "Subset of MIPS-III that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips3_32r2 }, { } },
  { "mips4", "MIPS IV ISA Support", { Mips::FeatureMips4 }, { Mips::FeatureMips3, Mips::FeatureMips4_32, Mips::FeatureMips4_32r2 } },
  { "mips4_32", "Subset of MIPS-IV that is also in MIPS32 [highly experimental]", { Mips::FeatureMips4_32 }, { } },
  { "mips4_32r2", "Subset of MIPS-IV that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips4_32r2 }, { } },
  { "mips5", "MIPS V ISA Support [highly experimental]", { Mips::FeatureMips5 }, { Mips::FeatureMips4, Mips::FeatureMips5_32r2 } },
  { "mips5_32r2", "Subset of MIPS-V that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips5_32r2 }, { } },
  { "mips64", "Mips64 ISA Support", { Mips::FeatureMips64 }, { Mips::FeatureMips5, Mips::FeatureMips32 } },
  { "mips64r2", "Mips64r2 ISA Support", { Mips::FeatureMips64r2 }, { Mips::FeatureMips64, Mips::FeatureMips32r2 } },
  { "mips64r3", "Mips64r3 ISA Support", { Mips::FeatureMips64r3 }, { Mips::FeatureMips64r2, Mips::FeatureMips32r3 } },
  { "mips64r5", "Mips64r5 ISA Support", { Mips::FeatureMips64r5 }, { Mips::FeatureMips64r3, Mips::FeatureMips32r5 } },
  { "mips64r6", "Mips64r6 ISA Support [experimental]", { Mips::FeatureMips64r6 }, { Mips::FeatureMips32r6, Mips::FeatureMips64r5, Mips::FeatureNaN2008 } },
  { "msa", "Mips MSA ASE", { Mips::FeatureMSA }, { } },
  { "nan2008", "IEEE 754-2008 NaN encoding", { Mips::FeatureNaN2008 }, { } },
  { "noabicalls", "Disable SVR4-style position-independent code", { Mips::FeatureNoABICalls }, { } },
  { "nooddspreg", "Disable odd numbered single-precision registers", { Mips::FeatureNoOddSPReg }, { } },
  { "p5600", "The P5600 Processor", { Mips::ImplP5600 }, { Mips::FeatureMips32r5 } },
  { "ptr64", "Pointers are 64-bit wide", { Mips::FeaturePTR64Bit }, { } },
  { "single-float", "Only supports single precision float", { Mips::FeatureSingleFloat }, { } },
  { "soft-float", "Does not support floating point instructions", { Mips::FeatureSoftFloat }, { } },
  { "use-tcc-in-div", "Force the assembler to use trapping", { Mips::FeatureUseTCCInDIV }, { } },
  { "vfpu", "Enable vector FPU instructions", { Mips::FeatureVFPU }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[] = {
  { "mips1", "Select the mips1 processor", { Mips::FeatureMips1 }, { } },
  { "mips2", "Select the mips2 processor", { Mips::FeatureMips2 }, { } },
  { "mips3", "Select the mips3 processor", { Mips::FeatureMips3 }, { } },
  { "mips32", "Select the mips32 processor", { Mips::FeatureMips32 }, { } },
  { "mips32r2", "Select the mips32r2 processor", { Mips::FeatureMips32r2 }, { } },
  { "mips32r3", "Select the mips32r3 processor", { Mips::FeatureMips32r3 }, { } },
  { "mips32r5", "Select the mips32r5 processor", { Mips::FeatureMips32r5 }, { } },
  { "mips32r6", "Select the mips32r6 processor", { Mips::FeatureMips32r6 }, { } },
  { "mips4", "Select the mips4 processor", { Mips::FeatureMips4 }, { } },
  { "mips5", "Select the mips5 processor", { Mips::FeatureMips5 }, { } },
  { "mips64", "Select the mips64 processor", { Mips::FeatureMips64 }, { } },
  { "mips64r2", "Select the mips64r2 processor", { Mips::FeatureMips64r2 }, { } },
  { "mips64r3", "Select the mips64r3 processor", { Mips::FeatureMips64r3 }, { } },
  { "mips64r5", "Select the mips64r5 processor", { Mips::FeatureMips64r5 }, { } },
  { "mips64r6", "Select the mips64r6 processor", { Mips::FeatureMips64r6 }, { } },
  { "octeon", "Select the octeon processor", { Mips::FeatureMips64r2, Mips::FeatureCnMips }, { } },
  { "p5600", "Select the p5600 processor", { Mips::ImplP5600 }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 1,  1}, // #1
  { 7,  1}, // #2
  { 5,  1}, // #3
  {14,  1}, // #4
  { 1,  1}, // #5
  { 9,  1}, // #6
  { 5,  1}, // #7
  {13,  1}, // #8
  {16,  1}, // #9
  {18,  1}, // #10
  { 5,  1}, // #11
  {11,  1}, // #12
  {10,  1}, // #13
  {19,  1}, // #14
  { 2,  1}, // #15
  { 8,  1}, // #16
  { 3,  1}, // #17
  { 1,  1}, // #18
  {17,  1}, // #19
  { 5, 29}, // #20
  { 6, 29}, // #21
  { 5, 14}, // #22
  { 6, 14}, // #23
  { 5,  1}, // #24
  {12,  1}, // #25
  { 5, 21}, // #26
  { 6, 21}, // #27
  { 5, 10}, // #28
  { 6, 10}, // #29
  { 5,  1}, // #30
  {15,  1}, // #31
  { 5, 33}, // #32
  { 4,  1}, // #33
  { 3,  1}, // #34
  { 8,  1}, // #35
  { 1,  1}, // #36
  { 4,  1}, // #37
  { 9,  1}, // #38
  { 1,  1}, // #39
  { 5,  1}, // #40
  {12,  1}, // #41
  {13,  1}, // #42
  { 1,  1}, // #43
  {13,  1}, // #44
  { 5,  1}, // #45
  {10,  1}, // #46
  { 1,  1}, // #47
  { 2, 34}, // #48
  { 7,  1}, // #49
  { 5,  1}, // #50
  { 6, 31}, // #51
  {10,  1}, // #52
  { 5,  1}, // #53
  { 6, 23}, // #54
  {10,  1}, // #55
  { 5,  1}, // #56
  { 6, 35}, // #57
  {10,  1}, // #58
  { 5,  1}, // #59
  { 6, 27}, // #60
  {10,  1}, // #61
  { 1,  1}, // #62
  { 5,  1}, // #63
  {11,  1}, // #64
  {13,  1}, // #65
  { 1,  1}, // #66
  { 4,  1}, // #67
  {13,  1}, // #68
  { 1,  1}, // #69
  { 4,  1}, // #70
  { 7,  1}, // #71
  { 1,  1}, // #72
  { 5,  1}, // #73
  {10,  1}, // #74
  {13,  1}, // #75
  { 1,  1}, // #76
  { 4,  3}, // #77
  {13,  1} // #78
}; // MipsWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 GenericWriteALU_GenericWriteJump_GenericWriteTrap_GenericWriteCOPOther_GenericWriteHILO_GenericWritePref_GenericWriteStore_GenericWriteFPUStore_GenericWriteSync_GenericWriteMSAShortLogic_P5600WriteFPUS_P5600WriteALU_P5600WriteJump_P5600WriteMoveOtherUnitsToFPU_P5600WriteCache_P5600WriteAL2_P5600COP0_P5600WriteStore_P5600WriteStoreFromOtherUnits_P5600WriteMSAShortLogic
  { 4,  0}, // #2 GenericWriteFPUS_GenericWriteFPUMoveFP_GenericWriteMul_GenericWriteCOP0TLB_P5600WriteFPUL_P5600WriteLoad_P5600WriteLoadOtherUnitsToFPU_P5600WriteLoadShifted
  { 2,  0}, // #3 GenericWriteJumpAndLink_GenericWriteFPUCmp_GenericWriteFPUMoveGPRFPU_GenericReadCOP0_GenericWriteLoad_GenericWriteFPULoad_GenericWriteMove_GenericWriteStoreSC_GenericWriteMSAShortInt_GenericDSPShort_P5600WriteGPRFromBypass_P5600WriteAL2BitExt_P5600WriteAL2ShadowMov_P5600WriteJumpAndLink_P5600WriteStoreFromOtherUnits_P5600WriteAL2CondMov_P5600WriteMSAShortInt
  { 5,  0}, // #4 GenericWriteCache_GenericWriteFPUL_GenericWriteMDUtoGPR_GenericWriteALULong_GenericWriteMSALongInt_GenericDSPMTHLIP_GenericDSPMTHILO_P5600WriteAL2MAdd_P5600WriteAL2Mult_P5600WriteMSALongInt
  {33,  0}, // #5 GenericWriteDIV_GenericWriteFPUDivI
  {31,  0}, // #6 GenericWriteDIVU_P5600WriteFPUDivD
  { 3,  0}, // #7 GenericWriteCOP0_GenericWriteMSAOther3_P5600WriteAL2Mul_P5600WriteMSAOther3
  {32,  0}, // #8 GenericWriteFPUDivD
  {17,  0}, // #9 GenericWriteFPUDivS_GenericWriteFPUSqrtS
  {29,  0}, // #10 GenericWriteFPUSqrtD
  {25,  0}, // #11 GenericWriteFPURcpD
  {13,  0}, // #12 GenericWriteFPURcpS
  { 6,  0}, // #13 GenericDSPLong_P5600WriteFPUL_MADDSUB
  {34,  0}, // #14 P5600WriteAL2Div_P5600WriteAL2DivU
  {23,  0}, // #15 P5600WriteFPUDivS_P5600WriteFPUDivI
  {35,  0}, // #16 P5600WriteFPUSqrtD
  {27,  0} // #17 P5600WriteFPUSqrtS_P5600WriteFPURsqrtD_P5600WriteFPURsqrtS
}; // MipsWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0,  0,  5} // #1
}; // MipsReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc MipsGenericModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIPseudo")           1, false, false,  1, 2,  1, 1,  0, 0}, // #1
  {DBGFIELD("II_ABS")             1, false, false,  3, 2,  2, 1,  0, 0}, // #2
  {DBGFIELD("II_ADD")             1, false, false,  1, 2,  1, 1,  0, 0}, // #3
  {DBGFIELD("II_ADDIUPC")         1, false, false,  1, 2,  1, 1,  0, 0}, // #4
  {DBGFIELD("II_ADDIU")           1, false, false,  1, 2,  1, 1,  0, 0}, // #5
  {DBGFIELD("II_ADDU")            1, false, false,  1, 2,  1, 1,  0, 0}, // #6
  {DBGFIELD("II_ADDI")            1, false, false,  1, 2,  1, 1,  0, 0}, // #7
  {DBGFIELD("II_ALIGN")           1, false, false,  1, 2,  1, 1,  0, 0}, // #8
  {DBGFIELD("II_ALUIPC")          1, false, false,  1, 2,  1, 1,  0, 0}, // #9
  {DBGFIELD("II_AND")             1, false, false,  1, 2,  1, 1,  0, 0}, // #10
  {DBGFIELD("II_ANDI")            1, false, false,  1, 2,  1, 1,  0, 0}, // #11
  {DBGFIELD("II_AUI")             1, false, false,  1, 2,  1, 1,  0, 0}, // #12
  {DBGFIELD("II_AUIPC")           1, false, false,  1, 2,  1, 1,  0, 0}, // #13
  {DBGFIELD("IIM16Alu")           1, false, false,  1, 2,  1, 1,  0, 0}, // #14
  {DBGFIELD("II_B")               1, false, false,  5, 2,  1, 1,  0, 0}, // #15
  {DBGFIELD("II_BADDU")           1, false, false,  1, 2,  1, 1,  0, 0}, // #16
  {DBGFIELD("II_BC")              1, false, false,  5, 2,  1, 1,  0, 0}, // #17
  {DBGFIELD("II_BALC")            1, false, false,  5, 2,  3, 1,  0, 0}, // #18
  {DBGFIELD("II_BCCZAL")          1, false, false,  5, 2,  1, 1,  0, 0}, // #19
  {DBGFIELD("II_BBIT")            1, false, false,  1, 2,  1, 1,  0, 0}, // #20
  {DBGFIELD("II_BC1CCZ")          1, false, false,  3, 2,  3, 1,  0, 0}, // #21
  {DBGFIELD("II_BC1F")            1, false, false,  3, 2,  3, 1,  0, 0}, // #22
  {DBGFIELD("II_BC1FL")           1, false, false,  3, 2,  3, 1,  0, 0}, // #23
  {DBGFIELD("II_BC1T")            1, false, false,  3, 2,  3, 1,  0, 0}, // #24
  {DBGFIELD("II_BC1TL")           1, false, false,  3, 2,  3, 1,  0, 0}, // #25
  {DBGFIELD("II_BC2CCZ")          1, false, false,  5, 2,  3, 1,  0, 0}, // #26
  {DBGFIELD("II_BCC")             1, false, false,  5, 2,  1, 1,  0, 0}, // #27
  {DBGFIELD("II_BCCC")            1, false, false,  5, 2,  1, 1,  0, 0}, // #28
  {DBGFIELD("II_BCCZ")            1, false, false,  5, 2,  1, 1,  0, 0}, // #29
  {DBGFIELD("II_BCCZC")           1, false, false,  5, 2,  1, 1,  0, 0}, // #30
  {DBGFIELD("II_BCCZALS")         1, false, false,  5, 2,  3, 1,  0, 0}, // #31
  {DBGFIELD("II_BITSWAP")         1, false, false,  1, 2,  1, 1,  0, 0}, // #32
  {DBGFIELD("II_BREAK")           1, false, false,  5, 2,  1, 1,  0, 0}, // #33
  {DBGFIELD("II_MTC1")            1, false, false,  7, 2,  3, 1,  0, 0}, // #34
  {DBGFIELD("II_CACHE")           1, false, false,  9, 2,  4, 1,  0, 0}, // #35
  {DBGFIELD("II_CACHEE")          1, false, false,  9, 2,  4, 1,  0, 0}, // #36
  {DBGFIELD("II_CEIL")            1, false, false, 11, 2,  4, 1,  0, 0}, // #37
  {DBGFIELD("II_CFC1")            1, false, false,  7, 2,  3, 1,  0, 0}, // #38
  {DBGFIELD("II_CFC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("II_INS")             1, false, false,  1, 2,  1, 1,  0, 0}, // #40
  {DBGFIELD("II_CLASS_D")         1, false, false,  3, 2,  2, 1,  0, 0}, // #41
  {DBGFIELD("II_CLASS_S")         1, false, false,  3, 2,  2, 1,  0, 0}, // #42
  {DBGFIELD("II_CLO")             1, false, false,  1, 2,  1, 1,  0, 0}, // #43
  {DBGFIELD("II_CLZ")             1, false, false,  1, 2,  1, 1,  0, 0}, // #44
  {DBGFIELD("II_CMP_CC_D")        1, false, false,  3, 2,  3, 1,  0, 0}, // #45
  {DBGFIELD("II_CMP_CC_S")        1, false, false,  3, 2,  3, 1,  0, 0}, // #46
  {DBGFIELD("II_CTC1")            1, false, false,  7, 2,  3, 1,  0, 0}, // #47
  {DBGFIELD("II_CTC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("II_CVT")             1, false, false, 11, 2,  4, 1,  0, 0}, // #49
  {DBGFIELD("II_C_CC_D")          1, false, false,  3, 2,  3, 1,  0, 0}, // #50
  {DBGFIELD("II_C_CC_S")          1, false, false,  3, 2,  3, 1,  0, 0}, // #51
  {DBGFIELD("II_DADD")            1, false, false,  1, 2,  1, 1,  0, 0}, // #52
  {DBGFIELD("II_DADDIU")          1, false, false,  1, 2,  1, 1,  0, 0}, // #53
  {DBGFIELD("II_DADDU")           1, false, false,  1, 2,  1, 1,  0, 0}, // #54
  {DBGFIELD("II_DADDI")           1, false, false,  1, 2,  1, 1,  0, 0}, // #55
  {DBGFIELD("II_DAHI")            1, false, false,  1, 2,  1, 1,  0, 0}, // #56
  {DBGFIELD("II_DALIGN")          1, false, false,  1, 2,  1, 1,  0, 0}, // #57
  {DBGFIELD("II_DATI")            1, false, false,  1, 2,  1, 1,  0, 0}, // #58
  {DBGFIELD("II_DAUI")            1, false, false,  1, 2,  1, 1,  0, 0}, // #59
  {DBGFIELD("II_DBITSWAP")        1, false, false,  1, 2,  1, 1,  0, 0}, // #60
  {DBGFIELD("II_DCLO")            1, false, false,  1, 2,  1, 1,  0, 0}, // #61
  {DBGFIELD("II_DCLZ")            1, false, false,  1, 2,  1, 1,  0, 0}, // #62
  {DBGFIELD("II_DDIV")            1, false, false, 13, 2,  5, 1,  0, 0}, // #63
  {DBGFIELD("II_DDIVU")           1, false, false, 13, 2,  6, 1,  0, 0}, // #64
  {DBGFIELD("II_DERET")           1, false, false,  5, 2,  1, 1,  0, 0}, // #65
  {DBGFIELD("II_EXT")             1, false, false,  1, 2,  1, 1,  0, 0}, // #66
  {DBGFIELD("II_DI")              1, false, false, 15, 2,  7, 1,  0, 0}, // #67
  {DBGFIELD("II_DIV")             1, false, false, 13, 2,  5, 1,  0, 0}, // #68
  {DBGFIELD("II_DIVU")            1, false, false, 13, 2,  6, 1,  0, 0}, // #69
  {DBGFIELD("II_DLSA")            1, false, false,  1, 2,  1, 1,  0, 0}, // #70
  {DBGFIELD("II_DMFC0")           1, false, false, 15, 2,  3, 1,  0, 0}, // #71
  {DBGFIELD("II_DMFC1")           1, false, false,  7, 2,  3, 1,  0, 0}, // #72
  {DBGFIELD("II_DMFC2")           1, false, false, 17, 1,  1, 1,  0, 0}, // #73
  {DBGFIELD("II_DMOD")            1, false, false, 13, 2,  5, 1,  0, 0}, // #74
  {DBGFIELD("II_DMODU")           1, false, false, 13, 2,  5, 1,  0, 0}, // #75
  {DBGFIELD("II_DMTC0")           1, false, false, 15, 2,  7, 1,  0, 0}, // #76
  {DBGFIELD("II_DMTC1")           1, false, false,  7, 2,  3, 1,  0, 0}, // #77
  {DBGFIELD("II_DMTC2")           1, false, false, 17, 1,  1, 1,  0, 0}, // #78
  {DBGFIELD("II_DMUH")            1, false, false, 18, 2,  4, 1,  0, 0}, // #79
  {DBGFIELD("II_DMUHU")           1, false, false, 18, 2,  4, 1,  0, 0}, // #80
  {DBGFIELD("II_DMUL")            1, false, false, 18, 2,  4, 1,  0, 0}, // #81
  {DBGFIELD("II_DMULT")           1, false, false, 18, 2,  1, 1,  0, 0}, // #82
  {DBGFIELD("II_DMULTU")          1, false, false, 18, 2,  1, 1,  0, 0}, // #83
  {DBGFIELD("II_DMULU")           1, false, false, 18, 2,  1, 1,  0, 0}, // #84
  {DBGFIELD("II_POP")             1, false, false,  1, 2,  1, 1,  0, 0}, // #85
  {DBGFIELD("II_DROTR")           1, false, false,  1, 2,  1, 1,  0, 0}, // #86
  {DBGFIELD("II_DROTR32")         1, false, false,  1, 2,  1, 1,  0, 0}, // #87
  {DBGFIELD("II_DROTRV")          1, false, false,  1, 2,  1, 1,  0, 0}, // #88
  {DBGFIELD("II_DSBH")            1, false, false,  1, 2,  1, 1,  0, 0}, // #89
  {DBGFIELD("II_DSHD")            1, false, false,  1, 2,  1, 1,  0, 0}, // #90
  {DBGFIELD("II_DSLL")            1, false, false,  1, 2,  1, 1,  0, 0}, // #91
  {DBGFIELD("II_DSLL32")          1, false, false,  1, 2,  1, 1,  0, 0}, // #92
  {DBGFIELD("II_DSLLV")           1, false, false,  1, 2,  1, 1,  0, 0}, // #93
  {DBGFIELD("II_DSRA")            1, false, false,  1, 2,  1, 1,  0, 0}, // #94
  {DBGFIELD("II_DSRA32")          1, false, false,  1, 2,  1, 1,  0, 0}, // #95
  {DBGFIELD("II_DSRAV")           1, false, false,  1, 2,  1, 1,  0, 0}, // #96
  {DBGFIELD("II_DSRL")            1, false, false,  1, 2,  1, 1,  0, 0}, // #97
  {DBGFIELD("II_DSRL32")          1, false, false,  1, 2,  1, 1,  0, 0}, // #98
  {DBGFIELD("II_DSRLV")           1, false, false,  1, 2,  1, 1,  0, 0}, // #99
  {DBGFIELD("II_DSUB")            1, false, false,  1, 2,  1, 1,  0, 0}, // #100
  {DBGFIELD("II_DSUBU")           1, false, false,  1, 2,  1, 1,  0, 0}, // #101
  {DBGFIELD("II_DVP")             1, false, false, 15, 2,  7, 1,  0, 0}, // #102
  {DBGFIELD("II_EHB")             1, false, false, 15, 2,  7, 1,  0, 0}, // #103
  {DBGFIELD("II_EI")              1, false, false, 15, 2,  7, 1,  0, 0}, // #104
  {DBGFIELD("II_ERET")            1, false, false,  5, 2,  1, 1,  0, 0}, // #105
  {DBGFIELD("II_ERETNC")          1, false, false,  5, 2,  1, 1,  0, 0}, // #106
  {DBGFIELD("II_EVP")             1, false, false, 15, 2,  7, 1,  0, 0}, // #107
  {DBGFIELD("II_MFC1")            1, false, false,  7, 2,  3, 1,  0, 0}, // #108
  {DBGFIELD("II_ADD_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #109
  {DBGFIELD("II_ADD_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #110
  {DBGFIELD("II_DIV_D")           1, false, false, 20, 2,  8, 1,  0, 0}, // #111
  {DBGFIELD("II_DIV_S")           1, false, false, 22, 2,  9, 1,  0, 0}, // #112
  {DBGFIELD("II_FLOOR")           1, false, false, 11, 2,  4, 1,  0, 0}, // #113
  {DBGFIELD("II_MOV_D")           1, false, false,  7, 2,  2, 1,  0, 0}, // #114
  {DBGFIELD("II_MOV_S")           1, false, false,  7, 2,  2, 1,  0, 0}, // #115
  {DBGFIELD("II_MUL_D")           1, false, false, 11, 2,  4, 1,  0, 0}, // #116
  {DBGFIELD("II_MUL_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #117
  {DBGFIELD("II_NEG")             1, false, false,  3, 2,  2, 1,  0, 0}, // #118
  {DBGFIELD("II_SQRT_D")          1, false, false, 20, 2, 10, 1,  0, 0}, // #119
  {DBGFIELD("II_SQRT_S")          1, false, false, 22, 2,  9, 1,  0, 0}, // #120
  {DBGFIELD("II_SUB_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #121
  {DBGFIELD("II_SUB_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #122
  {DBGFIELD("II_J")               1, false, false,  5, 2,  1, 1,  0, 0}, // #123
  {DBGFIELD("II_JAL")             1, false, false,  5, 2,  3, 1,  0, 0}, // #124
  {DBGFIELD("II_JALR")            1, false, false,  5, 2,  3, 1,  0, 0}, // #125
  {DBGFIELD("II_JALR_HB")         1, false, false,  5, 2,  3, 1,  0, 0}, // #126
  {DBGFIELD("II_JALRC")           1, false, false,  5, 2,  3, 1,  0, 0}, // #127
  {DBGFIELD("II_JALRS")           1, false, false,  5, 2,  3, 1,  0, 0}, // #128
  {DBGFIELD("II_JALS")            1, false, false,  5, 2,  3, 1,  0, 0}, // #129
  {DBGFIELD("II_JIALC")           1, false, false,  5, 2,  3, 1,  0, 0}, // #130
  {DBGFIELD("II_JIC")             1, false, false,  5, 2,  1, 1,  0, 0}, // #131
  {DBGFIELD("II_JR")              1, false, false,  5, 2,  1, 1,  0, 0}, // #132
  {DBGFIELD("II_JRADDIUSP")       1, false, false,  5, 2,  1, 1,  0, 0}, // #133
  {DBGFIELD("II_JRC")             1, false, false,  5, 2,  1, 1,  0, 0}, // #134
  {DBGFIELD("II_JR_HB")           1, false, false,  5, 2,  1, 1,  0, 0}, // #135
  {DBGFIELD("II_LB")              1, false, false,  9, 2,  3, 1,  0, 0}, // #136
  {DBGFIELD("II_LBE")             1, false, false,  9, 2,  3, 1,  0, 0}, // #137
  {DBGFIELD("II_LBU")             1, false, false,  9, 2,  3, 1,  0, 0}, // #138
  {DBGFIELD("II_LBUE")            1, false, false,  9, 2,  3, 1,  0, 0}, // #139
  {DBGFIELD("II_LD")              1, false, false,  9, 2,  3, 1,  0, 0}, // #140
  {DBGFIELD("II_LDC1")            1, false, false, 24, 2,  3, 1,  0, 0}, // #141
  {DBGFIELD("II_LDC2")            1, false, false,  9, 2,  3, 1,  0, 0}, // #142
  {DBGFIELD("II_LDC3")            1, false, false,  9, 2,  3, 1,  0, 0}, // #143
  {DBGFIELD("II_LDL")             1, false, false,  9, 2,  3, 1,  0, 0}, // #144
  {DBGFIELD("II_LDPC")            1, false, false,  9, 2,  3, 1,  0, 0}, // #145
  {DBGFIELD("II_LDR")             1, false, false,  9, 2,  3, 1,  0, 0}, // #146
  {DBGFIELD("II_LDXC1")           1, false, false, 24, 2,  3, 1,  0, 0}, // #147
  {DBGFIELD("II_LH")              1, false, false,  9, 2,  3, 1,  0, 0}, // #148
  {DBGFIELD("II_LHE")             1, false, false,  9, 2,  3, 1,  0, 0}, // #149
  {DBGFIELD("II_LHU")             1, false, false,  9, 2,  3, 1,  0, 0}, // #150
  {DBGFIELD("II_LHUE")            1, false, false,  9, 2,  3, 1,  0, 0}, // #151
  {DBGFIELD("II_LI")              1, false, false,  1, 2,  1, 1,  0, 0}, // #152
  {DBGFIELD("II_LL")              1, false, false,  9, 2,  3, 1,  0, 0}, // #153
  {DBGFIELD("II_LLD")             1, false, false,  9, 2,  3, 1,  0, 0}, // #154
  {DBGFIELD("II_LLE")             1, false, false,  9, 2,  3, 1,  0, 0}, // #155
  {DBGFIELD("II_LSA")             1, false, false,  1, 2,  1, 1,  0, 0}, // #156
  {DBGFIELD("II_LUI")             1, false, false,  1, 2,  1, 1,  0, 0}, // #157
  {DBGFIELD("II_LUXC1")           1, false, false, 24, 2,  3, 1,  0, 0}, // #158
  {DBGFIELD("II_LW")              1, false, false,  9, 2,  3, 1,  0, 0}, // #159
  {DBGFIELD("II_LWC1")            1, false, false, 24, 2,  3, 1,  0, 0}, // #160
  {DBGFIELD("II_LWC2")            1, false, false,  9, 2,  3, 1,  0, 0}, // #161
  {DBGFIELD("II_LWC3")            1, false, false,  9, 2,  3, 1,  0, 0}, // #162
  {DBGFIELD("II_LWE")             1, false, false,  9, 2,  3, 1,  0, 0}, // #163
  {DBGFIELD("II_LWL")             1, false, false,  9, 2,  3, 1,  0, 0}, // #164
  {DBGFIELD("II_LWLE")            1, false, false,  9, 2,  3, 1,  0, 0}, // #165
  {DBGFIELD("II_LWM")             1, false, false,  9, 2,  3, 1,  0, 0}, // #166
  {DBGFIELD("II_LWPC")            1, false, false,  9, 2,  3, 1,  0, 0}, // #167
  {DBGFIELD("II_LWP")             1, false, false,  9, 2,  3, 1,  0, 0}, // #168
  {DBGFIELD("II_LWR")             1, false, false,  9, 2,  3, 1,  0, 0}, // #169
  {DBGFIELD("II_LWRE")            1, false, false,  9, 2,  3, 1,  0, 0}, // #170
  {DBGFIELD("II_LWUPC")           1, false, false,  9, 2,  3, 1,  0, 0}, // #171
  {DBGFIELD("II_LWU")             1, false, false,  9, 2,  3, 1,  0, 0}, // #172
  {DBGFIELD("II_LWXC1")           1, false, false, 24, 2,  3, 1,  0, 0}, // #173
  {DBGFIELD("II_LWXS")            1, false, false,  9, 2,  3, 1,  0, 0}, // #174
  {DBGFIELD("II_MADD")            1, false, false, 18, 2,  1, 1,  0, 0}, // #175
  {DBGFIELD("II_MADDF_D")         1, false, false,  3, 2,  2, 1,  0, 0}, // #176
  {DBGFIELD("II_MADDF_S")         1, false, false,  3, 2,  2, 1,  0, 0}, // #177
  {DBGFIELD("II_MADDU")           1, false, false, 18, 2,  1, 1,  0, 0}, // #178
  {DBGFIELD("II_MADD_D")          1, false, false, 11, 2,  4, 1,  0, 0}, // #179
  {DBGFIELD("II_MADD_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #180
  {DBGFIELD("II_MAX_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #181
  {DBGFIELD("II_MAXA_D")          1, false, false,  3, 2,  2, 1,  0, 0}, // #182
  {DBGFIELD("II_MAX_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #183
  {DBGFIELD("II_MAXA_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #184
  {DBGFIELD("II_MFC0")            1, false, false, 15, 2,  3, 1,  0, 0}, // #185
  {DBGFIELD("II_MFC2")            1, false, false, 17, 1,  1, 1,  0, 0}, // #186
  {DBGFIELD("II_MFHC0")           1, false, false, 15, 2,  3, 1,  0, 0}, // #187
  {DBGFIELD("II_MFHC1")           1, false, false,  7, 2,  3, 1,  0, 0}, // #188
  {DBGFIELD("II_MFHI_MFLO")       1, false, false,  1, 2,  4, 1,  0, 0}, // #189
  {DBGFIELD("II_MIN_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #190
  {DBGFIELD("II_MINA_D")          1, false, false,  3, 2,  2, 1,  0, 0}, // #191
  {DBGFIELD("II_MIN_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #192
  {DBGFIELD("II_MINA_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #193
  {DBGFIELD("II_MOD")             1, false, false, 13, 2,  5, 1,  0, 0}, // #194
  {DBGFIELD("II_MODU")            1, false, false, 13, 2,  5, 1,  0, 0}, // #195
  {DBGFIELD("II_MOVE")            1, false, false,  1, 2,  1, 1,  0, 0}, // #196
  {DBGFIELD("II_MOVF_D")          1, false, false,  3, 2,  2, 1,  0, 0}, // #197
  {DBGFIELD("II_MOVF")            1, false, false,  7, 2,  2, 1,  0, 0}, // #198
  {DBGFIELD("II_MOVF_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #199
  {DBGFIELD("II_MOVN_D")          1, false, false,  7, 2,  2, 1,  0, 0}, // #200
  {DBGFIELD("II_MOVN")            1, false, false,  1, 2,  1, 1,  0, 0}, // #201
  {DBGFIELD("II_MOVN_S")          1, false, false,  7, 2,  2, 1,  0, 0}, // #202
  {DBGFIELD("II_MOVT_D")          1, false, false,  3, 2,  2, 1,  0, 0}, // #203
  {DBGFIELD("II_MOVT")            1, false, false,  7, 2,  2, 1,  0, 0}, // #204
  {DBGFIELD("II_MOVT_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #205
  {DBGFIELD("II_MOVZ_D")          1, false, false,  7, 2,  2, 1,  0, 0}, // #206
  {DBGFIELD("II_MOVZ")            1, false, false,  1, 2,  1, 1,  0, 0}, // #207
  {DBGFIELD("II_MOVZ_S")          1, false, false,  7, 2,  2, 1,  0, 0}, // #208
  {DBGFIELD("II_MSUB")            1, false, false, 18, 2,  1, 1,  0, 0}, // #209
  {DBGFIELD("II_MSUBF_D")         1, false, false,  3, 2,  2, 1,  0, 0}, // #210
  {DBGFIELD("II_MSUBF_S")         1, false, false,  3, 2,  2, 1,  0, 0}, // #211
  {DBGFIELD("II_MSUBU")           1, false, false, 18, 2,  1, 1,  0, 0}, // #212
  {DBGFIELD("II_MSUB_D")          1, false, false, 11, 2,  4, 1,  0, 0}, // #213
  {DBGFIELD("II_MSUB_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #214
  {DBGFIELD("II_MTC0")            1, false, false, 15, 2,  7, 1,  0, 0}, // #215
  {DBGFIELD("II_MTC2")            1, false, false, 17, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("II_MTHC0")           1, false, false, 15, 2,  7, 1,  0, 0}, // #217
  {DBGFIELD("II_MTHC1")           1, false, false,  7, 2,  3, 1,  0, 0}, // #218
  {DBGFIELD("II_MTHI_MTLO")       1, false, false,  1, 2,  3, 1,  0, 0}, // #219
  {DBGFIELD("II_MUH")             1, false, false, 18, 2,  2, 1,  0, 0}, // #220
  {DBGFIELD("II_MUHU")            1, false, false, 18, 2,  2, 1,  0, 0}, // #221
  {DBGFIELD("II_MUL")             1, false, false, 18, 2,  4, 1,  0, 0}, // #222
  {DBGFIELD("II_MULT")            1, false, false,  1, 2,  1, 1,  0, 0}, // #223
  {DBGFIELD("II_MULTU")           1, false, false,  1, 2,  1, 1,  0, 0}, // #224
  {DBGFIELD("II_MULU")            1, false, false, 18, 2,  2, 1,  0, 0}, // #225
  {DBGFIELD("II_NMADD_D")         1, false, false, 11, 2,  4, 1,  0, 0}, // #226
  {DBGFIELD("II_NMADD_S")         1, false, false,  3, 2,  2, 1,  0, 0}, // #227
  {DBGFIELD("II_NMSUB_D")         1, false, false, 11, 2,  4, 1,  0, 0}, // #228
  {DBGFIELD("II_NMSUB_S")         1, false, false,  3, 2,  2, 1,  0, 0}, // #229
  {DBGFIELD("II_NOR")             1, false, false,  1, 2,  1, 1,  0, 0}, // #230
  {DBGFIELD("II_NOT")             1, false, false,  1, 2,  1, 1,  0, 0}, // #231
  {DBGFIELD("II_OR")              1, false, false,  1, 2,  1, 1,  0, 0}, // #232
  {DBGFIELD("II_ORI")             1, false, false,  1, 2,  1, 1,  0, 0}, // #233
  {DBGFIELD("II_PAUSE")           1, false, false, 15, 2,  7, 1,  0, 0}, // #234
  {DBGFIELD("II_PREF")            1, false, false,  9, 2,  1, 1,  0, 0}, // #235
  {DBGFIELD("II_PREFE")           1, false, false,  9, 2,  1, 1,  0, 0}, // #236
  {DBGFIELD("II_IndirectBranchPseudo") 0, false, false,  0, 0,  0, 0,  0, 0}, // #237
  {DBGFIELD("II_ReturnPseudo")    0, false, false,  0, 0,  0, 0,  0, 0}, // #238
  {DBGFIELD("II_RDHWR")           1, false, false,  1, 2,  3, 1,  0, 0}, // #239
  {DBGFIELD("II_RDPGPR")          1, false, false, 15, 2,  7, 1,  0, 0}, // #240
  {DBGFIELD("II_RECIP_D")         1, false, false, 26, 2, 11, 1,  0, 0}, // #241
  {DBGFIELD("II_RECIP_S")         1, false, false, 28, 2, 12, 1,  0, 0}, // #242
  {DBGFIELD("II_RINT_D")          1, false, false, 11, 2,  4, 1,  0, 0}, // #243
  {DBGFIELD("II_RINT_S")          1, false, false, 11, 2,  4, 1,  0, 0}, // #244
  {DBGFIELD("II_ROTR")            1, false, false,  1, 2,  1, 1,  0, 0}, // #245
  {DBGFIELD("II_ROTRV")           1, false, false,  1, 2,  1, 1,  0, 0}, // #246
  {DBGFIELD("II_ROUND")           1, false, false, 11, 2,  4, 1,  0, 0}, // #247
  {DBGFIELD("II_RSQRT_D")         1, false, false, 26, 2, 11, 1,  0, 0}, // #248
  {DBGFIELD("II_RSQRT_S")         1, false, false, 28, 2, 12, 1,  0, 0}, // #249
  {DBGFIELD("II_RESTORE")         1, false, false,  9, 2,  3, 1,  0, 0}, // #250
  {DBGFIELD("II_SB")              1, false, false,  9, 2,  1, 1,  0, 0}, // #251
  {DBGFIELD("II_SBE")             1, false, false,  9, 2,  1, 1,  0, 0}, // #252
  {DBGFIELD("II_SC")              1, false, false,  9, 2,  3, 1,  0, 0}, // #253
  {DBGFIELD("II_SCD")             1, false, false,  9, 2,  1, 1,  0, 0}, // #254
  {DBGFIELD("II_SCE")             1, false, false,  9, 2,  1, 1,  0, 0}, // #255
  {DBGFIELD("II_SD")              1, false, false,  9, 2,  1, 1,  0, 0}, // #256
  {DBGFIELD("II_SDBBP")           1, false, false,  5, 2,  1, 1,  0, 0}, // #257
  {DBGFIELD("II_SDC1")            1, false, false, 30, 2,  1, 1,  0, 0}, // #258
  {DBGFIELD("II_SDC2")            1, false, false,  9, 2,  1, 1,  0, 0}, // #259
  {DBGFIELD("II_SDC3")            1, false, false,  9, 2,  1, 1,  0, 0}, // #260
  {DBGFIELD("II_SDL")             1, false, false,  9, 2,  1, 1,  0, 0}, // #261
  {DBGFIELD("II_SDR")             1, false, false,  9, 2,  1, 1,  0, 0}, // #262
  {DBGFIELD("II_SDXC1")           1, false, false, 30, 2,  1, 1,  0, 0}, // #263
  {DBGFIELD("II_SEB")             1, false, false,  1, 2,  1, 1,  0, 0}, // #264
  {DBGFIELD("II_SEH")             1, false, false,  1, 2,  1, 1,  0, 0}, // #265
  {DBGFIELD("II_SELCCZ")          1, false, false,  1, 2,  1, 1,  0, 0}, // #266
  {DBGFIELD("II_SELCCZ_D")        1, false, false,  3, 2,  2, 1,  0, 0}, // #267
  {DBGFIELD("II_SELCCZ_S")        1, false, false,  3, 2,  2, 1,  0, 0}, // #268
  {DBGFIELD("II_SEL_D")           1, false, false,  3, 2,  3, 1,  0, 0}, // #269
  {DBGFIELD("II_SEL_S")           1, false, false,  3, 2,  3, 1,  0, 0}, // #270
  {DBGFIELD("II_SEQ_SNE")         1, false, false,  1, 2,  1, 1,  0, 0}, // #271
  {DBGFIELD("II_SEQI_SNEI")       1, false, false,  1, 2,  1, 1,  0, 0}, // #272
  {DBGFIELD("II_SH")              1, false, false,  9, 2,  1, 1,  0, 0}, // #273
  {DBGFIELD("II_SHE")             1, false, false,  9, 2,  1, 1,  0, 0}, // #274
  {DBGFIELD("II_SLL")             1, false, false,  1, 2,  1, 1,  0, 0}, // #275
  {DBGFIELD("II_SLLV")            1, false, false,  1, 2,  1, 1,  0, 0}, // #276
  {DBGFIELD("II_SLT_SLTU")        1, false, false,  1, 2,  1, 1,  0, 0}, // #277
  {DBGFIELD("II_SLTI_SLTIU")      1, false, false,  1, 2,  1, 1,  0, 0}, // #278
  {DBGFIELD("II_SRA")             1, false, false,  1, 2,  1, 1,  0, 0}, // #279
  {DBGFIELD("II_SRAV")            1, false, false,  1, 2,  1, 1,  0, 0}, // #280
  {DBGFIELD("II_SRL")             1, false, false,  1, 2,  1, 1,  0, 0}, // #281
  {DBGFIELD("II_SRLV")            1, false, false,  1, 2,  1, 1,  0, 0}, // #282
  {DBGFIELD("II_SSNOP")           1, false, false,  1, 2,  1, 1,  0, 0}, // #283
  {DBGFIELD("II_SUB")             1, false, false,  1, 2,  1, 1,  0, 0}, // #284
  {DBGFIELD("II_SUBU")            1, false, false,  1, 2,  1, 1,  0, 0}, // #285
  {DBGFIELD("II_SUXC1")           1, false, false, 30, 2,  1, 1,  0, 0}, // #286
  {DBGFIELD("II_SW")              1, false, false,  9, 2,  1, 1,  0, 0}, // #287
  {DBGFIELD("II_SWC1")            1, false, false, 30, 2,  1, 1,  0, 0}, // #288
  {DBGFIELD("II_SWC2")            1, false, false,  9, 2,  1, 1,  0, 0}, // #289
  {DBGFIELD("II_SWC3")            1, false, false,  9, 2,  1, 1,  0, 0}, // #290
  {DBGFIELD("II_SWE")             1, false, false,  9, 2,  1, 1,  0, 0}, // #291
  {DBGFIELD("II_SWL")             1, false, false,  9, 2,  1, 1,  0, 0}, // #292
  {DBGFIELD("II_SWLE")            1, false, false,  9, 2,  1, 1,  0, 0}, // #293
  {DBGFIELD("II_SWM")             1, false, false,  9, 2,  1, 1,  0, 0}, // #294
  {DBGFIELD("II_SWP")             1, false, false,  9, 2,  1, 1,  0, 0}, // #295
  {DBGFIELD("II_SWR")             1, false, false,  9, 2,  1, 1,  0, 0}, // #296
  {DBGFIELD("II_SWRE")            1, false, false,  9, 2,  1, 1,  0, 0}, // #297
  {DBGFIELD("II_SWXC1")           1, false, false, 30, 2,  1, 1,  0, 0}, // #298
  {DBGFIELD("II_SYNC")            1, false, false,  9, 2,  1, 1,  0, 0}, // #299
  {DBGFIELD("II_SYNCI")           1, false, false,  9, 2,  1, 1,  0, 0}, // #300
  {DBGFIELD("II_SYSCALL")         1, false, false,  5, 2,  1, 1,  0, 0}, // #301
  {DBGFIELD("II_SAVE")            1, false, false,  9, 2,  1, 1,  0, 0}, // #302
  {DBGFIELD("II_TEQ")             1, false, false,  5, 2,  1, 1,  0, 0}, // #303
  {DBGFIELD("II_TEQI")            1, false, false,  5, 2,  1, 1,  0, 0}, // #304
  {DBGFIELD("II_TGE")             1, false, false,  5, 2,  1, 1,  0, 0}, // #305
  {DBGFIELD("II_TGEI")            1, false, false,  5, 2,  1, 1,  0, 0}, // #306
  {DBGFIELD("II_TGEIU")           1, false, false,  5, 2,  1, 1,  0, 0}, // #307
  {DBGFIELD("II_TGEU")            1, false, false,  5, 2,  1, 1,  0, 0}, // #308
  {DBGFIELD("II_TLBINV")          1, false, false, 15, 2,  2, 1,  0, 0}, // #309
  {DBGFIELD("II_TLBINVF")         1, false, false, 15, 2,  2, 1,  0, 0}, // #310
  {DBGFIELD("II_TLBP")            1, false, false, 15, 2,  2, 1,  0, 0}, // #311
  {DBGFIELD("II_TLBR")            1, false, false, 15, 2,  2, 1,  0, 0}, // #312
  {DBGFIELD("II_TLBWI")           1, false, false, 15, 2,  2, 1,  0, 0}, // #313
  {DBGFIELD("II_TLBWR")           1, false, false, 15, 2,  2, 1,  0, 0}, // #314
  {DBGFIELD("II_TLT")             1, false, false,  5, 2,  1, 1,  0, 0}, // #315
  {DBGFIELD("II_TLTI")            1, false, false,  5, 2,  1, 1,  0, 0}, // #316
  {DBGFIELD("II_TTLTIU")          1, false, false,  5, 2,  1, 1,  0, 0}, // #317
  {DBGFIELD("II_TLTU")            1, false, false,  5, 2,  1, 1,  0, 0}, // #318
  {DBGFIELD("II_TNE")             1, false, false,  5, 2,  1, 1,  0, 0}, // #319
  {DBGFIELD("II_TNEI")            1, false, false,  5, 2,  1, 1,  0, 0}, // #320
  {DBGFIELD("II_TRAP")            1, false, false,  5, 2,  1, 1,  0, 0}, // #321
  {DBGFIELD("II_TRUNC")           1, false, false, 11, 2,  4, 1,  0, 0}, // #322
  {DBGFIELD("II_WAIT")            1, false, false, 15, 2,  7, 1,  0, 0}, // #323
  {DBGFIELD("II_WRPGPR")          1, false, false, 15, 2,  7, 1,  0, 0}, // #324
  {DBGFIELD("II_WSBH")            1, false, false,  1, 2,  1, 1,  0, 0}, // #325
  {DBGFIELD("II_XOR")             1, false, false,  1, 2,  1, 1,  0, 0}, // #326
  {DBGFIELD("II_XORI")            1, false, false,  1, 2,  1, 1,  0, 0}, // #327
  {DBGFIELD("COPY")               1, false, false,  1, 2,  1, 1,  0, 0}, // #328
  {DBGFIELD("VSHF_B_VSHF_D_VSHF_H_VSHF_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #329
  {DBGFIELD("BINSLI_B_BINSLI_D_BINSLI_H_BINSLI_W_BINSL_B_BINSL_D_BINSL_H_BINSL_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #330
  {DBGFIELD("BINSRI_B_BINSRI_D_BINSRI_H_BINSRI_W_BINSR_B_BINSR_D_BINSR_H_BINSR_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #331
  {DBGFIELD("INSERT_B_INSERT_D_INSERT_H_INSERT_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #332
  {DBGFIELD("SLDI_B_SLDI_D_SLDI_H_SLDI_W_SLD_B_SLD_D_SLD_H_SLD_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #333
  {DBGFIELD("BSETI_B_BSETI_D_BSETI_H_BSETI_W_BSET_B_BSET_D_BSET_H_BSET_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #334
  {DBGFIELD("BCLRI_B_BCLRI_D_BCLRI_H_BCLRI_W_BCLR_B_BCLR_D_BCLR_H_BCLR_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #335
  {DBGFIELD("BNEGI_B_BNEGI_D_BNEGI_H_BNEGI_W_BNEG_B_BNEG_D_BNEG_H_BNEG_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #336
  {DBGFIELD("BSELI_B_BSEL_V")     1, false, false,  3, 2,  3, 1,  0, 0}, // #337
  {DBGFIELD("BMNZI_B_BMNZ_V_BMZI_B_BMZ_V") 1, false, false,  3, 2,  3, 1,  0, 0}, // #338
  {DBGFIELD("PCNT_B_PCNT_D_PCNT_H_PCNT_W") 1, false, false,  3, 2,  7, 1,  0, 0}, // #339
  {DBGFIELD("SAT_S_B_SAT_S_D_SAT_S_H_SAT_S_W_SAT_U_B_SAT_U_D_SAT_U_H_SAT_U_W") 1, false, false,  3, 2,  7, 1,  0, 0}, // #340
  {DBGFIELD("BNZ_B_BNZ_D_BNZ_H_BNZ_V_BNZ_W_BZ_B_BZ_D_BZ_H_BZ_V_BZ_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #341
  {DBGFIELD("CFCMSA_CTCMSA")      1, false, false,  3, 2,  1, 1,  0, 0}, // #342
  {DBGFIELD("ADD_A_B_ADD_A_D_ADD_A_H_ADD_A_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #343
  {DBGFIELD("ADDS_A_B_ADDS_A_D_ADDS_A_H_ADDS_A_W_ADDS_S_B_ADDS_S_D_ADDS_S_H_ADDS_S_W_ADDS_U_B_ADDS_U_D_ADDS_U_H_ADDS_U_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #344
  {DBGFIELD("ADDVI_B_ADDVI_D_ADDVI_H_ADDVI_W_ADDV_B_ADDV_D_ADDV_H_ADDV_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #345
  {DBGFIELD("ASUB_S_B_ASUB_S_D_ASUB_S_H_ASUB_S_W_ASUB_U_B_ASUB_U_D_ASUB_U_H_ASUB_U_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #346
  {DBGFIELD("AVER_S_B_AVER_S_D_AVER_S_H_AVER_S_W_AVER_U_B_AVER_U_D_AVER_U_H_AVER_U_W_AVE_S_B_AVE_S_D_AVE_S_H_AVE_S_W_AVE_U_B_AVE_U_D_AVE_U_H_AVE_U_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #347
  {DBGFIELD("SHF_B_SHF_H_SHF_W")  1, false, false,  3, 2,  3, 1,  0, 0}, // #348
  {DBGFIELD("FILL_B_FILL_D_FILL_H_FILL_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #349
  {DBGFIELD("SPLATI_B_SPLATI_D_SPLATI_H_SPLATI_W_SPLAT_B_SPLAT_D_SPLAT_H_SPLAT_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #350
  {DBGFIELD("MOVE_V")             1, false, false,  3, 2,  1, 1,  0, 0}, // #351
  {DBGFIELD("LDI_B_LDI_D_LDI_H_LDI_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #352
  {DBGFIELD("AND_V_NOR_V_OR_V_XOR_V") 1, false, false,  3, 2,  1, 1,  0, 0}, // #353
  {DBGFIELD("ANDI_B_NORI_B_ORI_B_XORI_B") 1, false, false,  3, 2,  1, 1,  0, 0}, // #354
  {DBGFIELD("FEXP2_D_FEXP2_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #355
  {DBGFIELD("CLTI_S_B_CLTI_S_D_CLTI_S_H_CLTI_S_W_CLTI_U_B_CLTI_U_D_CLTI_U_H_CLTI_U_W_CLT_S_B_CLT_S_D_CLT_S_H_CLT_S_W_CLT_U_B_CLT_U_D_CLT_U_H_CLT_U_W") 1, false, false,  3, 2,  2, 1,  0, 0}, // #356
  {DBGFIELD("CLEI_S_B_CLEI_S_D_CLEI_S_H_CLEI_S_W_CLEI_U_B_CLEI_U_D_CLEI_U_H_CLEI_U_W_CLE_S_B_CLE_S_D_CLE_S_H_CLE_S_W_CLE_U_B_CLE_U_D_CLE_U_H_CLE_U_W") 1, false, false,  3, 2,  2, 1,  0, 0}, // #357
  {DBGFIELD("CEQI_B_CEQI_D_CEQI_H_CEQI_W_CEQ_B_CEQ_D_CEQ_H_CEQ_W") 1, false, false,  3, 2,  2, 1,  0, 0}, // #358
  {DBGFIELD("CMP_UN_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #359
  {DBGFIELD("CMP_UN_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #360
  {DBGFIELD("CMP_UEQ_D")          1, false, false,  3, 2,  2, 1,  0, 0}, // #361
  {DBGFIELD("CMP_UEQ_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #362
  {DBGFIELD("CMP_EQ_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #363
  {DBGFIELD("CMP_EQ_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #364
  {DBGFIELD("CMP_LT_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #365
  {DBGFIELD("CMP_LT_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #366
  {DBGFIELD("CMP_ULT_D")          1, false, false,  3, 2,  2, 1,  0, 0}, // #367
  {DBGFIELD("CMP_ULT_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #368
  {DBGFIELD("CMP_LE_D")           1, false, false,  3, 2,  2, 1,  0, 0}, // #369
  {DBGFIELD("CMP_LE_S")           1, false, false,  3, 2,  2, 1,  0, 0}, // #370
  {DBGFIELD("CMP_ULE_D")          1, false, false,  3, 2,  2, 1,  0, 0}, // #371
  {DBGFIELD("CMP_ULE_S")          1, false, false,  3, 2,  2, 1,  0, 0}, // #372
  {DBGFIELD("FSAF_D_FSAF_W_FSEQ_D_FSEQ_W_FSLE_D_FSLE_W_FSLT_D_FSLT_W_FSNE_D_FSNE_W_FSOR_D_FSOR_W") 1, false, false,  3, 2,  2, 1,  0, 0}, // #373
  {DBGFIELD("FSUEQ_D_FSUEQ_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #374
  {DBGFIELD("FSULE_D_FSULE_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #375
  {DBGFIELD("FSULT_D_FSULT_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #376
  {DBGFIELD("FSUNE_D_FSUNE_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #377
  {DBGFIELD("FSUN_D_FSUN_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #378
  {DBGFIELD("FCAF_D_FCAF_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #379
  {DBGFIELD("FCEQ_D_FCEQ_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #380
  {DBGFIELD("FCLE_D_FCLE_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #381
  {DBGFIELD("FCLT_D_FCLT_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #382
  {DBGFIELD("FCNE_D_FCNE_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #383
  {DBGFIELD("FCOR_D_FCOR_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #384
  {DBGFIELD("FCUEQ_D_FCUEQ_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #385
  {DBGFIELD("FCULE_D_FCULE_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #386
  {DBGFIELD("FCULT_D_FCULT_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #387
  {DBGFIELD("FCUNE_D_FCUNE_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #388
  {DBGFIELD("FCUN_D_FCUN_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #389
  {DBGFIELD("FABS_D_FABS_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #390
  {DBGFIELD("FFINT_S_D_FFINT_S_W_FFINT_U_D_FFINT_U_W") 1, false, false,  3, 2,  2, 1,  0, 0}, // #391
  {DBGFIELD("FFQL_D_FFQL_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #392
  {DBGFIELD("FFQR_D_FFQR_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #393
  {DBGFIELD("FTINT_S_D_FTINT_S_W_FTINT_U_D_FTINT_U_W") 1, false, false,  3, 2,  2, 1,  0, 0}, // #394
  {DBGFIELD("FRINT_D_FRINT_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #395
  {DBGFIELD("FTQ_H_FTQ_W")        1, false, false,  3, 2,  2, 1,  0, 0}, // #396
  {DBGFIELD("FTRUNC_S_D_FTRUNC_S_W_FTRUNC_U_D_FTRUNC_U_W") 1, false, false,  3, 2,  2, 1,  0, 0}, // #397
  {DBGFIELD("FEXDO_H_FEXDO_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #398
  {DBGFIELD("FEXUPL_D_FEXUPL_W")  1, false, false,  3, 2,  2, 1,  0, 0}, // #399
  {DBGFIELD("FEXUPR_D_FEXUPR_W")  1, false, false,  3, 2,  2, 1,  0, 0}, // #400
  {DBGFIELD("FCLASS_D_FCLASS_W")  1, false, false,  3, 2,  2, 1,  0, 0}, // #401
  {DBGFIELD("FMAX_A_D_FMAX_A_W")  1, false, false,  3, 2,  2, 1,  0, 0}, // #402
  {DBGFIELD("FMAX_D_FMAX_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #403
  {DBGFIELD("FMIN_A_D_FMIN_A_W")  1, false, false,  3, 2,  2, 1,  0, 0}, // #404
  {DBGFIELD("FMIN_D_FMIN_W")      1, false, false,  3, 2,  2, 1,  0, 0}, // #405
  {DBGFIELD("FLOG2_D_FLOG2_W")    1, false, false,  3, 2,  2, 1,  0, 0}, // #406
  {DBGFIELD("ILVL_B_ILVL_D_ILVL_H_ILVL_W_ILVR_B_ILVR_D_ILVR_H_ILVR_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #407
  {DBGFIELD("ILVEV_B_ILVEV_D_ILVEV_H_ILVEV_W_ILVOD_B_ILVOD_D_ILVOD_H_ILVOD_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #408
  {DBGFIELD("INSVE_B_INSVE_D_INSVE_H_INSVE_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #409
  {DBGFIELD("SUBS_S_B_SUBS_S_D_SUBS_S_H_SUBS_S_W_SUBS_U_B_SUBS_U_D_SUBS_U_H_SUBS_U_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #410
  {DBGFIELD("SUBSUS_U_B_SUBSUS_U_D_SUBSUS_U_H_SUBSUS_U_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #411
  {DBGFIELD("SUBSUU_S_B_SUBSUU_S_D_SUBSUU_S_H_SUBSUU_S_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #412
  {DBGFIELD("SUBVI_B_SUBVI_D_SUBVI_H_SUBVI_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #413
  {DBGFIELD("SUBV_B_SUBV_D_SUBV_H_SUBV_W") 1, false, false,  3, 2,  3, 1,  0, 0}, // #414
  {DBGFIELD("MOD_S_B_MOD_S_D_MOD_S_H_MOD_S_W_MOD_U_B_MOD_U_D_MOD_U_H_MOD_U_W") 1, false, false, 32, 1,  5, 1,  0, 0}, // #415
  {DBGFIELD("DIV_S_B_DIV_S_D_DIV_S_H_DIV_S_W_DIV_U_B_DIV_U_D_DIV_U_H_DIV_U_W") 1, false, false, 32, 1,  5, 1,  0, 0}, // #416
  {DBGFIELD("HADD_S_D_HADD_S_H_HADD_S_W_HADD_U_D_HADD_U_H_HADD_U_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #417
  {DBGFIELD("HSUB_S_D_HSUB_S_H_HSUB_S_W_HSUB_U_D_HSUB_U_H_HSUB_U_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #418
  {DBGFIELD("MAX_S_B_MAX_S_D_MAX_S_H_MAX_S_W_MIN_S_B_MIN_S_D_MIN_S_H_MIN_S_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #419
  {DBGFIELD("MAX_U_B_MAX_U_D_MAX_U_H_MAX_U_W_MIN_U_B_MIN_U_D_MIN_U_H_MIN_U_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #420
  {DBGFIELD("MAX_A_B_MAX_A_D_MAX_A_H_MAX_A_W_MIN_A_B_MIN_A_D_MIN_A_H_MIN_A_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #421
  {DBGFIELD("MAXI_S_B_MAXI_S_D_MAXI_S_H_MAXI_S_W_MAXI_U_B_MAXI_U_D_MAXI_U_H_MAXI_U_W_MINI_S_B_MINI_S_D_MINI_S_H_MINI_S_W_MINI_U_B_MINI_U_D_MINI_U_H_MINI_U_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #422
  {DBGFIELD("SRAI_B_SRAI_D_SRAI_H_SRAI_W_SRA_B_SRA_D_SRA_H_SRA_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #423
  {DBGFIELD("SRLI_B_SRLI_D_SRLI_H_SRLI_W_SRL_B_SRL_D_SRL_H_SRL_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #424
  {DBGFIELD("SRARI_B_SRARI_D_SRARI_H_SRARI_W_SRAR_B_SRAR_D_SRAR_H_SRAR_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #425
  {DBGFIELD("SRLRI_B_SRLRI_D_SRLRI_H_SRLRI_W_SRLR_B_SRLR_D_SRLR_H_SRLR_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #426
  {DBGFIELD("SLLI_B_SLLI_D_SLLI_H_SLLI_W_SLL_B_SLL_D_SLL_H_SLL_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #427
  {DBGFIELD("PCKEV_B_PCKEV_D_PCKEV_H_PCKEV_W_PCKOD_B_PCKOD_D_PCKOD_H_PCKOD_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #428
  {DBGFIELD("NLOC_B_NLOC_D_NLOC_H_NLOC_W_NLZC_B_NLZC_D_NLZC_H_NLZC_W") 1, false, false,  3, 2,  1, 1,  0, 0}, // #429
  {DBGFIELD("FRCP_D_FRCP_W")      1, false, false, 11, 2,  4, 1,  0, 0}, // #430
  {DBGFIELD("FRSQRT_D_FRSQRT_W")  1, false, false, 11, 2,  4, 1,  0, 0}, // #431
  {DBGFIELD("FMADD_D_FMADD_W")    1, false, false, 11, 2,  4, 1,  0, 0}, // #432
  {DBGFIELD("FMSUB_D_FMSUB_W")    1, false, false, 11, 2,  4, 1,  0, 0}, // #433
  {DBGFIELD("FDIV_W")             1, false, false, 11, 2,  4, 1,  0, 0}, // #434
  {DBGFIELD("FDIV_D")             1, false, false, 11, 2,  4, 1,  0, 0}, // #435
  {DBGFIELD("FSQRT_W")            1, false, false, 11, 2,  4, 1,  0, 0}, // #436
  {DBGFIELD("FSQRT_D")            1, false, false, 11, 2,  4, 1,  0, 0}, // #437
  {DBGFIELD("FMUL_D_FMUL_W")      1, false, false, 11, 2,  4, 1,  0, 0}, // #438
  {DBGFIELD("FADD_D_FADD_W")      1, false, false, 11, 2,  4, 1,  0, 0}, // #439
  {DBGFIELD("FSUB_D_FSUB_W")      1, false, false, 11, 2,  4, 1,  0, 0}, // #440
  {DBGFIELD("DPADD_S_D_DPADD_S_H_DPADD_S_W_DPADD_U_D_DPADD_U_H_DPADD_U_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #441
  {DBGFIELD("DPSUB_S_D_DPSUB_S_H_DPSUB_S_W_DPSUB_U_D_DPSUB_U_H_DPSUB_U_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #442
  {DBGFIELD("DOTP_S_D_DOTP_S_H_DOTP_S_W_DOTP_U_D_DOTP_U_H_DOTP_U_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #443
  {DBGFIELD("MSUBV_B_MSUBV_D_MSUBV_H_MSUBV_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #444
  {DBGFIELD("MADDV_B_MADDV_D_MADDV_H_MADDV_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #445
  {DBGFIELD("MULV_B_MULV_D_MULV_H_MULV_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #446
  {DBGFIELD("MADDR_Q_H_MADDR_Q_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #447
  {DBGFIELD("MADD_Q_H_MADD_Q_W")  1, false, false,  3, 2,  4, 1,  0, 0}, // #448
  {DBGFIELD("MSUBR_Q_H_MSUBR_Q_W") 1, false, false,  3, 2,  4, 1,  0, 0}, // #449
  {DBGFIELD("MSUB_Q_H_MSUB_Q_W")  1, false, false,  3, 2,  4, 1,  0, 0}, // #450
  {DBGFIELD("MULR_Q_H_MULR_Q_W")  1, false, false,  3, 2,  4, 1,  0, 0}, // #451
  {DBGFIELD("MUL_Q_H_MUL_Q_W")    1, false, false,  3, 2,  4, 1,  0, 0}, // #452
  {DBGFIELD("COPY_U_B_COPY_U_H_COPY_U_W") 1, false, false,  7, 2,  3, 1,  0, 0}, // #453
  {DBGFIELD("COPY_S_B_COPY_S_D_COPY_S_H_COPY_S_W") 1, false, false,  7, 2,  3, 1,  0, 0}, // #454
  {DBGFIELD("ST_B_ST_D_ST_H_ST_W") 1, false, false, 30, 2,  1, 1,  0, 0}, // #455
  {DBGFIELD("LD_B_LD_D_LD_H_LD_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #456
  {DBGFIELD("EXTRV_RS_W")         1, false, false, 33, 1, 13, 1,  0, 0}, // #457
  {DBGFIELD("EXTRV_R_W")          1, false, false, 33, 1, 13, 1,  0, 0}, // #458
  {DBGFIELD("EXTRV_S_H")          1, false, false, 33, 1, 13, 1,  0, 0}, // #459
  {DBGFIELD("EXTRV_W")            1, false, false, 33, 1, 13, 1,  0, 0}, // #460
  {DBGFIELD("EXTR_RS_W")          1, false, false, 33, 1, 13, 1,  0, 0}, // #461
  {DBGFIELD("EXTR_R_W")           1, false, false, 33, 1, 13, 1,  0, 0}, // #462
  {DBGFIELD("EXTR_S_H")           1, false, false, 33, 1, 13, 1,  0, 0}, // #463
  {DBGFIELD("EXTR_W")             1, false, false, 33, 1, 13, 1,  0, 0}, // #464
  {DBGFIELD("INSV")               1, false, false, 33, 1, 13, 1,  0, 0}, // #465
  {DBGFIELD("MTHLIP")             1, false, false, 33, 1,  4, 1,  0, 0}, // #466
  {DBGFIELD("MTHI_DSP")           1, false, false, 33, 1,  4, 1,  0, 0}, // #467
  {DBGFIELD("MTLO_DSP")           1, false, false, 33, 1,  4, 1,  0, 0}, // #468
  {DBGFIELD("ABSQ_S_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #469
  {DBGFIELD("ABSQ_S_W")           1, false, false, 33, 1,  3, 1,  0, 0}, // #470
  {DBGFIELD("ADDQ_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #471
  {DBGFIELD("ADDQ_S_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #472
  {DBGFIELD("ADDQ_S_W")           1, false, false, 33, 1,  3, 1,  0, 0}, // #473
  {DBGFIELD("ADDSC")              1, false, false, 33, 1,  3, 1,  0, 0}, // #474
  {DBGFIELD("ADDU_QB")            1, false, false, 33, 1,  3, 1,  0, 0}, // #475
  {DBGFIELD("ADDU_S_QB")          1, false, false, 33, 1,  3, 1,  0, 0}, // #476
  {DBGFIELD("ADDWC")              1, false, false, 33, 1,  3, 1,  0, 0}, // #477
  {DBGFIELD("BITREV")             1, false, false, 33, 1,  3, 1,  0, 0}, // #478
  {DBGFIELD("BPOSGE32")           1, false, false, 33, 1,  3, 1,  0, 0}, // #479
  {DBGFIELD("CMPGU_EQ_QB")        1, false, false, 33, 1,  3, 1,  0, 0}, // #480
  {DBGFIELD("CMPGU_LE_QB")        1, false, false, 33, 1,  3, 1,  0, 0}, // #481
  {DBGFIELD("CMPGU_LT_QB")        1, false, false, 33, 1,  3, 1,  0, 0}, // #482
  {DBGFIELD("CMPU_EQ_QB")         1, false, false, 33, 1,  3, 1,  0, 0}, // #483
  {DBGFIELD("CMPU_LE_QB")         1, false, false, 33, 1,  3, 1,  0, 0}, // #484
  {DBGFIELD("CMPU_LT_QB")         1, false, false, 33, 1,  3, 1,  0, 0}, // #485
  {DBGFIELD("CMP_EQ_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #486
  {DBGFIELD("CMP_LE_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #487
  {DBGFIELD("CMP_LT_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #488
  {DBGFIELD("DPAQ_SA_L_W")        1, false, false, 33, 1,  3, 1,  0, 0}, // #489
  {DBGFIELD("DPAQ_S_W_PH")        1, false, false, 33, 1,  3, 1,  0, 0}, // #490
  {DBGFIELD("DPAU_H_QBL")         1, false, false, 33, 1,  3, 1,  0, 0}, // #491
  {DBGFIELD("DPAU_H_QBR")         1, false, false, 33, 1,  3, 1,  0, 0}, // #492
  {DBGFIELD("DPSQ_SA_L_W")        1, false, false, 33, 1,  3, 1,  0, 0}, // #493
  {DBGFIELD("DPSQ_S_W_PH")        1, false, false, 33, 1,  3, 1,  0, 0}, // #494
  {DBGFIELD("DPSU_H_QBL")         1, false, false, 33, 1,  3, 1,  0, 0}, // #495
  {DBGFIELD("DPSU_H_QBR")         1, false, false, 33, 1,  3, 1,  0, 0}, // #496
  {DBGFIELD("EXTPDPV")            1, false, false, 33, 1,  3, 1,  0, 0}, // #497
  {DBGFIELD("EXTPDP")             1, false, false, 33, 1,  3, 1,  0, 0}, // #498
  {DBGFIELD("EXTPV")              1, false, false, 33, 1,  3, 1,  0, 0}, // #499
  {DBGFIELD("EXTP")               1, false, false, 33, 1,  3, 1,  0, 0}, // #500
  {DBGFIELD("LBUX")               1, false, false, 33, 1,  3, 1,  0, 0}, // #501
  {DBGFIELD("LHX")                1, false, false, 33, 1,  3, 1,  0, 0}, // #502
  {DBGFIELD("LWX")                1, false, false, 33, 1,  3, 1,  0, 0}, // #503
  {DBGFIELD("MADDU_DSP")          1, false, false, 33, 1,  3, 1,  0, 0}, // #504
  {DBGFIELD("MADD_DSP")           1, false, false, 33, 1,  3, 1,  0, 0}, // #505
  {DBGFIELD("MAQ_SA_W_PHL")       1, false, false, 33, 1,  3, 1,  0, 0}, // #506
  {DBGFIELD("MAQ_SA_W_PHR")       1, false, false, 33, 1,  3, 1,  0, 0}, // #507
  {DBGFIELD("MAQ_S_W_PHL")        1, false, false, 33, 1,  3, 1,  0, 0}, // #508
  {DBGFIELD("MAQ_S_W_PHR")        1, false, false, 33, 1,  3, 1,  0, 0}, // #509
  {DBGFIELD("MFHI_DSP")           1, false, false, 33, 1,  3, 1,  0, 0}, // #510
  {DBGFIELD("MFLO_DSP")           1, false, false, 33, 1,  3, 1,  0, 0}, // #511
  {DBGFIELD("MODSUB")             1, false, false, 33, 1,  3, 1,  0, 0}, // #512
  {DBGFIELD("MSUBU_DSP")          1, false, false, 33, 1,  3, 1,  0, 0}, // #513
  {DBGFIELD("MSUB_DSP")           1, false, false, 33, 1,  3, 1,  0, 0}, // #514
  {DBGFIELD("MULEQ_S_W_PHL")      1, false, false, 33, 1,  3, 1,  0, 0}, // #515
  {DBGFIELD("MULEQ_S_W_PHR")      1, false, false, 33, 1,  3, 1,  0, 0}, // #516
  {DBGFIELD("MULEU_S_PH_QBL")     1, false, false, 33, 1,  3, 1,  0, 0}, // #517
  {DBGFIELD("MULEU_S_PH_QBR")     1, false, false, 33, 1,  3, 1,  0, 0}, // #518
  {DBGFIELD("MULQ_RS_PH")         1, false, false, 33, 1,  3, 1,  0, 0}, // #519
  {DBGFIELD("MULSAQ_S_W_PH")      1, false, false, 33, 1,  3, 1,  0, 0}, // #520
  {DBGFIELD("MULTU_DSP")          1, false, false, 33, 1,  3, 1,  0, 0}, // #521
  {DBGFIELD("MULT_DSP")           1, false, false, 33, 1,  3, 1,  0, 0}, // #522
  {DBGFIELD("PACKRL_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #523
  {DBGFIELD("PICK_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #524
  {DBGFIELD("PICK_QB")            1, false, false, 33, 1,  3, 1,  0, 0}, // #525
  {DBGFIELD("PRECEQU_PH_QBLA")    1, false, false, 33, 1,  3, 1,  0, 0}, // #526
  {DBGFIELD("PRECEQU_PH_QBL")     1, false, false, 33, 1,  3, 1,  0, 0}, // #527
  {DBGFIELD("PRECEQU_PH_QBRA")    1, false, false, 33, 1,  3, 1,  0, 0}, // #528
  {DBGFIELD("PRECEQU_PH_QBR")     1, false, false, 33, 1,  3, 1,  0, 0}, // #529
  {DBGFIELD("PRECEQ_W_PHL")       1, false, false, 33, 1,  3, 1,  0, 0}, // #530
  {DBGFIELD("PRECEQ_W_PHR")       1, false, false, 33, 1,  3, 1,  0, 0}, // #531
  {DBGFIELD("PRECEU_PH_QBLA")     1, false, false, 33, 1,  3, 1,  0, 0}, // #532
  {DBGFIELD("PRECEU_PH_QBL")      1, false, false, 33, 1,  3, 1,  0, 0}, // #533
  {DBGFIELD("PRECEU_PH_QBRA")     1, false, false, 33, 1,  3, 1,  0, 0}, // #534
  {DBGFIELD("PRECEU_PH_QBR")      1, false, false, 33, 1,  3, 1,  0, 0}, // #535
  {DBGFIELD("PRECRQU_S_QB_PH")    1, false, false, 33, 1,  3, 1,  0, 0}, // #536
  {DBGFIELD("PRECRQ_PH_W")        1, false, false, 33, 1,  3, 1,  0, 0}, // #537
  {DBGFIELD("PRECRQ_QB_PH")       1, false, false, 33, 1,  3, 1,  0, 0}, // #538
  {DBGFIELD("PRECRQ_RS_PH_W")     1, false, false, 33, 1,  3, 1,  0, 0}, // #539
  {DBGFIELD("RADDU_W_QB")         1, false, false, 33, 1,  3, 1,  0, 0}, // #540
  {DBGFIELD("RDDSP")              1, false, false, 33, 1,  3, 1,  0, 0}, // #541
  {DBGFIELD("REPLV_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #542
  {DBGFIELD("REPLV_QB")           1, false, false, 33, 1,  3, 1,  0, 0}, // #543
  {DBGFIELD("REPL_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #544
  {DBGFIELD("REPL_QB")            1, false, false, 33, 1,  3, 1,  0, 0}, // #545
  {DBGFIELD("SHILOV")             1, false, false, 33, 1,  3, 1,  0, 0}, // #546
  {DBGFIELD("SHILO")              1, false, false, 33, 1,  3, 1,  0, 0}, // #547
  {DBGFIELD("SHLLV_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #548
  {DBGFIELD("SHLLV_QB")           1, false, false, 33, 1,  3, 1,  0, 0}, // #549
  {DBGFIELD("SHLLV_S_PH")         1, false, false, 33, 1,  3, 1,  0, 0}, // #550
  {DBGFIELD("SHLLV_S_W")          1, false, false, 33, 1,  3, 1,  0, 0}, // #551
  {DBGFIELD("SHLL_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #552
  {DBGFIELD("SHLL_QB")            1, false, false, 33, 1,  3, 1,  0, 0}, // #553
  {DBGFIELD("SHLL_S_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #554
  {DBGFIELD("SHLL_S_W")           1, false, false, 33, 1,  3, 1,  0, 0}, // #555
  {DBGFIELD("SHRAV_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #556
  {DBGFIELD("SHRAV_R_PH")         1, false, false, 33, 1,  3, 1,  0, 0}, // #557
  {DBGFIELD("SHRAV_R_W")          1, false, false, 33, 1,  3, 1,  0, 0}, // #558
  {DBGFIELD("SHRA_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #559
  {DBGFIELD("SHRA_R_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #560
  {DBGFIELD("SHRA_R_W")           1, false, false, 33, 1,  3, 1,  0, 0}, // #561
  {DBGFIELD("SHRLV_QB")           1, false, false, 33, 1,  3, 1,  0, 0}, // #562
  {DBGFIELD("SHRL_QB")            1, false, false, 33, 1,  3, 1,  0, 0}, // #563
  {DBGFIELD("SUBQ_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #564
  {DBGFIELD("SUBQ_S_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #565
  {DBGFIELD("SUBQ_S_W")           1, false, false, 33, 1,  3, 1,  0, 0}, // #566
  {DBGFIELD("SUBU_QB")            1, false, false, 33, 1,  3, 1,  0, 0}, // #567
  {DBGFIELD("SUBU_S_QB")          1, false, false, 33, 1,  3, 1,  0, 0}, // #568
  {DBGFIELD("WRDSP")              1, false, false, 33, 1,  3, 1,  0, 0}, // #569
  {DBGFIELD("ABSQ_S_QB")          1, false, false, 33, 1,  3, 1,  0, 0}, // #570
  {DBGFIELD("ADDQH_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #571
  {DBGFIELD("ADDQH_R_PH")         1, false, false, 33, 1,  3, 1,  0, 0}, // #572
  {DBGFIELD("ADDQH_R_W")          1, false, false, 33, 1,  3, 1,  0, 0}, // #573
  {DBGFIELD("ADDQH_W")            1, false, false, 33, 1,  3, 1,  0, 0}, // #574
  {DBGFIELD("ADDUH_QB")           1, false, false, 33, 1,  3, 1,  0, 0}, // #575
  {DBGFIELD("ADDUH_R_QB")         1, false, false, 33, 1,  3, 1,  0, 0}, // #576
  {DBGFIELD("ADDU_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #577
  {DBGFIELD("ADDU_S_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #578
  {DBGFIELD("APPEND")             1, false, false, 33, 1,  3, 1,  0, 0}, // #579
  {DBGFIELD("BALIGN")             1, false, false, 33, 1,  3, 1,  0, 0}, // #580
  {DBGFIELD("CMPGDU_EQ_QB")       1, false, false, 33, 1,  3, 1,  0, 0}, // #581
  {DBGFIELD("CMPGDU_LE_QB")       1, false, false, 33, 1,  3, 1,  0, 0}, // #582
  {DBGFIELD("CMPGDU_LT_QB")       1, false, false, 33, 1,  3, 1,  0, 0}, // #583
  {DBGFIELD("DPA_W_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #584
  {DBGFIELD("DPAQX_SA_W_PH")      1, false, false, 33, 1,  3, 1,  0, 0}, // #585
  {DBGFIELD("DPAQX_S_W_PH")       1, false, false, 33, 1,  3, 1,  0, 0}, // #586
  {DBGFIELD("DPAX_W_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #587
  {DBGFIELD("DPS_W_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #588
  {DBGFIELD("DPSQX_S_W_PH")       1, false, false, 33, 1,  3, 1,  0, 0}, // #589
  {DBGFIELD("DPSQX_SA_W_PH")      1, false, false, 33, 1,  3, 1,  0, 0}, // #590
  {DBGFIELD("DPSX_W_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #591
  {DBGFIELD("MUL_PH")             1, false, false, 33, 1,  3, 1,  0, 0}, // #592
  {DBGFIELD("MUL_S_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #593
  {DBGFIELD("MULQ_RS_W")          1, false, false, 33, 1,  3, 1,  0, 0}, // #594
  {DBGFIELD("MULQ_S_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #595
  {DBGFIELD("MULQ_S_W")           1, false, false, 33, 1,  3, 1,  0, 0}, // #596
  {DBGFIELD("MULSA_W_PH")         1, false, false, 33, 1,  3, 1,  0, 0}, // #597
  {DBGFIELD("PRECR_QB_PH")        1, false, false, 33, 1,  3, 1,  0, 0}, // #598
  {DBGFIELD("PRECR_SRA_PH_W")     1, false, false, 33, 1,  3, 1,  0, 0}, // #599
  {DBGFIELD("PRECR_SRA_R_PH_W")   1, false, false, 33, 1,  3, 1,  0, 0}, // #600
  {DBGFIELD("PREPEND")            1, false, false, 33, 1,  3, 1,  0, 0}, // #601
  {DBGFIELD("SHRA_QB")            1, false, false, 33, 1,  3, 1,  0, 0}, // #602
  {DBGFIELD("SHRA_R_QB")          1, false, false, 33, 1,  3, 1,  0, 0}, // #603
  {DBGFIELD("SHRAV_QB")           1, false, false, 33, 1,  3, 1,  0, 0}, // #604
  {DBGFIELD("SHRAV_R_QB")         1, false, false, 33, 1,  3, 1,  0, 0}, // #605
  {DBGFIELD("SHRL_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #606
  {DBGFIELD("SHRLV_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #607
  {DBGFIELD("SUBQH_PH")           1, false, false, 33, 1,  3, 1,  0, 0}, // #608
  {DBGFIELD("SUBQH_R_PH")         1, false, false, 33, 1,  3, 1,  0, 0}, // #609
  {DBGFIELD("SUBQH_W")            1, false, false, 33, 1,  3, 1,  0, 0}, // #610
  {DBGFIELD("SUBQH_R_W")          1, false, false, 33, 1,  3, 1,  0, 0}, // #611
  {DBGFIELD("SUBU_PH")            1, false, false, 33, 1,  3, 1,  0, 0}, // #612
  {DBGFIELD("SUBU_S_PH")          1, false, false, 33, 1,  3, 1,  0, 0}, // #613
  {DBGFIELD("SUBUH_QB")           1, false, false, 33, 1,  3, 1,  0, 0}, // #614
  {DBGFIELD("SUBUH_R_QB")         1, false, false, 33, 1,  3, 1,  0, 0}, // #615
  {DBGFIELD("ABSQ_S_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #616
  {DBGFIELD("ABSQ_S_W_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #617
  {DBGFIELD("ADDQ_PH_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #618
  {DBGFIELD("ADDQ_S_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #619
  {DBGFIELD("ADDQ_S_W_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #620
  {DBGFIELD("ADDSC_MM")           1, false, false, 33, 1,  3, 1,  0, 0}, // #621
  {DBGFIELD("ADDU_QB_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #622
  {DBGFIELD("ADDU_S_QB_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #623
  {DBGFIELD("ADDWC_MM")           1, false, false, 33, 1,  3, 1,  0, 0}, // #624
  {DBGFIELD("BITREV_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #625
  {DBGFIELD("BPOSGE32_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #626
  {DBGFIELD("CMPGU_EQ_QB_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #627
  {DBGFIELD("CMPGU_LE_QB_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #628
  {DBGFIELD("CMPGU_LT_QB_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #629
  {DBGFIELD("CMPU_EQ_QB_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #630
  {DBGFIELD("CMPU_LE_QB_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #631
  {DBGFIELD("CMPU_LT_QB_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #632
  {DBGFIELD("CMP_EQ_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #633
  {DBGFIELD("CMP_LE_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #634
  {DBGFIELD("CMP_LT_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #635
  {DBGFIELD("DPAQ_SA_L_W_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #636
  {DBGFIELD("DPAQ_S_W_PH_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #637
  {DBGFIELD("DPAU_H_QBL_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #638
  {DBGFIELD("DPAU_H_QBR_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #639
  {DBGFIELD("DPSQ_SA_L_W_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #640
  {DBGFIELD("DPSQ_S_W_PH_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #641
  {DBGFIELD("DPSU_H_QBL_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #642
  {DBGFIELD("DPSU_H_QBR_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #643
  {DBGFIELD("EXTPDPV_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #644
  {DBGFIELD("EXTPDP_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #645
  {DBGFIELD("EXTPV_MM")           1, false, false, 33, 1,  3, 1,  0, 0}, // #646
  {DBGFIELD("EXTP_MM")            1, false, false, 33, 1,  3, 1,  0, 0}, // #647
  {DBGFIELD("EXTRV_RS_W_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #648
  {DBGFIELD("EXTRV_R_W_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #649
  {DBGFIELD("EXTRV_S_H_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #650
  {DBGFIELD("EXTRV_W_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #651
  {DBGFIELD("EXTR_RS_W_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #652
  {DBGFIELD("EXTR_R_W_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #653
  {DBGFIELD("EXTR_S_H_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #654
  {DBGFIELD("EXTR_W_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #655
  {DBGFIELD("INSV_MM")            1, false, false, 33, 1,  3, 1,  0, 0}, // #656
  {DBGFIELD("LBUX_MM")            1, false, false, 33, 1,  3, 1,  0, 0}, // #657
  {DBGFIELD("LHX_MM")             1, false, false, 33, 1,  3, 1,  0, 0}, // #658
  {DBGFIELD("LWX_MM")             1, false, false, 33, 1,  3, 1,  0, 0}, // #659
  {DBGFIELD("MADDU_DSP_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #660
  {DBGFIELD("MADD_DSP_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #661
  {DBGFIELD("MAQ_SA_W_PHL_MM")    1, false, false, 33, 1,  3, 1,  0, 0}, // #662
  {DBGFIELD("MAQ_SA_W_PHR_MM")    1, false, false, 33, 1,  3, 1,  0, 0}, // #663
  {DBGFIELD("MAQ_S_W_PHL_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #664
  {DBGFIELD("MAQ_S_W_PHR_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #665
  {DBGFIELD("MFHI_DSP_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #666
  {DBGFIELD("MFLO_DSP_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #667
  {DBGFIELD("MODSUB_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #668
  {DBGFIELD("MOVEP_MM")           1, false, false, 33, 1,  3, 1,  0, 0}, // #669
  {DBGFIELD("MOVN_I_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #670
  {DBGFIELD("MOVZ_I_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #671
  {DBGFIELD("MSUBU_DSP_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #672
  {DBGFIELD("MSUB_DSP_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #673
  {DBGFIELD("MTHI_DSP_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #674
  {DBGFIELD("MTHLIP_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #675
  {DBGFIELD("MTLO_DSP_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #676
  {DBGFIELD("MULEQ_S_W_PHL_MM")   1, false, false, 33, 1,  3, 1,  0, 0}, // #677
  {DBGFIELD("MULEQ_S_W_PHR_MM")   1, false, false, 33, 1,  3, 1,  0, 0}, // #678
  {DBGFIELD("MULEU_S_PH_QBL_MM")  1, false, false, 33, 1,  3, 1,  0, 0}, // #679
  {DBGFIELD("MULEU_S_PH_QBR_MM")  1, false, false, 33, 1,  3, 1,  0, 0}, // #680
  {DBGFIELD("MULQ_RS_PH_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #681
  {DBGFIELD("MULSAQ_S_W_PH_MM")   1, false, false, 33, 1,  3, 1,  0, 0}, // #682
  {DBGFIELD("MULTU_DSP_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #683
  {DBGFIELD("MULT_DSP_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #684
  {DBGFIELD("PACKRL_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #685
  {DBGFIELD("PICK_PH_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #686
  {DBGFIELD("PICK_QB_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #687
  {DBGFIELD("PRECEQU_PH_QBLA_MM") 1, false, false, 33, 1,  3, 1,  0, 0}, // #688
  {DBGFIELD("PRECEQU_PH_QBL_MM")  1, false, false, 33, 1,  3, 1,  0, 0}, // #689
  {DBGFIELD("PRECEQU_PH_QBRA_MM") 1, false, false, 33, 1,  3, 1,  0, 0}, // #690
  {DBGFIELD("PRECEQU_PH_QBR_MM")  1, false, false, 33, 1,  3, 1,  0, 0}, // #691
  {DBGFIELD("PRECEQ_W_PHL_MM")    1, false, false, 33, 1,  3, 1,  0, 0}, // #692
  {DBGFIELD("PRECEQ_W_PHR_MM")    1, false, false, 33, 1,  3, 1,  0, 0}, // #693
  {DBGFIELD("PRECEU_PH_QBLA_MM")  1, false, false, 33, 1,  3, 1,  0, 0}, // #694
  {DBGFIELD("PRECEU_PH_QBL_MM")   1, false, false, 33, 1,  3, 1,  0, 0}, // #695
  {DBGFIELD("PRECEU_PH_QBRA_MM")  1, false, false, 33, 1,  3, 1,  0, 0}, // #696
  {DBGFIELD("PRECEU_PH_QBR_MM")   1, false, false, 33, 1,  3, 1,  0, 0}, // #697
  {DBGFIELD("PRECRQU_S_QB_PH_MM") 1, false, false, 33, 1,  3, 1,  0, 0}, // #698
  {DBGFIELD("PRECRQ_PH_W_MM")     1, false, false, 33, 1,  3, 1,  0, 0}, // #699
  {DBGFIELD("PRECRQ_QB_PH_MM")    1, false, false, 33, 1,  3, 1,  0, 0}, // #700
  {DBGFIELD("PRECRQ_RS_PH_W_MM")  1, false, false, 33, 1,  3, 1,  0, 0}, // #701
  {DBGFIELD("RADDU_W_QB_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #702
  {DBGFIELD("RDDSP_MM")           1, false, false, 33, 1,  3, 1,  0, 0}, // #703
  {DBGFIELD("REPLV_PH_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #704
  {DBGFIELD("REPLV_QB_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #705
  {DBGFIELD("REPL_PH_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #706
  {DBGFIELD("REPL_QB_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #707
  {DBGFIELD("SHILOV_MM")          1, false, false, 33, 1,  3, 1,  0, 0}, // #708
  {DBGFIELD("SHILO_MM")           1, false, false, 33, 1,  3, 1,  0, 0}, // #709
  {DBGFIELD("SHLLV_PH_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #710
  {DBGFIELD("SHLLV_QB_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #711
  {DBGFIELD("SHLLV_S_PH_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #712
  {DBGFIELD("SHLLV_S_W_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #713
  {DBGFIELD("SHLL_PH_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #714
  {DBGFIELD("SHLL_QB_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #715
  {DBGFIELD("SHLL_S_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #716
  {DBGFIELD("SHLL_S_W_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #717
  {DBGFIELD("SHRAV_PH_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #718
  {DBGFIELD("SHRAV_R_PH_MM")      1, false, false, 33, 1,  3, 1,  0, 0}, // #719
  {DBGFIELD("SHRAV_R_W_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #720
  {DBGFIELD("SHRA_PH_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #721
  {DBGFIELD("SHRA_R_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #722
  {DBGFIELD("SHRA_R_W_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #723
  {DBGFIELD("SHRLV_QB_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #724
  {DBGFIELD("SHRL_QB_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #725
  {DBGFIELD("SUBQ_PH_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #726
  {DBGFIELD("SUBQ_S_PH_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #727
  {DBGFIELD("SUBQ_S_W_MM")        1, false, false, 33, 1,  3, 1,  0, 0}, // #728
  {DBGFIELD("SUBU_QB_MM")         1, false, false, 33, 1,  3, 1,  0, 0}, // #729
  {DBGFIELD("SUBU_S_QB_MM")       1, false, false, 33, 1,  3, 1,  0, 0}, // #730
  {DBGFIELD("WRDSP_MM")           1, false, false, 33, 1,  3, 1,  0, 0}, // #731
  {DBGFIELD("ABSQ_S_QB_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #732
  {DBGFIELD("ADDQH_PH_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #733
  {DBGFIELD("ADDQH_R_PH_MMR2")    1, false, false, 33, 1,  3, 1,  0, 0}, // #734
  {DBGFIELD("ADDQH_R_W_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #735
  {DBGFIELD("ADDQH_W_MMR2")       1, false, false, 33, 1,  3, 1,  0, 0}, // #736
  {DBGFIELD("ADDUH_QB_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #737
  {DBGFIELD("ADDUH_R_QB_MMR2")    1, false, false, 33, 1,  3, 1,  0, 0}, // #738
  {DBGFIELD("ADDU_PH_MMR2")       1, false, false, 33, 1,  3, 1,  0, 0}, // #739
  {DBGFIELD("ADDU_S_PH_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #740
  {DBGFIELD("APPEND_MMR2")        1, false, false, 33, 1,  3, 1,  0, 0}, // #741
  {DBGFIELD("BALIGN_MMR2")        1, false, false, 33, 1,  3, 1,  0, 0}, // #742
  {DBGFIELD("CMPGDU_EQ_QB_MMR2")  1, false, false, 33, 1,  3, 1,  0, 0}, // #743
  {DBGFIELD("CMPGDU_LE_QB_MMR2")  1, false, false, 33, 1,  3, 1,  0, 0}, // #744
  {DBGFIELD("CMPGDU_LT_QB_MMR2")  1, false, false, 33, 1,  3, 1,  0, 0}, // #745
  {DBGFIELD("DPA_W_PH_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #746
  {DBGFIELD("DPAQX_SA_W_PH_MMR2") 1, false, false, 33, 1,  3, 1,  0, 0}, // #747
  {DBGFIELD("DPAQX_S_W_PH_MMR2")  1, false, false, 33, 1,  3, 1,  0, 0}, // #748
  {DBGFIELD("DPAX_W_PH_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #749
  {DBGFIELD("DPS_W_PH_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #750
  {DBGFIELD("DPSQX_S_W_PH_MMR2")  1, false, false, 33, 1,  3, 1,  0, 0}, // #751
  {DBGFIELD("DPSQX_SA_W_PH_MMR2") 1, false, false, 33, 1,  3, 1,  0, 0}, // #752
  {DBGFIELD("DPSX_W_PH_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #753
  {DBGFIELD("MUL_PH_MMR2")        1, false, false, 33, 1,  3, 1,  0, 0}, // #754
  {DBGFIELD("MUL_S_PH_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #755
  {DBGFIELD("MULQ_RS_W_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #756
  {DBGFIELD("MULQ_S_PH_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #757
  {DBGFIELD("MULQ_S_W_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #758
  {DBGFIELD("MULSA_W_PH_MMR2")    1, false, false, 33, 1,  3, 1,  0, 0}, // #759
  {DBGFIELD("PRECR_QB_PH_MMR2")   1, false, false, 33, 1,  3, 1,  0, 0}, // #760
  {DBGFIELD("PRECR_SRA_PH_W_MMR2") 1, false, false, 33, 1,  3, 1,  0, 0}, // #761
  {DBGFIELD("PRECR_SRA_R_PH_W_MMR2") 1, false, false, 33, 1,  3, 1,  0, 0}, // #762
  {DBGFIELD("PREPEND_MMR2")       1, false, false, 33, 1,  3, 1,  0, 0}, // #763
  {DBGFIELD("SHRA_QB_MMR2")       1, false, false, 33, 1,  3, 1,  0, 0}, // #764
  {DBGFIELD("SHRA_R_QB_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #765
  {DBGFIELD("SHRAV_QB_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #766
  {DBGFIELD("SHRAV_R_QB_MMR2")    1, false, false, 33, 1,  3, 1,  0, 0}, // #767
  {DBGFIELD("SHRL_PH_MMR2")       1, false, false, 33, 1,  3, 1,  0, 0}, // #768
  {DBGFIELD("SHRLV_PH_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #769
  {DBGFIELD("SUBQH_PH_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #770
  {DBGFIELD("SUBQH_R_PH_MMR2")    1, false, false, 33, 1,  3, 1,  0, 0}, // #771
  {DBGFIELD("SUBQH_W_MMR2")       1, false, false, 33, 1,  3, 1,  0, 0}, // #772
  {DBGFIELD("SUBQH_R_W_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #773
  {DBGFIELD("SUBU_PH_MMR2")       1, false, false, 33, 1,  3, 1,  0, 0}, // #774
  {DBGFIELD("SUBU_S_PH_MMR2")     1, false, false, 33, 1,  3, 1,  0, 0}, // #775
  {DBGFIELD("SUBUH_QB_MMR2")      1, false, false, 33, 1,  3, 1,  0, 0}, // #776
  {DBGFIELD("SUBUH_R_QB_MMR2")    1, false, false, 33, 1,  3, 1,  0, 0}, // #777
  {DBGFIELD("BPOSGE32C_MMR3")     1, false, false, 33, 1,  3, 1,  0, 0}, // #778
  {DBGFIELD("P5600WriteALU")      0, false, false,  0, 0,  0, 0,  0, 0}, // #779
  {DBGFIELD("P5600WriteAL2")      0, false, false,  0, 0,  0, 0,  0, 0} // #780
}; // MipsGenericModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc MipsP5600ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIPseudo")           0, false, false,  0, 0,  0, 0,  0, 0}, // #1
  {DBGFIELD("II_ABS")             1, false, false, 24, 2,  1, 1,  0, 0}, // #2
  {DBGFIELD("II_ADD")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("II_ADDIUPC")         0, false, false,  0, 0,  0, 0,  0, 0}, // #4
  {DBGFIELD("II_ADDIU")           65534, false, false,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("II_ADDU")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("II_ADDI")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #7
  {DBGFIELD("II_ALIGN")           0, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("II_ALUIPC")          0, false, false,  0, 0,  0, 0,  0, 0}, // #9
  {DBGFIELD("II_AND")             1, false, false, 34, 2,  1, 1,  0, 0}, // #10
  {DBGFIELD("II_ANDI")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #11
  {DBGFIELD("II_AUI")             0, false, false,  0, 0,  0, 0,  0, 0}, // #12
  {DBGFIELD("II_AUIPC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #13
  {DBGFIELD("IIM16Alu")           0, false, false,  0, 0,  0, 0,  0, 0}, // #14
  {DBGFIELD("II_B")               1, false, false, 36, 3,  1, 1,  0, 0}, // #15
  {DBGFIELD("II_BADDU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #16
  {DBGFIELD("II_BC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #17
  {DBGFIELD("II_BALC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #18
  {DBGFIELD("II_BCCZAL")          1, false, false, 36, 3,  1, 1,  0, 0}, // #19
  {DBGFIELD("II_BBIT")            0, false, false,  0, 0,  0, 0,  0, 0}, // #20
  {DBGFIELD("II_BC1CCZ")          0, false, false,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("II_BC1F")            2, false, false, 39, 4,  3, 1,  0, 0}, // #22
  {DBGFIELD("II_BC1FL")           2, false, false, 39, 4,  3, 1,  0, 0}, // #23
  {DBGFIELD("II_BC1T")            2, false, false, 39, 4,  3, 1,  0, 0}, // #24
  {DBGFIELD("II_BC1TL")           2, false, false, 39, 4,  3, 1,  0, 0}, // #25
  {DBGFIELD("II_BC2CCZ")          0, false, false,  0, 0,  0, 0,  0, 0}, // #26
  {DBGFIELD("II_BCC")             1, false, false, 36, 3,  1, 1,  0, 0}, // #27
  {DBGFIELD("II_BCCC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("II_BCCZ")            1, false, false, 36, 3,  1, 1,  0, 0}, // #29
  {DBGFIELD("II_BCCZC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #30
  {DBGFIELD("II_BCCZALS")         0, false, false,  0, 0,  0, 0,  0, 0}, // #31
  {DBGFIELD("II_BITSWAP")         0, false, false,  0, 0,  0, 0,  0, 0}, // #32
  {DBGFIELD("II_BREAK")           1, false, false, 36, 3,  1, 1,  0, 0}, // #33
  {DBGFIELD("II_MTC1")            2, false, false, 39, 4,  1, 1,  0, 0}, // #34
  {DBGFIELD("II_CACHE")           1, false, false, 43, 2,  1, 1,  0, 0}, // #35
  {DBGFIELD("II_CACHEE")          1, false, false, 43, 2,  1, 1,  0, 0}, // #36
  {DBGFIELD("II_CEIL")            1, false, false, 45, 2,  2, 1,  0, 0}, // #37
  {DBGFIELD("II_CFC1")            2, false, false, 39, 4,  3, 1,  0, 0}, // #38
  {DBGFIELD("II_CFC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("II_INS")             1, false, false,  1, 2,  3, 1,  0, 0}, // #40
  {DBGFIELD("II_CLASS_D")         0, false, false,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("II_CLASS_S")         0, false, false,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("II_CLO")             1, false, false,  1, 2,  1, 1,  0, 0}, // #43
  {DBGFIELD("II_CLZ")             1, false, false,  1, 2,  1, 1,  0, 0}, // #44
  {DBGFIELD("II_CMP_CC_D")        0, false, false,  0, 0,  0, 0,  0, 0}, // #45
  {DBGFIELD("II_CMP_CC_S")        0, false, false,  0, 0,  0, 0,  0, 0}, // #46
  {DBGFIELD("II_CTC1")            2, false, false, 39, 4,  1, 1,  0, 0}, // #47
  {DBGFIELD("II_CTC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("II_CVT")             1, false, false, 45, 2,  2, 1,  0, 0}, // #49
  {DBGFIELD("II_C_CC_D")          1, false, false, 45, 2,  2, 1,  0, 0}, // #50
  {DBGFIELD("II_C_CC_S")          1, false, false, 45, 2,  2, 1,  0, 0}, // #51
  {DBGFIELD("II_DADD")            0, false, false,  0, 0,  0, 0,  0, 0}, // #52
  {DBGFIELD("II_DADDIU")          0, false, false,  0, 0,  0, 0,  0, 0}, // #53
  {DBGFIELD("II_DADDU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #54
  {DBGFIELD("II_DADDI")           0, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("II_DAHI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("II_DALIGN")          0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("II_DATI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("II_DAUI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("II_DBITSWAP")        0, false, false,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("II_DCLO")            0, false, false,  0, 0,  0, 0,  0, 0}, // #61
  {DBGFIELD("II_DCLZ")            0, false, false,  0, 0,  0, 0,  0, 0}, // #62
  {DBGFIELD("II_DDIV")            0, false, false,  0, 0,  0, 0,  0, 0}, // #63
  {DBGFIELD("II_DDIVU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("II_DERET")           1, false, false, 36, 3,  1, 1,  0, 0}, // #65
  {DBGFIELD("II_EXT")             1, false, false,  1, 2,  3, 1,  0, 0}, // #66
  {DBGFIELD("II_DI")              1, false, false,  1, 2,  1, 1,  0, 0}, // #67
  {DBGFIELD("II_DIV")             1, false, false, 47, 3, 14, 1,  0, 0}, // #68
  {DBGFIELD("II_DIVU")            1, false, false, 47, 3, 14, 1,  0, 0}, // #69
  {DBGFIELD("II_DLSA")            0, false, false,  0, 0,  0, 0,  0, 0}, // #70
  {DBGFIELD("II_DMFC0")           0, false, false,  0, 0,  0, 0,  0, 0}, // #71
  {DBGFIELD("II_DMFC1")           0, false, false,  0, 0,  0, 0,  0, 0}, // #72
  {DBGFIELD("II_DMFC2")           0, false, false,  0, 0,  0, 0,  0, 0}, // #73
  {DBGFIELD("II_DMOD")            0, false, false,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("II_DMODU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #75
  {DBGFIELD("II_DMTC0")           0, false, false,  0, 0,  0, 0,  0, 0}, // #76
  {DBGFIELD("II_DMTC1")           0, false, false,  0, 0,  0, 0,  0, 0}, // #77
  {DBGFIELD("II_DMTC2")           0, false, false,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("II_DMUH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #79
  {DBGFIELD("II_DMUHU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #80
  {DBGFIELD("II_DMUL")            0, false, false,  0, 0,  0, 0,  0, 0}, // #81
  {DBGFIELD("II_DMULT")           0, false, false,  0, 0,  0, 0,  0, 0}, // #82
  {DBGFIELD("II_DMULTU")          0, false, false,  0, 0,  0, 0,  0, 0}, // #83
  {DBGFIELD("II_DMULU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #84
  {DBGFIELD("II_POP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #85
  {DBGFIELD("II_DROTR")           0, false, false,  0, 0,  0, 0,  0, 0}, // #86
  {DBGFIELD("II_DROTR32")         0, false, false,  0, 0,  0, 0,  0, 0}, // #87
  {DBGFIELD("II_DROTRV")          0, false, false,  0, 0,  0, 0,  0, 0}, // #88
  {DBGFIELD("II_DSBH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #89
  {DBGFIELD("II_DSHD")            0, false, false,  0, 0,  0, 0,  0, 0}, // #90
  {DBGFIELD("II_DSLL")            0, false, false,  0, 0,  0, 0,  0, 0}, // #91
  {DBGFIELD("II_DSLL32")          0, false, false,  0, 0,  0, 0,  0, 0}, // #92
  {DBGFIELD("II_DSLLV")           0, false, false,  0, 0,  0, 0,  0, 0}, // #93
  {DBGFIELD("II_DSRA")            0, false, false,  0, 0,  0, 0,  0, 0}, // #94
  {DBGFIELD("II_DSRA32")          0, false, false,  0, 0,  0, 0,  0, 0}, // #95
  {DBGFIELD("II_DSRAV")           0, false, false,  0, 0,  0, 0,  0, 0}, // #96
  {DBGFIELD("II_DSRL")            0, false, false,  0, 0,  0, 0,  0, 0}, // #97
  {DBGFIELD("II_DSRL32")          0, false, false,  0, 0,  0, 0,  0, 0}, // #98
  {DBGFIELD("II_DSRLV")           0, false, false,  0, 0,  0, 0,  0, 0}, // #99
  {DBGFIELD("II_DSUB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #100
  {DBGFIELD("II_DSUBU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #101
  {DBGFIELD("II_DVP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #102
  {DBGFIELD("II_EHB")             1, false, false,  1, 2,  3, 1,  0, 0}, // #103
  {DBGFIELD("II_EI")              1, false, false,  1, 2,  1, 1,  0, 0}, // #104
  {DBGFIELD("II_ERET")            1, false, false, 36, 3,  1, 1,  0, 0}, // #105
  {DBGFIELD("II_ERETNC")          1, false, false, 36, 3,  1, 1,  0, 0}, // #106
  {DBGFIELD("II_EVP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #107
  {DBGFIELD("II_MFC1")            2, false, false, 39, 4,  3, 1,  0, 0}, // #108
  {DBGFIELD("II_ADD_D")           1, false, false, 45, 2,  2, 1,  0, 0}, // #109
  {DBGFIELD("II_ADD_S")           1, false, false, 45, 2,  2, 1,  0, 0}, // #110
  {DBGFIELD("II_DIV_D")           1, false, false, 50, 3,  6, 1,  0, 0}, // #111
  {DBGFIELD("II_DIV_S")           1, false, false, 53, 3, 15, 1,  0, 0}, // #112
  {DBGFIELD("II_FLOOR")           1, false, false, 45, 2,  2, 1,  0, 0}, // #113
  {DBGFIELD("II_MOV_D")           1, false, false, 24, 2,  1, 1,  0, 0}, // #114
  {DBGFIELD("II_MOV_S")           1, false, false, 24, 2,  1, 1,  0, 0}, // #115
  {DBGFIELD("II_MUL_D")           1, false, false, 45, 2,  2, 1,  0, 0}, // #116
  {DBGFIELD("II_MUL_S")           1, false, false, 45, 2,  2, 1,  0, 0}, // #117
  {DBGFIELD("II_NEG")             1, false, false, 24, 2,  1, 1,  0, 0}, // #118
  {DBGFIELD("II_SQRT_D")          1, false, false, 56, 3, 16, 1,  0, 0}, // #119
  {DBGFIELD("II_SQRT_S")          1, false, false, 59, 3, 17, 1,  0, 0}, // #120
  {DBGFIELD("II_SUB_D")           1, false, false, 45, 2,  2, 1,  0, 0}, // #121
  {DBGFIELD("II_SUB_S")           1, false, false, 45, 2,  2, 1,  0, 0}, // #122
  {DBGFIELD("II_J")               1, false, false, 36, 3,  1, 1,  0, 0}, // #123
  {DBGFIELD("II_JAL")             1, false, false, 36, 3,  3, 1,  0, 0}, // #124
  {DBGFIELD("II_JALR")            1, false, false, 36, 3,  3, 1,  0, 0}, // #125
  {DBGFIELD("II_JALR_HB")         1, false, false, 36, 3,  3, 1,  0, 0}, // #126
  {DBGFIELD("II_JALRC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #127
  {DBGFIELD("II_JALRS")           0, false, false,  0, 0,  0, 0,  0, 0}, // #128
  {DBGFIELD("II_JALS")            0, false, false,  0, 0,  0, 0,  0, 0}, // #129
  {DBGFIELD("II_JIALC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #130
  {DBGFIELD("II_JIC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #131
  {DBGFIELD("II_JR")              1, false, false, 36, 3,  1, 1,  0, 0}, // #132
  {DBGFIELD("II_JRADDIUSP")       0, false, false,  0, 0,  0, 0,  0, 0}, // #133
  {DBGFIELD("II_JRC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #134
  {DBGFIELD("II_JR_HB")           1, false, false, 36, 3,  1, 1,  0, 0}, // #135
  {DBGFIELD("II_LB")              1, false, false, 43, 2,  2, 1,  0, 0}, // #136
  {DBGFIELD("II_LBE")             1, false, false, 43, 2,  2, 1,  0, 0}, // #137
  {DBGFIELD("II_LBU")             1, false, false, 43, 2,  2, 1,  0, 0}, // #138
  {DBGFIELD("II_LBUE")            1, false, false, 43, 2,  2, 1,  0, 0}, // #139
  {DBGFIELD("II_LD")              0, false, false,  0, 0,  0, 0,  0, 0}, // #140
  {DBGFIELD("II_LDC1")            2, false, false, 62, 4,  2, 1,  0, 0}, // #141
  {DBGFIELD("II_LDC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #142
  {DBGFIELD("II_LDC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #143
  {DBGFIELD("II_LDL")             0, false, false,  0, 0,  0, 0,  0, 0}, // #144
  {DBGFIELD("II_LDPC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #145
  {DBGFIELD("II_LDR")             0, false, false,  0, 0,  0, 0,  0, 0}, // #146
  {DBGFIELD("II_LDXC1")           2, false, false, 62, 4,  2, 1,  0, 0}, // #147
  {DBGFIELD("II_LH")              1, false, false, 43, 2,  2, 1,  0, 0}, // #148
  {DBGFIELD("II_LHE")             1, false, false, 43, 2,  2, 1,  0, 0}, // #149
  {DBGFIELD("II_LHU")             1, false, false, 43, 2,  2, 1,  0, 0}, // #150
  {DBGFIELD("II_LHUE")            1, false, false, 43, 2,  2, 1,  0, 0}, // #151
  {DBGFIELD("II_LI")              0, false, false,  0, 0,  0, 0,  0, 0}, // #152
  {DBGFIELD("II_LL")              1, false, false, 43, 2,  2, 1,  0, 0}, // #153
  {DBGFIELD("II_LLD")             0, false, false,  0, 0,  0, 0,  0, 0}, // #154
  {DBGFIELD("II_LLE")             1, false, false, 43, 2,  2, 1,  0, 0}, // #155
  {DBGFIELD("II_LSA")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #156
  {DBGFIELD("II_LUI")             1, false, false, 34, 2,  1, 1,  0, 0}, // #157
  {DBGFIELD("II_LUXC1")           2, false, false, 62, 4,  2, 1,  0, 0}, // #158
  {DBGFIELD("II_LW")              1, false, false, 43, 2,  2, 1,  0, 0}, // #159
  {DBGFIELD("II_LWC1")            2, false, false, 62, 4,  2, 1,  0, 0}, // #160
  {DBGFIELD("II_LWC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #161
  {DBGFIELD("II_LWC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #162
  {DBGFIELD("II_LWE")             1, false, false, 43, 2,  2, 1,  0, 0}, // #163
  {DBGFIELD("II_LWL")             1, false, false, 66, 3,  2, 1,  0, 0}, // #164
  {DBGFIELD("II_LWLE")            1, false, false, 66, 3,  2, 1,  0, 0}, // #165
  {DBGFIELD("II_LWM")             0, false, false,  0, 0,  0, 0,  0, 0}, // #166
  {DBGFIELD("II_LWPC")            1, false, false, 43, 2,  2, 1,  0, 0}, // #167
  {DBGFIELD("II_LWP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #168
  {DBGFIELD("II_LWR")             1, false, false, 66, 3,  2, 1,  0, 0}, // #169
  {DBGFIELD("II_LWRE")            1, false, false, 66, 3,  2, 1,  0, 0}, // #170
  {DBGFIELD("II_LWUPC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #171
  {DBGFIELD("II_LWU")             0, false, false,  0, 0,  0, 0,  0, 0}, // #172
  {DBGFIELD("II_LWXC1")           2, false, false, 62, 4,  2, 1,  0, 0}, // #173
  {DBGFIELD("II_LWXS")            0, false, false,  0, 0,  0, 0,  0, 0}, // #174
  {DBGFIELD("II_MADD")            1, false, false, 69, 3,  4, 1,  0, 0}, // #175
  {DBGFIELD("II_MADDF_D")         0, false, false,  0, 0,  0, 0,  0, 0}, // #176
  {DBGFIELD("II_MADDF_S")         0, false, false,  0, 0,  0, 0,  0, 0}, // #177
  {DBGFIELD("II_MADDU")           1, false, false, 69, 3,  4, 1,  0, 0}, // #178
  {DBGFIELD("II_MADD_D")          1, false, false, 45, 2, 13, 1,  1, 1}, // #179
  {DBGFIELD("II_MADD_S")          1, false, false, 45, 2, 13, 1,  1, 1}, // #180
  {DBGFIELD("II_MAX_D")           0, false, false,  0, 0,  0, 0,  0, 0}, // #181
  {DBGFIELD("II_MAXA_D")          0, false, false,  0, 0,  0, 0,  0, 0}, // #182
  {DBGFIELD("II_MAX_S")           0, false, false,  0, 0,  0, 0,  0, 0}, // #183
  {DBGFIELD("II_MAXA_S")          0, false, false,  0, 0,  0, 0,  0, 0}, // #184
  {DBGFIELD("II_MFC0")            1, false, false, 36, 3,  1, 1,  0, 0}, // #185
  {DBGFIELD("II_MFC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #186
  {DBGFIELD("II_MFHC0")           0, false, false,  0, 0,  0, 0,  0, 0}, // #187
  {DBGFIELD("II_MFHC1")           2, false, false, 39, 4,  3, 1,  0, 0}, // #188
  {DBGFIELD("II_MFHI_MFLO")       1, false, false,  1, 2,  1, 1,  0, 0}, // #189
  {DBGFIELD("II_MIN_S")           0, false, false,  0, 0,  0, 0,  0, 0}, // #190
  {DBGFIELD("II_MINA_D")          0, false, false,  0, 0,  0, 0,  0, 0}, // #191
  {DBGFIELD("II_MIN_D")           0, false, false,  0, 0,  0, 0,  0, 0}, // #192
  {DBGFIELD("II_MINA_S")          0, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("II_MOD")             0, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("II_MODU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("II_MOVE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("II_MOVF_D")          1, false, false, 24, 2,  1, 1,  0, 0}, // #197
  {DBGFIELD("II_MOVF")            2, false, false, 39, 4,  3, 1,  0, 0}, // #198
  {DBGFIELD("II_MOVF_S")          1, false, false, 24, 2,  1, 1,  0, 0}, // #199
  {DBGFIELD("II_MOVN_D")          2, false, false, 72, 4,  3, 1,  0, 0}, // #200
  {DBGFIELD("II_MOVN")            1, false, false, 69, 3,  3, 1,  0, 0}, // #201
  {DBGFIELD("II_MOVN_S")          2, false, false, 72, 4,  3, 1,  0, 0}, // #202
  {DBGFIELD("II_MOVT_D")          1, false, false, 24, 2,  1, 1,  0, 0}, // #203
  {DBGFIELD("II_MOVT")            2, false, false, 39, 4,  3, 1,  0, 0}, // #204
  {DBGFIELD("II_MOVT_S")          1, false, false, 24, 2,  1, 1,  0, 0}, // #205
  {DBGFIELD("II_MOVZ_D")          2, false, false, 72, 4,  3, 1,  0, 0}, // #206
  {DBGFIELD("II_MOVZ")            1, false, false, 69, 3,  3, 1,  0, 0}, // #207
  {DBGFIELD("II_MOVZ_S")          2, false, false, 72, 4,  3, 1,  0, 0}, // #208
  {DBGFIELD("II_MSUB")            1, false, false, 69, 3,  4, 1,  0, 0}, // #209
  {DBGFIELD("II_MSUBF_D")         0, false, false,  0, 0,  0, 0,  0, 0}, // #210
  {DBGFIELD("II_MSUBF_S")         0, false, false,  0, 0,  0, 0,  0, 0}, // #211
  {DBGFIELD("II_MSUBU")           1, false, false, 69, 3,  4, 1,  0, 0}, // #212
  {DBGFIELD("II_MSUB_D")          1, false, false, 45, 2, 13, 1,  1, 1}, // #213
  {DBGFIELD("II_MSUB_S")          1, false, false, 45, 2, 13, 1,  1, 1}, // #214
  {DBGFIELD("II_MTC0")            1, false, false, 36, 3,  1, 1,  0, 0}, // #215
  {DBGFIELD("II_MTC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #216
  {DBGFIELD("II_MTHC0")           0, false, false,  0, 0,  0, 0,  0, 0}, // #217
  {DBGFIELD("II_MTHC1")           2, false, false, 39, 4,  1, 1,  0, 0}, // #218
  {DBGFIELD("II_MTHI_MTLO")       1, false, false, 69, 3,  4, 1,  0, 0}, // #219
  {DBGFIELD("II_MUH")             0, false, false,  0, 0,  0, 0,  0, 0}, // #220
  {DBGFIELD("II_MUHU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #221
  {DBGFIELD("II_MUL")             1, false, false,  1, 2,  7, 1,  0, 0}, // #222
  {DBGFIELD("II_MULT")            1, false, false,  1, 2,  4, 1,  0, 0}, // #223
  {DBGFIELD("II_MULTU")           1, false, false,  1, 2,  4, 1,  0, 0}, // #224
  {DBGFIELD("II_MULU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #225
  {DBGFIELD("II_NMADD_D")         1, false, false, 45, 2, 13, 1,  1, 1}, // #226
  {DBGFIELD("II_NMADD_S")         1, false, false, 45, 2, 13, 1,  1, 1}, // #227
  {DBGFIELD("II_NMSUB_D")         1, false, false, 45, 2, 13, 1,  1, 1}, // #228
  {DBGFIELD("II_NMSUB_S")         1, false, false, 45, 2, 13, 1,  1, 1}, // #229
  {DBGFIELD("II_NOR")             1, false, false, 34, 2,  1, 1,  0, 0}, // #230
  {DBGFIELD("II_NOT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #231
  {DBGFIELD("II_OR")              1, false, false, 34, 2,  1, 1,  0, 0}, // #232
  {DBGFIELD("II_ORI")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #233
  {DBGFIELD("II_PAUSE")           1, false, false, 36, 3,  1, 1,  0, 0}, // #234
  {DBGFIELD("II_PREF")            1, false, false, 43, 2,  1, 1,  0, 0}, // #235
  {DBGFIELD("II_PREFE")           1, false, false, 43, 2,  1, 1,  0, 0}, // #236
  {DBGFIELD("II_IndirectBranchPseudo") 0, false, false,  0, 0,  0, 0,  0, 0}, // #237
  {DBGFIELD("II_ReturnPseudo")    0, false, false,  0, 0,  0, 0,  0, 0}, // #238
  {DBGFIELD("II_RDHWR")           1, false, false,  1, 2,  3, 1,  0, 0}, // #239
  {DBGFIELD("II_RDPGPR")          0, false, false,  0, 0,  0, 0,  0, 0}, // #240
  {DBGFIELD("II_RECIP_D")         1, false, false, 59, 3, 17, 1,  0, 0}, // #241
  {DBGFIELD("II_RECIP_S")         1, false, false, 59, 3, 17, 1,  0, 0}, // #242
  {DBGFIELD("II_RINT_D")          0, false, false,  0, 0,  0, 0,  0, 0}, // #243
  {DBGFIELD("II_RINT_S")          0, false, false,  0, 0,  0, 0,  0, 0}, // #244
  {DBGFIELD("II_ROTR")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #245
  {DBGFIELD("II_ROTRV")           65534, false, false,  0, 0,  0, 0,  0, 0}, // #246
  {DBGFIELD("II_ROUND")           1, false, false, 45, 2,  2, 1,  0, 0}, // #247
  {DBGFIELD("II_RSQRT_D")         1, false, false, 59, 3, 17, 1,  0, 0}, // #248
  {DBGFIELD("II_RSQRT_S")         1, false, false, 59, 3, 17, 1,  0, 0}, // #249
  {DBGFIELD("II_RESTORE")         0, false, false,  0, 0,  0, 0,  0, 0}, // #250
  {DBGFIELD("II_SB")              1, false, false, 76, 3,  1, 1,  0, 0}, // #251
  {DBGFIELD("II_SBE")             1, false, false, 76, 3,  1, 1,  0, 0}, // #252
  {DBGFIELD("II_SC")              1, false, false, 76, 3,  1, 1,  0, 0}, // #253
  {DBGFIELD("II_SCD")             0, false, false,  0, 0,  0, 0,  0, 0}, // #254
  {DBGFIELD("II_SCE")             1, false, false, 76, 3,  1, 1,  0, 0}, // #255
  {DBGFIELD("II_SD")              0, false, false,  0, 0,  0, 0,  0, 0}, // #256
  {DBGFIELD("II_SDBBP")           1, false, false, 36, 3,  1, 1,  0, 0}, // #257
  {DBGFIELD("II_SDC1")            2, false, false, 39, 4,  1, 1,  0, 0}, // #258
  {DBGFIELD("II_SDC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("II_SDC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #260
  {DBGFIELD("II_SDL")             0, false, false,  0, 0,  0, 0,  0, 0}, // #261
  {DBGFIELD("II_SDR")             0, false, false,  0, 0,  0, 0,  0, 0}, // #262
  {DBGFIELD("II_SDXC1")           2, false, false, 39, 4,  1, 1,  0, 0}, // #263
  {DBGFIELD("II_SEB")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #264
  {DBGFIELD("II_SEH")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #265
  {DBGFIELD("II_SELCCZ")          0, false, false,  0, 0,  0, 0,  0, 0}, // #266
  {DBGFIELD("II_SELCCZ_D")        0, false, false,  0, 0,  0, 0,  0, 0}, // #267
  {DBGFIELD("II_SELCCZ_S")        0, false, false,  0, 0,  0, 0,  0, 0}, // #268
  {DBGFIELD("II_SEL_D")           0, false, false,  0, 0,  0, 0,  0, 0}, // #269
  {DBGFIELD("II_SEL_S")           0, false, false,  0, 0,  0, 0,  0, 0}, // #270
  {DBGFIELD("II_SEQ_SNE")         0, false, false,  0, 0,  0, 0,  0, 0}, // #271
  {DBGFIELD("II_SEQI_SNEI")       0, false, false,  0, 0,  0, 0,  0, 0}, // #272
  {DBGFIELD("II_SH")              1, false, false, 76, 3,  1, 1,  0, 0}, // #273
  {DBGFIELD("II_SHE")             1, false, false, 76, 3,  1, 1,  0, 0}, // #274
  {DBGFIELD("II_SLL")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #275
  {DBGFIELD("II_SLLV")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #276
  {DBGFIELD("II_SLT_SLTU")        65534, false, false,  0, 0,  0, 0,  0, 0}, // #277
  {DBGFIELD("II_SLTI_SLTIU")      1, false, false, 34, 2,  1, 1,  0, 0}, // #278
  {DBGFIELD("II_SRA")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #279
  {DBGFIELD("II_SRAV")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #280
  {DBGFIELD("II_SRL")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #281
  {DBGFIELD("II_SRLV")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #282
  {DBGFIELD("II_SSNOP")           1, false, false, 36, 3,  1, 1,  0, 0}, // #283
  {DBGFIELD("II_SUB")             1, false, false, 34, 2,  1, 1,  0, 0}, // #284
  {DBGFIELD("II_SUBU")            1, false, false, 34, 2,  1, 1,  0, 0}, // #285
  {DBGFIELD("II_SUXC1")           2, false, false, 39, 4,  1, 1,  0, 0}, // #286
  {DBGFIELD("II_SW")              1, false, false, 76, 3,  1, 1,  0, 0}, // #287
  {DBGFIELD("II_SWC1")            2, false, false, 39, 4,  1, 1,  0, 0}, // #288
  {DBGFIELD("II_SWC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #289
  {DBGFIELD("II_SWC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #290
  {DBGFIELD("II_SWE")             1, false, false, 76, 3,  1, 1,  0, 0}, // #291
  {DBGFIELD("II_SWL")             1, false, false, 76, 3,  1, 1,  0, 0}, // #292
  {DBGFIELD("II_SWLE")            1, false, false, 76, 3,  1, 1,  0, 0}, // #293
  {DBGFIELD("II_SWM")             0, false, false,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("II_SWP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #295
  {DBGFIELD("II_SWR")             1, false, false, 76, 3,  1, 1,  0, 0}, // #296
  {DBGFIELD("II_SWRE")            1, false, false, 76, 3,  1, 1,  0, 0}, // #297
  {DBGFIELD("II_SWXC1")           2, false, false, 39, 4,  1, 1,  0, 0}, // #298
  {DBGFIELD("II_SYNC")            1, false, false, 43, 2,  1, 1,  0, 0}, // #299
  {DBGFIELD("II_SYNCI")           1, false, false, 43, 2,  1, 1,  0, 0}, // #300
  {DBGFIELD("II_SYSCALL")         1, false, false, 36, 3,  1, 1,  0, 0}, // #301
  {DBGFIELD("II_SAVE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #302
  {DBGFIELD("II_TEQ")             1, false, false, 36, 3,  1, 1,  0, 0}, // #303
  {DBGFIELD("II_TEQI")            1, false, false, 36, 3,  1, 1,  0, 0}, // #304
  {DBGFIELD("II_TGE")             1, false, false, 36, 3,  1, 1,  0, 0}, // #305
  {DBGFIELD("II_TGEI")            1, false, false, 36, 3,  1, 1,  0, 0}, // #306
  {DBGFIELD("II_TGEIU")           1, false, false, 36, 3,  1, 1,  0, 0}, // #307
  {DBGFIELD("II_TGEU")            1, false, false, 36, 3,  1, 1,  0, 0}, // #308
  {DBGFIELD("II_TLBINV")          1, false, false, 36, 3,  1, 1,  0, 0}, // #309
  {DBGFIELD("II_TLBINVF")         1, false, false, 36, 3,  1, 1,  0, 0}, // #310
  {DBGFIELD("II_TLBP")            1, false, false, 36, 3,  1, 1,  0, 0}, // #311
  {DBGFIELD("II_TLBR")            1, false, false, 36, 3,  1, 1,  0, 0}, // #312
  {DBGFIELD("II_TLBWI")           1, false, false, 36, 3,  1, 1,  0, 0}, // #313
  {DBGFIELD("II_TLBWR")           1, false, false, 36, 3,  1, 1,  0, 0}, // #314
  {DBGFIELD("II_TLT")             1, false, false, 36, 3,  1, 1,  0, 0}, // #315
  {DBGFIELD("II_TLTI")            1, false, false, 36, 3,  1, 1,  0, 0}, // #316
  {DBGFIELD("II_TTLTIU")          1, false, false, 36, 3,  1, 1,  0, 0}, // #317
  {DBGFIELD("II_TLTU")            1, false, false, 36, 3,  1, 1,  0, 0}, // #318
  {DBGFIELD("II_TNE")             1, false, false, 36, 3,  1, 1,  0, 0}, // #319
  {DBGFIELD("II_TNEI")            1, false, false, 36, 3,  1, 1,  0, 0}, // #320
  {DBGFIELD("II_TRAP")            1, false, false, 36, 3,  1, 1,  0, 0}, // #321
  {DBGFIELD("II_TRUNC")           1, false, false, 45, 2,  2, 1,  0, 0}, // #322
  {DBGFIELD("II_WAIT")            1, false, false, 36, 3,  1, 1,  0, 0}, // #323
  {DBGFIELD("II_WRPGPR")          0, false, false,  0, 0,  0, 0,  0, 0}, // #324
  {DBGFIELD("II_WSBH")            1, false, false,  1, 2,  3, 1,  0, 0}, // #325
  {DBGFIELD("II_XOR")             1, false, false, 34, 2,  1, 1,  0, 0}, // #326
  {DBGFIELD("II_XORI")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #327
  {DBGFIELD("COPY")               0, false, false,  0, 0,  0, 0,  0, 0}, // #328
  {DBGFIELD("VSHF_B_VSHF_D_VSHF_H_VSHF_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #329
  {DBGFIELD("BINSLI_B_BINSLI_D_BINSLI_H_BINSLI_W_BINSL_B_BINSL_D_BINSL_H_BINSL_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #330
  {DBGFIELD("BINSRI_B_BINSRI_D_BINSRI_H_BINSRI_W_BINSR_B_BINSR_D_BINSR_H_BINSR_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #331
  {DBGFIELD("INSERT_B_INSERT_D_INSERT_H_INSERT_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #332
  {DBGFIELD("SLDI_B_SLDI_D_SLDI_H_SLDI_W_SLD_B_SLD_D_SLD_H_SLD_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #333
  {DBGFIELD("BSETI_B_BSETI_D_BSETI_H_BSETI_W_BSET_B_BSET_D_BSET_H_BSET_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #334
  {DBGFIELD("BCLRI_B_BCLRI_D_BCLRI_H_BCLRI_W_BCLR_B_BCLR_D_BCLR_H_BCLR_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #335
  {DBGFIELD("BNEGI_B_BNEGI_D_BNEGI_H_BNEGI_W_BNEG_B_BNEG_D_BNEG_H_BNEG_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #336
  {DBGFIELD("BSELI_B_BSEL_V")     1, false, false, 24, 2,  3, 1,  0, 0}, // #337
  {DBGFIELD("BMNZI_B_BMNZ_V_BMZI_B_BMZ_V") 1, false, false, 24, 2,  3, 1,  0, 0}, // #338
  {DBGFIELD("PCNT_B_PCNT_D_PCNT_H_PCNT_W") 1, false, false, 24, 2,  7, 1,  0, 0}, // #339
  {DBGFIELD("SAT_S_B_SAT_S_D_SAT_S_H_SAT_S_W_SAT_U_B_SAT_U_D_SAT_U_H_SAT_U_W") 1, false, false, 24, 2,  7, 1,  0, 0}, // #340
  {DBGFIELD("BNZ_B_BNZ_D_BNZ_H_BNZ_V_BNZ_W_BZ_B_BZ_D_BZ_H_BZ_V_BZ_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #341
  {DBGFIELD("CFCMSA_CTCMSA")      1, false, false, 24, 2,  1, 1,  0, 0}, // #342
  {DBGFIELD("ADD_A_B_ADD_A_D_ADD_A_H_ADD_A_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #343
  {DBGFIELD("ADDS_A_B_ADDS_A_D_ADDS_A_H_ADDS_A_W_ADDS_S_B_ADDS_S_D_ADDS_S_H_ADDS_S_W_ADDS_U_B_ADDS_U_D_ADDS_U_H_ADDS_U_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #344
  {DBGFIELD("ADDVI_B_ADDVI_D_ADDVI_H_ADDVI_W_ADDV_B_ADDV_D_ADDV_H_ADDV_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #345
  {DBGFIELD("ASUB_S_B_ASUB_S_D_ASUB_S_H_ASUB_S_W_ASUB_U_B_ASUB_U_D_ASUB_U_H_ASUB_U_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #346
  {DBGFIELD("AVER_S_B_AVER_S_D_AVER_S_H_AVER_S_W_AVER_U_B_AVER_U_D_AVER_U_H_AVER_U_W_AVE_S_B_AVE_S_D_AVE_S_H_AVE_S_W_AVE_U_B_AVE_U_D_AVE_U_H_AVE_U_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #347
  {DBGFIELD("SHF_B_SHF_H_SHF_W")  1, false, false, 24, 2,  3, 1,  0, 0}, // #348
  {DBGFIELD("FILL_B_FILL_D_FILL_H_FILL_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #349
  {DBGFIELD("SPLATI_B_SPLATI_D_SPLATI_H_SPLATI_W_SPLAT_B_SPLAT_D_SPLAT_H_SPLAT_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #350
  {DBGFIELD("MOVE_V")             1, false, false, 24, 2,  1, 1,  0, 0}, // #351
  {DBGFIELD("LDI_B_LDI_D_LDI_H_LDI_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #352
  {DBGFIELD("AND_V_NOR_V_OR_V_XOR_V") 1, false, false, 24, 2,  1, 1,  0, 0}, // #353
  {DBGFIELD("ANDI_B_NORI_B_ORI_B_XORI_B") 1, false, false, 24, 2,  1, 1,  0, 0}, // #354
  {DBGFIELD("FEXP2_D_FEXP2_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #355
  {DBGFIELD("CLTI_S_B_CLTI_S_D_CLTI_S_H_CLTI_S_W_CLTI_U_B_CLTI_U_D_CLTI_U_H_CLTI_U_W_CLT_S_B_CLT_S_D_CLT_S_H_CLT_S_W_CLT_U_B_CLT_U_D_CLT_U_H_CLT_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #356
  {DBGFIELD("CLEI_S_B_CLEI_S_D_CLEI_S_H_CLEI_S_W_CLEI_U_B_CLEI_U_D_CLEI_U_H_CLEI_U_W_CLE_S_B_CLE_S_D_CLE_S_H_CLE_S_W_CLE_U_B_CLE_U_D_CLE_U_H_CLE_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #357
  {DBGFIELD("CEQI_B_CEQI_D_CEQI_H_CEQI_W_CEQ_B_CEQ_D_CEQ_H_CEQ_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #358
  {DBGFIELD("CMP_UN_D")           1, false, false, 24, 2,  1, 1,  0, 0}, // #359
  {DBGFIELD("CMP_UN_S")           1, false, false, 24, 2,  1, 1,  0, 0}, // #360
  {DBGFIELD("CMP_UEQ_D")          1, false, false, 24, 2,  1, 1,  0, 0}, // #361
  {DBGFIELD("CMP_UEQ_S")          1, false, false, 24, 2,  1, 1,  0, 0}, // #362
  {DBGFIELD("CMP_EQ_D")           1, false, false, 24, 2,  1, 1,  0, 0}, // #363
  {DBGFIELD("CMP_EQ_S")           1, false, false, 24, 2,  1, 1,  0, 0}, // #364
  {DBGFIELD("CMP_LT_D")           1, false, false, 24, 2,  1, 1,  0, 0}, // #365
  {DBGFIELD("CMP_LT_S")           1, false, false, 24, 2,  1, 1,  0, 0}, // #366
  {DBGFIELD("CMP_ULT_D")          1, false, false, 24, 2,  1, 1,  0, 0}, // #367
  {DBGFIELD("CMP_ULT_S")          1, false, false, 24, 2,  1, 1,  0, 0}, // #368
  {DBGFIELD("CMP_LE_D")           1, false, false, 24, 2,  1, 1,  0, 0}, // #369
  {DBGFIELD("CMP_LE_S")           1, false, false, 24, 2,  1, 1,  0, 0}, // #370
  {DBGFIELD("CMP_ULE_D")          1, false, false, 24, 2,  1, 1,  0, 0}, // #371
  {DBGFIELD("CMP_ULE_S")          1, false, false, 24, 2,  1, 1,  0, 0}, // #372
  {DBGFIELD("FSAF_D_FSAF_W_FSEQ_D_FSEQ_W_FSLE_D_FSLE_W_FSLT_D_FSLT_W_FSNE_D_FSNE_W_FSOR_D_FSOR_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #373
  {DBGFIELD("FSUEQ_D_FSUEQ_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #374
  {DBGFIELD("FSULE_D_FSULE_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #375
  {DBGFIELD("FSULT_D_FSULT_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #376
  {DBGFIELD("FSUNE_D_FSUNE_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #377
  {DBGFIELD("FSUN_D_FSUN_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #378
  {DBGFIELD("FCAF_D_FCAF_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #379
  {DBGFIELD("FCEQ_D_FCEQ_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #380
  {DBGFIELD("FCLE_D_FCLE_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #381
  {DBGFIELD("FCLT_D_FCLT_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #382
  {DBGFIELD("FCNE_D_FCNE_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #383
  {DBGFIELD("FCOR_D_FCOR_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #384
  {DBGFIELD("FCUEQ_D_FCUEQ_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #385
  {DBGFIELD("FCULE_D_FCULE_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #386
  {DBGFIELD("FCULT_D_FCULT_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #387
  {DBGFIELD("FCUNE_D_FCUNE_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #388
  {DBGFIELD("FCUN_D_FCUN_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #389
  {DBGFIELD("FABS_D_FABS_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #390
  {DBGFIELD("FFINT_S_D_FFINT_S_W_FFINT_U_D_FFINT_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #391
  {DBGFIELD("FFQL_D_FFQL_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #392
  {DBGFIELD("FFQR_D_FFQR_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #393
  {DBGFIELD("FTINT_S_D_FTINT_S_W_FTINT_U_D_FTINT_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #394
  {DBGFIELD("FRINT_D_FRINT_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #395
  {DBGFIELD("FTQ_H_FTQ_W")        1, false, false, 24, 2,  1, 1,  0, 0}, // #396
  {DBGFIELD("FTRUNC_S_D_FTRUNC_S_W_FTRUNC_U_D_FTRUNC_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #397
  {DBGFIELD("FEXDO_H_FEXDO_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #398
  {DBGFIELD("FEXUPL_D_FEXUPL_W")  1, false, false, 24, 2,  1, 1,  0, 0}, // #399
  {DBGFIELD("FEXUPR_D_FEXUPR_W")  1, false, false, 24, 2,  1, 1,  0, 0}, // #400
  {DBGFIELD("FCLASS_D_FCLASS_W")  1, false, false, 24, 2,  1, 1,  0, 0}, // #401
  {DBGFIELD("FMAX_A_D_FMAX_A_W")  1, false, false, 24, 2,  1, 1,  0, 0}, // #402
  {DBGFIELD("FMAX_D_FMAX_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #403
  {DBGFIELD("FMIN_A_D_FMIN_A_W")  1, false, false, 24, 2,  1, 1,  0, 0}, // #404
  {DBGFIELD("FMIN_D_FMIN_W")      1, false, false, 24, 2,  1, 1,  0, 0}, // #405
  {DBGFIELD("FLOG2_D_FLOG2_W")    1, false, false, 24, 2,  1, 1,  0, 0}, // #406
  {DBGFIELD("ILVL_B_ILVL_D_ILVL_H_ILVL_W_ILVR_B_ILVR_D_ILVR_H_ILVR_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #407
  {DBGFIELD("ILVEV_B_ILVEV_D_ILVEV_H_ILVEV_W_ILVOD_B_ILVOD_D_ILVOD_H_ILVOD_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #408
  {DBGFIELD("INSVE_B_INSVE_D_INSVE_H_INSVE_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #409
  {DBGFIELD("SUBS_S_B_SUBS_S_D_SUBS_S_H_SUBS_S_W_SUBS_U_B_SUBS_U_D_SUBS_U_H_SUBS_U_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #410
  {DBGFIELD("SUBSUS_U_B_SUBSUS_U_D_SUBSUS_U_H_SUBSUS_U_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #411
  {DBGFIELD("SUBSUU_S_B_SUBSUU_S_D_SUBSUU_S_H_SUBSUU_S_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #412
  {DBGFIELD("SUBVI_B_SUBVI_D_SUBVI_H_SUBVI_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #413
  {DBGFIELD("SUBV_B_SUBV_D_SUBV_H_SUBV_W") 1, false, false, 24, 2,  3, 1,  0, 0}, // #414
  {DBGFIELD("MOD_S_B_MOD_S_D_MOD_S_H_MOD_S_W_MOD_U_B_MOD_U_D_MOD_U_H_MOD_U_W") 1, false, false, 53, 3, 15, 1,  0, 0}, // #415
  {DBGFIELD("DIV_S_B_DIV_S_D_DIV_S_H_DIV_S_W_DIV_U_B_DIV_U_D_DIV_U_H_DIV_U_W") 1, false, false, 53, 3, 15, 1,  0, 0}, // #416
  {DBGFIELD("HADD_S_D_HADD_S_H_HADD_S_W_HADD_U_D_HADD_U_H_HADD_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #417
  {DBGFIELD("HSUB_S_D_HSUB_S_H_HSUB_S_W_HSUB_U_D_HSUB_U_H_HSUB_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #418
  {DBGFIELD("MAX_S_B_MAX_S_D_MAX_S_H_MAX_S_W_MIN_S_B_MIN_S_D_MIN_S_H_MIN_S_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #419
  {DBGFIELD("MAX_U_B_MAX_U_D_MAX_U_H_MAX_U_W_MIN_U_B_MIN_U_D_MIN_U_H_MIN_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #420
  {DBGFIELD("MAX_A_B_MAX_A_D_MAX_A_H_MAX_A_W_MIN_A_B_MIN_A_D_MIN_A_H_MIN_A_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #421
  {DBGFIELD("MAXI_S_B_MAXI_S_D_MAXI_S_H_MAXI_S_W_MAXI_U_B_MAXI_U_D_MAXI_U_H_MAXI_U_W_MINI_S_B_MINI_S_D_MINI_S_H_MINI_S_W_MINI_U_B_MINI_U_D_MINI_U_H_MINI_U_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #422
  {DBGFIELD("SRAI_B_SRAI_D_SRAI_H_SRAI_W_SRA_B_SRA_D_SRA_H_SRA_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #423
  {DBGFIELD("SRLI_B_SRLI_D_SRLI_H_SRLI_W_SRL_B_SRL_D_SRL_H_SRL_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #424
  {DBGFIELD("SRARI_B_SRARI_D_SRARI_H_SRARI_W_SRAR_B_SRAR_D_SRAR_H_SRAR_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #425
  {DBGFIELD("SRLRI_B_SRLRI_D_SRLRI_H_SRLRI_W_SRLR_B_SRLR_D_SRLR_H_SRLR_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #426
  {DBGFIELD("SLLI_B_SLLI_D_SLLI_H_SLLI_W_SLL_B_SLL_D_SLL_H_SLL_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #427
  {DBGFIELD("PCKEV_B_PCKEV_D_PCKEV_H_PCKEV_W_PCKOD_B_PCKOD_D_PCKOD_H_PCKOD_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #428
  {DBGFIELD("NLOC_B_NLOC_D_NLOC_H_NLOC_W_NLZC_B_NLZC_D_NLZC_H_NLZC_W") 1, false, false, 24, 2,  1, 1,  0, 0}, // #429
  {DBGFIELD("FRCP_D_FRCP_W")      1, false, false, 59, 3, 17, 1,  0, 0}, // #430
  {DBGFIELD("FRSQRT_D_FRSQRT_W")  1, false, false, 59, 3, 17, 1,  0, 0}, // #431
  {DBGFIELD("FMADD_D_FMADD_W")    1, false, false, 45, 2, 13, 1,  0, 0}, // #432
  {DBGFIELD("FMSUB_D_FMSUB_W")    1, false, false, 45, 2, 13, 1,  0, 0}, // #433
  {DBGFIELD("FDIV_W")             1, false, false, 53, 3, 15, 1,  0, 0}, // #434
  {DBGFIELD("FDIV_D")             1, false, false, 50, 3,  6, 1,  0, 0}, // #435
  {DBGFIELD("FSQRT_W")            1, false, false, 59, 3, 17, 1,  0, 0}, // #436
  {DBGFIELD("FSQRT_D")            1, false, false, 56, 3, 16, 1,  0, 0}, // #437
  {DBGFIELD("FMUL_D_FMUL_W")      1, false, false, 45, 2,  2, 1,  0, 0}, // #438
  {DBGFIELD("FADD_D_FADD_W")      1, false, false, 45, 2,  2, 1,  0, 0}, // #439
  {DBGFIELD("FSUB_D_FSUB_W")      1, false, false, 45, 2,  2, 1,  0, 0}, // #440
  {DBGFIELD("DPADD_S_D_DPADD_S_H_DPADD_S_W_DPADD_U_D_DPADD_U_H_DPADD_U_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #441
  {DBGFIELD("DPSUB_S_D_DPSUB_S_H_DPSUB_S_W_DPSUB_U_D_DPSUB_U_H_DPSUB_U_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #442
  {DBGFIELD("DOTP_S_D_DOTP_S_H_DOTP_S_W_DOTP_U_D_DOTP_U_H_DOTP_U_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #443
  {DBGFIELD("MSUBV_B_MSUBV_D_MSUBV_H_MSUBV_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #444
  {DBGFIELD("MADDV_B_MADDV_D_MADDV_H_MADDV_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #445
  {DBGFIELD("MULV_B_MULV_D_MULV_H_MULV_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #446
  {DBGFIELD("MADDR_Q_H_MADDR_Q_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #447
  {DBGFIELD("MADD_Q_H_MADD_Q_W")  1, false, false, 24, 2,  4, 1,  0, 0}, // #448
  {DBGFIELD("MSUBR_Q_H_MSUBR_Q_W") 1, false, false, 24, 2,  4, 1,  0, 0}, // #449
  {DBGFIELD("MSUB_Q_H_MSUB_Q_W")  1, false, false, 24, 2,  4, 1,  0, 0}, // #450
  {DBGFIELD("MULR_Q_H_MULR_Q_W")  1, false, false, 24, 2,  4, 1,  0, 0}, // #451
  {DBGFIELD("MUL_Q_H_MUL_Q_W")    1, false, false, 24, 2,  4, 1,  0, 0}, // #452
  {DBGFIELD("COPY_U_B_COPY_U_H_COPY_U_W") 2, false, false, 39, 4,  3, 1,  0, 0}, // #453
  {DBGFIELD("COPY_S_B_COPY_S_D_COPY_S_H_COPY_S_W") 2, false, false, 39, 4,  3, 1,  0, 0}, // #454
  {DBGFIELD("ST_B_ST_D_ST_H_ST_W") 2, false, false, 39, 4,  1, 1,  0, 0}, // #455
  {DBGFIELD("LD_B_LD_D_LD_H_LD_W") 2, false, false, 62, 4,  2, 1,  0, 0}, // #456
  {DBGFIELD("EXTRV_RS_W")         0, false, false,  0, 0,  0, 0,  0, 0}, // #457
  {DBGFIELD("EXTRV_R_W")          0, false, false,  0, 0,  0, 0,  0, 0}, // #458
  {DBGFIELD("EXTRV_S_H")          0, false, false,  0, 0,  0, 0,  0, 0}, // #459
  {DBGFIELD("EXTRV_W")            0, false, false,  0, 0,  0, 0,  0, 0}, // #460
  {DBGFIELD("EXTR_RS_W")          0, false, false,  0, 0,  0, 0,  0, 0}, // #461
  {DBGFIELD("EXTR_R_W")           0, false, false,  0, 0,  0, 0,  0, 0}, // #462
  {DBGFIELD("EXTR_S_H")           0, false, false,  0, 0,  0, 0,  0, 0}, // #463
  {DBGFIELD("EXTR_W")             0, false, false,  0, 0,  0, 0,  0, 0}, // #464
  {DBGFIELD("INSV")               0, false, false,  0, 0,  0, 0,  0, 0}, // #465
  {DBGFIELD("MTHLIP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #466
  {DBGFIELD("MTHI_DSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #467
  {DBGFIELD("MTLO_DSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #468
  {DBGFIELD("ABSQ_S_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #469
  {DBGFIELD("ABSQ_S_W")           0, false, false,  0, 0,  0, 0,  0, 0}, // #470
  {DBGFIELD("ADDQ_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #471
  {DBGFIELD("ADDQ_S_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #472
  {DBGFIELD("ADDQ_S_W")           0, false, false,  0, 0,  0, 0,  0, 0}, // #473
  {DBGFIELD("ADDSC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #474
  {DBGFIELD("ADDU_QB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #475
  {DBGFIELD("ADDU_S_QB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #476
  {DBGFIELD("ADDWC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #477
  {DBGFIELD("BITREV")             0, false, false,  0, 0,  0, 0,  0, 0}, // #478
  {DBGFIELD("BPOSGE32")           0, false, false,  0, 0,  0, 0,  0, 0}, // #479
  {DBGFIELD("CMPGU_EQ_QB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #480
  {DBGFIELD("CMPGU_LE_QB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #481
  {DBGFIELD("CMPGU_LT_QB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #482
  {DBGFIELD("CMPU_EQ_QB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #483
  {DBGFIELD("CMPU_LE_QB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #484
  {DBGFIELD("CMPU_LT_QB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #485
  {DBGFIELD("CMP_EQ_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #486
  {DBGFIELD("CMP_LE_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #487
  {DBGFIELD("CMP_LT_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #488
  {DBGFIELD("DPAQ_SA_L_W")        0, false, false,  0, 0,  0, 0,  0, 0}, // #489
  {DBGFIELD("DPAQ_S_W_PH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #490
  {DBGFIELD("DPAU_H_QBL")         0, false, false,  0, 0,  0, 0,  0, 0}, // #491
  {DBGFIELD("DPAU_H_QBR")         0, false, false,  0, 0,  0, 0,  0, 0}, // #492
  {DBGFIELD("DPSQ_SA_L_W")        0, false, false,  0, 0,  0, 0,  0, 0}, // #493
  {DBGFIELD("DPSQ_S_W_PH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #494
  {DBGFIELD("DPSU_H_QBL")         0, false, false,  0, 0,  0, 0,  0, 0}, // #495
  {DBGFIELD("DPSU_H_QBR")         0, false, false,  0, 0,  0, 0,  0, 0}, // #496
  {DBGFIELD("EXTPDPV")            0, false, false,  0, 0,  0, 0,  0, 0}, // #497
  {DBGFIELD("EXTPDP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #498
  {DBGFIELD("EXTPV")              0, false, false,  0, 0,  0, 0,  0, 0}, // #499
  {DBGFIELD("EXTP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #500
  {DBGFIELD("LBUX")               0, false, false,  0, 0,  0, 0,  0, 0}, // #501
  {DBGFIELD("LHX")                0, false, false,  0, 0,  0, 0,  0, 0}, // #502
  {DBGFIELD("LWX")                0, false, false,  0, 0,  0, 0,  0, 0}, // #503
  {DBGFIELD("MADDU_DSP")          0, false, false,  0, 0,  0, 0,  0, 0}, // #504
  {DBGFIELD("MADD_DSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #505
  {DBGFIELD("MAQ_SA_W_PHL")       0, false, false,  0, 0,  0, 0,  0, 0}, // #506
  {DBGFIELD("MAQ_SA_W_PHR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #507
  {DBGFIELD("MAQ_S_W_PHL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #508
  {DBGFIELD("MAQ_S_W_PHR")        0, false, false,  0, 0,  0, 0,  0, 0}, // #509
  {DBGFIELD("MFHI_DSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #510
  {DBGFIELD("MFLO_DSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #511
  {DBGFIELD("MODSUB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #512
  {DBGFIELD("MSUBU_DSP")          0, false, false,  0, 0,  0, 0,  0, 0}, // #513
  {DBGFIELD("MSUB_DSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #514
  {DBGFIELD("MULEQ_S_W_PHL")      0, false, false,  0, 0,  0, 0,  0, 0}, // #515
  {DBGFIELD("MULEQ_S_W_PHR")      0, false, false,  0, 0,  0, 0,  0, 0}, // #516
  {DBGFIELD("MULEU_S_PH_QBL")     0, false, false,  0, 0,  0, 0,  0, 0}, // #517
  {DBGFIELD("MULEU_S_PH_QBR")     0, false, false,  0, 0,  0, 0,  0, 0}, // #518
  {DBGFIELD("MULQ_RS_PH")         0, false, false,  0, 0,  0, 0,  0, 0}, // #519
  {DBGFIELD("MULSAQ_S_W_PH")      0, false, false,  0, 0,  0, 0,  0, 0}, // #520
  {DBGFIELD("MULTU_DSP")          0, false, false,  0, 0,  0, 0,  0, 0}, // #521
  {DBGFIELD("MULT_DSP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #522
  {DBGFIELD("PACKRL_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #523
  {DBGFIELD("PICK_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #524
  {DBGFIELD("PICK_QB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #525
  {DBGFIELD("PRECEQU_PH_QBLA")    0, false, false,  0, 0,  0, 0,  0, 0}, // #526
  {DBGFIELD("PRECEQU_PH_QBL")     0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("PRECEQU_PH_QBRA")    0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("PRECEQU_PH_QBR")     0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("PRECEQ_W_PHL")       0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("PRECEQ_W_PHR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #531
  {DBGFIELD("PRECEU_PH_QBLA")     0, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("PRECEU_PH_QBL")      0, false, false,  0, 0,  0, 0,  0, 0}, // #533
  {DBGFIELD("PRECEU_PH_QBRA")     0, false, false,  0, 0,  0, 0,  0, 0}, // #534
  {DBGFIELD("PRECEU_PH_QBR")      0, false, false,  0, 0,  0, 0,  0, 0}, // #535
  {DBGFIELD("PRECRQU_S_QB_PH")    0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("PRECRQ_PH_W")        0, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("PRECRQ_QB_PH")       0, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("PRECRQ_RS_PH_W")     0, false, false,  0, 0,  0, 0,  0, 0}, // #539
  {DBGFIELD("RADDU_W_QB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #540
  {DBGFIELD("RDDSP")              0, false, false,  0, 0,  0, 0,  0, 0}, // #541
  {DBGFIELD("REPLV_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #542
  {DBGFIELD("REPLV_QB")           0, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("REPL_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("REPL_QB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("SHILOV")             0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("SHILO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("SHLLV_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("SHLLV_QB")           0, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("SHLLV_S_PH")         0, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("SHLLV_S_W")          0, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("SHLL_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("SHLL_QB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #553
  {DBGFIELD("SHLL_S_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("SHLL_S_W")           0, false, false,  0, 0,  0, 0,  0, 0}, // #555
  {DBGFIELD("SHRAV_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #556
  {DBGFIELD("SHRAV_R_PH")         0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("SHRAV_R_W")          0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("SHRA_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("SHRA_R_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("SHRA_R_W")           0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("SHRLV_QB")           0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("SHRL_QB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("SUBQ_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #564
  {DBGFIELD("SUBQ_S_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #565
  {DBGFIELD("SUBQ_S_W")           0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("SUBU_QB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("SUBU_S_QB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("WRDSP")              0, false, false,  0, 0,  0, 0,  0, 0}, // #569
  {DBGFIELD("ABSQ_S_QB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("ADDQH_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("ADDQH_R_PH")         0, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("ADDQH_R_W")          0, false, false,  0, 0,  0, 0,  0, 0}, // #573
  {DBGFIELD("ADDQH_W")            0, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("ADDUH_QB")           0, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("ADDUH_R_QB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #576
  {DBGFIELD("ADDU_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #577
  {DBGFIELD("ADDU_S_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #578
  {DBGFIELD("APPEND")             0, false, false,  0, 0,  0, 0,  0, 0}, // #579
  {DBGFIELD("BALIGN")             0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("CMPGDU_EQ_QB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #581
  {DBGFIELD("CMPGDU_LE_QB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #582
  {DBGFIELD("CMPGDU_LT_QB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #583
  {DBGFIELD("DPA_W_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #584
  {DBGFIELD("DPAQX_SA_W_PH")      0, false, false,  0, 0,  0, 0,  0, 0}, // #585
  {DBGFIELD("DPAQX_S_W_PH")       0, false, false,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("DPAX_W_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("DPS_W_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("DPSQX_S_W_PH")       0, false, false,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("DPSQX_SA_W_PH")      0, false, false,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("DPSX_W_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("MUL_PH")             0, false, false,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("MUL_S_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("MULQ_RS_W")          0, false, false,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("MULQ_S_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("MULQ_S_W")           0, false, false,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("MULSA_W_PH")         0, false, false,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("PRECR_QB_PH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("PRECR_SRA_PH_W")     0, false, false,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("PRECR_SRA_R_PH_W")   0, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("PREPEND")            0, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("SHRA_QB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("SHRA_R_QB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("SHRAV_QB")           0, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("SHRAV_R_QB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("SHRL_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("SHRLV_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("SUBQH_PH")           0, false, false,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("SUBQH_R_PH")         0, false, false,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("SUBQH_W")            0, false, false,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("SUBQH_R_W")          0, false, false,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("SUBU_PH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("SUBU_S_PH")          0, false, false,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("SUBUH_QB")           0, false, false,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("SUBUH_R_QB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("ABSQ_S_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("ABSQ_S_W_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("ADDQ_PH_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("ADDQ_S_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("ADDQ_S_W_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("ADDSC_MM")           0, false, false,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("ADDU_QB_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("ADDU_S_QB_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("ADDWC_MM")           0, false, false,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("BITREV_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("BPOSGE32_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("CMPGU_EQ_QB_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("CMPGU_LE_QB_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("CMPGU_LT_QB_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("CMPU_EQ_QB_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("CMPU_LE_QB_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("CMPU_LT_QB_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("CMP_EQ_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("CMP_LE_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("CMP_LT_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("DPAQ_SA_L_W_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("DPAQ_S_W_PH_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("DPAU_H_QBL_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("DPAU_H_QBR_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("DPSQ_SA_L_W_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("DPSQ_S_W_PH_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("DPSU_H_QBL_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("DPSU_H_QBR_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("EXTPDPV_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("EXTPDP_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("EXTPV_MM")           0, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("EXTP_MM")            0, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("EXTRV_RS_W_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("EXTRV_R_W_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("EXTRV_S_H_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("EXTRV_W_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("EXTR_RS_W_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("EXTR_R_W_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("EXTR_S_H_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("EXTR_W_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("INSV_MM")            0, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("LBUX_MM")            0, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("LHX_MM")             0, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("LWX_MM")             0, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("MADDU_DSP_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #660
  {DBGFIELD("MADD_DSP_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #661
  {DBGFIELD("MAQ_SA_W_PHL_MM")    0, false, false,  0, 0,  0, 0,  0, 0}, // #662
  {DBGFIELD("MAQ_SA_W_PHR_MM")    0, false, false,  0, 0,  0, 0,  0, 0}, // #663
  {DBGFIELD("MAQ_S_W_PHL_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #664
  {DBGFIELD("MAQ_S_W_PHR_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #665
  {DBGFIELD("MFHI_DSP_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #666
  {DBGFIELD("MFLO_DSP_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #667
  {DBGFIELD("MODSUB_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #668
  {DBGFIELD("MOVEP_MM")           0, false, false,  0, 0,  0, 0,  0, 0}, // #669
  {DBGFIELD("MOVN_I_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #670
  {DBGFIELD("MOVZ_I_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #671
  {DBGFIELD("MSUBU_DSP_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #672
  {DBGFIELD("MSUB_DSP_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #673
  {DBGFIELD("MTHI_DSP_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #674
  {DBGFIELD("MTHLIP_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #675
  {DBGFIELD("MTLO_DSP_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #676
  {DBGFIELD("MULEQ_S_W_PHL_MM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #677
  {DBGFIELD("MULEQ_S_W_PHR_MM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #678
  {DBGFIELD("MULEU_S_PH_QBL_MM")  0, false, false,  0, 0,  0, 0,  0, 0}, // #679
  {DBGFIELD("MULEU_S_PH_QBR_MM")  0, false, false,  0, 0,  0, 0,  0, 0}, // #680
  {DBGFIELD("MULQ_RS_PH_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #681
  {DBGFIELD("MULSAQ_S_W_PH_MM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #682
  {DBGFIELD("MULTU_DSP_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #683
  {DBGFIELD("MULT_DSP_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #684
  {DBGFIELD("PACKRL_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #685
  {DBGFIELD("PICK_PH_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #686
  {DBGFIELD("PICK_QB_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #687
  {DBGFIELD("PRECEQU_PH_QBLA_MM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #688
  {DBGFIELD("PRECEQU_PH_QBL_MM")  0, false, false,  0, 0,  0, 0,  0, 0}, // #689
  {DBGFIELD("PRECEQU_PH_QBRA_MM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #690
  {DBGFIELD("PRECEQU_PH_QBR_MM")  0, false, false,  0, 0,  0, 0,  0, 0}, // #691
  {DBGFIELD("PRECEQ_W_PHL_MM")    0, false, false,  0, 0,  0, 0,  0, 0}, // #692
  {DBGFIELD("PRECEQ_W_PHR_MM")    0, false, false,  0, 0,  0, 0,  0, 0}, // #693
  {DBGFIELD("PRECEU_PH_QBLA_MM")  0, false, false,  0, 0,  0, 0,  0, 0}, // #694
  {DBGFIELD("PRECEU_PH_QBL_MM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #695
  {DBGFIELD("PRECEU_PH_QBRA_MM")  0, false, false,  0, 0,  0, 0,  0, 0}, // #696
  {DBGFIELD("PRECEU_PH_QBR_MM")   0, false, false,  0, 0,  0, 0,  0, 0}, // #697
  {DBGFIELD("PRECRQU_S_QB_PH_MM") 0, false, false,  0, 0,  0, 0,  0, 0}, // #698
  {DBGFIELD("PRECRQ_PH_W_MM")     0, false, false,  0, 0,  0, 0,  0, 0}, // #699
  {DBGFIELD("PRECRQ_QB_PH_MM")    0, false, false,  0, 0,  0, 0,  0, 0}, // #700
  {DBGFIELD("PRECRQ_RS_PH_W_MM")  0, false, false,  0, 0,  0, 0,  0, 0}, // #701
  {DBGFIELD("RADDU_W_QB_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #702
  {DBGFIELD("RDDSP_MM")           0, false, false,  0, 0,  0, 0,  0, 0}, // #703
  {DBGFIELD("REPLV_PH_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #704
  {DBGFIELD("REPLV_QB_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #705
  {DBGFIELD("REPL_PH_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #706
  {DBGFIELD("REPL_QB_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #707
  {DBGFIELD("SHILOV_MM")          0, false, false,  0, 0,  0, 0,  0, 0}, // #708
  {DBGFIELD("SHILO_MM")           0, false, false,  0, 0,  0, 0,  0, 0}, // #709
  {DBGFIELD("SHLLV_PH_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #710
  {DBGFIELD("SHLLV_QB_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #711
  {DBGFIELD("SHLLV_S_PH_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #712
  {DBGFIELD("SHLLV_S_W_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #713
  {DBGFIELD("SHLL_PH_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #714
  {DBGFIELD("SHLL_QB_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #715
  {DBGFIELD("SHLL_S_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #716
  {DBGFIELD("SHLL_S_W_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #717
  {DBGFIELD("SHRAV_PH_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #718
  {DBGFIELD("SHRAV_R_PH_MM")      0, false, false,  0, 0,  0, 0,  0, 0}, // #719
  {DBGFIELD("SHRAV_R_W_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #720
  {DBGFIELD("SHRA_PH_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #721
  {DBGFIELD("SHRA_R_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #722
  {DBGFIELD("SHRA_R_W_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #723
  {DBGFIELD("SHRLV_QB_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #724
  {DBGFIELD("SHRL_QB_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #725
  {DBGFIELD("SUBQ_PH_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #726
  {DBGFIELD("SUBQ_S_PH_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #727
  {DBGFIELD("SUBQ_S_W_MM")        0, false, false,  0, 0,  0, 0,  0, 0}, // #728
  {DBGFIELD("SUBU_QB_MM")         0, false, false,  0, 0,  0, 0,  0, 0}, // #729
  {DBGFIELD("SUBU_S_QB_MM")       0, false, false,  0, 0,  0, 0,  0, 0}, // #730
  {DBGFIELD("WRDSP_MM")           0, false, false,  0, 0,  0, 0,  0, 0}, // #731
  {DBGFIELD("ABSQ_S_QB_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #732
  {DBGFIELD("ADDQH_PH_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #733
  {DBGFIELD("ADDQH_R_PH_MMR2")    0, false, false,  0, 0,  0, 0,  0, 0}, // #734
  {DBGFIELD("ADDQH_R_W_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #735
  {DBGFIELD("ADDQH_W_MMR2")       0, false, false,  0, 0,  0, 0,  0, 0}, // #736
  {DBGFIELD("ADDUH_QB_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #737
  {DBGFIELD("ADDUH_R_QB_MMR2")    0, false, false,  0, 0,  0, 0,  0, 0}, // #738
  {DBGFIELD("ADDU_PH_MMR2")       0, false, false,  0, 0,  0, 0,  0, 0}, // #739
  {DBGFIELD("ADDU_S_PH_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #740
  {DBGFIELD("APPEND_MMR2")        0, false, false,  0, 0,  0, 0,  0, 0}, // #741
  {DBGFIELD("BALIGN_MMR2")        0, false, false,  0, 0,  0, 0,  0, 0}, // #742
  {DBGFIELD("CMPGDU_EQ_QB_MMR2")  0, false, false,  0, 0,  0, 0,  0, 0}, // #743
  {DBGFIELD("CMPGDU_LE_QB_MMR2")  0, false, false,  0, 0,  0, 0,  0, 0}, // #744
  {DBGFIELD("CMPGDU_LT_QB_MMR2")  0, false, false,  0, 0,  0, 0,  0, 0}, // #745
  {DBGFIELD("DPA_W_PH_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #746
  {DBGFIELD("DPAQX_SA_W_PH_MMR2") 0, false, false,  0, 0,  0, 0,  0, 0}, // #747
  {DBGFIELD("DPAQX_S_W_PH_MMR2")  0, false, false,  0, 0,  0, 0,  0, 0}, // #748
  {DBGFIELD("DPAX_W_PH_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #749
  {DBGFIELD("DPS_W_PH_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #750
  {DBGFIELD("DPSQX_S_W_PH_MMR2")  0, false, false,  0, 0,  0, 0,  0, 0}, // #751
  {DBGFIELD("DPSQX_SA_W_PH_MMR2") 0, false, false,  0, 0,  0, 0,  0, 0}, // #752
  {DBGFIELD("DPSX_W_PH_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #753
  {DBGFIELD("MUL_PH_MMR2")        0, false, false,  0, 0,  0, 0,  0, 0}, // #754
  {DBGFIELD("MUL_S_PH_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #755
  {DBGFIELD("MULQ_RS_W_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #756
  {DBGFIELD("MULQ_S_PH_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #757
  {DBGFIELD("MULQ_S_W_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #758
  {DBGFIELD("MULSA_W_PH_MMR2")    0, false, false,  0, 0,  0, 0,  0, 0}, // #759
  {DBGFIELD("PRECR_QB_PH_MMR2")   0, false, false,  0, 0,  0, 0,  0, 0}, // #760
  {DBGFIELD("PRECR_SRA_PH_W_MMR2") 0, false, false,  0, 0,  0, 0,  0, 0}, // #761
  {DBGFIELD("PRECR_SRA_R_PH_W_MMR2") 0, false, false,  0, 0,  0, 0,  0, 0}, // #762
  {DBGFIELD("PREPEND_MMR2")       0, false, false,  0, 0,  0, 0,  0, 0}, // #763
  {DBGFIELD("SHRA_QB_MMR2")       0, false, false,  0, 0,  0, 0,  0, 0}, // #764
  {DBGFIELD("SHRA_R_QB_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #765
  {DBGFIELD("SHRAV_QB_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #766
  {DBGFIELD("SHRAV_R_QB_MMR2")    0, false, false,  0, 0,  0, 0,  0, 0}, // #767
  {DBGFIELD("SHRL_PH_MMR2")       0, false, false,  0, 0,  0, 0,  0, 0}, // #768
  {DBGFIELD("SHRLV_PH_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #769
  {DBGFIELD("SUBQH_PH_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #770
  {DBGFIELD("SUBQH_R_PH_MMR2")    0, false, false,  0, 0,  0, 0,  0, 0}, // #771
  {DBGFIELD("SUBQH_W_MMR2")       0, false, false,  0, 0,  0, 0,  0, 0}, // #772
  {DBGFIELD("SUBQH_R_W_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #773
  {DBGFIELD("SUBU_PH_MMR2")       0, false, false,  0, 0,  0, 0,  0, 0}, // #774
  {DBGFIELD("SUBU_S_PH_MMR2")     0, false, false,  0, 0,  0, 0,  0, 0}, // #775
  {DBGFIELD("SUBUH_QB_MMR2")      0, false, false,  0, 0,  0, 0,  0, 0}, // #776
  {DBGFIELD("SUBUH_R_QB_MMR2")    0, false, false,  0, 0,  0, 0,  0, 0}, // #777
  {DBGFIELD("BPOSGE32C_MMR3")     0, false, false,  0, 0,  0, 0,  0, 0}, // #778
  {DBGFIELD("P5600WriteALU")      1, false, false, 34, 2,  1, 1,  0, 0}, // #779
  {DBGFIELD("P5600WriteAL2")      1, false, false,  1, 2,  1, 1,  0, 0} // #780
}; // MipsP5600ModelSchedClasses

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

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc MipsGenericModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("GenericALU")      1, 0, 1}, // #1
  {DBGFIELD("GenericCOP0")     1, 0, 1}, // #2
  {DBGFIELD("GenericCOP2")     1, 0, 1}, // #3
  {DBGFIELD("GenericDSP")      1, 0, 1}, // #4
  {DBGFIELD("GenericFPQ")      1, 0, 1}, // #5
  {DBGFIELD("GenericFPUDivSqrt") 1, 5, -1}, // #6, Super=GenericFPQ
  {DBGFIELD("GenericIssueALU") 1, 1, -1}, // #7, Super=GenericALU
  {DBGFIELD("GenericIssueCOP0") 1, 2, -1}, // #8, Super=GenericCOP0
  {DBGFIELD("GenericIssueCTISTD") 1, 1, -1}, // #9, Super=GenericALU
  {DBGFIELD("GenericIssueDIV") 1, 19, -1}, // #10, Super=GenericMDU
  {DBGFIELD("GenericIssueFPUL") 1, 5, -1}, // #11, Super=GenericFPQ
  {DBGFIELD("GenericIssueFPULoad") 1, 5, -1}, // #12, Super=GenericFPQ
  {DBGFIELD("GenericIssueFPUMove") 1, 5, -1}, // #13, Super=GenericFPQ
  {DBGFIELD("GenericIssueFPUS") 1, 5, -1}, // #14, Super=GenericFPQ
  {DBGFIELD("GenericIssueFPUStore") 1, 5, -1}, // #15, Super=GenericFPQ
  {DBGFIELD("GenericIssueLDST") 1, 18, -1}, // #16, Super=GenericLDST
  {DBGFIELD("GenericIssueMDU") 1, 1, -1}, // #17, Super=GenericALU
  {DBGFIELD("GenericLDST")     1, 0, 1}, // #18
  {DBGFIELD("GenericMDU")      1, 0, 1}  // #19
};

static const llvm::MCSchedModel MipsGenericModel = {
  1, // IssueWidth
  0, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  2, // LoadLatency
  37, // HighLatency
  4, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  1, // Processor ID
  MipsGenericModelProcResources,
  MipsGenericModelSchedClasses,
  20,
  781,
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc MipsP5600ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("P5600AGQ")        3, 0, 16}, // #1
  {DBGFIELD("P5600AL2Div")     1, 0, -1}, // #2
  {DBGFIELD("P5600ALQ")        1, 0, 16}, // #3
  {DBGFIELD("P5600CTISTD")     1, 0, -1}, // #4
  {DBGFIELD("P5600FPQ")        3, 0, 16}, // #5
  {DBGFIELD("P5600FPUDivSqrt") 2, 0, -1}, // #6
  {DBGFIELD("P5600IssueAL2")   1, 1, -1}, // #7, Super=P5600AGQ
  {DBGFIELD("P5600IssueALU")   1, 3, -1}, // #8, Super=P5600ALQ
  {DBGFIELD("P5600IssueCTISTD") 1, 1, -1}, // #9, Super=P5600AGQ
  {DBGFIELD("P5600IssueFPUL")  1, 5, -1}, // #10, Super=P5600FPQ
  {DBGFIELD("P5600IssueFPULoad") 1, 5, -1}, // #11, Super=P5600FPQ
  {DBGFIELD("P5600IssueFPUS")  1, 5, -1}, // #12, Super=P5600FPQ
  {DBGFIELD("P5600IssueLDST")  1, 1, -1}  // #13, Super=P5600AGQ
};

static const llvm::MCSchedModel MipsP5600Model = {
  2, // IssueWidth
  48, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  4, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  8, // MispredictPenalty
  false, // PostRAScheduler
  true, // CompleteModel
  2, // Processor ID
  MipsP5600ModelProcResources,
  MipsP5600ModelSchedClasses,
  14,
  781,
  nullptr}; // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV MipsProcSchedKV[] = {
  { "mips1", (const void *)&MipsGenericModel },
  { "mips2", (const void *)&MipsGenericModel },
  { "mips3", (const void *)&MipsGenericModel },
  { "mips32", (const void *)&MipsGenericModel },
  { "mips32r2", (const void *)&MipsGenericModel },
  { "mips32r3", (const void *)&MipsGenericModel },
  { "mips32r5", (const void *)&MipsGenericModel },
  { "mips32r6", (const void *)&MipsGenericModel },
  { "mips4", (const void *)&MipsGenericModel },
  { "mips5", (const void *)&MipsGenericModel },
  { "mips64", (const void *)&MipsGenericModel },
  { "mips64r2", (const void *)&MipsGenericModel },
  { "mips64r3", (const void *)&MipsGenericModel },
  { "mips64r5", (const void *)&MipsGenericModel },
  { "mips64r6", (const void *)&MipsGenericModel },
  { "octeon", (const void *)&MipsGenericModel },
  { "p5600", (const void *)&MipsP5600Model }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createMipsMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, MipsFeatureKV, MipsSubTypeKV, 
                      MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                      nullptr, nullptr, nullptr);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MipsSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Mips::FeatureCnMips]) HasCnMips = true;
  if (Bits[Mips::FeatureDSP]) HasDSP = true;
  if (Bits[Mips::FeatureDSPR2]) HasDSPR2 = true;
  if (Bits[Mips::FeatureDSPR3]) HasDSPR3 = true;
  if (Bits[Mips::FeatureEVA]) HasEVA = true;
  if (Bits[Mips::FeatureFP64Bit]) IsFP64bit = true;
  if (Bits[Mips::FeatureFPXX]) IsFPXX = true;
  if (Bits[Mips::FeatureGP64Bit]) IsGP64bit = true;
  if (Bits[Mips::FeatureMSA]) HasMSA = true;
  if (Bits[Mips::FeatureMicroMips]) InMicroMipsMode = true;
  if (Bits[Mips::FeatureMips1] && MipsArchVersion < Mips1) MipsArchVersion = Mips1;
  if (Bits[Mips::FeatureMips2] && MipsArchVersion < Mips2) MipsArchVersion = Mips2;
  if (Bits[Mips::FeatureMips3] && MipsArchVersion < Mips3) MipsArchVersion = Mips3;
  if (Bits[Mips::FeatureMips3_32]) HasMips3_32 = true;
  if (Bits[Mips::FeatureMips3_32r2]) HasMips3_32r2 = true;
  if (Bits[Mips::FeatureMips4] && MipsArchVersion < Mips4) MipsArchVersion = Mips4;
  if (Bits[Mips::FeatureMips4_32]) HasMips4_32 = true;
  if (Bits[Mips::FeatureMips4_32r2]) HasMips4_32r2 = true;
  if (Bits[Mips::FeatureMips5] && MipsArchVersion < Mips5) MipsArchVersion = Mips5;
  if (Bits[Mips::FeatureMips5_32r2]) HasMips5_32r2 = true;
  if (Bits[Mips::FeatureMips16]) InMips16Mode = true;
  if (Bits[Mips::FeatureMips32] && MipsArchVersion < Mips32) MipsArchVersion = Mips32;
  if (Bits[Mips::FeatureMips32r2] && MipsArchVersion < Mips32r2) MipsArchVersion = Mips32r2;
  if (Bits[Mips::FeatureMips32r3] && MipsArchVersion < Mips32r3) MipsArchVersion = Mips32r3;
  if (Bits[Mips::FeatureMips32r5] && MipsArchVersion < Mips32r5) MipsArchVersion = Mips32r5;
  if (Bits[Mips::FeatureMips32r6] && MipsArchVersion < Mips32r6) MipsArchVersion = Mips32r6;
  if (Bits[Mips::FeatureMips64] && MipsArchVersion < Mips64) MipsArchVersion = Mips64;
  if (Bits[Mips::FeatureMips64r2] && MipsArchVersion < Mips64r2) MipsArchVersion = Mips64r2;
  if (Bits[Mips::FeatureMips64r3] && MipsArchVersion < Mips64r3) MipsArchVersion = Mips64r3;
  if (Bits[Mips::FeatureMips64r5] && MipsArchVersion < Mips64r5) MipsArchVersion = Mips64r5;
  if (Bits[Mips::FeatureMips64r6] && MipsArchVersion < Mips64r6) MipsArchVersion = Mips64r6;
  if (Bits[Mips::FeatureNaN2008]) IsNaN2008bit = true;
  if (Bits[Mips::FeatureNoABICalls]) NoABICalls = true;
  if (Bits[Mips::FeatureNoOddSPReg]) UseOddSPReg = false;
  if (Bits[Mips::FeaturePTR64Bit]) IsPTR64bit = true;
  if (Bits[Mips::FeatureSingleFloat]) IsSingleFloat = true;
  if (Bits[Mips::FeatureSoftFloat]) IsSoftFloat = true;
  if (Bits[Mips::FeatureUseTCCInDIV]) UseTCCInDIV = false;
  if (Bits[Mips::FeatureVFPU]) HasVFPU = true;
  if (Bits[Mips::ImplP5600] && ProcImpl < MipsSubtarget::CPU::P5600) ProcImpl = MipsSubtarget::CPU::P5600;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct MipsGenSubtargetInfo : public TargetSubtargetInfo {
  explicit MipsGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV MipsFeatureKV[];
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[];
extern const llvm::SubtargetInfoKV MipsProcSchedKV[];
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[];
MipsGenSubtargetInfo::MipsGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(MipsFeatureKV, 40), makeArrayRef(MipsSubTypeKV, 17), 
                        MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned MipsGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  switch (SchedClass) {
  case 3: // II_ADD
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 5: // II_ADDIU
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 6: // II_ADDU
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 7: // II_ADDI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 11: // II_ANDI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 156: // II_LSA
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 233: // II_ORI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 245: // II_ROTR
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 246: // II_ROTRV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 264: // II_SEB
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 265: // II_SEH
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 275: // II_SLL
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 276: // II_SLLV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 277: // II_SLT_SLTU
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 279: // II_SRA
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 280: // II_SRAV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 281: // II_SRL
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 282: // II_SRLV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  case 327: // II_XORI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 779; // P5600WriteALU
      if ((0))
        return 780; // P5600WriteAL2
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // MipsGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

