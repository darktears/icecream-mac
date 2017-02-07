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
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID);
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
enum SubtargetFeatureFlag : uint16_t {
  Feature_FeatureDistinctOps = (1ULL << 0),
  Feature_FeatureFastSerialization = (1ULL << 3),
  Feature_FeatureFPExtension = (1ULL << 2),
  Feature_FeatureHighWord = (1ULL << 4),
  Feature_FeatureInterlockedAccess1 = (1ULL << 5),
  Feature_FeatureLoadStoreOnCond = (1ULL << 8),
  Feature_FeaturePopulationCount = (1ULL << 11),
  Feature_FeatureExecutionHint = (1ULL << 1),
  Feature_FeatureLoadAndTrap = (1ULL << 6),
  Feature_FeatureMiscellaneousExtensions = (1ULL << 10),
  Feature_FeatureProcessorAssist = (1ULL << 12),
  Feature_FeatureTransactionalExecution = (1ULL << 13),
  Feature_FeatureLoadAndZeroRightmostByte = (1ULL << 7),
  Feature_FeatureLoadStoreOnCond2 = (1ULL << 9),
  Feature_FeatureVector = (1ULL << 14),
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
  case Feature_FeatureExecutionHint: return "execution-hint";
  case Feature_FeatureLoadAndTrap: return "load-and-trap";
  case Feature_FeatureMiscellaneousExtensions: return "miscellaneous-extensions";
  case Feature_FeatureProcessorAssist: return "processor-assist";
  case Feature_FeatureTransactionalExecution: return "transactional-execution";
  case Feature_FeatureLoadAndZeroRightmostByte: return "load-and-zero-rightmost-byte";
  case Feature_FeatureLoadStoreOnCond2: return "load-store-on-cond-2";
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
  CVT_95_addImmTLSOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addBDRAddrOperands,
  CVT_imm_95_0,
  CVT_95_addBDVAddrOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
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
  Convert__FP1281_0__Tie0__FP1281_1,
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
  Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2,
  Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
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
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
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
  Convert__AR321_0__AR321_1,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AR321_1,
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
  Convert__GRH321_0__Tie0__U16Imm1_1,
  Convert__GR321_0__Tie0__U16Imm1_1,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp122_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__BDAddr64Disp122_0,
  Convert__GR641_0__FP641_1,
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
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__U4Imm1_0__U4Imm1_1,
  Convert__GRH321_0__Tie0__U32Imm1_1,
  Convert__imm_95_0__BDXAddr64Disp123_0,
  Convert__imm_95_0__GR641_0,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3,
  Convert_NoOperands,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__AR321_0__GR321_1,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__BDAddr32Disp122_0,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1,
  Convert__U8Imm1_0,
  Convert__GRH321_0__U16Imm1_1,
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
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
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
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
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
  // Convert__AR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
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
  // Convert__GRH321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
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
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
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
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDRAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__U4Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__BDXAddr64Disp123_0
  { CVT_imm_95_0, 0, CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__imm_95_0__GR641_0
  { CVT_imm_95_0, 0, CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr32Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
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
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
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
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand&>(*Operands[OpIdx]).addBDLAddrOperands(Inst, 3);
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
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
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
  if ((FB[SystemZ::FeatureLoadAndZeroRightmostByte]))
    Features |= Feature_FeatureLoadAndZeroRightmostByte;
  if ((FB[SystemZ::FeatureLoadStoreOnCond2]))
    Features |= Feature_FeatureLoadStoreOnCond2;
  if ((FB[SystemZ::FeatureVector]))
    Features |= Feature_FeatureVector;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\005aghik\003agr\004agrk\004agsi\002ah\003ahi\004ahik\003ahy\003"
    "aih\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005alg"
    "fi\005algfr\007alghsik\004algr\005algrk\006alhsik\003alr\004alrk\003aly"
    "\002ar\003ark\003asi\004axbr\002ay\001b\003bal\004balr\003bas\004basr\005"
    "bassm\002bc\003bcr\003bct\004bctg\005bctgr\004bctr\002be\003ber\002bh\003"
    "bhe\004bher\003bhr\002bl\003ble\004bler\003blh\004blhr\003blr\002bm\003"
    "bmr\003bne\004bner\003bnh\004bnhe\005bnher\004bnhr\003bnl\004bnle\005bn"
    "ler\004bnlh\005bnlhr\004bnlr\003bnm\004bnmr\003bno\004bnor\003bnp\004bn"
    "pr\003bnz\004bnzr\002bo\003bor\002bp\003bpp\003bpr\004bprp\002br\004bra"
    "s\005brasl\003brc\004brcl\004brct\005brctg\005brcth\004brxh\005brxhg\005"
    "brxle\005brxlg\003bsm\003bxh\004bxhg\004bxle\005bxleg\002bz\003bzr\001c"
    "\003cdb\004cdbr\005cdfbr\006cdfbra\005cdgbr\006cdgbra\006cdlfbr\006cdlg"
    "br\003cds\004cdsg\004cdsy\003ceb\004cebr\005cefbr\006cefbra\005cegbr\006"
    "cegbra\006celfbr\006celgbr\005cfdbr\006cfdbra\005cfebr\006cfebra\003cfi"
    "\005cfxbr\006cfxbra\002cg\005cgdbr\006cgdbra\005cgebr\006cgebra\003cgf\004"
    "cgfi\004cgfr\005cgfrl\003cgh\004cghi\005cghrl\005cghsi\004cgib\005cgibe"
    "\005cgibh\006cgibhe\005cgibl\006cgible\006cgiblh\006cgibne\006cgibnh\007"
    "cgibnhe\006cgibnl\007cgibnle\007cgibnlh\004cgij\005cgije\005cgijh\006cg"
    "ijhe\005cgijl\006cgijle\006cgijlh\006cgijne\006cgijnh\007cgijnhe\006cgi"
    "jnl\007cgijnle\007cgijnlh\004cgit\005cgite\005cgith\006cgithe\005cgitl\006"
    "cgitle\006cgitlh\006cgitne\006cgitnh\007cgitnhe\006cgitnl\007cgitnle\007"
    "cgitnlh\003cgr\004cgrb\005cgrbe\005cgrbh\006cgrbhe\005cgrbl\006cgrble\006"
    "cgrblh\006cgrbne\006cgrbnh\007cgrbnhe\006cgrbnl\007cgrbnle\007cgrbnlh\004"
    "cgrj\005cgrje\005cgrjh\006cgrjhe\005cgrjl\006cgrjle\006cgrjlh\006cgrjne"
    "\006cgrjnh\007cgrjnhe\006cgrjnl\007cgrjnle\007cgrjnlh\004cgrl\004cgrt\005"
    "cgrte\005cgrth\006cgrthe\005cgrtl\006cgrtle\006cgrtlh\006cgrtne\006cgrt"
    "nh\007cgrtnhe\006cgrtnl\007cgrtnle\007cgrtnlh\005cgxbr\006cgxbra\002ch\003"
    "chf\005chhsi\003chi\004chrl\004chsi\003chy\003cib\004cibe\004cibh\005ci"
    "bhe\004cibl\005cible\005ciblh\005cibne\005cibnh\006cibnhe\005cibnl\006c"
    "ibnle\006cibnlh\003cih\003cij\004cije\004cijh\005cijhe\004cijl\005cijle"
    "\005cijlh\005cijne\005cijnh\006cijnhe\005cijnl\006cijnle\006cijnlh\003c"
    "it\004cite\004cith\005cithe\004citl\005citle\005citlh\005citne\005citnh"
    "\006citnhe\005citnl\006citnle\006citnlh\002cl\003clc\006clfdbr\006clfeb"
    "r\006clfhsi\004clfi\005clfit\006clfite\006clfith\007clfithe\006clfitl\007"
    "clfitle\007clfitlh\007clfitne\007clfitnh\010clfitnhe\007clfitnl\010clfi"
    "tnle\010clfitnlh\006clfxbr\003clg\006clgdbr\006clgebr\004clgf\005clgfi\005"
    "clgfr\006clgfrl\006clghrl\006clghsi\005clgib\006clgibe\006clgibh\007clg"
    "ibhe\006clgibl\007clgible\007clgiblh\007clgibne\007clgibnh\010clgibnhe\007"
    "clgibnl\010clgibnle\010clgibnlh\005clgij\006clgije\006clgijh\007clgijhe"
    "\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010clgijnhe\007c"
    "lgijnl\010clgijnle\010clgijnlh\005clgit\006clgite\006clgith\007clgithe\006"
    "clgitl\007clgitle\007clgitlh\007clgitne\007clgitnh\010clgitnhe\007clgit"
    "nl\010clgitnle\010clgitnlh\004clgr\005clgrb\006clgrbe\006clgrbh\007clgr"
    "bhe\006clgrbl\007clgrble\007clgrblh\007clgrbne\007clgrbnh\010clgrbnhe\007"
    "clgrbnl\010clgrbnle\010clgrbnlh\005clgrj\006clgrje\006clgrjh\007clgrjhe"
    "\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh\010clgrjnhe\007c"
    "lgrjnl\010clgrjnle\010clgrjnlh\005clgrl\005clgrt\006clgrte\006clgrth\007"
    "clgrthe\006clgrtl\007clgrtle\007clgrtlh\007clgrtne\007clgrtnh\010clgrtn"
    "he\007clgrtnl\010clgrtnle\010clgrtnlh\004clgt\005clgte\005clgth\006clgt"
    "he\005clgtl\006clgtle\006clgtlh\006clgtne\006clgtnh\007clgtnhe\006clgtn"
    "l\007clgtnle\007clgtnlh\006clgxbr\004clhf\006clhhsi\005clhrl\003cli\004"
    "clib\005clibe\005clibh\006clibhe\005clibl\006clible\006cliblh\006clibne"
    "\006clibnh\007clibnhe\006clibnl\007clibnle\007clibnlh\004clih\004clij\005"
    "clije\005clijh\006clijhe\005clijl\006clijle\006clijlh\006clijne\006clij"
    "nh\007clijnhe\006clijnl\007clijnle\007clijnlh\004cliy\003clr\004clrb\005"
    "clrbe\005clrbh\006clrbhe\005clrbl\006clrble\006clrblh\006clrbne\006clrb"
    "nh\007clrbnhe\006clrbnl\007clrbnle\007clrbnlh\004clrj\005clrje\005clrjh"
    "\006clrjhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006"
    "clrjnl\007clrjnle\007clrjnlh\004clrl\004clrt\005clrte\005clrth\006clrth"
    "e\005clrtl\006clrtle\006clrtlh\006clrtne\006clrtnh\007clrtnhe\006clrtnl"
    "\007clrtnle\007clrtnlh\004clst\003clt\004clte\004clth\005clthe\004cltl\005"
    "cltle\005cltlh\005cltne\005cltnh\006cltnhe\005cltnl\006cltnle\006cltnlh"
    "\003cly\005cpsdr\004cpya\002cr\003crb\004crbe\004crbh\005crbhe\004crbl\005"
    "crble\005crblh\005crbne\005crbnh\006crbnhe\005crbnl\006crbnle\006crbnlh"
    "\003crj\004crje\004crjh\005crjhe\004crjl\005crjle\005crjlh\005crjne\005"
    "crjnh\006crjnhe\005crjnl\006crjnle\006crjnlh\003crl\003crt\004crte\004c"
    "rth\005crthe\004crtl\005crtle\005crtlh\005crtne\005crtnh\006crtnhe\005c"
    "rtnl\006crtnle\006crtnlh\002cs\003csg\004csst\003csy\004cxbr\005cxfbr\006"
    "cxfbra\005cxgbr\006cxgbra\006cxlfbr\006cxlgbr\002cy\003ddb\004ddbr\003d"
    "eb\004debr\002dl\003dlg\004dlgr\003dlr\003dsg\004dsgf\005dsgfr\004dsgr\004"
    "dxbr\003ear\004ectg\004efpc\004etnd\002ex\004exrl\005fidbr\006fidbra\005"
    "fiebr\006fiebra\005fixbr\006fixbra\005flogr\002ic\003icm\004icmh\004icm"
    "y\003icy\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipm\001j\002"
    "je\002jg\003jge\003jgh\004jghe\003jgl\004jgle\004jglh\003jgm\004jgne\004"
    "jgnh\005jgnhe\004jgnl\005jgnle\005jgnlh\004jgnm\004jgno\004jgnp\004jgnz"
    "\003jgo\003jgp\003jgz\002jh\003jhe\002jl\003jle\003jlh\002jm\003jne\003"
    "jnh\004jnhe\003jnl\004jnle\004jnlh\003jnm\003jno\003jnp\003jnz\002jo\002"
    "jp\002jz\001l\002la\003laa\004laag\004laal\005laalg\003lae\004laey\003l"
    "am\004lamy\003lan\004lang\003lao\004laog\004larl\003lat\003lax\004laxg\003"
    "lay\002lb\003lbh\003lbr\004lcbb\005lcdbr\005lcdfr\005lcebr\005lcgfr\004"
    "lcgr\003lcr\005lcxbr\002ld\003lde\004ldeb\005ldebr\004ldgr\003ldr\005ld"
    "xbr\006ldxbra\003ldy\002le\005ledbr\006ledbra\003ler\005lexbr\006lexbra"
    "\003ley\004lfas\003lfh\005lfhat\004lfpc\002lg\004lgat\003lgb\004lgbr\004"
    "lgdr\003lgf\004lgfi\004lgfr\005lgfrl\003lgh\004lghi\004lghr\005lghrl\003"
    "lgr\004lgrl\002lh\003lhh\003lhi\003lhr\004lhrl\003lhy\003llc\004llch\004"
    "llcr\004llgc\005llgcr\004llgf\006llgfat\005llgfr\006llgfrl\004llgh\005l"
    "lghr\006llghrl\004llgt\006llgtat\005llgtr\003llh\004llhh\004llhr\005llh"
    "rl\005llihf\005llihh\005llihl\005llilf\005llilh\005llill\006llzrgf\002l"
    "m\003lmg\003lmh\003lmy\005lndbr\005lndfr\005lnebr\005lngfr\004lngr\003l"
    "nr\005lnxbr\003loc\004loce\005locfh\006locfhe\006locfhh\007locfhhe\006l"
    "ocfhl\007locfhle\007locfhlh\006locfhm\007locfhne\007locfhnh\010locfhnhe"
    "\007locfhnl\010locfhnle\010locfhnlh\007locfhnm\007locfhno\007locfhnp\007"
    "locfhnz\006locfho\006locfhp\006locfhr\007locfhre\007locfhrh\010locfhrhe"
    "\007locfhrl\010locfhrle\010locfhrlh\007locfhrm\010locfhrne\010locfhrnh\t"
    "locfhrnhe\010locfhrnl\tlocfhrnle\tlocfhrnlh\010locfhrnm\010locfhrno\010"
    "locfhrnp\010locfhrnz\007locfhro\007locfhrp\007locfhrz\006locfhz\004locg"
    "\005locge\005locgh\006locghe\006locghi\007locghie\007locghih\010locghih"
    "e\007locghil\010locghile\010locghilh\007locghim\010locghine\010locghinh"
    "\tlocghinhe\010locghinl\tlocghinle\tlocghinlh\010locghinm\010locghino\010"
    "locghinp\010locghinz\007locghio\007locghip\007locghiz\005locgl\006locgl"
    "e\006locglh\005locgm\006locgne\006locgnh\007locgnhe\006locgnl\007locgnl"
    "e\007locgnlh\006locgnm\006locgno\006locgnp\006locgnz\005locgo\005locgp\005"
    "locgr\006locgre\006locgrh\007locgrhe\006locgrl\007locgrle\007locgrlh\006"
    "locgrm\007locgrne\007locgrnh\010locgrnhe\007locgrnl\010locgrnle\010locg"
    "rnlh\007locgrnm\007locgrno\007locgrnp\007locgrnz\006locgro\006locgrp\006"
    "locgrz\005locgz\004loch\005loche\006lochhi\007lochhie\007lochhih\010loc"
    "hhihe\007lochhil\010lochhile\010lochhilh\007lochhim\010lochhine\010loch"
    "hinh\tlochhinhe\010lochhinl\tlochhinle\tlochhinlh\010lochhinm\010lochhi"
    "no\010lochhinp\010lochhinz\007lochhio\007lochhip\007lochhiz\005lochi\006"
    "lochie\006lochih\007lochihe\006lochil\007lochile\007lochilh\006lochim\007"
    "lochine\007lochinh\010lochinhe\007lochinl\010lochinle\010lochinlh\007lo"
    "chinm\007lochino\007lochinp\007lochinz\006lochio\006lochip\006lochiz\004"
    "locl\005locle\005loclh\004locm\005locne\005locnh\006locnhe\005locnl\006"
    "locnle\006locnlh\005locnm\005locno\005locnp\005locnz\004loco\004locp\004"
    "locr\005locre\005locrh\006locrhe\005locrl\006locrle\006locrlh\005locrm\006"
    "locrne\006locrnh\007locrnhe\006locrnl\007locrnle\007locrnlh\006locrnm\006"
    "locrno\006locrnp\006locrnz\005locro\005locrp\005locrz\004locz\003lpd\005"
    "lpdbr\005lpdfr\004lpdg\005lpebr\005lpgfr\004lpgr\003lpq\003lpr\005lpxbr"
    "\002lr\003lrl\003lrv\004lrvg\005lrvgr\004lrvh\004lrvr\002lt\005ltdbr\005"
    "ltebr\003ltg\004ltgf\005ltgfr\004ltgr\003ltr\005ltxbr\004lxdb\005lxdbr\004"
    "lxeb\005lxebr\003lxr\002ly\004lzdr\004lzer\004lzrf\004lzrg\004lzxr\004m"
    "adb\005madbr\004maeb\005maebr\003mdb\004mdbr\004mdeb\005mdebr\004meeb\005"
    "meebr\004mghi\002mh\003mhi\003mhy\003mlg\004mlgr\002ms\004msdb\005msdbr"
    "\004mseb\005msebr\004msfi\003msg\004msgf\005msgfi\005msgfr\004msgr\003m"
    "sr\003msy\003mvc\004mvck\005mvghi\005mvhhi\004mvhi\003mvi\004mviy\004mv"
    "st\004mxbr\004mxdb\005mxdbr\001n\002nc\002ng\003ngr\004ngrk\002ni\004ni"
    "ai\004nihf\004nihh\004nihl\004nilf\004nilh\004nill\003niy\003nop\004nop"
    "r\002nr\003nrk\005ntstg\002ny\001o\002oc\002og\003ogr\004ogrk\002oi\004"
    "oihf\004oihh\004oihl\004oilf\004oilh\004oill\003oiy\002or\003ork\002oy\003"
    "pfd\005pfdrl\003plo\006popcnt\003ppa\002pr\005risbg\006risbgn\006risbhg"
    "\006risblg\003rll\004rllg\005rnsbg\005rosbg\005rxsbg\001s\005sam24\005s"
    "am31\005sam64\003sar\003sdb\004sdbr\003seb\004sebr\005sfasr\004sfpc\002"
    "sg\003sgf\004sgfr\003sgr\004sgrk\002sh\003shy\002sl\003sla\004slak\003s"
    "lb\004slbg\005slbgr\004slbr\004slfi\003slg\004slgf\005slgfi\005slgfr\004"
    "slgr\005slgrk\003sll\004sllg\004sllk\003slr\004slrk\003sly\003spm\004sq"
    "db\005sqdbr\004sqeb\005sqebr\005sqxbr\002sr\003sra\004srag\004srak\003s"
    "rk\003srl\004srlg\004srlk\004srnm\005srnmb\005srnmt\004srst\002st\004st"
    "am\005stamy\003stc\004stch\004stck\005stcke\005stckf\004stcy\003std\004"
    "stdy\003ste\004stey\004stfh\005stfle\005stfpc\003stg\005stgrl\003sth\004"
    "sthh\005sthrl\004sthy\003stm\004stmg\004stmh\004stmy\004stoc\005stoce\006"
    "stocfh\007stocfhe\007stocfhh\010stocfhhe\007stocfhl\010stocfhle\010stoc"
    "fhlh\007stocfhm\010stocfhne\010stocfhnh\tstocfhnhe\010stocfhnl\tstocfhn"
    "le\tstocfhnlh\010stocfhnm\010stocfhno\010stocfhnp\010stocfhnz\007stocfh"
    "o\007stocfhp\007stocfhz\005stocg\006stocge\006stocgh\007stocghe\006stoc"
    "gl\007stocgle\007stocglh\006stocgm\007stocgne\007stocgnh\010stocgnhe\007"
    "stocgnl\010stocgnle\010stocgnlh\007stocgnm\007stocgno\007stocgnp\007sto"
    "cgnz\006stocgo\006stocgp\006stocgz\005stoch\006stoche\005stocl\006stocl"
    "e\006stoclh\005stocm\006stocne\006stocnh\007stocnhe\006stocnl\007stocnl"
    "e\007stocnlh\006stocnm\006stocno\006stocnp\006stocnz\005stoco\005stocp\005"
    "stocz\004stpq\005strag\004strl\004strv\005strvg\005strvh\003sty\003svc\004"
    "sxbr\002sy\006tabort\003tam\006tbegin\007tbeginc\004tcdb\004tceb\004tcx"
    "b\004tend\002tm\003tmh\004tmhh\004tmhl\003tml\004tmlh\004tmll\003tmy\002"
    "ts\002va\003vab\003vac\004vacc\005vaccb\005vaccc\006vacccq\005vaccf\005"
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
    "xgr\004xgrk\002xi\004xihf\004xilf\003xiy\002xr\003xrk\002xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint16_t RequiredFeatures;
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
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 46 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 52 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 56 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 61 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 66 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 69 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 73 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 78 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 82 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 86 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 89 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 93 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 98 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 104 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 109 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 114 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 118 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 123 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 129 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 135 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 143 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 148 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 154 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 161 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 165 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 170 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 174 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 177 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 181 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 185 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 190 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 193 /* b */, SystemZ::B, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 195 /* bal */, SystemZ::BAL, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 199 /* balr */, SystemZ::BALR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 204 /* bas */, SystemZ::BAS, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 208 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 213 /* bassm */, SystemZ::BASSM, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 219 /* bc */, SystemZ::BCAsm, Convert__U4Imm1_0__BDXAddr64Disp123_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp12 }, },
  { 222 /* bcr */, SystemZ::BCRAsm, Convert__U4Imm1_0__GR641_1, 0, { MCK_U4Imm, MCK_GR64 }, },
  { 226 /* bct */, SystemZ::BCT, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 230 /* bctg */, SystemZ::BCTG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 235 /* bctgr */, SystemZ::BCTGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 241 /* bctr */, SystemZ::BCTR, Convert__GR321_0__Tie0__GR641_1, 0, { MCK_GR32, MCK_GR64 }, },
  { 246 /* be */, SystemZ::BAsmE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 249 /* ber */, SystemZ::BRAsmE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 253 /* bh */, SystemZ::BAsmH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 256 /* bhe */, SystemZ::BAsmHE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 260 /* bher */, SystemZ::BRAsmHE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 265 /* bhr */, SystemZ::BRAsmH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 269 /* bl */, SystemZ::BAsmL, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 272 /* ble */, SystemZ::BAsmLE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 276 /* bler */, SystemZ::BRAsmLE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 281 /* blh */, SystemZ::BAsmLH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 285 /* blhr */, SystemZ::BRAsmLH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 290 /* blr */, SystemZ::BRAsmL, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 294 /* bm */, SystemZ::BAsmM, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 297 /* bmr */, SystemZ::BRAsmM, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 301 /* bne */, SystemZ::BAsmNE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 305 /* bner */, SystemZ::BRAsmNE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 310 /* bnh */, SystemZ::BAsmNH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 314 /* bnhe */, SystemZ::BAsmNHE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 319 /* bnher */, SystemZ::BRAsmNHE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 325 /* bnhr */, SystemZ::BRAsmNH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 330 /* bnl */, SystemZ::BAsmNL, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 334 /* bnle */, SystemZ::BAsmNLE, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 339 /* bnler */, SystemZ::BRAsmNLE, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 345 /* bnlh */, SystemZ::BAsmNLH, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 350 /* bnlhr */, SystemZ::BRAsmNLH, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 356 /* bnlr */, SystemZ::BRAsmNL, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 361 /* bnm */, SystemZ::BAsmNM, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 365 /* bnmr */, SystemZ::BRAsmNM, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 370 /* bno */, SystemZ::BAsmNO, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 374 /* bnor */, SystemZ::BRAsmNO, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 379 /* bnp */, SystemZ::BAsmNP, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 383 /* bnpr */, SystemZ::BRAsmNP, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 388 /* bnz */, SystemZ::BAsmNZ, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 392 /* bnzr */, SystemZ::BRAsmNZ, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 397 /* bo */, SystemZ::BAsmO, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 400 /* bor */, SystemZ::BRAsmO, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 404 /* bp */, SystemZ::BAsmP, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 407 /* bpp */, SystemZ::BPP, Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel16, MCK_BDXAddr64Disp12 }, },
  { 411 /* bpr */, SystemZ::BRAsmP, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 415 /* bprp */, SystemZ::BPRP, Convert__U4Imm1_0__PCRel121_1__PCRel241_2, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel12, MCK_PCRel24 }, },
  { 420 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 423 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, 0, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 428 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, 0, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 434 /* brc */, SystemZ::BRCAsm, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 438 /* brcl */, SystemZ::BRCLAsm, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 443 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 448 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 454 /* brcth */, SystemZ::BRCTH, Convert__GRH321_0__Tie0__PCRel321_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_PCRel32 }, },
  { 460 /* brxh */, SystemZ::BRXH, Convert__GR321_0__Tie0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 465 /* brxhg */, SystemZ::BRXHG, Convert__GR641_0__Tie0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 471 /* brxle */, SystemZ::BRXLE, Convert__GR321_0__Tie0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 477 /* brxlg */, SystemZ::BRXLG, Convert__GR641_0__Tie0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 483 /* bsm */, SystemZ::BSM, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 487 /* bxh */, SystemZ::BXH, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 491 /* bxhg */, SystemZ::BXHG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 496 /* bxle */, SystemZ::BXLE, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 501 /* bxleg */, SystemZ::BXLEG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 507 /* bz */, SystemZ::BAsmZ, Convert__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 510 /* bzr */, SystemZ::BRAsmZ, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 514 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 516 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 520 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 525 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 531 /* cdfbra */, SystemZ::CDFBRA, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 538 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 544 /* cdgbra */, SystemZ::CDGBRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 551 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 558 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 565 /* cds */, SystemZ::CDS, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp122_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp12 }, },
  { 569 /* cdsg */, SystemZ::CDSG, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 574 /* cdsy */, SystemZ::CDSY, Convert__GR1281_0__Tie0__GR1281_1__BDAddr64Disp202_2, 0, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 579 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 583 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 588 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 594 /* cefbra */, SystemZ::CEFBRA, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 601 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 607 /* cegbra */, SystemZ::CEGBRA, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 614 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 621 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 628 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 634 /* cfdbra */, SystemZ::CFDBRA, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 641 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 647 /* cfebra */, SystemZ::CFEBRA, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 654 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 658 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 664 /* cfxbra */, SystemZ::CFXBRA, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 671 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 674 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 680 /* cgdbra */, SystemZ::CGDBRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 687 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 693 /* cgebra */, SystemZ::CGEBRA, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 700 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 704 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 709 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 714 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 720 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 724 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 729 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 735 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 741 /* cgib */, SystemZ::CGIBAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 746 /* cgibe */, SystemZ::CGIBAsmE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 752 /* cgibh */, SystemZ::CGIBAsmH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 758 /* cgibhe */, SystemZ::CGIBAsmHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 765 /* cgibl */, SystemZ::CGIBAsmL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 771 /* cgible */, SystemZ::CGIBAsmLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 778 /* cgiblh */, SystemZ::CGIBAsmLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 785 /* cgibne */, SystemZ::CGIBAsmNE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 792 /* cgibnh */, SystemZ::CGIBAsmNH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 799 /* cgibnhe */, SystemZ::CGIBAsmNHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 807 /* cgibnl */, SystemZ::CGIBAsmNL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 814 /* cgibnle */, SystemZ::CGIBAsmNLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 822 /* cgibnlh */, SystemZ::CGIBAsmNLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 830 /* cgij */, SystemZ::CGIJAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 835 /* cgije */, SystemZ::CGIJAsmE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 841 /* cgijh */, SystemZ::CGIJAsmH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 847 /* cgijhe */, SystemZ::CGIJAsmHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 854 /* cgijl */, SystemZ::CGIJAsmL, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 860 /* cgijle */, SystemZ::CGIJAsmLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 867 /* cgijlh */, SystemZ::CGIJAsmLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 874 /* cgijne */, SystemZ::CGIJAsmNE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 881 /* cgijnh */, SystemZ::CGIJAsmNH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 888 /* cgijnhe */, SystemZ::CGIJAsmNHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 896 /* cgijnl */, SystemZ::CGIJAsmNL, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 903 /* cgijnle */, SystemZ::CGIJAsmNLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 911 /* cgijnlh */, SystemZ::CGIJAsmNLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 919 /* cgit */, SystemZ::CGITAsm, Convert__GR641_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 924 /* cgite */, SystemZ::CGITAsmE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 930 /* cgith */, SystemZ::CGITAsmH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 936 /* cgithe */, SystemZ::CGITAsmHE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 943 /* cgitl */, SystemZ::CGITAsmL, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 949 /* cgitle */, SystemZ::CGITAsmLE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 956 /* cgitlh */, SystemZ::CGITAsmLH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 963 /* cgitne */, SystemZ::CGITAsmNE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 970 /* cgitnh */, SystemZ::CGITAsmNH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 977 /* cgitnhe */, SystemZ::CGITAsmNHE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 985 /* cgitnl */, SystemZ::CGITAsmNL, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 992 /* cgitnle */, SystemZ::CGITAsmNLE, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1000 /* cgitnlh */, SystemZ::CGITAsmNLH, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1008 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1012 /* cgrb */, SystemZ::CGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1017 /* cgrbe */, SystemZ::CGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1023 /* cgrbh */, SystemZ::CGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1029 /* cgrbhe */, SystemZ::CGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1036 /* cgrbl */, SystemZ::CGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1042 /* cgrble */, SystemZ::CGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1049 /* cgrblh */, SystemZ::CGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1056 /* cgrbne */, SystemZ::CGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1063 /* cgrbnh */, SystemZ::CGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1070 /* cgrbnhe */, SystemZ::CGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1078 /* cgrbnl */, SystemZ::CGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1085 /* cgrbnle */, SystemZ::CGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1093 /* cgrbnlh */, SystemZ::CGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1101 /* cgrj */, SystemZ::CGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 1106 /* cgrje */, SystemZ::CGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1112 /* cgrjh */, SystemZ::CGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1118 /* cgrjhe */, SystemZ::CGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1125 /* cgrjl */, SystemZ::CGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1131 /* cgrjle */, SystemZ::CGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1138 /* cgrjlh */, SystemZ::CGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1145 /* cgrjne */, SystemZ::CGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1152 /* cgrjnh */, SystemZ::CGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1159 /* cgrjnhe */, SystemZ::CGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1167 /* cgrjnl */, SystemZ::CGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1174 /* cgrjnle */, SystemZ::CGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1182 /* cgrjnlh */, SystemZ::CGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1190 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1195 /* cgrt */, SystemZ::CGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 1200 /* cgrte */, SystemZ::CGRTAsmE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1206 /* cgrth */, SystemZ::CGRTAsmH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1212 /* cgrthe */, SystemZ::CGRTAsmHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1219 /* cgrtl */, SystemZ::CGRTAsmL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1225 /* cgrtle */, SystemZ::CGRTAsmLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1232 /* cgrtlh */, SystemZ::CGRTAsmLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1239 /* cgrtne */, SystemZ::CGRTAsmNE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1246 /* cgrtnh */, SystemZ::CGRTAsmNH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1253 /* cgrtnhe */, SystemZ::CGRTAsmNHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1261 /* cgrtnl */, SystemZ::CGRTAsmNL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1268 /* cgrtnle */, SystemZ::CGRTAsmNLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1276 /* cgrtnlh */, SystemZ::CGRTAsmNLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1284 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1290 /* cgxbra */, SystemZ::CGXBRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1297 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1300 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1304 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1310 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1314 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1319 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1324 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1328 /* cib */, SystemZ::CIBAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1332 /* cibe */, SystemZ::CIBAsmE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1337 /* cibh */, SystemZ::CIBAsmH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1342 /* cibhe */, SystemZ::CIBAsmHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1348 /* cibl */, SystemZ::CIBAsmL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1353 /* cible */, SystemZ::CIBAsmLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1359 /* ciblh */, SystemZ::CIBAsmLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1365 /* cibne */, SystemZ::CIBAsmNE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1371 /* cibnh */, SystemZ::CIBAsmNH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1377 /* cibnhe */, SystemZ::CIBAsmNHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1384 /* cibnl */, SystemZ::CIBAsmNL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1390 /* cibnle */, SystemZ::CIBAsmNLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1397 /* cibnlh */, SystemZ::CIBAsmNLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1404 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 1408 /* cij */, SystemZ::CIJAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1412 /* cije */, SystemZ::CIJAsmE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1417 /* cijh */, SystemZ::CIJAsmH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1422 /* cijhe */, SystemZ::CIJAsmHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1428 /* cijl */, SystemZ::CIJAsmL, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1433 /* cijle */, SystemZ::CIJAsmLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1439 /* cijlh */, SystemZ::CIJAsmLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1445 /* cijne */, SystemZ::CIJAsmNE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1451 /* cijnh */, SystemZ::CIJAsmNH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1457 /* cijnhe */, SystemZ::CIJAsmNHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1464 /* cijnl */, SystemZ::CIJAsmNL, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1470 /* cijnle */, SystemZ::CIJAsmNLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1477 /* cijnlh */, SystemZ::CIJAsmNLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1484 /* cit */, SystemZ::CITAsm, Convert__GR321_0__S16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 1488 /* cite */, SystemZ::CITAsmE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1493 /* cith */, SystemZ::CITAsmH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1498 /* cithe */, SystemZ::CITAsmHE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1504 /* citl */, SystemZ::CITAsmL, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1509 /* citle */, SystemZ::CITAsmLE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1515 /* citlh */, SystemZ::CITAsmLH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1521 /* citne */, SystemZ::CITAsmNE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1527 /* citnh */, SystemZ::CITAsmNH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1533 /* citnhe */, SystemZ::CITAsmNHE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1540 /* citnl */, SystemZ::CITAsmNL, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1546 /* citnle */, SystemZ::CITAsmNLE, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1553 /* citnlh */, SystemZ::CITAsmNLH, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1560 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1563 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 1567 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1574 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1581 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1588 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 1593 /* clfit */, SystemZ::CLFITAsm, Convert__GR321_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR32, MCK_U16Imm, MCK_U4Imm }, },
  { 1599 /* clfite */, SystemZ::CLFITAsmE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1606 /* clfith */, SystemZ::CLFITAsmH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1613 /* clfithe */, SystemZ::CLFITAsmHE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1621 /* clfitl */, SystemZ::CLFITAsmL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1628 /* clfitle */, SystemZ::CLFITAsmLE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1636 /* clfitlh */, SystemZ::CLFITAsmLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1644 /* clfitne */, SystemZ::CLFITAsmNE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1652 /* clfitnh */, SystemZ::CLFITAsmNH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1660 /* clfitnhe */, SystemZ::CLFITAsmNHE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1669 /* clfitnl */, SystemZ::CLFITAsmNL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1677 /* clfitnle */, SystemZ::CLFITAsmNLE, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1686 /* clfitnlh */, SystemZ::CLFITAsmNLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 1695 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1702 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1706 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1713 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1720 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1725 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 1731 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1737 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1744 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1751 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 1758 /* clgib */, SystemZ::CLGIBAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1764 /* clgibe */, SystemZ::CLGIBAsmE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1771 /* clgibh */, SystemZ::CLGIBAsmH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1778 /* clgibhe */, SystemZ::CLGIBAsmHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1786 /* clgibl */, SystemZ::CLGIBAsmL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1793 /* clgible */, SystemZ::CLGIBAsmLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1801 /* clgiblh */, SystemZ::CLGIBAsmLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1809 /* clgibne */, SystemZ::CLGIBAsmNE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1817 /* clgibnh */, SystemZ::CLGIBAsmNH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1825 /* clgibnhe */, SystemZ::CLGIBAsmNHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1834 /* clgibnl */, SystemZ::CLGIBAsmNL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1842 /* clgibnle */, SystemZ::CLGIBAsmNLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1851 /* clgibnlh */, SystemZ::CLGIBAsmNLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 1860 /* clgij */, SystemZ::CLGIJAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1866 /* clgije */, SystemZ::CLGIJAsmE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1873 /* clgijh */, SystemZ::CLGIJAsmH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1880 /* clgijhe */, SystemZ::CLGIJAsmHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1888 /* clgijl */, SystemZ::CLGIJAsmL, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1895 /* clgijle */, SystemZ::CLGIJAsmLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1903 /* clgijlh */, SystemZ::CLGIJAsmLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1911 /* clgijne */, SystemZ::CLGIJAsmNE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1919 /* clgijnh */, SystemZ::CLGIJAsmNH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1927 /* clgijnhe */, SystemZ::CLGIJAsmNHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1936 /* clgijnl */, SystemZ::CLGIJAsmNL, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1944 /* clgijnle */, SystemZ::CLGIJAsmNLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1953 /* clgijnlh */, SystemZ::CLGIJAsmNLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 1962 /* clgit */, SystemZ::CLGITAsm, Convert__GR641_0__U16Imm1_1__U4Imm1_2, 0, { MCK_GR64, MCK_U16Imm, MCK_U4Imm }, },
  { 1968 /* clgite */, SystemZ::CLGITAsmE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1975 /* clgith */, SystemZ::CLGITAsmH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1982 /* clgithe */, SystemZ::CLGITAsmHE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1990 /* clgitl */, SystemZ::CLGITAsmL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1997 /* clgitle */, SystemZ::CLGITAsmLE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2005 /* clgitlh */, SystemZ::CLGITAsmLH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2013 /* clgitne */, SystemZ::CLGITAsmNE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2021 /* clgitnh */, SystemZ::CLGITAsmNH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2029 /* clgitnhe */, SystemZ::CLGITAsmNHE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2038 /* clgitnl */, SystemZ::CLGITAsmNL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2046 /* clgitnle */, SystemZ::CLGITAsmNLE, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2055 /* clgitnlh */, SystemZ::CLGITAsmNLH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2064 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2069 /* clgrb */, SystemZ::CLGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2075 /* clgrbe */, SystemZ::CLGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2082 /* clgrbh */, SystemZ::CLGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2089 /* clgrbhe */, SystemZ::CLGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2097 /* clgrbl */, SystemZ::CLGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2104 /* clgrble */, SystemZ::CLGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2112 /* clgrblh */, SystemZ::CLGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2120 /* clgrbne */, SystemZ::CLGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2128 /* clgrbnh */, SystemZ::CLGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2136 /* clgrbnhe */, SystemZ::CLGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2145 /* clgrbnl */, SystemZ::CLGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2153 /* clgrbnle */, SystemZ::CLGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2162 /* clgrbnlh */, SystemZ::CLGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2171 /* clgrj */, SystemZ::CLGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 2177 /* clgrje */, SystemZ::CLGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2184 /* clgrjh */, SystemZ::CLGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2191 /* clgrjhe */, SystemZ::CLGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2199 /* clgrjl */, SystemZ::CLGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2206 /* clgrjle */, SystemZ::CLGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2214 /* clgrjlh */, SystemZ::CLGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2222 /* clgrjne */, SystemZ::CLGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2230 /* clgrjnh */, SystemZ::CLGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2238 /* clgrjnhe */, SystemZ::CLGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2247 /* clgrjnl */, SystemZ::CLGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2255 /* clgrjnle */, SystemZ::CLGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2264 /* clgrjnlh */, SystemZ::CLGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2273 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2279 /* clgrt */, SystemZ::CLGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2285 /* clgrte */, SystemZ::CLGRTAsmE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2292 /* clgrth */, SystemZ::CLGRTAsmH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2299 /* clgrthe */, SystemZ::CLGRTAsmHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2307 /* clgrtl */, SystemZ::CLGRTAsmL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2314 /* clgrtle */, SystemZ::CLGRTAsmLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2322 /* clgrtlh */, SystemZ::CLGRTAsmLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2330 /* clgrtne */, SystemZ::CLGRTAsmNE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2338 /* clgrtnh */, SystemZ::CLGRTAsmNH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2346 /* clgrtnhe */, SystemZ::CLGRTAsmNHE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2355 /* clgrtnl */, SystemZ::CLGRTAsmNL, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2363 /* clgrtnle */, SystemZ::CLGRTAsmNLE, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2372 /* clgrtnlh */, SystemZ::CLGRTAsmNLH, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2381 /* clgt */, SystemZ::CLGTAsm, Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2386 /* clgte */, SystemZ::CLGTAsmE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2392 /* clgth */, SystemZ::CLGTAsmH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2398 /* clgthe */, SystemZ::CLGTAsmHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2405 /* clgtl */, SystemZ::CLGTAsmL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2411 /* clgtle */, SystemZ::CLGTAsmLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2418 /* clgtlh */, SystemZ::CLGTAsmLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2425 /* clgtne */, SystemZ::CLGTAsmNE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2432 /* clgtnh */, SystemZ::CLGTAsmNH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2439 /* clgtnhe */, SystemZ::CLGTAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2447 /* clgtnl */, SystemZ::CLGTAsmNL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2454 /* clgtnle */, SystemZ::CLGTAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2462 /* clgtnlh */, SystemZ::CLGTAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2470 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2477 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 2482 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2489 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2495 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2499 /* clib */, SystemZ::CLIBAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2504 /* clibe */, SystemZ::CLIBAsmE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2510 /* clibh */, SystemZ::CLIBAsmH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2516 /* clibhe */, SystemZ::CLIBAsmHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2523 /* clibl */, SystemZ::CLIBAsmL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2529 /* clible */, SystemZ::CLIBAsmLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2536 /* cliblh */, SystemZ::CLIBAsmLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2543 /* clibne */, SystemZ::CLIBAsmNE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2550 /* clibnh */, SystemZ::CLIBAsmNH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2557 /* clibnhe */, SystemZ::CLIBAsmNHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2565 /* clibnl */, SystemZ::CLIBAsmNL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2572 /* clibnle */, SystemZ::CLIBAsmNLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2580 /* clibnlh */, SystemZ::CLIBAsmNLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2588 /* clih */, SystemZ::CLIH, Convert__GRH321_0__U32Imm1_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_U32Imm }, },
  { 2593 /* clij */, SystemZ::CLIJAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 2598 /* clije */, SystemZ::CLIJAsmE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2604 /* clijh */, SystemZ::CLIJAsmH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2610 /* clijhe */, SystemZ::CLIJAsmHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2617 /* clijl */, SystemZ::CLIJAsmL, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2623 /* clijle */, SystemZ::CLIJAsmLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2630 /* clijlh */, SystemZ::CLIJAsmLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2637 /* clijne */, SystemZ::CLIJAsmNE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2644 /* clijnh */, SystemZ::CLIJAsmNH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2651 /* clijnhe */, SystemZ::CLIJAsmNHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2659 /* clijnl */, SystemZ::CLIJAsmNL, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2666 /* clijnle */, SystemZ::CLIJAsmNLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2674 /* clijnlh */, SystemZ::CLIJAsmNLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 2682 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2687 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2691 /* clrb */, SystemZ::CLRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2696 /* clrbe */, SystemZ::CLRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2702 /* clrbh */, SystemZ::CLRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2708 /* clrbhe */, SystemZ::CLRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2715 /* clrbl */, SystemZ::CLRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2721 /* clrble */, SystemZ::CLRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2728 /* clrblh */, SystemZ::CLRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2735 /* clrbne */, SystemZ::CLRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2742 /* clrbnh */, SystemZ::CLRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2749 /* clrbnhe */, SystemZ::CLRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2757 /* clrbnl */, SystemZ::CLRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2764 /* clrbnle */, SystemZ::CLRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2772 /* clrbnlh */, SystemZ::CLRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 2780 /* clrj */, SystemZ::CLRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 2785 /* clrje */, SystemZ::CLRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2791 /* clrjh */, SystemZ::CLRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2797 /* clrjhe */, SystemZ::CLRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2804 /* clrjl */, SystemZ::CLRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2810 /* clrjle */, SystemZ::CLRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2817 /* clrjlh */, SystemZ::CLRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2824 /* clrjne */, SystemZ::CLRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2831 /* clrjnh */, SystemZ::CLRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2838 /* clrjnhe */, SystemZ::CLRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2846 /* clrjnl */, SystemZ::CLRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2853 /* clrjnle */, SystemZ::CLRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2861 /* clrjnlh */, SystemZ::CLRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 2869 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 2874 /* clrt */, SystemZ::CLRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 2879 /* clrte */, SystemZ::CLRTAsmE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2885 /* clrth */, SystemZ::CLRTAsmH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2891 /* clrthe */, SystemZ::CLRTAsmHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2898 /* clrtl */, SystemZ::CLRTAsmL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2904 /* clrtle */, SystemZ::CLRTAsmLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2911 /* clrtlh */, SystemZ::CLRTAsmLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2918 /* clrtne */, SystemZ::CLRTAsmNE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2925 /* clrtnh */, SystemZ::CLRTAsmNH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2932 /* clrtnhe */, SystemZ::CLRTAsmNHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2940 /* clrtnl */, SystemZ::CLRTAsmNL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2947 /* clrtnle */, SystemZ::CLRTAsmNLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2955 /* clrtnlh */, SystemZ::CLRTAsmNLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2963 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2968 /* clt */, SystemZ::CLTAsm, Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2972 /* clte */, SystemZ::CLTAsmE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2977 /* clth */, SystemZ::CLTAsmH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2982 /* clthe */, SystemZ::CLTAsmHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2988 /* cltl */, SystemZ::CLTAsmL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2993 /* cltle */, SystemZ::CLTAsmLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2999 /* cltlh */, SystemZ::CLTAsmLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3005 /* cltne */, SystemZ::CLTAsmNE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3011 /* cltnh */, SystemZ::CLTAsmNH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3017 /* cltnhe */, SystemZ::CLTAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3024 /* cltnl */, SystemZ::CLTAsmNL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3030 /* cltnle */, SystemZ::CLTAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3037 /* cltnlh */, SystemZ::CLTAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3044 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3048 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_2__FP641_1, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 3054 /* cpya */, SystemZ::CPYA, Convert__AR321_0__AR321_1, 0, { MCK_AR32, MCK_AR32 }, },
  { 3059 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3062 /* crb */, SystemZ::CRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3066 /* crbe */, SystemZ::CRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3071 /* crbh */, SystemZ::CRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3076 /* crbhe */, SystemZ::CRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3082 /* crbl */, SystemZ::CRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3087 /* crble */, SystemZ::CRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3093 /* crblh */, SystemZ::CRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3099 /* crbne */, SystemZ::CRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3105 /* crbnh */, SystemZ::CRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3111 /* crbnhe */, SystemZ::CRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3118 /* crbnl */, SystemZ::CRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3124 /* crbnle */, SystemZ::CRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3131 /* crbnlh */, SystemZ::CRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3138 /* crj */, SystemZ::CRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3142 /* crje */, SystemZ::CRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3147 /* crjh */, SystemZ::CRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3152 /* crjhe */, SystemZ::CRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3158 /* crjl */, SystemZ::CRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3163 /* crjle */, SystemZ::CRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3169 /* crjlh */, SystemZ::CRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3175 /* crjne */, SystemZ::CRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3181 /* crjnh */, SystemZ::CRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3187 /* crjnhe */, SystemZ::CRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3194 /* crjnl */, SystemZ::CRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3200 /* crjnle */, SystemZ::CRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3207 /* crjnlh */, SystemZ::CRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3214 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 3218 /* crt */, SystemZ::CRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3222 /* crte */, SystemZ::CRTAsmE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3227 /* crth */, SystemZ::CRTAsmH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3232 /* crthe */, SystemZ::CRTAsmHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3238 /* crtl */, SystemZ::CRTAsmL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3243 /* crtle */, SystemZ::CRTAsmLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3249 /* crtlh */, SystemZ::CRTAsmLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3255 /* crtne */, SystemZ::CRTAsmNE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3261 /* crtnh */, SystemZ::CRTAsmNH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3267 /* crtnhe */, SystemZ::CRTAsmNHE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3274 /* crtnl */, SystemZ::CRTAsmNL, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3280 /* crtnle */, SystemZ::CRTAsmNLE, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3287 /* crtnlh */, SystemZ::CRTAsmNLH, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3294 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3297 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3301 /* csst */, SystemZ::CSST, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 3306 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3310 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3315 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 3321 /* cxfbra */, SystemZ::CXFBRA, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3328 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 3334 /* cxgbra */, SystemZ::CXGBRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3341 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3348 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3355 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3358 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3362 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3367 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3371 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3376 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3379 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3383 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3388 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 3392 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3396 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 3401 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 3407 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3412 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3417 /* ear */, SystemZ::EAR, Convert__GR321_0__AR321_1, 0, { MCK_GR32, MCK_AR32 }, },
  { 3421 /* ectg */, SystemZ::ECTG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 3426 /* efpc */, SystemZ::EFPC, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 3431 /* etnd */, SystemZ::ETND, Convert__GR321_0, Feature_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 3436 /* ex */, SystemZ::EX, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 3439 /* exrl */, SystemZ::EXRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3444 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 3450 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 3457 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 3463 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 3470 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 3476 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 3483 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 3489 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 3492 /* icm */, SystemZ::ICM, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3496 /* icmh */, SystemZ::ICMH, Convert__GRH321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3501 /* icmy */, SystemZ::ICMY, Convert__GR321_0__Tie0__U4Imm1_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3506 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3510 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 3515 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3520 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 3525 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 3530 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3535 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 3540 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 3544 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3546 /* je */, SystemZ::JAsmE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3549 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3552 /* jge */, SystemZ::JGAsmE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3556 /* jgh */, SystemZ::JGAsmH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3560 /* jghe */, SystemZ::JGAsmHE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3565 /* jgl */, SystemZ::JGAsmL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3569 /* jgle */, SystemZ::JGAsmLE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3574 /* jglh */, SystemZ::JGAsmLH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3579 /* jgm */, SystemZ::JGAsmM, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3583 /* jgne */, SystemZ::JGAsmNE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3588 /* jgnh */, SystemZ::JGAsmNH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3593 /* jgnhe */, SystemZ::JGAsmNHE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3599 /* jgnl */, SystemZ::JGAsmNL, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3604 /* jgnle */, SystemZ::JGAsmNLE, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3610 /* jgnlh */, SystemZ::JGAsmNLH, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3616 /* jgnm */, SystemZ::JGAsmNM, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3621 /* jgno */, SystemZ::JGAsmNO, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3626 /* jgnp */, SystemZ::JGAsmNP, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3631 /* jgnz */, SystemZ::JGAsmNZ, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3636 /* jgo */, SystemZ::JGAsmO, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3640 /* jgp */, SystemZ::JGAsmP, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3644 /* jgz */, SystemZ::JGAsmZ, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 3648 /* jh */, SystemZ::JAsmH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3651 /* jhe */, SystemZ::JAsmHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3655 /* jl */, SystemZ::JAsmL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3658 /* jle */, SystemZ::JAsmLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3662 /* jlh */, SystemZ::JAsmLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3666 /* jm */, SystemZ::JAsmM, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3669 /* jne */, SystemZ::JAsmNE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3673 /* jnh */, SystemZ::JAsmNH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3677 /* jnhe */, SystemZ::JAsmNHE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3682 /* jnl */, SystemZ::JAsmNL, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3686 /* jnle */, SystemZ::JAsmNLE, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3691 /* jnlh */, SystemZ::JAsmNLH, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3696 /* jnm */, SystemZ::JAsmNM, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3700 /* jno */, SystemZ::JAsmNO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3704 /* jnp */, SystemZ::JAsmNP, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3708 /* jnz */, SystemZ::JAsmNZ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3712 /* jo */, SystemZ::JAsmO, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3715 /* jp */, SystemZ::JAsmP, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3718 /* jz */, SystemZ::JAsmZ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 3721 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3723 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 3726 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3730 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3735 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3740 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3746 /* lae */, SystemZ::LAE, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 3750 /* laey */, SystemZ::LAEY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3755 /* lam */, SystemZ::LAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 3759 /* lamy */, SystemZ::LAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 3764 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3768 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3773 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3777 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3782 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 3787 /* lat */, SystemZ::LAT, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3791 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3795 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, Feature_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3800 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3804 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3807 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3811 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3815 /* lcbb */, SystemZ::LCBB, Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_GR32, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 3820 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3826 /* lcdfr */, SystemZ::LCDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3832 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3838 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3844 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3849 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 3853 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3859 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3862 /* lde */, SystemZ::LDE32, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3866 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 3871 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 3877 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 3882 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 3886 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3892 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 3899 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 3903 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 3906 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 3912 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 3919 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 3923 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 3929 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, Feature_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 3936 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 3940 /* lfas */, SystemZ::LFAS, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 3945 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3949 /* lfhat */, SystemZ::LFHAT, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 3955 /* lfpc */, SystemZ::LFPC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 3960 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3963 /* lgat */, SystemZ::LGAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3968 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3972 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 3977 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 3982 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3986 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 3991 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 3996 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4002 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4006 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 4011 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4016 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4022 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4026 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4031 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4034 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4038 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 4042 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4046 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 4051 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4055 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4059 /* llch */, SystemZ::LLCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4064 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4069 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4074 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4080 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4085 /* llgfat */, SystemZ::LLGFAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4092 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4098 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4105 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4110 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4116 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 4123 /* llgt */, SystemZ::LLGT, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4128 /* llgtat */, SystemZ::LLGTAT, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4135 /* llgtr */, SystemZ::LLGTR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4141 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4145 /* llhh */, SystemZ::LLHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4150 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4155 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 4161 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 4167 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4173 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4179 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 4185 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4191 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 4197 /* llzrgf */, SystemZ::LLZRGF, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4204 /* lm */, SystemZ::LM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 4207 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4211 /* lmh */, SystemZ::LMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4215 /* lmy */, SystemZ::LMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4219 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4225 /* lndfr */, SystemZ::LNDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 4231 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 4237 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 4243 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 4248 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 4252 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 4258 /* loc */, SystemZ::LOCAsm, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 4262 /* loce */, SystemZ::LOCAsmE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4267 /* locfh */, SystemZ::LOCFHAsm, Convert__GRH321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 4273 /* locfhe */, SystemZ::LOCFHAsmE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4280 /* locfhh */, SystemZ::LOCFHAsmH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4287 /* locfhhe */, SystemZ::LOCFHAsmHE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4295 /* locfhl */, SystemZ::LOCFHAsmL, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4302 /* locfhle */, SystemZ::LOCFHAsmLE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4310 /* locfhlh */, SystemZ::LOCFHAsmLH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4318 /* locfhm */, SystemZ::LOCFHAsmM, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4325 /* locfhne */, SystemZ::LOCFHAsmNE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4333 /* locfhnh */, SystemZ::LOCFHAsmNH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4341 /* locfhnhe */, SystemZ::LOCFHAsmNHE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4350 /* locfhnl */, SystemZ::LOCFHAsmNL, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4358 /* locfhnle */, SystemZ::LOCFHAsmNLE, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4367 /* locfhnlh */, SystemZ::LOCFHAsmNLH, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4376 /* locfhnm */, SystemZ::LOCFHAsmNM, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4384 /* locfhno */, SystemZ::LOCFHAsmNO, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4392 /* locfhnp */, SystemZ::LOCFHAsmNP, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4400 /* locfhnz */, SystemZ::LOCFHAsmNZ, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4408 /* locfho */, SystemZ::LOCFHAsmO, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4415 /* locfhp */, SystemZ::LOCFHAsmP, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4422 /* locfhr */, SystemZ::LOCFHRAsm, Convert__GRH321_0__Tie0__GRH321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32, MCK_U4Imm }, },
  { 4429 /* locfhre */, SystemZ::LOCFHRAsmE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4437 /* locfhrh */, SystemZ::LOCFHRAsmH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4445 /* locfhrhe */, SystemZ::LOCFHRAsmHE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4454 /* locfhrl */, SystemZ::LOCFHRAsmL, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4462 /* locfhrle */, SystemZ::LOCFHRAsmLE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4471 /* locfhrlh */, SystemZ::LOCFHRAsmLH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4480 /* locfhrm */, SystemZ::LOCFHRAsmM, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4488 /* locfhrne */, SystemZ::LOCFHRAsmNE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4497 /* locfhrnh */, SystemZ::LOCFHRAsmNH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4506 /* locfhrnhe */, SystemZ::LOCFHRAsmNHE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4516 /* locfhrnl */, SystemZ::LOCFHRAsmNL, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4525 /* locfhrnle */, SystemZ::LOCFHRAsmNLE, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4535 /* locfhrnlh */, SystemZ::LOCFHRAsmNLH, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4545 /* locfhrnm */, SystemZ::LOCFHRAsmNM, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4554 /* locfhrno */, SystemZ::LOCFHRAsmNO, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4563 /* locfhrnp */, SystemZ::LOCFHRAsmNP, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4572 /* locfhrnz */, SystemZ::LOCFHRAsmNZ, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4581 /* locfhro */, SystemZ::LOCFHRAsmO, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4589 /* locfhrp */, SystemZ::LOCFHRAsmP, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4597 /* locfhrz */, SystemZ::LOCFHRAsmZ, Convert__GRH321_0__Tie0__GRH321_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 4605 /* locfhz */, SystemZ::LOCFHAsmZ, Convert__GRH321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 4612 /* locg */, SystemZ::LOCGAsm, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 4617 /* locge */, SystemZ::LOCGAsmE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4623 /* locgh */, SystemZ::LOCGAsmH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4629 /* locghe */, SystemZ::LOCGAsmHE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4636 /* locghi */, SystemZ::LOCGHIAsm, Convert__GR641_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 4643 /* locghie */, SystemZ::LOCGHIAsmE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4651 /* locghih */, SystemZ::LOCGHIAsmH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4659 /* locghihe */, SystemZ::LOCGHIAsmHE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4668 /* locghil */, SystemZ::LOCGHIAsmL, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4676 /* locghile */, SystemZ::LOCGHIAsmLE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4685 /* locghilh */, SystemZ::LOCGHIAsmLH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4694 /* locghim */, SystemZ::LOCGHIAsmM, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4702 /* locghine */, SystemZ::LOCGHIAsmNE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4711 /* locghinh */, SystemZ::LOCGHIAsmNH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4720 /* locghinhe */, SystemZ::LOCGHIAsmNHE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4730 /* locghinl */, SystemZ::LOCGHIAsmNL, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4739 /* locghinle */, SystemZ::LOCGHIAsmNLE, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4749 /* locghinlh */, SystemZ::LOCGHIAsmNLH, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4759 /* locghinm */, SystemZ::LOCGHIAsmNM, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4768 /* locghino */, SystemZ::LOCGHIAsmNO, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4777 /* locghinp */, SystemZ::LOCGHIAsmNP, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4786 /* locghinz */, SystemZ::LOCGHIAsmNZ, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4795 /* locghio */, SystemZ::LOCGHIAsmO, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4803 /* locghip */, SystemZ::LOCGHIAsmP, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4811 /* locghiz */, SystemZ::LOCGHIAsmZ, Convert__GR641_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 4819 /* locgl */, SystemZ::LOCGAsmL, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4825 /* locgle */, SystemZ::LOCGAsmLE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4832 /* locglh */, SystemZ::LOCGAsmLH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4839 /* locgm */, SystemZ::LOCGAsmM, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4845 /* locgne */, SystemZ::LOCGAsmNE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4852 /* locgnh */, SystemZ::LOCGAsmNH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4859 /* locgnhe */, SystemZ::LOCGAsmNHE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4867 /* locgnl */, SystemZ::LOCGAsmNL, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4874 /* locgnle */, SystemZ::LOCGAsmNLE, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4882 /* locgnlh */, SystemZ::LOCGAsmNLH, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4890 /* locgnm */, SystemZ::LOCGAsmNM, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4897 /* locgno */, SystemZ::LOCGAsmNO, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4904 /* locgnp */, SystemZ::LOCGAsmNP, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4911 /* locgnz */, SystemZ::LOCGAsmNZ, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4918 /* locgo */, SystemZ::LOCGAsmO, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4924 /* locgp */, SystemZ::LOCGAsmP, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4930 /* locgr */, SystemZ::LOCGRAsm, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 4936 /* locgre */, SystemZ::LOCGRAsmE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4943 /* locgrh */, SystemZ::LOCGRAsmH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4950 /* locgrhe */, SystemZ::LOCGRAsmHE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4958 /* locgrl */, SystemZ::LOCGRAsmL, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4965 /* locgrle */, SystemZ::LOCGRAsmLE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4973 /* locgrlh */, SystemZ::LOCGRAsmLH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4981 /* locgrm */, SystemZ::LOCGRAsmM, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4988 /* locgrne */, SystemZ::LOCGRAsmNE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 4996 /* locgrnh */, SystemZ::LOCGRAsmNH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5004 /* locgrnhe */, SystemZ::LOCGRAsmNHE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5013 /* locgrnl */, SystemZ::LOCGRAsmNL, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5021 /* locgrnle */, SystemZ::LOCGRAsmNLE, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5030 /* locgrnlh */, SystemZ::LOCGRAsmNLH, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5039 /* locgrnm */, SystemZ::LOCGRAsmNM, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5047 /* locgrno */, SystemZ::LOCGRAsmNO, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5055 /* locgrnp */, SystemZ::LOCGRAsmNP, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5063 /* locgrnz */, SystemZ::LOCGRAsmNZ, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5071 /* locgro */, SystemZ::LOCGRAsmO, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5078 /* locgrp */, SystemZ::LOCGRAsmP, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5085 /* locgrz */, SystemZ::LOCGRAsmZ, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 5092 /* locgz */, SystemZ::LOCGAsmZ, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5098 /* loch */, SystemZ::LOCAsmH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5103 /* loche */, SystemZ::LOCAsmHE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5109 /* lochhi */, SystemZ::LOCHHIAsm, Convert__GRH321_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm, MCK_U4Imm }, },
  { 5116 /* lochhie */, SystemZ::LOCHHIAsmE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5124 /* lochhih */, SystemZ::LOCHHIAsmH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5132 /* lochhihe */, SystemZ::LOCHHIAsmHE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5141 /* lochhil */, SystemZ::LOCHHIAsmL, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5149 /* lochhile */, SystemZ::LOCHHIAsmLE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5158 /* lochhilh */, SystemZ::LOCHHIAsmLH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5167 /* lochhim */, SystemZ::LOCHHIAsmM, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5175 /* lochhine */, SystemZ::LOCHHIAsmNE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5184 /* lochhinh */, SystemZ::LOCHHIAsmNH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5193 /* lochhinhe */, SystemZ::LOCHHIAsmNHE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5203 /* lochhinl */, SystemZ::LOCHHIAsmNL, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5212 /* lochhinle */, SystemZ::LOCHHIAsmNLE, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5222 /* lochhinlh */, SystemZ::LOCHHIAsmNLH, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5232 /* lochhinm */, SystemZ::LOCHHIAsmNM, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5241 /* lochhino */, SystemZ::LOCHHIAsmNO, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5250 /* lochhinp */, SystemZ::LOCHHIAsmNP, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5259 /* lochhinz */, SystemZ::LOCHHIAsmNZ, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5268 /* lochhio */, SystemZ::LOCHHIAsmO, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5276 /* lochhip */, SystemZ::LOCHHIAsmP, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5284 /* lochhiz */, SystemZ::LOCHHIAsmZ, Convert__GRH321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 5292 /* lochi */, SystemZ::LOCHIAsm, Convert__GR321_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 5298 /* lochie */, SystemZ::LOCHIAsmE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5305 /* lochih */, SystemZ::LOCHIAsmH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5312 /* lochihe */, SystemZ::LOCHIAsmHE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5320 /* lochil */, SystemZ::LOCHIAsmL, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5327 /* lochile */, SystemZ::LOCHIAsmLE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5335 /* lochilh */, SystemZ::LOCHIAsmLH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5343 /* lochim */, SystemZ::LOCHIAsmM, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5350 /* lochine */, SystemZ::LOCHIAsmNE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5358 /* lochinh */, SystemZ::LOCHIAsmNH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5366 /* lochinhe */, SystemZ::LOCHIAsmNHE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5375 /* lochinl */, SystemZ::LOCHIAsmNL, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5383 /* lochinle */, SystemZ::LOCHIAsmNLE, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5392 /* lochinlh */, SystemZ::LOCHIAsmNLH, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5401 /* lochinm */, SystemZ::LOCHIAsmNM, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5409 /* lochino */, SystemZ::LOCHIAsmNO, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5417 /* lochinp */, SystemZ::LOCHIAsmNP, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5425 /* lochinz */, SystemZ::LOCHIAsmNZ, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5433 /* lochio */, SystemZ::LOCHIAsmO, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5440 /* lochip */, SystemZ::LOCHIAsmP, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5447 /* lochiz */, SystemZ::LOCHIAsmZ, Convert__GR321_0__Tie0__S16Imm1_1, Feature_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 5454 /* locl */, SystemZ::LOCAsmL, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5459 /* locle */, SystemZ::LOCAsmLE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5465 /* loclh */, SystemZ::LOCAsmLH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5471 /* locm */, SystemZ::LOCAsmM, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5476 /* locne */, SystemZ::LOCAsmNE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5482 /* locnh */, SystemZ::LOCAsmNH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5488 /* locnhe */, SystemZ::LOCAsmNHE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5495 /* locnl */, SystemZ::LOCAsmNL, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5501 /* locnle */, SystemZ::LOCAsmNLE, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5508 /* locnlh */, SystemZ::LOCAsmNLH, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5515 /* locnm */, SystemZ::LOCAsmNM, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5521 /* locno */, SystemZ::LOCAsmNO, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5527 /* locnp */, SystemZ::LOCAsmNP, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5533 /* locnz */, SystemZ::LOCAsmNZ, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5539 /* loco */, SystemZ::LOCAsmO, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5544 /* locp */, SystemZ::LOCAsmP, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5549 /* locr */, SystemZ::LOCRAsm, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 5554 /* locre */, SystemZ::LOCRAsmE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5560 /* locrh */, SystemZ::LOCRAsmH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5566 /* locrhe */, SystemZ::LOCRAsmHE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5573 /* locrl */, SystemZ::LOCRAsmL, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5579 /* locrle */, SystemZ::LOCRAsmLE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5586 /* locrlh */, SystemZ::LOCRAsmLH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5593 /* locrm */, SystemZ::LOCRAsmM, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5599 /* locrne */, SystemZ::LOCRAsmNE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5606 /* locrnh */, SystemZ::LOCRAsmNH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5613 /* locrnhe */, SystemZ::LOCRAsmNHE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5621 /* locrnl */, SystemZ::LOCRAsmNL, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5628 /* locrnle */, SystemZ::LOCRAsmNLE, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5636 /* locrnlh */, SystemZ::LOCRAsmNLH, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5644 /* locrnm */, SystemZ::LOCRAsmNM, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5651 /* locrno */, SystemZ::LOCRAsmNO, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5658 /* locrnp */, SystemZ::LOCRAsmNP, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5665 /* locrnz */, SystemZ::LOCRAsmNZ, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5672 /* locro */, SystemZ::LOCRAsmO, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5678 /* locrp */, SystemZ::LOCRAsmP, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5684 /* locrz */, SystemZ::LOCRAsmZ, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 5690 /* locz */, SystemZ::LOCAsmZ, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5695 /* lpd */, SystemZ::LPD, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, Feature_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 5699 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5705 /* lpdfr */, SystemZ::LPDFR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5711 /* lpdg */, SystemZ::LPDG, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, Feature_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 5716 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5722 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5728 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5733 /* lpq */, SystemZ::LPQ, Convert__GR1281_0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 5737 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5741 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5747 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5750 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 5754 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5758 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5763 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5769 /* lrvh */, SystemZ::LRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5774 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5779 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5782 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5788 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5794 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5798 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5803 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 5809 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 5814 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 5818 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5824 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 5829 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 5835 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 5840 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 5846 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 5850 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5853 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 5858 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 5863 /* lzrf */, SystemZ::LZRF, Convert__GR321_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5868 /* lzrg */, SystemZ::LZRG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5873 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 5878 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5883 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 5889 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5894 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 5900 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5904 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 5909 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5914 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 5920 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5925 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 5931 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 5936 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5939 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 5943 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5947 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 5951 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 5956 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5959 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5964 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 5970 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5975 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 5981 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 5986 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5990 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5995 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 6001 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 6007 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6012 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6016 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6020 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 6024 /* mvck */, SystemZ::MVCK, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, 0, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 6029 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 6035 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 6041 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 6046 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 6050 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 6055 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6060 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6065 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 6070 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 6076 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6078 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 6081 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6084 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6088 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 6093 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 6096 /* niai */, SystemZ::NIAI, Convert__U4Imm1_0__U4Imm1_1, Feature_FeatureExecutionHint, { MCK_U4Imm, MCK_U4Imm }, },
  { 6101 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 6106 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 6111 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 6116 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 6121 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 6126 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 6131 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 6135 /* nop */, SystemZ::BCAsm, Convert__imm_95_0__BDXAddr64Disp123_0, 0, { MCK_BDXAddr64Disp12 }, },
  { 6139 /* nopr */, SystemZ::BCRAsm, Convert__imm_95_0__GR641_0, 0, { MCK_GR64 }, },
  { 6144 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6147 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 6151 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, Feature_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6157 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6160 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6162 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 6165 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6168 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6172 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 6177 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 6180 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 6185 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 6190 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 6195 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 6200 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 6205 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 6210 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 6214 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6217 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 6221 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6224 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, 0, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 6228 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 6234 /* plo */, SystemZ::PLO, Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3, 0, { MCK_GR64, MCK_BDAddr64Disp12, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 6238 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, Feature_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 6245 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, Feature_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 6249 /* pr */, SystemZ::PR, Convert_NoOperands, 0, {  }, },
  { 6252 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 6258 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 6265 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 6272 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 6279 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 6283 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 6288 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 6294 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 6300 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 6306 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6308 /* sam24 */, SystemZ::SAM24, Convert_NoOperands, 0, {  }, },
  { 6314 /* sam31 */, SystemZ::SAM31, Convert_NoOperands, 0, {  }, },
  { 6320 /* sam64 */, SystemZ::SAM64, Convert_NoOperands, 0, {  }, },
  { 6326 /* sar */, SystemZ::SAR, Convert__AR321_0__GR321_1, 0, { MCK_AR32, MCK_GR32 }, },
  { 6330 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6334 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6339 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6343 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6348 /* sfasr */, SystemZ::SFASR, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 6354 /* sfpc */, SystemZ::SFPC, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 6359 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6362 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6366 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 6371 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6375 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 6380 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6383 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6387 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6390 /* sla */, SystemZ::SLA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 6394 /* slak */, SystemZ::SLAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 6399 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6403 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6408 /* slbgr */, SystemZ::SLBGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6414 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6419 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 6424 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6428 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6433 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 6439 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 6445 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6450 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 6456 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 6460 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 6465 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 6470 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6474 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 6479 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6483 /* spm */, SystemZ::SPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 6487 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6492 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 6498 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6503 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 6509 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 6515 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 6518 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 6522 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 6527 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 6532 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 6536 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 6540 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 6545 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 6550 /* srnm */, SystemZ::SRNM, Convert__BDAddr32Disp122_0, 0, { MCK_BDAddr32Disp12 }, },
  { 6555 /* srnmb */, SystemZ::SRNMB, Convert__BDAddr32Disp122_0, Feature_FeatureFPExtension, { MCK_BDAddr32Disp12 }, },
  { 6561 /* srnmt */, SystemZ::SRNMT, Convert__BDAddr32Disp122_0, 0, { MCK_BDAddr32Disp12 }, },
  { 6567 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0__Tie1, 0, { MCK_GR64, MCK_GR64 }, },
  { 6572 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6575 /* stam */, SystemZ::STAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 6580 /* stamy */, SystemZ::STAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, 0, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 6586 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6590 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 6595 /* stck */, SystemZ::STCK, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6600 /* stcke */, SystemZ::STCKE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6606 /* stckf */, SystemZ::STCKF, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6612 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6617 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6621 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 6626 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 6630 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 6635 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 6640 /* stfle */, SystemZ::STFLE, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6646 /* stfpc */, SystemZ::STFPC, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 6652 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6656 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 6662 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 6666 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, Feature_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 6671 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 6677 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 6682 /* stm */, SystemZ::STM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 6686 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6691 /* stmh */, SystemZ::STMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, 0, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6696 /* stmy */, SystemZ::STMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6701 /* stoc */, SystemZ::STOCAsm, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 6706 /* stoce */, SystemZ::STOCAsmE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6712 /* stocfh */, SystemZ::STOCFHAsm, Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 6719 /* stocfhe */, SystemZ::STOCFHAsmE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6727 /* stocfhh */, SystemZ::STOCFHAsmH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6735 /* stocfhhe */, SystemZ::STOCFHAsmHE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6744 /* stocfhl */, SystemZ::STOCFHAsmL, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6752 /* stocfhle */, SystemZ::STOCFHAsmLE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6761 /* stocfhlh */, SystemZ::STOCFHAsmLH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6770 /* stocfhm */, SystemZ::STOCFHAsmM, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6778 /* stocfhne */, SystemZ::STOCFHAsmNE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6787 /* stocfhnh */, SystemZ::STOCFHAsmNH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6796 /* stocfhnhe */, SystemZ::STOCFHAsmNHE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6806 /* stocfhnl */, SystemZ::STOCFHAsmNL, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6815 /* stocfhnle */, SystemZ::STOCFHAsmNLE, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6825 /* stocfhnlh */, SystemZ::STOCFHAsmNLH, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6835 /* stocfhnm */, SystemZ::STOCFHAsmNM, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6844 /* stocfhno */, SystemZ::STOCFHAsmNO, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6853 /* stocfhnp */, SystemZ::STOCFHAsmNP, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6862 /* stocfhnz */, SystemZ::STOCFHAsmNZ, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6871 /* stocfho */, SystemZ::STOCFHAsmO, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6879 /* stocfhp */, SystemZ::STOCFHAsmP, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6887 /* stocfhz */, SystemZ::STOCFHAsmZ, Convert__GRH321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 6895 /* stocg */, SystemZ::STOCGAsm, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 6901 /* stocge */, SystemZ::STOCGAsmE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6908 /* stocgh */, SystemZ::STOCGAsmH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6915 /* stocghe */, SystemZ::STOCGAsmHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6923 /* stocgl */, SystemZ::STOCGAsmL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6930 /* stocgle */, SystemZ::STOCGAsmLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6938 /* stocglh */, SystemZ::STOCGAsmLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6946 /* stocgm */, SystemZ::STOCGAsmM, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6953 /* stocgne */, SystemZ::STOCGAsmNE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6961 /* stocgnh */, SystemZ::STOCGAsmNH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6969 /* stocgnhe */, SystemZ::STOCGAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6978 /* stocgnl */, SystemZ::STOCGAsmNL, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6986 /* stocgnle */, SystemZ::STOCGAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6995 /* stocgnlh */, SystemZ::STOCGAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7004 /* stocgnm */, SystemZ::STOCGAsmNM, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7012 /* stocgno */, SystemZ::STOCGAsmNO, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7020 /* stocgnp */, SystemZ::STOCGAsmNP, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7028 /* stocgnz */, SystemZ::STOCGAsmNZ, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7036 /* stocgo */, SystemZ::STOCGAsmO, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7043 /* stocgp */, SystemZ::STOCGAsmP, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7050 /* stocgz */, SystemZ::STOCGAsmZ, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 7057 /* stoch */, SystemZ::STOCAsmH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7063 /* stoche */, SystemZ::STOCAsmHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7070 /* stocl */, SystemZ::STOCAsmL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7076 /* stocle */, SystemZ::STOCAsmLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7083 /* stoclh */, SystemZ::STOCAsmLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7090 /* stocm */, SystemZ::STOCAsmM, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7096 /* stocne */, SystemZ::STOCAsmNE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7103 /* stocnh */, SystemZ::STOCAsmNH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7110 /* stocnhe */, SystemZ::STOCAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7118 /* stocnl */, SystemZ::STOCAsmNL, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7125 /* stocnle */, SystemZ::STOCAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7133 /* stocnlh */, SystemZ::STOCAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7141 /* stocnm */, SystemZ::STOCAsmNM, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7148 /* stocno */, SystemZ::STOCAsmNO, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7155 /* stocnp */, SystemZ::STOCAsmNP, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7162 /* stocnz */, SystemZ::STOCAsmNZ, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7169 /* stoco */, SystemZ::STOCAsmO, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7175 /* stocp */, SystemZ::STOCAsmP, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7181 /* stocz */, SystemZ::STOCAsmZ, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 7187 /* stpq */, SystemZ::STPQ, Convert__GR1281_0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7192 /* strag */, SystemZ::STRAG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, 0, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7198 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 7203 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7208 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7214 /* strvh */, SystemZ::STRVH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7220 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7224 /* svc */, SystemZ::SVC, Convert__U8Imm1_0, 0, { MCK_U8Imm }, },
  { 7228 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 7233 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7236 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 7243 /* tam */, SystemZ::TAM, Convert_NoOperands, 0, {  }, },
  { 7247 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 7254 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, Feature_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 7262 /* tcdb */, SystemZ::TCDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7267 /* tceb */, SystemZ::TCEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7272 /* tcxb */, SystemZ::TCXB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7277 /* tend */, SystemZ::TEND, Convert_NoOperands, Feature_FeatureTransactionalExecution, {  }, },
  { 7282 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7285 /* tmh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7289 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7294 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, 0, { MCK_GRH32, MCK_U16Imm }, },
  { 7299 /* tml */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7303 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7308 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, 0, { MCK_GR32, MCK_U16Imm }, },
  { 7313 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7317 /* ts */, SystemZ::TS, Convert__BDAddr64Disp122_0, 0, { MCK_BDAddr64Disp12 }, },
  { 7320 /* va */, SystemZ::VA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7323 /* vab */, SystemZ::VAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7327 /* vac */, SystemZ::VAC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7331 /* vacc */, SystemZ::VACC, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7336 /* vaccb */, SystemZ::VACCB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7342 /* vaccc */, SystemZ::VACCC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7348 /* vacccq */, SystemZ::VACCCQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7355 /* vaccf */, SystemZ::VACCF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7361 /* vaccg */, SystemZ::VACCG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7367 /* vacch */, SystemZ::VACCH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7373 /* vaccq */, SystemZ::VACCQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7379 /* vacq */, SystemZ::VACQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7384 /* vaf */, SystemZ::VAF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7388 /* vag */, SystemZ::VAG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7392 /* vah */, SystemZ::VAH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7396 /* vaq */, SystemZ::VAQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7400 /* vavg */, SystemZ::VAVG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7405 /* vavgb */, SystemZ::VAVGB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7411 /* vavgf */, SystemZ::VAVGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7417 /* vavgg */, SystemZ::VAVGG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7423 /* vavgh */, SystemZ::VAVGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7429 /* vavgl */, SystemZ::VAVGL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7435 /* vavglb */, SystemZ::VAVGLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7442 /* vavglf */, SystemZ::VAVGLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7449 /* vavglg */, SystemZ::VAVGLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7456 /* vavglh */, SystemZ::VAVGLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7463 /* vcdg */, SystemZ::VCDG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 7468 /* vcdgb */, SystemZ::VCDGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7474 /* vcdlg */, SystemZ::VCDLG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 7480 /* vcdlgb */, SystemZ::VCDLGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7487 /* vceq */, SystemZ::VCEQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7492 /* vceqb */, SystemZ::VCEQB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7498 /* vceqbs */, SystemZ::VCEQBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7505 /* vceqf */, SystemZ::VCEQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7511 /* vceqfs */, SystemZ::VCEQFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7518 /* vceqg */, SystemZ::VCEQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7524 /* vceqgs */, SystemZ::VCEQGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7531 /* vceqh */, SystemZ::VCEQH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7537 /* vceqhs */, SystemZ::VCEQHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7544 /* vcgd */, SystemZ::VCGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 7549 /* vcgdb */, SystemZ::VCGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7555 /* vch */, SystemZ::VCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7559 /* vchb */, SystemZ::VCHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7564 /* vchbs */, SystemZ::VCHBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7570 /* vchf */, SystemZ::VCHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7575 /* vchfs */, SystemZ::VCHFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7581 /* vchg */, SystemZ::VCHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7586 /* vchgs */, SystemZ::VCHGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7592 /* vchh */, SystemZ::VCHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7597 /* vchhs */, SystemZ::VCHHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7603 /* vchl */, SystemZ::VCHL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7608 /* vchlb */, SystemZ::VCHLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7614 /* vchlbs */, SystemZ::VCHLBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7621 /* vchlf */, SystemZ::VCHLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7627 /* vchlfs */, SystemZ::VCHLFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7634 /* vchlg */, SystemZ::VCHLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7640 /* vchlgs */, SystemZ::VCHLGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7647 /* vchlh */, SystemZ::VCHLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7653 /* vchlhs */, SystemZ::VCHLHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7660 /* vcksm */, SystemZ::VCKSM, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7666 /* vclgd */, SystemZ::VCLGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 7672 /* vclgdb */, SystemZ::VCLGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 7679 /* vclz */, SystemZ::VCLZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7684 /* vclzb */, SystemZ::VCLZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7690 /* vclzf */, SystemZ::VCLZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7696 /* vclzg */, SystemZ::VCLZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7702 /* vclzh */, SystemZ::VCLZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7708 /* vctz */, SystemZ::VCTZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7713 /* vctzb */, SystemZ::VCTZB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7719 /* vctzf */, SystemZ::VCTZF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7725 /* vctzg */, SystemZ::VCTZG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7731 /* vctzh */, SystemZ::VCTZH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7737 /* vec */, SystemZ::VEC, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7741 /* vecb */, SystemZ::VECB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7746 /* vecf */, SystemZ::VECF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7751 /* vecg */, SystemZ::VECG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7756 /* vech */, SystemZ::VECH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7761 /* vecl */, SystemZ::VECL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7766 /* veclb */, SystemZ::VECLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7772 /* veclf */, SystemZ::VECLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7778 /* veclg */, SystemZ::VECLG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7784 /* veclh */, SystemZ::VECLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 7790 /* verim */, SystemZ::VERIM, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 7796 /* verimb */, SystemZ::VERIMB, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 7803 /* verimf */, SystemZ::VERIMF, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 7810 /* verimg */, SystemZ::VERIMG, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 7817 /* verimh */, SystemZ::VERIMH, Convert__VR1281_0__Tie0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 7824 /* verll */, SystemZ::VERLL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 7830 /* verllb */, SystemZ::VERLLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7837 /* verllf */, SystemZ::VERLLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7844 /* verllg */, SystemZ::VERLLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7851 /* verllh */, SystemZ::VERLLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7858 /* verllv */, SystemZ::VERLLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7865 /* verllvb */, SystemZ::VERLLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7873 /* verllvf */, SystemZ::VERLLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7881 /* verllvg */, SystemZ::VERLLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7889 /* verllvh */, SystemZ::VERLLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7897 /* vesl */, SystemZ::VESL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 7902 /* veslb */, SystemZ::VESLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7908 /* veslf */, SystemZ::VESLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7914 /* veslg */, SystemZ::VESLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7920 /* veslh */, SystemZ::VESLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7926 /* veslv */, SystemZ::VESLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 7932 /* veslvb */, SystemZ::VESLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7939 /* veslvf */, SystemZ::VESLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7946 /* veslvg */, SystemZ::VESLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7953 /* veslvh */, SystemZ::VESLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 7960 /* vesra */, SystemZ::VESRA, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 7966 /* vesrab */, SystemZ::VESRAB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7973 /* vesraf */, SystemZ::VESRAF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7980 /* vesrag */, SystemZ::VESRAG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7987 /* vesrah */, SystemZ::VESRAH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 7994 /* vesrav */, SystemZ::VESRAV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8001 /* vesravb */, SystemZ::VESRAVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8009 /* vesravf */, SystemZ::VESRAVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8017 /* vesravg */, SystemZ::VESRAVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8025 /* vesravh */, SystemZ::VESRAVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8033 /* vesrl */, SystemZ::VESRL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 8039 /* vesrlb */, SystemZ::VESRLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8046 /* vesrlf */, SystemZ::VESRLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8053 /* vesrlg */, SystemZ::VESRLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8060 /* vesrlh */, SystemZ::VESRLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8067 /* vesrlv */, SystemZ::VESRLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8074 /* vesrlvb */, SystemZ::VESRLVB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8082 /* vesrlvf */, SystemZ::VESRLVF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8090 /* vesrlvg */, SystemZ::VESRLVG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8098 /* vesrlvh */, SystemZ::VESRLVH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8106 /* vfa */, SystemZ::VFA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8110 /* vfadb */, SystemZ::VFADB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8116 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8116 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8121 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8121 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8127 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8127 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8134 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8134 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8140 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8140 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8147 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8147 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8153 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8153 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8160 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8160 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8167 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8167 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8175 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8175 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8182 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8182 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8190 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8190 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8197 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8197 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8205 /* vfce */, SystemZ::VFCE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8210 /* vfcedb */, SystemZ::VFCEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8217 /* vfcedbs */, SystemZ::VFCEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8225 /* vfch */, SystemZ::VFCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8230 /* vfchdb */, SystemZ::VFCHDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8237 /* vfchdbs */, SystemZ::VFCHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8245 /* vfche */, SystemZ::VFCHE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8251 /* vfchedb */, SystemZ::VFCHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8259 /* vfchedbs */, SystemZ::VFCHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8268 /* vfd */, SystemZ::VFD, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8272 /* vfddb */, SystemZ::VFDDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8278 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8278 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8283 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8283 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8289 /* vfeebs */, SystemZ::VFEEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8296 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8296 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8302 /* vfeefs */, SystemZ::VFEEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8309 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8309 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8315 /* vfeehs */, SystemZ::VFEEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8322 /* vfeezb */, SystemZ::VFEEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8329 /* vfeezbs */, SystemZ::VFEEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8337 /* vfeezf */, SystemZ::VFEEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8344 /* vfeezfs */, SystemZ::VFEEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8352 /* vfeezh */, SystemZ::VFEEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8359 /* vfeezhs */, SystemZ::VFEEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8367 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8367 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8373 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8373 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8380 /* vfenebs */, SystemZ::VFENEBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8388 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8388 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8395 /* vfenefs */, SystemZ::VFENEFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8403 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8403 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8410 /* vfenehs */, SystemZ::VFENEHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8418 /* vfenezb */, SystemZ::VFENEZB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8426 /* vfenezbs */, SystemZ::VFENEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8435 /* vfenezf */, SystemZ::VFENEZF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8443 /* vfenezfs */, SystemZ::VFENEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8452 /* vfenezh */, SystemZ::VFENEZH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8460 /* vfenezhs */, SystemZ::VFENEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8469 /* vfi */, SystemZ::VFI, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8473 /* vfidb */, SystemZ::VFIDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8479 /* vflcdb */, SystemZ::VFLCDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8486 /* vflndb */, SystemZ::VFLNDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8493 /* vflpdb */, SystemZ::VFLPDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8500 /* vfm */, SystemZ::VFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8504 /* vfma */, SystemZ::VFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8509 /* vfmadb */, SystemZ::VFMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8516 /* vfmdb */, SystemZ::VFMDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8522 /* vfms */, SystemZ::VFMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8527 /* vfmsdb */, SystemZ::VFMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8534 /* vfpso */, SystemZ::VFPSO, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8540 /* vfpsodb */, SystemZ::VFPSODB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8548 /* vfs */, SystemZ::VFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8552 /* vfsdb */, SystemZ::VFSDB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8558 /* vfsq */, SystemZ::VFSQ, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8563 /* vfsqdb */, SystemZ::VFSQDB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8570 /* vftci */, SystemZ::VFTCI, Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8576 /* vftcidb */, SystemZ::VFTCIDB, Convert__VR1281_0__VR1281_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 8584 /* vgbm */, SystemZ::VGBM, Convert__VR1281_0__U16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_U16Imm }, },
  { 8589 /* vgef */, SystemZ::VGEF, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 8594 /* vgeg */, SystemZ::VGEG, Convert__VR1281_0__Tie0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 8599 /* vgfm */, SystemZ::VGFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8604 /* vgfma */, SystemZ::VGFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8610 /* vgfmab */, SystemZ::VGFMAB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8617 /* vgfmaf */, SystemZ::VGFMAF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8624 /* vgfmag */, SystemZ::VGFMAG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8631 /* vgfmah */, SystemZ::VGFMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8638 /* vgfmb */, SystemZ::VGFMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8644 /* vgfmf */, SystemZ::VGFMF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8650 /* vgfmg */, SystemZ::VGFMG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8656 /* vgfmh */, SystemZ::VGFMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 8662 /* vgm */, SystemZ::VGM, Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 8666 /* vgmb */, SystemZ::VGMB, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 8671 /* vgmf */, SystemZ::VGMF, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 8676 /* vgmg */, SystemZ::VGMG, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 8681 /* vgmh */, SystemZ::VGMH, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 8686 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8686 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8692 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8692 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8699 /* vistrbs */, SystemZ::VISTRBS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8707 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8707 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8714 /* vistrfs */, SystemZ::VISTRFS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8722 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8722 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8729 /* vistrhs */, SystemZ::VISTRHS, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8737 /* vl */, SystemZ::VL, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8740 /* vlbb */, SystemZ::VLBB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 8745 /* vlc */, SystemZ::VLC, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8749 /* vlcb */, SystemZ::VLCB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8754 /* vlcf */, SystemZ::VLCF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8759 /* vlcg */, SystemZ::VLCG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8764 /* vlch */, SystemZ::VLCH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8769 /* vlde */, SystemZ::VLDE, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8774 /* vldeb */, SystemZ::VLDEB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8780 /* vleb */, SystemZ::VLEB, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 8785 /* vled */, SystemZ::VLED, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 8790 /* vledb */, SystemZ::VLEDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 8796 /* vlef */, SystemZ::VLEF, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 8801 /* vleg */, SystemZ::VLEG, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 8806 /* vleh */, SystemZ::VLEH, Convert__VR1281_0__Tie0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 8811 /* vleib */, SystemZ::VLEIB, Convert__VR1281_0__Tie0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 8817 /* vleif */, SystemZ::VLEIF, Convert__VR1281_0__Tie0__S16Imm1_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U2Imm }, },
  { 8823 /* vleig */, SystemZ::VLEIG, Convert__VR1281_0__Tie0__S16Imm1_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U1Imm }, },
  { 8829 /* vleih */, SystemZ::VLEIH, Convert__VR1281_0__Tie0__S16Imm1_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U3Imm }, },
  { 8835 /* vlgv */, SystemZ::VLGV, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 8840 /* vlgvb */, SystemZ::VLGVB, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8846 /* vlgvf */, SystemZ::VLGVF, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8852 /* vlgvg */, SystemZ::VLGVG, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8858 /* vlgvh */, SystemZ::VLGVH, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 8864 /* vll */, SystemZ::VLL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 8868 /* vllez */, SystemZ::VLLEZ, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 8874 /* vllezb */, SystemZ::VLLEZB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8881 /* vllezf */, SystemZ::VLLEZF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8888 /* vllezg */, SystemZ::VLLEZG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8895 /* vllezh */, SystemZ::VLLEZH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8902 /* vlm */, SystemZ::VLM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 8906 /* vlp */, SystemZ::VLP, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 8910 /* vlpb */, SystemZ::VLPB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8915 /* vlpf */, SystemZ::VLPF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8920 /* vlpg */, SystemZ::VLPG, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8925 /* vlph */, SystemZ::VLPH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8930 /* vlr */, SystemZ::VLR, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 8934 /* vlrep */, SystemZ::VLREP, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 8940 /* vlrepb */, SystemZ::VLREPB, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8947 /* vlrepf */, SystemZ::VLREPF, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8954 /* vlrepg */, SystemZ::VLREPG, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8961 /* vlreph */, SystemZ::VLREPH, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 8968 /* vlvg */, SystemZ::VLVG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 8973 /* vlvgb */, SystemZ::VLVGB, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8979 /* vlvgf */, SystemZ::VLVGF, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8985 /* vlvgg */, SystemZ::VLVGG, Convert__VR1281_0__Tie0__GR641_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12 }, },
  { 8991 /* vlvgh */, SystemZ::VLVGH, Convert__VR1281_0__Tie0__GR321_1__BDAddr32Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8997 /* vlvgp */, SystemZ::VLVGP, Convert__VR1281_0__GR641_1__GR641_2, Feature_FeatureVector, { MCK_VR128, MCK_GR64, MCK_GR64 }, },
  { 9003 /* vmae */, SystemZ::VMAE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9008 /* vmaeb */, SystemZ::VMAEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9014 /* vmaef */, SystemZ::VMAEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9020 /* vmaeh */, SystemZ::VMAEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9026 /* vmah */, SystemZ::VMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9031 /* vmahb */, SystemZ::VMAHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9037 /* vmahf */, SystemZ::VMAHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9043 /* vmahh */, SystemZ::VMAHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9049 /* vmal */, SystemZ::VMAL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9054 /* vmalb */, SystemZ::VMALB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9060 /* vmale */, SystemZ::VMALE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9066 /* vmaleb */, SystemZ::VMALEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9073 /* vmalef */, SystemZ::VMALEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9080 /* vmaleh */, SystemZ::VMALEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9087 /* vmalf */, SystemZ::VMALF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9093 /* vmalh */, SystemZ::VMALH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9099 /* vmalhb */, SystemZ::VMALHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9106 /* vmalhf */, SystemZ::VMALHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9113 /* vmalhh */, SystemZ::VMALHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9120 /* vmalhw */, SystemZ::VMALHW, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9127 /* vmalo */, SystemZ::VMALO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9133 /* vmalob */, SystemZ::VMALOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9140 /* vmalof */, SystemZ::VMALOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9147 /* vmaloh */, SystemZ::VMALOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9154 /* vmao */, SystemZ::VMAO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9159 /* vmaob */, SystemZ::VMAOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9165 /* vmaof */, SystemZ::VMAOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9171 /* vmaoh */, SystemZ::VMAOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9177 /* vme */, SystemZ::VME, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9181 /* vmeb */, SystemZ::VMEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9186 /* vmef */, SystemZ::VMEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9191 /* vmeh */, SystemZ::VMEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9196 /* vmh */, SystemZ::VMH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9200 /* vmhb */, SystemZ::VMHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9205 /* vmhf */, SystemZ::VMHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9210 /* vmhh */, SystemZ::VMHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9215 /* vml */, SystemZ::VML, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9219 /* vmlb */, SystemZ::VMLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9224 /* vmle */, SystemZ::VMLE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9229 /* vmleb */, SystemZ::VMLEB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9235 /* vmlef */, SystemZ::VMLEF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9241 /* vmleh */, SystemZ::VMLEH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9247 /* vmlf */, SystemZ::VMLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9252 /* vmlh */, SystemZ::VMLH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9257 /* vmlhb */, SystemZ::VMLHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9263 /* vmlhf */, SystemZ::VMLHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9269 /* vmlhh */, SystemZ::VMLHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9275 /* vmlhw */, SystemZ::VMLHW, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9281 /* vmlo */, SystemZ::VMLO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9286 /* vmlob */, SystemZ::VMLOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9292 /* vmlof */, SystemZ::VMLOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9298 /* vmloh */, SystemZ::VMLOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9304 /* vmn */, SystemZ::VMN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9308 /* vmnb */, SystemZ::VMNB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9313 /* vmnf */, SystemZ::VMNF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9318 /* vmng */, SystemZ::VMNG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9323 /* vmnh */, SystemZ::VMNH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9328 /* vmnl */, SystemZ::VMNL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9333 /* vmnlb */, SystemZ::VMNLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9339 /* vmnlf */, SystemZ::VMNLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9345 /* vmnlg */, SystemZ::VMNLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9351 /* vmnlh */, SystemZ::VMNLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9357 /* vmo */, SystemZ::VMO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9361 /* vmob */, SystemZ::VMOB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9366 /* vmof */, SystemZ::VMOF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9371 /* vmoh */, SystemZ::VMOH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9376 /* vmrh */, SystemZ::VMRH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9381 /* vmrhb */, SystemZ::VMRHB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9387 /* vmrhf */, SystemZ::VMRHF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9393 /* vmrhg */, SystemZ::VMRHG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9399 /* vmrhh */, SystemZ::VMRHH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9405 /* vmrl */, SystemZ::VMRL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9410 /* vmrlb */, SystemZ::VMRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9416 /* vmrlf */, SystemZ::VMRLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9422 /* vmrlg */, SystemZ::VMRLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9428 /* vmrlh */, SystemZ::VMRLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9434 /* vmx */, SystemZ::VMX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9438 /* vmxb */, SystemZ::VMXB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9443 /* vmxf */, SystemZ::VMXF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9448 /* vmxg */, SystemZ::VMXG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9453 /* vmxh */, SystemZ::VMXH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9458 /* vmxl */, SystemZ::VMXL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9463 /* vmxlb */, SystemZ::VMXLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9469 /* vmxlf */, SystemZ::VMXLF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9475 /* vmxlg */, SystemZ::VMXLG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9481 /* vmxlh */, SystemZ::VMXLH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9487 /* vn */, SystemZ::VN, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9490 /* vnc */, SystemZ::VNC, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9494 /* vno */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9498 /* vnot */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9503 /* vo */, SystemZ::VO, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9506 /* vone */, SystemZ::VONE, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 9511 /* vpdi */, SystemZ::VPDI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9516 /* vperm */, SystemZ::VPERM, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9522 /* vpk */, SystemZ::VPK, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9526 /* vpkf */, SystemZ::VPKF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9531 /* vpkg */, SystemZ::VPKG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9536 /* vpkh */, SystemZ::VPKH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9541 /* vpkls */, SystemZ::VPKLS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9547 /* vpklsf */, SystemZ::VPKLSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9554 /* vpklsfs */, SystemZ::VPKLSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9562 /* vpklsg */, SystemZ::VPKLSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9569 /* vpklsgs */, SystemZ::VPKLSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9577 /* vpklsh */, SystemZ::VPKLSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9584 /* vpklshs */, SystemZ::VPKLSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9592 /* vpks */, SystemZ::VPKS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9597 /* vpksf */, SystemZ::VPKSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9603 /* vpksfs */, SystemZ::VPKSFS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9610 /* vpksg */, SystemZ::VPKSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9616 /* vpksgs */, SystemZ::VPKSGS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9623 /* vpksh */, SystemZ::VPKSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9629 /* vpkshs */, SystemZ::VPKSHS, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9636 /* vpopct */, SystemZ::VPOPCT, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9643 /* vrep */, SystemZ::VREP, Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 9648 /* vrepb */, SystemZ::VREPB, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 9654 /* vrepf */, SystemZ::VREPF, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 9660 /* vrepg */, SystemZ::VREPG, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 9666 /* vreph */, SystemZ::VREPH, Convert__VR1281_0__VR1281_1__U16Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 9672 /* vrepi */, SystemZ::VREPI, Convert__VR1281_0__S16Imm1_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 9678 /* vrepib */, SystemZ::VREPIB, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 9685 /* vrepif */, SystemZ::VREPIF, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 9692 /* vrepig */, SystemZ::VREPIG, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 9699 /* vrepih */, SystemZ::VREPIH, Convert__VR1281_0__S16Imm1_1, Feature_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 9706 /* vs */, SystemZ::VS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9709 /* vsb */, SystemZ::VSB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9713 /* vsbcbi */, SystemZ::VSBCBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9720 /* vsbcbiq */, SystemZ::VSBCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9728 /* vsbi */, SystemZ::VSBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9733 /* vsbiq */, SystemZ::VSBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9739 /* vscbi */, SystemZ::VSCBI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9745 /* vscbib */, SystemZ::VSCBIB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9752 /* vscbif */, SystemZ::VSCBIF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9759 /* vscbig */, SystemZ::VSCBIG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9766 /* vscbih */, SystemZ::VSCBIH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9773 /* vscbiq */, SystemZ::VSCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9780 /* vscef */, SystemZ::VSCEF, Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 9786 /* vsceg */, SystemZ::VSCEG, Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 9792 /* vseg */, SystemZ::VSEG, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9797 /* vsegb */, SystemZ::VSEGB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9803 /* vsegf */, SystemZ::VSEGF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9809 /* vsegh */, SystemZ::VSEGH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 9815 /* vsel */, SystemZ::VSEL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9820 /* vsf */, SystemZ::VSF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9824 /* vsg */, SystemZ::VSG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9828 /* vsh */, SystemZ::VSH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9832 /* vsl */, SystemZ::VSL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9836 /* vslb */, SystemZ::VSLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9841 /* vsldb */, SystemZ::VSLDB, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 9847 /* vsq */, SystemZ::VSQ, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9851 /* vsra */, SystemZ::VSRA, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9856 /* vsrab */, SystemZ::VSRAB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9862 /* vsrl */, SystemZ::VSRL, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9867 /* vsrlb */, SystemZ::VSRLB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9873 /* vst */, SystemZ::VST, Convert__VR1281_0__BDXAddr64Disp123_1, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 9877 /* vsteb */, SystemZ::VSTEB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 9883 /* vstef */, SystemZ::VSTEF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 9889 /* vsteg */, SystemZ::VSTEG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 9895 /* vsteh */, SystemZ::VSTEH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 9901 /* vstl */, SystemZ::VSTL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 9906 /* vstm */, SystemZ::VSTM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 9911 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9911 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 9917 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9917 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9924 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9924 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9932 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9932 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9939 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9939 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9947 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9947 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9954 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9954 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9962 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9962 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9970 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9970 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9979 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9979 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9987 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9987 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 9996 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 9996 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10004 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10004 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10013 /* vsum */, SystemZ::VSUM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10018 /* vsumb */, SystemZ::VSUMB, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10024 /* vsumg */, SystemZ::VSUMG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10030 /* vsumgf */, SystemZ::VSUMGF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10037 /* vsumgh */, SystemZ::VSUMGH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10044 /* vsumh */, SystemZ::VSUMH, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10050 /* vsumq */, SystemZ::VSUMQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10056 /* vsumqf */, SystemZ::VSUMQF, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10063 /* vsumqg */, SystemZ::VSUMQG, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10070 /* vtm */, SystemZ::VTM, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10074 /* vuph */, SystemZ::VUPH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10079 /* vuphb */, SystemZ::VUPHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10085 /* vuphf */, SystemZ::VUPHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10091 /* vuphh */, SystemZ::VUPHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10097 /* vupl */, SystemZ::VUPL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10102 /* vuplb */, SystemZ::VUPLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10108 /* vuplf */, SystemZ::VUPLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10114 /* vuplh */, SystemZ::VUPLH, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10120 /* vuplhb */, SystemZ::VUPLHB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10127 /* vuplhf */, SystemZ::VUPLHF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10134 /* vuplhh */, SystemZ::VUPLHH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10141 /* vuplhw */, SystemZ::VUPLHW, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10148 /* vupll */, SystemZ::VUPLL, Convert__VR1281_0__VR1281_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10154 /* vupllb */, SystemZ::VUPLLB, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10161 /* vupllf */, SystemZ::VUPLLF, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10168 /* vupllh */, SystemZ::VUPLLH, Convert__VR1281_0__VR1281_1, Feature_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10175 /* vx */, SystemZ::VX, Convert__VR1281_0__VR1281_1__VR1281_2, Feature_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10178 /* vzero */, SystemZ::VZERO, Convert__VR1281_0, Feature_FeatureVector, { MCK_VR128 }, },
  { 10184 /* wcdgb */, SystemZ::WCDGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10190 /* wcdlgb */, SystemZ::WCDLGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10197 /* wcgdb */, SystemZ::WCGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10203 /* wclgdb */, SystemZ::WCLGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10210 /* wfadb */, SystemZ::WFADB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10216 /* wfc */, SystemZ::WFC, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10220 /* wfcdb */, SystemZ::WFCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 10226 /* wfcedb */, SystemZ::WFCEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10233 /* wfcedbs */, SystemZ::WFCEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10241 /* wfchdb */, SystemZ::WFCHDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10248 /* wfchdbs */, SystemZ::WFCHDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10256 /* wfchedb */, SystemZ::WFCHEDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10264 /* wfchedbs */, SystemZ::WFCHEDBS, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10273 /* wfddb */, SystemZ::WFDDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10279 /* wfidb */, SystemZ::WFIDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10285 /* wfk */, SystemZ::WFK, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10289 /* wfkdb */, SystemZ::WFKDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 10295 /* wflcdb */, SystemZ::WFLCDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 10302 /* wflndb */, SystemZ::WFLNDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 10309 /* wflpdb */, SystemZ::WFLPDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 10316 /* wfmadb */, SystemZ::WFMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10323 /* wfmdb */, SystemZ::WFMDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10329 /* wfmsdb */, SystemZ::WFMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10336 /* wfpsodb */, SystemZ::WFPSODB, Convert__VR641_0__VR641_1__U4Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 10344 /* wfsdb */, SystemZ::WFSDB, Convert__VR641_0__VR641_1__VR641_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 10350 /* wfsqdb */, SystemZ::WFSQDB, Convert__VR641_0__VR641_1, Feature_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 10357 /* wftcidb */, SystemZ::WFTCIDB, Convert__VR641_0__VR641_1__U12Imm1_2, Feature_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U12Imm }, },
  { 10365 /* wldeb */, SystemZ::WLDEB, Convert__VR641_0__VR321_1, Feature_FeatureVector, { MCK_VR64, MCK_VR32 }, },
  { 10371 /* wledb */, SystemZ::WLEDB, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, Feature_FeatureVector, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 10377 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 10379 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10382 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 10385 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 10389 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 10394 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 10397 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0__U32Imm1_1, 0, { MCK_GRH32, MCK_U32Imm }, },
  { 10402 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 10407 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 10411 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 10414 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 10418 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
};

bool SystemZAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

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
    uint16_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[2521] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 46 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 52 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 56 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 61 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 66 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 73 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 78 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 78 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 82 /* aih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 86 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 86 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 89 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 89 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 93 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 93 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 98 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 104 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 109 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 114 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 114 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 118 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 118 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 123 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 129 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 129 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 135 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 143 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 148 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDistinctOps, 154 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 161 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 165 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 170 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 170 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 174 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 177 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 181 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 185 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 190 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 190 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 193 /* b */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 195 /* bal */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 195 /* bal */, MCK_GR64, 1 /* 0 */ },
  { 0, 199 /* balr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 199 /* balr */, MCK_GR64, 1 /* 0 */ },
  { 0, 204 /* bas */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 204 /* bas */, MCK_GR64, 1 /* 0 */ },
  { 0, 208 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 208 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 213 /* bassm */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 213 /* bassm */, MCK_GR64, 1 /* 0 */ },
  { 0, 219 /* bc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 222 /* bcr */, MCK_GR64, 2 /* 1 */ },
  { 0, 226 /* bct */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 226 /* bct */, MCK_GR32, 1 /* 0 */ },
  { 0, 230 /* bctg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 230 /* bctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 235 /* bctgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 241 /* bctr */, MCK_GR32, 1 /* 0 */ },
  { 0, 241 /* bctr */, MCK_GR64, 2 /* 1 */ },
  { 0, 246 /* be */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 249 /* ber */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 253 /* bh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 256 /* bhe */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 260 /* bher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 265 /* bhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 269 /* bl */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 272 /* ble */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 276 /* bler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 281 /* blh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 285 /* blhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 290 /* blr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 294 /* bm */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 297 /* bmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 301 /* bne */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 305 /* bner */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 310 /* bnh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 314 /* bnhe */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 319 /* bnher */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 325 /* bnhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 330 /* bnl */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 334 /* bnle */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 339 /* bnler */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 345 /* bnlh */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 350 /* bnlhr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 356 /* bnlr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 361 /* bnm */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 365 /* bnmr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 370 /* bno */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 374 /* bnor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 379 /* bnp */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 383 /* bnpr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 388 /* bnz */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 392 /* bnzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 397 /* bo */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 400 /* bor */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 404 /* bp */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureExecutionHint, 407 /* bpp */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureExecutionHint, 407 /* bpp */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 411 /* bpr */, MCK_ADDR64, 1 /* 0 */ },
  { Feature_FeatureExecutionHint, 415 /* bprp */, MCK_PCRel12, 2 /* 1 */ },
  { Feature_FeatureExecutionHint, 415 /* bprp */, MCK_PCRel24, 4 /* 2 */ },
  { 0, 420 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 423 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 423 /* bras */, MCK_PCRelTLS16, 2 /* 1 */ },
  { 0, 428 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 428 /* brasl */, MCK_PCRelTLS32, 2 /* 1 */ },
  { 0, 434 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 438 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 443 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 443 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 448 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 448 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { Feature_FeatureHighWord, 454 /* brcth */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 454 /* brcth */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 460 /* brxh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 460 /* brxh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 465 /* brxhg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 465 /* brxhg */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 471 /* brxle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 471 /* brxle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 477 /* brxlg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 477 /* brxlg */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 483 /* bsm */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 483 /* bsm */, MCK_GR64, 1 /* 0 */ },
  { 0, 487 /* bxh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 487 /* bxh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 491 /* bxhg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 491 /* bxhg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 496 /* bxle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 496 /* bxle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 501 /* bxleg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 501 /* bxleg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 507 /* bz */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 510 /* bzr */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 514 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 514 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 516 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 516 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 520 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 525 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 525 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 531 /* cdfbra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 531 /* cdfbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 538 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 538 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 544 /* cdgbra */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 544 /* cdgbra */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 551 /* cdlfbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 551 /* cdlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 558 /* cdlgbr */, MCK_FP64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 558 /* cdlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 565 /* cds */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 565 /* cds */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 569 /* cdsg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 569 /* cdsg */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 574 /* cdsy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 574 /* cdsy */, MCK_GR128, 3 /* 0, 1 */ },
  { 0, 579 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 579 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 583 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 588 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 588 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 594 /* cefbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 594 /* cefbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 601 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 601 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 607 /* cegbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 607 /* cegbra */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 614 /* celfbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 614 /* celfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 621 /* celgbr */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 621 /* celgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 628 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 628 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 634 /* cfdbra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 634 /* cfdbra */, MCK_GR32, 1 /* 0 */ },
  { 0, 641 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 641 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 647 /* cfebra */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 647 /* cfebra */, MCK_GR32, 1 /* 0 */ },
  { 0, 654 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 658 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 658 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 664 /* cfxbra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 664 /* cfxbra */, MCK_GR32, 1 /* 0 */ },
  { 0, 671 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 671 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 674 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 674 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 680 /* cgdbra */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 680 /* cgdbra */, MCK_GR64, 1 /* 0 */ },
  { 0, 687 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 687 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 693 /* cgebra */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 693 /* cgebra */, MCK_GR64, 1 /* 0 */ },
  { 0, 700 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 700 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 704 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 709 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 709 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 714 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 714 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 720 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 720 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 724 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 729 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 729 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 735 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 741 /* cgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 741 /* cgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 746 /* cgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 746 /* cgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 752 /* cgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 752 /* cgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 758 /* cgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 758 /* cgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 765 /* cgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 765 /* cgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 771 /* cgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 771 /* cgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 778 /* cgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 778 /* cgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 785 /* cgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 785 /* cgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 792 /* cgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 792 /* cgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 799 /* cgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 799 /* cgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 807 /* cgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 807 /* cgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 814 /* cgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 814 /* cgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 822 /* cgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 822 /* cgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 830 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 830 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 835 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 835 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 841 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 841 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 847 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 847 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 854 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 854 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 860 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 860 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 867 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 867 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 874 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 874 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 881 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 881 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 888 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 888 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 896 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 896 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 903 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 903 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 911 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 911 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 919 /* cgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 924 /* cgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 930 /* cgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 936 /* cgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 943 /* cgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 949 /* cgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 956 /* cgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 963 /* cgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 970 /* cgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 977 /* cgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 985 /* cgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 992 /* cgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1000 /* cgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1008 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1012 /* cgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1012 /* cgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1017 /* cgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1017 /* cgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1023 /* cgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1023 /* cgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1029 /* cgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1029 /* cgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1036 /* cgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1036 /* cgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1042 /* cgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1042 /* cgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1049 /* cgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1049 /* cgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1056 /* cgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1056 /* cgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1063 /* cgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1063 /* cgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1070 /* cgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1070 /* cgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1078 /* cgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1078 /* cgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1085 /* cgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1085 /* cgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1093 /* cgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1093 /* cgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1101 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1101 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1106 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1106 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1112 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1112 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1118 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1118 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1125 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1125 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1131 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1131 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1138 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1138 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1145 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1145 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1152 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1152 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1159 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1159 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1167 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1167 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1174 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1174 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1182 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1182 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1190 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1190 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1195 /* cgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1200 /* cgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1206 /* cgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1212 /* cgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1219 /* cgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1225 /* cgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1232 /* cgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1239 /* cgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1246 /* cgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1253 /* cgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1261 /* cgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1268 /* cgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1276 /* cgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1284 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 1284 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1290 /* cgxbra */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1290 /* cgxbra */, MCK_GR64, 1 /* 0 */ },
  { 0, 1297 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1297 /* ch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1300 /* chf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 1300 /* chf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1304 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1310 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1314 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1314 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1319 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1324 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1324 /* chy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1328 /* cib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1328 /* cib */, MCK_GR32, 1 /* 0 */ },
  { 0, 1332 /* cibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1332 /* cibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1337 /* cibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1337 /* cibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1342 /* cibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1342 /* cibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1348 /* cibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1348 /* cibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1353 /* cible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1353 /* cible */, MCK_GR32, 1 /* 0 */ },
  { 0, 1359 /* ciblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1359 /* ciblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1365 /* cibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1365 /* cibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1371 /* cibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1371 /* cibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1377 /* cibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1377 /* cibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1384 /* cibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1384 /* cibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1390 /* cibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1390 /* cibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1397 /* cibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1397 /* cibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 1404 /* cih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 1408 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 1408 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1412 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 1412 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1417 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1417 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1422 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1422 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1428 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1428 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1433 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1433 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1439 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1439 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1445 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1445 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1451 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1451 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1457 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1457 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1464 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1464 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1470 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1470 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1477 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1477 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1484 /* cit */, MCK_GR32, 1 /* 0 */ },
  { 0, 1488 /* cite */, MCK_GR32, 1 /* 0 */ },
  { 0, 1493 /* cith */, MCK_GR32, 1 /* 0 */ },
  { 0, 1498 /* cithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1504 /* citl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1509 /* citle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1515 /* citlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1521 /* citne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1527 /* citnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1533 /* citnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1540 /* citnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1546 /* citnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1553 /* citnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1560 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1560 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1563 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 1563 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1567 /* clfdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1567 /* clfdbr */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1574 /* clfebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1574 /* clfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 1581 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1588 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1593 /* clfit */, MCK_GR32, 1 /* 0 */ },
  { 0, 1599 /* clfite */, MCK_GR32, 1 /* 0 */ },
  { 0, 1606 /* clfith */, MCK_GR32, 1 /* 0 */ },
  { 0, 1613 /* clfithe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1621 /* clfitl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1628 /* clfitle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1636 /* clfitlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1644 /* clfitne */, MCK_GR32, 1 /* 0 */ },
  { 0, 1652 /* clfitnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1660 /* clfitnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 1669 /* clfitnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1677 /* clfitnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 1686 /* clfitnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1695 /* clfxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1695 /* clfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 1702 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1702 /* clg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1706 /* clgdbr */, MCK_FP64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1706 /* clgdbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 1713 /* clgebr */, MCK_FP32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 1713 /* clgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1720 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1720 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1725 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1731 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1731 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1737 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1737 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1744 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1744 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1751 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1758 /* clgib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 1758 /* clgib */, MCK_GR64, 1 /* 0 */ },
  { 0, 1764 /* clgibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1764 /* clgibe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1771 /* clgibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1771 /* clgibh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1778 /* clgibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1778 /* clgibhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1786 /* clgibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1786 /* clgibl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1793 /* clgible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1793 /* clgible */, MCK_GR64, 1 /* 0 */ },
  { 0, 1801 /* clgiblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1801 /* clgiblh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1809 /* clgibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1809 /* clgibne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1817 /* clgibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1817 /* clgibnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1825 /* clgibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1825 /* clgibnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1834 /* clgibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1834 /* clgibnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1842 /* clgibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1842 /* clgibnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1851 /* clgibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 1851 /* clgibnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1860 /* clgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 1860 /* clgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 1866 /* clgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 1866 /* clgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1873 /* clgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1873 /* clgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1880 /* clgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1880 /* clgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1888 /* clgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1888 /* clgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1895 /* clgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1895 /* clgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1903 /* clgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1903 /* clgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1911 /* clgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 1911 /* clgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1919 /* clgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1919 /* clgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1927 /* clgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1927 /* clgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1936 /* clgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1936 /* clgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1944 /* clgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 1944 /* clgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1953 /* clgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1953 /* clgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 1962 /* clgit */, MCK_GR64, 1 /* 0 */ },
  { 0, 1968 /* clgite */, MCK_GR64, 1 /* 0 */ },
  { 0, 1975 /* clgith */, MCK_GR64, 1 /* 0 */ },
  { 0, 1982 /* clgithe */, MCK_GR64, 1 /* 0 */ },
  { 0, 1990 /* clgitl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1997 /* clgitle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2005 /* clgitlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2013 /* clgitne */, MCK_GR64, 1 /* 0 */ },
  { 0, 2021 /* clgitnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2029 /* clgitnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 2038 /* clgitnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2046 /* clgitnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 2055 /* clgitnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2064 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2069 /* clgrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2069 /* clgrb */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2075 /* clgrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2075 /* clgrbe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2082 /* clgrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2082 /* clgrbh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2089 /* clgrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2089 /* clgrbhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2097 /* clgrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2097 /* clgrbl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2104 /* clgrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2104 /* clgrble */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2112 /* clgrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2112 /* clgrblh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2120 /* clgrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2120 /* clgrbne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2128 /* clgrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2128 /* clgrbnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2136 /* clgrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2136 /* clgrbnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2145 /* clgrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2145 /* clgrbnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2153 /* clgrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2153 /* clgrbnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2162 /* clgrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2162 /* clgrbnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2171 /* clgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2171 /* clgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2177 /* clgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2177 /* clgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2184 /* clgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2184 /* clgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2191 /* clgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2191 /* clgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2199 /* clgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2199 /* clgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2206 /* clgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2206 /* clgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2214 /* clgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2214 /* clgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2222 /* clgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2222 /* clgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2230 /* clgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2230 /* clgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2238 /* clgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2238 /* clgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2247 /* clgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2247 /* clgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2255 /* clgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2255 /* clgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2264 /* clgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2264 /* clgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2273 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2273 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2279 /* clgrt */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2285 /* clgrte */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2292 /* clgrth */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2299 /* clgrthe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2307 /* clgrtl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2314 /* clgrtle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2322 /* clgrtlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2330 /* clgrtne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2338 /* clgrtnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2346 /* clgrtnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2355 /* clgrtnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2363 /* clgrtnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2372 /* clgrtnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2381 /* clgt */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureMiscellaneousExtensions, 2381 /* clgt */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2386 /* clgte */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2386 /* clgte */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2392 /* clgth */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2392 /* clgth */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2398 /* clgthe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2398 /* clgthe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2405 /* clgtl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2405 /* clgtl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2411 /* clgtle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2411 /* clgtle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2418 /* clgtlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2418 /* clgtlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2425 /* clgtne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2425 /* clgtne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2432 /* clgtnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2432 /* clgtnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2439 /* clgtnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2439 /* clgtnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2447 /* clgtnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2447 /* clgtnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2454 /* clgtnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2454 /* clgtnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2462 /* clgtnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2462 /* clgtnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 2470 /* clgxbr */, MCK_FP128, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 2470 /* clgxbr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2477 /* clhf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 2477 /* clhf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2482 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2489 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2489 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2495 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2499 /* clib */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2499 /* clib */, MCK_GR32, 1 /* 0 */ },
  { 0, 2504 /* clibe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2504 /* clibe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2510 /* clibh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2510 /* clibh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2516 /* clibhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2516 /* clibhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2523 /* clibl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2523 /* clibl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2529 /* clible */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2529 /* clible */, MCK_GR32, 1 /* 0 */ },
  { 0, 2536 /* cliblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2536 /* cliblh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2543 /* clibne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2543 /* clibne */, MCK_GR32, 1 /* 0 */ },
  { 0, 2550 /* clibnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2550 /* clibnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2557 /* clibnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2557 /* clibnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2565 /* clibnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2565 /* clibnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2572 /* clibnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2572 /* clibnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2580 /* clibnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2580 /* clibnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 2588 /* clih */, MCK_GRH32, 1 /* 0 */ },
  { 0, 2593 /* clij */, MCK_GR32, 1 /* 0 */ },
  { 0, 2593 /* clij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2598 /* clije */, MCK_GR32, 1 /* 0 */ },
  { 0, 2598 /* clije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2604 /* clijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2604 /* clijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2610 /* clijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2610 /* clijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2617 /* clijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2617 /* clijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2623 /* clijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2623 /* clijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2630 /* clijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2630 /* clijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2637 /* clijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 2637 /* clijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2644 /* clijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2644 /* clijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2651 /* clijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 2651 /* clijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2659 /* clijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2659 /* clijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2666 /* clijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 2666 /* clijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2674 /* clijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2674 /* clijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2682 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2687 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2691 /* clrb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 2691 /* clrb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2696 /* clrbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2696 /* clrbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2702 /* clrbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2702 /* clrbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2708 /* clrbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2708 /* clrbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2715 /* clrbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2715 /* clrbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2721 /* clrble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2721 /* clrble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2728 /* clrblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2728 /* clrblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2735 /* clrbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2735 /* clrbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2742 /* clrbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2742 /* clrbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2749 /* clrbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2749 /* clrbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2757 /* clrbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2757 /* clrbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2764 /* clrbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2764 /* clrbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2772 /* clrbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 2772 /* clrbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2780 /* clrj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2780 /* clrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 2785 /* clrje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2785 /* clrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2791 /* clrjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2791 /* clrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2797 /* clrjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2797 /* clrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2804 /* clrjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2804 /* clrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2810 /* clrjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2810 /* clrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2817 /* clrjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2817 /* clrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2824 /* clrjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2824 /* clrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2831 /* clrjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2831 /* clrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2838 /* clrjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2838 /* clrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2846 /* clrjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2846 /* clrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2853 /* clrjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2853 /* clrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2861 /* clrjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2861 /* clrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 2869 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2869 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2874 /* clrt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2879 /* clrte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2885 /* clrth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2891 /* clrthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2898 /* clrtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2904 /* clrtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2911 /* clrtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2918 /* clrtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2925 /* clrtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2932 /* clrtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2940 /* clrtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2947 /* clrtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2955 /* clrtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2963 /* clst */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2968 /* clt */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureMiscellaneousExtensions, 2968 /* clt */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2972 /* clte */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2972 /* clte */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2977 /* clth */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2977 /* clth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2982 /* clthe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2982 /* clthe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2988 /* cltl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2988 /* cltl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2993 /* cltle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2993 /* cltle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 2999 /* cltlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 2999 /* cltlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3005 /* cltne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3005 /* cltne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3011 /* cltnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3011 /* cltnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3017 /* cltnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3017 /* cltnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3024 /* cltnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3024 /* cltnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3030 /* cltnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3030 /* cltnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureMiscellaneousExtensions, 3037 /* cltnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 3037 /* cltnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3044 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3044 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 3048 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 3054 /* cpya */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 3059 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3062 /* crb */, MCK_BDAddr64Disp12, 8 /* 3 */ },
  { 0, 3062 /* crb */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3066 /* crbe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3066 /* crbe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3071 /* crbh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3071 /* crbh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3076 /* crbhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3076 /* crbhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3082 /* crbl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3082 /* crbl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3087 /* crble */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3087 /* crble */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3093 /* crblh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3093 /* crblh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3099 /* crbne */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3099 /* crbne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3105 /* crbnh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3105 /* crbnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3111 /* crbnhe */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3111 /* crbnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3118 /* crbnl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3118 /* crbnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3124 /* crbnle */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3124 /* crbnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3131 /* crbnlh */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3131 /* crbnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3138 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3138 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 3142 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3142 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3147 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3147 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3152 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3152 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3158 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3158 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3163 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3163 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3169 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3169 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3175 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3175 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3181 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3181 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3187 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3187 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3194 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3194 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3200 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3200 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3207 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3207 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 3214 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 3214 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3218 /* crt */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3222 /* crte */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3227 /* crth */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3232 /* crthe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3238 /* crtl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3243 /* crtle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3249 /* crtlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3255 /* crtne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3261 /* crtnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3267 /* crtnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3274 /* crtnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3280 /* crtnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3287 /* crtnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3294 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3294 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3297 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3297 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3301 /* csst */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 3301 /* csst */, MCK_GR64, 4 /* 2 */ },
  { 0, 3306 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3306 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3310 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3315 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3315 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3321 /* cxfbra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3321 /* cxfbra */, MCK_GR32, 4 /* 2 */ },
  { 0, 3328 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 3328 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3334 /* cxgbra */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3334 /* cxgbra */, MCK_GR64, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 3341 /* cxlfbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3341 /* cxlfbr */, MCK_GR32, 4 /* 2 */ },
  { Feature_FeatureFPExtension, 3348 /* cxlgbr */, MCK_FP128, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3348 /* cxlgbr */, MCK_GR64, 4 /* 2 */ },
  { 0, 3355 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3355 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3358 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3358 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3362 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3367 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3367 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 3371 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3376 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3376 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 3379 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3379 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 3383 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3383 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3388 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3388 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3392 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3392 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 3396 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3396 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 3401 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3401 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3407 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3407 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3412 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3417 /* ear */, MCK_AR32, 2 /* 1 */ },
  { 0, 3417 /* ear */, MCK_GR32, 1 /* 0 */ },
  { 0, 3421 /* ectg */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 3421 /* ectg */, MCK_GR64, 4 /* 2 */ },
  { 0, 3426 /* efpc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 3431 /* etnd */, MCK_GR32, 1 /* 0 */ },
  { 0, 3436 /* ex */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3436 /* ex */, MCK_GR64, 1 /* 0 */ },
  { 0, 3439 /* exrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3439 /* exrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 3444 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 3450 /* fidbra */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 3457 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 3463 /* fiebra */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 3470 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { Feature_FeatureFPExtension, 3476 /* fixbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 3483 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 3483 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3489 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3489 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 3492 /* icm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3492 /* icm */, MCK_GR32, 1 /* 0 */ },
  { 0, 3496 /* icmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3496 /* icmh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3501 /* icmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 3501 /* icmy */, MCK_GR32, 1 /* 0 */ },
  { 0, 3506 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3506 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 3510 /* iihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3515 /* iihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3520 /* iihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3525 /* iilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 3530 /* iilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 3535 /* iill */, MCK_GR32, 1 /* 0 */ },
  { 0, 3540 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 3544 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3546 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3549 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3552 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3556 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3560 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3565 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3569 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3574 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3579 /* jgm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3583 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3588 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3593 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3599 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3604 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3610 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3616 /* jgnm */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3621 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3626 /* jgnp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3631 /* jgnz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3636 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3640 /* jgp */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3644 /* jgz */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 3648 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3651 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3655 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3658 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3662 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3666 /* jm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3669 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3673 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3677 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3682 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3686 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3691 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3696 /* jnm */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3700 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3704 /* jnp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3708 /* jnz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3712 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3715 /* jp */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3718 /* jz */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 3721 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3721 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 3723 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3723 /* la */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 3726 /* laa */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3726 /* laa */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3730 /* laag */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3730 /* laag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3735 /* laal */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3735 /* laal */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3740 /* laalg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3740 /* laalg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3746 /* lae */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3746 /* lae */, MCK_GR64, 1 /* 0 */ },
  { 0, 3750 /* laey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3750 /* laey */, MCK_GR64, 1 /* 0 */ },
  { 0, 3755 /* lam */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 3755 /* lam */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 3759 /* lamy */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 3759 /* lamy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3764 /* lan */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3764 /* lan */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3768 /* lang */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3768 /* lang */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3773 /* lao */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3773 /* lao */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3777 /* laog */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3777 /* laog */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3782 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3782 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 3787 /* lat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 3787 /* lat */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 3791 /* lax */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3791 /* lax */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 3795 /* laxg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { Feature_FeatureInterlockedAccess1, 3795 /* laxg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3800 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3800 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 3804 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3804 /* lb */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3807 /* lbh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3807 /* lbh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3811 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 3815 /* lcbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 3815 /* lcbb */, MCK_GR32, 1 /* 0 */ },
  { 0, 3820 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3826 /* lcdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3832 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3838 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3838 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3844 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3849 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 3853 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 3859 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3859 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 3862 /* lde */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3862 /* lde */, MCK_FP32, 1 /* 0 */ },
  { 0, 3866 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3866 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 3871 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 3871 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 3877 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 3877 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 3882 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 3886 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 3892 /* ldxbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 3899 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3899 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 3903 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 3903 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 3906 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 3906 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { Feature_FeatureFPExtension, 3912 /* ledbra */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 3912 /* ledbra */, MCK_FP64, 4 /* 2 */ },
  { 0, 3919 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 3923 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureFPExtension, 3929 /* lexbra */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 3936 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3936 /* ley */, MCK_FP32, 1 /* 0 */ },
  { 0, 3940 /* lfas */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureHighWord, 3945 /* lfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 3945 /* lfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 3949 /* lfhat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 3949 /* lfhat */, MCK_GRH32, 1 /* 0 */ },
  { 0, 3955 /* lfpc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 3960 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3960 /* lg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 3963 /* lgat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 3963 /* lgat */, MCK_GR64, 1 /* 0 */ },
  { 0, 3968 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3968 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 3972 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 3977 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 3977 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3982 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 3982 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 3986 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 3991 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 3991 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 3996 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 3996 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4002 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4002 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4006 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 4011 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4016 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4016 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4022 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4026 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4026 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4031 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 4031 /* lh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4034 /* lhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4034 /* lhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4038 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 4042 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4046 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 4046 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4051 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4051 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 4055 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4055 /* llc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4059 /* llch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4059 /* llch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4064 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4069 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4069 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 4074 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4080 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4080 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 4085 /* llgfat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4085 /* llgfat */, MCK_GR64, 1 /* 0 */ },
  { 0, 4092 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4092 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4098 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4098 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4105 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4105 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4110 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4116 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4116 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4123 /* llgt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4123 /* llgt */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndTrap, 4128 /* llgtat */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndTrap, 4128 /* llgtat */, MCK_GR64, 1 /* 0 */ },
  { 0, 4135 /* llgtr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4141 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 4141 /* llh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 4145 /* llhh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 4145 /* llhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 4150 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4155 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 4155 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 4161 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4167 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4173 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 4179 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4185 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 4191 /* llill */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 4197 /* llzrgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 4197 /* llzrgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 4204 /* lm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 4204 /* lm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4207 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4207 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4211 /* lmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4211 /* lmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 4215 /* lmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 4215 /* lmy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4219 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4225 /* lndfr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 4231 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 4237 /* lngfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 4237 /* lngfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 4243 /* lngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 4248 /* lnr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 4252 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4258 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4258 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4262 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4262 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4267 /* locfh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4267 /* locfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4273 /* locfhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4273 /* locfhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4280 /* locfhh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4280 /* locfhh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4287 /* locfhhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4287 /* locfhhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4295 /* locfhl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4295 /* locfhl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4302 /* locfhle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4302 /* locfhle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4310 /* locfhlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4310 /* locfhlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4318 /* locfhm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4318 /* locfhm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4325 /* locfhne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4325 /* locfhne */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4333 /* locfhnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4333 /* locfhnh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4341 /* locfhnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4341 /* locfhnhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4350 /* locfhnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4350 /* locfhnl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4358 /* locfhnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4358 /* locfhnle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4367 /* locfhnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4367 /* locfhnlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4376 /* locfhnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4376 /* locfhnm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4384 /* locfhno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4384 /* locfhno */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4392 /* locfhnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4392 /* locfhnp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4400 /* locfhnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4400 /* locfhnz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4408 /* locfho */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4408 /* locfho */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4415 /* locfhp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4415 /* locfhp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4422 /* locfhr */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4429 /* locfhre */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4437 /* locfhrh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4445 /* locfhrhe */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4454 /* locfhrl */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4462 /* locfhrle */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4471 /* locfhrlh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4480 /* locfhrm */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4488 /* locfhrne */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4497 /* locfhrnh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4506 /* locfhrnhe */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4516 /* locfhrnl */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4525 /* locfhrnle */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4535 /* locfhrnlh */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4545 /* locfhrnm */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4554 /* locfhrno */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4563 /* locfhrnp */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4572 /* locfhrnz */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4581 /* locfhro */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4589 /* locfhrp */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4597 /* locfhrz */, MCK_GRH32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4605 /* locfhz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 4605 /* locfhz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4612 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4612 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4617 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4617 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4623 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4623 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4629 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4629 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4636 /* locghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4643 /* locghie */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4651 /* locghih */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4659 /* locghihe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4668 /* locghil */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4676 /* locghile */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4685 /* locghilh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4694 /* locghim */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4702 /* locghine */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4711 /* locghinh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4720 /* locghinhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4730 /* locghinl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4739 /* locghinle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4749 /* locghinlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4759 /* locghinm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4768 /* locghino */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4777 /* locghinp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4786 /* locghinz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4795 /* locghio */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4803 /* locghip */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 4811 /* locghiz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4819 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4819 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4825 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4825 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4832 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4832 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4839 /* locgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4839 /* locgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4845 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4845 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4852 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4852 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4859 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4859 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4867 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4867 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4874 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4874 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4882 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4882 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4890 /* locgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4890 /* locgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4897 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4897 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4904 /* locgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4904 /* locgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4911 /* locgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4911 /* locgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4918 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4918 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4924 /* locgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4924 /* locgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 4930 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4936 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4943 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4950 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4958 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4965 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4973 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4981 /* locgrm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4988 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 4996 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5004 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5013 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5021 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5030 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5039 /* locgrnm */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5047 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5055 /* locgrnp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5063 /* locgrnz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5071 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5078 /* locgrp */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5085 /* locgrz */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5092 /* locgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5092 /* locgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5098 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5098 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5103 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5103 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5109 /* lochhi */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5116 /* lochhie */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5124 /* lochhih */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5132 /* lochhihe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5141 /* lochhil */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5149 /* lochhile */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5158 /* lochhilh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5167 /* lochhim */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5175 /* lochhine */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5184 /* lochhinh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5193 /* lochhinhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5203 /* lochhinl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5212 /* lochhinle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5222 /* lochhinlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5232 /* lochhinm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5241 /* lochhino */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5250 /* lochhinp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5259 /* lochhinz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5268 /* lochhio */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5276 /* lochhip */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5284 /* lochhiz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5292 /* lochi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5298 /* lochie */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5305 /* lochih */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5312 /* lochihe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5320 /* lochil */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5327 /* lochile */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5335 /* lochilh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5343 /* lochim */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5350 /* lochine */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5358 /* lochinh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5366 /* lochinhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5375 /* lochinl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5383 /* lochinle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5392 /* lochinlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5401 /* lochinm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5409 /* lochino */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5417 /* lochinp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5425 /* lochinz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5433 /* lochio */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5440 /* lochip */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 5447 /* lochiz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5454 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5454 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5459 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5459 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5465 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5465 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5471 /* locm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5471 /* locm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5476 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5476 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5482 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5482 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5488 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5488 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5495 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5495 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5501 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5501 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5508 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5508 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5515 /* locnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5515 /* locnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5521 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5521 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5527 /* locnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5527 /* locnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5533 /* locnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5533 /* locnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5539 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5539 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5544 /* locp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5544 /* locp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 5549 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5554 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5560 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5566 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5573 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5579 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5586 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5593 /* locrm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5599 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5606 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5613 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5621 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5628 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5636 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5644 /* locrnm */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5651 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5658 /* locrnp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5665 /* locrnz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5672 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5678 /* locrp */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5684 /* locrz */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5690 /* locz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 5690 /* locz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureInterlockedAccess1, 5695 /* lpd */, MCK_BDAddr64Disp12, 6 /* 1, 2 */ },
  { Feature_FeatureInterlockedAccess1, 5695 /* lpd */, MCK_GR128, 1 /* 0 */ },
  { 0, 5699 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5705 /* lpdfr */, MCK_FP64, 3 /* 0, 1 */ },
  { Feature_FeatureInterlockedAccess1, 5711 /* lpdg */, MCK_BDAddr64Disp12, 6 /* 1, 2 */ },
  { Feature_FeatureInterlockedAccess1, 5711 /* lpdg */, MCK_GR128, 1 /* 0 */ },
  { 0, 5716 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5722 /* lpgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5722 /* lpgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5728 /* lpgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5733 /* lpq */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5733 /* lpq */, MCK_GR128, 1 /* 0 */ },
  { 0, 5737 /* lpr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5741 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 5747 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5750 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 5750 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 5754 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5754 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 5758 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5758 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5763 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5769 /* lrvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5769 /* lrvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5774 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5779 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5779 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 5782 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5788 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5794 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5794 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5798 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5798 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5803 /* ltgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 5803 /* ltgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 5809 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 5814 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 5818 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 5824 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5824 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 5829 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 5829 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 5835 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5835 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 5840 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 5840 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 5846 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 5850 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5850 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 5853 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 5858 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 5863 /* lzrf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 5863 /* lzrf */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 5868 /* lzrg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadAndZeroRightmostByte, 5868 /* lzrg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5873 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 5878 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 5878 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5883 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 5889 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 5889 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5894 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 5900 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5900 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 5904 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5909 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5909 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 5914 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 5914 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 5920 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5920 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 5925 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5931 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 5936 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5936 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 5939 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 5943 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5943 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 5947 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5947 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 5951 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 5951 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 5956 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 5956 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 5959 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 5959 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 5964 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 5970 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 5970 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 5975 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 5981 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 5986 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5986 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 5990 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 5990 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 5995 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 6001 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6001 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 6007 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6012 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6016 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6016 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 6020 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 6020 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 6024 /* mvck */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 6024 /* mvck */, MCK_BDRAddr64Disp12, 1 /* 0 */ },
  { 0, 6024 /* mvck */, MCK_GR64, 4 /* 2 */ },
  { 0, 6029 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6035 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6041 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6046 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6050 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 6055 /* mvst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6060 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6065 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6065 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 6070 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 6070 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 6076 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6076 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 6078 /* nc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 6078 /* nc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 6081 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6081 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 6084 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6088 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 6093 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6101 /* nihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6106 /* nihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6111 /* nihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6116 /* nilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 6121 /* nilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 6126 /* nill */, MCK_GR32, 1 /* 0 */ },
  { 0, 6131 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 6135 /* nop */, MCK_BDXAddr64Disp12, 1 /* 0 */ },
  { 0, 6139 /* nopr */, MCK_GR64, 1 /* 0 */ },
  { 0, 6144 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6147 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { Feature_FeatureTransactionalExecution, 6151 /* ntstg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureTransactionalExecution, 6151 /* ntstg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6157 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6157 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 6160 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6160 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 6162 /* oc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 6162 /* oc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 6165 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6165 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 6168 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6172 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 6177 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6180 /* oihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6185 /* oihh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6190 /* oihl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6195 /* oilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 6200 /* oilh */, MCK_GR32, 1 /* 0 */ },
  { 0, 6205 /* oill */, MCK_GR32, 1 /* 0 */ },
  { 0, 6210 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 6214 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6217 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 6221 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6221 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 6224 /* pfd */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6228 /* pfdrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 6234 /* plo */, MCK_BDAddr64Disp12, 10 /* 1, 3 */ },
  { 0, 6234 /* plo */, MCK_GR64, 5 /* 0, 2 */ },
  { Feature_FeaturePopulationCount, 6238 /* popcnt */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureProcessorAssist, 6245 /* ppa */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6252 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureMiscellaneousExtensions, 6258 /* risbgn */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 6265 /* risbhg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureHighWord, 6265 /* risbhg */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 6272 /* risblg */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 6272 /* risblg */, MCK_GR64, 2 /* 1 */ },
  { 0, 6279 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 6279 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6283 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 6283 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6288 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6294 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6300 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6306 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6306 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 6326 /* sar */, MCK_AR32, 1 /* 0 */ },
  { 0, 6326 /* sar */, MCK_GR32, 2 /* 1 */ },
  { 0, 6330 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6330 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6334 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6339 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6339 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 6343 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6348 /* sfasr */, MCK_GR32, 1 /* 0 */ },
  { 0, 6354 /* sfpc */, MCK_GR32, 1 /* 0 */ },
  { 0, 6359 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6359 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6362 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6362 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 6366 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6366 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 6371 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6375 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 6380 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6380 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 6383 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6383 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 6387 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6387 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 6390 /* sla */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 6390 /* sla */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 6394 /* slak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 6394 /* slak */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6399 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6399 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 6403 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6403 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6408 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6414 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6419 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 6424 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6424 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6428 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6428 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 6433 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 6439 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 6439 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 6445 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6450 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 6456 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 6456 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 6460 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 6460 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6465 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 6465 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6470 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6474 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 6479 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6479 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 6483 /* spm */, MCK_GR32, 1 /* 0 */ },
  { 0, 6487 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6487 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6492 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 6498 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6498 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 6503 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 6509 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 6515 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6518 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 6518 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 6522 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 6522 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6527 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 6527 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6532 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 6536 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 6536 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 6540 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 6540 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 6545 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 6545 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6550 /* srnm */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { Feature_FeatureFPExtension, 6555 /* srnmb */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { 0, 6561 /* srnmt */, MCK_BDAddr32Disp12, 1 /* 0 */ },
  { 0, 6567 /* srst */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6572 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6572 /* st */, MCK_GR32, 1 /* 0 */ },
  { 0, 6575 /* stam */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 6575 /* stam */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 6580 /* stamy */, MCK_AR32, 3 /* 0, 1 */ },
  { 0, 6580 /* stamy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 6586 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6586 /* stc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 6590 /* stch */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 6590 /* stch */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6595 /* stck */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6600 /* stcke */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6606 /* stckf */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6612 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6612 /* stcy */, MCK_GR32, 1 /* 0 */ },
  { 0, 6617 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6617 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 6621 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6621 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 6626 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6626 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 6630 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6630 /* stey */, MCK_FP32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 6635 /* stfh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 6635 /* stfh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6640 /* stfle */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6646 /* stfpc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 6652 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6652 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 6656 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 6656 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 6662 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 6662 /* sth */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureHighWord, 6666 /* sthh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureHighWord, 6666 /* sthh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 6671 /* sthrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 6671 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 6677 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 6677 /* sthy */, MCK_GR32, 1 /* 0 */ },
  { 0, 6682 /* stm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 6682 /* stm */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 6686 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 6686 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 6691 /* stmh */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 6691 /* stmh */, MCK_GRH32, 3 /* 0, 1 */ },
  { 0, 6696 /* stmy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 6696 /* stmy */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6701 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6701 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6706 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6706 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6712 /* stocfh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6712 /* stocfh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6719 /* stocfhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6719 /* stocfhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6727 /* stocfhh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6727 /* stocfhh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6735 /* stocfhhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6735 /* stocfhhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6744 /* stocfhl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6744 /* stocfhl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6752 /* stocfhle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6752 /* stocfhle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6761 /* stocfhlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6761 /* stocfhlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6770 /* stocfhm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6770 /* stocfhm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6778 /* stocfhne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6778 /* stocfhne */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6787 /* stocfhnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6787 /* stocfhnh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6796 /* stocfhnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6796 /* stocfhnhe */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6806 /* stocfhnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6806 /* stocfhnl */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6815 /* stocfhnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6815 /* stocfhnle */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6825 /* stocfhnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6825 /* stocfhnlh */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6835 /* stocfhnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6835 /* stocfhnm */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6844 /* stocfhno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6844 /* stocfhno */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6853 /* stocfhnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6853 /* stocfhnp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6862 /* stocfhnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6862 /* stocfhnz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6871 /* stocfho */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6871 /* stocfho */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6879 /* stocfhp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6879 /* stocfhp */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond2, 6887 /* stocfhz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond2, 6887 /* stocfhz */, MCK_GRH32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6895 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6895 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6901 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6901 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6908 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6908 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6915 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6915 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6923 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6923 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6930 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6930 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6938 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6938 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6946 /* stocgm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6946 /* stocgm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6953 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6953 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6961 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6961 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6969 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6969 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6978 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6978 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6986 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6986 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 6995 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 6995 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7004 /* stocgnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7004 /* stocgnm */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7012 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7012 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7020 /* stocgnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7020 /* stocgnp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7028 /* stocgnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7028 /* stocgnz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7036 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7036 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7043 /* stocgp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7043 /* stocgp */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7050 /* stocgz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7050 /* stocgz */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7057 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7057 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7063 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7063 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7070 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7070 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7076 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7076 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7083 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7083 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7090 /* stocm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7090 /* stocm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7096 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7096 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7103 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7103 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7110 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7110 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7118 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7118 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7125 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7125 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7133 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7133 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7141 /* stocnm */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7141 /* stocnm */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7148 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7148 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7155 /* stocnp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7155 /* stocnp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7162 /* stocnz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7162 /* stocnz */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7169 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7169 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7175 /* stocp */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7175 /* stocp */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 7181 /* stocz */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 7181 /* stocz */, MCK_GR32, 1 /* 0 */ },
  { 0, 7187 /* stpq */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7187 /* stpq */, MCK_GR128, 1 /* 0 */ },
  { 0, 7192 /* strag */, MCK_BDAddr64Disp12, 3 /* 0, 1 */ },
  { 0, 7198 /* strl */, MCK_GR32, 1 /* 0 */ },
  { 0, 7198 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 7203 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7203 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 7208 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7208 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 7214 /* strvh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7214 /* strvh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7220 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7220 /* sty */, MCK_GR32, 1 /* 0 */ },
  { 0, 7228 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 7233 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 7233 /* sy */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 7236 /* tabort */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 7247 /* tbegin */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureTransactionalExecution, 7254 /* tbeginc */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7262 /* tcdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7262 /* tcdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 7267 /* tceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7267 /* tceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 7272 /* tcxb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 7272 /* tcxb */, MCK_FP128, 1 /* 0 */ },
  { 0, 7282 /* tm */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 7285 /* tmh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7289 /* tmhh */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7294 /* tmhl */, MCK_GRH32, 1 /* 0 */ },
  { 0, 7299 /* tml */, MCK_GR32, 1 /* 0 */ },
  { 0, 7303 /* tmlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 7308 /* tmll */, MCK_GR32, 1 /* 0 */ },
  { 0, 7313 /* tmy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 7317 /* ts */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { Feature_FeatureVector, 7320 /* va */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7323 /* vab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7327 /* vac */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7331 /* vacc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7336 /* vaccb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7342 /* vaccc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7348 /* vacccq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7355 /* vaccf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7361 /* vaccg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7367 /* vacch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7373 /* vaccq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7379 /* vacq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 7384 /* vaf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7388 /* vag */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7392 /* vah */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7396 /* vaq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7400 /* vavg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7405 /* vavgb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7411 /* vavgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7417 /* vavgg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7423 /* vavgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7429 /* vavgl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7435 /* vavglb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7442 /* vavglf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7449 /* vavglg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7456 /* vavglh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7463 /* vcdg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7468 /* vcdgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7474 /* vcdlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7480 /* vcdlgb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7487 /* vceq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7492 /* vceqb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7498 /* vceqbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7505 /* vceqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7511 /* vceqfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7518 /* vceqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7524 /* vceqgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7531 /* vceqh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7537 /* vceqhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7544 /* vcgd */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7549 /* vcgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7555 /* vch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7559 /* vchb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7564 /* vchbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7570 /* vchf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7575 /* vchfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7581 /* vchg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7586 /* vchgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7592 /* vchh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7597 /* vchhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7603 /* vchl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7608 /* vchlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7614 /* vchlbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7621 /* vchlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7627 /* vchlfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7634 /* vchlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7640 /* vchlgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7647 /* vchlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7653 /* vchlhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7660 /* vcksm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7666 /* vclgd */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7672 /* vclgdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7679 /* vclz */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7684 /* vclzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7690 /* vclzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7696 /* vclzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7702 /* vclzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7708 /* vctz */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7713 /* vctzb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7719 /* vctzf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7725 /* vctzg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7731 /* vctzh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7737 /* vec */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7741 /* vecb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7746 /* vecf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7751 /* vecg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7756 /* vech */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7761 /* vecl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7766 /* veclb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7772 /* veclf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7778 /* veclg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7784 /* veclh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7790 /* verim */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7796 /* verimb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7803 /* verimf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7810 /* verimg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7817 /* verimh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7824 /* verll */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7824 /* verll */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7830 /* verllb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7830 /* verllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7837 /* verllf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7837 /* verllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7844 /* verllg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7844 /* verllg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7851 /* verllh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7851 /* verllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7858 /* verllv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7865 /* verllvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7873 /* verllvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7881 /* verllvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7889 /* verllvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7897 /* vesl */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7897 /* vesl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7902 /* veslb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7902 /* veslb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7908 /* veslf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7908 /* veslf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7914 /* veslg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7914 /* veslg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7920 /* veslh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7920 /* veslh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7926 /* veslv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7932 /* veslvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7939 /* veslvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7946 /* veslvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7953 /* veslvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 7960 /* vesra */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7960 /* vesra */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7966 /* vesrab */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7966 /* vesrab */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7973 /* vesraf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7973 /* vesraf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7980 /* vesrag */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7980 /* vesrag */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7987 /* vesrah */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 7987 /* vesrah */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 7994 /* vesrav */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8001 /* vesravb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8009 /* vesravf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8017 /* vesravg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8025 /* vesravh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8033 /* vesrl */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8033 /* vesrl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8039 /* vesrlb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8039 /* vesrlb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8046 /* vesrlf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8046 /* vesrlf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8053 /* vesrlg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8053 /* vesrlg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8060 /* vesrlh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8060 /* vesrlh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8067 /* vesrlv */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8074 /* vesrlvb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8082 /* vesrlvf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8090 /* vesrlvg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8098 /* vesrlvh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8106 /* vfa */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8110 /* vfadb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8116 /* vfae */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8116 /* vfae */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8121 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8121 /* vfaeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8127 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8127 /* vfaebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8134 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8134 /* vfaef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8140 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8140 /* vfaefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8147 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8147 /* vfaeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8153 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8153 /* vfaehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8160 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8160 /* vfaezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8167 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8167 /* vfaezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8175 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8175 /* vfaezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8182 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8182 /* vfaezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8190 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8190 /* vfaezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8197 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8197 /* vfaezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8205 /* vfce */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8210 /* vfcedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8217 /* vfcedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8225 /* vfch */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8230 /* vfchdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8237 /* vfchdbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8245 /* vfche */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8251 /* vfchedb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8259 /* vfchedbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8268 /* vfd */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8272 /* vfddb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8278 /* vfee */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8278 /* vfee */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8283 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8283 /* vfeeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8289 /* vfeebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8296 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8296 /* vfeef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8302 /* vfeefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8309 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8309 /* vfeeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8315 /* vfeehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8322 /* vfeezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8329 /* vfeezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8337 /* vfeezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8344 /* vfeezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8352 /* vfeezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8359 /* vfeezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8367 /* vfene */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8367 /* vfene */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8373 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8373 /* vfeneb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8380 /* vfenebs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8388 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8388 /* vfenef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8395 /* vfenefs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8403 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8403 /* vfeneh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8410 /* vfenehs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8418 /* vfenezb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8426 /* vfenezbs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8435 /* vfenezf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8443 /* vfenezfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8452 /* vfenezh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8460 /* vfenezhs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8469 /* vfi */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8473 /* vfidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8479 /* vflcdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8486 /* vflndb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8493 /* vflpdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8500 /* vfm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8504 /* vfma */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8509 /* vfmadb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8516 /* vfmdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8522 /* vfms */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8527 /* vfmsdb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8534 /* vfpso */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8540 /* vfpsodb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8548 /* vfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8552 /* vfsdb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8558 /* vfsq */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8563 /* vfsqdb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8570 /* vftci */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8576 /* vftcidb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8584 /* vgbm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8589 /* vgef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8589 /* vgef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8594 /* vgeg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8594 /* vgeg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8599 /* vgfm */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8604 /* vgfma */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8610 /* vgfmab */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8617 /* vgfmaf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8624 /* vgfmag */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8631 /* vgfmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 8638 /* vgfmb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8644 /* vgfmf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8650 /* vgfmg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8656 /* vgfmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 8662 /* vgm */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8666 /* vgmb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8671 /* vgmf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8676 /* vgmg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8681 /* vgmh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8686 /* vistr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8686 /* vistr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8692 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8692 /* vistrb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8699 /* vistrbs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8707 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8707 /* vistrf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8714 /* vistrfs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8722 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8722 /* vistrh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8729 /* vistrhs */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8737 /* vl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8737 /* vl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8740 /* vlbb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8740 /* vlbb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8745 /* vlc */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8749 /* vlcb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8754 /* vlcf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8759 /* vlcg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8764 /* vlch */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8769 /* vlde */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8774 /* vldeb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8780 /* vleb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8780 /* vleb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8785 /* vled */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8790 /* vledb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8796 /* vlef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8796 /* vlef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8801 /* vleg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8801 /* vleg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8806 /* vleh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8806 /* vleh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8811 /* vleib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8817 /* vleif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8823 /* vleig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8829 /* vleih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8835 /* vlgv */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8835 /* vlgv */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 8835 /* vlgv */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 8840 /* vlgvb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8840 /* vlgvb */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 8840 /* vlgvb */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 8846 /* vlgvf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8846 /* vlgvf */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 8846 /* vlgvf */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 8852 /* vlgvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8852 /* vlgvg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 8852 /* vlgvg */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 8858 /* vlgvh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8858 /* vlgvh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureVector, 8858 /* vlgvh */, MCK_VR128, 2 /* 1 */ },
  { Feature_FeatureVector, 8864 /* vll */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8864 /* vll */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 8864 /* vll */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8868 /* vllez */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8868 /* vllez */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8874 /* vllezb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8874 /* vllezb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8881 /* vllezf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8881 /* vllezf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8888 /* vllezg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8888 /* vllezg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8895 /* vllezh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8895 /* vllezh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8902 /* vlm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8902 /* vlm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8906 /* vlp */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8910 /* vlpb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8915 /* vlpf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8920 /* vlpg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8925 /* vlph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8930 /* vlr */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 8934 /* vlrep */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8934 /* vlrep */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8940 /* vlrepb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8940 /* vlrepb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8947 /* vlrepf */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8947 /* vlrepf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8954 /* vlrepg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8954 /* vlrepg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8961 /* vlreph */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 8961 /* vlreph */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8968 /* vlvg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8968 /* vlvg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 8968 /* vlvg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8973 /* vlvgb */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8973 /* vlvgb */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 8973 /* vlvgb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8979 /* vlvgf */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8979 /* vlvgf */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 8979 /* vlvgf */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8985 /* vlvgg */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8985 /* vlvgg */, MCK_GR64, 2 /* 1 */ },
  { Feature_FeatureVector, 8985 /* vlvgg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8991 /* vlvgh */, MCK_BDAddr32Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 8991 /* vlvgh */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 8991 /* vlvgh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 8997 /* vlvgp */, MCK_GR64, 6 /* 1, 2 */ },
  { Feature_FeatureVector, 8997 /* vlvgp */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9003 /* vmae */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9008 /* vmaeb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9014 /* vmaef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9020 /* vmaeh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9026 /* vmah */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9031 /* vmahb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9037 /* vmahf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9043 /* vmahh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9049 /* vmal */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9054 /* vmalb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9060 /* vmale */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9066 /* vmaleb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9073 /* vmalef */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9080 /* vmaleh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9087 /* vmalf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9093 /* vmalh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9099 /* vmalhb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9106 /* vmalhf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9113 /* vmalhh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9120 /* vmalhw */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9127 /* vmalo */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9133 /* vmalob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9140 /* vmalof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9147 /* vmaloh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9154 /* vmao */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9159 /* vmaob */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9165 /* vmaof */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9171 /* vmaoh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9177 /* vme */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9181 /* vmeb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9186 /* vmef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9191 /* vmeh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9196 /* vmh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9200 /* vmhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9205 /* vmhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9210 /* vmhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9215 /* vml */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9219 /* vmlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9224 /* vmle */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9229 /* vmleb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9235 /* vmlef */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9241 /* vmleh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9247 /* vmlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9252 /* vmlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9257 /* vmlhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9263 /* vmlhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9269 /* vmlhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9275 /* vmlhw */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9281 /* vmlo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9286 /* vmlob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9292 /* vmlof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9298 /* vmloh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9304 /* vmn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9308 /* vmnb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9313 /* vmnf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9318 /* vmng */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9323 /* vmnh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9328 /* vmnl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9333 /* vmnlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9339 /* vmnlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9345 /* vmnlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9351 /* vmnlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9357 /* vmo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9361 /* vmob */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9366 /* vmof */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9371 /* vmoh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9376 /* vmrh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9381 /* vmrhb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9387 /* vmrhf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9393 /* vmrhg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9399 /* vmrhh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9405 /* vmrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9410 /* vmrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9416 /* vmrlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9422 /* vmrlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9428 /* vmrlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9434 /* vmx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9438 /* vmxb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9443 /* vmxf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9448 /* vmxg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9453 /* vmxh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9458 /* vmxl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9463 /* vmxlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9469 /* vmxlf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9475 /* vmxlg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9481 /* vmxlh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9487 /* vn */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9490 /* vnc */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9494 /* vno */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9498 /* vnot */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9503 /* vo */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9506 /* vone */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9511 /* vpdi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9516 /* vperm */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9522 /* vpk */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9526 /* vpkf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9531 /* vpkg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9536 /* vpkh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9541 /* vpkls */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9547 /* vpklsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9554 /* vpklsfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9562 /* vpklsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9569 /* vpklsgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9577 /* vpklsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9584 /* vpklshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9592 /* vpks */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9597 /* vpksf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9603 /* vpksfs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9610 /* vpksg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9616 /* vpksgs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9623 /* vpksh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9629 /* vpkshs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9636 /* vpopct */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9643 /* vrep */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9648 /* vrepb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9654 /* vrepf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9660 /* vrepg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9666 /* vreph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9672 /* vrepi */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9678 /* vrepib */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9685 /* vrepif */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9692 /* vrepig */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9699 /* vrepih */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9706 /* vs */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9709 /* vsb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9713 /* vsbcbi */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9720 /* vsbcbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9728 /* vsbi */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9733 /* vsbiq */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9739 /* vscbi */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9745 /* vscbib */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9752 /* vscbif */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9759 /* vscbig */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9766 /* vscbih */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9773 /* vscbiq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9780 /* vscef */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 9780 /* vscef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9786 /* vsceg */, MCK_BDVAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 9786 /* vsceg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9792 /* vseg */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9797 /* vsegb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9803 /* vsegf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9809 /* vsegh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9815 /* vsel */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9820 /* vsf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9824 /* vsg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9828 /* vsh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9832 /* vsl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9836 /* vslb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9841 /* vsldb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9847 /* vsq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9851 /* vsra */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9856 /* vsrab */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9862 /* vsrl */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9867 /* vsrlb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 9873 /* vst */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 9873 /* vst */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9877 /* vsteb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 9877 /* vsteb */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9883 /* vstef */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 9883 /* vstef */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9889 /* vsteg */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 9889 /* vsteg */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9895 /* vsteh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { Feature_FeatureVector, 9895 /* vsteh */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9901 /* vstl */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9901 /* vstl */, MCK_GR32, 2 /* 1 */ },
  { Feature_FeatureVector, 9901 /* vstl */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 9906 /* vstm */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { Feature_FeatureVector, 9906 /* vstm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 9911 /* vstrc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9911 /* vstrc */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9917 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9917 /* vstrcb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9924 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9924 /* vstrcbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9932 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9932 /* vstrcf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9939 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9939 /* vstrcfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9947 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9947 /* vstrch */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9954 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9954 /* vstrchs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9962 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9962 /* vstrczb */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9970 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9970 /* vstrczbs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9979 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9979 /* vstrczf */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9987 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9987 /* vstrczfs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9996 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 9996 /* vstrczh */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10004 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10004 /* vstrczhs */, MCK_VR128, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10013 /* vsum */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10018 /* vsumb */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10024 /* vsumg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10030 /* vsumgf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10037 /* vsumgh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10044 /* vsumh */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10050 /* vsumq */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10056 /* vsumqf */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10063 /* vsumqg */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10070 /* vtm */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10074 /* vuph */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10079 /* vuphb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10085 /* vuphf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10091 /* vuphh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10097 /* vupl */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10102 /* vuplb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10108 /* vuplf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10114 /* vuplh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10120 /* vuplhb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10127 /* vuplhf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10134 /* vuplhh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10141 /* vuplhw */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10148 /* vupll */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10154 /* vupllb */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10161 /* vupllf */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10168 /* vupllh */, MCK_VR128, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10175 /* vx */, MCK_VR128, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10178 /* vzero */, MCK_VR128, 1 /* 0 */ },
  { Feature_FeatureVector, 10184 /* wcdgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10190 /* wcdlgb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10197 /* wcgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10203 /* wclgdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10210 /* wfadb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10216 /* wfc */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10220 /* wfcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10226 /* wfcedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10233 /* wfcedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10241 /* wfchdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10248 /* wfchdbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10256 /* wfchedb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10264 /* wfchedbs */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10273 /* wfddb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10279 /* wfidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10285 /* wfk */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10289 /* wfkdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10295 /* wflcdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10302 /* wflndb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10309 /* wflpdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10316 /* wfmadb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10323 /* wfmdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10329 /* wfmsdb */, MCK_VR64, 15 /* 0, 1, 2, 3 */ },
  { Feature_FeatureVector, 10336 /* wfpsodb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10344 /* wfsdb */, MCK_VR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureVector, 10350 /* wfsqdb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10357 /* wftcidb */, MCK_VR64, 3 /* 0, 1 */ },
  { Feature_FeatureVector, 10365 /* wldeb */, MCK_VR32, 2 /* 1 */ },
  { Feature_FeatureVector, 10365 /* wldeb */, MCK_VR64, 1 /* 0 */ },
  { Feature_FeatureVector, 10371 /* wledb */, MCK_VR32, 1 /* 0 */ },
  { Feature_FeatureVector, 10371 /* wledb */, MCK_VR64, 2 /* 1 */ },
  { 0, 10377 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 10377 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 10379 /* xc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 10379 /* xc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 10382 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 10382 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 10385 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 10389 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 10394 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 10397 /* xihf */, MCK_GRH32, 1 /* 0 */ },
  { 0, 10402 /* xilf */, MCK_GR32, 1 /* 0 */ },
  { 0, 10407 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 10411 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 10414 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 10418 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 10418 /* xy */, MCK_GR32, 1 /* 0 */ },
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

