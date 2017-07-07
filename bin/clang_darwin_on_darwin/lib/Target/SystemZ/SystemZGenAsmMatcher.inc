/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint32_t {
  Feature_FeatureDistinctOps = (1ULL << 2),
  Feature_FeatureFastSerialization = (1ULL << 5),
  Feature_FeatureFPExtension = (1ULL << 4),
  Feature_FeatureHighWord = (1ULL << 6),
  Feature_FeatureInterlockedAccess1 = (1ULL << 7),
  Feature_FeatureLoadStoreOnCond = (1ULL << 10),
  Feature_FeaturePopulationCount = (1ULL << 15),
  Feature_FeatureMessageSecurityAssist4 = (1ULL << 12),
  Feature_FeatureExecutionHint = (1ULL << 3),
  Feature_FeatureLoadAndTrap = (1ULL << 8),
  Feature_FeatureMiscellaneousExtensions = (1ULL << 14),
  Feature_FeatureProcessorAssist = (1ULL << 16),
  Feature_FeatureTransactionalExecution = (1ULL << 17),
  Feature_FeatureDFPZonedConversion = (1ULL << 1),
  Feature_FeatureLoadAndZeroRightmostByte = (1ULL << 9),
  Feature_FeatureLoadStoreOnCond2 = (1ULL << 11),
  Feature_FeatureMessageSecurityAssist5 = (1ULL << 13),
  Feature_FeatureDFPPackedConversion = (1ULL << 0),
  Feature_FeatureVector = (1ULL << 18),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureDistinctOps: return "distinct-ops";
  case Feature_FeatureFastSerialization: return "fast-serialization";
  case Feature_FeatureFPExtension: return "fp-extension";
  case Feature_FeatureHighWord: return "high-word";
  case Feature_FeatureInterlockedAccess1: return "interlocked-access1";
  case Feature_FeatureLoadStoreOnCond: return "load-store-on-cond";
  case Feature_FeaturePopulationCount: return "population-count";
  case Feature_FeatureMessageSecurityAssist4: return "message-security-assist-extension4";
  case Feature_FeatureExecutionHint: return "execution-hint";
  case Feature_FeatureLoadAndTrap: return "load-and-trap";
  case Feature_FeatureMiscellaneousExtensions: return "miscellaneous-extensions";
  case Feature_FeatureProcessorAssist: return "processor-assist";
  case Feature_FeatureTransactionalExecution: return "transactional-execution";
  case Feature_FeatureDFPZonedConversion: return "dfp-zoned-conversion";
  case Feature_FeatureLoadAndZeroRightmostByte: return "load-and-zero-rightmost-byte";
  case Feature_FeatureLoadStoreOnCond2: return "load-store-on-cond-2";
  case Feature_FeatureMessageSecurityAssist5: return "message-security-assist-extension5";
  case Feature_FeatureDFPPackedConversion: return "dfp-packed-conversion";
  case Feature_FeatureVector: return "vector";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addImmTLSOperands,
  CVT_95_addBDRAddrOperands,
  CVT_imm_95_0,
  CVT_95_addBDVAddrOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0__S32Imm1_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__FP1281_0__FP1281_1__FP1281_2,
  Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3,
  Convert__BDXAddr64Disp123_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__BDXAddr64Disp123_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__GR321_0__Tie0__GR641_1,
  Convert__ADDR641_0,
  Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2,
  Convert__U4Imm1_0__PCRel121_1__PCRel241_2,
  Convert__GR641_0__PCRelTLS162_1,
  Convert__GR641_0__PCRelTLS322_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0__PCRel161_1,
  Convert__GR641_0__Tie0__PCRel161_1,
  Convert__GRH321_0__Tie0__PCRel321_1,
  Convert__GR321_0__Tie0__GR321_1__PCRel161_2,
  Convert__GR641_0__Tie0__GR641_1__PCRel161_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2,
  Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__FP1281_1,
  Convert__BDAddr64Disp122_0,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__PCRel321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__GR641_1__U4Imm1_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__GR321_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR1281_1__Tie0__Tie1,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U16Imm1_1__U4Imm1_2,
  Convert__GR321_0__U16Imm1_1,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U16Imm1_1__U4Imm1_2,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__GR321_1__BDAddr64Disp122_2,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR321_0__GR321_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__Tie0__Tie1,
  Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__FP641_0__FP641_2__FP641_1,
  Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__AR321_0__AR321_1,
  Convert__GR641_0__FP641_1__U4Imm1_2,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2,
  Convert__GR1281_0__FP1281_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2,
  Convert__GR641_0__FP641_1,
  Convert__GR1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__GR1281_1,
  Convert__GR1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP321_1__Tie0__FP321_2__U4Imm1_3,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AR321_1,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_2__FP1281_1,
  Convert__GRH321_0__Tie0__U16Imm1_1,
  Convert__GR321_0__Tie0__U16Imm1_1,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR1281_1__GR641_0__Tie0,
  Convert__GR1281_0__GR1281_2__GR1281_1__Tie0__Tie1__Tie2,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp122_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__FP321_1__U4Imm1_2,
  Convert__FP641_0__FP1281_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP1281_1,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3,
  Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0__GRH321_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__GRH321_1,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__Tie0__GR641_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GRH321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__U4Imm1_2,
  Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2,
  Convert__GR1281_0__BDXAddr64Disp203_1,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP641_1__U4Imm1_2,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP1281_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__Tie0__FP641_1__FP641_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__FP641_1__FP641_2,
  Convert__U4Imm1_0__U4Imm1_1,
  Convert__GRH321_0__Tie0__U32Imm1_1,
  Convert__imm_95_0__BDXAddr64Disp123_0,
  Convert__imm_95_0__GR641_0,
  Convert_NoOperands,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1,
  Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3,
  Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__AR321_0__GR321_1,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__GR1281_0__Tie0__BDAddr32Disp122_1,
  Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2,
  Convert__BDAddr32Disp122_0,
  Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1,
  Convert__U8Imm1_0,
  Convert__FP321_0__U4Imm1_1__FP641_2,
  Convert__GRH321_0__U16Imm1_1,
  Convert__BDLAddr64Disp12Len43_0,
  Convert__GR1281_0__GR641_1__Tie0__Tie1,
  Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2,
  Convert__GR641_1__GR1281_0__Tie1,
  Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1,
  Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U12Imm1_2,
  Convert__VR1281_0__U16Imm1_1,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__imm_95_0,
  Convert__VR1281_0__BDXAddr64Disp123_1,
  Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2,
  Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR321_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2,
  Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2,
  Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR641_1__GR641_2,
  Convert__VR1281_0__VR1281_1__VR1281_1,
  Convert__VR1281_0,
  Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__U16Imm1_2,
  Convert__VR1281_0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__S16Imm1_1,
  Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0,
  Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2,
  Convert__VR641_0__VR641_1,
  Convert__VR641_0__VR641_1__VR641_2__VR641_3,
  Convert__VR641_0__VR641_1__U4Imm1_2,
  Convert__VR641_0__VR641_1__U12Imm1_2,
  Convert__VR641_0__VR321_1,
  Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDXAddr64Disp123_0
  { CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp123_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__PCRel121_1__PCRel241_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__PCRelTLS162_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRelTLS322_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR1281_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_2__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0__FP1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP321_1__Tie0__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_2__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR1281_1__GR641_0__Tie0
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR1281_1__Tie0__Tie1__Tie2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Tied, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP641_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__GRH321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDRAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__U4Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__BDXAddr64Disp123_0
  { CVT_imm_95_0, 0, CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__imm_95_0__GR641_0
  { CVT_imm_95_0, 0, CVT_95_addRegOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__BDAddr32Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__U8Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0
  { CVT_95_addBDLAddrOperands, 1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0__Tie1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, 1, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__VR641_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR641_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_95_addBDRAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDRAddrOperands(Inst, 3);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addBDVAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDVAddrOperands(Inst, 3);
      break;
    }
  }
}

void SystemZAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDRAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addBDVAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK_CCRegs, // register class 'CCRegs'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_AR32Bit, // register class 'AR32Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_VF128Bit, // register class 'VF128Bit'
  MCK_Reg13, // derived register class
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_VR128Bit, // register class 'VR128Bit'
  MCK_VR32Bit, // register class 'VR32Bit'
  MCK_VR64Bit, // register class 'VR64Bit'
  MCK_AnyRegBit, // register class 'AnyRegBit'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AR32, // user defined class 'AR32AsmOperand'
  MCK_AnyReg, // user defined class 'AnyRegAsmOperand'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len4, // user defined class 'BDLAddr64Disp12Len4'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDRAddr64Disp12, // user defined class 'BDRAddr64Disp12'
  MCK_BDVAddr64Disp12, // user defined class 'BDVAddr64Disp12'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel12, // user defined class 'PCRel12'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel24, // user defined class 'PCRel24'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_PCRelTLS16, // user defined class 'PCRelTLS16'
  MCK_PCRelTLS32, // user defined class 'PCRelTLS32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U12Imm, // user defined class 'U12Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U1Imm, // user defined class 'U1Imm'
  MCK_U2Imm, // user defined class 'U2Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U3Imm, // user defined class 'U3Imm'
  MCK_U48Imm, // user defined class 'U48Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  MCK_VF128, // user defined class 'VF128AsmOperand'
  MCK_VR128, // user defined class 'VR128AsmOperand'
  MCK_VR32, // user defined class 'VR32AsmOperand'
  MCK_VR64, // user defined class 'VR64AsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_ADDR64Bit:
    switch (B) {
    default: return false;
    case MCK_GR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_FP32Bit:
    return B == MCK_VR32Bit;

  case MCK_FP64Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GR64Bit:
    return B == MCK_AnyRegBit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_VF128Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR128Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_Reg13:
    return B == MCK_AnyRegBit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'ADDR128' class
  case MCK_ADDR128:
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ADDR32' class
  case MCK_ADDR32:
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ADDR64' class
  case MCK_ADDR64:
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'AR32' class
  case MCK_AR32:
    if (Operand.isAR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'AnyReg' class
  case MCK_AnyReg:
    if (Operand.isAnyReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr32Disp12' class
  case MCK_BDAddr32Disp12:
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr32Disp20' class
  case MCK_BDAddr32Disp20:
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr64Disp12' class
  case MCK_BDAddr64Disp12:
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDAddr64Disp20' class
  case MCK_BDAddr64Disp20:
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDLAddr64Disp12Len4' class
  case MCK_BDLAddr64Disp12Len4:
    if (Operand.isBDLAddr64Disp12Len4())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDLAddr64Disp12Len8' class
  case MCK_BDLAddr64Disp12Len8:
    if (Operand.isBDLAddr64Disp12Len8())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDRAddr64Disp12' class
  case MCK_BDRAddr64Disp12:
    if (Operand.isBDRAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDVAddr64Disp12' class
  case MCK_BDVAddr64Disp12:
    if (Operand.isBDVAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDXAddr64Disp12' class
  case MCK_BDXAddr64Disp12:
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'BDXAddr64Disp20' class
  case MCK_BDXAddr64Disp20:
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP128' class
  case MCK_FP128:
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP32' class
  case MCK_FP32:
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FP64' class
  case MCK_FP64:
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR128' class
  case MCK_GR128:
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR32' class
  case MCK_GR32:
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GR64' class
  case MCK_GR64:
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GRH32' class
  case MCK_GRH32:
    if (Operand.isGRH32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GRX32' class
  case MCK_GRX32:
    if (Operand.isGRX32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Imm' class
  case MCK_Imm:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel12' class
  case MCK_PCRel12:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel16' class
  case MCK_PCRel16:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel24' class
  case MCK_PCRel24:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRel32' class
  case MCK_PCRel32:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRelTLS16' class
  case MCK_PCRelTLS16:
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'PCRelTLS32' class
  case MCK_PCRelTLS32:
    if (Operand.isImmTLS())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S16Imm' class
  case MCK_S16Imm:
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S32Imm' class
  case MCK_S32Imm:
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S8Imm' class
  case MCK_S8Imm:
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U12Imm' class
  case MCK_U12Imm:
    if (Operand.isU12Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U16Imm' class
  case MCK_U16Imm:
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U1Imm' class
  case MCK_U1Imm:
    if (Operand.isU1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U2Imm' class
  case MCK_U2Imm:
    if (Operand.isU2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U32Imm' class
  case MCK_U32Imm:
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U3Imm' class
  case MCK_U3Imm:
    if (Operand.isU3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U48Imm' class
  case MCK_U48Imm:
    if (Operand.isU48Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U4Imm' class
  case MCK_U4Imm:
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U6Imm' class
  case MCK_U6Imm:
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U8Imm' class
  case MCK_U8Imm:
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VF128' class
  case MCK_VF128:
    if (Operand.isVF128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR128' class
  case MCK_VR128:
    if (Operand.isVR128())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR32' class
  case MCK_VR32:
    if (Operand.isVR32())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'VR64' class
  case MCK_VR64:
    if (Operand.isVR64())
      return MCTargetAsmParser::Match_Success;
    break;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F16S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F17S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F18S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F19S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F20S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F21S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F22S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F23S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F24S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F25S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F26S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F27S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F28S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F29S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F30S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F31S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F16D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F17D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F18D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F19D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F20D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F21D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F22D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F23D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F24D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F25D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F26D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F27D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F28D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F29D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F30D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F31D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::V0: OpKind = MCK_VF128Bit; break;
    case SystemZ::V1: OpKind = MCK_VF128Bit; break;
    case SystemZ::V2: OpKind = MCK_VF128Bit; break;
    case SystemZ::V3: OpKind = MCK_VF128Bit; break;
    case SystemZ::V4: OpKind = MCK_VF128Bit; break;
    case SystemZ::V5: OpKind = MCK_VF128Bit; break;
    case SystemZ::V6: OpKind = MCK_VF128Bit; break;
    case SystemZ::V7: OpKind = MCK_VF128Bit; break;
    case SystemZ::V8: OpKind = MCK_VF128Bit; break;
    case SystemZ::V9: OpKind = MCK_VF128Bit; break;
    case SystemZ::V10: OpKind = MCK_VF128Bit; break;
    case SystemZ::V11: OpKind = MCK_VF128Bit; break;
    case SystemZ::V12: OpKind = MCK_VF128Bit; break;
    case SystemZ::V13: OpKind = MCK_VF128Bit; break;
    case SystemZ::V14: OpKind = MCK_VF128Bit; break;
    case SystemZ::V15: OpKind = MCK_VF128Bit; break;
    case SystemZ::V16: OpKind = MCK_VR128Bit; break;
    case SystemZ::V17: OpKind = MCK_VR128Bit; break;
    case SystemZ::V18: OpKind = MCK_VR128Bit; break;
    case SystemZ::V19: OpKind = MCK_VR128Bit; break;
    case SystemZ::V20: OpKind = MCK_VR128Bit; break;
    case SystemZ::V21: OpKind = MCK_VR128Bit; break;
    case SystemZ::V22: OpKind = MCK_VR128Bit; break;
    case SystemZ::V23: OpKind = MCK_VR128Bit; break;
    case SystemZ::V24: OpKind = MCK_VR128Bit; break;
    case SystemZ::V25: OpKind = MCK_VR128Bit; break;
    case SystemZ::V26: OpKind = MCK_VR128Bit; break;
    case SystemZ::V27: OpKind = MCK_VR128Bit; break;
    case SystemZ::V28: OpKind = MCK_VR128Bit; break;
    case SystemZ::V29: OpKind = MCK_VR128Bit; break;
    case SystemZ::V30: OpKind = MCK_VR128Bit; break;
    case SystemZ::V31: OpKind = MCK_VR128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCRegs; break;
    case SystemZ::A0: OpKind = MCK_AR32Bit; break;
    case SystemZ::A1: OpKind = MCK_AR32Bit; break;
    case SystemZ::A2: OpKind = MCK_AR32Bit; break;
    case SystemZ::A3: OpKind = MCK_AR32Bit; break;
    case SystemZ::A4: OpKind = MCK_AR32Bit; break;
    case SystemZ::A5: OpKind = MCK_AR32Bit; break;
    case SystemZ::A6: OpKind = MCK_AR32Bit; break;
    case SystemZ::A7: OpKind = MCK_AR32Bit; break;
    case SystemZ::A8: OpKind = MCK_AR32Bit; break;
    case SystemZ::A9: OpKind = MCK_AR32Bit; break;
    case SystemZ::A10: OpKind = MCK_AR32Bit; break;
    case SystemZ::A11: OpKind = MCK_AR32Bit; break;
    case SystemZ::A12: OpKind = MCK_AR32Bit; break;
    case SystemZ::A13: OpKind = MCK_AR32Bit; break;
    case SystemZ::A14: OpKind = MCK_AR32Bit; break;
    case SystemZ::A15: OpKind = MCK_AR32Bit; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SystemZAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[SystemZ::FeatureDistinctOps]))
    Features |= Feature_FeatureDistinctOps;
  if ((FB[SystemZ::FeatureFastSerialization]))
    Features |= Feature_FeatureFastSerialization;
  if ((FB[SystemZ::FeatureFPExtension]))
    Features |= Feature_FeatureFPExtension;
  if ((FB[SystemZ::FeatureHighWord]))
    Features |= Feature_FeatureHighWord;
  if ((FB[SystemZ::FeatureInterlockedAccess1]))
    Features |= Feature_FeatureInterlockedAccess1;
  if ((FB[SystemZ::FeatureLoadStoreOnCond]))
    Features |= Feature_FeatureLoadStoreOnCond;
  if ((FB[SystemZ::FeaturePopulationCount]))
    Features |= Feature_FeaturePopulationCount;
  if ((FB[SystemZ::FeatureMessageSecurityAssist4]))
    Features |= Feature_FeatureMessageSecurityAssist4;
  if ((FB[SystemZ::FeatureExecutionHint]))
    Features |= Feature_FeatureExecutionHint;
  if ((FB[SystemZ::FeatureLoadAndTrap]))
    Features |= Feature_FeatureLoadAndTrap;
  if ((FB[SystemZ::FeatureMiscellaneousExtensions]))
    Features |= Feature_FeatureMiscellaneousExtensions;
  if ((FB[SystemZ::FeatureProcessorAssist]))
    Features |= Feature_FeatureProcessorAssist;
  if ((FB[SystemZ::FeatureTransactionalExecution]))
    Features |= Feature_FeatureTransactionalExecution;
  if ((FB[SystemZ::FeatureDFPZonedConversion]))
    Features |= Feature_FeatureDFPZonedConversion;
  if ((FB[SystemZ::FeatureLoadAndZeroRightmostByte]))
    Features |= Feature_FeatureLoadAndZeroRightmostByte;
  if ((FB[SystemZ::FeatureLoadStoreOnCond2]))
    Features |= Feature_FeatureLoadStoreOnCond2;
  if ((FB[SystemZ::FeatureMessageSecurityAssist5]))
    Features |= Feature_FeatureMessageSecurityAssist5;
  if ((FB[SystemZ::FeatureDFPPackedConversion]))
    Features |= Feature_FeatureDFPPackedConversion;
  if ((FB[SystemZ::FeatureVector]))
    Features |= Feature_FeatureVector;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\002ad\003adb\004adbr\003adr\004adtr\005adtra\002ae\003aeb\004aebr"
    "\003aer\003afi\002ag\003agf\004agfi\004agfr\004aghi\005aghik\003agr\004"
    "agrk\004agsi\002ah\003ahi\004ahik\003ahy\003aih\002al\003alc\004alcg\005"
    "alcgr\004alcr\004alfi\003alg\004algf\005algfi\005algfr\007alghsik\004al"
    "gr\005algrk\005algsi\006alhsik\003alr\004alrk\004alsi\003aly\002ap\002a"
    "r\003ark\003asi\002au\003aur\002aw\003awr\004axbr\003axr\004axtr\005axt"
    "ra\002ay\001b\003bal\004balr\003bas\004basr\005bassm\002bc\003bcr\003bc"
    "t\004bctg\005bctgr\004bctr\002be\003ber\002bh\003bhe\004bher\003bhr\002"
    "bl\003ble\004bler\003blh\004blhr\003blr\002bm\003bmr\003bne\004bner\003"
    "bnh\004bnhe\005bnher\004bnhr\003bnl\004bnle\005bnler\004bnlh\005bnlhr\004"
    "bnlr\003bnm\004bnmr\003bno\004bnor\003bnp\004bnpr\003bnz\004bnzr\002bo\003"
    "bor\002bp\003bpp\003bpr\004bprp\002br\004bras\005brasl\003brc\004brcl\004"
    "brct\005brctg\005brcth\004brxh\005brxhg\005brxle\005brxlg\003bsm\003bxh"
    "\004bxhg\004bxle\005bxleg\002bz\003bzr\001c\002cd\003cdb\004cdbr\005cdf"
    "br\006cdfbra\004cdfr\005cdftr\005cdgbr\006cdgbra\004cdgr\005cdgtr\006cd"
    "gtra\006cdlfbr\006cdlftr\006cdlgbr\006cdlgtr\004cdpt\003cdr\003cds\004c"
    "dsg\005cdstr\004cdsy\004cdtr\005cdutr\004cdzt\002ce\003ceb\004cebr\005c"
    "edtr\005cefbr\006cefbra\004cefr\005cegbr\006cegbra\004cegr\006celfbr\006"
    "celgbr\003cer\005cextr\003cfc\005cfdbr\006cfdbra\004cfdr\005cfdtr\005cf"
    "ebr\006cfebra\004cfer\003cfi\005cfxbr\006cfxbra\004cfxr\005cfxtr\002cg\005"
    "cgdbr\006cgdbra\004cgdr\005cgdtr\006cgdtra\005cgebr\006cgebra\004cger\003"
    "cgf\004cgfi\004cgfr\005cgfrl\003cgh\004cghi\005cghrl\005cghsi\004cgib\005"
    "cgibe\005cgibh\006cgibhe\005cgibl\006cgible\006cgiblh\006cgibne\006cgib"
    "nh\007cgibnhe\006cgibnl\007cgibnle\007cgibnlh\004cgij\005cgije\005cgijh"
    "\006cgijhe\005cgijl\006cgijle\006cgijlh\006cgijne\006cgijnh\007cgijnhe\006"
    "cgijnl\007cgijnle\007cgijnlh\004cgit\005cgite\005cgith\006cgithe\005cgi"
    "tl\006cgitle\006cgitlh\006cgitne\006cgitnh\007cgitnhe\006cgitnl\007cgit"
    "nle\007cgitnlh\003cgr\004cgrb\005cgrbe\005cgrbh\006cgrbhe\005cgrbl\006c"
    "grble\006cgrblh\006cgrbne\006cgrbnh\007cgrbnhe\006cgrbnl\007cgrbnle\007"
    "cgrbnlh\004cgrj\005cgrje\005cgrjh\006cgrjhe\005cgrjl\006cgrjle\006cgrjl"
    "h\006cgrjne\006cgrjnh\007cgrjnhe\006cgrjnl\007cgrjnle\007cgrjnlh\004cgr"
    "l\004cgrt\005cgrte\005cgrth\006cgrthe\005cgrtl\006cgrtle\006cgrtlh\006c"
    "grtne\006cgrtnh\007cgrtnhe\006cgrtnl\007cgrtnle\007cgrtnlh\005cgxbr\006"
    "cgxbra\004cgxr\005cgxtr\006cgxtra\002ch\003chf\005chhsi\003chi\004chrl\004"
    "chsi\003chy\003cib\004cibe\004cibh\005cibhe\004cibl\005cible\005ciblh\005"
    "cibne\005cibnh\006cibnhe\005cibnl\006cibnle\006cibnlh\003cih\003cij\004"
    "cije\004cijh\005cijhe\004cijl\005cijle\005cijlh\005cijne\005cijnh\006ci"
    "jnhe\005cijnl\006cijnle\006cijnlh\003cit\004cite\004cith\005cithe\004ci"
    "tl\005citle\005citlh\005citne\005citnh\006citnhe\005citnl\006citnle\006"
    "citnlh\004cksm\002cl\003clc\004clcl\005clcle\005clclu\006clfdbr\006clfd"
    "tr\006clfebr\006clfhsi\004clfi\005clfit\006clfite\006clfith\007clfithe\006"
    "clfitl\007clfitle\007clfitlh\007clfitne\007clfitnh\010clfitnhe\007clfit"
    "nl\010clfitnle\010clfitnlh\006clfxbr\006clfxtr\003clg\006clgdbr\006clgd"
    "tr\006clgebr\004clgf\005clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\005"
    "clgib\006clgibe\006clgibh\007clgibhe\006clgibl\007clgible\007clgiblh\007"
    "clgibne\007clgibnh\010clgibnhe\007clgibnl\010clgibnle\010clgibnlh\005cl"
    "gij\006clgije\006clgijh\007clgijhe\006clgijl\007clgijle\007clgijlh\007c"
    "lgijne\007clgijnh\010clgijnhe\007clgijnl\010clgijnle\010clgijnlh\005clg"
    "it\006clgite\006clgith\007clgithe\006clgitl\007clgitle\007clgitlh\007cl"
    "gitne\007clgitnh\010clgitnhe\007clgitnl\010clgitnle\010clgitnlh\004clgr"
    "\005clgrb\006clgrbe\006clgrbh\007clgrbhe\006clgrbl\007clgrble\007clgrbl"
    "h\007clgrbne\007clgrbnh\010clgrbnhe\007clgrbnl\010clgrbnle\010clgrbnlh\005"
    "clgrj\006clgrje\006clgrjh\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007"
    "clgrjne\007clgrjnh\010clgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005cl"
    "grl\005clgrt\006clgrte\006clgrth\007clgrthe\006clgrtl\007clgrtle\007clg"
    "rtlh\007clgrtne\007clgrtnh\010clgrtnhe\007clgrtnl\010clgrtnle\010clgrtn"
    "lh\004clgt\005clgte\005clgth\006clgthe\005clgtl\006clgtle\006clgtlh\006"
    "clgtne\006clgtnh\007clgtnhe\006clgtnl\007clgtnle\007clgtnlh\006clgxbr\006"
    "clgxtr\004clhf\006clhhsi\005clhrl\003cli\004clib\005clibe\005clibh\006c"
    "libhe\005clibl\006clible\006cliblh\006clibne\006clibnh\007clibnhe\006cl"
    "ibnl\007clibnle\007clibnlh\004clih\004clij\005clije\005clijh\006clijhe\005"
    "clijl\006clijle\006clijlh\006clijne\006clijnh\007clijnhe\006clijnl\007c"
    "lijnle\007clijnlh\004cliy\003clm\004clmh\004clmy\003clr\004clrb\005clrb"
    "e\005clrbh\006clrbhe\005clrbl\006clrble\006clrblh\006clrbne\006clrbnh\007"
    "clrbnhe\006clrbnl\007clrbnle\007clrbnlh\004clrj\005clrje\005clrjh\006cl"
    "rjhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006clr"
    "jnl\007clrjnle\007clrjnlh\004clrl\004clrt\005clrte\005clrth\006clrthe\005"
    "clrtl\006clrtle\006clrtlh\006clrtne\006clrtnh\007clrtnhe\006clrtnl\007c"
    "lrtnle\007clrtnlh\004clst\003clt\004clte\004clth\005clthe\004cltl\005cl"
    "tle\005cltlh\005cltne\005cltnh\006cltnhe\005cltnl\006cltnle\006cltnlh\003"
    "cly\005cmpsc\002cp\004cpdt\005cpsdr\004cpxt\004cpya\002cr\003crb\004crb"
    "e\004crbh\005crbhe\004crbl\005crble\005crblh\005crbne\005crbnh\006crbnh"
    "e\005crbnl\006crbnle\006crbnlh\003crj\004crje\004crjh\005crjhe\004crjl\005"
    "crjle\005crjlh\005crjne\005crjnh\006crjnhe\005crjnl\006crjnle\006crjnlh"
    "\003crl\003crt\004crte\004crth\005crthe\004crtl\005crtle\005crtlh\005cr"
    "tne\005crtnh\006crtnhe\005crtnl\006crtnle\006crtnlh\002cs\005csdtr\003c"
    "sg\004csst\005csxtr\003csy\004cu12\004cu14\004cu21\004cu24\004cu41\004c"
    "u42\005cudtr\004cuse\005cutfu\005cuutf\005cuxtr\003cvb\004cvbg\004cvby\003"
    "cvd\004cvdg\004cvdy\004cxbr\005cxfbr\006cxfbra\004cxfr\005cxftr\005cxgb"
    "r\006cxgbra\004cxgr\005cxgtr\006cxgtra\006cxlfbr\006cxlftr\006cxlgbr\006"
    "cxlgtr\004cxpt\003cxr\005cxstr\004cxtr\005cxutr\004cxzt\002cy\004czdt\004"
    "czxt\001d\002dd\003ddb\004ddbr\003ddr\004ddtr\005ddtra\002de\003deb\004"
    "debr\003der\005didbr\005diebr\002dl\003dlg\004dlgr\003dlr\002dp\002dr\003"
    "dsg\004dsgf\005dsgfr\004dsgr\004dxbr\003dxr\004dxtr\005dxtra\003ear\004"
    "ecag\004ectg\002ed\004edmk\005eedtr\005eextr\004efpc\004epsw\005esdtr\005"
    "esxtr\004etnd\002ex\004exrl\005fidbr\006fidbra\004fidr\005fidtr\005fieb"
    "r\006fiebra\004fier\005fixbr\006fixbra\004fixr\005fixtr\005flogr\003hdr"
    "\003her\002ic\003icm\004icmh\004icmy\003icy\005iedtr\005iextr\004iihf\004"
    "iihh\004iihl\004iilf\004iilh\004iill\003ipm\001j\002je\002jg\003jge\003"
    "jgh\004jghe\003jgl\004jgle\004jglh\003jgm\004jgne\004jgnh\005jgnhe\004j"
    "gnl\005jgnle\005jgnlh\004jgnm\004jgno\004jgnp\004jgnz\003jgo\003jgp\003"
    "jgz\002jh\003jhe\002jl\003jle\003jlh\002jm\003jne\003jnh\004jnhe\003jnl"
    "\004jnle\004jnlh\003jnm\003jno\003jnp\003jnz\002jo\002jp\002jz\003kdb\004"
    "kdbr\004kdtr\003keb\004kebr\004kimd\004klmd\002km\004kmac\003kmc\005kmc"
    "tr\003kmf\003kmo\004kxbr\004kxtr\001l\002la\003laa\004laag\004laal\005l"
    "aalg\003lae\004laey\003lam\004lamy\003lan\004lang\003lao\004laog\004lar"
    "l\003lat\003lax\004laxg\003lay\002lb\003lbh\003lbr\004lcbb\005lcdbr\005"
    "lcdfr\004lcdr\005lcebr\004lcer\005lcgfr\004lcgr\003lcr\005lcxbr\004lcxr"
    "\002ld\003lde\004ldeb\005ldebr\004lder\005ldetr\004ldgr\003ldr\005ldxbr"
    "\006ldxbra\004ldxr\005ldxtr\003ldy\002le\005ledbr\006ledbra\004ledr\005"
    "ledtr\003ler\005lexbr\006lexbra\004lexr\003ley\004lfas\003lfh\005lfhat\004"
    "lfpc\002lg\004lgat\003lgb\004lgbr\004lgdr\003lgf\004lgfi\004lgfr\005lgf"
    "rl\003lgh\004lghi\004lghr\005lghrl\003lgr\004lgrl\002lh\003lhh\003lhi\003"
    "lhr\004lhrl\003lhy\003llc\004llch\004llcr\004llgc\005llgcr\004llgf\006l"
    "lgfat\005llgfr\006llgfrl\004llgh\005llghr\006llghrl\004llgt\006llgtat\005"
    "llgtr\003llh\004llhh\004llhr\005llhrl\005llihf\005llihh\005llihl\005lli"
    "lf\005llilh\005llill\006llzrgf\002lm\003lmd\003lmg\003lmh\003lmy\005lnd"
    "br\005lndfr\004lndr\005lnebr\004lner\005lngfr\004lngr\003lnr\005lnxbr\004"
    "lnxr\003loc\004loce\005locfh\006locfhe\006locfhh\007locfhhe\006locfhl\007"
    "locfhle\007locfhlh\006locfhm\007locfhne\007locfhnh\010locfhnhe\007locfh"
    "nl\010locfhnle\010locfhnlh\007locfhnm\007locfhno\007locfhnp\007locfhnz\006"
    "locfho\006locfhp\006locfhr\007locfhre\007locfhrh\010locfhrhe\007locfhrl"
    "\010locfhrle\010locfhrlh\007locfhrm\010locfhrne\010locfhrnh\tlocfhrnhe\010"
    "locfhrnl\tlocfhrnle\tlocfhrnlh\010locfhrnm\010locfhrno\010locfhrnp\010l"
    "ocfhrnz\007locfhro\007locfhrp\007locfhrz\006locfhz\004locg\005locge\005"
    "locgh\006locghe\006locghi\007locghie\007locghih\010locghihe\007locghil\010"
    "locghile\010locghilh\007locghim\010locghine\010locghinh\tlocghinhe\010l"
    "ocghinl\tlocghinle\tlocghinlh\010locghinm\010locghino\010locghinp\010lo"
    "cghinz\007locghio\007locghip\007locghiz\005locgl\006locgle\006locglh\005"
    "locgm\006locgne\006locgnh\007locgnhe\006locgnl\007locgnle\007locgnlh\006"
    "locgnm\006locgno\006locgnp\006locgnz\005locgo\005locgp\005locgr\006locg"
    "re\006locgrh\007locgrhe\006locgrl\007locgrle\007locgrlh\006locgrm\007lo"
    "cgrne\007locgrnh\010locgrnhe\007locgrnl\010locgrnle\010locgrnlh\007locg"
    "rnm\007locgrno\007locgrnp\007locgrnz\006locgro\006locgrp\006locgrz\005l"
    "ocgz\004loch\005loche\006lochhi\007lochhie\007lochhih\010lochhihe\007lo"
    "chhil\010lochhile\010lochhilh\007lochhim\010lochhine\010lochhinh\tlochh"
    "inhe\010lochhinl\tlochhinle\tlochhinlh\010lochhinm\010lochhino\010lochh"
    "inp\010lochhinz\007lochhio\007lochhip\007lochhiz\005lochi\006lochie\006"
    "lochih\007lochihe\006lochil\007lochile\007lochilh\006lochim\007lochine\007"
    "lochinh\010lochinhe\007lochinl\010lochinle\010lochinlh\007lochinm\007lo"
    "chino\007lochinp\007lochinz\006lochio\006lochip\006lochiz\004locl\005lo"
    "cle\005loclh\004locm\005locne\005locnh\006locnhe\005locnl\006locnle\006"
    "locnlh\005locnm\005locno\005locnp\005locnz\004loco\004locp\004locr\005l"
    "ocre\005locrh\006locrhe\005locrl\006locrle\006locrlh\005locrm\006locrne"
    "\006locrnh\007locrnhe\006locrnl\007locrnle\007locrnlh\006locrnm\006locr"
    "no\006locrnp\006locrnz\005locro\005locrp\005locrz\004locz\003lpd\005lpd"
    "br\005lpdfr\004lpdg\004lpdr\005lpebr\004lper\005lpgfr\004lpgr\003lpq\003"
    "lpr\005lpxbr\004lpxr\002lr\004lrdr\004lrer\003lrl\003lrv\004lrvg\005lrv"
    "gr\004lrvh\004lrvr\002lt\005ltdbr\004ltdr\005ltdtr\005ltebr\004lter\003"
    "ltg\004ltgf\005ltgfr\004ltgr\003ltr\005ltxbr\004ltxr\005ltxtr\003lxd\004"
    "lxdb\005lxdbr\004lxdr\005lxdtr\003lxe\004lxeb\005lxebr\004lxer\003lxr\002"
    "ly\004lzdr\004lzer\004lzrf\004lzrg\004lzxr\001m\003mad\004madb\005madbr"
    "\004madr\003mae\004maeb\005maebr\004maer\003may\004mayh\005mayhr\004may"
    "l\005maylr\004mayr\002mc\002md\003mdb\004mdbr\003mde\004mdeb\005mdebr\004"
    "mder\003mdr\004mdtr\005mdtra\002me\003mee\004meeb\005meebr\004meer\003m"
    "er\003mfy\004mghi\002mh\003mhi\003mhy\002ml\003mlg\004mlgr\003mlr\002mp"
    "\002mr\002ms\003msd\004msdb\005msdbr\004msdr\003mse\004mseb\005msebr\004"
    "mser\004msfi\003msg\004msgf\005msgfi\005msgfr\004msgr\003msr\003msy\003"
    "mvc\005mvcin\004mvck\004mvcl\005mvcle\005mvclu\005mvghi\005mvhhi\004mvh"
    "i\003mvi\004mviy\003mvn\003mvo\004mvst\003mvz\004mxbr\003mxd\004mxdb\005"
    "mxdbr\004mxdr\003mxr\004mxtr\005mxtra\002my\003myh\004myhr\003myl\004my"
    "lr\003myr\001n\002nc\002ng\003ngr\004ngrk\002ni\004niai\004nihf\004nihh"
    "\004nihl\004nilf\004nilh\004nill\003niy\003nop\004nopr\002nr\003nrk\005"
    "ntstg\002ny\001o\002oc\002og\003ogr\004ogrk\002oi\004oihf\004oihh\004oi"
    "hl\004oilf\004oilh\004oill\003oiy\002or\003ork\002oy\004pack\003pcc\003"
    "pfd\005pfdrl\004pfpo\003pka\003pku\003plo\006popcnt\003ppa\004ppno\002p"
    "r\005qadtr\005qaxtr\005risbg\006risbgn\006risbhg\006risblg\003rll\004rl"
    "lg\005rnsbg\005rosbg\005rrdtr\005rrxtr\005rxsbg\001s\005sam24\005sam31\005"
    "sam64\003sar\002sd\003sdb\004sdbr\003sdr\004sdtr\005sdtra\002se\003seb\004"
    "sebr\003ser\005sfasr\004sfpc\002sg\003sgf\004sgfr\003sgr\004sgrk\002sh\003"
    "shy\002sl\003sla\004slag\004slak\003slb\004slbg\005slbgr\004slbr\004sld"
    "a\004sldl\004sldt\004slfi\003slg\004slgf\005slgfi\005slgfr\004slgr\005s"
    "lgrk\003sll\004sllg\004sllk\003slr\004slrk\004slxt\003sly\002sp\003spm\003"
    "sqd\004sqdb\005sqdbr\004sqdr\003sqe\004sqeb\005sqebr\004sqer\005sqxbr\004"
    "sqxr\002sr\003sra\004srag\004srak\004srda\004srdl\004srdt\003srk\003srl"
    "\004srlg\004srlk\004srnm\005srnmb\005srnmt\003srp\004srst\005srstu\004s"
    "rxt\002st\004stam\005stamy\003stc\004stch\004stck\005stcke\005stckf\004"
    "stcm\005stcmh\005stcmy\004stcy\003std\004stdy\003ste\004stey\004stfh\005"
    "stfle\005stfpc\003stg\005stgrl\003sth\004sthh\005sthrl\004sthy\003stm\004"
    "stmg\004stmh\004stmy\004stoc\005stoce\006stocfh\007stocfhe\007stocfhh\010"
    "stocfhhe\007stocfhl\010stocfhle\010stocfhlh\007stocfhm\010stocfhne\010s"
    "tocfhnh\tstocfhnhe\010stocfhnl\tstocfhnle\tstocfhnlh\010stocfhnm\010sto"
    "cfhno\010stocfhnp\010stocfhnz\007stocfho\007stocfhp\007stocfhz\005stocg"
    "\006stocge\006stocgh\007stocghe\006stocgl\007stocgle\007stocglh\006stoc"
    "gm\007stocgne\007stocgnh\010stocgnhe\007stocgnl\010stocgnle\010stocgnlh"
    "\007stocgnm\007stocgno\007stocgnp\007stocgnz\006stocgo\006stocgp\006sto"
    "cgz\005stoch\006stoche\005stocl\006stocle\006stoclh\005stocm\006stocne\006"
    "stocnh\007stocnhe\006stocnl\007stocnle\007stocnlh\006stocnm\006stocno\006"
    "stocnp\006stocnz\005stoco\005stocp\005stocz\004stpq\005strag\004strl\004"
    "strv\005strvg\005strvh\003sty\002su\003sur\003svc\002sw\003swr\004sxbr\003"
    "sxr\004sxtr\005sxtra\002sy\006tabort\003tam\004tbdr\005tbedr\006tbegin\007"
    "tbeginc\004tcdb\004tceb\004tcxb\005tdcdt\005tdcet\005tdcxt\005tdgdt\005"
    "tdget\005tdgxt\004tend\005thder\004thdr\002tm\003tmh\004tmhh\004tmhl\003"
    "tml\004tmlh\004tmll\003tmy\002tp\002tr\003tre\004troo\004trot\003trt\004"
    "trte\004trto\004trtr\005trtre\004trtt\002ts\004unpk\005unpka\005unpku\003"
    "upt\002va\003vab\003vac\004vacc\005vaccb\005vaccc\006vacccq\005vaccf\005"
    "vaccg\005vacch\005vaccq\004vacq\003vaf\003vag\003vah\003vaq\004vavg\005"
    "vavgb\005vavgf\005vavgg\005vavgh\005vavgl\006vavglb\006vavglf\006vavglg"
    "\006vavglh\004vcdg\005vcdgb\005vcdlg\006vcdlgb\004vceq\005vceqb\006vceq"
    "bs\005vceqf\006vceqfs\005vceqg\006vceqgs\005vceqh\006vceqhs\004vcgd\005"
    "vcgdb\003vch\004vchb\005vchbs\004vchf\005vchfs\004vchg\005vchgs\004vchh"
    "\005vchhs\004vchl\005vchlb\006vchlbs\005vchlf\006vchlfs\005vchlg\006vch"
    "lgs\005vchlh\006vchlhs\005vcksm\005vclgd\006vclgdb\004vclz\005vclzb\005"
    "vclzf\005vclzg\005vclzh\004vctz\005vctzb\005vctzf\005vctzg\005vctzh\003"
    "vec\004vecb\004vecf\004vecg\004vech\004vecl\005veclb\005veclf\005veclg\005"
    "veclh\005verim\006verimb\006verimf\006verimg\006verimh\005verll\006verl"
    "lb\006verllf\006verllg\006verllh\006verllv\007verllvb\007verllvf\007ver"
    "llvg\007verllvh\004vesl\005veslb\005veslf\005veslg\005veslh\005veslv\006"
    "veslvb\006veslvf\006veslvg\006veslvh\005vesra\006vesrab\006vesraf\006ve"
    "srag\006vesrah\006vesrav\007vesravb\007vesravf\007vesravg\007vesravh\005"
    "vesrl\006vesrlb\006vesrlf\006vesrlg\006vesrlh\006vesrlv\007vesrlvb\007v"
    "esrlvf\007vesrlvg\007vesrlvh\003vfa\005vfadb\004vfae\005vfaeb\006vfaebs"
    "\005vfaef\006vfaefs\005vfaeh\006vfaehs\006vfaezb\007vfaezbs\006vfaezf\007"
    "vfaezfs\006vfaezh\007vfaezhs\004vfce\006vfcedb\007vfcedbs\004vfch\006vf"
    "chdb\007vfchdbs\005vfche\007vfchedb\010vfchedbs\003vfd\005vfddb\004vfee"
    "\005vfeeb\006vfeebs\005vfeef\006vfeefs\005vfeeh\006vfeehs\006vfeezb\007"
    "vfeezbs\006vfeezf\007vfeezfs\006vfeezh\007vfeezhs\005vfene\006vfeneb\007"
    "vfenebs\006vfenef\007vfenefs\006vfeneh\007vfenehs\007vfenezb\010vfenezb"
    "s\007vfenezf\010vfenezfs\007vfenezh\010vfenezhs\003vfi\005vfidb\006vflc"
    "db\006vflndb\006vflpdb\003vfm\004vfma\006vfmadb\005vfmdb\004vfms\006vfm"
    "sdb\005vfpso\007vfpsodb\003vfs\005vfsdb\004vfsq\006vfsqdb\005vftci\007v"
    "ftcidb\004vgbm\004vgef\004vgeg\004vgfm\005vgfma\006vgfmab\006vgfmaf\006"
    "vgfmag\006vgfmah\005vgfmb\005vgfmf\005vgfmg\005vgfmh\003vgm\004vgmb\004"
    "vgmf\004vgmg\004vgmh\005vistr\006vistrb\007vistrbs\006vistrf\007vistrfs"
    "\006vistrh\007vistrhs\002vl\004vlbb\003vlc\004vlcb\004vlcf\004vlcg\004v"
    "lch\004vlde\005vldeb\004vleb\004vled\005vledb\004vlef\004vleg\004vleh\005"
    "vleib\005vleif\005vleig\005vleih\004vlgv\005vlgvb\005vlgvf\005vlgvg\005"
    "vlgvh\003vll\005vllez\006vllezb\006vllezf\006vllezg\006vllezh\003vlm\003"
    "vlp\004vlpb\004vlpf\004vlpg\004vlph\003vlr\005vlrep\006vlrepb\006vlrepf"
    "\006vlrepg\006vlreph\004vlvg\005vlvgb\005vlvgf\005vlvgg\005vlvgh\005vlv"
    "gp\004vmae\005vmaeb\005vmaef\005vmaeh\004vmah\005vmahb\005vmahf\005vmah"
    "h\004vmal\005vmalb\005vmale\006vmaleb\006vmalef\006vmaleh\005vmalf\005v"
    "malh\006vmalhb\006vmalhf\006vmalhh\006vmalhw\005vmalo\006vmalob\006vmal"
    "of\006vmaloh\004vmao\005vmaob\005vmaof\005vmaoh\003vme\004vmeb\004vmef\004"
    "vmeh\003vmh\004vmhb\004vmhf\004vmhh\003vml\004vmlb\004vmle\005vmleb\005"
    "vmlef\005vmleh\004vmlf\004vmlh\005vmlhb\005vmlhf\005vmlhh\005vmlhw\004v"
    "mlo\005vmlob\005vmlof\005vmloh\003vmn\004vmnb\004vmnf\004vmng\004vmnh\004"
    "vmnl\005vmnlb\005vmnlf\005vmnlg\005vmnlh\003vmo\004vmob\004vmof\004vmoh"
    "\004vmrh\005vmrhb\005vmrhf\005vmrhg\005vmrhh\004vmrl\005vmrlb\005vmrlf\005"
    "vmrlg\005vmrlh\003vmx\004vmxb\004vmxf\004vmxg\004vmxh\004vmxl\005vmxlb\005"
    "vmxlf\005vmxlg\005vmxlh\002vn\003vnc\003vno\004vnot\002vo\004vone\004vp"
    "di\005vperm\003vpk\004vpkf\004vpkg\004vpkh\005vpkls\006vpklsf\007vpklsf"
    "s\006vpklsg\007vpklsgs\006vpklsh\007vpklshs\004vpks\005vpksf\006vpksfs\005"
    "vpksg\006vpksgs\005vpksh\006vpkshs\006vpopct\004vrep\005vrepb\005vrepf\005"
    "vrepg\005vreph\005vrepi\006vrepib\006vrepif\006vrepig\006vrepih\002vs\003"
    "vsb\006vsbcbi\007vsbcbiq\004vsbi\005vsbiq\005vscbi\006vscbib\006vscbif\006"
    "vscbig\006vscbih\006vscbiq\005vscef\005vsceg\004vseg\005vsegb\005vsegf\005"
    "vsegh\004vsel\003vsf\003vsg\003vsh\003vsl\004vslb\005vsldb\003vsq\004vs"
    "ra\005vsrab\004vsrl\005vsrlb\003vst\005vsteb\005vstef\005vsteg\005vsteh"
    "\004vstl\004vstm\005vstrc\006vstrcb\007vstrcbs\006vstrcf\007vstrcfs\006"
    "vstrch\007vstrchs\007vstrczb\010vstrczbs\007vstrczf\010vstrczfs\007vstr"
    "czh\010vstrczhs\004vsum\005vsumb\005vsumg\006vsumgf\006vsumgh\005vsumh\005"
    "vsumq\006vsumqf\006vsumqg\003vtm\004vuph\005vuphb\005vuphf\005vuphh\004"
    "vupl\005vuplb\005vuplf\005vuplh\006vuplhb\006vuplhf\006vuplhh\006vuplhw"
    "\005vupll\006vupllb\006vupllf\006vupllh\002vx\005vzero\005wcdgb\006wcdl"
    "gb\005wcgdb\006wclgdb\005wfadb\003wfc\005wfcdb\006wfcedb\007wfcedbs\006"
    "wfchdb\007wfchdbs\007wfchedb\010wfchedbs\005wfddb\005wfidb\003wfk\005wf"
    "kdb\006wflcdb\006wflndb\006wflpdb\006wfmadb\005wfmdb\006wfmsdb\007wfpso"
    "db\005wfsdb\006wfsqdb\007wftcidb\005wldeb\005wledb\001x\002xc\002xg\003"
    "xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002xr\003xrk\002xy\003zap";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* ad */, SystemZ::AD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 14 /* adr */, SystemZ::ADR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 18 /* adtr */, SystemZ::ADTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 23 /* adtra */, SystemZ::ADTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 29 /* ae */, SystemZ::AE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 32 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 36 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 41 /* aer */, SystemZ::AER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 45 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 49 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 52 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 56 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 61 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 66 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 71 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 77 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 81 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 86 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 91 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 94 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 98 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 103 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 107 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 111 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 114 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 118 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 123 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 129 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 134 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 139 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 143 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 148 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 154 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 160 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 168 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 173 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 179 /* algsi */, SystemZ::ALGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 185 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 192 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 196 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 201 /* alsi */, SystemZ::ALSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 206 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 210 /* ap */, SystemZ::AP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 213 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 216 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 220 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 224 /* au */, SystemZ::AU, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 227 /* aur */, SystemZ::AUR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 231 /* aw */, SystemZ::AW, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 234 /* awr */, SystemZ::AWR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 238 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 243 /* axr */, SystemZ::AXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 247 /* axtr */, SystemZ::AXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 252 /* axtra */, SystemZ::AXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 258 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 261 /* b */, SystemZ::B, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 263 /* bal */, SystemZ::BAL, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 267 /* balr */, SystemZ::BALR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 272 /* bas */, SystemZ::BAS, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 276 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 281 /* bassm */, SystemZ::BASSM, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 287 /* bc */, SystemZ::BCAsm, Convert__U4Imm1_0__BDXAddr64Disp123_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp12 }, },
  { 290 /* bcr */, SystemZ::BCRAsm, Convert__U4Imm1_0__GR641_1, 0, { MCK_U4Imm, MCK_GR64 }, },
  { 294 /* bct */, SystemZ::BCT, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 298 /* bctg */, SystemZ::BCTG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 303 /* bctgr */, SystemZ::BCTGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 309 /* bctr */, SystemZ::BCTR, Convert__GR321_0__Tie0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 314 /* be */, SystemZ::BAsmE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 317 /* ber */, SystemZ::BRAsmE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 321 /* bh */, SystemZ::BAsmH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 324 /* bhe */, SystemZ::BAsmHE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 328 /* bher */, SystemZ::BRAsmHE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 333 /* bhr */, SystemZ::BRAsmH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 337 /* bl */, SystemZ::BAsmL, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 340 /* ble */, SystemZ::BAsmLE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 344 /* bler */, SystemZ::BRAsmLE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 349 /* blh */, SystemZ::BAsmLH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 353 /* blhr */, SystemZ::BRAsmLH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 358 /* blr */, SystemZ::BRAsmL, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 362 /* bm */, SystemZ::BAsmM, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 365 /* bmr */, SystemZ::BRAsmM, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 369 /* bne */, SystemZ::BAsmNE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 373 /* bner */, SystemZ::BRAsmNE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 378 /* bnh */, SystemZ::BAsmNH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 382 /* bnhe */, SystemZ::BAsmNHE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 387 /* bnher */, SystemZ::BRAsmNHE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 393 /* bnhr */, SystemZ::BRAsmNH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 398 /* bnl */, SystemZ::BAsmNL, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 402 /* bnle */, SystemZ::BAsmNLE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 407 /* bnler */, SystemZ::BRAsmNLE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 413 /* bnlh */, SystemZ::BAsmNLH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 418 /* bnlhr */, SystemZ::BRAsmNLH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 424 /* bnlr */, SystemZ::BRAsmNL, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 429 /* bnm */, SystemZ::BAsmNM, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 433 /* bnmr */, SystemZ::BRAsmNM, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 438 /* bno */, SystemZ::BAsmNO, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 442 /* bnor */, SystemZ::BRAsmNO, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 447 /* bnp */, SystemZ::BAsmNP, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 451 /* bnpr */, SystemZ::BRAsmNP, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 456 /* bnz */, SystemZ::BAsmNZ, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 460 /* bnzr */, SystemZ::BRAsmNZ, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 465 /* bo */, SystemZ::BAsmO, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 468 /* bor */, SystemZ::BRAsmO, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 472 /* bp */, SystemZ::BAsmP, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 475 /* bpp */, SystemZ::BPP, Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel16, MCK_BDXAddr64Disp12 }, },
  { 479 /* bpr */, SystemZ::BRAsmP, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 483 /* bprp */, SystemZ::BPRP, Convert__U4Imm1_0__PCRel121_1__PCRel241_2, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel12, MCK_PCRel24 }, },
  { 488 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 491 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, 0, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 496 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, 0, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 502 /* brc */, SystemZ::BRCAsm, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 506 /* brcl */, SystemZ::BRCLAsm, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 511 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 516 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 522 /* brcth */, SystemZ::BRCTH, Convert__GRH321_0__Tie0__PCRel321_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_PCRel32 }, },
  { 528 /* brxh */, SystemZ::BRXH, Convert__GR321_0__Tie0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 533 /* brxhg */, SystemZ::BRXHG, Convert__GR641_0__Tie0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 539 /* brxle */, SystemZ::BRXLE, Convert__GR321_0__Tie0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 545 /* brxlg */, SystemZ::BRXLG, Convert__GR641_0__Tie0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 551 /* bsm */, SystemZ::BSM, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 555 /* bxh */, SystemZ::BXH, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 559 /* bxhg */, SystemZ::BXHG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 564 /* bxle */, SystemZ::BXLE, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 569 /* bxleg */, SystemZ::BXLEG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 575 /* bz */, SystemZ::BAsmZ, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 578 /* bzr */, SystemZ::BRAsmZ, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 582 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 584 /* cd */, SystemZ::CD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 587 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 591 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 596 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 602 /* cdfbra */, SystemZ::CDFBRA, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 609 /* cdfr */, SystemZ::CDFR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 614 /* cdftr */, SystemZ::CDFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 620 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 626 /* cdgbra */, SystemZ::CDGBRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 633 /* cdgr */, SystemZ::CDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 638 /* cdgtr */, SystemZ::CDGTR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 644 /* cdgtra */, SystemZ::CDGTRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 651 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 658 /* cdlftr */, SystemZ::CDLFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 665 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 672 /* cdlgtr */, SystemZ::CDLGTR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 679 /* cdpt */, SystemZ::CDPT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 684 /* cdr */, SystemZ::CDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 688 /* cds */, SystemZ::CDS, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp12 }, },
  { 692 /* cdsg */, SystemZ::CDSG, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 697 /* cdstr */, SystemZ::CDSTR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 703 /* cdsy */, SystemZ::CDSY, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 708 /* cdtr */, SystemZ::CDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 713 /* cdutr */, SystemZ::CDUTR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 719 /* cdzt */, SystemZ::CDZT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 724 /* ce */, SystemZ::CE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 727 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 731 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 736 /* cedtr */, SystemZ::CEDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 742 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 748 /* cefbra */, SystemZ::CEFBRA, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 755 /* cefr */, SystemZ::CEFR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 760 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 766 /* cegbra */, SystemZ::CEGBRA, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 773 /* cegr */, SystemZ::CEGR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 778 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 785 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 792 /* cer */, SystemZ::CER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 796 /* cextr */, SystemZ::CEXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 802 /* cfc */, SystemZ::CFC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 806 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 812 /* cfdbra */, SystemZ::CFDBRA, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 819 /* cfdr */, SystemZ::CFDR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 824 /* cfdtr */, SystemZ::CFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 830 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 836 /* cfebra */, SystemZ::CFEBRA, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 843 /* cfer */, SystemZ::CFER, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 848 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 852 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 858 /* cfxbra */, SystemZ::CFXBRA, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 865 /* cfxr */, SystemZ::CFXR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 870 /* cfxtr */, SystemZ::CFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 876 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 879 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 885 /* cgdbra */, SystemZ::CGDBRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 892 /* cgdr */, SystemZ::CGDR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 897 /* cgdtr */, SystemZ::CGDTR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 903 /* cgdtra */, SystemZ::CGDTRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 910 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 916 /* cgebra */, SystemZ::CGEBRA, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 923 /* cger */, SystemZ::CGER, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 928 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 932 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 937 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 942 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 948 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 952 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 957 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 963 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 969 /* cgib */, SystemZ::CGIBAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 974 /* cgibe */, SystemZ::CGIBAsmE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 980 /* cgibh */, SystemZ::CGIBAsmH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 986 /* cgibhe */, SystemZ::CGIBAsmHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 993 /* cgibl */, SystemZ::CGIBAsmL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 999 /* cgible */, SystemZ::CGIBAsmLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1006 /* cgiblh */, SystemZ::CGIBAsmLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1013 /* cgibne */, SystemZ::CGIBAsmNE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1020 /* cgibnh */, SystemZ::CGIBAsmNH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1027 /* cgibnhe */, SystemZ::CGIBAsmNHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1035 /* cgibnl */, SystemZ::CGIBAsmNL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1042 /* cgibnle */, SystemZ::CGIBAsmNLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1050 /* cgibnlh */, SystemZ::CGIBAsmNLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1058 /* cgij */, SystemZ::CGIJAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1063 /* cgije */, SystemZ::CGIJAsmE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1069 /* cgijh */, SystemZ::CGIJAsmH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1075 /* cgijhe */, SystemZ::CGIJAsmHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1082 /* cgijl */, SystemZ::CGIJAsmL, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1088 /* cgijle */, SystemZ::CGIJAsmLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1095 /* cgijlh */, SystemZ::CGIJAsmLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1102 /* cgijne */, SystemZ::CGIJAsmNE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1109 /* cgijnh */, SystemZ::CGIJAsmNH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1116 /* cgijnhe */, SystemZ::CGIJAsmNHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1124 /* cgijnl */, SystemZ::CGIJAsmNL, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1131 /* cgijnle */, SystemZ::CGIJAsmNLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1139 /* cgijnlh */, SystemZ::CGIJAsmNLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1147 /* cgit */, SystemZ::CGITAsm, Convert__GR641_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 1152 /* cgite */, SystemZ::CGITAsmE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1158 /* cgith */, SystemZ::CGITAsmH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1164 /* cgithe */, SystemZ::CGITAsmHE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1171 /* cgitl */, SystemZ::CGITAsmL, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1177 /* cgitle */, SystemZ::CGITAsmLE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1184 /* cgitlh */, SystemZ::CGITAsmLH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1191 /* cgitne */, SystemZ::CGITAsmNE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1198 /* cgitnh */, SystemZ::CGITAsmNH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1205 /* cgitnhe */, SystemZ::CGITAsmNHE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1213 /* cgitnl */, SystemZ::CGITAsmNL, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1220 /* cgitnle */, SystemZ::CGITAsmNLE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1228 /* cgitnlh */, SystemZ::CGITAsmNLH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1236 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1240 /* cgrb */, SystemZ::CGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1245 /* cgrbe */, SystemZ::CGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1251 /* cgrbh */, SystemZ::CGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1257 /* cgrbhe */, SystemZ::CGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1264 /* cgrbl */, SystemZ::CGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1270 /* cgrble */, SystemZ::CGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1277 /* cgrblh */, SystemZ::CGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1284 /* cgrbne */, SystemZ::CGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1291 /* cgrbnh */, SystemZ::CGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1298 /* cgrbnhe */, SystemZ::CGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1306 /* cgrbnl */, SystemZ::CGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1313 /* cgrbnle */, SystemZ::CGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1321 /* cgrbnlh */, SystemZ::CGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1329 /* cgrj */, SystemZ::CGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 1334 /* cgrje */, SystemZ::CGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1340 /* cgrjh */, SystemZ::CGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1346 /* cgrjhe */, SystemZ::CGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1353 /* cgrjl */, SystemZ::CGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1359 /* cgrjle */, SystemZ::CGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1366 /* cgrjlh */, SystemZ::CGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1373 /* cgrjne */, SystemZ::CGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1380 /* cgrjnh */, SystemZ::CGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1387 /* cgrjnhe */, SystemZ::CGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1395 /* cgrjnl */, SystemZ::CGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1402 /* cgrjnle */, SystemZ::CGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1410 /* cgrjnlh */, SystemZ::CGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1418 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1423 /* cgrt */, SystemZ::CGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 1428 /* cgrte */, SystemZ::CGRTAsmE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1434 /* cgrth */, SystemZ::CGRTAsmH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1440 /* cgrthe */, SystemZ::CGRTAsmHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1447 /* cgrtl */, SystemZ::CGRTAsmL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1453 /* cgrtle */, SystemZ::CGRTAsmLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1460 /* cgrtlh */, SystemZ::CGRTAsmLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1467 /* cgrtne */, SystemZ::CGRTAsmNE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1474 /* cgrtnh */, SystemZ::CGRTAsmNH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1481 /* cgrtnhe */, SystemZ::CGRTAsmNHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1489 /* cgrtnl */, SystemZ::CGRTAsmNL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1496 /* cgrtnle */, SystemZ::CGRTAsmNLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1504 /* cgrtnlh */, SystemZ::CGRTAsmNLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1512 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1518 /* cgxbra */, SystemZ::CGXBRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1525 /* cgxr */, SystemZ::CGXR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1530 /* cgxtr */, SystemZ::CGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1536 /* cgxtra */, SystemZ::CGXTRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1543 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1546 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1550 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1556 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1560 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1565 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1570 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1574 /* cib */, SystemZ::CIBAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1578 /* cibe */, SystemZ::CIBAsmE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1583 /* cibh */, SystemZ::CIBAsmH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1588 /* cibhe */, SystemZ::CIBAsmHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1594 /* cibl */, SystemZ::CIBAsmL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1599 /* cible */, SystemZ::CIBAsmLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1605 /* ciblh */, SystemZ::CIBAsmLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1611 /* cibne */, SystemZ::CIBAsmNE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1617 /* cibnh */, SystemZ::CIBAsmNH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1623 /* cibnhe */, SystemZ::CIBAsmNHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1630 /* cibnl */, SystemZ::CIBAsmNL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1636 /* cibnle */, SystemZ::CIBAsmNLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1643 /* cibnlh */, SystemZ::CIBAsmNLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1650 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 1654 /* cij */, SystemZ::CIJAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1658 /* cije */, SystemZ::CIJAsmE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1663 /* cijh */, SystemZ::CIJAsmH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1668 /* cijhe */, SystemZ::CIJAsmHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1674 /* cijl */, SystemZ::CIJAsmL, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1679 /* cijle */, SystemZ::CIJAsmLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1685 /* cijlh */, SystemZ::CIJAsmLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1691 /* cijne */, SystemZ::CIJAsmNE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1697 /* cijnh */, SystemZ::CIJAsmNH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1703 /* cijnhe */, SystemZ::CIJAsmNHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1710 /* cijnl */, SystemZ::CIJAsmNL, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1716 /* cijnle */, SystemZ::CIJAsmNLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1723 /* cijnlh */, SystemZ::CIJAsmNLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1730 /* cit */, SystemZ::CITAsm, Convert__GR321_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 1734 /* cite */, SystemZ::CITAsmE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1739 /* cith */, SystemZ::CITAsmH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1744 /* cithe */, SystemZ::CITAsmHE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1750 /* citl */, SystemZ::CITAsmL, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1755 /* citle */, SystemZ::CITAsmLE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1761 /* citlh */, SystemZ::CITAsmLH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1767 /* citne */, SystemZ::CITAsmNE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1773 /* citnh */, SystemZ::CITAsmNH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1779 /* citnhe */, SystemZ::CITAsmNHE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1786 /* citnl */, SystemZ::CITAsmNL, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1792 /* citnle */, SystemZ::CITAsmNLE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1799 /* citnlh */, SystemZ::CITAsmNLH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1806 /* cksm */, SystemZ::CKSM, Convert__GR641_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR128 }, },
  { 1811 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1814 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 1818 /* clcl */, SystemZ::CLCL, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 1823 /* clcle */, SystemZ::CLCLE, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 1829 /* clclu */, SystemZ::CLCLU, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 1835 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1842 /* clfdtr */, SystemZ::CLFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1849 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1856 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1863 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 1868 /* clfit */, SystemZ::CLFITAsm, Convert__GR321_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_U16Imm, MCK_U4Imm }, },
  { 1874 /* clfite */, SystemZ::CLFITAsmE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1881 /* clfith */, SystemZ::CLFITAsmH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1888 /* clfithe */, SystemZ::CLFITAsmHE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1896 /* clfitl */, SystemZ::CLFITAsmL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1903 /* clfitle */, SystemZ::CLFITAsmLE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1911 /* clfitlh */, SystemZ::CLFITAsmLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1919 /* clfitne */, SystemZ::CLFITAsmNE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1927 /* clfitnh */, SystemZ::CLFITAsmNH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1935 /* clfitnhe */, SystemZ::CLFITAsmNHE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1944 /* clfitnl */, SystemZ::CLFITAsmNL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1952 /* clfitnle */, SystemZ::CLFITAsmNLE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1961 /* clfitnlh */, SystemZ::CLFITAsmNLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1970 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1977 /* clfxtr */, SystemZ::CLFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1984 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1988 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1995 /* clgdtr */, SystemZ::CLGDTR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2002 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 2009 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2014 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2020 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2026 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2033 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2040 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2047 /* clgib */, SystemZ::CLGIBAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2053 /* clgibe */, SystemZ::CLGIBAsmE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2060 /* clgibh */, SystemZ::CLGIBAsmH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2067 /* clgibhe */, SystemZ::CLGIBAsmHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2075 /* clgibl */, SystemZ::CLGIBAsmL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2082 /* clgible */, SystemZ::CLGIBAsmLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2090 /* clgiblh */, SystemZ::CLGIBAsmLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2098 /* clgibne */, SystemZ::CLGIBAsmNE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2106 /* clgibnh */, SystemZ::CLGIBAsmNH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2114 /* clgibnhe */, SystemZ::CLGIBAsmNHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2123 /* clgibnl */, SystemZ::CLGIBAsmNL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2131 /* clgibnle */, SystemZ::CLGIBAsmNLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2140 /* clgibnlh */, SystemZ::CLGIBAsmNLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2149 /* clgij */, SystemZ::CLGIJAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 2155 /* clgije */, SystemZ::CLGIJAsmE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2162 /* clgijh */, SystemZ::CLGIJAsmH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2169 /* clgijhe */, SystemZ::CLGIJAsmHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2177 /* clgijl */, SystemZ::CLGIJAsmL, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2184 /* clgijle */, SystemZ::CLGIJAsmLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2192 /* clgijlh */, SystemZ::CLGIJAsmLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2200 /* clgijne */, SystemZ::CLGIJAsmNE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2208 /* clgijnh */, SystemZ::CLGIJAsmNH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2216 /* clgijnhe */, SystemZ::CLGIJAsmNHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2225 /* clgijnl */, SystemZ::CLGIJAsmNL, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2233 /* clgijnle */, SystemZ::CLGIJAsmNLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2242 /* clgijnlh */, SystemZ::CLGIJAsmNLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2251 /* clgit */, SystemZ::CLGITAsm, Convert__GR641_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_U16Imm, MCK_U4Imm }, },
  { 2257 /* clgite */, SystemZ::CLGITAsmE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2264 /* clgith */, SystemZ::CLGITAsmH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2271 /* clgithe */, SystemZ::CLGITAsmHE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2279 /* clgitl */, SystemZ::CLGITAsmL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2286 /* clgitle */, SystemZ::CLGITAsmLE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2294 /* clgitlh */, SystemZ::CLGITAsmLH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2302 /* clgitne */, SystemZ::CLGITAsmNE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2310 /* clgitnh */, SystemZ::CLGITAsmNH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2318 /* clgitnhe */, SystemZ::CLGITAsmNHE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2327 /* clgitnl */, SystemZ::CLGITAsmNL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2335 /* clgitnle */, SystemZ::CLGITAsmNLE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2344 /* clgitnlh */, SystemZ::CLGITAsmNLH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2353 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2358 /* clgrb */, SystemZ::CLGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2364 /* clgrbe */, SystemZ::CLGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2371 /* clgrbh */, SystemZ::CLGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2378 /* clgrbhe */, SystemZ::CLGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2386 /* clgrbl */, SystemZ::CLGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2393 /* clgrble */, SystemZ::CLGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2401 /* clgrblh */, SystemZ::CLGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2409 /* clgrbne */, SystemZ::CLGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2417 /* clgrbnh */, SystemZ::CLGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2425 /* clgrbnhe */, SystemZ::CLGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2434 /* clgrbnl */, SystemZ::CLGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2442 /* clgrbnle */, SystemZ::CLGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2451 /* clgrbnlh */, SystemZ::CLGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2460 /* clgrj */, SystemZ::CLGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 2466 /* clgrje */, SystemZ::CLGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2473 /* clgrjh */, SystemZ::CLGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2480 /* clgrjhe */, SystemZ::CLGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2488 /* clgrjl */, SystemZ::CLGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2495 /* clgrjle */, SystemZ::CLGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2503 /* clgrjlh */, SystemZ::CLGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2511 /* clgrjne */, SystemZ::CLGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2519 /* clgrjnh */, SystemZ::CLGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2527 /* clgrjnhe */, SystemZ::CLGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2536 /* clgrjnl */, SystemZ::CLGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2544 /* clgrjnle */, SystemZ::CLGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2553 /* clgrjnlh */, SystemZ::CLGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2562 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2568 /* clgrt */, SystemZ::CLGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2574 /* clgrte */, SystemZ::CLGRTAsmE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2581 /* clgrth */, SystemZ::CLGRTAsmH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2588 /* clgrthe */, SystemZ::CLGRTAsmHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2596 /* clgrtl */, SystemZ::CLGRTAsmL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2603 /* clgrtle */, SystemZ::CLGRTAsmLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2611 /* clgrtlh */, SystemZ::CLGRTAsmLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2619 /* clgrtne */, SystemZ::CLGRTAsmNE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2627 /* clgrtnh */, SystemZ::CLGRTAsmNH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2635 /* clgrtnhe */, SystemZ::CLGRTAsmNHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2644 /* clgrtnl */, SystemZ::CLGRTAsmNL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2652 /* clgrtnle */, SystemZ::CLGRTAsmNLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2661 /* clgrtnlh */, SystemZ::CLGRTAsmNLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2670 /* clgt */, SystemZ::CLGTAsm, Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2675 /* clgte */, SystemZ::CLGTAsmE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2681 /* clgth */, SystemZ::CLGTAsmH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2687 /* clgthe */, SystemZ::CLGTAsmHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2694 /* clgtl */, SystemZ::CLGTAsmL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2700 /* clgtle */, SystemZ::CLGTAsmLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2707 /* clgtlh */, SystemZ::CLGTAsmLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2714 /* clgtne */, SystemZ::CLGTAsmNE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2721 /* clgtnh */, SystemZ::CLGTAsmNH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2728 /* clgtnhe */, SystemZ::CLGTAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2736 /* clgtnl */, SystemZ::CLGTAsmNL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2743 /* clgtnle */, SystemZ::CLGTAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2751 /* clgtnlh */, SystemZ::CLGTAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2759 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2766 /* clgxtr */, SystemZ::CLGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2773 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 2778 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2785 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2791 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2795 /* clib */, SystemZ::CLIBAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2800 /* clibe */, SystemZ::CLIBAsmE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2806 /* clibh */, SystemZ::CLIBAsmH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2812 /* clibhe */, SystemZ::CLIBAsmHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2819 /* clibl */, SystemZ::CLIBAsmL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2825 /* clible */, SystemZ::CLIBAsmLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2832 /* cliblh */, SystemZ::CLIBAsmLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2839 /* clibne */, SystemZ::CLIBAsmNE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2846 /* clibnh */, SystemZ::CLIBAsmNH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2853 /* clibnhe */, SystemZ::CLIBAsmNHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2861 /* clibnl */, SystemZ::CLIBAsmNL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2868 /* clibnle */, SystemZ::CLIBAsmNLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2876 /* clibnlh */, SystemZ::CLIBAsmNLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2884 /* clih */, SystemZ::CLIH, Convert__GRH321_0__U32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_U32Imm }, },
  { 2889 /* clij */, SystemZ::CLIJAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 2894 /* clije */, SystemZ::CLIJAsmE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2900 /* clijh */, SystemZ::CLIJAsmH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2906 /* clijhe */, SystemZ::CLIJAsmHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2913 /* clijl */, SystemZ::CLIJAsmL, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2919 /* clijle */, SystemZ::CLIJAsmLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2926 /* clijlh */, SystemZ::CLIJAsmLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2933 /* clijne */, SystemZ::CLIJAsmNE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2940 /* clijnh */, SystemZ::CLIJAsmNH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2947 /* clijnhe */, SystemZ::CLIJAsmNHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2955 /* clijnl */, SystemZ::CLIJAsmNL, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2962 /* clijnle */, SystemZ::CLIJAsmNLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2970 /* clijnlh */, SystemZ::CLIJAsmNLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2978 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2983 /* clm */, SystemZ::CLM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2987 /* clmh */, SystemZ::CLMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2992 /* clmy */, SystemZ::CLMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2997 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3001 /* clrb */, SystemZ::CLRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3006 /* clrbe */, SystemZ::CLRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3012 /* clrbh */, SystemZ::CLRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3018 /* clrbhe */, SystemZ::CLRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3025 /* clrbl */, SystemZ::CLRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3031 /* clrble */, SystemZ::CLRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3038 /* clrblh */, SystemZ::CLRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3045 /* clrbne */, SystemZ::CLRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3052 /* clrbnh */, SystemZ::CLRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3059 /* clrbnhe */, SystemZ::CLRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3067 /* clrbnl */, SystemZ::CLRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3074 /* clrbnle */, SystemZ::CLRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3082 /* clrbnlh */, SystemZ::CLRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3090 /* clrj */, SystemZ::CLRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3095 /* clrje */, SystemZ::CLRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3101 /* clrjh */, SystemZ::CLRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3107 /* clrjhe */, SystemZ::CLRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3114 /* clrjl */, SystemZ::CLRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3120 /* clrjle */, SystemZ::CLRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3127 /* clrjlh */, SystemZ::CLRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3134 /* clrjne */, SystemZ::CLRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3141 /* clrjnh */, SystemZ::CLRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3148 /* clrjnhe */, SystemZ::CLRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3156 /* clrjnl */, SystemZ::CLRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3163 /* clrjnle */, SystemZ::CLRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3171 /* clrjnlh */, SystemZ::CLRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3179 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3184 /* clrt */, SystemZ::CLRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3189 /* clrte */, SystemZ::CLRTAsmE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3195 /* clrth */, SystemZ::CLRTAsmH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3201 /* clrthe */, SystemZ::CLRTAsmHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3208 /* clrtl */, SystemZ::CLRTAsmL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3214 /* clrtle */, SystemZ::CLRTAsmLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3221 /* clrtlh */, SystemZ::CLRTAsmLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3228 /* clrtne */, SystemZ::CLRTAsmNE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3235 /* clrtnh */, SystemZ::CLRTAsmNH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3242 /* clrtnhe */, SystemZ::CLRTAsmNHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3250 /* clrtnl */, SystemZ::CLRTAsmNL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3257 /* clrtnle */, SystemZ::CLRTAsmNLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3265 /* clrtnlh */, SystemZ::CLRTAsmNLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3273 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3278 /* clt */, SystemZ::CLTAsm, Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3282 /* clte */, SystemZ::CLTAsmE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3287 /* clth */, SystemZ::CLTAsmH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3292 /* clthe */, SystemZ::CLTAsmHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3298 /* cltl */, SystemZ::CLTAsmL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3303 /* cltle */, SystemZ::CLTAsmLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3309 /* cltlh */, SystemZ::CLTAsmLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3315 /* cltne */, SystemZ::CLTAsmNE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3321 /* cltnh */, SystemZ::CLTAsmNH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3327 /* cltnhe */, SystemZ::CLTAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3334 /* cltnl */, SystemZ::CLTAsmNL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3340 /* cltnle */, SystemZ::CLTAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3347 /* cltnlh */, SystemZ::CLTAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3354 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3358 /* cmpsc */, SystemZ::CMPSC, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3364 /* cp */, SystemZ::CP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 3367 /* cpdt */, SystemZ::CPDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3372 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_2__FP641_1, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 3378 /* cpxt */, SystemZ::CPXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3383 /* cpya */, SystemZ::CPYA, Convert__AR321_0__AR321_1, 0, { MCK_AR32, MCK_AR32 }, },
  { 3388 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3391 /* crb */, SystemZ::CRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3395 /* crbe */, SystemZ::CRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3400 /* crbh */, SystemZ::CRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3405 /* crbhe */, SystemZ::CRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3411 /* crbl */, SystemZ::CRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3416 /* crble */, SystemZ::CRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3422 /* crblh */, SystemZ::CRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3428 /* crbne */, SystemZ::CRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3434 /* crbnh */, SystemZ::CRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3440 /* crbnhe */, SystemZ::CRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3447 /* crbnl */, SystemZ::CRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3453 /* crbnle */, SystemZ::CRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3460 /* crbnlh */, SystemZ::CRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3467 /* crj */, SystemZ::CRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3471 /* crje */, SystemZ::CRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3476 /* crjh */, SystemZ::CRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3481 /* crjhe */, SystemZ::CRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3487 /* crjl */, SystemZ::CRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3492 /* crjle */, SystemZ::CRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3498 /* crjlh */, SystemZ::CRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3504 /* crjne */, SystemZ::CRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3510 /* crjnh */, SystemZ::CRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3516 /* crjnhe */, SystemZ::CRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3523 /* crjnl */, SystemZ::CRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3529 /* crjnle */, SystemZ::CRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3536 /* crjnlh */, SystemZ::CRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3543 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3547 /* crt */, SystemZ::CRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3551 /* crte */, SystemZ::CRTAsmE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3556 /* crth */, SystemZ::CRTAsmH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3561 /* crthe */, SystemZ::CRTAsmHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3567 /* crtl */, SystemZ::CRTAsmL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3572 /* crtle */, SystemZ::CRTAsmLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3578 /* crtlh */, SystemZ::CRTAsmLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3584 /* crtne */, SystemZ::CRTAsmNE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3590 /* crtnh */, SystemZ::CRTAsmNH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3596 /* crtnhe */, SystemZ::CRTAsmNHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3603 /* crtnl */, SystemZ::CRTAsmNL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3609 /* crtnle */, SystemZ::CRTAsmNLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3616 /* crtnlh */, SystemZ::CRTAsmNLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3623 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3626 /* csdtr */, SystemZ::CSDTR, Convert__GR641_0__FP641_1__U4Imm1_2, 0, { MCK_GR64, MCK_FP64, MCK_U4Imm }, },
  { 3632 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3636 /* csst */, SystemZ::CSST, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 3641 /* csxtr */, SystemZ::CSXTR, Convert__GR1281_0__FP1281_1__U4Imm1_2, 0, { MCK_GR128, MCK_FP128, MCK_U4Imm }, },
  { 3647 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3651 /* cu12 */, SystemZ::CU12Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3651 /* cu12 */, SystemZ::CU12, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3656 /* cu14 */, SystemZ::CU14Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3656 /* cu14 */, SystemZ::CU14, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3661 /* cu21 */, SystemZ::CU21Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3661 /* cu21 */, SystemZ::CU21, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3666 /* cu24 */, SystemZ::CU24Opt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3666 /* cu24 */, SystemZ::CU24, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3671 /* cu41 */, SystemZ::CU41, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3676 /* cu42 */, SystemZ::CU42, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3681 /* cudtr */, SystemZ::CUDTR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 3687 /* cuse */, SystemZ::CUSE, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3692 /* cutfu */, SystemZ::CUTFUOpt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3692 /* cutfu */, SystemZ::CUTFU, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3698 /* cuutf */, SystemZ::CUUTFOpt, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 3698 /* cuutf */, SystemZ::CUUTF, Convert__GR1281_0__GR1281_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3704 /* cuxtr */, SystemZ::CUXTR, Convert__GR1281_0__FP1281_1, 0, { MCK_GR128, MCK_FP128 }, },
  { 3710 /* cvb */, SystemZ::CVB, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3714 /* cvbg */, SystemZ::CVBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3719 /* cvby */, SystemZ::CVBY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3724 /* cvd */, SystemZ::CVD, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3728 /* cvdg */, SystemZ::CVDG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3733 /* cvdy */, SystemZ::CVDY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3738 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3743 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 3749 /* cxfbra */, SystemZ::CXFBRA, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3756 /* cxfr */, SystemZ::CXFR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 3761 /* cxftr */, SystemZ::CXFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3767 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 3773 /* cxgbra */, SystemZ::CXGBRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3780 /* cxgr */, SystemZ::CXGR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 3785 /* cxgtr */, SystemZ::CXGTR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 3791 /* cxgtra */, SystemZ::CXGTRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3798 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3805 /* cxlftr */, SystemZ::CXLFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3812 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3819 /* cxlgtr */, SystemZ::CXLGTR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3826 /* cxpt */, SystemZ::CXPT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3831 /* cxr */, SystemZ::CXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3835 /* cxstr */, SystemZ::CXSTR, Convert__FP1281_0__GR1281_1, 0, { MCK_FP128, MCK_GR128 }, },
  { 3841 /* cxtr */, SystemZ::CXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3846 /* cxutr */, SystemZ::CXUTR, Convert__FP1281_0__GR1281_1, 0, { MCK_FP128, MCK_GR128 }, },
  { 3852 /* cxzt */, SystemZ::CXZT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3857 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3860 /* czdt */, SystemZ::CZDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3865 /* czxt */, SystemZ::CZXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, Feature_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3870 /* d */, SystemZ::D, Convert__GR1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 3872 /* dd */, SystemZ::DD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3875 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3879 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3884 /* ddr */, SystemZ::DDR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3888 /* ddtr */, SystemZ::DDTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 3893 /* ddtra */, SystemZ::DDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 3899 /* de */, SystemZ::DE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3902 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3906 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3911 /* der */, SystemZ::DER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3915 /* didbr */, SystemZ::DIDBR, Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 3921 /* diebr */, SystemZ::DIEBR, Convert__FP321_0__FP321_1__Tie0__FP321_2__U4Imm1_3, 0, { MCK_FP32, MCK_FP32, MCK_FP32, MCK_U4Imm }, },
  { 3927 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3930 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3934 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3939 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 3943 /* dp */, SystemZ::DP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 3946 /* dr */, SystemZ::DR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 3949 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3953 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3958 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 3964 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3969 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3974 /* dxr */, SystemZ::DXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3978 /* dxtr */, SystemZ::DXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 3983 /* dxtra */, SystemZ::DXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 3989 /* ear */, SystemZ::EAR, Convert__GR321_0__AR321_1, 0, { MCK_GR32, MCK_AR32 }, },
  { 3993 /* ecag */, SystemZ::ECAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 3998 /* ectg */, SystemZ::ECTG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 4003 /* ed */, SystemZ::ED, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4006 /* edmk */, SystemZ::EDMK, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4011 /* eedtr */, SystemZ::EEDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4017 /* eextr */, SystemZ::EEXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4023 /* efpc */, SystemZ::EFPC, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 4028 /* epsw */, SystemZ::EPSW, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4033 /* esdtr */, SystemZ::ESDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4039 /* esxtr */, SystemZ::ESXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4045 /* etnd */, SystemZ::ETND, Convert__GR321_0, Feature_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 4050 /* ex */, SystemZ::EX, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4053 /* exrl */, SystemZ::EXRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4058 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 4064 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4071 /* fidr */, SystemZ::FIDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4076 /* fidtr */, SystemZ::FIDTR, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4082 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 4088 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 4095 /* fier */, SystemZ::FIER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4100 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 4106 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4113 /* fixr */, SystemZ::FIXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4118 /* fixtr */, SystemZ::FIXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4124 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 4130 /* hdr */, SystemZ::HDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4134 /* her */, SystemZ::HER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4138 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4141 /* icm */, SystemZ::ICM, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 4145 /* icmh */, SystemZ::ICMH, Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4150 /* icmy */, SystemZ::ICMY, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4155 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4159 /* iedtr */, SystemZ::IEDTR, Convert__FP641_0__FP641_2__FP641_1, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4165 /* iextr */, SystemZ::IEXTR, Convert__FP1281_0__FP1281_2__FP1281_1, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 4171 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 4176 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 4181 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 4186 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 4191 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 4196 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 4201 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 4205 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4207 /* je */, SystemZ::JAsmE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4210 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4213 /* jge */, SystemZ::JGAsmE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4217 /* jgh */, SystemZ::JGAsmH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4221 /* jghe */, SystemZ::JGAsmHE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4226 /* jgl */, SystemZ::JGAsmL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4230 /* jgle */, SystemZ::JGAsmLE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4235 /* jglh */, SystemZ::JGAsmLH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4240 /* jgm */, SystemZ::JGAsmM, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4244 /* jgne */, SystemZ::JGAsmNE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4249 /* jgnh */, SystemZ::JGAsmNH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4254 /* jgnhe */, SystemZ::JGAsmNHE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4260 /* jgnl */, SystemZ::JGAsmNL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4265 /* jgnle */, SystemZ::JGAsmNLE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4271 /* jgnlh */, SystemZ::JGAsmNLH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4277 /* jgnm */, SystemZ::JGAsmNM, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4282 /* jgno */, SystemZ::JGAsmNO, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4287 /* jgnp */, SystemZ::JGAsmNP, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4292 /* jgnz */, SystemZ::JGAsmNZ, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4297 /* jgo */, SystemZ::JGAsmO, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4301 /* jgp */, SystemZ::JGAsmP, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4305 /* jgz */, SystemZ::JGAsmZ, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 4309 /* jh */, SystemZ::JAsmH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4312 /* jhe */, SystemZ::JAsmHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4316 /* jl */, SystemZ::JAsmL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4319 /* jle */, SystemZ::JAsmLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4323 /* jlh */, SystemZ::JAsmLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4327 /* jm */, SystemZ::JAsmM, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4330 /* jne */, SystemZ::JAsmNE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4334 /* jnh */, SystemZ::JAsmNH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4338 /* jnhe */, SystemZ::JAsmNHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4343 /* jnl */, SystemZ::JAsmNL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4347 /* jnle */, SystemZ::JAsmNLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4352 /* jnlh */, SystemZ::JAsmNLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4357 /* jnm */, SystemZ::JAsmNM, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4361 /* jno */, SystemZ::JAsmNO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4365 /* jnp */, SystemZ::JAsmNP, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4369 /* jnz */, SystemZ::JAsmNZ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4373 /* jo */, SystemZ::JAsmO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4376 /* jp */, SystemZ::JAsmP, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4379 /* jz */, SystemZ::JAsmZ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 4382 /* kdb */, SystemZ::KDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4386 /* kdbr */, SystemZ::KDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4391 /* kdtr */, SystemZ::KDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4396 /* keb */, SystemZ::KEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4400 /* kebr */, SystemZ::KEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4405 /* kimd */, SystemZ::KIMD, Convert__GR1281_1__GR641_0__Tie0, 0, { MCK_GR64, MCK_GR128 }, },
  { 4410 /* klmd */, SystemZ::KLMD, Convert__GR1281_1__GR641_0__Tie0, 0, { MCK_GR64, MCK_GR128 }, },
  { 4415 /* km */, SystemZ::KM, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 4418 /* kmac */, SystemZ::KMAC, Convert__GR1281_1__GR641_0__Tie0, 0, { MCK_GR64, MCK_GR128 }, },
  { 4423 /* kmc */, SystemZ::KMC, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 4427 /* kmctr */, SystemZ::KMCTR, Convert__GR1281_0__GR1281_2__GR1281_1__Tie0__Tie1__Tie2, Feature_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128, MCK_GR128 }, },
  { 4433 /* kmf */, SystemZ::KMF, Convert__GR1281_0__GR1281_1__Tie0__Tie1, Feature_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4437 /* kmo */, SystemZ::KMO, Convert__GR1281_0__GR1281_1__Tie0__Tie1, Feature_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4441 /* kxbr */, SystemZ::KXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4446 /* kxtr */, SystemZ::KXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4451 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4453 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4456 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4460 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4465 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4470 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4476 /* lae */, SystemZ::LAE, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4480 /* laey */, SystemZ::LAEY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4485 /* lam */, SystemZ::LAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 4489 /* lamy */, SystemZ::LAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 4494 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4498 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4503 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4507 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4512 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4517 /* lat */, SystemZ::LAT, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4521 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4525 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4530 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4534 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4537 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4541 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4545 /* lcbb */, SystemZ::LCBB, Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_GR32, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 4550 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4556 /* lcdfr */, SystemZ::LCDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4562 /* lcdr */, SystemZ::LCDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4567 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4573 /* lcer */, SystemZ::LCER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4578 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4584 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4589 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4593 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4599 /* lcxr */, SystemZ::LCXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4604 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4607 /* lde */, SystemZ::LDE, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4611 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4616 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 4622 /* lder */, SystemZ::LDER, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 4627 /* ldetr */, SystemZ::LDETR, Convert__FP641_0__FP321_1__U4Imm1_2, 0, { MCK_FP64, MCK_FP32, MCK_U4Imm }, },
  { 4633 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 4638 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4642 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4648 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4655 /* ldxr */, SystemZ::LDXR, Convert__FP641_0__FP1281_1, 0, { MCK_FP64, MCK_FP128 }, },
  { 4660 /* ldxtr */, SystemZ::LDXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4666 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 4670 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4673 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 4679 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4686 /* ledr */, SystemZ::LEDR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 4691 /* ledtr */, SystemZ::LEDTR, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, 0, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4697 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4701 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4707 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4714 /* lexr */, SystemZ::LEXR, Convert__FP321_0__FP1281_1, 0, { MCK_FP32, MCK_FP128 }, },
  { 4719 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 4723 /* lfas */, SystemZ::LFAS, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 4728 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4732 /* lfhat */, SystemZ::LFHAT, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4738 /* lfpc */, SystemZ::LFPC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 4743 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4746 /* lgat */, SystemZ::LGAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4751 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4755 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4760 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 4765 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4769 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 4774 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4779 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4785 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4789 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 4794 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4799 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4805 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4809 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4814 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4817 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4821 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 4825 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4829 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 4834 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4838 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4842 /* llch */, SystemZ::LLCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4847 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4852 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4857 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4863 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4868 /* llgfat */, SystemZ::LLGFAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4875 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4881 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4888 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4893 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4899 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4906 /* llgt */, SystemZ::LLGT, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4911 /* llgtat */, SystemZ::LLGTAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4918 /* llgtr */, SystemZ::LLGTR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4924 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4928 /* llhh */, SystemZ::LLHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4933 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4938 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 4944 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 4950 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4956 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4962 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 4968 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4974 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4980 /* llzrgf */, SystemZ::LLZRGF, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4987 /* lm */, SystemZ::LM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 4990 /* lmd */, SystemZ::LMD, Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 4994 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4998 /* lmh */, SystemZ::LMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5002 /* lmy */, SystemZ::LMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5006 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5012 /* lndfr */, SystemZ::LNDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5018 /* lndr */, SystemZ::LNDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5023 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5029 /* lner */, SystemZ::LNER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5034 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5040 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5045 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5049 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5055 /* lnxr */, SystemZ::LNXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5060 /* loc */, SystemZ::LOCAsm, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5064 /* loce */, SystemZ::LOCAsmE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5069 /* locfh */, SystemZ::LOCFHAsm, Convert__GRH321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5075 /* locfhe */, SystemZ::LOCFHAsmE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5082 /* locfhh */, SystemZ::LOCFHAsmH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5089 /* locfhhe */, SystemZ::LOCFHAsmHE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5097 /* locfhl */, SystemZ::LOCFHAsmL, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5104 /* locfhle */, SystemZ::LOCFHAsmLE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5112 /* locfhlh */, SystemZ::LOCFHAsmLH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5120 /* locfhm */, SystemZ::LOCFHAsmM, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5127 /* locfhne */, SystemZ::LOCFHAsmNE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5135 /* locfhnh */, SystemZ::LOCFHAsmNH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5143 /* locfhnhe */, SystemZ::LOCFHAsmNHE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5152 /* locfhnl */, SystemZ::LOCFHAsmNL, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5160 /* locfhnle */, SystemZ::LOCFHAsmNLE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5169 /* locfhnlh */, SystemZ::LOCFHAsmNLH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5178 /* locfhnm */, SystemZ::LOCFHAsmNM, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5186 /* locfhno */, SystemZ::LOCFHAsmNO, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5194 /* locfhnp */, SystemZ::LOCFHAsmNP, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5202 /* locfhnz */, SystemZ::LOCFHAsmNZ, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5210 /* locfho */, SystemZ::LOCFHAsmO, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5217 /* locfhp */, SystemZ::LOCFHAsmP, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5224 /* locfhr */, SystemZ::LOCFHRAsm, Convert__GRH321_0__Tie0__GRH321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32, MCK_U4Imm }, },
  { 5231 /* locfhre */, SystemZ::LOCFHRAsmE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5239 /* locfhrh */, SystemZ::LOCFHRAsmH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5247 /* locfhrhe */, SystemZ::LOCFHRAsmHE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5256 /* locfhrl */, SystemZ::LOCFHRAsmL, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5264 /* locfhrle */, SystemZ::LOCFHRAsmLE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5273 /* locfhrlh */, SystemZ::LOCFHRAsmLH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5282 /* locfhrm */, SystemZ::LOCFHRAsmM, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5290 /* locfhrne */, SystemZ::LOCFHRAsmNE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5299 /* locfhrnh */, SystemZ::LOCFHRAsmNH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5308 /* locfhrnhe */, SystemZ::LOCFHRAsmNHE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5318 /* locfhrnl */, SystemZ::LOCFHRAsmNL, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5327 /* locfhrnle */, SystemZ::LOCFHRAsmNLE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5337 /* locfhrnlh */, SystemZ::LOCFHRAsmNLH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5347 /* locfhrnm */, SystemZ::LOCFHRAsmNM, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5356 /* locfhrno */, SystemZ::LOCFHRAsmNO, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5365 /* locfhrnp */, SystemZ::LOCFHRAsmNP, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5374 /* locfhrnz */, SystemZ::LOCFHRAsmNZ, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5383 /* locfhro */, SystemZ::LOCFHRAsmO, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5391 /* locfhrp */, SystemZ::LOCFHRAsmP, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5399 /* locfhrz */, SystemZ::LOCFHRAsmZ, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5407 /* locfhz */, SystemZ::LOCFHAsmZ, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5414 /* locg */, SystemZ::LOCGAsm, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5419 /* locge */, SystemZ::LOCGAsmE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5425 /* locgh */, SystemZ::LOCGAsmH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5431 /* locghe */, SystemZ::LOCGAsmHE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5438 /* locghi */, SystemZ::LOCGHIAsm, Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 5445 /* locghie */, SystemZ::LOCGHIAsmE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5453 /* locghih */, SystemZ::LOCGHIAsmH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5461 /* locghihe */, SystemZ::LOCGHIAsmHE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5470 /* locghil */, SystemZ::LOCGHIAsmL, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5478 /* locghile */, SystemZ::LOCGHIAsmLE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5487 /* locghilh */, SystemZ::LOCGHIAsmLH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5496 /* locghim */, SystemZ::LOCGHIAsmM, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5504 /* locghine */, SystemZ::LOCGHIAsmNE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5513 /* locghinh */, SystemZ::LOCGHIAsmNH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5522 /* locghinhe */, SystemZ::LOCGHIAsmNHE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5532 /* locghinl */, SystemZ::LOCGHIAsmNL, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5541 /* locghinle */, SystemZ::LOCGHIAsmNLE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5551 /* locghinlh */, SystemZ::LOCGHIAsmNLH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5561 /* locghinm */, SystemZ::LOCGHIAsmNM, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5570 /* locghino */, SystemZ::LOCGHIAsmNO, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5579 /* locghinp */, SystemZ::LOCGHIAsmNP, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5588 /* locghinz */, SystemZ::LOCGHIAsmNZ, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5597 /* locghio */, SystemZ::LOCGHIAsmO, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5605 /* locghip */, SystemZ::LOCGHIAsmP, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5613 /* locghiz */, SystemZ::LOCGHIAsmZ, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5621 /* locgl */, SystemZ::LOCGAsmL, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5627 /* locgle */, SystemZ::LOCGAsmLE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5634 /* locglh */, SystemZ::LOCGAsmLH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5641 /* locgm */, SystemZ::LOCGAsmM, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5647 /* locgne */, SystemZ::LOCGAsmNE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5654 /* locgnh */, SystemZ::LOCGAsmNH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5661 /* locgnhe */, SystemZ::LOCGAsmNHE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5669 /* locgnl */, SystemZ::LOCGAsmNL, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5676 /* locgnle */, SystemZ::LOCGAsmNLE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5684 /* locgnlh */, SystemZ::LOCGAsmNLH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5692 /* locgnm */, SystemZ::LOCGAsmNM, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5699 /* locgno */, SystemZ::LOCGAsmNO, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5706 /* locgnp */, SystemZ::LOCGAsmNP, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5713 /* locgnz */, SystemZ::LOCGAsmNZ, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5720 /* locgo */, SystemZ::LOCGAsmO, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5726 /* locgp */, SystemZ::LOCGAsmP, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5732 /* locgr */, SystemZ::LOCGRAsm, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 5738 /* locgre */, SystemZ::LOCGRAsmE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5745 /* locgrh */, SystemZ::LOCGRAsmH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5752 /* locgrhe */, SystemZ::LOCGRAsmHE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5760 /* locgrl */, SystemZ::LOCGRAsmL, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5767 /* locgrle */, SystemZ::LOCGRAsmLE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5775 /* locgrlh */, SystemZ::LOCGRAsmLH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5783 /* locgrm */, SystemZ::LOCGRAsmM, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5790 /* locgrne */, SystemZ::LOCGRAsmNE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5798 /* locgrnh */, SystemZ::LOCGRAsmNH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5806 /* locgrnhe */, SystemZ::LOCGRAsmNHE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5815 /* locgrnl */, SystemZ::LOCGRAsmNL, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5823 /* locgrnle */, SystemZ::LOCGRAsmNLE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5832 /* locgrnlh */, SystemZ::LOCGRAsmNLH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5841 /* locgrnm */, SystemZ::LOCGRAsmNM, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5849 /* locgrno */, SystemZ::LOCGRAsmNO, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5857 /* locgrnp */, SystemZ::LOCGRAsmNP, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5865 /* locgrnz */, SystemZ::LOCGRAsmNZ, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5873 /* locgro */, SystemZ::LOCGRAsmO, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5880 /* locgrp */, SystemZ::LOCGRAsmP, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5887 /* locgrz */, SystemZ::LOCGRAsmZ, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5894 /* locgz */, SystemZ::LOCGAsmZ, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5900 /* loch */, SystemZ::LOCAsmH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5905 /* loche */, SystemZ::LOCAsmHE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5911 /* lochhi */, SystemZ::LOCHHIAsm, Convert__GRH321_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm, MCK_U4Imm }, },
  { 5918 /* lochhie */, SystemZ::LOCHHIAsmE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5926 /* lochhih */, SystemZ::LOCHHIAsmH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5934 /* lochhihe */, SystemZ::LOCHHIAsmHE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5943 /* lochhil */, SystemZ::LOCHHIAsmL, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5951 /* lochhile */, SystemZ::LOCHHIAsmLE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5960 /* lochhilh */, SystemZ::LOCHHIAsmLH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5969 /* lochhim */, SystemZ::LOCHHIAsmM, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5977 /* lochhine */, SystemZ::LOCHHIAsmNE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5986 /* lochhinh */, SystemZ::LOCHHIAsmNH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5995 /* lochhinhe */, SystemZ::LOCHHIAsmNHE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6005 /* lochhinl */, SystemZ::LOCHHIAsmNL, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6014 /* lochhinle */, SystemZ::LOCHHIAsmNLE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6024 /* lochhinlh */, SystemZ::LOCHHIAsmNLH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6034 /* lochhinm */, SystemZ::LOCHHIAsmNM, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6043 /* lochhino */, SystemZ::LOCHHIAsmNO, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6052 /* lochhinp */, SystemZ::LOCHHIAsmNP, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6061 /* lochhinz */, SystemZ::LOCHHIAsmNZ, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6070 /* lochhio */, SystemZ::LOCHHIAsmO, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6078 /* lochhip */, SystemZ::LOCHHIAsmP, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6086 /* lochhiz */, SystemZ::LOCHHIAsmZ, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6094 /* lochi */, SystemZ::LOCHIAsm, Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 6100 /* lochie */, SystemZ::LOCHIAsmE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6107 /* lochih */, SystemZ::LOCHIAsmH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6114 /* lochihe */, SystemZ::LOCHIAsmHE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6122 /* lochil */, SystemZ::LOCHIAsmL, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6129 /* lochile */, SystemZ::LOCHIAsmLE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6137 /* lochilh */, SystemZ::LOCHIAsmLH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6145 /* lochim */, SystemZ::LOCHIAsmM, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6152 /* lochine */, SystemZ::LOCHIAsmNE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6160 /* lochinh */, SystemZ::LOCHIAsmNH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6168 /* lochinhe */, SystemZ::LOCHIAsmNHE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6177 /* lochinl */, SystemZ::LOCHIAsmNL, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6185 /* lochinle */, SystemZ::LOCHIAsmNLE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6194 /* lochinlh */, SystemZ::LOCHIAsmNLH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6203 /* lochinm */, SystemZ::LOCHIAsmNM, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6211 /* lochino */, SystemZ::LOCHIAsmNO, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6219 /* lochinp */, SystemZ::LOCHIAsmNP, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6227 /* lochinz */, SystemZ::LOCHIAsmNZ, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6235 /* lochio */, SystemZ::LOCHIAsmO, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6242 /* lochip */, SystemZ::LOCHIAsmP, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6249 /* lochiz */, SystemZ::LOCHIAsmZ, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6256 /* locl */, SystemZ::LOCAsmL, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6261 /* locle */, SystemZ::LOCAsmLE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6267 /* loclh */, SystemZ::LOCAsmLH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6273 /* locm */, SystemZ::LOCAsmM, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6278 /* locne */, SystemZ::LOCAsmNE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6284 /* locnh */, SystemZ::LOCAsmNH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6290 /* locnhe */, SystemZ::LOCAsmNHE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6297 /* locnl */, SystemZ::LOCAsmNL, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6303 /* locnle */, SystemZ::LOCAsmNLE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6310 /* locnlh */, SystemZ::LOCAsmNLH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6317 /* locnm */, SystemZ::LOCAsmNM, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6323 /* locno */, SystemZ::LOCAsmNO, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6329 /* locnp */, SystemZ::LOCAsmNP, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6335 /* locnz */, SystemZ::LOCAsmNZ, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6341 /* loco */, SystemZ::LOCAsmO, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6346 /* locp */, SystemZ::LOCAsmP, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6351 /* locr */, SystemZ::LOCRAsm, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 6356 /* locre */, SystemZ::LOCRAsmE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6362 /* locrh */, SystemZ::LOCRAsmH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6368 /* locrhe */, SystemZ::LOCRAsmHE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6375 /* locrl */, SystemZ::LOCRAsmL, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6381 /* locrle */, SystemZ::LOCRAsmLE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6388 /* locrlh */, SystemZ::LOCRAsmLH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6395 /* locrm */, SystemZ::LOCRAsmM, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6401 /* locrne */, SystemZ::LOCRAsmNE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6408 /* locrnh */, SystemZ::LOCRAsmNH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6415 /* locrnhe */, SystemZ::LOCRAsmNHE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6423 /* locrnl */, SystemZ::LOCRAsmNL, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6430 /* locrnle */, SystemZ::LOCRAsmNLE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6438 /* locrnlh */, SystemZ::LOCRAsmNLH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6446 /* locrnm */, SystemZ::LOCRAsmNM, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6453 /* locrno */, SystemZ::LOCRAsmNO, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6460 /* locrnp */, SystemZ::LOCRAsmNP, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6467 /* locrnz */, SystemZ::LOCRAsmNZ, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6474 /* locro */, SystemZ::LOCRAsmO, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6480 /* locrp */, SystemZ::LOCRAsmP, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6486 /* locrz */, SystemZ::LOCRAsmZ, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6492 /* locz */, SystemZ::LOCAsmZ, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6497 /* lpd */, SystemZ::LPD, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, Feature_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6501 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6507 /* lpdfr */, SystemZ::LPDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6513 /* lpdg */, SystemZ::LPDG, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, Feature_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6518 /* lpdr */, SystemZ::LPDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6523 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6529 /* lper */, SystemZ::LPER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6534 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 6540 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6545 /* lpq */, SystemZ::LPQ, Convert__GR1281_0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 6549 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6553 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6559 /* lpxr */, SystemZ::LPXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6564 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6567 /* lrdr */, SystemZ::LRDR, Convert__FP641_0__FP1281_1, 0, { MCK_FP64, MCK_FP128 }, },
  { 6572 /* lrer */, SystemZ::LRER, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 6577 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 6581 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6585 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6590 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6596 /* lrvh */, SystemZ::LRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6601 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6606 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6609 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6615 /* ltdr */, SystemZ::LTDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6620 /* ltdtr */, SystemZ::LTDTR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6626 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6632 /* lter */, SystemZ::LTER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6637 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6641 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6646 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 6652 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6657 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6661 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6667 /* ltxr */, SystemZ::LTXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6672 /* ltxtr */, SystemZ::LTXTR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6678 /* lxd */, SystemZ::LXD, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 6682 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 6687 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 6693 /* lxdr */, SystemZ::LXDR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 6698 /* lxdtr */, SystemZ::LXDTR, Convert__FP1281_0__FP641_1__U4Imm1_2, 0, { MCK_FP128, MCK_FP64, MCK_U4Imm }, },
  { 6704 /* lxe */, SystemZ::LXE, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 6708 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 6713 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 6719 /* lxer */, SystemZ::LXER, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 6724 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6728 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6731 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 6736 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 6741 /* lzrf */, SystemZ::LZRF, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6746 /* lzrg */, SystemZ::LZRG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6751 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 6756 /* m */, SystemZ::M, Convert__GR1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 6758 /* mad */, SystemZ::MAD, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6762 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6767 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 6773 /* madr */, SystemZ::MADR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 6778 /* mae */, SystemZ::MAE, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6782 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6787 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 6793 /* maer */, SystemZ::MAER, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 6798 /* may */, SystemZ::MAY, Convert__FP1281_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6802 /* mayh */, SystemZ::MAYH, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6807 /* mayhr */, SystemZ::MAYHR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 6813 /* mayl */, SystemZ::MAYL, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6818 /* maylr */, SystemZ::MAYLR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 6824 /* mayr */, SystemZ::MAYR, Convert__FP1281_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 6829 /* mc */, SystemZ::MC, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 6832 /* md */, SystemZ::MD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6835 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6839 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6844 /* mde */, SystemZ::MDE, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6848 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6853 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 6859 /* mder */, SystemZ::MDER, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 6864 /* mdr */, SystemZ::MDR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6868 /* mdtr */, SystemZ::MDTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 6873 /* mdtra */, SystemZ::MDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 6879 /* me */, SystemZ::ME, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6882 /* mee */, SystemZ::MEE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6886 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6891 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6897 /* meer */, SystemZ::MEER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6902 /* mer */, SystemZ::MER, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 6906 /* mfy */, SystemZ::MFY, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 6910 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 6915 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6918 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 6922 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6926 /* ml */, SystemZ::ML, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 6929 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 6933 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 6938 /* mlr */, SystemZ::MLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 6942 /* mp */, SystemZ::MP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 6945 /* mr */, SystemZ::MR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 6948 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6951 /* msd */, SystemZ::MSD, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6955 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6960 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 6966 /* msdr */, SystemZ::MSDR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 6971 /* mse */, SystemZ::MSE, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6975 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6980 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 6986 /* mser */, SystemZ::MSER, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 6991 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 6996 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7000 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7005 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 7011 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 7017 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7022 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7026 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7030 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7034 /* mvcin */, SystemZ::MVCIN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7040 /* mvck */, SystemZ::MVCK, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7045 /* mvcl */, SystemZ::MVCL, Convert__GR1281_0__GR1281_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR128 }, },
  { 7050 /* mvcle */, SystemZ::MVCLE, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp122_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7056 /* mvclu */, SystemZ::MVCLU, Convert__GR1281_0__GR1281_1__Tie0__Tie1__BDAddr32Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 7062 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7068 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7074 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7079 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7083 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7088 /* mvn */, SystemZ::MVN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7092 /* mvo */, SystemZ::MVO, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7096 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7101 /* mvz */, SystemZ::MVZ, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7105 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7110 /* mxd */, SystemZ::MXD, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7114 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7119 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 7125 /* mxdr */, SystemZ::MXDR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 7130 /* mxr */, SystemZ::MXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7134 /* mxtr */, SystemZ::MXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 7139 /* mxtra */, SystemZ::MXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 7145 /* my */, SystemZ::MY, Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7148 /* myh */, SystemZ::MYH, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7152 /* myhr */, SystemZ::MYHR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7157 /* myl */, SystemZ::MYL, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7161 /* mylr */, SystemZ::MYLR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7166 /* myr */, SystemZ::MYR, Convert__FP1281_0__FP641_1__FP641_2, 0, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 7170 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7172 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7175 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7178 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7182 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7187 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7190 /* niai */, SystemZ::NIAI, Convert__U4Imm1_0__U4Imm1_1, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_U4Imm }, },
  { 7195 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 7200 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7205 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7210 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 7215 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7220 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7225 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7229 /* nop */, SystemZ::BCAsm, Convert__imm_95_0__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 7233 /* nopr */, SystemZ::BCRAsm, Convert__imm_95_0__GR641_0, 0, { MCK_GR64 }, },
  { 7238 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7241 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7245 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7251 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7254 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7256 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7259 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7262 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7266 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7271 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7274 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 7279 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7284 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7289 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 7294 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7299 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7304 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7308 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7311 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7315 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7318 /* pack */, SystemZ::PACK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7323 /* pcc */, SystemZ::PCC, Convert_NoOperands, Feature_FeatureMessageSecurityAssist4, {  }, },
  { 7327 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 7331 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 7337 /* pfpo */, SystemZ::PFPO, Convert_NoOperands, 0, {  }, },
  { 7342 /* pka */, SystemZ::PKA, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, 0, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7346 /* pku */, SystemZ::PKU, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, 0, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7350 /* plo */, SystemZ::PLO, Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_BDAddr64Disp12, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 7354 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, Feature_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 7361 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, Feature_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 7365 /* ppno */, SystemZ::PPNO, Convert__GR1281_0__GR1281_1__Tie0__Tie1, Feature_FeatureMessageSecurityAssist5, { MCK_GR128, MCK_GR128 }, },
  { 7370 /* pr */, SystemZ::PR, Convert_NoOperands, 0, {  }, },
  { 7373 /* qadtr */, SystemZ::QADTR, Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 7379 /* qaxtr */, SystemZ::QAXTR, Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 7385 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7391 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7398 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7405 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7412 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 7416 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 7421 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7427 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7433 /* rrdtr */, SystemZ::RRDTR, Convert__FP641_0__FP641_1__Tie0__FP641_2__U4Imm1_3, 0, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 7439 /* rrxtr */, SystemZ::RRXTR, Convert__FP1281_0__FP1281_1__Tie0__FP1281_2__U4Imm1_3, 0, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 7445 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 7451 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7453 /* sam24 */, SystemZ::SAM24, Convert_NoOperands, 0, {  }, },
  { 7459 /* sam31 */, SystemZ::SAM31, Convert_NoOperands, 0, {  }, },
  { 7465 /* sam64 */, SystemZ::SAM64, Convert_NoOperands, 0, {  }, },
  { 7471 /* sar */, SystemZ::SAR, Convert__AR321_0__GR321_1, 0, { MCK_AR32, MCK_GR32 }, },
  { 7475 /* sd */, SystemZ::SD, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7478 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7482 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7487 /* sdr */, SystemZ::SDR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7491 /* sdtr */, SystemZ::SDTR, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7496 /* sdtra */, SystemZ::SDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 7502 /* se */, SystemZ::SE, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7505 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7509 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7514 /* ser */, SystemZ::SER, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7518 /* sfasr */, SystemZ::SFASR, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 7524 /* sfpc */, SystemZ::SFPC, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 7529 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7532 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7536 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 7541 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7545 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7550 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7553 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7557 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7560 /* sla */, SystemZ::SLA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 7564 /* slag */, SystemZ::SLAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 7569 /* slak */, SystemZ::SLAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 7574 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7578 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7583 /* slbgr */, SystemZ::SLBGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7589 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7594 /* slda */, SystemZ::SLDA, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7599 /* sldl */, SystemZ::SLDL, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7604 /* sldt */, SystemZ::SLDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7609 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 7614 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7618 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7623 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 7629 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 7635 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7640 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7646 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 7650 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 7655 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 7660 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7664 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7669 /* slxt */, SystemZ::SLXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7674 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7678 /* sp */, SystemZ::SP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7681 /* spm */, SystemZ::SPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 7685 /* sqd */, SystemZ::SQD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7689 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7694 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7700 /* sqdr */, SystemZ::SQDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 7705 /* sqe */, SystemZ::SQE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7709 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7714 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7720 /* sqer */, SystemZ::SQER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 7725 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7731 /* sqxr */, SystemZ::SQXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7736 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 7739 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 7743 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 7748 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 7753 /* srda */, SystemZ::SRDA, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7758 /* srdl */, SystemZ::SRDL, Convert__GR1281_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7763 /* srdt */, SystemZ::SRDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7768 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7772 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 7776 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 7781 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 7786 /* srnm */, SystemZ::SRNM, Convert__BDAddr32Disp122_0, 0, { MCK_BDAddr32Disp12 }, },
  { 7791 /* srnmb */, SystemZ::SRNMB, Convert__BDAddr32Disp122_0, Feature_FeatureFPExtension, { MCK_BDAddr32Disp12 }, },
  { 7797 /* srnmt */, SystemZ::SRNMT, Convert__BDAddr32Disp122_0, 0, { MCK_BDAddr32Disp12 }, },
  { 7803 /* srp */, SystemZ::SRP, Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 7807 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7812 /* srstu */, SystemZ::SRSTU, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 7818 /* srxt */, SystemZ::SRXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, 0, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7823 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7826 /* stam */, SystemZ::STAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 7831 /* stamy */, SystemZ::STAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 7837 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7841 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 7846 /* stck */, SystemZ::STCK, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7851 /* stcke */, SystemZ::STCKE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7857 /* stckf */, SystemZ::STCKF, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7863 /* stcm */, SystemZ::STCM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 7868 /* stcmh */, SystemZ::STCMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 7874 /* stcmy */, SystemZ::STCMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 7880 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7885 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7889 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 7894 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7898 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 7903 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 7908 /* stfle */, SystemZ::STFLE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7914 /* stfpc */, SystemZ::STFPC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7920 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7924 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 7930 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7934 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 7939 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 7945 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7950 /* stm */, SystemZ::STM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 7954 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7959 /* stmh */, SystemZ::STMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 7964 /* stmy */, SystemZ::STMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7969 /* stoc */, SystemZ::STOCAsm, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 7974 /* stoce */, SystemZ::STOCAsmE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7980 /* stocfh */, SystemZ::STOCFHAsm, Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 7987 /* stocfhe */, SystemZ::STOCFHAsmE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 7995 /* stocfhh */, SystemZ::STOCFHAsmH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8003 /* stocfhhe */, SystemZ::STOCFHAsmHE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8012 /* stocfhl */, SystemZ::STOCFHAsmL, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8020 /* stocfhle */, SystemZ::STOCFHAsmLE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8029 /* stocfhlh */, SystemZ::STOCFHAsmLH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8038 /* stocfhm */, SystemZ::STOCFHAsmM, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8046 /* stocfhne */, SystemZ::STOCFHAsmNE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8055 /* stocfhnh */, SystemZ::STOCFHAsmNH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8064 /* stocfhnhe */, SystemZ::STOCFHAsmNHE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8074 /* stocfhnl */, SystemZ::STOCFHAsmNL, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8083 /* stocfhnle */, SystemZ::STOCFHAsmNLE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8093 /* stocfhnlh */, SystemZ::STOCFHAsmNLH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8103 /* stocfhnm */, SystemZ::STOCFHAsmNM, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8112 /* stocfhno */, SystemZ::STOCFHAsmNO, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8121 /* stocfhnp */, SystemZ::STOCFHAsmNP, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8130 /* stocfhnz */, SystemZ::STOCFHAsmNZ, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8139 /* stocfho */, SystemZ::STOCFHAsmO, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8147 /* stocfhp */, SystemZ::STOCFHAsmP, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8155 /* stocfhz */, SystemZ::STOCFHAsmZ, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 8163 /* stocg */, SystemZ::STOCGAsm, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 8169 /* stocge */, SystemZ::STOCGAsmE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8176 /* stocgh */, SystemZ::STOCGAsmH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8183 /* stocghe */, SystemZ::STOCGAsmHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8191 /* stocgl */, SystemZ::STOCGAsmL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8198 /* stocgle */, SystemZ::STOCGAsmLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8206 /* stocglh */, SystemZ::STOCGAsmLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8214 /* stocgm */, SystemZ::STOCGAsmM, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8221 /* stocgne */, SystemZ::STOCGAsmNE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8229 /* stocgnh */, SystemZ::STOCGAsmNH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8237 /* stocgnhe */, SystemZ::STOCGAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8246 /* stocgnl */, SystemZ::STOCGAsmNL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8254 /* stocgnle */, SystemZ::STOCGAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8263 /* stocgnlh */, SystemZ::STOCGAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8272 /* stocgnm */, SystemZ::STOCGAsmNM, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8280 /* stocgno */, SystemZ::STOCGAsmNO, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8288 /* stocgnp */, SystemZ::STOCGAsmNP, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8296 /* stocgnz */, SystemZ::STOCGAsmNZ, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8304 /* stocgo */, SystemZ::STOCGAsmO, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8311 /* stocgp */, SystemZ::STOCGAsmP, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8318 /* stocgz */, SystemZ::STOCGAsmZ, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 8325 /* stoch */, SystemZ::STOCAsmH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8331 /* stoche */, SystemZ::STOCAsmHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8338 /* stocl */, SystemZ::STOCAsmL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8344 /* stocle */, SystemZ::STOCAsmLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8351 /* stoclh */, SystemZ::STOCAsmLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8358 /* stocm */, SystemZ::STOCAsmM, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8364 /* stocne */, SystemZ::STOCAsmNE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8371 /* stocnh */, SystemZ::STOCAsmNH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8378 /* stocnhe */, SystemZ::STOCAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8386 /* stocnl */, SystemZ::STOCAsmNL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8393 /* stocnle */, SystemZ::STOCAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8401 /* stocnlh */, SystemZ::STOCAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8409 /* stocnm */, SystemZ::STOCAsmNM, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8416 /* stocno */, SystemZ::STOCAsmNO, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8423 /* stocnp */, SystemZ::STOCAsmNP, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8430 /* stocnz */, SystemZ::STOCAsmNZ, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8437 /* stoco */, SystemZ::STOCAsmO, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8443 /* stocp */, SystemZ::STOCAsmP, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8449 /* stocz */, SystemZ::STOCAsmZ, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 8455 /* stpq */, SystemZ::STPQ, Convert__GR1281_0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 8460 /* strag */, SystemZ::STRAG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 8466 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 8471 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8476 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8482 /* strvh */, SystemZ::STRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8488 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8492 /* su */, SystemZ::SU, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8495 /* sur */, SystemZ::SUR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 8499 /* svc */, SystemZ::SVC, Convert__U8Imm1_0, 0, { MCK_U8Imm }, },
  { 8503 /* sw */, SystemZ::SW, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8506 /* swr */, SystemZ::SWR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 8510 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 8515 /* sxr */, SystemZ::SXR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 8519 /* sxtr */, SystemZ::SXTR, Convert__FP1281_0__FP1281_1__FP1281_2, 0, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 8524 /* sxtra */, SystemZ::SXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 8530 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8533 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 8540 /* tam */, SystemZ::TAM, Convert_NoOperands, 0, {  }, },
  { 8544 /* tbdr */, SystemZ::TBDR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 8549 /* tbedr */, SystemZ::TBEDR, Convert__FP321_0__U4Imm1_1__FP641_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP64 }, },
  { 8555 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 8562 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 8570 /* tcdb */, SystemZ::TCDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8575 /* tceb */, SystemZ::TCEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8580 /* tcxb */, SystemZ::TCXB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 8585 /* tdcdt */, SystemZ::TDCDT, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8591 /* tdcet */, SystemZ::TDCET, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8597 /* tdcxt */, SystemZ::TDCXT, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 8603 /* tdgdt */, SystemZ::TDGDT, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8609 /* tdget */, SystemZ::TDGET, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8615 /* tdgxt */, SystemZ::TDGXT, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 8621 /* tend */, SystemZ::TEND, Convert_NoOperands, Feature_FeatureTransactionalExecution, {  }, },
  { 8626 /* thder */, SystemZ::THDER, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 8632 /* thdr */, SystemZ::THDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 8637 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 8640 /* tmh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 8644 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 8649 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 8654 /* tml */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 8658 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 8663 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 8668 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 8672 /* tp */, SystemZ::TP, Convert__BDLAddr64Disp12Len43_0, 0, { MCK_BDLAddr64Disp12Len4 }, },
  { 8675 /* tr */, SystemZ::TR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 8678 /* tre */, SystemZ::TRE, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 8682 /* troo */, SystemZ::TROOOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 8682 /* troo */, SystemZ::TROO, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 8687 /* trot */, SystemZ::TROTOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 8687 /* trot */, SystemZ::TROT, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 8692 /* trt */, SystemZ::TRT, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 8696 /* trte */, SystemZ::TRTEOpt, Convert__GR641_1__GR1281_0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 8696 /* trte */, SystemZ::TRTE, Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 8701 /* trto */, SystemZ::TRTOOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 8701 /* trto */, SystemZ::TRTO, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 8706 /* trtr */, SystemZ::TRTR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 8711 /* trtre */, SystemZ::TRTREOpt, Convert__GR641_1__GR1281_0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 8711 /* trtre */, SystemZ::TRTRE, Convert__GR641_1__GR1281_0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 8717 /* trtt */, SystemZ::TRTTOpt, Convert__GR1281_0__GR641_1__Tie0__Tie1, 0, { MCK_GR128, MCK_GR64 }, },
  { 8717 /* trtt */, SystemZ::TRTT, Convert__GR1281_0__GR641_1__Tie0__Tie1__U4Imm1_2, 0, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 8722 /* ts */, SystemZ::TS, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 8725 /* unpk */, SystemZ::UNPK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 8730 /* unpka */, SystemZ::UNPKA, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 8736 /* unpku */, SystemZ::UNPKU, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 8742 /* upt */, SystemZ::UPT, Convert_NoOperands, 0, {  }, },
  { 8746 /* va */, SystemZ::VA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8749 /* vab */, SystemZ::VAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8753 /* vac */, SystemZ::VAC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8757 /* vacc */, SystemZ::VACC, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8762 /* vaccb */, SystemZ::VACCB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8768 /* vaccc */, SystemZ::VACCC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8774 /* vacccq */, SystemZ::VACCCQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8781 /* vaccf */, SystemZ::VACCF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8787 /* vaccg */, SystemZ::VACCG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8793 /* vacch */, SystemZ::VACCH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8799 /* vaccq */, SystemZ::VACCQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8805 /* vacq */, SystemZ::VACQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8810 /* vaf */, SystemZ::VAF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8814 /* vag */, SystemZ::VAG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8818 /* vah */, SystemZ::VAH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8822 /* vaq */, SystemZ::VAQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8826 /* vavg */, SystemZ::VAVG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8831 /* vavgb */, SystemZ::VAVGB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8837 /* vavgf */, SystemZ::VAVGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8843 /* vavgg */, SystemZ::VAVGG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8849 /* vavgh */, SystemZ::VAVGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8855 /* vavgl */, SystemZ::VAVGL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8861 /* vavglb */, SystemZ::VAVGLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8868 /* vavglf */, SystemZ::VAVGLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8875 /* vavglg */, SystemZ::VAVGLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8882 /* vavglh */, SystemZ::VAVGLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8889 /* vcdg */, SystemZ::VCDG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8894 /* vcdgb */, SystemZ::VCDGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8900 /* vcdlg */, SystemZ::VCDLG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8906 /* vcdlgb */, SystemZ::VCDLGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8913 /* vceq */, SystemZ::VCEQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8918 /* vceqb */, SystemZ::VCEQB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8924 /* vceqbs */, SystemZ::VCEQBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8931 /* vceqf */, SystemZ::VCEQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8937 /* vceqfs */, SystemZ::VCEQFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8944 /* vceqg */, SystemZ::VCEQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8950 /* vceqgs */, SystemZ::VCEQGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8957 /* vceqh */, SystemZ::VCEQH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8963 /* vceqhs */, SystemZ::VCEQHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8970 /* vcgd */, SystemZ::VCGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8975 /* vcgdb */, SystemZ::VCGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8981 /* vch */, SystemZ::VCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8985 /* vchb */, SystemZ::VCHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8990 /* vchbs */, SystemZ::VCHBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8996 /* vchf */, SystemZ::VCHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9001 /* vchfs */, SystemZ::VCHFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9007 /* vchg */, SystemZ::VCHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9012 /* vchgs */, SystemZ::VCHGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9018 /* vchh */, SystemZ::VCHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9023 /* vchhs */, SystemZ::VCHHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9029 /* vchl */, SystemZ::VCHL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9034 /* vchlb */, SystemZ::VCHLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9040 /* vchlbs */, SystemZ::VCHLBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9047 /* vchlf */, SystemZ::VCHLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9053 /* vchlfs */, SystemZ::VCHLFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9060 /* vchlg */, SystemZ::VCHLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9066 /* vchlgs */, SystemZ::VCHLGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9073 /* vchlh */, SystemZ::VCHLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9079 /* vchlhs */, SystemZ::VCHLHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9086 /* vcksm */, SystemZ::VCKSM, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9092 /* vclgd */, SystemZ::VCLGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9098 /* vclgdb */, SystemZ::VCLGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9105 /* vclz */, SystemZ::VCLZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9110 /* vclzb */, SystemZ::VCLZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9116 /* vclzf */, SystemZ::VCLZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9122 /* vclzg */, SystemZ::VCLZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9128 /* vclzh */, SystemZ::VCLZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9134 /* vctz */, SystemZ::VCTZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9139 /* vctzb */, SystemZ::VCTZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9145 /* vctzf */, SystemZ::VCTZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9151 /* vctzg */, SystemZ::VCTZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9157 /* vctzh */, SystemZ::VCTZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9163 /* vec */, SystemZ::VEC, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9167 /* vecb */, SystemZ::VECB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9172 /* vecf */, SystemZ::VECF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9177 /* vecg */, SystemZ::VECG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9182 /* vech */, SystemZ::VECH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9187 /* vecl */, SystemZ::VECL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9192 /* veclb */, SystemZ::VECLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9198 /* veclf */, SystemZ::VECLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9204 /* veclg */, SystemZ::VECLG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9210 /* veclh */, SystemZ::VECLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9216 /* verim */, SystemZ::VERIM, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 9222 /* verimb */, SystemZ::VERIMB, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 9229 /* verimf */, SystemZ::VERIMF, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 9236 /* verimg */, SystemZ::VERIMG, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 9243 /* verimh */, SystemZ::VERIMH, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 9250 /* verll */, SystemZ::VERLL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 9256 /* verllb */, SystemZ::VERLLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9263 /* verllf */, SystemZ::VERLLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9270 /* verllg */, SystemZ::VERLLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9277 /* verllh */, SystemZ::VERLLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9284 /* verllv */, SystemZ::VERLLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9291 /* verllvb */, SystemZ::VERLLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9299 /* verllvf */, SystemZ::VERLLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9307 /* verllvg */, SystemZ::VERLLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9315 /* verllvh */, SystemZ::VERLLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9323 /* vesl */, SystemZ::VESL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 9328 /* veslb */, SystemZ::VESLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9334 /* veslf */, SystemZ::VESLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9340 /* veslg */, SystemZ::VESLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9346 /* veslh */, SystemZ::VESLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9352 /* veslv */, SystemZ::VESLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9358 /* veslvb */, SystemZ::VESLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9365 /* veslvf */, SystemZ::VESLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9372 /* veslvg */, SystemZ::VESLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9379 /* veslvh */, SystemZ::VESLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9386 /* vesra */, SystemZ::VESRA, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 9392 /* vesrab */, SystemZ::VESRAB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9399 /* vesraf */, SystemZ::VESRAF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9406 /* vesrag */, SystemZ::VESRAG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9413 /* vesrah */, SystemZ::VESRAH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9420 /* vesrav */, SystemZ::VESRAV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9427 /* vesravb */, SystemZ::VESRAVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9435 /* vesravf */, SystemZ::VESRAVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9443 /* vesravg */, SystemZ::VESRAVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9451 /* vesravh */, SystemZ::VESRAVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9459 /* vesrl */, SystemZ::VESRL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 9465 /* vesrlb */, SystemZ::VESRLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9472 /* vesrlf */, SystemZ::VESRLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9479 /* vesrlg */, SystemZ::VESRLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9486 /* vesrlh */, SystemZ::VESRLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 9493 /* vesrlv */, SystemZ::VESRLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9500 /* vesrlvb */, SystemZ::VESRLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9508 /* vesrlvf */, SystemZ::VESRLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9516 /* vesrlvg */, SystemZ::VESRLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9524 /* vesrlvh */, SystemZ::VESRLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9532 /* vfa */, SystemZ::VFA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9536 /* vfadb */, SystemZ::VFADB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9542 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9542 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9547 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9547 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9553 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9553 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9560 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9560 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9566 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9566 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9573 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9573 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9579 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9579 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9586 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9586 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9593 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9593 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9601 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9601 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9608 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9608 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9616 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9616 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9623 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9623 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9631 /* vfce */, SystemZ::VFCE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9636 /* vfcedb */, SystemZ::VFCEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9643 /* vfcedbs */, SystemZ::VFCEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9651 /* vfch */, SystemZ::VFCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9656 /* vfchdb */, SystemZ::VFCHDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9663 /* vfchdbs */, SystemZ::VFCHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9671 /* vfche */, SystemZ::VFCHE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9677 /* vfchedb */, SystemZ::VFCHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9685 /* vfchedbs */, SystemZ::VFCHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9694 /* vfd */, SystemZ::VFD, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9698 /* vfddb */, SystemZ::VFDDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9704 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9704 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9709 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9709 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9715 /* vfeebs */, SystemZ::VFEEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9722 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9722 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9728 /* vfeefs */, SystemZ::VFEEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9735 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9735 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9741 /* vfeehs */, SystemZ::VFEEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9748 /* vfeezb */, SystemZ::VFEEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9755 /* vfeezbs */, SystemZ::VFEEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9763 /* vfeezf */, SystemZ::VFEEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9770 /* vfeezfs */, SystemZ::VFEEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9778 /* vfeezh */, SystemZ::VFEEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9785 /* vfeezhs */, SystemZ::VFEEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9793 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9793 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9799 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9799 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9806 /* vfenebs */, SystemZ::VFENEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9814 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9814 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9821 /* vfenefs */, SystemZ::VFENEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9829 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9829 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9836 /* vfenehs */, SystemZ::VFENEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9844 /* vfenezb */, SystemZ::VFENEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9852 /* vfenezbs */, SystemZ::VFENEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9861 /* vfenezf */, SystemZ::VFENEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9869 /* vfenezfs */, SystemZ::VFENEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9878 /* vfenezh */, SystemZ::VFENEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9886 /* vfenezhs */, SystemZ::VFENEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9895 /* vfi */, SystemZ::VFI, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9899 /* vfidb */, SystemZ::VFIDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9905 /* vflcdb */, SystemZ::VFLCDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9912 /* vflndb */, SystemZ::VFLNDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9919 /* vflpdb */, SystemZ::VFLPDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9926 /* vfm */, SystemZ::VFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9930 /* vfma */, SystemZ::VFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9935 /* vfmadb */, SystemZ::VFMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9942 /* vfmdb */, SystemZ::VFMDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9948 /* vfms */, SystemZ::VFMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9953 /* vfmsdb */, SystemZ::VFMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9960 /* vfpso */, SystemZ::VFPSO, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 9966 /* vfpsodb */, SystemZ::VFPSODB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9974 /* vfs */, SystemZ::VFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9978 /* vfsdb */, SystemZ::VFSDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9984 /* vfsq */, SystemZ::VFSQ, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9989 /* vfsqdb */, SystemZ::VFSQDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9996 /* vftci */, SystemZ::VFTCI, Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10002 /* vftcidb */, SystemZ::VFTCIDB, Convert__VR1281_0__VR1281_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 10010 /* vgbm */, SystemZ::VGBM, Convert__VR1281_0__U16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_U16Imm }, },
  { 10015 /* vgef */, SystemZ::VGEF, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 10020 /* vgeg */, SystemZ::VGEG, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 10025 /* vgfm */, SystemZ::VGFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10030 /* vgfma */, SystemZ::VGFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10036 /* vgfmab */, SystemZ::VGFMAB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10043 /* vgfmaf */, SystemZ::VGFMAF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10050 /* vgfmag */, SystemZ::VGFMAG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10057 /* vgfmah */, SystemZ::VGFMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10064 /* vgfmb */, SystemZ::VGFMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10070 /* vgfmf */, SystemZ::VGFMF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10076 /* vgfmg */, SystemZ::VGFMG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10082 /* vgfmh */, SystemZ::VGFMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10088 /* vgm */, SystemZ::VGM, Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 10092 /* vgmb */, SystemZ::VGMB, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 10097 /* vgmf */, SystemZ::VGMF, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 10102 /* vgmg */, SystemZ::VGMG, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 10107 /* vgmh */, SystemZ::VGMH, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 10112 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10112 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10118 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10118 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10125 /* vistrbs */, SystemZ::VISTRBS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10133 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10133 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10140 /* vistrfs */, SystemZ::VISTRFS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10148 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10148 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10155 /* vistrhs */, SystemZ::VISTRHS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10163 /* vl */, SystemZ::VL, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10166 /* vlbb */, SystemZ::VLBB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 10171 /* vlc */, SystemZ::VLC, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10175 /* vlcb */, SystemZ::VLCB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10180 /* vlcf */, SystemZ::VLCF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10185 /* vlcg */, SystemZ::VLCG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10190 /* vlch */, SystemZ::VLCH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10195 /* vlde */, SystemZ::VLDE, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10200 /* vldeb */, SystemZ::VLDEB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10206 /* vleb */, SystemZ::VLEB, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 10211 /* vled */, SystemZ::VLED, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10216 /* vledb */, SystemZ::VLEDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10222 /* vlef */, SystemZ::VLEF, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 10227 /* vleg */, SystemZ::VLEG, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 10232 /* vleh */, SystemZ::VLEH, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 10237 /* vleib */, SystemZ::VLEIB, Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 10243 /* vleif */, SystemZ::VLEIF, Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U2Imm }, },
  { 10249 /* vleig */, SystemZ::VLEIG, Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U1Imm }, },
  { 10255 /* vleih */, SystemZ::VLEIH, Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U3Imm }, },
  { 10261 /* vlgv */, SystemZ::VLGV, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10266 /* vlgvb */, SystemZ::VLGVB, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10272 /* vlgvf */, SystemZ::VLGVF, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10278 /* vlgvg */, SystemZ::VLGVG, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10284 /* vlgvh */, SystemZ::VLGVH, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10290 /* vll */, SystemZ::VLL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 10294 /* vllez */, SystemZ::VLLEZ, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 10300 /* vllezb */, SystemZ::VLLEZB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10307 /* vllezf */, SystemZ::VLLEZF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10314 /* vllezg */, SystemZ::VLLEZG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10321 /* vllezh */, SystemZ::VLLEZH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10328 /* vlm */, SystemZ::VLM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 10332 /* vlp */, SystemZ::VLP, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10336 /* vlpb */, SystemZ::VLPB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10341 /* vlpf */, SystemZ::VLPF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10346 /* vlpg */, SystemZ::VLPG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10351 /* vlph */, SystemZ::VLPH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10356 /* vlr */, SystemZ::VLR, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10360 /* vlrep */, SystemZ::VLREP, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 10366 /* vlrepb */, SystemZ::VLREPB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10373 /* vlrepf */, SystemZ::VLREPF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10380 /* vlrepg */, SystemZ::VLREPG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10387 /* vlreph */, SystemZ::VLREPH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 10394 /* vlvg */, SystemZ::VLVG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10399 /* vlvgb */, SystemZ::VLVGB, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 10405 /* vlvgf */, SystemZ::VLVGF, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 10411 /* vlvgg */, SystemZ::VLVGG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12 }, },
  { 10417 /* vlvgh */, SystemZ::VLVGH, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 10423 /* vlvgp */, SystemZ::VLVGP, Convert__VR1281_0__GR641_1__GR641_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_GR64 }, },
  { 10429 /* vmae */, SystemZ::VMAE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10434 /* vmaeb */, SystemZ::VMAEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10440 /* vmaef */, SystemZ::VMAEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10446 /* vmaeh */, SystemZ::VMAEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10452 /* vmah */, SystemZ::VMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10457 /* vmahb */, SystemZ::VMAHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10463 /* vmahf */, SystemZ::VMAHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10469 /* vmahh */, SystemZ::VMAHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10475 /* vmal */, SystemZ::VMAL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10480 /* vmalb */, SystemZ::VMALB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10486 /* vmale */, SystemZ::VMALE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10492 /* vmaleb */, SystemZ::VMALEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10499 /* vmalef */, SystemZ::VMALEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10506 /* vmaleh */, SystemZ::VMALEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10513 /* vmalf */, SystemZ::VMALF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10519 /* vmalh */, SystemZ::VMALH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10525 /* vmalhb */, SystemZ::VMALHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10532 /* vmalhf */, SystemZ::VMALHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10539 /* vmalhh */, SystemZ::VMALHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10546 /* vmalhw */, SystemZ::VMALHW, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10553 /* vmalo */, SystemZ::VMALO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10559 /* vmalob */, SystemZ::VMALOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10566 /* vmalof */, SystemZ::VMALOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10573 /* vmaloh */, SystemZ::VMALOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10580 /* vmao */, SystemZ::VMAO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10585 /* vmaob */, SystemZ::VMAOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10591 /* vmaof */, SystemZ::VMAOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10597 /* vmaoh */, SystemZ::VMAOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10603 /* vme */, SystemZ::VME, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10607 /* vmeb */, SystemZ::VMEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10612 /* vmef */, SystemZ::VMEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10617 /* vmeh */, SystemZ::VMEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10622 /* vmh */, SystemZ::VMH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10626 /* vmhb */, SystemZ::VMHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10631 /* vmhf */, SystemZ::VMHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10636 /* vmhh */, SystemZ::VMHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10641 /* vml */, SystemZ::VML, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10645 /* vmlb */, SystemZ::VMLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10650 /* vmle */, SystemZ::VMLE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10655 /* vmleb */, SystemZ::VMLEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10661 /* vmlef */, SystemZ::VMLEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10667 /* vmleh */, SystemZ::VMLEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10673 /* vmlf */, SystemZ::VMLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10678 /* vmlh */, SystemZ::VMLH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10683 /* vmlhb */, SystemZ::VMLHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10689 /* vmlhf */, SystemZ::VMLHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10695 /* vmlhh */, SystemZ::VMLHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10701 /* vmlhw */, SystemZ::VMLHW, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10707 /* vmlo */, SystemZ::VMLO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10712 /* vmlob */, SystemZ::VMLOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10718 /* vmlof */, SystemZ::VMLOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10724 /* vmloh */, SystemZ::VMLOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10730 /* vmn */, SystemZ::VMN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10734 /* vmnb */, SystemZ::VMNB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10739 /* vmnf */, SystemZ::VMNF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10744 /* vmng */, SystemZ::VMNG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10749 /* vmnh */, SystemZ::VMNH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10754 /* vmnl */, SystemZ::VMNL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10759 /* vmnlb */, SystemZ::VMNLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10765 /* vmnlf */, SystemZ::VMNLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10771 /* vmnlg */, SystemZ::VMNLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10777 /* vmnlh */, SystemZ::VMNLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10783 /* vmo */, SystemZ::VMO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10787 /* vmob */, SystemZ::VMOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10792 /* vmof */, SystemZ::VMOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10797 /* vmoh */, SystemZ::VMOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10802 /* vmrh */, SystemZ::VMRH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10807 /* vmrhb */, SystemZ::VMRHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10813 /* vmrhf */, SystemZ::VMRHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10819 /* vmrhg */, SystemZ::VMRHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10825 /* vmrhh */, SystemZ::VMRHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10831 /* vmrl */, SystemZ::VMRL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10836 /* vmrlb */, SystemZ::VMRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10842 /* vmrlf */, SystemZ::VMRLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10848 /* vmrlg */, SystemZ::VMRLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10854 /* vmrlh */, SystemZ::VMRLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10860 /* vmx */, SystemZ::VMX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10864 /* vmxb */, SystemZ::VMXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10869 /* vmxf */, SystemZ::VMXF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10874 /* vmxg */, SystemZ::VMXG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10879 /* vmxh */, SystemZ::VMXH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10884 /* vmxl */, SystemZ::VMXL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10889 /* vmxlb */, SystemZ::VMXLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10895 /* vmxlf */, SystemZ::VMXLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10901 /* vmxlg */, SystemZ::VMXLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10907 /* vmxlh */, SystemZ::VMXLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10913 /* vn */, SystemZ::VN, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10916 /* vnc */, SystemZ::VNC, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10920 /* vno */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10924 /* vnot */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10929 /* vo */, SystemZ::VO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10932 /* vone */, SystemZ::VONE, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 10937 /* vpdi */, SystemZ::VPDI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10942 /* vperm */, SystemZ::VPERM, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10948 /* vpk */, SystemZ::VPK, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10952 /* vpkf */, SystemZ::VPKF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10957 /* vpkg */, SystemZ::VPKG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10962 /* vpkh */, SystemZ::VPKH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10967 /* vpkls */, SystemZ::VPKLS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10973 /* vpklsf */, SystemZ::VPKLSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10980 /* vpklsfs */, SystemZ::VPKLSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10988 /* vpklsg */, SystemZ::VPKLSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10995 /* vpklsgs */, SystemZ::VPKLSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11003 /* vpklsh */, SystemZ::VPKLSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11010 /* vpklshs */, SystemZ::VPKLSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11018 /* vpks */, SystemZ::VPKS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11023 /* vpksf */, SystemZ::VPKSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11029 /* vpksfs */, SystemZ::VPKSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11036 /* vpksg */, SystemZ::VPKSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11042 /* vpksgs */, SystemZ::VPKSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11049 /* vpksh */, SystemZ::VPKSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11055 /* vpkshs */, SystemZ::VPKSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11062 /* vpopct */, SystemZ::VPOPCT, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11069 /* vrep */, SystemZ::VREP, Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 11074 /* vrepb */, SystemZ::VREPB, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 11080 /* vrepf */, SystemZ::VREPF, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 11086 /* vrepg */, SystemZ::VREPG, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 11092 /* vreph */, SystemZ::VREPH, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 11098 /* vrepi */, SystemZ::VREPI, Convert__VR1281_0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 11104 /* vrepib */, SystemZ::VREPIB, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 11111 /* vrepif */, SystemZ::VREPIF, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 11118 /* vrepig */, SystemZ::VREPIG, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 11125 /* vrepih */, SystemZ::VREPIH, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 11132 /* vs */, SystemZ::VS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11135 /* vsb */, SystemZ::VSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11139 /* vsbcbi */, SystemZ::VSBCBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11146 /* vsbcbiq */, SystemZ::VSBCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11154 /* vsbi */, SystemZ::VSBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11159 /* vsbiq */, SystemZ::VSBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11165 /* vscbi */, SystemZ::VSCBI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11171 /* vscbib */, SystemZ::VSCBIB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11178 /* vscbif */, SystemZ::VSCBIF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11185 /* vscbig */, SystemZ::VSCBIG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11192 /* vscbih */, SystemZ::VSCBIH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11199 /* vscbiq */, SystemZ::VSCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11206 /* vscef */, SystemZ::VSCEF, Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 11212 /* vsceg */, SystemZ::VSCEG, Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 11218 /* vseg */, SystemZ::VSEG, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11223 /* vsegb */, SystemZ::VSEGB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11229 /* vsegf */, SystemZ::VSEGF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11235 /* vsegh */, SystemZ::VSEGH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11241 /* vsel */, SystemZ::VSEL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11246 /* vsf */, SystemZ::VSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11250 /* vsg */, SystemZ::VSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11254 /* vsh */, SystemZ::VSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11258 /* vsl */, SystemZ::VSL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11262 /* vslb */, SystemZ::VSLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11267 /* vsldb */, SystemZ::VSLDB, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 11273 /* vsq */, SystemZ::VSQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11277 /* vsra */, SystemZ::VSRA, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11282 /* vsrab */, SystemZ::VSRAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11288 /* vsrl */, SystemZ::VSRL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11293 /* vsrlb */, SystemZ::VSRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11299 /* vst */, SystemZ::VST, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 11303 /* vsteb */, SystemZ::VSTEB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 11309 /* vstef */, SystemZ::VSTEF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 11315 /* vsteg */, SystemZ::VSTEG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 11321 /* vsteh */, SystemZ::VSTEH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 11327 /* vstl */, SystemZ::VSTL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 11332 /* vstm */, SystemZ::VSTM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 11337 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11337 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11343 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11343 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11350 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11350 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11358 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11358 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11365 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11365 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11373 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11373 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11380 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11380 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11388 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11388 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11396 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11396 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11405 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11405 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11413 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11413 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11422 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11422 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11430 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11430 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11439 /* vsum */, SystemZ::VSUM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11444 /* vsumb */, SystemZ::VSUMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11450 /* vsumg */, SystemZ::VSUMG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11456 /* vsumgf */, SystemZ::VSUMGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11463 /* vsumgh */, SystemZ::VSUMGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11470 /* vsumh */, SystemZ::VSUMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11476 /* vsumq */, SystemZ::VSUMQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11482 /* vsumqf */, SystemZ::VSUMQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11489 /* vsumqg */, SystemZ::VSUMQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11496 /* vtm */, SystemZ::VTM, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11500 /* vuph */, SystemZ::VUPH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11505 /* vuphb */, SystemZ::VUPHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11511 /* vuphf */, SystemZ::VUPHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11517 /* vuphh */, SystemZ::VUPHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11523 /* vupl */, SystemZ::VUPL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11528 /* vuplb */, SystemZ::VUPLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11534 /* vuplf */, SystemZ::VUPLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11540 /* vuplh */, SystemZ::VUPLH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11546 /* vuplhb */, SystemZ::VUPLHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11553 /* vuplhf */, SystemZ::VUPLHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11560 /* vuplhh */, SystemZ::VUPLHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11567 /* vuplhw */, SystemZ::VUPLHW, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11574 /* vupll */, SystemZ::VUPLL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11580 /* vupllb */, SystemZ::VUPLLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11587 /* vupllf */, SystemZ::VUPLLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11594 /* vupllh */, SystemZ::VUPLLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11601 /* vx */, SystemZ::VX, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11604 /* vzero */, SystemZ::VZERO, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 11610 /* wcdgb */, SystemZ::WCDGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11616 /* wcdlgb */, SystemZ::WCDLGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11623 /* wcgdb */, SystemZ::WCGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11629 /* wclgdb */, SystemZ::WCLGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11636 /* wfadb */, SystemZ::WFADB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11642 /* wfc */, SystemZ::WFC, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11646 /* wfcdb */, SystemZ::WFCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 11652 /* wfcedb */, SystemZ::WFCEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11659 /* wfcedbs */, SystemZ::WFCEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11667 /* wfchdb */, SystemZ::WFCHDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11674 /* wfchdbs */, SystemZ::WFCHDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11682 /* wfchedb */, SystemZ::WFCHEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11690 /* wfchedbs */, SystemZ::WFCHEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11699 /* wfddb */, SystemZ::WFDDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11705 /* wfidb */, SystemZ::WFIDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11711 /* wfk */, SystemZ::WFK, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11715 /* wfkdb */, SystemZ::WFKDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 11721 /* wflcdb */, SystemZ::WFLCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 11728 /* wflndb */, SystemZ::WFLNDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 11735 /* wflpdb */, SystemZ::WFLPDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 11742 /* wfmadb */, SystemZ::WFMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11749 /* wfmdb */, SystemZ::WFMDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11755 /* wfmsdb */, SystemZ::WFMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11762 /* wfpsodb */, SystemZ::WFPSODB, Convert__VR641_0__VR641_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 11770 /* wfsdb */, SystemZ::WFSDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 11776 /* wfsqdb */, SystemZ::WFSQDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 11783 /* wftcidb */, SystemZ::WFTCIDB, Convert__VR641_0__VR641_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U12Imm }, },
  { 11791 /* wldeb */, SystemZ::WLDEB, Convert__VR641_0__VR321_1, Feature_FeatureVector, { MCK_VR64, MCK_VR32 }, },
  { 11797 /* wledb */, SystemZ::WLEDB, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 11803 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 11805 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 11808 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 11811 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 11815 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 11820 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 11823 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 11828 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 11833 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 11837 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 11840 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 11844 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 11847 /* zap */, SystemZ::ZAP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, 0, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
};

unsigned SystemZAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 6; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      if (ActualIdx >= Operands.size()) {
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(Actual, Formal);
        if (Diag == Match_Success) {
          ++ActualIdx;
          continue;
        }
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        ErrorInfo = ActualIdx;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[2992] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* ad */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* ad */, MCK_FP64, 1 /* 0 */ },
  { 0, 5 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 9 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 14 /* adr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 18 /* adtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 23 /* adtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 29 /* ae */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 29 /* ae */, MCK_FP32, 1 /* 0 */ },
  { 0, 32 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 32 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 36 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 41 /* aer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 45 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 49 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 49 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 52 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 52 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 56 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 61 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 61 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 66 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 71 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 77 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 81 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 86 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 91 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 91 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 94 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 98 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 103 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 103 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 107 /* aih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 111 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 111 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 114 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 114 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 118 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 118 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 123 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 129 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 134 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 139 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 139 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 143 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 143 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 148 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 154 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 154 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 160 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 168 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 173 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 179 /* algsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 185 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 192 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 196 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 201 /* alsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 206 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 206 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 210 /* ap */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 213 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 216 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 220 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 224 /* au */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 224 /* au */, MCK_FP32, 1 /* 0 */ },
  { 0, 227 /* aur */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 231 /* aw */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 231 /* aw */, MCK_FP64, 1 /* 0 */ },
  { 0, 234 /* awr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 238 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 243 /* axr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 247 /* axtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 252 /* axtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 258 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 258 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 261 /* b */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 263 /* bal */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 263 /* bal */, MCK_GR64, 1 /* 0 */ },
  { 0, 267 /* balr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 267 /* balr */, MCK_GR64, 1 /* 0 */ },
  { 0, 272 /* bas */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 272 /* bas */, MCK_GR64, 1 /* 0 */ },
  { 0, 276 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 276 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 281 /* bassm */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 281 /* bassm */, MCK_GR64, 1 /* 0 */ },
  { 0, 287 /* bc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 290 /* bcr */, MCK_GR64, 2 /* 1 */ },
  { 0, 294 /* bct */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 294 /* bct */, MCK_GR32, 1 /* 0 */ },
  { 0, 298 /* bctg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 298 /* bctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 303 /* bctgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 309 /* bctr */, MCK_GR32, 1 /* 0 */ },
  { 0, 309 /* bctr */, MCK_GR64, 2 /* 1 */ },
  { 0, 314 /* be */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 317 /* ber */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 321 /* bh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 324 /* bhe */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 328 /* bher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 333 /* bhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 337 /* bl */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 340 /* ble */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 344 /* bler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 349 /* blh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 353 /* blhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 358 /* blr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 362 /* bm */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 365 /* bmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 369 /* bne */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 373 /* bner */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 378 /* bnh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 382 /* bnhe */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 387 /* bnher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 393 /* bnhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 398 /* bnl */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 402 /* bnle */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 407 /* bnler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 413 /* bnlh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 418 /* bnlhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 424 /* bnlr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 429 /* bnm */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 433 /* bnmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 438 /* bno */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 442 /* bnor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 447 /* bnp */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 451 /* bnpr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 456 /* bnz */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 460 /* bnzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 465 /* bo */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 468 /* bor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 472 /* bp */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureExecutionHint, 475 /* bpp */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureExecutionHint, 475 /* bpp */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 479 /* bpr */, MCK_ADDR64, 1 /* 0 */ },
  { Feature_FeatureExecutionHint, 483 /* bprp */, MCK_PCRel12, 2 /* 1 */ },
  { Feature_FeatureExecutionHint, 483 /* bprp */, MCK_PCRel24, 4 /* 2 */ },
  { 0, 488 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 491 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 491 /* bras */, MCK_PCRelTLS16, 2 /* 1 */ },
  { 0, 496 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 496 /* brasl */, MCK_PCRelTLS32, 2 /* 1 */ },
  { 0, 502 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 506 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 511 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 511 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 516 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 516 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { Feature_FeatureHighWord, 522 /* brcth */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 522 /* brcth */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 528 /* brxh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 528 /* brxh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 533 /* brxhg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 533 /* brxhg */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 539 /* brxle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 539 /* brxle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 545 /* brxlg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 545 /* brxlg */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 551 /* bsm */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 551 /* bsm */, MCK_GR64, 1 /* 0 */ },
  { 0, 555 /* bxh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 555 /* bxh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 559 /* bxhg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 559 /* bxhg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 564 /* bxle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 564 /* bxle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 569 /* bxleg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 569 /* bxleg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 575 /* bz */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 578 /* bzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 582 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 582 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 584 /* cd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 584 /* cd */, MCK_FP64, 1 /* 0 */ },
  { 0, 587 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 587 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 591 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 596 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 596 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 602 /* cdfbra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 602 /* cdfbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 609 /* cdfr */, MCK_FP64, 1 /* 0 */ },
  { 0, 609 /* cdfr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 614 /* cdftr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 614 /* cdftr */, MCK_GR32, 4 /* 2 */ },
  { 0, 620 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 620 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 626 /* cdgbra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 626 /* cdgbra */, MCK_GR64, 4 /* 2 */ },
  { 0, 633 /* cdgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 633 /* cdgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 638 /* cdgtr */, MCK_FP64, 1 /* 0 */ },
  { 0, 638 /* cdgtr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 644 /* cdgtra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 644 /* cdgtra */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 651 /* cdlfbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 651 /* cdlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 658 /* cdlftr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 658 /* cdlftr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 665 /* cdlgbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 665 /* cdlgbr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 672 /* cdlgtr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 672 /* cdlgtr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureDFPPackedConversion, 679 /* cdpt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 679 /* cdpt */, MCK_FP64, 1 /* 0 */ },
  { 0, 684 /* cdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 688 /* cds */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 688 /* cds */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 692 /* cdsg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 692 /* cdsg */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 697 /* cdstr */, MCK_FP64, 1 /* 0 */ },
  { 0, 697 /* cdstr */, MCK_GR64, 2 /* 1 */ },
  { 0, 703 /* cdsy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 703 /* cdsy */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 708 /* cdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 713 /* cdutr */, MCK_FP64, 1 /* 0 */ },
  { 0, 713 /* cdutr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 719 /* cdzt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 719 /* cdzt */, MCK_FP64, 1 /* 0 */ },
  { 0, 724 /* ce */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 724 /* ce */, MCK_FP32, 1 /* 0 */ },
  { 0, 727 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 727 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 731 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 736 /* cedtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 742 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 742 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 748 /* cefbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 748 /* cefbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 755 /* cefr */, MCK_FP32, 1 /* 0 */ },
  { 0, 755 /* cefr */, MCK_GR32, 2 /* 1 */ },
  { 0, 760 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 760 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 766 /* cegbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 766 /* cegbra */, MCK_GR64, 4 /* 2 */ },
  { 0, 773 /* cegr */, MCK_FP32, 1 /* 0 */ },
  { 0, 773 /* cegr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 778 /* celfbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 778 /* celfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 785 /* celgbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 785 /* celgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 792 /* cer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 796 /* cextr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 802 /* cfc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 806 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 806 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 812 /* cfdbra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 812 /* cfdbra */, MCK_GR32, 1 /* 0 */ },
  { 0, 819 /* cfdr */, MCK_FP64, 4 /* 2 */ },
  { 0, 819 /* cfdr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 824 /* cfdtr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 824 /* cfdtr */, MCK_GR32, 1 /* 0 */ },
  { 0, 830 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 830 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 836 /* cfebra */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 836 /* cfebra */, MCK_GR32, 1 /* 0 */ },
  { 0, 843 /* cfer */, MCK_FP32, 4 /* 2 */ },
  { 0, 843 /* cfer */, MCK_GR32, 1 /* 0 */ },
  { 0, 848 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 852 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 852 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 858 /* cfxbra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 858 /* cfxbra */, MCK_GR32, 1 /* 0 */ },
  { 0, 865 /* cfxr */, MCK_FP128, 4 /* 2 */ },
  { 0, 865 /* cfxr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 870 /* cfxtr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 870 /* cfxtr */, MCK_GR32, 1 /* 0 */ },
  { 0, 876 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 876 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 879 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 879 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 885 /* cgdbra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 885 /* cgdbra */, MCK_GR64, 1 /* 0 */ },
  { 0, 892 /* cgdr */, MCK_FP64, 4 /* 2 */ },
  { 0, 892 /* cgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 897 /* cgdtr */, MCK_FP64, 4 /* 2 */ },
  { 0, 897 /* cgdtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 903 /* cgdtra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 903 /* cgdtra */, MCK_GR64, 1 /* 0 */ },
  { 0, 910 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 910 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 916 /* cgebra */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 916 /* cgebra */, MCK_GR64, 1 /* 0 */ },
  { 0, 923 /* cger */, MCK_FP32, 4 /* 2 */ },
  { 0, 923 /* cger */, MCK_GR64, 1 /* 0 */ },
  { 0, 928 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 928 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 932 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 937 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 937 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 942 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 942 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 948 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 948 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 952 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 957 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 957 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 963 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 969 /* cgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 969 /* cgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 974 /* cgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 974 /* cgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 980 /* cgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 980 /* cgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 986 /* cgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 986 /* cgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 993 /* cgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 993 /* cgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 999 /* cgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 999 /* cgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 1006 /* cgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1006 /* cgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1013 /* cgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1013 /* cgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1020 /* cgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1020 /* cgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1027 /* cgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1027 /* cgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1035 /* cgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1035 /* cgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1042 /* cgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1042 /* cgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1050 /* cgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1050 /* cgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1058 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 1058 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1063 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 1063 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1069 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1069 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1075 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1075 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1082 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1082 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1088 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1088 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1095 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1095 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1102 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1102 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1109 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1109 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1116 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1116 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1124 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1124 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1131 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1131 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1139 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1139 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1147 /* cgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 1152 /* cgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 1158 /* cgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 1164 /* cgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1171 /* cgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1177 /* cgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1184 /* cgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1191 /* cgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1198 /* cgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1205 /* cgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1213 /* cgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1220 /* cgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1228 /* cgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1236 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1240 /* cgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1240 /* cgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1245 /* cgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1245 /* cgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1251 /* cgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1251 /* cgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1257 /* cgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1257 /* cgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1264 /* cgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1264 /* cgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1270 /* cgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1270 /* cgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1277 /* cgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1277 /* cgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1284 /* cgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1284 /* cgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1291 /* cgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1291 /* cgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1298 /* cgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1298 /* cgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1306 /* cgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1306 /* cgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1313 /* cgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1313 /* cgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1321 /* cgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1321 /* cgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1329 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1329 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1334 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1334 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1340 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1340 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1346 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1346 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1353 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1353 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1359 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1359 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1366 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1366 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1373 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1373 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1380 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1380 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1387 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1387 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1395 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1395 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1402 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1402 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1410 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1410 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1418 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1418 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1423 /* cgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1428 /* cgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1434 /* cgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1440 /* cgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1447 /* cgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1453 /* cgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1460 /* cgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1467 /* cgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1474 /* cgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1481 /* cgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1489 /* cgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1496 /* cgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1504 /* cgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1512 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1512 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1518 /* cgxbra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1518 /* cgxbra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1525 /* cgxr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1525 /* cgxr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1530 /* cgxtr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1530 /* cgxtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1536 /* cgxtra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1536 /* cgxtra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1543 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1543 /* ch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1546 /* chf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1546 /* chf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1550 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1556 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1560 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1560 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1565 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1570 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1570 /* chy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1574 /* cib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1574 /* cib */, MCK_GR32, 1 /* 0 */ },
  { 0, 1578 /* cibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1578 /* cibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1583 /* cibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1583 /* cibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1588 /* cibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1588 /* cibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1594 /* cibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1594 /* cibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1599 /* cible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1599 /* cible */, MCK_GR32, 1 /* 0 */ },
  { 0, 1605 /* ciblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1605 /* ciblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1611 /* cibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1611 /* cibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1617 /* cibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1617 /* cibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1623 /* cibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1623 /* cibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1630 /* cibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1630 /* cibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1636 /* cibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1636 /* cibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1643 /* cibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1643 /* cibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1650 /* cih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1654 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 1654 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1658 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 1658 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1663 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1663 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1668 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1668 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1674 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1674 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1679 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1679 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1685 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1685 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1691 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1691 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1697 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1697 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1703 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1703 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1710 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1710 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1716 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1716 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1723 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1723 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1730 /* cit */, MCK_GR32, 1 /* 0 */ },
  { 0, 1734 /* cite */, MCK_GR32, 1 /* 0 */ },
  { 0, 1739 /* cith */, MCK_GR32, 1 /* 0 */ },
  { 0, 1744 /* cithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1750 /* citl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1755 /* citle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1761 /* citlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1767 /* citne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1773 /* citnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1779 /* citnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1786 /* citnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1792 /* citnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1799 /* citnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1806 /* cksm */, MCK_GR128, 2 /* 1 */ },
  { 0, 1806 /* cksm */, MCK_GR64, 1 /* 0 */ },
  { 0, 1811 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1811 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1814 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 1814 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 1818 /* clcl */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 1823 /* clcle */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { 0, 1823 /* clcle */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 1829 /* clclu */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1829 /* clclu */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 1835 /* clfdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1835 /* clfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1842 /* clfdtr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1842 /* clfdtr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1849 /* clfebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1849 /* clfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 1856 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1863 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1868 /* clfit */, MCK_GR32, 1 /* 0 */ },
  { 0, 1874 /* clfite */, MCK_GR32, 1 /* 0 */ },
  { 0, 1881 /* clfith */, MCK_GR32, 1 /* 0 */ },
  { 0, 1888 /* clfithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1896 /* clfitl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1903 /* clfitle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1911 /* clfitlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1919 /* clfitne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1927 /* clfitnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1935 /* clfitnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1944 /* clfitnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1952 /* clfitnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1961 /* clfitnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1970 /* clfxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1970 /* clfxbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1977 /* clfxtr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1977 /* clfxtr */, MCK_GR32, 1 /* 0 */ },
  { 0, 1984 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1984 /* clg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1988 /* clgdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1988 /* clgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1995 /* clgdtr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1995 /* clgdtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2002 /* clgebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2002 /* clgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2009 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2009 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2014 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2020 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2020 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2026 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2026 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2033 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2033 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2040 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2047 /* clgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2047 /* clgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 2053 /* clgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2053 /* clgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2060 /* clgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2060 /* clgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2067 /* clgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2067 /* clgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2075 /* clgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2075 /* clgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2082 /* clgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2082 /* clgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 2090 /* clgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2090 /* clgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2098 /* clgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2098 /* clgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 2106 /* clgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2106 /* clgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2114 /* clgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2114 /* clgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2123 /* clgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2123 /* clgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2131 /* clgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2131 /* clgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2140 /* clgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2140 /* clgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2149 /* clgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 2149 /* clgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2155 /* clgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 2155 /* clgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2162 /* clgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2162 /* clgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2169 /* clgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2169 /* clgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2177 /* clgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2177 /* clgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2184 /* clgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2184 /* clgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2192 /* clgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2192 /* clgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2200 /* clgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 2200 /* clgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2208 /* clgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2208 /* clgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2216 /* clgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2216 /* clgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2225 /* clgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2225 /* clgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2233 /* clgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2233 /* clgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2242 /* clgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2242 /* clgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2251 /* clgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 2257 /* clgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 2264 /* clgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 2271 /* clgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2279 /* clgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2286 /* clgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2294 /* clgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2302 /* clgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 2310 /* clgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2318 /* clgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2327 /* clgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2335 /* clgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2344 /* clgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2353 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2358 /* clgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2358 /* clgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2364 /* clgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2364 /* clgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2371 /* clgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2371 /* clgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2378 /* clgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2378 /* clgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2386 /* clgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2386 /* clgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2393 /* clgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2393 /* clgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2401 /* clgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2401 /* clgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2409 /* clgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2409 /* clgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2417 /* clgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2417 /* clgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2425 /* clgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2425 /* clgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2434 /* clgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2434 /* clgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2442 /* clgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2442 /* clgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2451 /* clgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2451 /* clgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2460 /* clgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2460 /* clgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2466 /* clgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2466 /* clgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2473 /* clgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2473 /* clgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2480 /* clgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2480 /* clgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2488 /* clgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2488 /* clgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2495 /* clgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2495 /* clgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2503 /* clgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2503 /* clgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2511 /* clgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2511 /* clgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2519 /* clgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2519 /* clgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2527 /* clgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2527 /* clgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2536 /* clgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2536 /* clgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2544 /* clgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2544 /* clgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2553 /* clgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2553 /* clgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2562 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2562 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2568 /* clgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2574 /* clgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2581 /* clgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2588 /* clgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2596 /* clgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2603 /* clgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2611 /* clgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2619 /* clgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2627 /* clgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2635 /* clgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2644 /* clgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2652 /* clgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2661 /* clgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2670 /* clgt */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureMiscellaneousExtensions, 2670 /* clgt */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2675 /* clgte */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2675 /* clgte */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2681 /* clgth */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2681 /* clgth */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2687 /* clgthe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2687 /* clgthe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2694 /* clgtl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2694 /* clgtl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2700 /* clgtle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2700 /* clgtle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2707 /* clgtlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2707 /* clgtlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2714 /* clgtne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2714 /* clgtne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2721 /* clgtnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2721 /* clgtnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2728 /* clgtnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2728 /* clgtnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2736 /* clgtnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2736 /* clgtnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2743 /* clgtnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2743 /* clgtnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2751 /* clgtnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2751 /* clgtnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2759 /* clgxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2759 /* clgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2766 /* clgxtr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2766 /* clgxtr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2773 /* clhf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2773 /* clhf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2778 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2785 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2785 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2791 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2795 /* clib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2795 /* clib */, MCK_GR32, 1 /* 0 */ },
  { 0, 2800 /* clibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2800 /* clibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2806 /* clibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2806 /* clibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2812 /* clibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2812 /* clibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2819 /* clibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2819 /* clibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2825 /* clible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2825 /* clible */, MCK_GR32, 1 /* 0 */ },
  { 0, 2832 /* cliblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2832 /* cliblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2839 /* clibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2839 /* clibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 2846 /* clibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2846 /* clibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2853 /* clibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2853 /* clibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2861 /* clibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2861 /* clibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2868 /* clibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2868 /* clibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2876 /* clibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2876 /* clibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2884 /* clih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2889 /* clij */, MCK_GR32, 1 /* 0 */ },
  { 0, 2889 /* clij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2894 /* clije */, MCK_GR32, 1 /* 0 */ },
  { 0, 2894 /* clije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2900 /* clijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2900 /* clijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2906 /* clijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2906 /* clijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2913 /* clijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2913 /* clijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2919 /* clijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2919 /* clijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2926 /* clijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2926 /* clijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2933 /* clijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 2933 /* clijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2940 /* clijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2940 /* clijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2947 /* clijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2947 /* clijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2955 /* clijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2955 /* clijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2962 /* clijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2962 /* clijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2970 /* clijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2970 /* clijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2978 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2983 /* clm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2983 /* clm */, MCK_GR32, 1 /* 0 */ },
  { 0, 2987 /* clmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2987 /* clmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2992 /* clmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2992 /* clmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2997 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3001 /* clrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 3001 /* clrb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3006 /* clrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3006 /* clrbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3012 /* clrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3012 /* clrbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3018 /* clrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3018 /* clrbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3025 /* clrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3025 /* clrbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3031 /* clrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3031 /* clrble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3038 /* clrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3038 /* clrblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3045 /* clrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3045 /* clrbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3052 /* clrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3052 /* clrbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3059 /* clrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3059 /* clrbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3067 /* clrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3067 /* clrbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3074 /* clrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3074 /* clrbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3082 /* clrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3082 /* clrbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3090 /* clrj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3090 /* clrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 3095 /* clrje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3095 /* clrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3101 /* clrjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3101 /* clrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3107 /* clrjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3107 /* clrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3114 /* clrjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3114 /* clrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3120 /* clrjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3120 /* clrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3127 /* clrjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3127 /* clrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3134 /* clrjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3134 /* clrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3141 /* clrjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3141 /* clrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3148 /* clrjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3148 /* clrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3156 /* clrjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3156 /* clrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3163 /* clrjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3163 /* clrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3171 /* clrjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3171 /* clrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3179 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3179 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3184 /* clrt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3189 /* clrte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3195 /* clrth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3201 /* clrthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3208 /* clrtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3214 /* clrtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3221 /* clrtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3228 /* clrtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3235 /* clrtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3242 /* clrtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3250 /* clrtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3257 /* clrtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3265 /* clrtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3273 /* clst */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3278 /* clt */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureMiscellaneousExtensions, 3278 /* clt */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3282 /* clte */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3282 /* clte */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3287 /* clth */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3287 /* clth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3292 /* clthe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3292 /* clthe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3298 /* cltl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3298 /* cltl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3303 /* cltle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3303 /* cltle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3309 /* cltlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3309 /* cltlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3315 /* cltne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3315 /* cltne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3321 /* cltnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3321 /* cltnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3327 /* cltnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3327 /* cltnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3334 /* cltnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3334 /* cltnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3340 /* cltnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3340 /* cltnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3347 /* cltnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3347 /* cltnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3354 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3354 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 3358 /* cmpsc */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3364 /* cp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { Feature_FeatureDFPPackedConversion, 3367 /* cpdt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 3367 /* cpdt */, MCK_FP64, 1 /* 0 */ },
  { 0, 3372 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDFPPackedConversion, 3378 /* cpxt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 3378 /* cpxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 3383 /* cpya */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 3388 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3391 /* crb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 3391 /* crb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3395 /* crbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3395 /* crbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3400 /* crbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3400 /* crbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3405 /* crbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3405 /* crbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3411 /* crbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3411 /* crbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3416 /* crble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3416 /* crble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3422 /* crblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3422 /* crblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3428 /* crbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3428 /* crbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3434 /* crbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3434 /* crbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3440 /* crbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3440 /* crbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3447 /* crbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3447 /* crbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3453 /* crbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3453 /* crbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3460 /* crbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3460 /* crbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3467 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3467 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 3471 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3471 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3476 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3476 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3481 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3481 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3487 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3487 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3492 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3492 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3498 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3498 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3504 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3504 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3510 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3510 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3516 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3516 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3523 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3523 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3529 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3529 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3536 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3536 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3543 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3543 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3547 /* crt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3551 /* crte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3556 /* crth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3561 /* crthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3567 /* crtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3572 /* crtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3578 /* crtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3584 /* crtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3590 /* crtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3596 /* crtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3603 /* crtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3609 /* crtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3616 /* crtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3623 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3623 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3626 /* csdtr */, MCK_FP64, 2 /* 1 */ },
  { 0, 3626 /* csdtr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3632 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3632 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3636 /* csst */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 3636 /* csst */, MCK_GR64, 4 /* 2 */ },
  { 0, 3641 /* csxtr */, MCK_FP128, 2 /* 1 */ },
  { 0, 3641 /* csxtr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3647 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3647 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3651 /* cu12 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3651 /* cu12 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3656 /* cu14 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3656 /* cu14 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3661 /* cu21 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3661 /* cu21 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3666 /* cu24 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3666 /* cu24 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3671 /* cu41 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3676 /* cu42 */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3681 /* cudtr */, MCK_FP64, 2 /* 1 */ },
  { 0, 3681 /* cudtr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3687 /* cuse */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3692 /* cutfu */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3692 /* cutfu */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3698 /* cuutf */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3698 /* cuutf */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 3704 /* cuxtr */, MCK_FP128, 2 /* 1 */ },
  { 0, 3704 /* cuxtr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3710 /* cvb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3710 /* cvb */, MCK_GR32, 1 /* 0 */ },
  { 0, 3714 /* cvbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3714 /* cvbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3719 /* cvby */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3719 /* cvby */, MCK_GR32, 1 /* 0 */ },
  { 0, 3724 /* cvd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3724 /* cvd */, MCK_GR32, 1 /* 0 */ },
  { 0, 3728 /* cvdg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3728 /* cvdg */, MCK_GR64, 1 /* 0 */ },
  { 0, 3733 /* cvdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3733 /* cvdy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3738 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3743 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3743 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3749 /* cxfbra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3749 /* cxfbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 3756 /* cxfr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3756 /* cxfr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3761 /* cxftr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3761 /* cxftr */, MCK_GR32, 4 /* 2 */ },
  { 0, 3767 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3767 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3773 /* cxgbra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3773 /* cxgbra */, MCK_GR64, 4 /* 2 */ },
  { 0, 3780 /* cxgr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3780 /* cxgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3785 /* cxgtr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3785 /* cxgtr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3791 /* cxgtra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3791 /* cxgtra */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 3798 /* cxlfbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3798 /* cxlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 3805 /* cxlftr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3805 /* cxlftr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 3812 /* cxlgbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3812 /* cxlgbr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 3819 /* cxlgtr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3819 /* cxlgtr */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureDFPPackedConversion, 3826 /* cxpt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPPackedConversion, 3826 /* cxpt */, MCK_FP128, 1 /* 0 */ },
  { 0, 3831 /* cxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3835 /* cxstr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3835 /* cxstr */, MCK_GR128, 2 /* 1 */ },
  { 0, 3841 /* cxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3846 /* cxutr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3846 /* cxutr */, MCK_GR128, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 3852 /* cxzt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 3852 /* cxzt */, MCK_FP128, 1 /* 0 */ },
  { 0, 3857 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3857 /* cy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDFPZonedConversion, 3860 /* czdt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 3860 /* czdt */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureDFPZonedConversion, 3865 /* czxt */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { Feature_FeatureDFPZonedConversion, 3865 /* czxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 3870 /* d */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3870 /* d */, MCK_GR128, 1 /* 0 */ },
  { 0, 3872 /* dd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3872 /* dd */, MCK_FP64, 1 /* 0 */ },
  { 0, 3875 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3875 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3879 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3884 /* ddr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3888 /* ddtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 3893 /* ddtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 3899 /* de */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3899 /* de */, MCK_FP32, 1 /* 0 */ },
  { 0, 3902 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3902 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3906 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3911 /* der */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3915 /* didbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 3921 /* diebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 3927 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3927 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 3930 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3930 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 3934 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3934 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3939 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3939 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3943 /* dp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 3946 /* dr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3946 /* dr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3949 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3949 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 3953 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3953 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 3958 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3958 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3964 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3964 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3969 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3974 /* dxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3978 /* dxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 3983 /* dxtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 3989 /* ear */, MCK_AR32, 2 /* 1 */ },
  { 0, 3989 /* ear */, MCK_GR32, 1 /* 0 */ },
  { 0, 3993 /* ecag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 3993 /* ecag */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3998 /* ectg */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 3998 /* ectg */, MCK_GR64, 4 /* 2 */ },
  { 0, 4003 /* ed */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 4003 /* ed */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 4006 /* edmk */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 4006 /* edmk */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 4011 /* eedtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4017 /* eextr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4023 /* efpc */, MCK_GR32, 1 /* 0 */ },
  { 0, 4028 /* epsw */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4033 /* esdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4039 /* esxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureTransactionalExecution, 4045 /* etnd */, MCK_GR32, 1 /* 0 */ },
  { 0, 4050 /* ex */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4050 /* ex */, MCK_GR64, 1 /* 0 */ },
  { 0, 4053 /* exrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4053 /* exrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4058 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 4064 /* fidbra */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 4071 /* fidr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4076 /* fidtr */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 4082 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 4088 /* fiebra */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 4095 /* fier */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4100 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 4106 /* fixbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4113 /* fixr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4118 /* fixtr */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4124 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 4124 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 4130 /* hdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4134 /* her */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4138 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4138 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 4141 /* icm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4141 /* icm */, MCK_GR32, 1 /* 0 */ },
  { 0, 4145 /* icmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4145 /* icmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4150 /* icmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4150 /* icmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 4155 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4155 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 4159 /* iedtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 4165 /* iextr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 4171 /* iihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4176 /* iihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4181 /* iihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4186 /* iilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 4191 /* iilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 4196 /* iill */, MCK_GR32, 1 /* 0 */ },
  { 0, 4201 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 4205 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4207 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4210 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4213 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4217 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4221 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4226 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4230 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4235 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4240 /* jgm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4244 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4249 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4254 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4260 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4265 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4271 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4277 /* jgnm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4282 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4287 /* jgnp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4292 /* jgnz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4297 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4301 /* jgp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4305 /* jgz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 4309 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4312 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4316 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4319 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4323 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4327 /* jm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4330 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4334 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4338 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4343 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4347 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4352 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4357 /* jnm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4361 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4365 /* jnp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4369 /* jnz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4373 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4376 /* jp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4379 /* jz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 4382 /* kdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4382 /* kdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 4386 /* kdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4391 /* kdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4396 /* keb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4396 /* keb */, MCK_FP32, 1 /* 0 */ },
  { 0, 4400 /* kebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4405 /* kimd */, MCK_GR128, 2 /* 1 */ },
  { 0, 4405 /* kimd */, MCK_GR64, 1 /* 0 */ },
  { 0, 4410 /* klmd */, MCK_GR128, 2 /* 1 */ },
  { 0, 4410 /* klmd */, MCK_GR64, 1 /* 0 */ },
  { 0, 4415 /* km */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 4418 /* kmac */, MCK_GR128, 2 /* 1 */ },
  { 0, 4418 /* kmac */, MCK_GR64, 1 /* 0 */ },
  { 0, 4423 /* kmc */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist4, 4427 /* kmctr */, MCK_GR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureMessageSecurityAssist4, 4433 /* kmf */, MCK_GR128, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist4, 4437 /* kmo */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 4441 /* kxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4446 /* kxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4451 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4451 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 4453 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4453 /* la */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 4456 /* laa */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4456 /* laa */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4460 /* laag */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4460 /* laag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4465 /* laal */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4465 /* laal */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4470 /* laalg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4470 /* laalg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4476 /* lae */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4476 /* lae */, MCK_GR64, 1 /* 0 */ },
  { 0, 4480 /* laey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4480 /* laey */, MCK_GR64, 1 /* 0 */ },
  { 0, 4485 /* lam */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 4485 /* lam */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4489 /* lamy */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 4489 /* lamy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4494 /* lan */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4494 /* lan */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4498 /* lang */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4498 /* lang */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4503 /* lao */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4503 /* lao */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4507 /* laog */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4507 /* laog */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4512 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4512 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4517 /* lat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4517 /* lat */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 4521 /* lax */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4521 /* lax */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 4525 /* laxg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 4525 /* laxg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4530 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4530 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 4534 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4534 /* lb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4537 /* lbh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4537 /* lbh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4541 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 4545 /* lcbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 4545 /* lcbb */, MCK_GR32, 1 /* 0 */ },
  { 0, 4550 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4556 /* lcdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4562 /* lcdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4567 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4573 /* lcer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4578 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4578 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4584 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4589 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4593 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4599 /* lcxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 4604 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4604 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 4607 /* lde */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4607 /* lde */, MCK_FP64, 1 /* 0 */ },
  { 0, 4611 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4611 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 4616 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 4616 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4622 /* lder */, MCK_FP32, 2 /* 1 */ },
  { 0, 4622 /* lder */, MCK_FP64, 1 /* 0 */ },
  { 0, 4627 /* ldetr */, MCK_FP32, 2 /* 1 */ },
  { 0, 4627 /* ldetr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4633 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4633 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 4638 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4642 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 4648 /* ldxbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4655 /* ldxr */, MCK_FP128, 2 /* 1 */ },
  { 0, 4655 /* ldxr */, MCK_FP64, 1 /* 0 */ },
  { 0, 4660 /* ldxtr */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4666 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4666 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 4670 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4670 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 4673 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 4673 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 4679 /* ledbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 4679 /* ledbra */, MCK_FP64, 4 /* 2 */ },
  { 0, 4686 /* ledr */, MCK_FP32, 1 /* 0 */ },
  { 0, 4686 /* ledr */, MCK_FP64, 2 /* 1 */ },
  { 0, 4691 /* ledtr */, MCK_FP32, 1 /* 0 */ },
  { 0, 4691 /* ledtr */, MCK_FP64, 4 /* 2 */ },
  { 0, 4697 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4701 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 4707 /* lexbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 4714 /* lexr */, MCK_FP128, 2 /* 1 */ },
  { 0, 4714 /* lexr */, MCK_FP32, 1 /* 0 */ },
  { 0, 4719 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4719 /* ley */, MCK_FP32, 1 /* 0 */ },
  { 0, 4723 /* lfas */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4728 /* lfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4728 /* lfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 4732 /* lfhat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4732 /* lfhat */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4738 /* lfpc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 4743 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4743 /* lg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 4746 /* lgat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4746 /* lgat */, MCK_GR64, 1 /* 0 */ },
  { 0, 4751 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4751 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 4755 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4760 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 4760 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4765 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4765 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4769 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 4774 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4774 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4779 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4779 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4785 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4785 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4789 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 4794 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4799 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4799 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4805 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4809 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4809 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4814 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4814 /* lh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4817 /* lhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4817 /* lhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4821 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 4825 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4829 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 4829 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4834 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4834 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 4838 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4838 /* llc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4842 /* llch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4842 /* llch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4847 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4852 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4852 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 4857 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4863 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4863 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 4868 /* llgfat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4868 /* llgfat */, MCK_GR64, 1 /* 0 */ },
  { 0, 4875 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4875 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4881 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4881 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4888 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4888 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4893 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4899 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4899 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4906 /* llgt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4906 /* llgt */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 4911 /* llgtat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4911 /* llgtat */, MCK_GR64, 1 /* 0 */ },
  { 0, 4918 /* llgtr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4924 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4924 /* llh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4928 /* llhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4928 /* llhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4933 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4938 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 4938 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4944 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4950 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4956 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4962 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4968 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4974 /* llill */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 4980 /* llzrgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 4980 /* llzrgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4987 /* lm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4987 /* lm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4990 /* lmd */, MCK_BDAddr64Disp12, 12 /* 2, 3 */ },
  { 0, 4990 /* lmd */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4994 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4994 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4998 /* lmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4998 /* lmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 5002 /* lmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 5002 /* lmy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5006 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5012 /* lndfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5018 /* lndr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5023 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5029 /* lner */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5034 /* lngfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5034 /* lngfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5040 /* lngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5045 /* lnr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5049 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 5055 /* lnxr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5060 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5060 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5064 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5064 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5069 /* locfh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5069 /* locfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5075 /* locfhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5075 /* locfhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5082 /* locfhh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5082 /* locfhh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5089 /* locfhhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5089 /* locfhhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5097 /* locfhl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5097 /* locfhl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5104 /* locfhle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5104 /* locfhle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5112 /* locfhlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5112 /* locfhlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5120 /* locfhm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5120 /* locfhm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5127 /* locfhne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5127 /* locfhne */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5135 /* locfhnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5135 /* locfhnh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5143 /* locfhnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5143 /* locfhnhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5152 /* locfhnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5152 /* locfhnl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5160 /* locfhnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5160 /* locfhnle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5169 /* locfhnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5169 /* locfhnlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5178 /* locfhnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5178 /* locfhnm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5186 /* locfhno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5186 /* locfhno */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5194 /* locfhnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5194 /* locfhnp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5202 /* locfhnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5202 /* locfhnz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5210 /* locfho */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5210 /* locfho */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5217 /* locfhp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5217 /* locfhp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5224 /* locfhr */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5231 /* locfhre */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5239 /* locfhrh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5247 /* locfhrhe */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5256 /* locfhrl */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5264 /* locfhrle */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5273 /* locfhrlh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5282 /* locfhrm */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5290 /* locfhrne */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5299 /* locfhrnh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5308 /* locfhrnhe */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5318 /* locfhrnl */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5327 /* locfhrnle */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5337 /* locfhrnlh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5347 /* locfhrnm */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5356 /* locfhrno */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5365 /* locfhrnp */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5374 /* locfhrnz */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5383 /* locfhro */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5391 /* locfhrp */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5399 /* locfhrz */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5407 /* locfhz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 5407 /* locfhz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5414 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5414 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5419 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5419 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5425 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5425 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5431 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5431 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5438 /* locghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5445 /* locghie */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5453 /* locghih */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5461 /* locghihe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5470 /* locghil */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5478 /* locghile */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5487 /* locghilh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5496 /* locghim */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5504 /* locghine */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5513 /* locghinh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5522 /* locghinhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5532 /* locghinl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5541 /* locghinle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5551 /* locghinlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5561 /* locghinm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5570 /* locghino */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5579 /* locghinp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5588 /* locghinz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5597 /* locghio */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5605 /* locghip */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5613 /* locghiz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5621 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5621 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5627 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5627 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5634 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5634 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5641 /* locgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5641 /* locgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5647 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5647 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5654 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5654 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5661 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5661 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5669 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5669 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5676 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5676 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5684 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5684 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5692 /* locgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5692 /* locgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5699 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5699 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5706 /* locgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5706 /* locgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5713 /* locgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5713 /* locgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5720 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5720 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5726 /* locgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5726 /* locgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5732 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5738 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5745 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5752 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5760 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5767 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5775 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5783 /* locgrm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5790 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5798 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5806 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5815 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5823 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5832 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5841 /* locgrnm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5849 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5857 /* locgrnp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5865 /* locgrnz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5873 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5880 /* locgrp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5887 /* locgrz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5894 /* locgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5894 /* locgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5900 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5900 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5905 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5905 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5911 /* lochhi */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5918 /* lochhie */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5926 /* lochhih */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5934 /* lochhihe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5943 /* lochhil */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5951 /* lochhile */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5960 /* lochhilh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5969 /* lochhim */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5977 /* lochhine */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5986 /* lochhinh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5995 /* lochhinhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6005 /* lochhinl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6014 /* lochhinle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6024 /* lochhinlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6034 /* lochhinm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6043 /* lochhino */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6052 /* lochhinp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6061 /* lochhinz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6070 /* lochhio */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6078 /* lochhip */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6086 /* lochhiz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6094 /* lochi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6100 /* lochie */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6107 /* lochih */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6114 /* lochihe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6122 /* lochil */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6129 /* lochile */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6137 /* lochilh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6145 /* lochim */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6152 /* lochine */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6160 /* lochinh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6168 /* lochinhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6177 /* lochinl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6185 /* lochinle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6194 /* lochinlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6203 /* lochinm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6211 /* lochino */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6219 /* lochinp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6227 /* lochinz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6235 /* lochio */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6242 /* lochip */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6249 /* lochiz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6256 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6256 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6261 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6261 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6267 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6267 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6273 /* locm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6273 /* locm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6278 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6278 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6284 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6284 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6290 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6290 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6297 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6297 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6303 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6303 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6310 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6310 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6317 /* locnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6317 /* locnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6323 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6323 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6329 /* locnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6329 /* locnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6335 /* locnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6335 /* locnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6341 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6341 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6346 /* locp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6346 /* locp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6351 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6356 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6362 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6368 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6375 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6381 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6388 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6395 /* locrm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6401 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6408 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6415 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6423 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6430 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6438 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6446 /* locrnm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6453 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6460 /* locrnp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6467 /* locrnz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6474 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6480 /* locrp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6486 /* locrz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6492 /* locz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6492 /* locz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 6497 /* lpd */, MCK_BDAddr64Disp12, 6 /* 1, 2 */ },
  { Feature_FeatureInterlockedAccess1, 6497 /* lpd */, MCK_GR128, 1 /* 0 */ },
  { 0, 6501 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6507 /* lpdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 6513 /* lpdg */, MCK_BDAddr64Disp12, 6 /* 1, 2 */ },
  { Feature_FeatureInterlockedAccess1, 6513 /* lpdg */, MCK_GR128, 1 /* 0 */ },
  { 0, 6518 /* lpdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6523 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6529 /* lper */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6534 /* lpgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6534 /* lpgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 6540 /* lpgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6545 /* lpq */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6545 /* lpq */, MCK_GR128, 1 /* 0 */ },
  { 0, 6549 /* lpr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6553 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6559 /* lpxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6564 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6567 /* lrdr */, MCK_FP128, 2 /* 1 */ },
  { 0, 6567 /* lrdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 6572 /* lrer */, MCK_FP32, 1 /* 0 */ },
  { 0, 6572 /* lrer */, MCK_FP64, 2 /* 1 */ },
  { 0, 6577 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 6577 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 6581 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6581 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 6585 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6585 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6590 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6596 /* lrvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6596 /* lrvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 6601 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6606 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6606 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 6609 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6615 /* ltdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6620 /* ltdtr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6626 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6632 /* lter */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6637 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6637 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6641 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6641 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 6646 /* ltgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6646 /* ltgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 6652 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6657 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6661 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6667 /* ltxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6672 /* ltxtr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6678 /* lxd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6678 /* lxd */, MCK_FP128, 1 /* 0 */ },
  { 0, 6682 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6682 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 6687 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 6687 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 6693 /* lxdr */, MCK_FP128, 1 /* 0 */ },
  { 0, 6693 /* lxdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 6698 /* lxdtr */, MCK_FP128, 1 /* 0 */ },
  { 0, 6698 /* lxdtr */, MCK_FP64, 2 /* 1 */ },
  { 0, 6704 /* lxe */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6704 /* lxe */, MCK_FP128, 1 /* 0 */ },
  { 0, 6708 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6708 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 6713 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 6713 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 6719 /* lxer */, MCK_FP128, 1 /* 0 */ },
  { 0, 6719 /* lxer */, MCK_FP32, 2 /* 1 */ },
  { 0, 6724 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6728 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6728 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 6731 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 6736 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 6741 /* lzrf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 6741 /* lzrf */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 6746 /* lzrg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 6746 /* lzrg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6751 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 6756 /* m */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6756 /* m */, MCK_GR128, 1 /* 0 */ },
  { 0, 6758 /* mad */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6758 /* mad */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6762 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6762 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6767 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 6773 /* madr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 6778 /* mae */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6778 /* mae */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6782 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6782 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6787 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 6793 /* maer */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 6798 /* may */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6798 /* may */, MCK_FP128, 1 /* 0 */ },
  { 0, 6798 /* may */, MCK_FP64, 2 /* 1 */ },
  { 0, 6802 /* mayh */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6802 /* mayh */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6807 /* mayhr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 6813 /* mayl */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6813 /* mayl */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6818 /* maylr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 6824 /* mayr */, MCK_FP128, 1 /* 0 */ },
  { 0, 6824 /* mayr */, MCK_FP64, 6 /* 1, 2 */ },
  { 0, 6829 /* mc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6832 /* md */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6832 /* md */, MCK_FP64, 1 /* 0 */ },
  { 0, 6835 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6835 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6839 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6844 /* mde */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6844 /* mde */, MCK_FP64, 1 /* 0 */ },
  { 0, 6848 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6848 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6853 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 6853 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 6859 /* mder */, MCK_FP32, 2 /* 1 */ },
  { 0, 6859 /* mder */, MCK_FP64, 1 /* 0 */ },
  { 0, 6864 /* mdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6868 /* mdtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 6873 /* mdtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 6879 /* me */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6879 /* me */, MCK_FP64, 1 /* 0 */ },
  { 0, 6882 /* mee */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6882 /* mee */, MCK_FP32, 1 /* 0 */ },
  { 0, 6886 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6886 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 6891 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6897 /* meer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6902 /* mer */, MCK_FP32, 2 /* 1 */ },
  { 0, 6902 /* mer */, MCK_FP64, 1 /* 0 */ },
  { 0, 6906 /* mfy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6906 /* mfy */, MCK_GR128, 1 /* 0 */ },
  { 0, 6910 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 6915 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6915 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 6918 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 6922 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6922 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 6926 /* ml */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6926 /* ml */, MCK_GR128, 1 /* 0 */ },
  { 0, 6929 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6929 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 6933 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 6933 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 6938 /* mlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 6938 /* mlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6942 /* mp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 6945 /* mr */, MCK_GR128, 1 /* 0 */ },
  { 0, 6945 /* mr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6948 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6948 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 6951 /* msd */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6951 /* msd */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6955 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6955 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6960 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 6966 /* msdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 6971 /* mse */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6971 /* mse */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6975 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 6975 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6980 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 6986 /* mser */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 6991 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 6996 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6996 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7000 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7000 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 7005 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 7011 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 7011 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 7017 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7022 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7026 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7026 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7030 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7030 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7034 /* mvcin */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7034 /* mvcin */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7040 /* mvck */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7040 /* mvck */, MCK_BDRAddr64Disp12, 1 /* 0 */ },
  { 0, 7040 /* mvck */, MCK_GR64, 4 /* 2 */ },
  { 0, 7045 /* mvcl */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7050 /* mvcle */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { 0, 7050 /* mvcle */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7056 /* mvclu */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7056 /* mvclu */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7062 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7068 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7074 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7079 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7083 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 7088 /* mvn */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7088 /* mvn */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7092 /* mvo */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 7096 /* mvst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7101 /* mvz */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7101 /* mvz */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7105 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7110 /* mxd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7110 /* mxd */, MCK_FP128, 1 /* 0 */ },
  { 0, 7114 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7114 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 7119 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7119 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 7125 /* mxdr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7125 /* mxdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 7130 /* mxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7134 /* mxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 7139 /* mxtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 7145 /* my */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7145 /* my */, MCK_FP128, 1 /* 0 */ },
  { 0, 7145 /* my */, MCK_FP64, 2 /* 1 */ },
  { 0, 7148 /* myh */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7148 /* myh */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7152 /* myhr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7157 /* myl */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7157 /* myl */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7161 /* mylr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7166 /* myr */, MCK_FP128, 1 /* 0 */ },
  { 0, 7166 /* myr */, MCK_FP64, 6 /* 1, 2 */ },
  { 0, 7170 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7170 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 7172 /* nc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7172 /* nc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7175 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7175 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 7178 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7182 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 7187 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7195 /* nihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7200 /* nihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7205 /* nihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7210 /* nilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 7215 /* nilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7220 /* nill */, MCK_GR32, 1 /* 0 */ },
  { 0, 7225 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 7229 /* nop */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 7233 /* nopr */, MCK_GR64, 1 /* 0 */ },
  { 0, 7238 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7241 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureTransactionalExecution, 7245 /* ntstg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureTransactionalExecution, 7245 /* ntstg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7251 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7251 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 7254 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7254 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 7256 /* oc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 7256 /* oc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 7259 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7259 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 7262 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7266 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 7271 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7274 /* oihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7279 /* oihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7284 /* oihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7289 /* oilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 7294 /* oilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7299 /* oill */, MCK_GR32, 1 /* 0 */ },
  { 0, 7304 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 7308 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7311 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 7315 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7315 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7318 /* pack */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 7327 /* pfd */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7331 /* pfdrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 7342 /* pka */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7342 /* pka */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { 0, 7346 /* pku */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7346 /* pku */, MCK_BDLAddr64Disp12Len8, 2 /* 1 */ },
  { 0, 7350 /* plo */, MCK_BDAddr64Disp12, 10 /* 1, 3 */ },
  { 0, 7350 /* plo */, MCK_GR64, 5 /* 0, 2 */ },
  { Feature_FeaturePopulationCount, 7354 /* popcnt */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureProcessorAssist, 7361 /* ppa */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMessageSecurityAssist5, 7365 /* ppno */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 7373 /* qadtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7379 /* qaxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 7385 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 7391 /* risbgn */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 7398 /* risbhg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureHighWord, 7398 /* risbhg */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 7405 /* risblg */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 7405 /* risblg */, MCK_GR64, 2 /* 1 */ },
  { 0, 7412 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7412 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7416 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7416 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7421 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7427 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7433 /* rrdtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7439 /* rrxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 7445 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7451 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7451 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 7471 /* sar */, MCK_AR32, 1 /* 0 */ },
  { 0, 7471 /* sar */, MCK_GR32, 2 /* 1 */ },
  { 0, 7475 /* sd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7475 /* sd */, MCK_FP64, 1 /* 0 */ },
  { 0, 7478 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7478 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 7482 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7487 /* sdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7491 /* sdtr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 7496 /* sdtra */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 7502 /* se */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7502 /* se */, MCK_FP32, 1 /* 0 */ },
  { 0, 7505 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7505 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 7509 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7514 /* ser */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7518 /* sfasr */, MCK_GR32, 1 /* 0 */ },
  { 0, 7524 /* sfpc */, MCK_GR32, 1 /* 0 */ },
  { 0, 7529 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7529 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7532 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7532 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 7536 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 7536 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 7541 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7545 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 7550 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7550 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7553 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7553 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7557 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7557 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 7560 /* sla */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7560 /* sla */, MCK_GR32, 1 /* 0 */ },
  { 0, 7564 /* slag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7564 /* slag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7569 /* slak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 7569 /* slak */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7574 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7574 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 7578 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7578 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7583 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7589 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7594 /* slda */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7594 /* slda */, MCK_GR128, 1 /* 0 */ },
  { 0, 7599 /* sldl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7599 /* sldl */, MCK_GR128, 1 /* 0 */ },
  { 0, 7604 /* sldt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7604 /* sldt */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7609 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 7614 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7614 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7618 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7618 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 7623 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 7629 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 7629 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 7635 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7640 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 7646 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7646 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 7650 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7650 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7655 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 7655 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7660 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7664 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 7669 /* slxt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7669 /* slxt */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7674 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7674 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 7678 /* sp */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 7681 /* spm */, MCK_GR32, 1 /* 0 */ },
  { 0, 7685 /* sqd */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7685 /* sqd */, MCK_FP64, 1 /* 0 */ },
  { 0, 7689 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7689 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 7694 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7700 /* sqdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 7705 /* sqe */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7705 /* sqe */, MCK_FP32, 1 /* 0 */ },
  { 0, 7709 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7709 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 7714 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7720 /* sqer */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 7725 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7731 /* sqxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7736 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7739 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7739 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 7743 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7743 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7748 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 7748 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7753 /* srda */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7753 /* srda */, MCK_GR128, 1 /* 0 */ },
  { 0, 7758 /* srdl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7758 /* srdl */, MCK_GR128, 1 /* 0 */ },
  { 0, 7763 /* srdt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7763 /* srdt */, MCK_FP64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7768 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 7772 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7772 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 7776 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 7776 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 7781 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 7781 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7786 /* srnm */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 7791 /* srnmb */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { 0, 7797 /* srnmt */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { 0, 7803 /* srp */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 7803 /* srp */, MCK_BDLAddr64Disp12Len4, 1 /* 0 */ },
  { 0, 7807 /* srst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7812 /* srstu */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7818 /* srxt */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 7818 /* srxt */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7823 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7823 /* st */, MCK_GR32, 1 /* 0 */ },
  { 0, 7826 /* stam */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 7826 /* stam */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 7831 /* stamy */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 7831 /* stamy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 7837 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7837 /* stc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 7841 /* stch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 7841 /* stch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7846 /* stck */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7851 /* stcke */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7857 /* stckf */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7863 /* stcm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 7863 /* stcm */, MCK_GR32, 1 /* 0 */ },
  { 0, 7868 /* stcmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 7868 /* stcmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7874 /* stcmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 7874 /* stcmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7880 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7880 /* stcy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7885 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7885 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 7889 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7889 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 7894 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7894 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 7898 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7898 /* stey */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 7903 /* stfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 7903 /* stfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7908 /* stfle */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7914 /* stfpc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7920 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7920 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7924 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 7924 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 7930 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7930 /* sth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 7934 /* sthh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 7934 /* sthh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7939 /* sthrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 7939 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 7945 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7945 /* sthy */, MCK_GR32, 1 /* 0 */ },
  { 0, 7950 /* stm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 7950 /* stm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 7954 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 7954 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 7959 /* stmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 7959 /* stmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 7964 /* stmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 7964 /* stmy */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7969 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7969 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7974 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7974 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 7980 /* stocfh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 7980 /* stocfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 7987 /* stocfhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 7987 /* stocfhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 7995 /* stocfhh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 7995 /* stocfhh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8003 /* stocfhhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8003 /* stocfhhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8012 /* stocfhl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8012 /* stocfhl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8020 /* stocfhle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8020 /* stocfhle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8029 /* stocfhlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8029 /* stocfhlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8038 /* stocfhm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8038 /* stocfhm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8046 /* stocfhne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8046 /* stocfhne */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8055 /* stocfhnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8055 /* stocfhnh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8064 /* stocfhnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8064 /* stocfhnhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8074 /* stocfhnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8074 /* stocfhnl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8083 /* stocfhnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8083 /* stocfhnle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8093 /* stocfhnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8093 /* stocfhnlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8103 /* stocfhnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8103 /* stocfhnm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8112 /* stocfhno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8112 /* stocfhno */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8121 /* stocfhnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8121 /* stocfhnp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8130 /* stocfhnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8130 /* stocfhnz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8139 /* stocfho */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8139 /* stocfho */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8147 /* stocfhp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8147 /* stocfhp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 8155 /* stocfhz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 8155 /* stocfhz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8163 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8163 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8169 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8169 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8176 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8176 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8183 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8183 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8191 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8191 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8198 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8198 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8206 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8206 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8214 /* stocgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8214 /* stocgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8221 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8221 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8229 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8229 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8237 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8237 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8246 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8246 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8254 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8254 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8263 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8263 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8272 /* stocgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8272 /* stocgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8280 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8280 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8288 /* stocgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8288 /* stocgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8296 /* stocgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8296 /* stocgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8304 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8304 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8311 /* stocgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8311 /* stocgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8318 /* stocgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8318 /* stocgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8325 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8325 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8331 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8331 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8338 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8338 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8344 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8344 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8351 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8351 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8358 /* stocm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8358 /* stocm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8364 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8364 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8371 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8371 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8378 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8378 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8386 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8386 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8393 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8393 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8401 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8401 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8409 /* stocnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8409 /* stocnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8416 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8416 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8423 /* stocnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8423 /* stocnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8430 /* stocnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8430 /* stocnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8437 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8437 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8443 /* stocp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8443 /* stocp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 8449 /* stocz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 8449 /* stocz */, MCK_GR32, 1 /* 0 */ },
  { 0, 8455 /* stpq */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8455 /* stpq */, MCK_GR128, 1 /* 0 */ },
  { 0, 8460 /* strag */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 8466 /* strl */, MCK_GR32, 1 /* 0 */ },
  { 0, 8466 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 8471 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8471 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 8476 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8476 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 8482 /* strvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8482 /* strvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 8488 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8488 /* sty */, MCK_GR32, 1 /* 0 */ },
  { 0, 8492 /* su */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8492 /* su */, MCK_FP32, 1 /* 0 */ },
  { 0, 8495 /* sur */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 8503 /* sw */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8503 /* sw */, MCK_FP64, 1 /* 0 */ },
  { 0, 8506 /* swr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 8510 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 8515 /* sxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 8519 /* sxtr */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureFPExtension, 8524 /* sxtra */, MCK_FP128, 7 /* 0, 1, 2 */ },
  { 0, 8530 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 8530 /* sy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 8533 /* tabort */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8544 /* tbdr */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 8549 /* tbedr */, MCK_FP32, 1 /* 0 */ },
  { 0, 8549 /* tbedr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureTransactionalExecution, 8555 /* tbegin */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 8562 /* tbeginc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8570 /* tcdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8570 /* tcdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 8575 /* tceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8575 /* tceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 8580 /* tcxb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8580 /* tcxb */, MCK_FP128, 1 /* 0 */ },
  { 0, 8585 /* tdcdt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8585 /* tdcdt */, MCK_FP64, 1 /* 0 */ },
  { 0, 8591 /* tdcet */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8591 /* tdcet */, MCK_FP32, 1 /* 0 */ },
  { 0, 8597 /* tdcxt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8597 /* tdcxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 8603 /* tdgdt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8603 /* tdgdt */, MCK_FP64, 1 /* 0 */ },
  { 0, 8609 /* tdget */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8609 /* tdget */, MCK_FP32, 1 /* 0 */ },
  { 0, 8615 /* tdgxt */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 8615 /* tdgxt */, MCK_FP128, 1 /* 0 */ },
  { 0, 8626 /* thder */, MCK_FP32, 2 /* 1 */ },
  { 0, 8626 /* thder */, MCK_FP64, 1 /* 0 */ },
  { 0, 8632 /* thdr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 8637 /* tm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8640 /* tmh */, MCK_GR32, 1 /* 0 */ },
  { 0, 8644 /* tmhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 8649 /* tmhl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 8654 /* tml */, MCK_GR32, 1 /* 0 */ },
  { 0, 8658 /* tmlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 8663 /* tmll */, MCK_GR32, 1 /* 0 */ },
  { 0, 8668 /* tmy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 8672 /* tp */, MCK_BDLAddr64Disp12Len4, 1 /* 0 */ },
  { 0, 8675 /* tr */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 8675 /* tr */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 8678 /* tre */, MCK_GR128, 1 /* 0 */ },
  { 0, 8678 /* tre */, MCK_GR64, 2 /* 1 */ },
  { 0, 8682 /* troo */, MCK_GR128, 1 /* 0 */ },
  { 0, 8682 /* troo */, MCK_GR64, 2 /* 1 */ },
  { 0, 8682 /* troo */, MCK_GR128, 1 /* 0 */ },
  { 0, 8682 /* troo */, MCK_GR64, 2 /* 1 */ },
  { 0, 8687 /* trot */, MCK_GR128, 1 /* 0 */ },
  { 0, 8687 /* trot */, MCK_GR64, 2 /* 1 */ },
  { 0, 8687 /* trot */, MCK_GR128, 1 /* 0 */ },
  { 0, 8687 /* trot */, MCK_GR64, 2 /* 1 */ },
  { 0, 8692 /* trt */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 8692 /* trt */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 8696 /* trte */, MCK_GR128, 1 /* 0 */ },
  { 0, 8696 /* trte */, MCK_GR64, 2 /* 1 */ },
  { 0, 8696 /* trte */, MCK_GR128, 1 /* 0 */ },
  { 0, 8696 /* trte */, MCK_GR64, 2 /* 1 */ },
  { 0, 8701 /* trto */, MCK_GR128, 1 /* 0 */ },
  { 0, 8701 /* trto */, MCK_GR64, 2 /* 1 */ },
  { 0, 8701 /* trto */, MCK_GR128, 1 /* 0 */ },
  { 0, 8701 /* trto */, MCK_GR64, 2 /* 1 */ },
  { 0, 8706 /* trtr */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 8706 /* trtr */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 8711 /* trtre */, MCK_GR128, 1 /* 0 */ },
  { 0, 8711 /* trtre */, MCK_GR64, 2 /* 1 */ },
  { 0, 8711 /* trtre */, MCK_GR128, 1 /* 0 */ },
  { 0, 8711 /* trtre */, MCK_GR64, 2 /* 1 */ },
  { 0, 8717 /* trtt */, MCK_GR128, 1 /* 0 */ },
  { 0, 8717 /* trtt */, MCK_GR64, 2 /* 1 */ },
  { 0, 8717 /* trtt */, MCK_GR128, 1 /* 0 */ },
  { 0, 8717 /* trtt */, MCK_GR64, 2 /* 1 */ },
  { 0, 8722 /* ts */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 8725 /* unpk */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
  { 0, 8730 /* unpka */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 8730 /* unpka */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 8736 /* unpku */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 8736 /* unpku */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { Feature_FeatureVector, 8746 /* va */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8749 /* vab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8753 /* vac */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8757 /* vacc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8762 /* vaccb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8768 /* vaccc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8774 /* vacccq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8781 /* vaccf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8787 /* vaccg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8793 /* vacch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8799 /* vaccq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8805 /* vacq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8810 /* vaf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8814 /* vag */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8818 /* vah */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8822 /* vaq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8826 /* vavg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8831 /* vavgb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8837 /* vavgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8843 /* vavgg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8849 /* vavgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8855 /* vavgl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8861 /* vavglb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8868 /* vavglf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8875 /* vavglg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8882 /* vavglh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8889 /* vcdg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8894 /* vcdgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8900 /* vcdlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8906 /* vcdlgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8913 /* vceq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8918 /* vceqb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8924 /* vceqbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8931 /* vceqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8937 /* vceqfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8944 /* vceqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8950 /* vceqgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8957 /* vceqh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8963 /* vceqhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8970 /* vcgd */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8975 /* vcgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8981 /* vch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8985 /* vchb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8990 /* vchbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8996 /* vchf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9001 /* vchfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9007 /* vchg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9012 /* vchgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9018 /* vchh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9023 /* vchhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9029 /* vchl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9034 /* vchlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9040 /* vchlbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9047 /* vchlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9053 /* vchlfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9060 /* vchlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9066 /* vchlgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9073 /* vchlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9079 /* vchlhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9086 /* vcksm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9092 /* vclgd */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9098 /* vclgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9105 /* vclz */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9110 /* vclzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9116 /* vclzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9122 /* vclzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9128 /* vclzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9134 /* vctz */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9139 /* vctzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9145 /* vctzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9151 /* vctzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9157 /* vctzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9163 /* vec */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9167 /* vecb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9172 /* vecf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9177 /* vecg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9182 /* vech */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9187 /* vecl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9192 /* veclb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9198 /* veclf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9204 /* veclg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9210 /* veclh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9216 /* verim */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9222 /* verimb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9229 /* verimf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9236 /* verimg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9243 /* verimh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9250 /* verll */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9250 /* verll */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9256 /* verllb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9256 /* verllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9263 /* verllf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9263 /* verllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9270 /* verllg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9270 /* verllg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9277 /* verllh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9277 /* verllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9284 /* verllv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9291 /* verllvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9299 /* verllvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9307 /* verllvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9315 /* verllvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9323 /* vesl */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9323 /* vesl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9328 /* veslb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9328 /* veslb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9334 /* veslf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9334 /* veslf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9340 /* veslg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9340 /* veslg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9346 /* veslh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9346 /* veslh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9352 /* veslv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9358 /* veslvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9365 /* veslvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9372 /* veslvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9379 /* veslvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9386 /* vesra */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9386 /* vesra */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9392 /* vesrab */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9392 /* vesrab */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9399 /* vesraf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9399 /* vesraf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9406 /* vesrag */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9406 /* vesrag */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9413 /* vesrah */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9413 /* vesrah */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9420 /* vesrav */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9427 /* vesravb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9435 /* vesravf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9443 /* vesravg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9451 /* vesravh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9459 /* vesrl */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9459 /* vesrl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9465 /* vesrlb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9465 /* vesrlb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9472 /* vesrlf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9472 /* vesrlf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9479 /* vesrlg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9479 /* vesrlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9486 /* vesrlh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9486 /* vesrlh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9493 /* vesrlv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9500 /* vesrlvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9508 /* vesrlvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9516 /* vesrlvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9524 /* vesrlvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9532 /* vfa */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9536 /* vfadb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9542 /* vfae */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9542 /* vfae */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9547 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9547 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9553 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9553 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9560 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9560 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9566 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9566 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9573 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9573 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9579 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9579 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9586 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9586 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9593 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9593 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9601 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9601 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9608 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9608 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9616 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9616 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9623 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9623 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9631 /* vfce */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9636 /* vfcedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9643 /* vfcedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9651 /* vfch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9656 /* vfchdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9663 /* vfchdbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9671 /* vfche */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9677 /* vfchedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9685 /* vfchedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9694 /* vfd */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9698 /* vfddb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9704 /* vfee */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9704 /* vfee */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9709 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9709 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9715 /* vfeebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9722 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9722 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9728 /* vfeefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9735 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9735 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9741 /* vfeehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9748 /* vfeezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9755 /* vfeezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9763 /* vfeezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9770 /* vfeezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9778 /* vfeezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9785 /* vfeezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9793 /* vfene */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9793 /* vfene */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9799 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9799 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9806 /* vfenebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9814 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9814 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9821 /* vfenefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9829 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9829 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9836 /* vfenehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9844 /* vfenezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9852 /* vfenezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9861 /* vfenezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9869 /* vfenezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9878 /* vfenezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9886 /* vfenezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9895 /* vfi */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9899 /* vfidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9905 /* vflcdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9912 /* vflndb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9919 /* vflpdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9926 /* vfm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9930 /* vfma */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9935 /* vfmadb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9942 /* vfmdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9948 /* vfms */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9953 /* vfmsdb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9960 /* vfpso */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9966 /* vfpsodb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9974 /* vfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9978 /* vfsdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9984 /* vfsq */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9989 /* vfsqdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9996 /* vftci */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10002 /* vftcidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10010 /* vgbm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10015 /* vgef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10015 /* vgef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10020 /* vgeg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10020 /* vgeg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10025 /* vgfm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10030 /* vgfma */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10036 /* vgfmab */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10043 /* vgfmaf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10050 /* vgfmag */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10057 /* vgfmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10064 /* vgfmb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10070 /* vgfmf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10076 /* vgfmg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10082 /* vgfmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10088 /* vgm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10092 /* vgmb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10097 /* vgmf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10102 /* vgmg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10107 /* vgmh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10112 /* vistr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10112 /* vistr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10118 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10118 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10125 /* vistrbs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10133 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10133 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10140 /* vistrfs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10148 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10148 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10155 /* vistrhs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10163 /* vl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10163 /* vl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10166 /* vlbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10166 /* vlbb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10171 /* vlc */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10175 /* vlcb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10180 /* vlcf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10185 /* vlcg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10190 /* vlch */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10195 /* vlde */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10200 /* vldeb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10206 /* vleb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10206 /* vleb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10211 /* vled */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10216 /* vledb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10222 /* vlef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10222 /* vlef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10227 /* vleg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10227 /* vleg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10232 /* vleh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10232 /* vleh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10237 /* vleib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10243 /* vleif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10249 /* vleig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10255 /* vleih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10261 /* vlgv */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10261 /* vlgv */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 10261 /* vlgv */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 10266 /* vlgvb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10266 /* vlgvb */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 10266 /* vlgvb */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 10272 /* vlgvf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10272 /* vlgvf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 10272 /* vlgvf */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 10278 /* vlgvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10278 /* vlgvg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 10278 /* vlgvg */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 10284 /* vlgvh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10284 /* vlgvh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 10284 /* vlgvh */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 10290 /* vll */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10290 /* vll */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 10290 /* vll */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10294 /* vllez */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10294 /* vllez */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10300 /* vllezb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10300 /* vllezb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10307 /* vllezf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10307 /* vllezf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10314 /* vllezg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10314 /* vllezg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10321 /* vllezh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10321 /* vllezh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10328 /* vlm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10328 /* vlm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10332 /* vlp */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10336 /* vlpb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10341 /* vlpf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10346 /* vlpg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10351 /* vlph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10356 /* vlr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10360 /* vlrep */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10360 /* vlrep */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10366 /* vlrepb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10366 /* vlrepb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10373 /* vlrepf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10373 /* vlrepf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10380 /* vlrepg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10380 /* vlrepg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10387 /* vlreph */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 10387 /* vlreph */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10394 /* vlvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10394 /* vlvg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 10394 /* vlvg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10399 /* vlvgb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10399 /* vlvgb */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 10399 /* vlvgb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10405 /* vlvgf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10405 /* vlvgf */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 10405 /* vlvgf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10411 /* vlvgg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10411 /* vlvgg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 10411 /* vlvgg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10417 /* vlvgh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 10417 /* vlvgh */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 10417 /* vlvgh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10423 /* vlvgp */, MCK_GR64, 6 /* 1, 2 */ },
  { Feature_FeatureVector, 10423 /* vlvgp */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10429 /* vmae */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10434 /* vmaeb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10440 /* vmaef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10446 /* vmaeh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10452 /* vmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10457 /* vmahb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10463 /* vmahf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10469 /* vmahh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10475 /* vmal */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10480 /* vmalb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10486 /* vmale */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10492 /* vmaleb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10499 /* vmalef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10506 /* vmaleh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10513 /* vmalf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10519 /* vmalh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10525 /* vmalhb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10532 /* vmalhf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10539 /* vmalhh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10546 /* vmalhw */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10553 /* vmalo */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10559 /* vmalob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10566 /* vmalof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10573 /* vmaloh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10580 /* vmao */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10585 /* vmaob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10591 /* vmaof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10597 /* vmaoh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10603 /* vme */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10607 /* vmeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10612 /* vmef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10617 /* vmeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10622 /* vmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10626 /* vmhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10631 /* vmhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10636 /* vmhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10641 /* vml */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10645 /* vmlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10650 /* vmle */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10655 /* vmleb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10661 /* vmlef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10667 /* vmleh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10673 /* vmlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10678 /* vmlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10683 /* vmlhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10689 /* vmlhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10695 /* vmlhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10701 /* vmlhw */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10707 /* vmlo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10712 /* vmlob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10718 /* vmlof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10724 /* vmloh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10730 /* vmn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10734 /* vmnb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10739 /* vmnf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10744 /* vmng */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10749 /* vmnh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10754 /* vmnl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10759 /* vmnlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10765 /* vmnlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10771 /* vmnlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10777 /* vmnlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10783 /* vmo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10787 /* vmob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10792 /* vmof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10797 /* vmoh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10802 /* vmrh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10807 /* vmrhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10813 /* vmrhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10819 /* vmrhg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10825 /* vmrhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10831 /* vmrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10836 /* vmrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10842 /* vmrlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10848 /* vmrlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10854 /* vmrlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10860 /* vmx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10864 /* vmxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10869 /* vmxf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10874 /* vmxg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10879 /* vmxh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10884 /* vmxl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10889 /* vmxlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10895 /* vmxlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10901 /* vmxlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10907 /* vmxlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10913 /* vn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10916 /* vnc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10920 /* vno */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10924 /* vnot */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10929 /* vo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10932 /* vone */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10937 /* vpdi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10942 /* vperm */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10948 /* vpk */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10952 /* vpkf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10957 /* vpkg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10962 /* vpkh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10967 /* vpkls */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10973 /* vpklsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10980 /* vpklsfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10988 /* vpklsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10995 /* vpklsgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11003 /* vpklsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11010 /* vpklshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11018 /* vpks */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11023 /* vpksf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11029 /* vpksfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11036 /* vpksg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11042 /* vpksgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11049 /* vpksh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11055 /* vpkshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11062 /* vpopct */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11069 /* vrep */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11074 /* vrepb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11080 /* vrepf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11086 /* vrepg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11092 /* vreph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11098 /* vrepi */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11104 /* vrepib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11111 /* vrepif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11118 /* vrepig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11125 /* vrepih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11132 /* vs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11135 /* vsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11139 /* vsbcbi */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11146 /* vsbcbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11154 /* vsbi */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11159 /* vsbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11165 /* vscbi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11171 /* vscbib */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11178 /* vscbif */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11185 /* vscbig */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11192 /* vscbih */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11199 /* vscbiq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11206 /* vscef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11206 /* vscef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11212 /* vsceg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11212 /* vsceg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11218 /* vseg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11223 /* vsegb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11229 /* vsegf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11235 /* vsegh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11241 /* vsel */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11246 /* vsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11250 /* vsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11254 /* vsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11258 /* vsl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11262 /* vslb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11267 /* vsldb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11273 /* vsq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11277 /* vsra */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11282 /* vsrab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11288 /* vsrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11293 /* vsrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11299 /* vst */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11299 /* vst */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11303 /* vsteb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11303 /* vsteb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11309 /* vstef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11309 /* vstef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11315 /* vsteg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11315 /* vsteg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11321 /* vsteh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 11321 /* vsteh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11327 /* vstl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11327 /* vstl */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 11327 /* vstl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11332 /* vstm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 11332 /* vstm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11337 /* vstrc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11337 /* vstrc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11343 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11343 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11350 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11350 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11358 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11358 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11365 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11365 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11373 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11373 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11380 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11380 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11388 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11388 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11396 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11396 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11405 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11405 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11413 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11413 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11422 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11422 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11430 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11430 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11439 /* vsum */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11444 /* vsumb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11450 /* vsumg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11456 /* vsumgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11463 /* vsumgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11470 /* vsumh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11476 /* vsumq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11482 /* vsumqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11489 /* vsumqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11496 /* vtm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11500 /* vuph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11505 /* vuphb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11511 /* vuphf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11517 /* vuphh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11523 /* vupl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11528 /* vuplb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11534 /* vuplf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11540 /* vuplh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11546 /* vuplhb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11553 /* vuplhf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11560 /* vuplhh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11567 /* vuplhw */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11574 /* vupll */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11580 /* vupllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11587 /* vupllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11594 /* vupllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11601 /* vx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11604 /* vzero */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 11610 /* wcdgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11616 /* wcdlgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11623 /* wcgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11629 /* wclgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11636 /* wfadb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11642 /* wfc */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11646 /* wfcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11652 /* wfcedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11659 /* wfcedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11667 /* wfchdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11674 /* wfchdbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11682 /* wfchedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11690 /* wfchedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11699 /* wfddb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11705 /* wfidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11711 /* wfk */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11715 /* wfkdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11721 /* wflcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11728 /* wflndb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11735 /* wflpdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11742 /* wfmadb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11749 /* wfmdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11755 /* wfmsdb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 11762 /* wfpsodb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11770 /* wfsdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 11776 /* wfsqdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11783 /* wftcidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 11791 /* wldeb */, MCK_VR32, 2 /* 1 */ },
  { Feature_FeatureVector, 11791 /* wldeb */, MCK_VR64, 1 /* 0 */ },
  { Feature_FeatureVector, 11797 /* wledb */, MCK_VR32, 1 /* 0 */ },
  { Feature_FeatureVector, 11797 /* wledb */, MCK_VR64, 2 /* 1 */ },
  { 0, 11803 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11803 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 11805 /* xc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 11805 /* xc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 11808 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 11808 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 11811 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 11815 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 11820 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 11823 /* xihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 11828 /* xilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 11833 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 11837 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 11840 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 11844 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 11844 /* xy */, MCK_GR32, 1 /* 0 */ },
  { 0, 11847 /* zap */, MCK_BDLAddr64Disp12Len4, 3 /* 0, 1 */ },
};

OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AR32:
    return parseAR32(Operands);
  case MCK_AnyReg:
    return parseAnyReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len4:
    return parseBDLAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDRAddr64Disp12:
    return parseBDRAddr64(Operands);
  case MCK_BDVAddr64Disp12:
    return parseBDVAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel12:
    return parsePCRel12(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel24:
    return parsePCRel24(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  case MCK_PCRelTLS16:
    return parsePCRelTLS16(Operands);
  case MCK_PCRelTLS32:
    return parsePCRelTLS32(Operands);
  case MCK_VF128:
    return parseVF128(Operands);
  case MCK_VR128:
    return parseVR128(Operands);
  case MCK_VR32:
    return parseVR32(Operands);
  case MCK_VR64:
    return parseVR64(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

