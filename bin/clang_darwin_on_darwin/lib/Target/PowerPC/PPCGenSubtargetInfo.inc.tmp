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
namespace PPC {
enum {
  DeprecatedDST = 0,
  Directive32 = 1,
  Directive64 = 2,
  Directive440 = 3,
  Directive601 = 4,
  Directive602 = 5,
  Directive603 = 6,
  Directive604 = 7,
  Directive620 = 8,
  Directive750 = 9,
  Directive970 = 10,
  Directive7400 = 11,
  DirectiveA2 = 12,
  DirectiveE500mc = 13,
  DirectiveE5500 = 14,
  DirectivePwr3 = 15,
  DirectivePwr4 = 16,
  DirectivePwr5 = 17,
  DirectivePwr5x = 18,
  DirectivePwr6 = 19,
  DirectivePwr6x = 20,
  DirectivePwr7 = 21,
  DirectivePwr8 = 22,
  DirectivePwr9 = 23,
  Feature64Bit = 24,
  Feature64BitRegs = 25,
  FeatureAltivec = 26,
  FeatureBPERMD = 27,
  FeatureBookE = 28,
  FeatureCMPB = 29,
  FeatureCRBits = 30,
  FeatureDirectMove = 31,
  FeatureE500 = 32,
  FeatureExtDiv = 33,
  FeatureFCPSGN = 34,
  FeatureFPCVT = 35,
  FeatureFPRND = 36,
  FeatureFRE = 37,
  FeatureFRES = 38,
  FeatureFRSQRTE = 39,
  FeatureFRSQRTES = 40,
  FeatureFSqrt = 41,
  FeatureFloat128 = 42,
  FeatureFusion = 43,
  FeatureHTM = 44,
  FeatureHardFloat = 45,
  FeatureICBT = 46,
  FeatureISA3_0 = 47,
  FeatureISEL = 48,
  FeatureInvariantFunctionDescriptors = 49,
  FeatureLDBRX = 50,
  FeatureLFIWAX = 51,
  FeatureLongCall = 52,
  FeatureMFOCRF = 53,
  FeatureMFTB = 54,
  FeatureMSYNC = 55,
  FeatureP8Altivec = 56,
  FeatureP8Crypto = 57,
  FeatureP8Vector = 58,
  FeatureP9Altivec = 59,
  FeatureP9Vector = 60,
  FeaturePOPCNTD = 61,
  FeaturePPC4xx = 62,
  FeaturePPC6xx = 63,
  FeaturePartwordAtomic = 64,
  FeatureQPX = 65,
  FeatureRecipPrec = 66,
  FeatureSPE = 67,
  FeatureSTFIWX = 68,
  FeatureSlowPOPCNTD = 69,
  FeatureVSX = 70
};
} // end namespace PPC
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", { PPC::Feature64Bit }, { } },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", { PPC::Feature64BitRegs }, { } },
  { "altivec", "Enable Altivec instructions", { PPC::FeatureAltivec }, { PPC::FeatureHardFloat } },
  { "booke", "Enable Book E instructions", { PPC::FeatureBookE }, { PPC::FeatureICBT } },
  { "bpermd", "Enable the bpermd instruction", { PPC::FeatureBPERMD }, { } },
  { "cmpb", "Enable the cmpb instruction", { PPC::FeatureCMPB }, { } },
  { "crbits", "Use condition-register bits individually", { PPC::FeatureCRBits }, { } },
  { "crypto", "Enable POWER8 Crypto instructions", { PPC::FeatureP8Crypto }, { PPC::FeatureP8Altivec } },
  { "direct-move", "Enable Power8 direct move instructions", { PPC::FeatureDirectMove }, { PPC::FeatureVSX } },
  { "e500", "Enable E500/E500mc instructions", { PPC::FeatureE500 }, { } },
  { "extdiv", "Enable extended divide instructions", { PPC::FeatureExtDiv }, { } },
  { "fcpsgn", "Enable the fcpsgn instruction", { PPC::FeatureFCPSGN }, { PPC::FeatureHardFloat } },
  { "float128", "Enable the __float128 data type for IEEE-754R Binary128.", { PPC::FeatureFloat128 }, { PPC::FeatureVSX } },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", { PPC::FeatureFPCVT }, { PPC::FeatureHardFloat } },
  { "fprnd", "Enable the fri[mnpz] instructions", { PPC::FeatureFPRND }, { PPC::FeatureHardFloat } },
  { "fre", "Enable the fre instruction", { PPC::FeatureFRE }, { PPC::FeatureHardFloat } },
  { "fres", "Enable the fres instruction", { PPC::FeatureFRES }, { PPC::FeatureHardFloat } },
  { "frsqrte", "Enable the frsqrte instruction", { PPC::FeatureFRSQRTE }, { PPC::FeatureHardFloat } },
  { "frsqrtes", "Enable the frsqrtes instruction", { PPC::FeatureFRSQRTES }, { PPC::FeatureHardFloat } },
  { "fsqrt", "Enable the fsqrt instruction", { PPC::FeatureFSqrt }, { PPC::FeatureHardFloat } },
  { "fusion", "Target supports add/load integer fusion.", { PPC::FeatureFusion }, { } },
  { "hard-float", "Enable floating-point instructions", { PPC::FeatureHardFloat }, { } },
  { "htm", "Enable Hardware Transactional Memory instructions", { PPC::FeatureHTM }, { } },
  { "icbt", "Enable icbt instruction", { PPC::FeatureICBT }, { } },
  { "invariant-function-descriptors", "Assume function descriptors are invariant", { PPC::FeatureInvariantFunctionDescriptors }, { } },
  { "isa-v30-instructions", "Enable instructions added in ISA 3.0.", { PPC::FeatureISA3_0 }, { } },
  { "isel", "Enable the isel instruction", { PPC::FeatureISEL }, { } },
  { "ldbrx", "Enable the ldbrx instruction", { PPC::FeatureLDBRX }, { } },
  { "lfiwax", "Enable the lfiwax instruction", { PPC::FeatureLFIWAX }, { PPC::FeatureHardFloat } },
  { "longcall", "Always use indirect calls", { PPC::FeatureLongCall }, { } },
  { "mfocrf", "Enable the MFOCRF instruction", { PPC::FeatureMFOCRF }, { } },
  { "msync", "Has only the msync instruction instead of sync", { PPC::FeatureMSYNC }, { PPC::FeatureBookE } },
  { "partword-atomics", "Enable l[bh]arx and st[bh]cx.", { PPC::FeaturePartwordAtomic }, { } },
  { "popcntd", "Enable the popcnt[dw] instructions", { PPC::FeaturePOPCNTD }, { } },
  { "power8-altivec", "Enable POWER8 Altivec instructions", { PPC::FeatureP8Altivec }, { PPC::FeatureAltivec } },
  { "power8-vector", "Enable POWER8 vector instructions", { PPC::FeatureP8Vector }, { PPC::FeatureVSX, PPC::FeatureP8Altivec } },
  { "power9-altivec", "Enable POWER9 Altivec instructions", { PPC::FeatureP9Altivec }, { PPC::FeatureISA3_0, PPC::FeatureP8Altivec } },
  { "power9-vector", "Enable POWER9 vector instructions", { PPC::FeatureP9Vector }, { PPC::FeatureISA3_0, PPC::FeatureP8Vector, PPC::FeatureP9Altivec } },
  { "ppc4xx", "Enable PPC 4xx instructions", { PPC::FeaturePPC4xx }, { } },
  { "ppc6xx", "Enable PPC 6xx instructions", { PPC::FeaturePPC6xx }, { } },
  { "qpx", "Enable QPX instructions", { PPC::FeatureQPX }, { PPC::FeatureHardFloat } },
  { "recipprec", "Assume higher precision reciprocal estimates", { PPC::FeatureRecipPrec }, { } },
  { "slow-popcntd", "Has slow popcnt[dw] instructions", { PPC::FeatureSlowPOPCNTD }, { } },
  { "spe", "Enable SPE instructions", { PPC::FeatureSPE }, { PPC::FeatureHardFloat } },
  { "stfiwx", "Enable the stfiwx instruction", { PPC::FeatureSTFIWX }, { PPC::FeatureHardFloat } },
  { "vsx", "Enable VSX instructions", { PPC::FeatureVSX }, { PPC::FeatureAltivec } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", { PPC::Directive440, PPC::FeatureISEL, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMSYNC, PPC::FeatureMFTB }, { } },
  { "450", "Select the 450 processor", { PPC::Directive440, PPC::FeatureISEL, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMSYNC, PPC::FeatureMFTB }, { } },
  { "601", "Select the 601 processor", { PPC::Directive601, PPC::FeatureHardFloat }, { } },
  { "602", "Select the 602 processor", { PPC::Directive602, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "603", "Select the 603 processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "603e", "Select the 603e processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "603ev", "Select the 603ev processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "604", "Select the 604 processor", { PPC::Directive604, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "604e", "Select the 604e processor", { PPC::Directive604, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "620", "Select the 620 processor", { PPC::Directive620, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "7400", "Select the 7400 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "7450", "Select the 7450 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "750", "Select the 750 processor", { PPC::Directive750, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "970", "Select the 970 processor", { PPC::Directive970, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "a2", "Select the a2 processor", { PPC::DirectiveA2, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeatureSlowPOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "a2q", "Select the a2q processor", { PPC::DirectiveA2, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeatureSlowPOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureQPX, PPC::FeatureMFTB }, { } },
  { "e500mc", "Select the e500mc processor", { PPC::DirectiveE500mc, PPC::FeatureSTFIWX, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureISEL, PPC::FeatureMFTB }, { } },
  { "e5500", "Select the e5500 processor", { PPC::DirectiveE5500, PPC::FeatureMFOCRF, PPC::Feature64Bit, PPC::FeatureSTFIWX, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureISEL, PPC::FeatureMFTB }, { } },
  { "g3", "Select the g3 processor", { PPC::Directive750, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g4", "Select the g4 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g4+", "Select the g4+ processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g5", "Select the g5 processor", { PPC::Directive970, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureSTFIWX, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "generic", "Select the generic processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc", "Select the ppc processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc32", "Select the ppc32 processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc64", "Select the ppc64 processor", { PPC::Directive64, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "ppc64le", "Select the ppc64le processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion }, { } },
  { "pwr3", "Select the pwr3 processor", { PPC::DirectivePwr3, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFOCRF, PPC::FeatureSTFIWX, PPC::Feature64Bit }, { } },
  { "pwr4", "Select the pwr4 processor", { PPC::DirectivePwr4, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "pwr5", "Select the pwr5 processor", { PPC::DirectivePwr5, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr5x", "Select the pwr5x processor", { PPC::DirectivePwr5x, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureSTFIWX, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr6", "Select the pwr6 processor", { PPC::DirectivePwr6, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureCMPB, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr6x", "Select the pwr6x processor", { PPC::DirectivePwr5x, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureCMPB, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr7", "Select the pwr7 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr8", "Select the pwr8 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion }, { } },
  { "pwr9", "Select the pwr9 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion, PPC::DirectivePwr9, PPC::FeatureP9Altivec, PPC::FeatureP9Vector, PPC::FeatureISA3_0 }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned P440_DISS1 = 1 << 0;
  const unsigned P440_DISS2 = 1 << 1;
  const unsigned P440_FRACC = 1 << 2;
  const unsigned P440_IRACC = 1 << 3;
  const unsigned P440_IEXE1 = 1 << 4;
  const unsigned P440_IEXE2 = 1 << 5;
  const unsigned P440_IWB = 1 << 6;
  const unsigned P440_LRACC = 1 << 7;
  const unsigned P440_JEXE1 = 1 << 8;
  const unsigned P440_JEXE2 = 1 << 9;
  const unsigned P440_JWB = 1 << 10;
  const unsigned P440_AGEN = 1 << 11;
  const unsigned P440_CRD = 1 << 12;
  const unsigned P440_LWB = 1 << 13;
  const unsigned P440_FEXE1 = 1 << 14;
  const unsigned P440_FEXE2 = 1 << 15;
  const unsigned P440_FEXE3 = 1 << 16;
  const unsigned P440_FEXE4 = 1 << 17;
  const unsigned P440_FEXE5 = 1 << 18;
  const unsigned P440_FEXE6 = 1 << 19;
  const unsigned P440_FWB = 1 << 20;
  const unsigned P440_LWARX_Hold = 1 << 21;
} // end namespace PPC440ItinerariesFU

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned P440_GPR_Bypass = 1 << 0;
  const unsigned P440_FPR_Bypass = 1 << 1;
} // end namespace PPC440ItinerariesBypass

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned G3_IU1 = 1 << 0;
  const unsigned G3_IU2 = 1 << 1;
  const unsigned G3_FPU1 = 1 << 2;
  const unsigned G3_BPU = 1 << 3;
  const unsigned G3_SRU = 1 << 4;
  const unsigned G3_SLU = 1 << 5;
} // end namespace G3ItinerariesFU

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned G4_IU1 = 1 << 0;
  const unsigned G4_IU2 = 1 << 1;
  const unsigned G4_SLU = 1 << 2;
  const unsigned G4_SRU = 1 << 3;
  const unsigned G4_BPU = 1 << 4;
  const unsigned G4_FPU1 = 1 << 5;
  const unsigned G4_VIU1 = 1 << 6;
  const unsigned G4_VIU2 = 1 << 7;
  const unsigned G4_VPU = 1 << 8;
  const unsigned G4_VFPU = 1 << 9;
} // end namespace G4ItinerariesFU

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned G4P_IU1 = 1 << 0;
  const unsigned G4P_IU2 = 1 << 1;
  const unsigned G4P_IU3 = 1 << 2;
  const unsigned G4P_IU4 = 1 << 3;
  const unsigned G4P_BPU = 1 << 4;
  const unsigned G4P_SLU = 1 << 5;
  const unsigned G4P_FPU1 = 1 << 6;
  const unsigned G4P_VFPU = 1 << 7;
  const unsigned G4P_VIU1 = 1 << 8;
  const unsigned G4P_VIU2 = 1 << 9;
  const unsigned G4P_VPU = 1 << 10;
} // end namespace G4PlusItinerariesFU

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned G5_IU1 = 1 << 0;
  const unsigned G5_IU2 = 1 << 1;
  const unsigned G5_SLU = 1 << 2;
  const unsigned G5_BPU = 1 << 3;
  const unsigned G5_FPU1 = 1 << 4;
  const unsigned G5_FPU2 = 1 << 5;
  const unsigned G5_VFPU = 1 << 6;
  const unsigned G5_VIU1 = 1 << 7;
  const unsigned G5_VIU2 = 1 << 8;
  const unsigned G5_VPU = 1 << 9;
} // end namespace G5ItinerariesFU

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned A2_XU = 1 << 0;
  const unsigned A2_FU = 1 << 1;
} // end namespace PPCA2ItinerariesFU

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned E500_DIS0 = 1 << 0;
  const unsigned E500_DIS1 = 1 << 1;
  const unsigned E500_SFX0 = 1 << 2;
  const unsigned E500_SFX1 = 1 << 3;
  const unsigned E500_BU = 1 << 4;
  const unsigned E500_CFX_DivBypass = 1 << 5;
  const unsigned E500_CFX_0 = 1 << 6;
  const unsigned E500_LSU_0 = 1 << 7;
  const unsigned E500_FPU_0 = 1 << 8;
} // end namespace PPCE500mcItinerariesFU

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E500_CR_Bypass = 1 << 0;
  const unsigned E500_GPR_Bypass = 1 << 1;
  const unsigned E500_FPR_Bypass = 1 << 2;
} // end namespace PPCE500mcItinerariesBypass

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned E5500_DIS0 = 1 << 0;
  const unsigned E5500_DIS1 = 1 << 1;
  const unsigned E5500_SFX0 = 1 << 2;
  const unsigned E5500_SFX1 = 1 << 3;
  const unsigned E5500_BU = 1 << 4;
  const unsigned E5500_CFX_DivBypass = 1 << 5;
  const unsigned E5500_CFX_0 = 1 << 6;
  const unsigned E5500_CFX_1 = 1 << 7;
  const unsigned E5500_LSU_0 = 1 << 8;
  const unsigned E5500_FPU_0 = 1 << 9;
} // end namespace PPCE5500ItinerariesFU

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E5500_CR_Bypass = 1 << 0;
  const unsigned E5500_GPR_Bypass = 1 << 1;
  const unsigned E5500_FPR_Bypass = 1 << 2;
} // end namespace PPCE5500ItinerariesBypass

// Functional units for "P8Itineraries"
namespace P8ItinerariesFU {
  const unsigned P8_DU1 = 1 << 0;
  const unsigned P8_DU2 = 1 << 1;
  const unsigned P8_DU3 = 1 << 2;
  const unsigned P8_DU4 = 1 << 3;
  const unsigned P8_DU5 = 1 << 4;
  const unsigned P8_DU6 = 1 << 5;
  const unsigned P8_DU7 = 1 << 6;
  const unsigned P8_DU8 = 1 << 7;
  const unsigned P8_LU1 = 1 << 8;
  const unsigned P8_LU2 = 1 << 9;
  const unsigned P8_LSU1 = 1 << 10;
  const unsigned P8_LSU2 = 1 << 11;
  const unsigned P8_FXU1 = 1 << 12;
  const unsigned P8_FXU2 = 1 << 13;
  const unsigned P8_FPU1 = 1 << 14;
  const unsigned P8_FPU2 = 1 << 15;
  const unsigned P8_CRU = 1 << 16;
  const unsigned P8_BRU = 1 << 17;
} // end namespace P8ItinerariesFU

// Functional units for "P7Itineraries"
namespace P7ItinerariesFU {
  const unsigned P7_DU1 = 1 << 0;
  const unsigned P7_DU2 = 1 << 1;
  const unsigned P7_DU3 = 1 << 2;
  const unsigned P7_DU4 = 1 << 3;
  const unsigned P7_DU5 = 1 << 4;
  const unsigned P7_DU6 = 1 << 5;
  const unsigned P7_LS1 = 1 << 6;
  const unsigned P7_LS2 = 1 << 7;
  const unsigned P7_FX1 = 1 << 8;
  const unsigned P7_FX2 = 1 << 9;
  const unsigned P7_VS1 = 1 << 10;
  const unsigned P7_VS2 = 1 << 11;
  const unsigned P7_CRU = 1 << 12;
  const unsigned P7_BRU = 1 << 13;
} // end namespace P7ItinerariesFU

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC | PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1 | PPC440ItinerariesFU::P440_JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2 | PPC440ItinerariesFU::P440_JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB | PPC440ItinerariesFU::P440_JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-5
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-10
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-15
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-20
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21-25
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-34
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-43
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-52
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-68
  { 1, PPC440ItinerariesFU::P440_DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::P440_LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-75
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-80
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-85
  { 1, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, G3ItinerariesFU::G3_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 3, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 2, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 19, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 31, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 17, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 2, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 2, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 34, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 3, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 3, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 5, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 6, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 3, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 8, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 2, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 1, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 1, G4ItinerariesFU::G4_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106
  { 4, G4ItinerariesFU::G4_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107
  { 1, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108
  { 2, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109
  { 19, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 1, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 31, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 17, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 2, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 3, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 34, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 3, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 3, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 1, G4ItinerariesFU::G4_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 8, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 5, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 6, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 3, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 1, G4ItinerariesFU::G4_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 5, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 8, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 2, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 1, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4PlusItinerariesFU::G4P_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 4, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 2, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 3, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 23, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 5, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 35, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 21, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 3, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 0, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 4, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 37, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 4, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 5, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 1, G4PlusItinerariesFU::G4P_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 35, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 2, G4PlusItinerariesFU::G4P_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 2, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 2, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 2, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 1, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 8, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 3, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 4, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 3, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 68, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 36, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 6, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 8, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 33, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 40, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 40, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 11, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 5, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 64, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 2, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 3, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 2, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 3, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 6, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 10, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 2, G5ItinerariesFU::G5_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 35, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 8, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 5, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 7, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 4, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 3, G5ItinerariesFU::G5_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 4, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 1, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 1, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 2, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 1, PPCA2ItinerariesFU::A2_XU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 1, PPCA2ItinerariesFU::A2_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183-184
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185-186
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187-188
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::E500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 189-191
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-193
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-197
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 198-199
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-201
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-204
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 205-206
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 207-208
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-210
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 211-212
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 213-214
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 215-216
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 217-218
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-222
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 223-224
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 225-226
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227-229
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230-232
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-238
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-240
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 241-243
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 244-245
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 246-247
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 248-249
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 250-251
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 252-253
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 254-255
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 256-258
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 259-261
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 262-263
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 264-265
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 266-267
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 268-269
  { 1, P8ItinerariesFU::P8_DU7 | P8ItinerariesFU::P8_DU8, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 270-271
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 272-273
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 274-275
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 276-277
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-279
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 23, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-281
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 15, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 282-283
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 284-285
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 286-288
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 289-291
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 292-296
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297-300
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301-307
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 308-309
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 310-313
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-317
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 318-322
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 323-331
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-335
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 336-337
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 338-339
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-341
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-344
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 345-349
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 350-357
  { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 358-360
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 361-364
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365-373
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2 | P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-375
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 376-377
  { 1, P7ItinerariesFU::P7_DU5 | P7ItinerariesFU::P7_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 378-379
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 380-381
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-383
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-385
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 386-388
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 36, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 389-391
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 392-393
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-396
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 397-399
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 400-404
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 405-408
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 409-415
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 416-419
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 420-424
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 425-432
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 433-438
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 439-440
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 441-442
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 443-444
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 445-447
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 448-452
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 453-459
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  2,   0,   0, // 1-3
  2,   0,   0, // 4-6
  4,   0, // 7-8
  2,   0,   0, // 9-11
  4,   0,   0, // 12-14
  1,   1, // 15-16
  5,   1,   1, // 17-19
  36,   0,   0, // 20-22
  6,   0,   0, // 23-25
  6,   0,   0, // 26-28
  6,   0,   0, // 29-31
  31,   0,   0, // 32-34
  19,   0,   0, // 35-37
  6,   0,   0,   0, // 38-41
  4,   1,   1, // 42-44
  1,   1,   1, // 45-47
  2,   0,   0,   0, // 48-51
  4,   1,   1, // 52-54
  5,   2,   1,   1, // 55-58
  5,   2,   1,   1, // 59-62
  5,   1,   1, // 63-65
  5,   2,   1,   1, // 66-69
  5,   2,   1,   1, // 70-73
  4,   1,   1, // 74-76
  4,   1,   1, // 77-79
  4,   1,   1, // 80-82
  4,   1,   1, // 83-85
  4,   0,   0, // 86-88
  4,   0,   0, // 89-91
  4,   0, // 92-93
  6,   0, // 94-95
  3,   0,   0, // 96-98
  3,   0, // 99-100
  2,   0, // 101-102
  6,   0, // 103-104
  6,   0, // 105-106
  3,   0,   0, // 107-109
  2,   0, // 110-111
  5,   0, // 112-113
  4,   0,   0, // 114-116
  4,   0,   0, // 117-119
  4,   0,   0, // 120-122
  1,   1,   1, // 123-125
  2,   1,   1,   1, // 126-129
  4,   0, // 130-131
  2,   0,   0, // 132-134
  2,   0,   0, // 135-137
  4,   1,   1, // 138-140
  2,   1,   1,   1, // 141-144
  4,   1,   1, // 145-147
  4,   1,   1, // 148-150
  2,   1,   1,   1, // 151-154
  2,   1,   1,   1, // 155-158
  2,   0, // 159-160
  6,   0,   0, // 161-163
  6,   0,   0, // 164-166
  5,   1,   1, // 167-169
  5,   1,   1, // 170-172
  5,   1,   1, // 173-175
  5,   1,   1, // 176-178
  5,   1,   1, // 179-181
  1,   1,   1, // 182-184
  1,   1,   1, // 185-187
  36,   0,   0, // 188-190
  36,   0,   0, // 191-193
  36,   0,   0, // 194-196
  4,   0,   0, // 197-199
  4,   0,   0, // 200-202
  4,   0,   0, // 203-205
  4,   0,   0, // 206-208
  31,   0,   0, // 209-211
  19,   0,   0, // 212-214
  19,   0,   0, // 215-217
  31,   0,   0, // 218-220
  6,   0,   0, // 221-223
  6,   0,   0,   0, // 224-227
  6,   0,   0, // 228-230
  6,   0,   0, // 231-233
  5,   2,   1,   1, // 234-237
  5,   2,   1,   1, // 238-241
  5,   2,   1,   1, // 242-245
  5,   2,   1,   1, // 246-249
  1,   0,   0, // 250-252
  2,   0,   0, // 253-255
  6,   0,   0, // 256-258
  2,   0,   0, // 259-261
  1,   0,   0, // 262-264
  1,   0,   0, // 265-267
  6,   0,   0, // 268-270
  71,   0,   0, // 271-273
  39,   0,   0, // 274-276
  6,   0,   0, // 277-279
  6,   0,   0, // 280-282
  5,   0,   0, // 283-285
  72,   0,   0, // 286-288
  59,   0,   0, // 289-291
  6,   0,   0,   0, // 292-295
  69,   0,   0, // 296-298
  65,   0,   0, // 299-301
  16,   0,   0, // 302-304
  0,   0,   0, // 305-307
  2,   0,   0,   0, // 308-311
  16, // 312
  82,   0,   0, // 313-315
  6,   8,   0,   0, // 316-319
  6,   8,   0,   0, // 320-323
  6,   0,   0, // 324-326
  6,   0,   0, // 327-329
  7,   0,   0, // 330-332
  7,   9,   0,   0, // 333-336
  7,   9,   0,   0, // 337-340
  6,   0,   0, // 341-343
  6,   8,   0,   0, // 344-347
  6,   8,   0,   0, // 348-351
  5,   0,   0, // 352-354
  1,   0,   0, // 355-357
  6,   0, // 358-359
  6,   0, // 360-361
  4,   0, // 362-363
  1,   0, // 364-365
  4,   0, // 366-367
  6, // 368
  6,   0, // 369-370
  16,   0, // 371-372
  5,   0,   0, // 373-375
  5,   0,   0, // 376-378
  6,   0,   0, // 379-381
  0,   0,   0, // 382-384
  2,   0,   0,   0, // 385-388
  16, // 389
  2,   0,   0, // 390-392
  2,   0,   0, // 393-395
  2,   0,   0, // 396-398
  2,   0,   0, // 399-401
  82,   0,   0, // 402-404
  2,   0,   0,   0, // 405-408
  0,   0,   0, // 409-411
  82,   0,   0, // 412-414
  2,   0,   0,   0, // 415-418
  2,   0,   0,   0, // 419-422
  2,   0, // 423-424
  2,   0, // 425-426
  5,   0,   0, // 427-429
  5,   0,   0, // 430-432
  7,   0,   0, // 433-435
  7,   0,   0, // 436-438
  7,   0,   0, // 439-441
  7,   0,   0, // 442-444
  7,   0,   0, // 445-447
  0,   0,   0, // 448-450
  0,   0,   0, // 451-453
  39,   0,   0, // 454-456
  39,   0,   0, // 457-459
  71,   0,   0, // 460-462
  71,   0,   0, // 463-465
  39,   0,   0, // 466-468
  71,   0,   0, // 469-471
  2,   0,   0, // 472-474
  2,   0,   0, // 475-477
  2,   0,   0, // 478-480
  2,   0,   0, // 481-483
  1,   0,   0, // 484-486
  5,   0,   0, // 487-489
  1,   0,   0, // 490-492
  5,   0,   0, // 493-495
  72,   0,   0, // 496-498
  59,   0,   0, // 499-501
  59,   0,   0, // 502-504
  72,   0,   0, // 505-507
  6,   0,   0, // 508-510
  6,   0,   0,   0, // 511-514
  6,   0,   0, // 515-517
  5,   0,   0, // 518-520
  7,   9,   0,   0, // 521-524
  7,   9,   0,   0, // 525-528
  7,   9,   0,   0, // 529-532
  7,   9,   0,   0, // 533-536
  4,   1,   1, // 537-539
  4,   1,   1, // 540-542
  4,   1, // 543-544
  5,   1,   1, // 545-547
  4,   1,   1, // 548-550
  6,   1, // 551-552
  6,   1, // 553-554
  17,   1,   1, // 555-557
  11,   1,   1, // 558-560
  13,   1,   1, // 561-563
  11,   1,   1, // 564-566
  71,   1,   1, // 567-569
  41,   1,   1, // 570-572
  13,   1,   1,   1, // 573-576
  6,   1, // 577-578
  6,   1, // 579-580
  4,   1,   1,   1, // 581-584
  6,   1,   1, // 585-587
  6,   1, // 588-589
  6,   1, // 590-591
  7,   1,   1, // 592-594
  7,   1,   1, // 595-597
  7,   1,   1, // 598-600
  6,   1, // 601-602
  6,   1, // 603-604
  6,   1, // 605-606
  7,   1, // 607-608
  4,   1, // 609-610
  4,   1,   1, // 611-613
  8,   1, // 614-615
  4,   1, // 616-617
  11, // 618
  7,   1, // 619-620
  8,   1, // 621-622
  7,   1, // 623-624
  7,   1, // 625-626
  7,   1, // 627-628
  4,   1, // 629-630
  11,   1,   1, // 631-633
  5,   1, // 634-635
  4,   1, // 636-637
  5,   1, // 638-639
  7,   1,   1, // 640-642
  7,   1,   1, // 643-645
  7,   1,   1, // 646-648
  6,   1,   1, // 649-651
  6,   1,   1, // 652-654
  4,   1,   1, // 655-657
  4,   1,   1, // 658-660
  6,   1, // 661-662
  6,   1, // 663-664
  5,   1, // 665-666
  11,   1,   1, // 667-669
  11,   1,   1, // 670-672
  7,   1,   1, // 673-675
  7,   1,   1, // 676-678
  7,   1,   1, // 679-681
  7,   1,   1, // 682-684
  7,   1,   1, // 685-687
  6,   1,   1, // 688-690
  6,   1,   1, // 691-693
  17,   1,   1, // 694-696
  17,   1,   1, // 697-699
  17,   1,   1, // 700-702
  4,   1,   1, // 703-705
  4,   1, // 706-707
  4,   1,   1, // 708-710
  4,   1, // 711-712
  71,   1,   1, // 713-715
  41,   1,   1, // 716-718
  41,   1,   1, // 719-721
  71,   1,   1, // 722-724
  11,   1,   1, // 725-727
  13,   1,   1,   1, // 728-731
  11,   1,   1, // 732-734
  11,   1,   1, // 735-737
  7,   1,   1, // 738-740
  7,   1,   1, // 741-743
  7,   1,   1, // 744-746
  7,   1,   1, // 747-749
  5,   2,   2, // 750-752
  5,   2,   2, // 753-755
  5,   2, // 756-757
  6,   2,   2, // 758-760
  5,   2,   2, // 761-763
  7,   2, // 764-765
  7,   2, // 766-767
  30,   2,   2, // 768-770
  20,   2,   2, // 771-773
  11,   2,   2, // 774-776
  11,   2,   2, // 777-779
  11,   2,   2, // 780-782
  39,   2,   2, // 783-785
  24,   2,   2, // 786-788
  11,   2,   2,   2, // 789-792
  7,   2, // 793-794
  7,   2, // 795-796
  5,   2,   2,   2, // 797-800
  7,   2,   2, // 801-803
  7,   2, // 804-805
  7,   2, // 806-807
  7,   2, // 808-809
  7,   2, // 810-811
  7,   2, // 812-813
  7,   2, // 814-815
  8,   2,   2, // 816-818
  8,   2,   2, // 819-821
  8,   2,   2, // 822-824
  7,   2, // 825-826
  7,   2, // 827-828
  7,   2, // 829-830
  8,   2, // 831-832
  5,   2, // 833-834
  5,   2,   2, // 835-837
  9,   2, // 838-839
  5, // 840
  11, // 841
  9,   2, // 842-843
  8,   2, // 844-845
  8,   2, // 846-847
  5, // 848
  11,   2,   2, // 849-851
  6,   2, // 852-853
  5, // 854
  8,   2,   2, // 855-857
  8,   2,   2, // 858-860
  9,   2,   2, // 861-863
  8,   2,   2, // 864-866
  7,   2,   2, // 867-869
  7,   2,   2, // 870-872
  6,   2,   2, // 873-875
  5,   2,   2, // 876-878
  5,   2,   2, // 879-881
  6,   2,   2, // 882-884
  7,   2, // 885-886
  7,   2, // 887-888
  7,   2, // 889-890
  7,   2, // 891-892
  7,   2, // 893-894
  7,   2, // 895-896
  6,   2, // 897-898
  11,   2,   2, // 899-901
  11,   2,   2, // 902-904
  8,   2,   2, // 905-907
  8,   2,   2, // 908-910
  8,   2,   2, // 911-913
  8,   2,   2, // 914-916
  8,   2,   2, // 917-919
  7,   2,   2, // 920-922
  7,   2,   2, // 923-925
  20,   2,   2, // 926-928
  20,   2,   2, // 929-931
  30,   2,   2, // 932-934
  30,   2,   2, // 935-937
  20,   2,   2, // 938-940
  30,   2,   2, // 941-943
  6,   2,   2, // 944-946
  5,   2,   2, // 947-949
  6,   2,   2, // 950-952
  5,   2,   2, // 953-955
  5,   2,   2, // 956-958
  5,   2, // 959-960
  5,   2,   2, // 961-963
  5,   2, // 964-965
  39,   2,   2, // 966-968
  24,   2,   2, // 969-971
  24,   2,   2, // 972-974
  39,   2,   2, // 975-977
  11,   2,   2, // 978-980
  11,   2,   2,   2, // 981-984
  11,   2,   2, // 985-987
  11,   2,   2, // 988-990
  8,   2,   2, // 991-993
  8,   2,   2, // 994-996
  8,   2,   2, // 997-999
  8,   2,   2, // 1000-1002
  1,   1,   1, // 1003-1005
  1,   1,   1, // 1006-1008
  3,   1,   1, // 1009-1011
  6,   1,   1, // 1012-1014
  1,   1,   1, // 1015-1017
  3,   1,   1, // 1018-1020
  2,   1,   1, // 1021-1023
  23,   1,   1, // 1024-1026
  15,   1,   1, // 1027-1029
  5,   1,   1, // 1030-1032
  5,   1,   1, // 1033-1035
  8,   1,   1, // 1036-1038
  33,   1,   1, // 1039-1041
  27,   1,   1, // 1042-1044
  5,   1,   1,   1, // 1045-1048
  44,   1,   1, // 1049-1051
  32,   1,   1, // 1052-1054
  1,   1,   1, // 1055-1057
  1,   1,   1,   1, // 1058-1061
  3,   1,   1, // 1062-1064
  2,   2,   1,   1, // 1065-1068
  3,   3,   1,   1, // 1069-1072
  2,   1,   1, // 1073-1075
  3,   1,   1, // 1076-1078
  2,   2,   1,   1, // 1079-1082
  3,   3,   1,   1, // 1083-1086
  3,   1,   1, // 1087-1089
  3,   3,   1,   1, // 1090-1093
  3,   3,   1,   1, // 1094-1097
  3,   1,   1, // 1098-1100
  4,   4,   1,   1, // 1101-1104
  4,   4,   1,   1, // 1105-1108
  2,   1,   1, // 1109-1111
  3,   1,   1, // 1112-1114
  3,   1,   1, // 1115-1117
  3,   1, // 1118-1119
  6,   1, // 1120-1121
  3,   1, // 1122-1123
  2,   1,   1, // 1124-1126
  4,   1, // 1127-1128
  4,   1,   1, // 1129-1131
  4,   1,   1, // 1132-1134
  4,   1,   1, // 1135-1137
  3,   1,   1, // 1138-1140
  1,   1,   1, // 1141-1143
  2,   1,   1,   1, // 1144-1147
  1,   1,   1, // 1148-1150
  1,   1,   1, // 1151-1153
  1,   1,   1, // 1154-1156
  1,   1,   1, // 1157-1159
  1,   1,   1, // 1160-1162
  2,   1,   1,   1, // 1163-1166
  2,   1,   1,   1, // 1167-1170
  1,   1, // 1171-1172
  1,   1, // 1173-1174
  6,   1,   1, // 1175-1177
  6,   1,   1, // 1178-1180
  2,   1,   1, // 1181-1183
  6,   1,   1, // 1184-1186
  3,   1,   1, // 1187-1189
  6,   1,   1, // 1190-1192
  6,   1,   1, // 1193-1195
  2,   1,   1, // 1196-1198
  8,   1,   1, // 1199-1201
  6,   1,   1, // 1202-1204
  2,   1,   1, // 1205-1207
  6,   1,   1, // 1208-1210
  6,   1,   1, // 1211-1213
  6,   1,   1, // 1214-1216
  2,   1,   1, // 1217-1219
  6,   1,   1, // 1220-1222
  6,   1,   1, // 1223-1225
  6,   1,   1, // 1226-1228
  2,   1,   1, // 1229-1231
  3,   1,   1, // 1232-1234
  8,   1,   1, // 1235-1237
  6,   1,   1, // 1238-1240
  6,   1,   1, // 1241-1243
  6,   1,   1, // 1244-1246
  6,   1,   1, // 1247-1249
  3,   1,   1, // 1250-1252
  3,   1,   1, // 1253-1255
  3,   1,   1, // 1256-1258
  3,   1,   1, // 1259-1261
  3,   1,   1, // 1262-1264
  1,   1,   1, // 1265-1267
  1,   1,   1, // 1268-1270
  15,   1,   1, // 1271-1273
  15,   1,   1, // 1274-1276
  23,   1,   1, // 1277-1279
  23,   1,   1, // 1280-1282
  15,   1,   1, // 1283-1285
  23,   1,   1, // 1286-1288
  1,   1,   1, // 1289-1291
  1,   1,   1, // 1292-1294
  3,   1, // 1295-1296
  3,   1,   1, // 1297-1299
  3,   1, // 1300-1301
  3,   1,   1, // 1302-1304
  33,   1,   1, // 1305-1307
  27,   1,   1, // 1308-1310
  27,   1,   1, // 1311-1313
  33,   1,   1, // 1314-1316
  5,   1,   1, // 1317-1319
  5,   1,   1,   1, // 1320-1323
  5,   1,   1, // 1324-1326
  8,   1,   1, // 1327-1329
  3,   3,   1,   1, // 1330-1333
  3,   3,   1,   1, // 1334-1337
  3,   3,   1,   1, // 1338-1341
  3,   3,   1,   1, // 1342-1345
  1,   1,   1, // 1346-1348
  1,   1,   1, // 1349-1351
  3,   1,   1, // 1352-1354
  6,   1,   1, // 1355-1357
  1,   1,   1, // 1358-1360
  3,   1,   1, // 1361-1363
  2,   1,   1, // 1364-1366
  68,   1,   1, // 1367-1369
  36,   1,   1, // 1370-1372
  5,   1,   1, // 1373-1375
  5,   1,   1, // 1376-1378
  8,   1,   1, // 1379-1381
  33,   1,   1, // 1382-1384
  27,   1,   1, // 1385-1387
  5,   1,   1,   1, // 1388-1391
  44,   1,   1, // 1392-1394
  32,   1,   1, // 1395-1397
  1,   1,   1, // 1398-1400
  1,   1,   1,   1, // 1401-1404
  3,   1,   1, // 1405-1407
  2,   2,   1,   1, // 1408-1411
  3,   3,   1,   1, // 1412-1415
  2,   1,   1, // 1416-1418
  3,   1,   1, // 1419-1421
  2,   2,   1,   1, // 1422-1425
  3,   3,   1,   1, // 1426-1429
  3,   1,   1, // 1430-1432
  3,   3,   1,   1, // 1433-1436
  3,   3,   1,   1, // 1437-1440
  3,   1,   1, // 1441-1443
  4,   4,   1,   1, // 1444-1447
  4,   4,   1,   1, // 1448-1451
  2,   1,   1, // 1452-1454
  3,   1,   1, // 1455-1457
  3,   1,   1, // 1458-1460
  3,   1, // 1461-1462
  6,   1, // 1463-1464
  3,   1, // 1465-1466
  2,   1,   1, // 1467-1469
  4,   1, // 1470-1471
  4,   1,   1, // 1472-1474
  4,   1,   1, // 1475-1477
  4,   1,   1, // 1478-1480
  3,   1,   1, // 1481-1483
  1,   1,   1, // 1484-1486
  2,   1,   1,   1, // 1487-1490
  1,   1,   1, // 1491-1493
  1,   1,   1, // 1494-1496
  1,   1,   1, // 1497-1499
  1,   1,   1, // 1500-1502
  1,   1,   1, // 1503-1505
  1,   1,   1, // 1506-1508
  2,   1,   1,   1, // 1509-1512
  2,   1,   1,   1, // 1513-1516
  1,   1, // 1517-1518
  1,   1, // 1519-1520
  6,   1,   1, // 1521-1523
  6,   1,   1, // 1524-1526
  2,   1,   1, // 1527-1529
  6,   1,   1, // 1530-1532
  3,   1,   1, // 1533-1535
  6,   1,   1, // 1536-1538
  6,   1,   1, // 1539-1541
  2,   1,   1, // 1542-1544
  8,   1,   1, // 1545-1547
  6,   1,   1, // 1548-1550
  2,   1,   1, // 1551-1553
  6,   1,   1, // 1554-1556
  6,   1,   1, // 1557-1559
  6,   1,   1, // 1560-1562
  2,   1,   1, // 1563-1565
  6,   1,   1, // 1566-1568
  6,   1,   1, // 1569-1571
  6,   1,   1, // 1572-1574
  2,   1,   1, // 1575-1577
  3,   1,   1, // 1578-1580
  8,   1,   1, // 1581-1583
  6,   1,   1, // 1584-1586
  6,   1,   1, // 1587-1589
  6,   1,   1, // 1590-1592
  6,   1,   1, // 1593-1595
  3,   1,   1, // 1596-1598
  3,   1,   1, // 1599-1601
  3,   1,   1, // 1602-1604
  3,   1,   1, // 1605-1607
  3,   1,   1, // 1608-1610
  1,   1,   1, // 1611-1613
  1,   1,   1, // 1614-1616
  36,   1,   1, // 1617-1619
  36,   1,   1, // 1620-1622
  68,   1,   1, // 1623-1625
  68,   1,   1, // 1626-1628
  36,   1,   1, // 1629-1631
  68,   1,   1, // 1632-1634
  1,   1,   1, // 1635-1637
  1,   1,   1, // 1638-1640
  3,   1, // 1641-1642
  3,   1,   1, // 1643-1645
  3,   1, // 1646-1647
  3,   1,   1, // 1648-1650
  33,   1,   1, // 1651-1653
  27,   1,   1, // 1654-1656
  27,   1,   1, // 1657-1659
  33,   1,   1, // 1660-1662
  5,   1,   1, // 1663-1665
  5,   1,   1,   1, // 1666-1669
  5,   1,   1, // 1670-1672
  8,   1,   1, // 1673-1675
  3,   3,   1,   1, // 1676-1679
  3,   3,   1,   1, // 1680-1683
  3,   3,   1,   1, // 1684-1687
  3,   3,   1,   1, // 1688-1691
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 1-3
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 15-16
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 17-19
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 20-22
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 23-25
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 26-28
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 29-31
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 32-34
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 35-37
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 38-41
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 42-44
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 45-47
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::NoBypass, // 48-51
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 52-54
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 55-58
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 59-62
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 63-65
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 66-69
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 70-73
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 74-76
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 77-79
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 80-82
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 83-85
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 86-88
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 89-91
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 92-93
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 94-95
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 96-98
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 99-100
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 101-102
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 103-104
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 105-106
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 107-109
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 110-111
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 112-113
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 114-116
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 117-119
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 120-122
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 123-125
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 126-129
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 130-131
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 132-134
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 135-137
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 138-140
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 141-144
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 145-147
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 148-150
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 151-154
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 155-158
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 159-160
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 161-163
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 164-166
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 167-169
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 170-172
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 173-175
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 176-178
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 179-181
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 182-184
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 185-187
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 188-190
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 191-193
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 194-196
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 197-199
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 200-202
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 203-205
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 206-208
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 209-211
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 212-214
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 215-217
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 218-220
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 221-223
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 224-227
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 228-230
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 231-233
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 234-237
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 238-241
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 242-245
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 246-249
 0,  0,  0, // 250-252
 0,  0,  0, // 253-255
 0,  0,  0, // 256-258
 0,  0,  0, // 259-261
 0,  0,  0, // 262-264
 0,  0,  0, // 265-267
 0,  0,  0, // 268-270
 0,  0,  0, // 271-273
 0,  0,  0, // 274-276
 0,  0,  0, // 277-279
 0,  0,  0, // 280-282
 0,  0,  0, // 283-285
 0,  0,  0, // 286-288
 0,  0,  0, // 289-291
 0,  0,  0,  0, // 292-295
 0,  0,  0, // 296-298
 0,  0,  0, // 299-301
 0,  0,  0, // 302-304
 0,  0,  0, // 305-307
 0,  0,  0,  0, // 308-311
 0, // 312
 0,  0,  0, // 313-315
 0,  0,  0,  0, // 316-319
 0,  0,  0,  0, // 320-323
 0,  0,  0, // 324-326
 0,  0,  0, // 327-329
 0,  0,  0, // 330-332
 0,  0,  0,  0, // 333-336
 0,  0,  0,  0, // 337-340
 0,  0,  0, // 341-343
 0,  0,  0,  0, // 344-347
 0,  0,  0,  0, // 348-351
 0,  0,  0, // 352-354
 0,  0,  0, // 355-357
 0,  0, // 358-359
 0,  0, // 360-361
 0,  0, // 362-363
 0,  0, // 364-365
 0,  0, // 366-367
 0, // 368
 0,  0, // 369-370
 0,  0, // 371-372
 0,  0,  0, // 373-375
 0,  0,  0, // 376-378
 0,  0,  0, // 379-381
 0,  0,  0, // 382-384
 0,  0,  0,  0, // 385-388
 0, // 389
 0,  0,  0, // 390-392
 0,  0,  0, // 393-395
 0,  0,  0, // 396-398
 0,  0,  0, // 399-401
 0,  0,  0, // 402-404
 0,  0,  0,  0, // 405-408
 0,  0,  0, // 409-411
 0,  0,  0, // 412-414
 0,  0,  0,  0, // 415-418
 0,  0,  0,  0, // 419-422
 0,  0, // 423-424
 0,  0, // 425-426
 0,  0,  0, // 427-429
 0,  0,  0, // 430-432
 0,  0,  0, // 433-435
 0,  0,  0, // 436-438
 0,  0,  0, // 439-441
 0,  0,  0, // 442-444
 0,  0,  0, // 445-447
 0,  0,  0, // 448-450
 0,  0,  0, // 451-453
 0,  0,  0, // 454-456
 0,  0,  0, // 457-459
 0,  0,  0, // 460-462
 0,  0,  0, // 463-465
 0,  0,  0, // 466-468
 0,  0,  0, // 469-471
 0,  0,  0, // 472-474
 0,  0,  0, // 475-477
 0,  0,  0, // 478-480
 0,  0,  0, // 481-483
 0,  0,  0, // 484-486
 0,  0,  0, // 487-489
 0,  0,  0, // 490-492
 0,  0,  0, // 493-495
 0,  0,  0, // 496-498
 0,  0,  0, // 499-501
 0,  0,  0, // 502-504
 0,  0,  0, // 505-507
 0,  0,  0, // 508-510
 0,  0,  0,  0, // 511-514
 0,  0,  0, // 515-517
 0,  0,  0, // 518-520
 0,  0,  0,  0, // 521-524
 0,  0,  0,  0, // 525-528
 0,  0,  0,  0, // 529-532
 0,  0,  0,  0, // 533-536
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 537-539
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 540-542
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 543-544
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 545-547
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 548-550
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 551-552
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 553-554
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 555-557
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 558-560
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 561-563
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 564-566
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 567-569
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 570-572
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 573-576
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 577-578
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 579-580
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 581-584
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 585-587
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 588-589
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 590-591
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 592-594
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 595-597
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 598-600
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 601-602
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 603-604
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 605-606
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 607-608
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 609-610
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 611-613
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 614-615
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 616-617
PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 618
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 619-620
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 621-622
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 623-624
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 625-626
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 627-628
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 629-630
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 631-633
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 634-635
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 636-637
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 638-639
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 640-642
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 643-645
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 646-648
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 649-651
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 652-654
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 655-657
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 658-660
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 661-662
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 663-664
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 665-666
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 667-669
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 670-672
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 673-675
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 676-678
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 679-681
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 682-684
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 685-687
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 688-690
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 691-693
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 694-696
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 697-699
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 700-702
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 703-705
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 706-707
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 708-710
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 711-712
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 713-715
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 716-718
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 719-721
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 722-724
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 725-727
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 728-731
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 732-734
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 735-737
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 738-740
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 741-743
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 744-746
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 747-749
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 750-752
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 753-755
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 756-757
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 758-760
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 761-763
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 764-765
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 766-767
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 768-770
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 771-773
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 774-776
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 777-779
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 780-782
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 783-785
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 786-788
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 789-792
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 793-794
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 795-796
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 797-800
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 801-803
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 804-805
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 806-807
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 808-809
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 810-811
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 812-813
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 814-815
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 816-818
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 819-821
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 822-824
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 825-826
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 827-828
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 829-830
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 831-832
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 833-834
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 835-837
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 838-839
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 840
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 841
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 842-843
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 844-845
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 846-847
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 848
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 849-851
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 852-853
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 854
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 855-857
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 858-860
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 861-863
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 864-866
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 867-869
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 870-872
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 873-875
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 876-878
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 879-881
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 882-884
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 885-886
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 887-888
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 889-890
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 891-892
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 893-894
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 895-896
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 897-898
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 899-901
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 902-904
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 905-907
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 908-910
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 911-913
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 914-916
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 917-919
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 920-922
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 923-925
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 926-928
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 929-931
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 932-934
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 935-937
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 938-940
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 941-943
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 944-946
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 947-949
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 950-952
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 953-955
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 956-958
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 959-960
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 961-963
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 964-965
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 966-968
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 969-971
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 972-974
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 975-977
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 978-980
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 981-984
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 985-987
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 988-990
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 991-993
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 994-996
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 997-999
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1000-1002
 0,  0,  0, // 1003-1005
 0,  0,  0, // 1006-1008
 0,  0,  0, // 1009-1011
 0,  0,  0, // 1012-1014
 0,  0,  0, // 1015-1017
 0,  0,  0, // 1018-1020
 0,  0,  0, // 1021-1023
 0,  0,  0, // 1024-1026
 0,  0,  0, // 1027-1029
 0,  0,  0, // 1030-1032
 0,  0,  0, // 1033-1035
 0,  0,  0, // 1036-1038
 0,  0,  0, // 1039-1041
 0,  0,  0, // 1042-1044
 0,  0,  0,  0, // 1045-1048
 0,  0,  0, // 1049-1051
 0,  0,  0, // 1052-1054
 0,  0,  0, // 1055-1057
 0,  0,  0,  0, // 1058-1061
 0,  0,  0, // 1062-1064
 0,  0,  0,  0, // 1065-1068
 0,  0,  0,  0, // 1069-1072
 0,  0,  0, // 1073-1075
 0,  0,  0, // 1076-1078
 0,  0,  0,  0, // 1079-1082
 0,  0,  0,  0, // 1083-1086
 0,  0,  0, // 1087-1089
 0,  0,  0,  0, // 1090-1093
 0,  0,  0,  0, // 1094-1097
 0,  0,  0, // 1098-1100
 0,  0,  0,  0, // 1101-1104
 0,  0,  0,  0, // 1105-1108
 0,  0,  0, // 1109-1111
 0,  0,  0, // 1112-1114
 0,  0,  0, // 1115-1117
 0,  0, // 1118-1119
 0,  0, // 1120-1121
 0,  0, // 1122-1123
 0,  0,  0, // 1124-1126
 0,  0, // 1127-1128
 0,  0,  0, // 1129-1131
 0,  0,  0, // 1132-1134
 0,  0,  0, // 1135-1137
 0,  0,  0, // 1138-1140
 0,  0,  0, // 1141-1143
 0,  0,  0,  0, // 1144-1147
 0,  0,  0, // 1148-1150
 0,  0,  0, // 1151-1153
 0,  0,  0, // 1154-1156
 0,  0,  0, // 1157-1159
 0,  0,  0, // 1160-1162
 0,  0,  0,  0, // 1163-1166
 0,  0,  0,  0, // 1167-1170
 0,  0, // 1171-1172
 0,  0, // 1173-1174
 0,  0,  0, // 1175-1177
 0,  0,  0, // 1178-1180
 0,  0,  0, // 1181-1183
 0,  0,  0, // 1184-1186
 0,  0,  0, // 1187-1189
 0,  0,  0, // 1190-1192
 0,  0,  0, // 1193-1195
 0,  0,  0, // 1196-1198
 0,  0,  0, // 1199-1201
 0,  0,  0, // 1202-1204
 0,  0,  0, // 1205-1207
 0,  0,  0, // 1208-1210
 0,  0,  0, // 1211-1213
 0,  0,  0, // 1214-1216
 0,  0,  0, // 1217-1219
 0,  0,  0, // 1220-1222
 0,  0,  0, // 1223-1225
 0,  0,  0, // 1226-1228
 0,  0,  0, // 1229-1231
 0,  0,  0, // 1232-1234
 0,  0,  0, // 1235-1237
 0,  0,  0, // 1238-1240
 0,  0,  0, // 1241-1243
 0,  0,  0, // 1244-1246
 0,  0,  0, // 1247-1249
 0,  0,  0, // 1250-1252
 0,  0,  0, // 1253-1255
 0,  0,  0, // 1256-1258
 0,  0,  0, // 1259-1261
 0,  0,  0, // 1262-1264
 0,  0,  0, // 1265-1267
 0,  0,  0, // 1268-1270
 0,  0,  0, // 1271-1273
 0,  0,  0, // 1274-1276
 0,  0,  0, // 1277-1279
 0,  0,  0, // 1280-1282
 0,  0,  0, // 1283-1285
 0,  0,  0, // 1286-1288
 0,  0,  0, // 1289-1291
 0,  0,  0, // 1292-1294
 0,  0, // 1295-1296
 0,  0,  0, // 1297-1299
 0,  0, // 1300-1301
 0,  0,  0, // 1302-1304
 0,  0,  0, // 1305-1307
 0,  0,  0, // 1308-1310
 0,  0,  0, // 1311-1313
 0,  0,  0, // 1314-1316
 0,  0,  0, // 1317-1319
 0,  0,  0,  0, // 1320-1323
 0,  0,  0, // 1324-1326
 0,  0,  0, // 1327-1329
 0,  0,  0,  0, // 1330-1333
 0,  0,  0,  0, // 1334-1337
 0,  0,  0,  0, // 1338-1341
 0,  0,  0,  0, // 1342-1345
 0,  0,  0, // 1346-1348
 0,  0,  0, // 1349-1351
 0,  0,  0, // 1352-1354
 0,  0,  0, // 1355-1357
 0,  0,  0, // 1358-1360
 0,  0,  0, // 1361-1363
 0,  0,  0, // 1364-1366
 0,  0,  0, // 1367-1369
 0,  0,  0, // 1370-1372
 0,  0,  0, // 1373-1375
 0,  0,  0, // 1376-1378
 0,  0,  0, // 1379-1381
 0,  0,  0, // 1382-1384
 0,  0,  0, // 1385-1387
 0,  0,  0,  0, // 1388-1391
 0,  0,  0, // 1392-1394
 0,  0,  0, // 1395-1397
 0,  0,  0, // 1398-1400
 0,  0,  0,  0, // 1401-1404
 0,  0,  0, // 1405-1407
 0,  0,  0,  0, // 1408-1411
 0,  0,  0,  0, // 1412-1415
 0,  0,  0, // 1416-1418
 0,  0,  0, // 1419-1421
 0,  0,  0,  0, // 1422-1425
 0,  0,  0,  0, // 1426-1429
 0,  0,  0, // 1430-1432
 0,  0,  0,  0, // 1433-1436
 0,  0,  0,  0, // 1437-1440
 0,  0,  0, // 1441-1443
 0,  0,  0,  0, // 1444-1447
 0,  0,  0,  0, // 1448-1451
 0,  0,  0, // 1452-1454
 0,  0,  0, // 1455-1457
 0,  0,  0, // 1458-1460
 0,  0, // 1461-1462
 0,  0, // 1463-1464
 0,  0, // 1465-1466
 0,  0,  0, // 1467-1469
 0,  0, // 1470-1471
 0,  0,  0, // 1472-1474
 0,  0,  0, // 1475-1477
 0,  0,  0, // 1478-1480
 0,  0,  0, // 1481-1483
 0,  0,  0, // 1484-1486
 0,  0,  0,  0, // 1487-1490
 0,  0,  0, // 1491-1493
 0,  0,  0, // 1494-1496
 0,  0,  0, // 1497-1499
 0,  0,  0, // 1500-1502
 0,  0,  0, // 1503-1505
 0,  0,  0, // 1506-1508
 0,  0,  0,  0, // 1509-1512
 0,  0,  0,  0, // 1513-1516
 0,  0, // 1517-1518
 0,  0, // 1519-1520
 0,  0,  0, // 1521-1523
 0,  0,  0, // 1524-1526
 0,  0,  0, // 1527-1529
 0,  0,  0, // 1530-1532
 0,  0,  0, // 1533-1535
 0,  0,  0, // 1536-1538
 0,  0,  0, // 1539-1541
 0,  0,  0, // 1542-1544
 0,  0,  0, // 1545-1547
 0,  0,  0, // 1548-1550
 0,  0,  0, // 1551-1553
 0,  0,  0, // 1554-1556
 0,  0,  0, // 1557-1559
 0,  0,  0, // 1560-1562
 0,  0,  0, // 1563-1565
 0,  0,  0, // 1566-1568
 0,  0,  0, // 1569-1571
 0,  0,  0, // 1572-1574
 0,  0,  0, // 1575-1577
 0,  0,  0, // 1578-1580
 0,  0,  0, // 1581-1583
 0,  0,  0, // 1584-1586
 0,  0,  0, // 1587-1589
 0,  0,  0, // 1590-1592
 0,  0,  0, // 1593-1595
 0,  0,  0, // 1596-1598
 0,  0,  0, // 1599-1601
 0,  0,  0, // 1602-1604
 0,  0,  0, // 1605-1607
 0,  0,  0, // 1608-1610
 0,  0,  0, // 1611-1613
 0,  0,  0, // 1614-1616
 0,  0,  0, // 1617-1619
 0,  0,  0, // 1620-1622
 0,  0,  0, // 1623-1625
 0,  0,  0, // 1626-1628
 0,  0,  0, // 1629-1631
 0,  0,  0, // 1632-1634
 0,  0,  0, // 1635-1637
 0,  0,  0, // 1638-1640
 0,  0, // 1641-1642
 0,  0,  0, // 1643-1645
 0,  0, // 1646-1647
 0,  0,  0, // 1648-1650
 0,  0,  0, // 1651-1653
 0,  0,  0, // 1654-1656
 0,  0,  0, // 1657-1659
 0,  0,  0, // 1660-1662
 0,  0,  0, // 1663-1665
 0,  0,  0,  0, // 1666-1669
 0,  0,  0, // 1670-1672
 0,  0,  0, // 1673-1675
 0,  0,  0,  0, // 1676-1679
 0,  0,  0,  0, // 1680-1683
 0,  0,  0,  0, // 1684-1687
 0,  0,  0,  0, // 1688-1691
 0 // End bypass tables
};

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 6, 1, 4 }, // 1 IIC_IntSimple
  { 1, 1, 6, 4, 7 }, // 2 IIC_IntGeneral
  { 1, 6, 11, 7, 9 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 1, 6, 9, 12 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 6, 11, 12, 15 }, // 9 IIC_BrCR
  { 1, 11, 16, 15, 17 }, // 10 IIC_LdStDCBF
  { 1, 16, 21, 17, 20 }, // 11 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 12 IIC_IntDivD
  { 1, 21, 26, 20, 23 }, // 13 IIC_IntDivW
  { 1, 26, 35, 23, 26 }, // 14 IIC_FPGeneral
  { 1, 26, 35, 26, 29 }, // 15 IIC_FPAddSub
  { 1, 26, 35, 29, 32 }, // 16 IIC_FPCompare
  { 1, 35, 44, 32, 35 }, // 17 IIC_FPDivD
  { 1, 44, 53, 35, 38 }, // 18 IIC_FPDivS
  { 1, 26, 35, 38, 42 }, // 19 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 20 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 21 IIC_FPSqrtS
  { 1, 11, 16, 42, 45 }, // 22 IIC_LdStICBI
  { 1, 16, 21, 45, 48 }, // 23 IIC_LdStStore
  { 1, 1, 6, 48, 52 }, // 24 IIC_IntISEL
  { 1, 53, 69, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 69, 76, 52, 55 }, // 26 IIC_LdStLWARX
  { 1, 16, 21, 55, 59 }, // 27 IIC_LdStLoadUpd
  { 1, 16, 21, 59, 63 }, // 28 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 29 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 31 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDUX
  { 1, 16, 21, 63, 66 }, // 33 IIC_LdStLFD
  { 1, 11, 16, 66, 70 }, // 34 IIC_LdStLFDU
  { 1, 11, 16, 70, 74 }, // 35 IIC_LdStLFDUX
  { 1, 11, 16, 74, 77 }, // 36 IIC_LdStLHA
  { 1, 11, 16, 77, 80 }, // 37 IIC_LdStLHAU
  { 1, 11, 16, 80, 83 }, // 38 IIC_LdStLHAUX
  { 1, 11, 16, 83, 86 }, // 39 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 6, 11, 86, 89 }, // 41 IIC_BrMCR
  { 1, 6, 11, 89, 92 }, // 42 IIC_BrMCRX
  { 1, 6, 11, 92, 94 }, // 43 IIC_SprMFCR
  { 1, 76, 81, 94, 96 }, // 44 IIC_SprMFSPR
  { 1, 6, 11, 96, 99 }, // 45 IIC_IntMFFS
  { 1, 6, 11, 99, 101 }, // 46 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 1, 6, 11, 101, 103 }, // 49 IIC_SprMFSR
  { 1, 76, 81, 103, 105 }, // 50 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 81, 86, 0, 0 }, // 53 IIC_LdStSync
  { 1, 76, 81, 105, 107 }, // 54 IIC_SprMTSPR
  { 1, 6, 11, 107, 110 }, // 55 IIC_IntMTFSB0
  { 1, 6, 11, 110, 112 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 1, 76, 81, 112, 114 }, // 59 IIC_SprMTSR
  { 1, 6, 11, 114, 117 }, // 60 IIC_IntMulHW
  { 1, 6, 11, 117, 120 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 6, 11, 120, 123 }, // 63 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 64 IIC_VecPerm
  { 1, 11, 16, 123, 126 }, // 65 IIC_LdStSTFD
  { 1, 11, 16, 126, 130 }, // 66 IIC_LdStSTFDU
  { 1, 6, 11, 130, 132 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 1, 6, 132, 135 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 1, 6, 135, 138 }, // 79 IIC_IntShift
  { 1, 69, 76, 138, 141 }, // 80 IIC_LdStSTWCX
  { 1, 16, 21, 141, 145 }, // 81 IIC_LdStStoreUpd
  { 1, 16, 21, 145, 148 }, // 82 IIC_LdStSTD
  { 1, 69, 76, 148, 151 }, // 83 IIC_LdStSTDCX
  { 1, 16, 21, 151, 155 }, // 84 IIC_LdStSTDU
  { 1, 16, 21, 155, 159 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 6, 11, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 6, 11, 159, 161 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 0, 0, 0, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 0, 0, 0, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 26, 35, 161, 164 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 0, 0, 0, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 0, 0, 0, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 0, 0, 0, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 0, 0, 0, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 26, 35, 164, 167 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 16, 21, 167, 170 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 16, 21, 170, 173 }, // 119 LFIWZX_LFDX_LFD
  { 1, 16, 21, 173, 176 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 16, 21, 176, 179 }, // 121 LFIWAX_LFSX_LFS
  { 1, 16, 21, 179, 182 }, // 122 LXVDSX_LXVW4X
  { 1, 11, 16, 182, 185 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 11, 16, 185, 188 }, // 124 STXVD2X_STXVW4X
  { 1, 21, 26, 188, 191 }, // 125 DIVW_DIVWU
  { 1, 21, 26, 191, 194 }, // 126 DIVWE_DIVWEU
  { 0, 0, 0, 0, 0 }, // 127 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 128 DIVDE_DIVDEU
  { 1, 21, 26, 194, 197 }, // 129 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 130 DIVDEo_DIVDEUo
  { 0, 0, 0, 0, 0 }, // 131 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 132 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 133 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 6, 11, 197, 200 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 6, 11, 200, 203 }, // 136 MCRF
  { 1, 6, 11, 203, 206 }, // 137 MCRXRX
  { 1, 6, 11, 206, 209 }, // 138 MCRFS
  { 1, 35, 44, 209, 212 }, // 139 FDIV_XSDIVDP
  { 1, 44, 53, 212, 215 }, // 140 FDIVS_XSDIVSP
  { 1, 44, 53, 215, 218 }, // 141 XVDIVSP
  { 1, 35, 44, 218, 221 }, // 142 XVDIVDP
  { 1, 26, 35, 221, 224 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 26, 35, 224, 228 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 26, 35, 228, 231 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 26, 35, 231, 234 }, // 146 FCMPUS_FCMPUD
  { 1, 11, 16, 234, 238 }, // 147 LFSU
  { 1, 11, 16, 238, 242 }, // 148 LFSUX
  { 1, 11, 16, 242, 246 }, // 149 LFDU
  { 1, 11, 16, 246, 250 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 86, 87, 0, 0 }, // 1 IIC_IntSimple
  { 1, 86, 87, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 87, 88, 0, 0 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 86, 87, 0, 0 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 88, 89, 0, 0 }, // 9 IIC_BrCR
  { 1, 89, 90, 0, 0 }, // 10 IIC_LdStDCBF
  { 1, 90, 91, 0, 0 }, // 11 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 12 IIC_IntDivD
  { 1, 91, 92, 0, 0 }, // 13 IIC_IntDivW
  { 1, 92, 93, 0, 0 }, // 14 IIC_FPGeneral
  { 1, 92, 93, 0, 0 }, // 15 IIC_FPAddSub
  { 1, 92, 93, 0, 0 }, // 16 IIC_FPCompare
  { 1, 93, 94, 0, 0 }, // 17 IIC_FPDivD
  { 1, 94, 95, 0, 0 }, // 18 IIC_FPDivS
  { 1, 95, 96, 0, 0 }, // 19 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 20 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 21 IIC_FPSqrtS
  { 1, 89, 90, 0, 0 }, // 22 IIC_LdStICBI
  { 1, 90, 91, 0, 0 }, // 23 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 24 IIC_IntISEL
  { 1, 96, 97, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 89, 90, 0, 0 }, // 26 IIC_LdStLWARX
  { 1, 90, 91, 0, 0 }, // 27 IIC_LdStLoadUpd
  { 1, 90, 91, 0, 0 }, // 28 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 29 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 31 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDUX
  { 1, 90, 91, 0, 0 }, // 33 IIC_LdStLFD
  { 1, 90, 91, 0, 0 }, // 34 IIC_LdStLFDU
  { 1, 90, 91, 0, 0 }, // 35 IIC_LdStLFDUX
  { 1, 90, 91, 0, 0 }, // 36 IIC_LdStLHA
  { 1, 90, 91, 0, 0 }, // 37 IIC_LdStLHAU
  { 1, 90, 91, 0, 0 }, // 38 IIC_LdStLHAUX
  { 1, 97, 98, 0, 0 }, // 39 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 88, 89, 0, 0 }, // 41 IIC_BrMCR
  { 1, 88, 89, 0, 0 }, // 42 IIC_BrMCRX
  { 1, 88, 89, 0, 0 }, // 43 IIC_SprMFCR
  { 1, 98, 99, 0, 0 }, // 44 IIC_SprMFSPR
  { 1, 92, 93, 0, 0 }, // 45 IIC_IntMFFS
  { 1, 88, 89, 0, 0 }, // 46 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 1, 98, 99, 0, 0 }, // 49 IIC_SprMFSR
  { 1, 98, 99, 0, 0 }, // 50 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 89, 90, 0, 0 }, // 53 IIC_LdStSync
  { 1, 96, 97, 0, 0 }, // 54 IIC_SprMTSPR
  { 1, 99, 100, 0, 0 }, // 55 IIC_IntMTFSB0
  { 1, 88, 89, 0, 0 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 1, 96, 97, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 100, 101, 0, 0 }, // 60 IIC_IntMulHW
  { 1, 101, 102, 0, 0 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 102, 103, 0, 0 }, // 63 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 64 IIC_VecPerm
  { 1, 90, 91, 0, 0 }, // 65 IIC_LdStSTFD
  { 1, 90, 91, 0, 0 }, // 66 IIC_LdStSTFDU
  { 1, 96, 97, 0, 0 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 86, 87, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 86, 87, 0, 0 }, // 79 IIC_IntShift
  { 1, 103, 104, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 90, 91, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 82 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 83 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 84 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 98, 99, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 104, 105, 0, 0 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 0, 0, 0, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 0, 0, 0, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 92, 93, 0, 0 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 0, 0, 0, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 0, 0, 0, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 0, 0, 0, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 0, 0, 0, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 92, 93, 0, 0 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 90, 91, 0, 0 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 90, 91, 0, 0 }, // 119 LFIWZX_LFDX_LFD
  { 1, 90, 91, 0, 0 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 90, 91, 0, 0 }, // 121 LFIWAX_LFSX_LFS
  { 1, 90, 91, 0, 0 }, // 122 LXVDSX_LXVW4X
  { 1, 90, 91, 0, 0 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 90, 91, 0, 0 }, // 124 STXVD2X_STXVW4X
  { 1, 91, 92, 0, 0 }, // 125 DIVW_DIVWU
  { 1, 91, 92, 0, 0 }, // 126 DIVWE_DIVWEU
  { 0, 0, 0, 0, 0 }, // 127 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 128 DIVDE_DIVDEU
  { 1, 91, 92, 0, 0 }, // 129 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 130 DIVDEo_DIVDEUo
  { 0, 0, 0, 0, 0 }, // 131 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 132 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 133 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 88, 89, 0, 0 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 88, 89, 0, 0 }, // 136 MCRF
  { 1, 88, 89, 0, 0 }, // 137 MCRXRX
  { 1, 88, 89, 0, 0 }, // 138 MCRFS
  { 1, 93, 94, 0, 0 }, // 139 FDIV_XSDIVDP
  { 1, 94, 95, 0, 0 }, // 140 FDIVS_XSDIVSP
  { 1, 94, 95, 0, 0 }, // 141 XVDIVSP
  { 1, 93, 94, 0, 0 }, // 142 XVDIVDP
  { 1, 92, 93, 0, 0 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 95, 96, 0, 0 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 92, 93, 0, 0 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 92, 93, 0, 0 }, // 146 FCMPUS_FCMPUD
  { 1, 90, 91, 0, 0 }, // 147 LFSU
  { 1, 90, 91, 0, 0 }, // 148 LFSUX
  { 1, 90, 91, 0, 0 }, // 149 LFDU
  { 1, 90, 91, 0, 0 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 105, 106, 0, 0 }, // 1 IIC_IntSimple
  { 1, 105, 106, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 106, 107, 0, 0 }, // 3 IIC_BrB
  { 1, 107, 108, 0, 0 }, // 4 IIC_VecFP
  { 1, 105, 106, 0, 0 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 108, 109, 0, 0 }, // 9 IIC_BrCR
  { 1, 109, 110, 0, 0 }, // 10 IIC_LdStDCBF
  { 1, 109, 110, 0, 0 }, // 11 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 12 IIC_IntDivD
  { 1, 110, 111, 0, 0 }, // 13 IIC_IntDivW
  { 1, 111, 112, 0, 0 }, // 14 IIC_FPGeneral
  { 1, 111, 112, 0, 0 }, // 15 IIC_FPAddSub
  { 1, 111, 112, 0, 0 }, // 16 IIC_FPCompare
  { 1, 112, 113, 0, 0 }, // 17 IIC_FPDivD
  { 1, 113, 114, 0, 0 }, // 18 IIC_FPDivS
  { 1, 111, 112, 0, 0 }, // 19 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 20 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 21 IIC_FPSqrtS
  { 1, 109, 110, 0, 0 }, // 22 IIC_LdStICBI
  { 1, 109, 110, 0, 0 }, // 23 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 24 IIC_IntISEL
  { 1, 114, 115, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 115, 116, 0, 0 }, // 26 IIC_LdStLWARX
  { 1, 109, 110, 0, 0 }, // 27 IIC_LdStLoadUpd
  { 1, 109, 110, 0, 0 }, // 28 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 29 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 31 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDUX
  { 1, 109, 110, 0, 0 }, // 33 IIC_LdStLFD
  { 1, 109, 110, 0, 0 }, // 34 IIC_LdStLFDU
  { 1, 109, 110, 0, 0 }, // 35 IIC_LdStLFDUX
  { 1, 109, 110, 0, 0 }, // 36 IIC_LdStLHA
  { 1, 109, 110, 0, 0 }, // 37 IIC_LdStLHAU
  { 1, 109, 110, 0, 0 }, // 38 IIC_LdStLHAUX
  { 1, 116, 117, 0, 0 }, // 39 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 108, 109, 0, 0 }, // 41 IIC_BrMCR
  { 1, 108, 109, 0, 0 }, // 42 IIC_BrMCRX
  { 1, 108, 109, 0, 0 }, // 43 IIC_SprMFCR
  { 1, 117, 118, 0, 0 }, // 44 IIC_SprMFSPR
  { 1, 118, 119, 0, 0 }, // 45 IIC_IntMFFS
  { 1, 108, 109, 0, 0 }, // 46 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 1, 117, 118, 0, 0 }, // 49 IIC_SprMFSR
  { 1, 108, 109, 0, 0 }, // 50 IIC_SprMFTB
  { 1, 119, 120, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 120, 121, 0, 0 }, // 53 IIC_LdStSync
  { 1, 114, 115, 0, 0 }, // 54 IIC_SprMTSPR
  { 1, 118, 119, 0, 0 }, // 55 IIC_IntMTFSB0
  { 1, 108, 109, 0, 0 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 1, 114, 115, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 121, 122, 0, 0 }, // 60 IIC_IntMulHW
  { 1, 122, 123, 0, 0 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 123, 124, 0, 0 }, // 63 IIC_IntMulLI
  { 1, 124, 125, 0, 0 }, // 64 IIC_VecPerm
  { 1, 109, 110, 0, 0 }, // 65 IIC_LdStSTFD
  { 1, 109, 110, 0, 0 }, // 66 IIC_LdStSTFDU
  { 1, 114, 115, 0, 0 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 105, 106, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 105, 106, 0, 0 }, // 79 IIC_IntShift
  { 1, 125, 126, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 109, 110, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 82 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 83 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 84 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 126, 127, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 127, 128, 0, 0 }, // 92 IIC_IntTrapW
  { 1, 119, 120, 0, 0 }, // 93 IIC_VecFPCompare
  { 1, 107, 108, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 1, 119, 120, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 119, 120, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 1, 124, 125, 0, 0 }, // 97 XXSEL
  { 1, 107, 108, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 1, 107, 108, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 1, 119, 120, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 111, 112, 0, 0 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 119, 120, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 119, 120, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 1, 107, 108, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 1, 119, 120, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 1, 107, 108, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 119, 120, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 1, 107, 108, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 107, 108, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 107, 108, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 119, 120, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 124, 125, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 111, 112, 0, 0 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 107, 108, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 107, 108, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 107, 108, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 1, 107, 108, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 109, 110, 0, 0 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 109, 110, 0, 0 }, // 119 LFIWZX_LFDX_LFD
  { 1, 109, 110, 0, 0 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 109, 110, 0, 0 }, // 121 LFIWAX_LFSX_LFS
  { 1, 109, 110, 0, 0 }, // 122 LXVDSX_LXVW4X
  { 1, 109, 110, 0, 0 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 109, 110, 0, 0 }, // 124 STXVD2X_STXVW4X
  { 1, 110, 111, 0, 0 }, // 125 DIVW_DIVWU
  { 1, 110, 111, 0, 0 }, // 126 DIVWE_DIVWEU
  { 0, 0, 0, 0, 0 }, // 127 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 128 DIVDE_DIVDEU
  { 1, 110, 111, 0, 0 }, // 129 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 130 DIVDEo_DIVDEUo
  { 0, 0, 0, 0, 0 }, // 131 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 132 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 133 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 108, 109, 0, 0 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 108, 109, 0, 0 }, // 136 MCRF
  { 1, 108, 109, 0, 0 }, // 137 MCRXRX
  { 1, 108, 109, 0, 0 }, // 138 MCRFS
  { 1, 112, 113, 0, 0 }, // 139 FDIV_XSDIVDP
  { 1, 113, 114, 0, 0 }, // 140 FDIVS_XSDIVSP
  { 1, 113, 114, 0, 0 }, // 141 XVDIVSP
  { 1, 112, 113, 0, 0 }, // 142 XVDIVDP
  { 1, 111, 112, 0, 0 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 111, 112, 0, 0 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 111, 112, 0, 0 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 111, 112, 0, 0 }, // 146 FCMPUS_FCMPUD
  { 1, 109, 110, 0, 0 }, // 147 LFSU
  { 1, 109, 110, 0, 0 }, // 148 LFSUX
  { 1, 109, 110, 0, 0 }, // 149 LFDU
  { 1, 109, 110, 0, 0 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 128, 129, 0, 0 }, // 1 IIC_IntSimple
  { 1, 128, 129, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 129, 130, 0, 0 }, // 3 IIC_BrB
  { 1, 130, 131, 0, 0 }, // 4 IIC_VecFP
  { 1, 128, 129, 0, 0 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 131, 132, 0, 0 }, // 9 IIC_BrCR
  { 1, 132, 133, 0, 0 }, // 10 IIC_LdStDCBF
  { 1, 132, 133, 0, 0 }, // 11 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 12 IIC_IntDivD
  { 1, 133, 134, 0, 0 }, // 13 IIC_IntDivW
  { 1, 134, 135, 0, 0 }, // 14 IIC_FPGeneral
  { 1, 134, 135, 0, 0 }, // 15 IIC_FPAddSub
  { 1, 134, 135, 0, 0 }, // 16 IIC_FPCompare
  { 1, 135, 136, 0, 0 }, // 17 IIC_FPDivD
  { 1, 136, 137, 0, 0 }, // 18 IIC_FPDivS
  { 1, 134, 135, 0, 0 }, // 19 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 20 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 21 IIC_FPSqrtS
  { 1, 137, 138, 0, 0 }, // 22 IIC_LdStICBI
  { 1, 132, 133, 0, 0 }, // 23 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 24 IIC_IntISEL
  { 1, 138, 139, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 132, 133, 0, 0 }, // 26 IIC_LdStLWARX
  { 1, 132, 133, 0, 0 }, // 27 IIC_LdStLoadUpd
  { 1, 132, 133, 0, 0 }, // 28 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 29 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 31 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDUX
  { 1, 139, 140, 0, 0 }, // 33 IIC_LdStLFD
  { 1, 139, 140, 0, 0 }, // 34 IIC_LdStLFDU
  { 1, 139, 140, 0, 0 }, // 35 IIC_LdStLFDUX
  { 1, 132, 133, 0, 0 }, // 36 IIC_LdStLHA
  { 1, 132, 133, 0, 0 }, // 37 IIC_LdStLHAU
  { 1, 132, 133, 0, 0 }, // 38 IIC_LdStLHAUX
  { 1, 140, 141, 0, 0 }, // 39 IIC_LdStLMW
  { 1, 132, 133, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 131, 132, 0, 0 }, // 41 IIC_BrMCR
  { 1, 131, 132, 0, 0 }, // 42 IIC_BrMCRX
  { 1, 131, 132, 0, 0 }, // 43 IIC_SprMFCR
  { 1, 141, 142, 0, 0 }, // 44 IIC_SprMFSPR
  { 1, 134, 135, 0, 0 }, // 45 IIC_IntMFFS
  { 1, 137, 138, 0, 0 }, // 46 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 1, 141, 142, 0, 0 }, // 49 IIC_SprMFSR
  { 1, 142, 143, 0, 0 }, // 50 IIC_SprMFTB
  { 1, 143, 144, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 144, 145, 0, 0 }, // 53 IIC_LdStSync
  { 1, 131, 132, 0, 0 }, // 54 IIC_SprMTSPR
  { 1, 134, 135, 0, 0 }, // 55 IIC_IntMTFSB0
  { 1, 131, 132, 0, 0 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 1, 131, 132, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 141, 142, 0, 0 }, // 60 IIC_IntMulHW
  { 1, 141, 142, 0, 0 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 137, 138, 0, 0 }, // 63 IIC_IntMulLI
  { 1, 145, 146, 0, 0 }, // 64 IIC_VecPerm
  { 1, 132, 133, 0, 0 }, // 65 IIC_LdStSTFD
  { 1, 132, 133, 0, 0 }, // 66 IIC_LdStSTFDU
  { 1, 128, 129, 0, 0 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 128, 129, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 146, 147, 0, 0 }, // 79 IIC_IntShift
  { 1, 132, 133, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 132, 133, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 132, 133, 0, 0 }, // 82 IIC_LdStSTD
  { 1, 132, 133, 0, 0 }, // 83 IIC_LdStSTDCX
  { 1, 132, 133, 0, 0 }, // 84 IIC_LdStSTDU
  { 1, 132, 133, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 132, 133, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 146, 147, 0, 0 }, // 92 IIC_IntTrapW
  { 1, 147, 148, 0, 0 }, // 93 IIC_VecFPCompare
  { 1, 130, 131, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 1, 143, 144, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 147, 148, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 1, 145, 146, 0, 0 }, // 97 XXSEL
  { 1, 130, 131, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 1, 130, 131, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 1, 143, 144, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 134, 135, 0, 0 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 147, 148, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 143, 144, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 1, 130, 131, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 1, 147, 148, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 1, 130, 131, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 143, 144, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 1, 130, 131, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 130, 131, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 130, 131, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 143, 144, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 145, 146, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 134, 135, 0, 0 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 130, 131, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 130, 131, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 130, 131, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 1, 130, 131, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 139, 140, 0, 0 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 139, 140, 0, 0 }, // 119 LFIWZX_LFDX_LFD
  { 1, 139, 140, 0, 0 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 139, 140, 0, 0 }, // 121 LFIWAX_LFSX_LFS
  { 1, 139, 140, 0, 0 }, // 122 LXVDSX_LXVW4X
  { 1, 132, 133, 0, 0 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 132, 133, 0, 0 }, // 124 STXVD2X_STXVW4X
  { 1, 133, 134, 0, 0 }, // 125 DIVW_DIVWU
  { 1, 133, 134, 0, 0 }, // 126 DIVWE_DIVWEU
  { 0, 0, 0, 0, 0 }, // 127 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 128 DIVDE_DIVDEU
  { 1, 133, 134, 0, 0 }, // 129 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 130 DIVDEo_DIVDEUo
  { 0, 0, 0, 0, 0 }, // 131 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 132 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 133 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 131, 132, 0, 0 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 131, 132, 0, 0 }, // 136 MCRF
  { 1, 131, 132, 0, 0 }, // 137 MCRXRX
  { 1, 131, 132, 0, 0 }, // 138 MCRFS
  { 1, 135, 136, 0, 0 }, // 139 FDIV_XSDIVDP
  { 1, 136, 137, 0, 0 }, // 140 FDIVS_XSDIVSP
  { 1, 136, 137, 0, 0 }, // 141 XVDIVSP
  { 1, 135, 136, 0, 0 }, // 142 XVDIVDP
  { 1, 134, 135, 0, 0 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 134, 135, 0, 0 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 134, 135, 0, 0 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 134, 135, 0, 0 }, // 146 FCMPUS_FCMPUD
  { 1, 139, 140, 0, 0 }, // 147 LFSU
  { 1, 139, 140, 0, 0 }, // 148 LFSUX
  { 1, 139, 140, 0, 0 }, // 149 LFDU
  { 1, 139, 140, 0, 0 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 148, 149, 0, 0 }, // 1 IIC_IntSimple
  { 1, 148, 149, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 149, 150, 0, 0 }, // 3 IIC_BrB
  { 1, 150, 151, 0, 0 }, // 4 IIC_VecFP
  { 1, 151, 152, 0, 0 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 152, 153, 0, 0 }, // 9 IIC_BrCR
  { 1, 153, 154, 0, 0 }, // 10 IIC_LdStDCBF
  { 1, 153, 154, 0, 0 }, // 11 IIC_LdStLoad
  { 1, 154, 155, 0, 0 }, // 12 IIC_IntDivD
  { 1, 155, 156, 0, 0 }, // 13 IIC_IntDivW
  { 1, 156, 157, 0, 0 }, // 14 IIC_FPGeneral
  { 1, 156, 157, 0, 0 }, // 15 IIC_FPAddSub
  { 1, 157, 158, 0, 0 }, // 16 IIC_FPCompare
  { 1, 158, 159, 0, 0 }, // 17 IIC_FPDivD
  { 1, 158, 159, 0, 0 }, // 18 IIC_FPDivS
  { 1, 156, 157, 0, 0 }, // 19 IIC_FPFused
  { 1, 159, 160, 0, 0 }, // 20 IIC_FPSqrtD
  { 1, 159, 160, 0, 0 }, // 21 IIC_FPSqrtS
  { 1, 160, 161, 0, 0 }, // 22 IIC_LdStICBI
  { 1, 153, 154, 0, 0 }, // 23 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 24 IIC_IntISEL
  { 1, 160, 161, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 161, 162, 0, 0 }, // 26 IIC_LdStLWARX
  { 1, 153, 154, 0, 0 }, // 27 IIC_LdStLoadUpd
  { 1, 153, 154, 0, 0 }, // 28 IIC_LdStLoadUpdX
  { 1, 153, 154, 0, 0 }, // 29 IIC_LdStLD
  { 1, 161, 162, 0, 0 }, // 30 IIC_LdStLDARX
  { 1, 153, 154, 0, 0 }, // 31 IIC_LdStLDU
  { 1, 153, 154, 0, 0 }, // 32 IIC_LdStLDUX
  { 1, 153, 154, 0, 0 }, // 33 IIC_LdStLFD
  { 1, 162, 163, 0, 0 }, // 34 IIC_LdStLFDU
  { 1, 162, 163, 0, 0 }, // 35 IIC_LdStLFDUX
  { 1, 162, 163, 0, 0 }, // 36 IIC_LdStLHA
  { 1, 162, 163, 0, 0 }, // 37 IIC_LdStLHAU
  { 1, 162, 163, 0, 0 }, // 38 IIC_LdStLHAUX
  { 1, 163, 164, 0, 0 }, // 39 IIC_LdStLMW
  { 1, 162, 163, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 164, 165, 0, 0 }, // 41 IIC_BrMCR
  { 1, 165, 166, 0, 0 }, // 42 IIC_BrMCRX
  { 1, 166, 167, 0, 0 }, // 43 IIC_SprMFCR
  { 1, 167, 168, 0, 0 }, // 44 IIC_SprMFSPR
  { 1, 168, 169, 0, 0 }, // 45 IIC_IntMFFS
  { 1, 167, 168, 0, 0 }, // 46 IIC_SprMFMSR
  { 1, 166, 167, 0, 0 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 1, 153, 154, 0, 0 }, // 49 IIC_SprMFSR
  { 1, 169, 170, 0, 0 }, // 50 IIC_SprMFTB
  { 1, 170, 171, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 171, 172, 0, 0 }, // 53 IIC_LdStSync
  { 1, 172, 173, 0, 0 }, // 54 IIC_SprMTSPR
  { 1, 156, 157, 0, 0 }, // 55 IIC_IntMTFSB0
  { 1, 153, 154, 0, 0 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 1, 153, 154, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 173, 174, 0, 0 }, // 60 IIC_IntMulHW
  { 1, 173, 174, 0, 0 }, // 61 IIC_IntMulHWU
  { 1, 174, 175, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 175, 176, 0, 0 }, // 63 IIC_IntMulLI
  { 1, 176, 177, 0, 0 }, // 64 IIC_VecPerm
  { 1, 177, 178, 0, 0 }, // 65 IIC_LdStSTFD
  { 1, 177, 178, 0, 0 }, // 66 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 67 IIC_SprRFI
  { 1, 178, 179, 0, 0 }, // 68 IIC_IntRFID
  { 1, 148, 149, 0, 0 }, // 69 IIC_IntRotateD
  { 1, 148, 149, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 175, 176, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 148, 149, 0, 0 }, // 79 IIC_IntShift
  { 1, 161, 162, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 153, 154, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 153, 154, 0, 0 }, // 82 IIC_LdStSTD
  { 1, 161, 162, 0, 0 }, // 83 IIC_LdStSTDCX
  { 1, 153, 154, 0, 0 }, // 84 IIC_LdStSTDU
  { 1, 153, 154, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 179, 180, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 153, 154, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 179, 180, 0, 0 }, // 92 IIC_IntTrapW
  { 1, 180, 181, 0, 0 }, // 93 IIC_VecFPCompare
  { 1, 150, 151, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 1, 170, 171, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 180, 181, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 1, 176, 177, 0, 0 }, // 97 XXSEL
  { 1, 150, 151, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 1, 150, 151, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 1, 170, 171, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 157, 158, 0, 0 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 180, 181, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 170, 171, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 1, 150, 151, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 1, 180, 181, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 1, 150, 151, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 170, 171, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 1, 150, 151, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 150, 151, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 150, 151, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 170, 171, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 176, 177, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 157, 158, 0, 0 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 150, 151, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 150, 151, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 150, 151, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 1, 150, 151, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 153, 154, 0, 0 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 153, 154, 0, 0 }, // 119 LFIWZX_LFDX_LFD
  { 1, 153, 154, 0, 0 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 153, 154, 0, 0 }, // 121 LFIWAX_LFSX_LFS
  { 1, 153, 154, 0, 0 }, // 122 LXVDSX_LXVW4X
  { 1, 177, 178, 0, 0 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 177, 178, 0, 0 }, // 124 STXVD2X_STXVW4X
  { 1, 155, 156, 0, 0 }, // 125 DIVW_DIVWU
  { 1, 155, 156, 0, 0 }, // 126 DIVWE_DIVWEU
  { 1, 154, 155, 0, 0 }, // 127 DIVD_DIVDU
  { 1, 154, 155, 0, 0 }, // 128 DIVDE_DIVDEU
  { 1, 155, 156, 0, 0 }, // 129 DIVWEo_DIVWEUo
  { 1, 154, 155, 0, 0 }, // 130 DIVDEo_DIVDEUo
  { 1, 148, 149, 0, 0 }, // 131 SLD_SRD_SRAD
  { 1, 148, 149, 0, 0 }, // 132 SRADI_RLDIC
  { 1, 148, 149, 0, 0 }, // 133 RLDCL_RLDCR
  { 1, 148, 149, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 165, 166, 0, 0 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 164, 165, 0, 0 }, // 136 MCRF
  { 1, 165, 166, 0, 0 }, // 137 MCRXRX
  { 1, 164, 165, 0, 0 }, // 138 MCRFS
  { 1, 158, 159, 0, 0 }, // 139 FDIV_XSDIVDP
  { 1, 158, 159, 0, 0 }, // 140 FDIVS_XSDIVSP
  { 1, 158, 159, 0, 0 }, // 141 XVDIVSP
  { 1, 158, 159, 0, 0 }, // 142 XVDIVDP
  { 1, 156, 157, 0, 0 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 156, 157, 0, 0 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 156, 157, 0, 0 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 157, 158, 0, 0 }, // 146 FCMPUS_FCMPUD
  { 1, 162, 163, 0, 0 }, // 147 LFSU
  { 1, 162, 163, 0, 0 }, // 148 LFSUX
  { 1, 162, 163, 0, 0 }, // 149 LFDU
  { 1, 162, 163, 0, 0 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 181, 182, 250, 253 }, // 1 IIC_IntSimple
  { 1, 181, 182, 253, 256 }, // 2 IIC_IntGeneral
  { 1, 181, 182, 256, 259 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 181, 182, 259, 262 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 181, 182, 262, 265 }, // 9 IIC_BrCR
  { 1, 181, 182, 265, 268 }, // 10 IIC_LdStDCBF
  { 1, 181, 182, 268, 271 }, // 11 IIC_LdStLoad
  { 1, 181, 182, 271, 274 }, // 12 IIC_IntDivD
  { 1, 181, 182, 274, 277 }, // 13 IIC_IntDivW
  { 1, 182, 183, 277, 280 }, // 14 IIC_FPGeneral
  { 1, 182, 183, 280, 283 }, // 15 IIC_FPAddSub
  { 1, 182, 183, 283, 286 }, // 16 IIC_FPCompare
  { 1, 182, 183, 286, 289 }, // 17 IIC_FPDivD
  { 1, 182, 183, 289, 292 }, // 18 IIC_FPDivS
  { 1, 182, 183, 292, 296 }, // 19 IIC_FPFused
  { 1, 182, 183, 296, 299 }, // 20 IIC_FPSqrtD
  { 1, 182, 183, 299, 302 }, // 21 IIC_FPSqrtS
  { 1, 181, 182, 302, 305 }, // 22 IIC_LdStICBI
  { 1, 181, 182, 305, 308 }, // 23 IIC_LdStStore
  { 1, 181, 182, 308, 312 }, // 24 IIC_IntISEL
  { 1, 181, 182, 312, 313 }, // 25 IIC_SprISYNC
  { 1, 181, 182, 313, 316 }, // 26 IIC_LdStLWARX
  { 1, 181, 182, 316, 320 }, // 27 IIC_LdStLoadUpd
  { 1, 181, 182, 320, 324 }, // 28 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 29 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStLDARX
  { 1, 181, 182, 324, 327 }, // 31 IIC_LdStLDU
  { 1, 181, 182, 327, 330 }, // 32 IIC_LdStLDUX
  { 1, 181, 182, 330, 333 }, // 33 IIC_LdStLFD
  { 1, 181, 182, 333, 337 }, // 34 IIC_LdStLFDU
  { 1, 181, 182, 337, 341 }, // 35 IIC_LdStLFDUX
  { 1, 181, 182, 341, 344 }, // 36 IIC_LdStLHA
  { 1, 181, 182, 344, 348 }, // 37 IIC_LdStLHAU
  { 1, 181, 182, 348, 352 }, // 38 IIC_LdStLHAUX
  { 0, 0, 0, 0, 0 }, // 39 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 181, 182, 352, 355 }, // 41 IIC_BrMCR
  { 1, 181, 182, 355, 358 }, // 42 IIC_BrMCRX
  { 1, 181, 182, 358, 360 }, // 43 IIC_SprMFCR
  { 1, 181, 182, 360, 362 }, // 44 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 45 IIC_IntMFFS
  { 1, 181, 182, 362, 364 }, // 46 IIC_SprMFMSR
  { 1, 181, 182, 364, 366 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMFSR
  { 1, 181, 182, 366, 368 }, // 50 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 181, 182, 368, 369 }, // 53 IIC_LdStSync
  { 1, 181, 182, 369, 371 }, // 54 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMTFSB0
  { 1, 181, 182, 371, 373 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 181, 182, 373, 376 }, // 60 IIC_IntMulHW
  { 1, 181, 182, 376, 379 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 181, 182, 379, 382 }, // 63 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 64 IIC_VecPerm
  { 1, 181, 182, 382, 385 }, // 65 IIC_LdStSTFD
  { 1, 181, 182, 385, 389 }, // 66 IIC_LdStSTFDU
  { 1, 181, 182, 389, 390 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 1, 181, 182, 390, 393 }, // 69 IIC_IntRotateD
  { 1, 181, 182, 393, 396 }, // 70 IIC_IntRotateDI
  { 1, 181, 182, 396, 399 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 181, 182, 399, 402 }, // 79 IIC_IntShift
  { 1, 181, 182, 402, 405 }, // 80 IIC_LdStSTWCX
  { 1, 181, 182, 405, 409 }, // 81 IIC_LdStStoreUpd
  { 1, 181, 182, 409, 412 }, // 82 IIC_LdStSTD
  { 1, 181, 182, 412, 415 }, // 83 IIC_LdStSTDCX
  { 1, 181, 182, 415, 419 }, // 84 IIC_LdStSTDU
  { 1, 181, 182, 419, 423 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 181, 182, 423, 425 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 181, 182, 425, 427 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 0, 0, 0, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 0, 0, 0, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 182, 183, 427, 430 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 0, 0, 0, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 0, 0, 0, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 0, 0, 0, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 0, 0, 0, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 182, 183, 430, 433 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 181, 182, 433, 436 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 181, 182, 436, 439 }, // 119 LFIWZX_LFDX_LFD
  { 1, 181, 182, 439, 442 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 181, 182, 442, 445 }, // 121 LFIWAX_LFSX_LFS
  { 1, 181, 182, 445, 448 }, // 122 LXVDSX_LXVW4X
  { 1, 181, 182, 448, 451 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 181, 182, 451, 454 }, // 124 STXVD2X_STXVW4X
  { 1, 181, 182, 454, 457 }, // 125 DIVW_DIVWU
  { 1, 181, 182, 457, 460 }, // 126 DIVWE_DIVWEU
  { 1, 181, 182, 460, 463 }, // 127 DIVD_DIVDU
  { 1, 181, 182, 463, 466 }, // 128 DIVDE_DIVDEU
  { 1, 181, 182, 466, 469 }, // 129 DIVWEo_DIVWEUo
  { 1, 181, 182, 469, 472 }, // 130 DIVDEo_DIVDEUo
  { 1, 181, 182, 472, 475 }, // 131 SLD_SRD_SRAD
  { 1, 181, 182, 475, 478 }, // 132 SRADI_RLDIC
  { 1, 181, 182, 478, 481 }, // 133 RLDCL_RLDCR
  { 1, 181, 182, 481, 484 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 181, 182, 484, 487 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 181, 182, 487, 490 }, // 136 MCRF
  { 1, 181, 182, 490, 493 }, // 137 MCRXRX
  { 1, 181, 182, 493, 496 }, // 138 MCRFS
  { 1, 182, 183, 496, 499 }, // 139 FDIV_XSDIVDP
  { 1, 182, 183, 499, 502 }, // 140 FDIVS_XSDIVSP
  { 1, 182, 183, 502, 505 }, // 141 XVDIVSP
  { 1, 182, 183, 505, 508 }, // 142 XVDIVDP
  { 1, 182, 183, 508, 511 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 182, 183, 511, 515 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 182, 183, 515, 518 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 182, 183, 518, 521 }, // 146 FCMPUS_FCMPUD
  { 1, 181, 182, 521, 525 }, // 147 LFSU
  { 1, 181, 182, 525, 529 }, // 148 LFSUX
  { 1, 181, 182, 529, 533 }, // 149 LFDU
  { 1, 181, 182, 533, 537 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 183, 185, 537, 540 }, // 1 IIC_IntSimple
  { 1, 183, 185, 540, 543 }, // 2 IIC_IntGeneral
  { 1, 185, 187, 543, 545 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 183, 185, 545, 548 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 185, 187, 548, 551 }, // 9 IIC_BrCR
  { 1, 187, 189, 551, 553 }, // 10 IIC_LdStDCBF
  { 1, 187, 189, 553, 555 }, // 11 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 12 IIC_IntDivD
  { 1, 189, 192, 555, 558 }, // 13 IIC_IntDivW
  { 1, 192, 194, 558, 561 }, // 14 IIC_FPGeneral
  { 1, 194, 196, 561, 564 }, // 15 IIC_FPAddSub
  { 1, 192, 194, 564, 567 }, // 16 IIC_FPCompare
  { 1, 196, 198, 567, 570 }, // 17 IIC_FPDivD
  { 1, 198, 200, 570, 573 }, // 18 IIC_FPDivS
  { 1, 194, 196, 573, 577 }, // 19 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 20 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 21 IIC_FPSqrtS
  { 1, 187, 189, 577, 579 }, // 22 IIC_LdStICBI
  { 1, 187, 189, 579, 581 }, // 23 IIC_LdStStore
  { 1, 183, 185, 581, 585 }, // 24 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 200, 202, 585, 588 }, // 26 IIC_LdStLWARX
  { 2, 202, 205, 588, 590 }, // 27 IIC_LdStLoadUpd
  { 2, 202, 205, 590, 592 }, // 28 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 29 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 31 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDUX
  { 1, 187, 189, 592, 595 }, // 33 IIC_LdStLFD
  { 2, 202, 205, 595, 598 }, // 34 IIC_LdStLFDU
  { 2, 202, 205, 598, 601 }, // 35 IIC_LdStLFDUX
  { 1, 187, 189, 601, 603 }, // 36 IIC_LdStLHA
  { 1, 202, 205, 603, 605 }, // 37 IIC_LdStLHAU
  { 1, 202, 205, 605, 607 }, // 38 IIC_LdStLHAUX
  { 1, 187, 189, 607, 609 }, // 39 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 185, 187, 609, 611 }, // 41 IIC_BrMCR
  { 1, 183, 185, 611, 614 }, // 42 IIC_BrMCRX
  { 1, 205, 207, 614, 616 }, // 43 IIC_SprMFCR
  { 1, 183, 185, 616, 618 }, // 44 IIC_SprMFSPR
  { 1, 207, 209, 618, 619 }, // 45 IIC_IntMFFS
  { 1, 209, 211, 619, 621 }, // 46 IIC_SprMFMSR
  { 1, 205, 207, 621, 623 }, // 47 IIC_SprMFCRF
  { 1, 209, 211, 623, 625 }, // 48 IIC_SprMFPMR
  { 1, 209, 211, 625, 627 }, // 49 IIC_SprMFSR
  { 1, 209, 211, 627, 629 }, // 50 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 187, 189, 0, 0 }, // 53 IIC_LdStSync
  { 1, 183, 185, 629, 631 }, // 54 IIC_SprMTSPR
  { 1, 207, 209, 631, 634 }, // 55 IIC_IntMTFSB0
  { 1, 211, 213, 634, 636 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 1, 213, 215, 636, 638 }, // 58 IIC_SprMTPMR
  { 1, 213, 215, 638, 640 }, // 59 IIC_SprMTSR
  { 1, 215, 217, 640, 643 }, // 60 IIC_IntMulHW
  { 1, 215, 217, 643, 646 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 215, 217, 646, 649 }, // 63 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 64 IIC_VecPerm
  { 1, 187, 189, 649, 652 }, // 65 IIC_LdStSTFD
  { 2, 202, 205, 652, 655 }, // 66 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 183, 185, 655, 658 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 183, 185, 658, 661 }, // 79 IIC_IntShift
  { 1, 187, 189, 661, 663 }, // 80 IIC_LdStSTWCX
  { 2, 202, 205, 663, 665 }, // 81 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 82 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 83 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 84 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 217, 219, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 219, 221, 665, 667 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 0, 0, 0, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 0, 0, 0, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 192, 194, 667, 670 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 0, 0, 0, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 0, 0, 0, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 0, 0, 0, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 0, 0, 0, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 192, 194, 670, 673 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 187, 189, 673, 676 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 187, 189, 676, 679 }, // 119 LFIWZX_LFDX_LFD
  { 1, 187, 189, 679, 682 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 187, 189, 682, 685 }, // 121 LFIWAX_LFSX_LFS
  { 1, 187, 189, 685, 688 }, // 122 LXVDSX_LXVW4X
  { 1, 187, 189, 688, 691 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 187, 189, 691, 694 }, // 124 STXVD2X_STXVW4X
  { 1, 189, 192, 694, 697 }, // 125 DIVW_DIVWU
  { 1, 189, 192, 697, 700 }, // 126 DIVWE_DIVWEU
  { 0, 0, 0, 0, 0 }, // 127 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 128 DIVDE_DIVDEU
  { 1, 189, 192, 700, 703 }, // 129 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 130 DIVDEo_DIVDEUo
  { 0, 0, 0, 0, 0 }, // 131 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 132 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 133 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 183, 185, 703, 706 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 185, 187, 706, 708 }, // 136 MCRF
  { 1, 183, 185, 708, 711 }, // 137 MCRXRX
  { 1, 185, 187, 711, 713 }, // 138 MCRFS
  { 1, 196, 198, 713, 716 }, // 139 FDIV_XSDIVDP
  { 1, 198, 200, 716, 719 }, // 140 FDIVS_XSDIVSP
  { 1, 198, 200, 719, 722 }, // 141 XVDIVSP
  { 1, 196, 198, 722, 725 }, // 142 XVDIVDP
  { 1, 192, 194, 725, 728 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 194, 196, 728, 732 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 192, 194, 732, 735 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 192, 194, 735, 738 }, // 146 FCMPUS_FCMPUD
  { 2, 202, 205, 738, 741 }, // 147 LFSU
  { 2, 202, 205, 741, 744 }, // 148 LFSUX
  { 2, 202, 205, 744, 747 }, // 149 LFDU
  { 2, 202, 205, 747, 750 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 221, 223, 750, 753 }, // 1 IIC_IntSimple
  { 1, 221, 223, 753, 756 }, // 2 IIC_IntGeneral
  { 1, 223, 225, 756, 758 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 221, 223, 758, 761 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 223, 225, 761, 764 }, // 9 IIC_BrCR
  { 1, 225, 227, 764, 766 }, // 10 IIC_LdStDCBF
  { 1, 225, 227, 766, 768 }, // 11 IIC_LdStLoad
  { 1, 227, 230, 768, 771 }, // 12 IIC_IntDivD
  { 1, 230, 233, 771, 774 }, // 13 IIC_IntDivW
  { 1, 233, 235, 774, 777 }, // 14 IIC_FPGeneral
  { 1, 233, 235, 777, 780 }, // 15 IIC_FPAddSub
  { 1, 233, 235, 780, 783 }, // 16 IIC_FPCompare
  { 1, 235, 237, 783, 786 }, // 17 IIC_FPDivD
  { 1, 237, 239, 786, 789 }, // 18 IIC_FPDivS
  { 1, 233, 235, 789, 793 }, // 19 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 20 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 21 IIC_FPSqrtS
  { 1, 225, 227, 793, 795 }, // 22 IIC_LdStICBI
  { 1, 225, 227, 795, 797 }, // 23 IIC_LdStStore
  { 1, 221, 223, 797, 801 }, // 24 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 239, 241, 801, 804 }, // 26 IIC_LdStLWARX
  { 2, 241, 244, 804, 806 }, // 27 IIC_LdStLoadUpd
  { 2, 241, 244, 806, 808 }, // 28 IIC_LdStLoadUpdX
  { 1, 225, 227, 808, 810 }, // 29 IIC_LdStLD
  { 1, 239, 241, 810, 812 }, // 30 IIC_LdStLDARX
  { 2, 241, 244, 812, 814 }, // 31 IIC_LdStLDU
  { 2, 241, 244, 814, 816 }, // 32 IIC_LdStLDUX
  { 2, 225, 227, 816, 819 }, // 33 IIC_LdStLFD
  { 2, 241, 244, 819, 822 }, // 34 IIC_LdStLFDU
  { 2, 241, 244, 822, 825 }, // 35 IIC_LdStLFDUX
  { 1, 225, 227, 825, 827 }, // 36 IIC_LdStLHA
  { 2, 241, 244, 827, 829 }, // 37 IIC_LdStLHAU
  { 2, 241, 244, 829, 831 }, // 38 IIC_LdStLHAUX
  { 1, 244, 246, 831, 833 }, // 39 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 40 IIC_LdStLWA
  { 1, 223, 225, 833, 835 }, // 41 IIC_BrMCR
  { 1, 246, 248, 835, 838 }, // 42 IIC_BrMCRX
  { 1, 248, 250, 838, 840 }, // 43 IIC_SprMFCR
  { 1, 246, 248, 840, 841 }, // 44 IIC_SprMFSPR
  { 1, 233, 235, 841, 842 }, // 45 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 46 IIC_SprMFMSR
  { 1, 248, 250, 842, 844 }, // 47 IIC_SprMFCRF
  { 1, 250, 252, 844, 846 }, // 48 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMFSR
  { 1, 250, 252, 846, 848 }, // 50 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 1, 225, 227, 0, 0 }, // 53 IIC_LdStSync
  { 1, 246, 248, 848, 849 }, // 54 IIC_SprMTSPR
  { 1, 252, 254, 849, 852 }, // 55 IIC_IntMTFSB0
  { 1, 254, 256, 852, 854 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 1, 246, 248, 854, 855 }, // 58 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 256, 259, 855, 858 }, // 60 IIC_IntMulHW
  { 1, 256, 259, 858, 861 }, // 61 IIC_IntMulHWU
  { 1, 259, 262, 861, 864 }, // 62 IIC_IntMulHD
  { 1, 259, 262, 864, 867 }, // 63 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 64 IIC_VecPerm
  { 1, 225, 227, 867, 870 }, // 65 IIC_LdStSTFD
  { 2, 241, 244, 870, 873 }, // 66 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 1, 262, 264, 873, 876 }, // 69 IIC_IntRotateD
  { 1, 221, 223, 876, 879 }, // 70 IIC_IntRotateDI
  { 1, 221, 223, 879, 882 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 262, 264, 882, 885 }, // 79 IIC_IntShift
  { 1, 225, 227, 885, 887 }, // 80 IIC_LdStSTWCX
  { 2, 241, 244, 887, 889 }, // 81 IIC_LdStStoreUpd
  { 1, 225, 227, 889, 891 }, // 82 IIC_LdStSTD
  { 1, 225, 227, 891, 893 }, // 83 IIC_LdStSTDCX
  { 2, 241, 244, 893, 895 }, // 84 IIC_LdStSTDU
  { 2, 241, 244, 895, 897 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 264, 266, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 266, 268, 897, 899 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 0, 0, 0, 0, 0 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 0, 0, 0, 0, 0 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 233, 235, 899, 902 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 0, 0, 0, 0, 0 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 0, 0, 0, 0, 0 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 0, 0, 0, 0, 0 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 107 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 0, 0, 0, 0, 0 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 233, 235, 902, 905 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 116 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 117 XSSQRTQP_XSSQRTQPO
  { 2, 225, 227, 905, 908 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 2, 225, 227, 908, 911 }, // 119 LFIWZX_LFDX_LFD
  { 2, 225, 227, 911, 914 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 2, 225, 227, 914, 917 }, // 121 LFIWAX_LFSX_LFS
  { 2, 225, 227, 917, 920 }, // 122 LXVDSX_LXVW4X
  { 1, 225, 227, 920, 923 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 225, 227, 923, 926 }, // 124 STXVD2X_STXVW4X
  { 1, 230, 233, 926, 929 }, // 125 DIVW_DIVWU
  { 1, 230, 233, 929, 932 }, // 126 DIVWE_DIVWEU
  { 1, 227, 230, 932, 935 }, // 127 DIVD_DIVDU
  { 1, 227, 230, 935, 938 }, // 128 DIVDE_DIVDEU
  { 1, 230, 233, 938, 941 }, // 129 DIVWEo_DIVWEUo
  { 1, 227, 230, 941, 944 }, // 130 DIVDEo_DIVDEUo
  { 1, 262, 264, 944, 947 }, // 131 SLD_SRD_SRAD
  { 1, 221, 223, 947, 950 }, // 132 SRADI_RLDIC
  { 1, 262, 264, 950, 953 }, // 133 RLDCL_RLDCR
  { 1, 221, 223, 953, 956 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 246, 248, 956, 959 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 223, 225, 959, 961 }, // 136 MCRF
  { 1, 246, 248, 961, 964 }, // 137 MCRXRX
  { 1, 223, 225, 964, 966 }, // 138 MCRFS
  { 1, 235, 237, 966, 969 }, // 139 FDIV_XSDIVDP
  { 1, 237, 239, 969, 972 }, // 140 FDIVS_XSDIVSP
  { 1, 237, 239, 972, 975 }, // 141 XVDIVSP
  { 1, 235, 237, 975, 978 }, // 142 XVDIVDP
  { 1, 233, 235, 978, 981 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 233, 235, 981, 985 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 233, 235, 985, 988 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 233, 235, 988, 991 }, // 146 FCMPUS_FCMPUD
  { 2, 241, 244, 991, 994 }, // 147 LFSU
  { 2, 241, 244, 994, 997 }, // 148 LFSUX
  { 2, 241, 244, 997, 1000 }, // 149 LFDU
  { 2, 241, 244, 1000, 1003 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P8Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 268, 270, 1003, 1006 }, // 1 IIC_IntSimple
  { 1, 268, 270, 1006, 1009 }, // 2 IIC_IntGeneral
  { 1, 270, 272, 1009, 1012 }, // 3 IIC_BrB
  { 1, 272, 274, 1012, 1015 }, // 4 IIC_VecFP
  { 1, 274, 276, 1015, 1018 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 276, 278, 1018, 1021 }, // 9 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 10 IIC_LdStDCBF
  { 1, 278, 280, 1021, 1024 }, // 11 IIC_LdStLoad
  { 1, 280, 282, 1024, 1027 }, // 12 IIC_IntDivD
  { 1, 282, 284, 1027, 1030 }, // 13 IIC_IntDivW
  { 1, 284, 286, 1030, 1033 }, // 14 IIC_FPGeneral
  { 1, 284, 286, 1033, 1036 }, // 15 IIC_FPAddSub
  { 1, 284, 286, 1036, 1039 }, // 16 IIC_FPCompare
  { 1, 284, 286, 1039, 1042 }, // 17 IIC_FPDivD
  { 1, 284, 286, 1042, 1045 }, // 18 IIC_FPDivS
  { 1, 284, 286, 1045, 1049 }, // 19 IIC_FPFused
  { 1, 284, 286, 1049, 1052 }, // 20 IIC_FPSqrtD
  { 1, 284, 286, 1052, 1055 }, // 21 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStICBI
  { 1, 286, 289, 1055, 1058 }, // 23 IIC_LdStStore
  { 1, 289, 292, 1058, 1062 }, // 24 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 292, 297, 1062, 1065 }, // 26 IIC_LdStLWARX
  { 1, 297, 301, 1065, 1069 }, // 27 IIC_LdStLoadUpd
  { 1, 297, 301, 1069, 1073 }, // 28 IIC_LdStLoadUpdX
  { 1, 278, 280, 1073, 1076 }, // 29 IIC_LdStLD
  { 1, 301, 308, 1076, 1079 }, // 30 IIC_LdStLDARX
  { 1, 297, 301, 1079, 1083 }, // 31 IIC_LdStLDU
  { 1, 297, 301, 1083, 1087 }, // 32 IIC_LdStLDUX
  { 1, 308, 310, 1087, 1090 }, // 33 IIC_LdStLFD
  { 1, 310, 314, 1090, 1094 }, // 34 IIC_LdStLFDU
  { 1, 310, 314, 1094, 1098 }, // 35 IIC_LdStLFDUX
  { 1, 314, 318, 1098, 1101 }, // 36 IIC_LdStLHA
  { 1, 318, 323, 1101, 1105 }, // 37 IIC_LdStLHAU
  { 1, 323, 332, 1105, 1109 }, // 38 IIC_LdStLHAUX
  { 1, 278, 280, 1109, 1112 }, // 39 IIC_LdStLMW
  { 1, 332, 336, 1112, 1115 }, // 40 IIC_LdStLWA
  { 1, 336, 338, 1115, 1118 }, // 41 IIC_BrMCR
  { 1, 338, 340, 1118, 1120 }, // 42 IIC_BrMCRX
  { 1, 276, 278, 1120, 1122 }, // 43 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 44 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 45 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 46 IIC_SprMFMSR
  { 1, 276, 278, 1122, 1124 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMFTB
  { 1, 272, 274, 1124, 1127 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 0, 0, 0, 0, 0 }, // 53 IIC_LdStSync
  { 1, 338, 340, 1127, 1129 }, // 54 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 274, 276, 1129, 1132 }, // 60 IIC_IntMulHW
  { 1, 274, 276, 1132, 1135 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 274, 276, 1135, 1138 }, // 63 IIC_IntMulLI
  { 1, 340, 342, 1138, 1141 }, // 64 IIC_VecPerm
  { 1, 342, 345, 1141, 1144 }, // 65 IIC_LdStSTFD
  { 1, 345, 350, 1144, 1148 }, // 66 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 1, 274, 276, 1148, 1151 }, // 69 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 274, 276, 1151, 1154 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 274, 276, 1154, 1157 }, // 79 IIC_IntShift
  { 1, 350, 358, 1157, 1160 }, // 80 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 358, 361, 0, 0 }, // 82 IIC_LdStSTD
  { 1, 350, 358, 1160, 1163 }, // 83 IIC_LdStSTDCX
  { 1, 361, 365, 1163, 1167 }, // 84 IIC_LdStSTDU
  { 1, 365, 374, 1167, 1171 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 274, 276, 1171, 1173 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 274, 276, 1173, 1175 }, // 92 IIC_IntTrapW
  { 1, 272, 274, 1175, 1178 }, // 93 IIC_VecFPCompare
  { 1, 272, 274, 1178, 1181 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 1, 272, 274, 1181, 1184 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 272, 274, 1184, 1187 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 1, 340, 342, 1187, 1190 }, // 97 XXSEL
  { 1, 272, 274, 1190, 1193 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 1, 272, 274, 1193, 1196 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 1, 272, 274, 1196, 1199 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 284, 286, 1199, 1202 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 272, 274, 1202, 1205 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 272, 274, 1205, 1208 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 1, 272, 274, 1208, 1211 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 1, 272, 274, 1211, 1214 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 1, 272, 274, 1214, 1217 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 272, 274, 1217, 1220 }, // 107 VSUBFP_VMULUWM
  { 1, 272, 274, 1220, 1223 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 272, 274, 1223, 1226 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 272, 274, 1226, 1229 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 272, 274, 1229, 1232 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 340, 342, 1232, 1235 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 284, 286, 1235, 1238 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 272, 274, 1238, 1241 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 272, 274, 1241, 1244 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 272, 274, 1244, 1247 }, // 116 XSDIVQP_XSDIVQPO
  { 1, 272, 274, 1247, 1250 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 308, 310, 1250, 1253 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 308, 310, 1253, 1256 }, // 119 LFIWZX_LFDX_LFD
  { 1, 308, 310, 1256, 1259 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 308, 310, 1259, 1262 }, // 121 LFIWAX_LFSX_LFS
  { 1, 308, 310, 1262, 1265 }, // 122 LXVDSX_LXVW4X
  { 1, 342, 345, 1265, 1268 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 342, 345, 1268, 1271 }, // 124 STXVD2X_STXVW4X
  { 1, 282, 284, 1271, 1274 }, // 125 DIVW_DIVWU
  { 1, 282, 284, 1274, 1277 }, // 126 DIVWE_DIVWEU
  { 1, 280, 282, 1277, 1280 }, // 127 DIVD_DIVDU
  { 1, 280, 282, 1280, 1283 }, // 128 DIVDE_DIVDEU
  { 1, 282, 284, 1283, 1286 }, // 129 DIVWEo_DIVWEUo
  { 1, 280, 282, 1286, 1289 }, // 130 DIVDEo_DIVDEUo
  { 1, 274, 276, 1289, 1292 }, // 131 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 132 SRADI_RLDIC
  { 1, 274, 276, 1292, 1295 }, // 133 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 338, 340, 1295, 1297 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 336, 338, 1297, 1300 }, // 136 MCRF
  { 1, 338, 340, 1300, 1302 }, // 137 MCRXRX
  { 1, 336, 338, 1302, 1305 }, // 138 MCRFS
  { 1, 284, 286, 1305, 1308 }, // 139 FDIV_XSDIVDP
  { 1, 284, 286, 1308, 1311 }, // 140 FDIVS_XSDIVSP
  { 1, 284, 286, 1311, 1314 }, // 141 XVDIVSP
  { 1, 284, 286, 1314, 1317 }, // 142 XVDIVDP
  { 1, 284, 286, 1317, 1320 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 284, 286, 1320, 1324 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 284, 286, 1324, 1327 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 284, 286, 1327, 1330 }, // 146 FCMPUS_FCMPUD
  { 1, 310, 314, 1330, 1334 }, // 147 LFSU
  { 1, 310, 314, 1334, 1338 }, // 148 LFSUX
  { 1, 310, 314, 1338, 1342 }, // 149 LFDU
  { 1, 310, 314, 1342, 1346 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P7Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 374, 376, 1346, 1349 }, // 1 IIC_IntSimple
  { 1, 376, 378, 1349, 1352 }, // 2 IIC_IntGeneral
  { 1, 378, 380, 1352, 1355 }, // 3 IIC_BrB
  { 1, 380, 382, 1355, 1358 }, // 4 IIC_VecFP
  { 1, 376, 378, 1358, 1361 }, // 5 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 6 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStPASTE
  { 1, 382, 384, 1361, 1364 }, // 9 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 10 IIC_LdStDCBF
  { 1, 384, 386, 1364, 1367 }, // 11 IIC_LdStLoad
  { 1, 386, 389, 1367, 1370 }, // 12 IIC_IntDivD
  { 1, 389, 392, 1370, 1373 }, // 13 IIC_IntDivW
  { 1, 392, 394, 1373, 1376 }, // 14 IIC_FPGeneral
  { 1, 392, 394, 1376, 1379 }, // 15 IIC_FPAddSub
  { 1, 392, 394, 1379, 1382 }, // 16 IIC_FPCompare
  { 1, 392, 394, 1382, 1385 }, // 17 IIC_FPDivD
  { 1, 392, 394, 1385, 1388 }, // 18 IIC_FPDivS
  { 1, 392, 394, 1388, 1392 }, // 19 IIC_FPFused
  { 1, 392, 394, 1392, 1395 }, // 20 IIC_FPSqrtD
  { 1, 392, 394, 1395, 1398 }, // 21 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStICBI
  { 1, 394, 397, 1398, 1401 }, // 23 IIC_LdStStore
  { 1, 397, 400, 1401, 1405 }, // 24 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 25 IIC_SprISYNC
  { 1, 400, 405, 1405, 1408 }, // 26 IIC_LdStLWARX
  { 1, 405, 409, 1408, 1412 }, // 27 IIC_LdStLoadUpd
  { 1, 409, 416, 1412, 1416 }, // 28 IIC_LdStLoadUpdX
  { 1, 384, 386, 1416, 1419 }, // 29 IIC_LdStLD
  { 1, 400, 405, 1419, 1422 }, // 30 IIC_LdStLDARX
  { 1, 405, 409, 1422, 1426 }, // 31 IIC_LdStLDU
  { 1, 409, 416, 1426, 1430 }, // 32 IIC_LdStLDUX
  { 1, 384, 386, 1430, 1433 }, // 33 IIC_LdStLFD
  { 1, 405, 409, 1433, 1437 }, // 34 IIC_LdStLFDU
  { 1, 405, 409, 1437, 1441 }, // 35 IIC_LdStLFDUX
  { 1, 416, 420, 1441, 1444 }, // 36 IIC_LdStLHA
  { 1, 420, 425, 1444, 1448 }, // 37 IIC_LdStLHAU
  { 1, 425, 433, 1448, 1452 }, // 38 IIC_LdStLHAUX
  { 1, 384, 386, 1452, 1455 }, // 39 IIC_LdStLMW
  { 1, 416, 420, 1455, 1458 }, // 40 IIC_LdStLWA
  { 1, 378, 380, 1458, 1461 }, // 41 IIC_BrMCR
  { 1, 433, 439, 1461, 1463 }, // 42 IIC_BrMCRX
  { 1, 382, 384, 1463, 1465 }, // 43 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 44 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 45 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 46 IIC_SprMFMSR
  { 1, 382, 384, 1465, 1467 }, // 47 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMFTB
  { 1, 439, 441, 1467, 1470 }, // 51 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMSGSYNC
  { 0, 0, 0, 0, 0 }, // 53 IIC_LdStSync
  { 1, 441, 443, 1470, 1472 }, // 54 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTSR
  { 1, 376, 378, 1472, 1475 }, // 60 IIC_IntMulHW
  { 1, 376, 378, 1475, 1478 }, // 61 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 62 IIC_IntMulHD
  { 1, 376, 378, 1478, 1481 }, // 63 IIC_IntMulLI
  { 1, 443, 445, 1481, 1484 }, // 64 IIC_VecPerm
  { 1, 445, 448, 1484, 1487 }, // 65 IIC_LdStSTFD
  { 1, 448, 453, 1487, 1491 }, // 66 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 67 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 68 IIC_IntRFID
  { 1, 376, 378, 1491, 1494 }, // 69 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateDI
  { 1, 376, 378, 1494, 1497 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 376, 378, 1497, 1500 }, // 79 IIC_IntShift
  { 1, 400, 405, 1500, 1503 }, // 80 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 394, 397, 1503, 1506 }, // 82 IIC_LdStSTD
  { 1, 400, 405, 1506, 1509 }, // 83 IIC_LdStSTDCX
  { 1, 420, 425, 1509, 1513 }, // 84 IIC_LdStSTDU
  { 1, 453, 460, 1513, 1517 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 376, 378, 1517, 1519 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 376, 378, 1519, 1521 }, // 92 IIC_IntTrapW
  { 1, 380, 382, 1521, 1524 }, // 93 IIC_VecFPCompare
  { 1, 380, 382, 1524, 1527 }, // 94 VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP
  { 1, 439, 441, 1527, 1530 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 380, 382, 1530, 1533 }, // 96 VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo
  { 1, 443, 445, 1533, 1536 }, // 97 XXSEL
  { 1, 380, 382, 1536, 1539 }, // 98 XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP
  { 1, 380, 382, 1539, 1542 }, // 99 VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP
  { 1, 439, 441, 1542, 1545 }, // 100 VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD
  { 1, 392, 394, 1545, 1548 }, // 101 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 380, 382, 1548, 1551 }, // 102 XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 439, 441, 1551, 1554 }, // 103 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW
  { 1, 380, 382, 1554, 1557 }, // 104 VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP
  { 1, 380, 382, 1557, 1560 }, // 105 VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo
  { 1, 380, 382, 1560, 1563 }, // 106 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 439, 441, 1563, 1566 }, // 107 VSUBFP_VMULUWM
  { 1, 380, 382, 1566, 1569 }, // 108 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 380, 382, 1569, 1572 }, // 109 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 380, 382, 1572, 1575 }, // 110 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 439, 441, 1575, 1578 }, // 111 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 443, 445, 1578, 1581 }, // 112 VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW
  { 1, 392, 394, 1581, 1584 }, // 113 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 380, 382, 1584, 1587 }, // 114 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 380, 382, 1587, 1590 }, // 115 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 380, 382, 1590, 1593 }, // 116 XSDIVQP_XSDIVQPO
  { 1, 380, 382, 1593, 1596 }, // 117 XSSQRTQP_XSSQRTQPO
  { 1, 384, 386, 1596, 1599 }, // 118 LXSDX_LXVD2X_LXSIWZX_LXV_LXSD
  { 1, 384, 386, 1599, 1602 }, // 119 LFIWZX_LFDX_LFD
  { 1, 384, 386, 1602, 1605 }, // 120 LXSSPX_LXSIWAX_LXSSP
  { 1, 384, 386, 1605, 1608 }, // 121 LFIWAX_LFSX_LFS
  { 1, 384, 386, 1608, 1611 }, // 122 LXVDSX_LXVW4X
  { 1, 445, 448, 1611, 1614 }, // 123 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 1, 445, 448, 1614, 1617 }, // 124 STXVD2X_STXVW4X
  { 1, 389, 392, 1617, 1620 }, // 125 DIVW_DIVWU
  { 1, 389, 392, 1620, 1623 }, // 126 DIVWE_DIVWEU
  { 1, 386, 389, 1623, 1626 }, // 127 DIVD_DIVDU
  { 1, 386, 389, 1626, 1629 }, // 128 DIVDE_DIVDEU
  { 1, 389, 392, 1629, 1632 }, // 129 DIVWEo_DIVWEUo
  { 1, 386, 389, 1632, 1635 }, // 130 DIVDEo_DIVDEUo
  { 1, 376, 378, 1635, 1638 }, // 131 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 132 SRADI_RLDIC
  { 1, 376, 378, 1638, 1641 }, // 133 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 134 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 433, 439, 1641, 1643 }, // 135 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 378, 380, 1643, 1646 }, // 136 MCRF
  { 1, 433, 439, 1646, 1648 }, // 137 MCRXRX
  { 1, 378, 380, 1648, 1651 }, // 138 MCRFS
  { 1, 392, 394, 1651, 1654 }, // 139 FDIV_XSDIVDP
  { 1, 392, 394, 1654, 1657 }, // 140 FDIVS_XSDIVSP
  { 1, 392, 394, 1657, 1660 }, // 141 XVDIVSP
  { 1, 392, 394, 1660, 1663 }, // 142 XVDIVDP
  { 1, 392, 394, 1663, 1666 }, // 143 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 392, 394, 1666, 1670 }, // 144 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 392, 394, 1670, 1673 }, // 145 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 392, 394, 1673, 1676 }, // 146 FCMPUS_FCMPUD
  { 1, 405, 409, 1676, 1680 }, // 147 LFSU
  { 1, 405, 409, 1680, 1684 }, // 148 LFSUX
  { 1, 405, 409, 1684, 1688 }, // 149 LFDU
  { 1, 405, 409, 1688, 1692 }, // 150 LFDUX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 4,  1}, // #1
  { 5,  2}, // #2
  {11,  1}, // #3
  {16, 62}, // #4
  { 1,  1}, // #5
  { 5,  2}, // #6
  {11,  1}, // #7
  {16,  1}, // #8
  { 1,  1}, // #9
  { 5,  3}, // #10
  {11,  1}, // #11
  {16,  1}, // #12
  { 5,  2}, // #13
  {11,  1}, // #14
  {14,  1}, // #15
  { 5,  3}, // #16
  { 7,  1}, // #17
  {11,  1}, // #18
  {16,  1}, // #19
  { 7, 10}, // #20
  {11,  1}, // #21
  {16, 10}, // #22
  { 7, 10}, // #23
  {11,  2}, // #24
  {16, 10}, // #25
  { 5,  3}, // #26
  {10,  1}, // #27
  {11,  1}, // #28
  {14,  1}, // #29
  { 1,  1}, // #30
  { 5,  4}, // #31
  {11,  2}, // #32
  {14,  1}, // #33
  {16,  1}, // #34
  { 1,  1}, // #35
  { 5,  4}, // #36
  {11,  2}, // #37
  {12,  1}, // #38
  {13,  1}, // #39
  {14,  1}, // #40
  {16,  1}, // #41
  { 1,  1}, // #42
  { 5,  4}, // #43
  {10,  1}, // #44
  {11,  1}, // #45
  {14,  1}, // #46
  {16,  1}, // #47
  { 1,  2}, // #48
  { 5,  6}, // #49
  {10,  1}, // #50
  {11,  2}, // #51
  {14,  1}, // #52
  {16,  2}, // #53
  { 1,  3}, // #54
  { 5,  9}, // #55
  {11,  3}, // #56
  {16,  3}, // #57
  { 1,  1}, // #58
  { 5,  3}, // #59
  {10,  1}, // #60
  {11,  1}, // #61
  {14,  1}, // #62
  {16,  1}, // #63
  { 1,  1}, // #64
  { 5,  5}, // #65
  {10,  1}, // #66
  {11,  2}, // #67
  {14,  1}, // #68
  {16,  1}, // #69
  { 1,  2}, // #70
  { 2,  1}, // #71
  { 3,  1}, // #72
  { 5,  2}, // #73
  {11,  2}, // #74
  {12,  1}, // #75
  {13,  1}, // #76
  { 5,  2}, // #77
  { 7,  2}, // #78
  { 8,  1}, // #79
  { 9,  1}, // #80
  {11,  2}, // #81
  {12,  1}, // #82
  {13,  1}, // #83
  { 5,  2}, // #84
  { 7,  1}, // #85
  {11,  1}, // #86
  {16,  1}, // #87
  { 5,  2}, // #88
  {11,  2}, // #89
  {12,  1}, // #90
  {13,  1}, // #91
  {15,  1}, // #92
  { 4,  1}, // #93
  { 5,  2}, // #94
  {11,  2}, // #95
  {12,  1}, // #96
  {13,  1}, // #97
  { 4, 12}, // #98
  { 5,  2}, // #99
  {11,  2}, // #100
  {12,  1}, // #101
  {13,  1}, // #102
  { 4, 44}, // #103
  { 5,  2}, // #104
  {11,  2}, // #105
  {12,  1}, // #106
  {13,  1}, // #107
  { 4,  1}, // #108
  { 5,  2}, // #109
  {11,  2}, // #110
  {12,  1}, // #111
  {13,  1}, // #112
  {16, 62}, // #113
  { 5,  2}, // #114
  {10,  1}, // #115
  {14,  1}, // #116
  { 5,  3}, // #117
  {10,  1}, // #118
  {14,  1}, // #119
  { 1,  1}, // #120
  { 5,  6}, // #121
  {10,  1}, // #122
  {11,  1}, // #123
  {14,  1}, // #124
  {16,  1}, // #125
  { 5,  2}, // #126
  {10,  1}, // #127
  {11,  1}, // #128
  {14,  1}, // #129
  {15,  1}, // #130
  { 5,  2}, // #131
  {10,  1}, // #132
  {11,  2}, // #133
  {14,  1}, // #134
  { 5,  2}, // #135
  { 6,  8}, // #136
  {11,  1}, // #137
  {12,  1}, // #138
  { 1,  1}, // #139
  { 5,  4}, // #140
  { 6,  8}, // #141
  {11,  2}, // #142
  {12,  1}, // #143
  {16,  1}, // #144
  { 1,  2}, // #145
  { 5,  6}, // #146
  {11,  2}, // #147
  {16,  2}, // #148
  { 1,  2}, // #149
  { 5,  4}, // #150
  {11,  2}, // #151
  {16,  2}, // #152
  { 5,  3}, // #153
  { 7,  8}, // #154
  {11,  1}, // #155
  {16,  8}, // #156
  { 5,  3}, // #157
  { 7,  5}, // #158
  {11,  1}, // #159
  {16,  5}, // #160
  { 5,  2}, // #161
  { 7,  8}, // #162
  {11,  2}, // #163
  {12,  1}, // #164
  {13,  1}, // #165
  {16,  8}, // #166
  { 1,  2}, // #167
  { 5,  8}, // #168
  {10,  1}, // #169
  {11,  2}, // #170
  {14,  1}, // #171
  {16,  2}, // #172
  { 1,  1}, // #173
  { 5,  5}, // #174
  {10,  1}, // #175
  {11,  1}, // #176
  {14,  1}, // #177
  {16,  1} // #178
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  {76,  0}, // #1 P9_DFU_76C
  { 1,  0}, // #2 IP_EXEC_1C
  { 1,  0}, // #3 DISP_1C
  { 1,  0}, // #4 DISP_1C
  { 2,  0}, // #5 P9_ALU_2C
  { 1,  0}, // #6 IP_EXEC_1C
  { 1,  0}, // #7 DISP_1C
  { 1,  0}, // #8 DISP_1C
  { 5,  0}, // #9 P9_ALU_5C_P9_LS_5C_P9_DP_5C
  { 1,  0}, // #10 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #11 DISP_1C
  { 1,  0}, // #12 DISP_1C
  { 1,  0}, // #13 DISP_1C
  { 7,  0}, // #14 P9_DP_7C
  { 1,  0}, // #15 IP_EXEC_1C
  { 1,  0}, // #16 DISP_1C
  { 1,  0}, // #17 DISP_1C
  { 1,  0}, // #18 DISP_1C
  {36,  0}, // #19 P9_DP_36C_10
  { 1,  0}, // #20 IP_EXEC_1C
  {22,  0}, // #21 P9_DP_26C_5
  {22,  0}, // #22 P9_DP_26C_5_P9_DP_22C_5
  { 1,  0}, // #23 IP_EXEC_1C_P9_LS_1C
  { 1,  0}, // #24 IP_EXEC_1C_DISP_1C
  { 1,  0}, // #25 P9_LS_1C_IP_AGEN_1C_IP_EXEC_1C_DISP_1C
  { 1,  0}, // #26 IP_EXEC_1C_DISP_1C_IP_AGEN_1C
  { 1,  0}, // #27 IP_AGEN_1C_DISP_1C
  { 1,  0}, // #28 DISP_1C
  { 1,  0}, // #29 DISP_1C
  { 1,  0}, // #30 DISP_1C
  { 2,  0}, // #31 P9_ALU_2C
  { 1,  0}, // #32 IP_EXEC_1C
  { 1,  0}, // #33 DISP_1C
  { 1,  0}, // #34 DISP_1C
  { 1,  0}, // #35 DISP_1C
  { 4,  0}, // #36 P9_LS_4C
  { 1,  0}, // #37 IP_EXEC_1C
  { 1,  0}, // #38 DISP_1C
  { 1,  0}, // #39 DISP_1C
  { 4,  0}, // #40 P9_LS_4C
  { 2,  0}, // #41 P9_ALU_2C
  { 1,  0}, // #42 IP_EXEC_1C_IP_EXECE_1C
  { 1,  0}, // #43 IP_EXEC_1C_IP_EXECO_1C
  { 1,  0}, // #44 DISP_1C
  { 1,  0}, // #45 DISP_1C
  { 1,  0}, // #46 DISP_1C
  { 1,  0}, // #47 DISP_1C
  { 6,  0}, // #48 P9_ALU_2C
  { 1,  0}, // #49 IP_AGEN_1C_IP_EXEC_1C
  { 1,  0}, // #50 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #51 DISP_1C
  { 1,  0}, // #52 DISP_1C
  { 1,  0}, // #53 DISP_1C
  { 1,  0}, // #54 DISP_1C
  { 6,  0}, // #55 P9_ALU_2C
  { 2,  0}, // #56 P9_ALU_2C
  { 1,  0}, // #57 IP_AGEN_1C
  { 1,  0}, // #58 IP_EXEC_1C
  { 1,  0}, // #59 IP_EXEC_1C
  { 1,  0}, // #60 DISP_1C
  { 1,  0}, // #61 DISP_1C
  { 1,  0}, // #62 DISP_1C
  { 1,  0}, // #63 DISP_1C
  { 1,  0}, // #64 DISP_1C
  { 1,  0}, // #65 DISP_1C
  { 4,  0}, // #66 P9_ALU_2C
  { 2,  0}, // #67 P9_ALU_2C
  { 1,  0}, // #68 IP_EXEC_1C
  { 1,  0}, // #69 IP_EXEC_1C
  { 1,  0}, // #70 IP_EXEC_1C
  { 1,  0}, // #71 DISP_1C
  { 1,  0}, // #72 DISP_1C
  { 1,  0}, // #73 DISP_1C
  { 1,  0}, // #74 DISP_1C
  { 1,  0}, // #75 DISP_1C
  { 1,  0}, // #76 DISP_1C
  { 1,  0}, // #77 DISP_1C
  { 1,  0}, // #78 DISP_1C
  { 1,  0}, // #79 DISP_1C
  { 1,  0}, // #80 P9_LS_1C
  { 2,  0}, // #81 P9_ALU_2C
  { 1,  0}, // #82 IP_EXEC_1C
  { 1,  0}, // #83 IP_EXEC_1C
  { 1,  0}, // #84 IP_AGEN_1C
  { 1,  0}, // #85 DISP_1C
  { 1,  0}, // #86 DISP_1C
  { 1,  0}, // #87 DISP_1C
  { 1,  0}, // #88 DISP_1C
  { 1,  0}, // #89 DISP_1C
  { 4,  0}, // #90 P9_ALU_3C
  { 1,  0}, // #91 IP_EXEC_1C
  { 1,  0}, // #92 IP_EXEC_1C
  { 1,  0}, // #93 IP_AGEN_1C
  { 1,  0}, // #94 DISP_1C
  { 1,  0}, // #95 DISP_1C
  { 1,  0}, // #96 DISP_1C
  { 1,  0}, // #97 DISP_1C
  { 1,  0}, // #98 DISP_1C
  { 2,  0}, // #99 P9_ALUE_2C
  { 2,  0}, // #100 P9_ALUO_2C
  { 1,  0}, // #101 IP_EXECE_1C
  { 1,  0}, // #102 IP_EXECO_1C
  { 1,  0}, // #103 DISP_1C
  { 1,  0}, // #104 DISP_1C
  { 3,  0}, // #105 P9_ALUE_3C
  { 3,  0}, // #106 P9_ALUO_3C_P9_PM_3C_P9_ALU_3C
  { 1,  0}, // #107 IP_EXECE_1C_IP_EXECO_1C_IP_EXEC_1C
  { 1,  0}, // #108 IP_EXECO_1C_IP_EXECE_1C_DISP_1C
  { 1,  0}, // #109 DISP_1C
  { 1,  0}, // #110 DISP_1C
  { 4,  0}, // #111 P9_ALUE_4C
  { 4,  0}, // #112 P9_ALUO_4C
  { 1,  0}, // #113 IP_EXECE_1C
  { 1,  0}, // #114 IP_EXECO_1C
  { 1,  0}, // #115 DISP_1C
  { 1,  0}, // #116 DISP_1C
  { 7,  0}, // #117 P9_DPE_7C
  { 7,  0}, // #118 P9_DPO_7C
  { 1,  0}, // #119 IP_EXECE_1C
  { 1,  0}, // #120 IP_EXECO_1C
  { 1,  0}, // #121 DISP_1C
  { 1,  0}, // #122 DISP_1C
  {12,  0}, // #123 P9_DFU_12C
  { 1,  0}, // #124 IP_EXECE_1C
  { 1,  0}, // #125 IP_EXECO_1C
  { 1,  0}, // #126 DISP_1C
  { 1,  0}, // #127 DISP_1C
  {24,  0}, // #128 P9_DFU_24C_P9_DIV_24C_8_P9_DP_24C_8
  { 1,  0}, // #129 IP_EXECE_1C
  { 1,  0}, // #130 IP_EXECO_1C_DISP_1C
  { 1,  0}, // #131 DISP_1C
  { 1,  0}, // #132 DISP_1C
  {58,  0}, // #133 P9_DFU_58C
  { 1,  0}, // #134 IP_EXECE_1C
  { 1,  0}, // #135 IP_EXECO_1C
  { 1,  0}, // #136 DISP_1C
  { 1,  0}, // #137 DISP_1C
  {76,  0}, // #138 P9_DFU_76C
  { 1,  0}, // #139 IP_EXECE_1C
  { 1,  0}, // #140 IP_EXECO_1C
  { 1,  0}, // #141 DISP_1C
  { 1,  0}, // #142 DISP_1C
  { 7,  0}, // #143 P9_ALU_2C
  { 1,  0}, // #144 IP_AGEN_1C
  { 1,  0}, // #145 IP_EXEC_1C
  { 1,  0}, // #146 DISP_1C
  { 1,  0}, // #147 DISP_1C
  { 1,  0}, // #148 DISP_1C
  { 1,  0}, // #149 DISP_1C
  { 7,  0}, // #150 P9_ALU_2C
  { 1,  0}, // #151 IP_AGEN_1C
  { 1,  0}, // #152 IP_EXEC_1C
  { 1,  0}, // #153 DISP_1C
  { 1,  0}, // #154 DISP_1C
  { 1,  0}, // #155 DISP_1C
  { 1,  0}, // #156 DISP_1C
  { 1,  0}, // #157 DISP_1C
  { 1,  0}, // #158 DISP_1C
  { 8,  0}, // #159 P9_PM_3C
  { 1,  0}, // #160 IP_AGEN_1C
  { 1,  0}, // #161 IP_EXEC_1C
  { 1,  0}, // #162 DISP_1C
  { 1,  0}, // #163 DISP_1C
  {16,  0}, // #164 P9_DIV_16C_8
  { 1,  0}, // #165 IP_EXECE_1C
  { 1,  0}, // #166 DISP_1C
  { 1,  0}, // #167 DISP_1C
  {40,  0}, // #168 P9_DIV_40C_8
  { 1,  0}, // #169 IP_EXECE_1C
  { 1,  0}, // #170 DISP_1C
  { 1,  0}, // #171 DISP_1C
  {26,  0}, // #172 P9_ALU_2C
  { 1,  0}, // #173 IP_EXECE_1C
  { 1,  0}, // #174 IP_EXEC_1C
  { 1,  0}, // #175 DISP_1C
  { 1,  0}, // #176 DISP_1C
  { 1,  0}, // #177 DISP_1C
  { 1,  0}, // #178 DISP_1C
  {42,  0}, // #179 P9_ALU_2C
  { 1,  0}, // #180 IP_EXECE_1C
  { 1,  0}, // #181 IP_EXEC_1C
  { 1,  0}, // #182 DISP_1C
  { 1,  0}, // #183 DISP_1C
  { 1,  0}, // #184 DISP_1C
  { 1,  0}, // #185 DISP_1C
  { 2,  0}, // #186 P9_ALU_2C
  { 2,  0}, // #187 P9_ALU_2C
  { 1,  0}, // #188 IP_EXEC_1C
  { 1,  0}, // #189 IP_EXEC_1C
  { 1,  0}, // #190 DISP_1C
  { 1,  0}, // #191 DISP_1C
  { 1,  0}, // #192 DISP_1C
  { 1,  0}, // #193 DISP_1C
  { 1,  0}, // #194 DISP_1C
  { 1,  0}, // #195 DISP_1C
  { 5,  0}, // #196 P9_ALU_5C
  { 5,  0}, // #197 P9_ALU_5C
  { 1,  0}, // #198 IP_EXEC_1C
  { 1,  0}, // #199 IP_EXEC_1C
  { 1,  0}, // #200 DISP_1C
  { 1,  0}, // #201 DISP_1C
  { 1,  0}, // #202 DISP_1C
  { 1,  0}, // #203 DISP_1C
  {33,  0}, // #204 P9_DP_33C_8
  { 1,  0}, // #205 IP_EXEC_1C_IP_EXECE_1C
  { 1,  0}, // #206 DISP_1C_IP_EXECO_1C
  { 1,  0}, // #207 DISP_1C
  { 1,  0}, // #208 DISP_1C
  { 7,  0}, // #209 P9_ALU_2C
  { 2,  0}, // #210 P9_ALU_2C
  { 1,  0}, // #211 IP_AGEN_1C
  { 1,  0}, // #212 IP_EXEC_1C
  { 1,  0}, // #213 IP_EXEC_1C
  { 1,  0}, // #214 DISP_1C
  { 1,  0}, // #215 DISP_1C
  { 1,  0}, // #216 DISP_1C
  { 1,  0}, // #217 DISP_1C
  { 1,  0}, // #218 DISP_1C
  { 1,  0}, // #219 DISP_1C
  { 1,  0}, // #220 DISP_1C
  { 1,  0}, // #221 DISP_1C
  { 5,  0}, // #222 P9_LS_5C
  { 2,  0}, // #223 P9_ALU_2C
  { 1,  0}, // #224 IP_AGEN_1C
  { 1,  0}, // #225 IP_EXEC_1C
  { 1,  0}, // #226 DISP_1C
  { 1,  0}, // #227 DISP_1C
  { 1,  0}, // #228 DISP_1C
  { 1,  0}, // #229 DISP_1C
  { 1,  0} // #230 DISP_1C
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc P9ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_IntSimple")      1, false, false,  1, 4,  1, 4,  0, 0}, // #1
  {DBGFIELD("IIC_IntGeneral")     1, false, false,  1, 4,  1, 4,  0, 0}, // #2
  {DBGFIELD("IIC_BrB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("IIC_VecFP")          0, false, false,  0, 0,  0, 0,  0, 0}, // #4
  {DBGFIELD("IIC_IntCompare")     1, false, false,  5, 4,  5, 4,  0, 0}, // #5
  {DBGFIELD("IIC_SprABORT")       0, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("IIC_LdStCOPY")       0, false, false,  0, 0,  0, 0,  0, 0}, // #7
  {DBGFIELD("IIC_LdStPASTE")      0, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("IIC_BrCR")           1, false, false,  9, 4,  9, 5,  0, 0}, // #9
  {DBGFIELD("IIC_LdStDCBF")       0, false, false,  0, 0,  0, 0,  0, 0}, // #10
  {DBGFIELD("IIC_LdStLoad")       1, false, false, 13, 3,  9, 4,  0, 0}, // #11
  {DBGFIELD("IIC_IntDivD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #12
  {DBGFIELD("IIC_IntDivW")        0, false, false,  0, 0,  0, 0,  0, 0}, // #13
  {DBGFIELD("IIC_FPGeneral")      1, false, false, 16, 4, 14, 5,  0, 0}, // #14
  {DBGFIELD("IIC_FPAddSub")       1, false, false, 16, 4, 14, 5,  0, 0}, // #15
  {DBGFIELD("IIC_FPCompare")      0, false, false,  0, 0,  0, 0,  0, 0}, // #16
  {DBGFIELD("IIC_FPDivD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #17
  {DBGFIELD("IIC_FPDivS")         0, false, false,  0, 0,  0, 0,  0, 0}, // #18
  {DBGFIELD("IIC_FPFused")        0, false, false,  0, 0,  0, 0,  0, 0}, // #19
  {DBGFIELD("IIC_FPSqrtD")        1, false, false, 20, 3, 19, 2,  0, 0}, // #20
  {DBGFIELD("IIC_FPSqrtS")        2, false, false, 23, 3, 21, 4,  0, 0}, // #21
  {DBGFIELD("IIC_LdStICBI")       0, false, false,  0, 0,  0, 0,  0, 0}, // #22
  {DBGFIELD("IIC_LdStStore")      1, false, false, 26, 4, 25, 6,  0, 0}, // #23
  {DBGFIELD("IIC_IntISEL")        1, false, false,  9, 4, 31, 5,  0, 0}, // #24
  {DBGFIELD("IIC_SprISYNC")       0, false, false,  0, 0,  0, 0,  0, 0}, // #25
  {DBGFIELD("IIC_LdStLWARX")      1, false, false, 13, 3, 36, 4,  0, 0}, // #26
  {DBGFIELD("IIC_LdStLoadUpd")    2, false, false, 30, 5, 40, 8,  0, 0}, // #27
  {DBGFIELD("IIC_LdStLoadUpdX")   2, false, false, 35, 7, 40, 8,  0, 0}, // #28
  {DBGFIELD("IIC_LdStLD")         1, false, false, 13, 3,  9, 4,  0, 0}, // #29
  {DBGFIELD("IIC_LdStLDARX")      1, false, false, 13, 3, 36, 4,  0, 0}, // #30
  {DBGFIELD("IIC_LdStLDU")        2, false, false, 30, 5, 40, 8,  0, 0}, // #31
  {DBGFIELD("IIC_LdStLDUX")       2, false, false, 35, 7, 40, 8,  0, 0}, // #32
  {DBGFIELD("IIC_LdStLFD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #33
  {DBGFIELD("IIC_LdStLFDU")       0, false, false,  0, 0,  0, 0,  0, 0}, // #34
  {DBGFIELD("IIC_LdStLFDUX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #35
  {DBGFIELD("IIC_LdStLHA")        2, false, false, 42, 6, 48, 7,  0, 0}, // #36
  {DBGFIELD("IIC_LdStLHAU")       3, false, false, 48, 6, 55, 11,  0, 0}, // #37
  {DBGFIELD("IIC_LdStLHAUX")      3, false, false, 48, 6, 55, 11,  0, 0}, // #38
  {DBGFIELD("IIC_LdStLMW")        1, false, false, 13, 3, 36, 4,  0, 0}, // #39
  {DBGFIELD("IIC_LdStLWA")        2, false, false, 42, 6, 48, 7,  0, 0}, // #40
  {DBGFIELD("IIC_BrMCR")          0, false, false,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("IIC_BrMCRX")         0, false, false,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("IIC_SprMFCR")        3, false, false, 54, 4, 66, 14,  0, 0}, // #43
  {DBGFIELD("IIC_SprMFSPR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #44
  {DBGFIELD("IIC_IntMFFS")        0, false, false,  0, 0,  0, 0,  0, 0}, // #45
  {DBGFIELD("IIC_SprMFMSR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #46
  {DBGFIELD("IIC_SprMFCRF")       3, false, false, 54, 4, 66, 14,  0, 0}, // #47
  {DBGFIELD("IIC_SprMFPMR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("IIC_SprMFSR")        0, false, false,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("IIC_SprMFTB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #50
  {DBGFIELD("IIC_VecGeneral")     0, false, false,  0, 0,  0, 0,  0, 0}, // #51
  {DBGFIELD("IIC_SprMSGSYNC")     0, false, false,  0, 0,  0, 0,  0, 0}, // #52
  {DBGFIELD("IIC_LdStSync")       0, false, false,  0, 0,  0, 0,  0, 0}, // #53
  {DBGFIELD("IIC_SprMTSPR")       2, false, false, 58, 6, 48, 6,  0, 0}, // #54
  {DBGFIELD("IIC_IntMTFSB0")      1, false, false,  9, 4,  9, 5,  0, 0}, // #55
  {DBGFIELD("IIC_SprMTMSR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("IIC_SprMTMSRD")      0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_SprMTPMR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("IIC_SprMTSR")        0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("IIC_IntMulHW")       1, false, false, 16, 4,  9, 5,  0, 0}, // #60
  {DBGFIELD("IIC_IntMulHWU")      1, false, false, 16, 4,  9, 5,  0, 0}, // #61
  {DBGFIELD("IIC_IntMulHD")       0, false, false,  0, 0,  0, 0,  0, 0}, // #62
  {DBGFIELD("IIC_IntMulLI")       1, false, false, 16, 4,  9, 5,  0, 0}, // #63
  {DBGFIELD("IIC_VecPerm")        0, false, false,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("IIC_LdStSTFD")       1, false, false, 26, 4, 23, 6,  0, 0}, // #65
  {DBGFIELD("IIC_LdStSTFDU")      2, false, false, 64, 6, 80, 10,  0, 0}, // #66
  {DBGFIELD("IIC_SprRFI")         0, false, false,  0, 0,  0, 0,  0, 0}, // #67
  {DBGFIELD("IIC_IntRFID")        0, false, false,  0, 0,  0, 0,  0, 0}, // #68
  {DBGFIELD("IIC_IntRotateD")     0, false, false,  0, 0,  0, 0,  0, 0}, // #69
  {DBGFIELD("IIC_IntRotateDI")    0, false, false,  0, 0,  0, 0,  0, 0}, // #70
  {DBGFIELD("IIC_IntRotate")      1, false, false,  9, 4, 31, 5,  0, 0}, // #71
  {DBGFIELD("IIC_SprSLBIA")       0, false, false,  0, 0,  0, 0,  0, 0}, // #72
  {DBGFIELD("IIC_SprSLBIE")       0, false, false,  0, 0,  0, 0,  0, 0}, // #73
  {DBGFIELD("IIC_SprSLBIEG")      0, false, false,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("IIC_SprSLBMFEE")     0, false, false,  0, 0,  0, 0,  0, 0}, // #75
  {DBGFIELD("IIC_SprSLBMFEV")     0, false, false,  0, 0,  0, 0,  0, 0}, // #76
  {DBGFIELD("IIC_SprSLBMTE")      0, false, false,  0, 0,  0, 0,  0, 0}, // #77
  {DBGFIELD("IIC_SprSLBSYNC")     0, false, false,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("IIC_IntShift")       1, false, false,  9, 4, 31, 5,  0, 0}, // #79
  {DBGFIELD("IIC_LdStSTWCX")      2, false, false, 64, 6, 90, 9,  0, 0}, // #80
  {DBGFIELD("IIC_LdStStoreUpd")   0, false, false,  0, 0,  0, 0,  0, 0}, // #81
  {DBGFIELD("IIC_LdStSTD")        1, false, false, 26, 4, 23, 6,  0, 0}, // #82
  {DBGFIELD("IIC_LdStSTDCX")      2, false, false, 64, 6, 90, 9,  0, 0}, // #83
  {DBGFIELD("IIC_LdStSTDU")       2, false, false, 64, 6, 80, 10,  0, 0}, // #84
  {DBGFIELD("IIC_LdStSTDUX")      2, false, false, 64, 6, 80, 10,  0, 0}, // #85
  {DBGFIELD("IIC_SprSTOP")        0, false, false,  0, 0,  0, 0,  0, 0}, // #86
  {DBGFIELD("IIC_IntTrapD")       0, false, false,  0, 0,  0, 0,  0, 0}, // #87
  {DBGFIELD("IIC_SprTLBIA")       0, false, false,  0, 0,  0, 0,  0, 0}, // #88
  {DBGFIELD("IIC_SprTLBIE")       0, false, false,  0, 0,  0, 0,  0, 0}, // #89
  {DBGFIELD("IIC_SprTLBIEL")      0, false, false,  0, 0,  0, 0,  0, 0}, // #90
  {DBGFIELD("IIC_SprTLBSYNC")     0, false, false,  0, 0,  0, 0,  0, 0}, // #91
  {DBGFIELD("IIC_IntTrapW")       0, false, false,  0, 0,  0, 0,  0, 0}, // #92
  {DBGFIELD("IIC_VecFPCompare")   0, false, false,  0, 0,  0, 0,  0, 0}, // #93
  {DBGFIELD("VADDCUW_VAND_VANDC_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VSUBCUW_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP") 2, false, false, 70, 7, 99, 6,  0, 0}, // #94
  {DBGFIELD("VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VPOPCNTW_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR") 2, false, false, 70, 7, 99, 6,  0, 0}, // #95
  {DBGFIELD("VCMPEQUB_VCMPEQUBo_VCMPEQUD_VCMPEQUDo_VCMPEQUH_VCMPEQUHo_VCMPEQUW_VCMPEQUWo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEB_VCMPNEBo_VCMPNEH_VCMPNEHo_VCMPNEW_VCMPNEWo_VCMPNEZB_VCMPNEZBo_VCMPNEZH_VCMPNEZHo_VCMPNEZW_VCMPNEZWo") 2, false, false, 70, 7, 99, 6,  0, 0}, // #96
  {DBGFIELD("XXSEL")              2, false, false, 70, 7, 99, 6,  0, 0}, // #97
  {DBGFIELD("XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP_XSABSDP_XSCPSGNDP_XSIEXPDP_XSNABSDP_XSNEGDP_XSXEXPDP") 1, false, false,  5, 4,  5, 4,  0, 0}, // #98
  {DBGFIELD("VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSHASIGMAD_VSHASIGMAW_VSLB_VSLH_VSLW_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_XSCVSPDPN_XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSTSTDCDP_XSTSTDCSP_XSXSIGDP_XVIEXPSP_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXEXPSP_XVXSIGDP_XVXSIGSP") 2, false, false, 70, 7, 105, 6,  0, 0}, // #99
  {DBGFIELD("VPOPCNTD_VPRTYBD_VPRTYBW_VSLD_VSRAD_VSRD") 2, false, false, 70, 7, 105, 6,  0, 0}, // #100
  {DBGFIELD("XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP_XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP") 2, false, false, 70, 7, 105, 6,  0, 0}, // #101
  {DBGFIELD("XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo") 2, false, false, 70, 7, 105, 6,  0, 0}, // #102
  {DBGFIELD("VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW") 2, false, false, 70, 7, 111, 6,  0, 0}, // #103
  {DBGFIELD("VADDSBS_VADDSHS_VADDSWS_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VBPERMD_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINFP") 2, false, false, 70, 7, 111, 6,  0, 0}, // #104
  {DBGFIELD("VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo") 2, false, false, 70, 7, 111, 6,  0, 0}, // #105
  {DBGFIELD("VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS") 2, false, false, 77, 7, 117, 6,  0, 0}, // #106
  {DBGFIELD("VSUBFP_VMULUWM")     2, false, false, 77, 7, 117, 6,  0, 0}, // #107
  {DBGFIELD("XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP") 1, false, false, 16, 4, 14, 5,  0, 0}, // #108
  {DBGFIELD("XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN") 1, false, false, 84, 4, 14, 4,  0, 0}, // #109
  {DBGFIELD("VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP") 1, false, false, 88, 5, 106, 5,  0, 0}, // #110
  {DBGFIELD("VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM") 1, false, false, 88, 5, 106, 5,  0, 0}, // #111
  {DBGFIELD("VSPLTB_VSPLTH_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW") 1, false, false, 88, 5, 106, 5,  0, 0}, // #112
  {DBGFIELD("XSCMPEXPQP_XSCMPOQP_XSCMPUQP") 1, false, false, 88, 5, 106, 5,  0, 0}, // #113
  {DBGFIELD("XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO") 1, false, false, 93, 5, 123, 5,  0, 0}, // #114
  {DBGFIELD("XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO") 1, false, false, 98, 5, 128, 5,  0, 0}, // #115
  {DBGFIELD("XSDIVQP_XSDIVQPO")   1, false, false, 103, 5, 133, 5,  0, 0}, // #116
  {DBGFIELD("XSSQRTQP_XSSQRTQPO") 1, false, false, 108, 6, 138, 5,  0, 0}, // #117
  {DBGFIELD("LXSDX_LXVD2X_LXSIWZX_LXV_LXSD") 1, false, false, 114, 3,  9, 4,  0, 0}, // #118
  {DBGFIELD("LFIWZX_LFDX_LFD")    1, false, false, 117, 3,  9, 5,  0, 0}, // #119
  {DBGFIELD("LXSSPX_LXSIWAX_LXSSP") 2, false, false, 42, 6, 143, 7,  0, 0}, // #120
  {DBGFIELD("LFIWAX_LFSX_LFS")    2, false, false, 120, 6, 150, 9,  0, 0}, // #121
  {DBGFIELD("LXVDSX_LXVW4X")      2, false, false, 126, 5, 159, 5,  0, 0}, // #122
  {DBGFIELD("STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX") 1, false, false, 26, 4, 23, 6,  0, 0}, // #123
  {DBGFIELD("STXVD2X_STXVW4X")    1, false, false, 131, 4, 23, 6,  0, 0}, // #124
  {DBGFIELD("DIVW_DIVWU")         1, false, false, 135, 4, 164, 4,  0, 0}, // #125
  {DBGFIELD("DIVWE_DIVWEU")       1, false, false, 135, 4, 128, 4,  0, 0}, // #126
  {DBGFIELD("DIVD_DIVDU")         1, false, false, 135, 4, 128, 4,  0, 0}, // #127
  {DBGFIELD("DIVDE_DIVDEU")       1, false, false, 135, 4, 168, 4,  0, 0}, // #128
  {DBGFIELD("DIVWEo_DIVWEUo")     2, false, false, 139, 6, 172, 7,  0, 0}, // #129
  {DBGFIELD("DIVDEo_DIVDEUo")     2, false, false, 139, 6, 179, 7,  0, 0}, // #130
  {DBGFIELD("SLD_SRD_SRAD")       1, false, false,  5, 4,  5, 4,  0, 0}, // #131
  {DBGFIELD("SRADI_RLDIC")        1, false, false,  5, 4,  5, 4,  0, 0}, // #132
  {DBGFIELD("RLDCL_RLDCR")        1, false, false,  9, 4, 31, 5,  0, 0}, // #133
  {DBGFIELD("RLDIMI_RLDICL_RLDICR_RLDICL_32_64") 1, false, false,  9, 4, 31, 5,  0, 0}, // #134
  {DBGFIELD("MTOCRF_MTOCRF8_MTCRF_MTCRF8") 2, false, false, 145, 4, 186, 10,  0, 0}, // #135
  {DBGFIELD("MCRF")               1, false, false,  5, 4,  9, 4,  0, 0}, // #136
  {DBGFIELD("MCRXRX")             1, false, false,  5, 4,  9, 4,  0, 0}, // #137
  {DBGFIELD("MCRFS")              2, false, false, 149, 4, 196, 8,  0, 0}, // #138
  {DBGFIELD("FDIV_XSDIVDP")       1, false, false, 153, 4, 204, 5,  0, 0}, // #139
  {DBGFIELD("FDIVS_XSDIVSP")      1, false, false, 157, 4, 22, 5,  0, 0}, // #140
  {DBGFIELD("XVDIVSP")            1, false, false, 161, 6, 128, 5,  0, 0}, // #141
  {DBGFIELD("XVDIVDP")            1, false, false, 161, 6, 204, 5,  0, 0}, // #142
  {DBGFIELD("FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ") 1, false, false, 16, 4, 14, 5,  0, 0}, // #143
  {DBGFIELD("FMADD_FMSUB_FNMADD_FNMSUB_FMUL") 1, false, false, 16, 4, 14, 5,  0, 0}, // #144
  {DBGFIELD("FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS") 1, false, false, 16, 4, 14, 5,  0, 0}, // #145
  {DBGFIELD("FCMPUS_FCMPUD")      1, false, false,  9, 4, 106, 5,  0, 0}, // #146
  {DBGFIELD("LFSU")               3, false, false, 167, 6, 209, 13,  0, 0}, // #147
  {DBGFIELD("LFSUX")              3, false, false, 167, 6, 209, 13,  0, 0}, // #148
  {DBGFIELD("LFDU")               2, false, false, 173, 6, 222, 9,  0, 0}, // #149
  {DBGFIELD("LFDUX")              2, false, false, 173, 6, 222, 9,  0, 0} // #150
}; // P9ModelSchedClasses

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

static const llvm::MCSchedModel PPC440Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPC440Itineraries};

static const llvm::MCSchedModel G3ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G3Itineraries};

static const llvm::MCSchedModel G4ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G4Itineraries};

static const llvm::MCSchedModel G4PlusItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G4PlusItineraries};

static const llvm::MCSchedModel G5Model = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G5Itineraries};

static const llvm::MCSchedModel PPCA2Model = {
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries};

static const llvm::MCSchedModel PPCE500mcModel = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  7, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries};

static const llvm::MCSchedModel PPCE5500Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  8, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries};

static const llvm::MCSchedModel P8Model = {
  8, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  60, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  9, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  P8Itineraries};

static const llvm::MCSchedModel P7Model = {
  6, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  40, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  10, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  P7Itineraries};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc P9ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("ALU")             4, 0, -1}, // #1
  {DBGFIELD("ALUE")            2, 1, -1}, // #2, Super=ALU
  {DBGFIELD("ALUO")            2, 1, -1}, // #3, Super=ALU
  {DBGFIELD("DFU")             1, 0, -1}, // #4
  {DBGFIELD("DISPATCHER")      12, 0, -1}, // #5
  {DBGFIELD("DIV")             2, 0, -1}, // #6
  {DBGFIELD("DP")              4, 0, -1}, // #7
  {DBGFIELD("DPE")             2, 7, -1}, // #8, Super=DP
  {DBGFIELD("DPO")             2, 7, -1}, // #9, Super=DP
  {DBGFIELD("IP_AGEN")         4, 0, -1}, // #10
  {DBGFIELD("IP_EXEC")         4, 0, -1}, // #11
  {DBGFIELD("IP_EXECE")        2, 11, -1}, // #12, Super=IP_EXEC
  {DBGFIELD("IP_EXECO")        2, 11, -1}, // #13, Super=IP_EXEC
  {DBGFIELD("LS")              4, 0, -1}, // #14
  {DBGFIELD("PM")              2, 0, -1}, // #15
  {DBGFIELD("TestGroup")       8, 0, -1}  // #16
};

static const llvm::MCSchedModel P9Model = {
  8, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  60, // LoopMicroOpBufferSize
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  11, // Processor ID
  P9ModelProcResources,
  P9ModelSchedClasses,
  17,
  151,
  nullptr}; // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440Model },
  { "450", (const void *)&PPC440Model },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc32", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "ppc64le", (const void *)&P8Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&P7Model },
  { "pwr8", (const void *)&P8Model },
  { "pwr9", (const void *)&P9Model }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createPPCMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[PPC::DeprecatedDST]) DeprecatedDST = true;
  if (Bits[PPC::Directive32] && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if (Bits[PPC::Directive64] && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if (Bits[PPC::Directive440] && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if (Bits[PPC::Directive601] && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if (Bits[PPC::Directive602] && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if (Bits[PPC::Directive603] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive604] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive620] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive750] && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if (Bits[PPC::Directive970] && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if (Bits[PPC::Directive7400] && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if (Bits[PPC::DirectiveA2] && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if (Bits[PPC::DirectiveE500mc] && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if (Bits[PPC::DirectiveE5500] && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if (Bits[PPC::DirectivePwr3] && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if (Bits[PPC::DirectivePwr4] && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if (Bits[PPC::DirectivePwr5] && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if (Bits[PPC::DirectivePwr5x] && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if (Bits[PPC::DirectivePwr6] && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if (Bits[PPC::DirectivePwr6x] && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if (Bits[PPC::DirectivePwr7] && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if (Bits[PPC::DirectivePwr8] && DarwinDirective < PPC::DIR_PWR8) DarwinDirective = PPC::DIR_PWR8;
  if (Bits[PPC::DirectivePwr9] && DarwinDirective < PPC::DIR_PWR9) DarwinDirective = PPC::DIR_PWR9;
  if (Bits[PPC::Feature64Bit]) Has64BitSupport = true;
  if (Bits[PPC::Feature64BitRegs]) Use64BitRegs = true;
  if (Bits[PPC::FeatureAltivec]) HasAltivec = true;
  if (Bits[PPC::FeatureBPERMD]) HasBPERMD = true;
  if (Bits[PPC::FeatureBookE]) IsBookE = true;
  if (Bits[PPC::FeatureCMPB]) HasCMPB = true;
  if (Bits[PPC::FeatureCRBits]) UseCRBits = true;
  if (Bits[PPC::FeatureDirectMove]) HasDirectMove = true;
  if (Bits[PPC::FeatureE500]) IsE500 = true;
  if (Bits[PPC::FeatureExtDiv]) HasExtDiv = true;
  if (Bits[PPC::FeatureFCPSGN]) HasFCPSGN = true;
  if (Bits[PPC::FeatureFPCVT]) HasFPCVT = true;
  if (Bits[PPC::FeatureFPRND]) HasFPRND = true;
  if (Bits[PPC::FeatureFRE]) HasFRE = true;
  if (Bits[PPC::FeatureFRES]) HasFRES = true;
  if (Bits[PPC::FeatureFRSQRTE]) HasFRSQRTE = true;
  if (Bits[PPC::FeatureFRSQRTES]) HasFRSQRTES = true;
  if (Bits[PPC::FeatureFSqrt]) HasFSQRT = true;
  if (Bits[PPC::FeatureFloat128]) HasFloat128 = true;
  if (Bits[PPC::FeatureFusion]) HasFusion = true;
  if (Bits[PPC::FeatureHTM]) HasHTM = true;
  if (Bits[PPC::FeatureHardFloat]) HasHardFloat = true;
  if (Bits[PPC::FeatureICBT]) HasICBT = true;
  if (Bits[PPC::FeatureISA3_0]) IsISA3_0 = true;
  if (Bits[PPC::FeatureISEL]) HasISEL = true;
  if (Bits[PPC::FeatureInvariantFunctionDescriptors]) HasInvariantFunctionDescriptors = true;
  if (Bits[PPC::FeatureLDBRX]) HasLDBRX = true;
  if (Bits[PPC::FeatureLFIWAX]) HasLFIWAX = true;
  if (Bits[PPC::FeatureLongCall]) UseLongCalls = true;
  if (Bits[PPC::FeatureMFOCRF]) HasMFOCRF = true;
  if (Bits[PPC::FeatureMFTB]) FeatureMFTB = true;
  if (Bits[PPC::FeatureMSYNC]) HasOnlyMSYNC = true;
  if (Bits[PPC::FeatureP8Altivec]) HasP8Altivec = true;
  if (Bits[PPC::FeatureP8Crypto]) HasP8Crypto = true;
  if (Bits[PPC::FeatureP8Vector]) HasP8Vector = true;
  if (Bits[PPC::FeatureP9Altivec]) HasP9Altivec = true;
  if (Bits[PPC::FeatureP9Vector]) HasP9Vector = true;
  if (Bits[PPC::FeaturePOPCNTD] && HasPOPCNTD < POPCNTD_Fast) HasPOPCNTD = POPCNTD_Fast;
  if (Bits[PPC::FeaturePPC4xx]) IsPPC4xx = true;
  if (Bits[PPC::FeaturePPC6xx]) IsPPC6xx = true;
  if (Bits[PPC::FeaturePartwordAtomic]) HasPartwordAtomics = true;
  if (Bits[PPC::FeatureQPX]) HasQPX = true;
  if (Bits[PPC::FeatureRecipPrec]) HasRecipPrec = true;
  if (Bits[PPC::FeatureSPE]) HasSPE = true;
  if (Bits[PPC::FeatureSTFIWX]) HasSTFIWX = true;
  if (Bits[PPC::FeatureSlowPOPCNTD] && HasPOPCNTD < POPCNTD_Slow) HasPOPCNTD = POPCNTD_Slow;
  if (Bits[PPC::FeatureVSX]) HasVSX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(PPCFeatureKV, 46), makeArrayRef(PPCSubTypeKV, 36), 
                        PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                        PPCStages, PPCOperandCycles, PPCForwardingPaths) {}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

