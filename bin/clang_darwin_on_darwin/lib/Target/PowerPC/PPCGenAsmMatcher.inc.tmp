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
#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  return "(unknown)";
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, uint64_t Features, unsigned VariantID) {
  switch (VariantID) {
    case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "cntlz", 5))
          break;
        Mnemonic = "cntlzw";	 // "cntlz"
        return;
      case 6:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "cntlz.", 6))
          break;
        Mnemonic = "cntlzw.";	 // "cntlz."
        return;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "cntlz", 5))
      break;
    Mnemonic = "cntlzw";	 // "cntlz"
    return;
  case 6:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "cntlz.", 6))
      break;
    Mnemonic = "cntlzw.";	 // "cntlz."
    return;
  }
}

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegG8RCOperands,
  CVT_95_addTLSRegOperands,
  CVT_95_addRegGPRCOperands,
  CVT_95_addRegGPRCNoR0Operands,
  CVT_95_addS16ImmOperands,
  CVT_95_addU16ImmOperands,
  CVT_95_addBranchTargetOperands,
  CVT_95_addImmOperands,
  CVT_95_addRegCRBITRCOperands,
  CVT_imm_95_3,
  CVT_imm_95_2,
  CVT_imm_95_0,
  CVT_95_addRegVRRCOperands,
  CVT_imm_95_8,
  CVT_imm_95_10,
  CVT_imm_95_76,
  CVT_regCR0,
  CVT_95_addRegCRRCOperands,
  CVT_imm_95_79,
  CVT_imm_95_78,
  CVT_imm_95_4,
  CVT_imm_95_7,
  CVT_imm_95_6,
  CVT_imm_95_44,
  CVT_imm_95_47,
  CVT_imm_95_46,
  CVT_imm_95_36,
  CVT_imm_95_39,
  CVT_imm_95_38,
  CVT_imm_95_12,
  CVT_imm_95_15,
  CVT_imm_95_14,
  CVT_imm_95_68,
  CVT_imm_95_71,
  CVT_imm_95_70,
  CVT_imm_95_100,
  CVT_imm_95_103,
  CVT_imm_95_102,
  CVT_imm_95_108,
  CVT_imm_95_111,
  CVT_imm_95_110,
  CVT_imm_95_31,
  CVT_95_addRegGxRCNoR0Operands,
  CVT_95_addRegGxRCOperands,
  CVT_regR0,
  CVT_95_addRegF4RCOperands,
  CVT_95_addRegF8RCOperands,
  CVT_imm_95_1,
  CVT_95_addRegVFRCOperands,
  CVT_95_addRegVSFRCOperands,
  CVT_95_addRegVSSRCOperands,
  CVT_95_addRegVSRCOperands,
  CVT_imm_95_29,
  CVT_imm_95_280,
  CVT_imm_95_128,
  CVT_imm_95_129,
  CVT_imm_95_130,
  CVT_imm_95_131,
  CVT_imm_95_132,
  CVT_imm_95_133,
  CVT_imm_95_134,
  CVT_imm_95_135,
  CVT_imm_95_28,
  CVT_imm_95_19,
  CVT_imm_95_537,
  CVT_imm_95_539,
  CVT_imm_95_541,
  CVT_imm_95_543,
  CVT_imm_95_536,
  CVT_imm_95_538,
  CVT_imm_95_540,
  CVT_imm_95_542,
  CVT_imm_95_1018,
  CVT_imm_95_981,
  CVT_imm_95_22,
  CVT_imm_95_17,
  CVT_imm_95_18,
  CVT_imm_95_980,
  CVT_imm_95_529,
  CVT_imm_95_531,
  CVT_imm_95_533,
  CVT_imm_95_535,
  CVT_imm_95_528,
  CVT_imm_95_530,
  CVT_imm_95_532,
  CVT_imm_95_534,
  CVT_imm_95_1019,
  CVT_95_addCRBitMaskOperands,
  CVT_imm_95_48,
  CVT_imm_95_287,
  CVT_imm_95_5,
  CVT_imm_95_25,
  CVT_imm_95_512,
  CVT_imm_95_272,
  CVT_imm_95_273,
  CVT_imm_95_274,
  CVT_imm_95_275,
  CVT_imm_95_260,
  CVT_imm_95_261,
  CVT_imm_95_262,
  CVT_imm_95_263,
  CVT_imm_95_26,
  CVT_imm_95_27,
  CVT_imm_95_990,
  CVT_imm_95_991,
  CVT_imm_95_268,
  CVT_imm_95_988,
  CVT_imm_95_989,
  CVT_imm_95_269,
  CVT_imm_95_986,
  CVT_imm_95_255,
  CVT_imm_95_284,
  CVT_imm_95_285,
  CVT_95_addRegQFRCOperands,
  CVT_95_addRegQSRCOperands,
  CVT_95_addRegQBRCOperands,
  CVT_imm_95_9,
  CVT_imm_95_13,
  CVT_imm_95_20,
  CVT_imm_95_16,
  CVT_imm_95_24,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3,
  Convert_NoOperands,
  Convert__DirectBr1_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3,
  Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2,
  Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4,
  Convert__CondBr1_0,
  Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_0__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_8__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_2__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_10__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_76__regCR0__CondBr1_0,
  Convert__imm_95_76__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_79__regCR0__CondBr1_0,
  Convert__imm_95_79__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_78__regCR0__CondBr1_0,
  Convert__imm_95_78__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_76__regCR0,
  Convert__imm_95_76__RegCRRC1_0,
  Convert__imm_95_79__regCR0,
  Convert__imm_95_79__RegCRRC1_0,
  Convert__imm_95_78__regCR0,
  Convert__imm_95_78__RegCRRC1_0,
  Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_4__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_7__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_6__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_4__regCR0__CondBr1_0,
  Convert__imm_95_4__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_7__regCR0__CondBr1_0,
  Convert__imm_95_7__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_6__regCR0__CondBr1_0,
  Convert__imm_95_6__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_4__regCR0,
  Convert__imm_95_4__RegCRRC1_0,
  Convert__imm_95_7__regCR0,
  Convert__imm_95_7__RegCRRC1_0,
  Convert__imm_95_6__regCR0,
  Convert__imm_95_6__RegCRRC1_0,
  Convert__imm_95_44__regCR0__CondBr1_0,
  Convert__imm_95_44__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_47__regCR0__CondBr1_0,
  Convert__imm_95_47__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_46__regCR0__CondBr1_0,
  Convert__imm_95_46__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_44__regCR0,
  Convert__imm_95_44__RegCRRC1_0,
  Convert__imm_95_47__regCR0,
  Convert__imm_95_47__RegCRRC1_0,
  Convert__imm_95_46__regCR0,
  Convert__imm_95_46__RegCRRC1_0,
  Convert__DirectBr1_0__Imm1_1,
  Convert__imm_95_36__regCR0__CondBr1_0,
  Convert__imm_95_36__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_39__regCR0__CondBr1_0,
  Convert__imm_95_39__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_38__regCR0__CondBr1_0,
  Convert__imm_95_38__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_36__regCR0,
  Convert__imm_95_36__RegCRRC1_0,
  Convert__imm_95_39__regCR0,
  Convert__imm_95_39__RegCRRC1_0,
  Convert__imm_95_38__regCR0,
  Convert__imm_95_38__RegCRRC1_0,
  Convert__imm_95_12__regCR0__CondBr1_0,
  Convert__imm_95_12__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_15__regCR0__CondBr1_0,
  Convert__imm_95_15__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_14__regCR0__CondBr1_0,
  Convert__imm_95_14__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_12__regCR0,
  Convert__imm_95_12__RegCRRC1_0,
  Convert__imm_95_15__regCR0,
  Convert__imm_95_15__RegCRRC1_0,
  Convert__imm_95_14__regCR0,
  Convert__imm_95_14__RegCRRC1_0,
  Convert__imm_95_68__regCR0__CondBr1_0,
  Convert__imm_95_68__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_71__regCR0__CondBr1_0,
  Convert__imm_95_71__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_70__regCR0__CondBr1_0,
  Convert__imm_95_70__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_68__regCR0,
  Convert__imm_95_68__RegCRRC1_0,
  Convert__imm_95_71__regCR0,
  Convert__imm_95_71__RegCRRC1_0,
  Convert__imm_95_70__regCR0,
  Convert__imm_95_70__RegCRRC1_0,
  Convert__imm_95_100__regCR0__CondBr1_0,
  Convert__imm_95_100__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_103__regCR0__CondBr1_0,
  Convert__imm_95_103__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_102__regCR0__CondBr1_0,
  Convert__imm_95_102__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_100__regCR0,
  Convert__imm_95_100__RegCRRC1_0,
  Convert__imm_95_103__regCR0,
  Convert__imm_95_103__RegCRRC1_0,
  Convert__imm_95_102__regCR0,
  Convert__imm_95_102__RegCRRC1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_95_108__regCR0__CondBr1_0,
  Convert__imm_95_108__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_111__regCR0__CondBr1_0,
  Convert__imm_95_111__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_110__regCR0__CondBr1_0,
  Convert__imm_95_110__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_108__regCR0,
  Convert__imm_95_108__RegCRRC1_0,
  Convert__imm_95_111__regCR0,
  Convert__imm_95_111__RegCRRC1_0,
  Convert__imm_95_110__regCR0,
  Convert__imm_95_110__RegCRRC1_0,
  Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_12__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_15__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_14__RegCRBITRC1_0__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3,
  Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3,
  Convert__regCR0__RegG8RC1_0__RegG8RC1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__regCR0__RegG8RC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegCRBITRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3,
  Convert__regCR0__RegG8RC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3,
  Convert__regCR0__RegGPRC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__regCR0__RegGPRC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegCRBITRC1_0__U1Imm1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__regCR0__RegGPRC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__U1Imm1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2,
  Convert__regR0__regR0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__U5Imm1_0,
  Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1,
  Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__Imm1_1,
  Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2,
  Convert__RegF4RC1_0__RegF4RC1_1,
  Convert__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF8RC1_0__RegF8RC1_1,
  Convert__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF4RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3,
  Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2,
  Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__S16Imm1_1,
  Convert__RegGPRC1_0__S17Imm1_1,
  Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_1,
  Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2,
  Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2,
  Convert__imm_95_0,
  Convert__RegCRRC1_0__RegCRRC1_1,
  Convert__RegCRRC1_0,
  Convert__RegGPRC1_0__imm_95_29,
  Convert__RegGPRC1_0__imm_95_280,
  Convert__RegGPRC1_0__U10Imm1_1__imm_95_0,
  Convert__RegGPRC1_0__imm_95_128,
  Convert__RegGPRC1_0__imm_95_129,
  Convert__RegGPRC1_0__imm_95_130,
  Convert__RegGPRC1_0__imm_95_131,
  Convert__RegGPRC1_0__imm_95_132,
  Convert__RegGPRC1_0__imm_95_133,
  Convert__RegGPRC1_0__imm_95_134,
  Convert__RegGPRC1_0__imm_95_135,
  Convert__RegGPRC1_0__imm_95_28,
  Convert__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_95_19,
  Convert__RegGPRC1_0__imm_95_537,
  Convert__RegGPRC1_0__imm_95_539,
  Convert__RegGPRC1_0__imm_95_541,
  Convert__RegGPRC1_0__imm_95_543,
  Convert__RegGPRC1_0__imm_95_536,
  Convert__RegGPRC1_0__imm_95_538,
  Convert__RegGPRC1_0__imm_95_540,
  Convert__RegGPRC1_0__imm_95_542,
  Convert__RegGPRC1_0__imm_95_1018,
  Convert__RegGPRC1_0__imm_95_981,
  Convert__RegGPRC1_0__imm_95_22,
  Convert__RegGPRC1_0__imm_95_17,
  Convert__RegGPRC1_0__imm_95_18,
  Convert__RegGPRC1_0__imm_95_980,
  Convert__RegF8RC1_0,
  Convert__RegF8RC1_1,
  Convert__RegGPRC1_0__imm_95_529,
  Convert__RegGPRC1_0__imm_95_531,
  Convert__RegGPRC1_0__imm_95_533,
  Convert__RegGPRC1_0__imm_95_535,
  Convert__RegGPRC1_0__imm_95_528,
  Convert__RegGPRC1_0__imm_95_530,
  Convert__RegGPRC1_0__imm_95_532,
  Convert__RegGPRC1_0__imm_95_534,
  Convert__RegGPRC1_0__imm_95_1019,
  Convert__RegGPRC1_0__CRBitMask1_1,
  Convert__RegGPRC1_0__imm_95_48,
  Convert__RegGPRC1_0__imm_95_287,
  Convert__RegGPRC1_0__imm_95_5,
  Convert__RegGPRC1_0__imm_95_4,
  Convert__RegGPRC1_0__imm_95_25,
  Convert__RegGPRC1_0__imm_95_512,
  Convert__RegGPRC1_0__imm_95_272,
  Convert__RegGPRC1_0__imm_95_273,
  Convert__RegGPRC1_0__imm_95_274,
  Convert__RegGPRC1_0__imm_95_275,
  Convert__RegGPRC1_0__imm_95_260,
  Convert__RegGPRC1_0__imm_95_261,
  Convert__RegGPRC1_0__imm_95_262,
  Convert__RegGPRC1_0__imm_95_263,
  Convert__RegGPRC1_0__U4Imm1_1,
  Convert__RegGPRC1_0__imm_95_26,
  Convert__RegGPRC1_0__imm_95_27,
  Convert__RegGPRC1_0__imm_95_990,
  Convert__RegGPRC1_0__imm_95_991,
  Convert__RegGPRC1_0__imm_95_268,
  Convert__RegGPRC1_0__imm_95_988,
  Convert__RegGPRC1_0__imm_95_989,
  Convert__RegGPRC1_0__imm_95_269,
  Convert__RegGPRC1_0__imm_95_986,
  Convert__RegVRRC1_0,
  Convert__RegG8RC1_0__RegVSFRC1_1,
  Convert__RegG8RC1_0__RegVSRC1_1,
  Convert__RegGPRC1_0__RegVSFRC1_1,
  Convert__RegGPRC1_0__imm_95_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2,
  Convert__imm_95_29__RegGPRC1_0,
  Convert__imm_95_280__RegGPRC1_0,
  Convert__imm_95_28__RegGPRC1_0,
  Convert__imm_95_255__RegG8RC1_0,
  Convert__Imm1_0__RegGPRC1_1,
  Convert__imm_95_19__RegGPRC1_0,
  Convert__imm_95_537__RegGPRC1_1,
  Convert__imm_95_539__RegGPRC1_1,
  Convert__imm_95_541__RegGPRC1_1,
  Convert__imm_95_543__RegGPRC1_1,
  Convert__imm_95_536__RegGPRC1_1,
  Convert__imm_95_538__RegGPRC1_1,
  Convert__imm_95_540__RegGPRC1_1,
  Convert__imm_95_542__RegGPRC1_1,
  Convert__imm_95_1018__RegGPRC1_0,
  Convert__RegGPRC1_1__Imm1_0,
  Convert__imm_95_981__RegGPRC1_0,
  Convert__imm_95_22__RegGPRC1_0,
  Convert__imm_95_17__RegGPRC1_0,
  Convert__imm_95_18__RegGPRC1_0,
  Convert__imm_95_980__RegGPRC1_0,
  Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0,
  Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0,
  Convert__Imm1_0__RegF8RC1_1__Imm1_2__Imm1_3,
  Convert__Imm1_1__RegF8RC1_2__Imm1_3__Imm1_4,
  Convert__RegCRRC1_0__Imm1_1__imm_95_0,
  Convert__RegCRRC1_1__Imm1_2__imm_95_0,
  Convert__RegCRRC1_0__Imm1_1__Imm1_2,
  Convert__RegCRRC1_1__Imm1_2__Imm1_3,
  Convert__imm_95_529__RegGPRC1_1,
  Convert__imm_95_531__RegGPRC1_1,
  Convert__imm_95_533__RegGPRC1_1,
  Convert__imm_95_535__RegGPRC1_1,
  Convert__imm_95_528__RegGPRC1_1,
  Convert__imm_95_530__RegGPRC1_1,
  Convert__imm_95_532__RegGPRC1_1,
  Convert__imm_95_534__RegGPRC1_1,
  Convert__imm_95_1019__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_95_0,
  Convert__CRBitMask1_0__RegGPRC1_1,
  Convert__imm_95_48__RegGPRC1_0,
  Convert__imm_95_25__RegGPRC1_0,
  Convert__imm_95_512__RegGPRC1_0,
  Convert__imm_95_272__RegGPRC1_1,
  Convert__imm_95_273__RegGPRC1_1,
  Convert__imm_95_274__RegGPRC1_1,
  Convert__imm_95_275__RegGPRC1_1,
  Convert__imm_95_260__RegGPRC1_1,
  Convert__imm_95_261__RegGPRC1_1,
  Convert__imm_95_262__RegGPRC1_1,
  Convert__imm_95_263__RegGPRC1_1,
  Convert__imm_95_272__RegGPRC1_0,
  Convert__imm_95_273__RegGPRC1_0,
  Convert__imm_95_274__RegGPRC1_0,
  Convert__imm_95_275__RegGPRC1_0,
  Convert__imm_95_260__RegGPRC1_0,
  Convert__imm_95_261__RegGPRC1_0,
  Convert__imm_95_262__RegGPRC1_0,
  Convert__imm_95_263__RegGPRC1_0,
  Convert__RegGPRC1_1__U4Imm1_0,
  Convert__imm_95_26__RegGPRC1_0,
  Convert__imm_95_27__RegGPRC1_0,
  Convert__imm_95_990__RegGPRC1_0,
  Convert__imm_95_991__RegGPRC1_0,
  Convert__imm_95_988__RegGPRC1_0,
  Convert__imm_95_284__RegGPRC1_0,
  Convert__imm_95_989__RegGPRC1_0,
  Convert__imm_95_285__RegGPRC1_0,
  Convert__imm_95_986__RegGPRC1_0,
  Convert__RegVSFRC1_0__RegG8RC1_1,
  Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegVSFRC1_0__RegGPRC1_1,
  Convert__RegVSRC1_0__RegGPRC1_1,
  Convert__imm_95_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3,
  Convert__imm_95_2,
  Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2__U2Imm1_3,
  Convert__RegQFRC1_0__RegQFRC1_1__U2Imm1_2,
  Convert__RegQFRC1_0__RegQFRC1_1,
  Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2,
  Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_2,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_1,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_4,
  Convert__RegQBRC1_0__RegQBRC1_0__RegQBRC1_0__imm_95_0,
  Convert__RegQBRC1_0__RegQFRC1_1__RegQFRC1_2,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_1__imm_95_5,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_9,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__U12Imm1_3,
  Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2,
  Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_3__RegQSRC1_2,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_14,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_8,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_1__imm_95_10,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_7,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_13,
  Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2__RegQFRC1_3,
  Convert__RegQSRC1_0__RegQFRC1_1,
  Convert__RegQFRC1_0__RegQBRC1_1__RegQFRC1_3__RegQFRC1_2,
  Convert__RegQBRC1_0__RegQBRC1_0__RegQBRC1_0__imm_95_15,
  Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_6,
  Convert__RegQFRC1_0__U12Imm1_1,
  Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegQFRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegQSRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegQSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__U1Imm1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4,
  Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4,
  Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31,
  Convert__Imm1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3,
  Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2,
  Convert__imm_95_0__RegGPRC1_1,
  Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__U5Imm1_3,
  Convert__imm_95_0__U1Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_4__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_12__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_8__RegG8RC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2,
  Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_20__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_5__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_1__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_6__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_2__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_16__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_24__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_31__RegG8RC1_0__S16Imm1_1,
  Convert__regR0__RegGPRC1_0,
  Convert__RegGPRC1_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1,
  Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_4__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_12__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_8__RegGPRC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2,
  Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_20__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_5__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_1__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_6__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_2__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_16__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_24__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_31__RegGPRC1_0__S16Imm1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1,
  Convert__RegGPRC1_0__RegVRRC1_1,
  Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0,
  Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3,
  Convert__RegVRRC1_0__S5Imm1_1,
  Convert__regR0__regR0__imm_95_0,
  Convert__RegVSFRC1_0__RegVSFRC1_1,
  Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2,
  Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__RegVFRC1_1,
  Convert__RegVSRC1_0__RegVSSRC1_1,
  Convert__RegVSSRC1_0__RegVSRC1_1,
  Convert__RegVSSRC1_0__RegVSFRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2,
  Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2,
  Convert__RegVSSRC1_0__RegVSSRC1_1,
  Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3,
  Convert__RegCRRC1_0__RegVSFRC1_1,
  Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1,
  Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1,
  Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegCRRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1,
  Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2,
  Convert__RegVSRC1_0__Tie0__RegVSRC1_1__U4Imm1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3,
  Convert__RegVSRC1_0__U8Imm1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2,
  Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__DirectBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 3, CVT_95_addBranchTargetOperands, 4, CVT_Done },
  // Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__CondBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_76__regCR0__CondBr1_0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_79__regCR0__CondBr1_0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_78__regCR0__CondBr1_0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_76__regCR0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_79__regCR0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_78__regCR0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_4__regCR0__CondBr1_0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__regCR0__CondBr1_0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__regCR0__CondBr1_0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__regCR0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_7__regCR0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_6__regCR0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_44__regCR0__CondBr1_0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_47__regCR0__CondBr1_0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_46__regCR0__CondBr1_0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_44__regCR0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_47__regCR0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_46__regCR0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__DirectBr1_0__Imm1_1
  { CVT_95_addBranchTargetOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0__CondBr1_0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_39__regCR0__CondBr1_0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_38__regCR0__CondBr1_0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_39__regCR0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_38__regCR0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__regCR0__CondBr1_0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__regCR0__CondBr1_0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__regCR0__CondBr1_0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__regCR0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_15__regCR0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_14__regCR0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_68__regCR0__CondBr1_0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_71__regCR0__CondBr1_0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_70__regCR0__CondBr1_0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_68__regCR0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_71__regCR0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_70__regCR0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_100__regCR0__CondBr1_0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_103__regCR0__CondBr1_0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_102__regCR0__CondBr1_0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_100__regCR0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_103__regCR0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_102__regCR0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_108__regCR0__CondBr1_0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_111__regCR0__CondBr1_0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_110__regCR0__CondBr1_0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_108__regCR0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_111__regCR0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_110__regCR0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__RegG8RC1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__RegGPRC1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__U1Imm1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U1Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regR0__regR0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__U5Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_95_addRegF8RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_1
  { CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegVFRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRRC1_0__RegCRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0
  { CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_29
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_29, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_280
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_280, 0, CVT_Done },
  // Convert__RegGPRC1_0__U10Imm1_1__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_128
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_128, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_129
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_129, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_130
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_130, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_131
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_131, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_132
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_132, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_133
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_133, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_134
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_134, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_135
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_135, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_28
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_28, 0, CVT_Done },
  // Convert__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_19
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_19, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_537
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_537, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_539
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_539, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_541
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_541, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_543
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_543, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_536
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_536, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_538
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_538, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_540
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_540, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_542
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_542, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1018
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1018, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_981
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_981, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_22
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_22, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_17
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_17, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_18
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_18, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_980
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_980, 0, CVT_Done },
  // Convert__RegF8RC1_0
  { CVT_95_addRegF8RCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_529
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_529, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_531
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_531, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_533
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_533, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_535
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_535, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_528
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_528, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_530
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_530, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_532
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_532, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_534
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_534, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1019
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1019, 0, CVT_Done },
  // Convert__RegGPRC1_0__CRBitMask1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_48
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_48, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_287
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_287, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_5
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_4
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_25
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_25, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_512
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_512, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_272
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_272, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_273
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_273, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_274
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_274, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_275
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_275, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_260
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_260, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_261
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_261, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_262
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_262, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_263
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_263, 0, CVT_Done },
  // Convert__RegGPRC1_0__U4Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_26
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_26, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_27
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_27, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_990
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_990, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_991
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_991, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_268
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_268, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_988
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_988, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_989
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_989, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_269
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_269, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_986
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_986, 0, CVT_Done },
  // Convert__RegVRRC1_0
  { CVT_95_addRegVRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegVSFRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegVSRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegVSFRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_29__RegGPRC1_0
  { CVT_imm_95_29, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_280__RegGPRC1_0
  { CVT_imm_95_280, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_28__RegGPRC1_0
  { CVT_imm_95_28, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_255__RegG8RC1_0
  { CVT_imm_95_255, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_19__RegGPRC1_0
  { CVT_imm_95_19, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_537__RegGPRC1_1
  { CVT_imm_95_537, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_539__RegGPRC1_1
  { CVT_imm_95_539, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_541__RegGPRC1_1
  { CVT_imm_95_541, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_543__RegGPRC1_1
  { CVT_imm_95_543, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_536__RegGPRC1_1
  { CVT_imm_95_536, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_538__RegGPRC1_1
  { CVT_imm_95_538, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_540__RegGPRC1_1
  { CVT_imm_95_540, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_542__RegGPRC1_1
  { CVT_imm_95_542, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1018__RegGPRC1_0
  { CVT_imm_95_1018, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_981__RegGPRC1_0
  { CVT_imm_95_981, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_22__RegGPRC1_0
  { CVT_imm_95_22, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_17__RegGPRC1_0
  { CVT_imm_95_17, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_18__RegGPRC1_0
  { CVT_imm_95_18, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_980__RegGPRC1_0
  { CVT_imm_95_980, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__Imm1_3__Imm1_4
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegCRRC1_0__Imm1_1__imm_95_0
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRRC1_1__Imm1_2__imm_95_0
  { CVT_95_addRegCRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRRC1_0__Imm1_1__Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_1__Imm1_2__Imm1_3
  { CVT_95_addRegCRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__imm_95_529__RegGPRC1_1
  { CVT_imm_95_529, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_531__RegGPRC1_1
  { CVT_imm_95_531, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_533__RegGPRC1_1
  { CVT_imm_95_533, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_535__RegGPRC1_1
  { CVT_imm_95_535, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_528__RegGPRC1_1
  { CVT_imm_95_528, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_530__RegGPRC1_1
  { CVT_imm_95_530, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_532__RegGPRC1_1
  { CVT_imm_95_532, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_534__RegGPRC1_1
  { CVT_imm_95_534, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1019__RegGPRC1_0
  { CVT_imm_95_1019, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__CRBitMask1_0__RegGPRC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_48__RegGPRC1_0
  { CVT_imm_95_48, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_25__RegGPRC1_0
  { CVT_imm_95_25, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_512__RegGPRC1_0
  { CVT_imm_95_512, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_1
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_1
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_1
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_1
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_1
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_1
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_1
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_1
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_0
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_0
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_0
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_0
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_0
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_0
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_0
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_0
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__U4Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_26__RegGPRC1_0
  { CVT_imm_95_26, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_27__RegGPRC1_0
  { CVT_imm_95_27, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_990__RegGPRC1_0
  { CVT_imm_95_990, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_991__RegGPRC1_0
  { CVT_imm_95_991, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_988__RegGPRC1_0
  { CVT_imm_95_988, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_284__RegGPRC1_0
  { CVT_imm_95_284, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_989__RegGPRC1_0
  { CVT_imm_95_989, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_285__RegGPRC1_0
  { CVT_imm_95_285, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_986__RegGPRC1_0
  { CVT_imm_95_986, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegVSFRC1_0__RegG8RC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__RegGPRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegGPRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2__U2Imm1_3
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_95_addRegQFRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegQFRC1_0__RegQFRC1_1__U2Imm1_2
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegQFRC1_0__RegQFRC1_1
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_Done },
  // Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_95_addRegQFRCOperands, 3, CVT_Done },
  // Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_2
  { CVT_95_addRegQSRCOperands, 1, CVT_95_addRegQSRCOperands, 2, CVT_95_addRegQSRCOperands, 3, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_1
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_4
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_0__RegQBRC1_0__imm_95_0
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQFRC1_1__RegQFRC1_2
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_95_addRegQFRCOperands, 3, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_1__imm_95_5
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_9
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__U12Imm1_3
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_95_addRegQFRCOperands, 4, CVT_95_addRegQFRCOperands, 3, CVT_Done },
  // Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_3__RegQSRC1_2
  { CVT_95_addRegQSRCOperands, 1, CVT_95_addRegQSRCOperands, 2, CVT_95_addRegQSRCOperands, 4, CVT_95_addRegQSRCOperands, 3, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_14
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_8
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_1__imm_95_10
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_7
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_13
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2__RegQFRC1_3
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_95_addRegQFRCOperands, 3, CVT_95_addRegQFRCOperands, 4, CVT_Done },
  // Convert__RegQSRC1_0__RegQFRC1_1
  { CVT_95_addRegQSRCOperands, 1, CVT_95_addRegQFRCOperands, 2, CVT_Done },
  // Convert__RegQFRC1_0__RegQBRC1_1__RegQFRC1_3__RegQFRC1_2
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQFRCOperands, 4, CVT_95_addRegQFRCOperands, 3, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_0__RegQBRC1_0__imm_95_15
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_6
  { CVT_95_addRegQBRCOperands, 1, CVT_95_addRegQBRCOperands, 2, CVT_95_addRegQBRCOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__RegQFRC1_0__U12Imm1_1
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegQFRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegQFRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegQFRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegQSRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegQSRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegQFRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegQSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegQSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__U1Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 4, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_1
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_imm_95_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__U5Imm1_3
  { CVT_imm_95_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__imm_95_0__U1Imm1_1
  { CVT_imm_95_0, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__regR0__RegGPRC1_0
  { CVT_regR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegVRRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__S5Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regR0__regR0__imm_95_0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_95_addRegVSSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVFRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVFRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2
  { CVT_95_addRegVSSRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSSRCOperands, 2, CVT_95_addRegVSSRCOperands, 3, CVT_Done },
  // Convert__RegVSSRC1_0__RegVSSRC1_1
  { CVT_95_addRegVSSRCOperands, 1, CVT_95_addRegVSSRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__Tie0__RegVSRC1_1__U4Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__U8Imm1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_2, 0, CVT_Done },
};

void PPCAsmParser::
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
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_addRegG8RCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegG8RCOperands(Inst, 1);
      break;
    case CVT_95_addTLSRegOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addTLSRegOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegGPRCOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegGPRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addS16ImmOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addS16ImmOperands(Inst, 1);
      break;
    case CVT_95_addU16ImmOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addU16ImmOperands(Inst, 1);
      break;
    case CVT_95_addBranchTargetOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addBranchTargetOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegCRBITRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegCRBITRCOperands(Inst, 1);
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addRegVRRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegVRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::createImm(10));
      break;
    case CVT_imm_95_76:
      Inst.addOperand(MCOperand::createImm(76));
      break;
    case CVT_regCR0:
      Inst.addOperand(MCOperand::createReg(PPC::CR0));
      break;
    case CVT_95_addRegCRRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegCRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_79:
      Inst.addOperand(MCOperand::createImm(79));
      break;
    case CVT_imm_95_78:
      Inst.addOperand(MCOperand::createImm(78));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_44:
      Inst.addOperand(MCOperand::createImm(44));
      break;
    case CVT_imm_95_47:
      Inst.addOperand(MCOperand::createImm(47));
      break;
    case CVT_imm_95_46:
      Inst.addOperand(MCOperand::createImm(46));
      break;
    case CVT_imm_95_36:
      Inst.addOperand(MCOperand::createImm(36));
      break;
    case CVT_imm_95_39:
      Inst.addOperand(MCOperand::createImm(39));
      break;
    case CVT_imm_95_38:
      Inst.addOperand(MCOperand::createImm(38));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_imm_95_68:
      Inst.addOperand(MCOperand::createImm(68));
      break;
    case CVT_imm_95_71:
      Inst.addOperand(MCOperand::createImm(71));
      break;
    case CVT_imm_95_70:
      Inst.addOperand(MCOperand::createImm(70));
      break;
    case CVT_imm_95_100:
      Inst.addOperand(MCOperand::createImm(100));
      break;
    case CVT_imm_95_103:
      Inst.addOperand(MCOperand::createImm(103));
      break;
    case CVT_imm_95_102:
      Inst.addOperand(MCOperand::createImm(102));
      break;
    case CVT_imm_95_108:
      Inst.addOperand(MCOperand::createImm(108));
      break;
    case CVT_imm_95_111:
      Inst.addOperand(MCOperand::createImm(111));
      break;
    case CVT_imm_95_110:
      Inst.addOperand(MCOperand::createImm(110));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegGxRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addRegGxRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegGxRCOperands(Inst, 1);
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::createReg(PPC::R0));
      break;
    case CVT_95_addRegF4RCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegF4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF8RCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegF8RCOperands(Inst, 1);
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_95_addRegVFRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegVFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSFRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegVSFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSSRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegVSSRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegVSRCOperands(Inst, 1);
      break;
    case CVT_imm_95_29:
      Inst.addOperand(MCOperand::createImm(29));
      break;
    case CVT_imm_95_280:
      Inst.addOperand(MCOperand::createImm(280));
      break;
    case CVT_imm_95_128:
      Inst.addOperand(MCOperand::createImm(128));
      break;
    case CVT_imm_95_129:
      Inst.addOperand(MCOperand::createImm(129));
      break;
    case CVT_imm_95_130:
      Inst.addOperand(MCOperand::createImm(130));
      break;
    case CVT_imm_95_131:
      Inst.addOperand(MCOperand::createImm(131));
      break;
    case CVT_imm_95_132:
      Inst.addOperand(MCOperand::createImm(132));
      break;
    case CVT_imm_95_133:
      Inst.addOperand(MCOperand::createImm(133));
      break;
    case CVT_imm_95_134:
      Inst.addOperand(MCOperand::createImm(134));
      break;
    case CVT_imm_95_135:
      Inst.addOperand(MCOperand::createImm(135));
      break;
    case CVT_imm_95_28:
      Inst.addOperand(MCOperand::createImm(28));
      break;
    case CVT_imm_95_19:
      Inst.addOperand(MCOperand::createImm(19));
      break;
    case CVT_imm_95_537:
      Inst.addOperand(MCOperand::createImm(537));
      break;
    case CVT_imm_95_539:
      Inst.addOperand(MCOperand::createImm(539));
      break;
    case CVT_imm_95_541:
      Inst.addOperand(MCOperand::createImm(541));
      break;
    case CVT_imm_95_543:
      Inst.addOperand(MCOperand::createImm(543));
      break;
    case CVT_imm_95_536:
      Inst.addOperand(MCOperand::createImm(536));
      break;
    case CVT_imm_95_538:
      Inst.addOperand(MCOperand::createImm(538));
      break;
    case CVT_imm_95_540:
      Inst.addOperand(MCOperand::createImm(540));
      break;
    case CVT_imm_95_542:
      Inst.addOperand(MCOperand::createImm(542));
      break;
    case CVT_imm_95_1018:
      Inst.addOperand(MCOperand::createImm(1018));
      break;
    case CVT_imm_95_981:
      Inst.addOperand(MCOperand::createImm(981));
      break;
    case CVT_imm_95_22:
      Inst.addOperand(MCOperand::createImm(22));
      break;
    case CVT_imm_95_17:
      Inst.addOperand(MCOperand::createImm(17));
      break;
    case CVT_imm_95_18:
      Inst.addOperand(MCOperand::createImm(18));
      break;
    case CVT_imm_95_980:
      Inst.addOperand(MCOperand::createImm(980));
      break;
    case CVT_imm_95_529:
      Inst.addOperand(MCOperand::createImm(529));
      break;
    case CVT_imm_95_531:
      Inst.addOperand(MCOperand::createImm(531));
      break;
    case CVT_imm_95_533:
      Inst.addOperand(MCOperand::createImm(533));
      break;
    case CVT_imm_95_535:
      Inst.addOperand(MCOperand::createImm(535));
      break;
    case CVT_imm_95_528:
      Inst.addOperand(MCOperand::createImm(528));
      break;
    case CVT_imm_95_530:
      Inst.addOperand(MCOperand::createImm(530));
      break;
    case CVT_imm_95_532:
      Inst.addOperand(MCOperand::createImm(532));
      break;
    case CVT_imm_95_534:
      Inst.addOperand(MCOperand::createImm(534));
      break;
    case CVT_imm_95_1019:
      Inst.addOperand(MCOperand::createImm(1019));
      break;
    case CVT_95_addCRBitMaskOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addCRBitMaskOperands(Inst, 1);
      break;
    case CVT_imm_95_48:
      Inst.addOperand(MCOperand::createImm(48));
      break;
    case CVT_imm_95_287:
      Inst.addOperand(MCOperand::createImm(287));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_25:
      Inst.addOperand(MCOperand::createImm(25));
      break;
    case CVT_imm_95_512:
      Inst.addOperand(MCOperand::createImm(512));
      break;
    case CVT_imm_95_272:
      Inst.addOperand(MCOperand::createImm(272));
      break;
    case CVT_imm_95_273:
      Inst.addOperand(MCOperand::createImm(273));
      break;
    case CVT_imm_95_274:
      Inst.addOperand(MCOperand::createImm(274));
      break;
    case CVT_imm_95_275:
      Inst.addOperand(MCOperand::createImm(275));
      break;
    case CVT_imm_95_260:
      Inst.addOperand(MCOperand::createImm(260));
      break;
    case CVT_imm_95_261:
      Inst.addOperand(MCOperand::createImm(261));
      break;
    case CVT_imm_95_262:
      Inst.addOperand(MCOperand::createImm(262));
      break;
    case CVT_imm_95_263:
      Inst.addOperand(MCOperand::createImm(263));
      break;
    case CVT_imm_95_26:
      Inst.addOperand(MCOperand::createImm(26));
      break;
    case CVT_imm_95_27:
      Inst.addOperand(MCOperand::createImm(27));
      break;
    case CVT_imm_95_990:
      Inst.addOperand(MCOperand::createImm(990));
      break;
    case CVT_imm_95_991:
      Inst.addOperand(MCOperand::createImm(991));
      break;
    case CVT_imm_95_268:
      Inst.addOperand(MCOperand::createImm(268));
      break;
    case CVT_imm_95_988:
      Inst.addOperand(MCOperand::createImm(988));
      break;
    case CVT_imm_95_989:
      Inst.addOperand(MCOperand::createImm(989));
      break;
    case CVT_imm_95_269:
      Inst.addOperand(MCOperand::createImm(269));
      break;
    case CVT_imm_95_986:
      Inst.addOperand(MCOperand::createImm(986));
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    case CVT_imm_95_284:
      Inst.addOperand(MCOperand::createImm(284));
      break;
    case CVT_imm_95_285:
      Inst.addOperand(MCOperand::createImm(285));
      break;
    case CVT_95_addRegQFRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegQFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegQSRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegQSRCOperands(Inst, 1);
      break;
    case CVT_95_addRegQBRCOperands:
      static_cast<PPCOperand&>(*Operands[OpIdx]).addRegQBRCOperands(Inst, 1);
      break;
    case CVT_imm_95_9:
      Inst.addOperand(MCOperand::createImm(9));
      break;
    case CVT_imm_95_13:
      Inst.addOperand(MCOperand::createImm(13));
      break;
    case CVT_imm_95_20:
      Inst.addOperand(MCOperand::createImm(20));
      break;
    case CVT_imm_95_16:
      Inst.addOperand(MCOperand::createImm(16));
      break;
    case CVT_imm_95_24:
      Inst.addOperand(MCOperand::createImm(24));
      break;
    }
  }
}

void PPCAsmParser::
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
    case CVT_95_addRegG8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addTLSRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addS16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addU16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBranchTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegCRBITRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_76:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regCR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_79:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_78:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_44:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_47:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_46:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_36:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_39:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_38:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_68:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_71:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_70:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_100:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_103:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_102:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_108:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_111:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_110:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegF4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_29:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_280:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_128:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_129:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_130:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_131:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_132:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_133:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_134:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_135:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_19:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_537:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_539:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_541:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_543:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_536:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_538:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_540:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_542:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1018:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_981:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_22:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_17:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_18:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_980:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_529:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_531:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_533:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_535:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_528:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_530:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_532:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_534:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1019:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCRBitMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_287:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_25:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_512:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_272:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_273:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_274:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_275:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_260:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_261:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_262:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_263:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_26:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_27:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_990:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_991:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_268:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_988:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_989:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_269:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_986:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_284:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_285:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegQFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegQSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegQBRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_20:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
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
  MCK__DOT_, // '.'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_2, // '2'
  MCK_3, // '3'
  MCK_4, // '4'
  MCK_5, // '5'
  MCK_6, // '6'
  MCK_7, // '7'
  MCK_CARRYRC, // register class 'CARRYRC'
  MCK_CRRC0, // register class 'CRRC0'
  MCK_CTRRC, // register class 'CTRRC'
  MCK_CTRRC8, // register class 'CTRRC8'
  MCK_VRSAVERC, // register class 'VRSAVERC'
  MCK_CRRC, // register class 'CRRC'
  MCK_CRBITRC, // register class 'CRBITRC'
  MCK_F4RC, // register class 'F4RC,F8RC'
  MCK_QSRC, // register class 'QSRC,QBRC,QFRC'
  MCK_VFRC, // register class 'VFRC'
  MCK_VRRC, // register class 'VRRC'
  MCK_VSLRC, // register class 'VSLRC'
  MCK_Reg5, // derived register class
  MCK_Reg2, // derived register class
  MCK_G8RC, // register class 'G8RC'
  MCK_G8RC_NOX0, // register class 'G8RC_NOX0'
  MCK_GPRC, // register class 'GPRC'
  MCK_GPRC_NOR0, // register class 'GPRC_NOR0'
  MCK_VSRC, // register class 'VSRC'
  MCK_VSSRC, // register class 'VSSRC,VSFRC'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ATBitsAsHint, // user defined class 'PPCATBitsAsHintAsmOperand'
  MCK_CRBitMask, // user defined class 'PPCCRBitMaskOperand'
  MCK_CondBr, // user defined class 'PPCCondBrAsmOperand'
  MCK_DirectBr, // user defined class 'PPCDirectBrAsmOperand'
  MCK_DispRI, // user defined class 'PPCDispRIOperand'
  MCK_DispRIX16, // user defined class 'PPCDispRIX16Operand'
  MCK_DispRIX, // user defined class 'PPCDispRIXOperand'
  MCK_DispSPE2, // user defined class 'PPCDispSPE2Operand'
  MCK_DispSPE4, // user defined class 'PPCDispSPE4Operand'
  MCK_DispSPE8, // user defined class 'PPCDispSPE8Operand'
  MCK_RegCRBITRC, // user defined class 'PPCRegCRBITRCAsmOperand'
  MCK_RegCRRC, // user defined class 'PPCRegCRRCAsmOperand'
  MCK_RegF4RC, // user defined class 'PPCRegF4RCAsmOperand'
  MCK_RegF8RC, // user defined class 'PPCRegF8RCAsmOperand'
  MCK_RegG8RC, // user defined class 'PPCRegG8RCAsmOperand'
  MCK_RegG8RCNoX0, // user defined class 'PPCRegG8RCNoX0AsmOperand'
  MCK_RegGPRC, // user defined class 'PPCRegGPRCAsmOperand'
  MCK_RegGPRCNoR0, // user defined class 'PPCRegGPRCNoR0AsmOperand'
  MCK_RegGxRCNoR0, // user defined class 'PPCRegGxRCNoR0Operand'
  MCK_RegGxRC, // user defined class 'PPCRegGxRCOperand'
  MCK_RegQBRC, // user defined class 'PPCRegQBRCAsmOperand'
  MCK_RegQFRC, // user defined class 'PPCRegQFRCAsmOperand'
  MCK_RegQSRC, // user defined class 'PPCRegQSRCAsmOperand'
  MCK_RegVFRC, // user defined class 'PPCRegVFRCAsmOperand'
  MCK_RegVRRC, // user defined class 'PPCRegVRRCAsmOperand'
  MCK_RegVSFRC, // user defined class 'PPCRegVSFRCAsmOperand'
  MCK_RegVSRC, // user defined class 'PPCRegVSRCAsmOperand'
  MCK_RegVSSRC, // user defined class 'PPCRegVSSRCAsmOperand'
  MCK_S16Imm, // user defined class 'PPCS16ImmAsmOperand'
  MCK_S17Imm, // user defined class 'PPCS17ImmAsmOperand'
  MCK_S5Imm, // user defined class 'PPCS5ImmAsmOperand'
  MCK_TLSReg, // user defined class 'PPCTLSRegOperand'
  MCK_U10Imm, // user defined class 'PPCU10ImmAsmOperand'
  MCK_U12Imm, // user defined class 'PPCU12ImmAsmOperand'
  MCK_U16Imm, // user defined class 'PPCU16ImmAsmOperand'
  MCK_U1Imm, // user defined class 'PPCU1ImmAsmOperand'
  MCK_U2Imm, // user defined class 'PPCU2ImmAsmOperand'
  MCK_U3Imm, // user defined class 'PPCU3ImmAsmOperand'
  MCK_U4Imm, // user defined class 'PPCU4ImmAsmOperand'
  MCK_U5Imm, // user defined class 'PPCU5ImmAsmOperand'
  MCK_U6Imm, // user defined class 'PPCU6ImmAsmOperand'
  MCK_U7Imm, // user defined class 'PPCU7ImmAsmOperand'
  MCK_U8Imm, // user defined class 'PPCU8ImmAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case '2':	 // 1 string to match.
      return MCK_2;	 // "2"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '4':	 // 1 string to match.
      return MCK_4;	 // "4"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '6':	 // 1 string to match.
      return MCK_6;	 // "6"
    case '7':	 // 1 string to match.
      return MCK_7;	 // "7"
    }
    break;
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_CRRC0:
    return B == MCK_CRRC;

  case MCK_F4RC:
    return B == MCK_VSSRC;

  case MCK_VFRC:
    return B == MCK_VSSRC;

  case MCK_VRRC:
    return B == MCK_VSRC;

  case MCK_VSLRC:
    return B == MCK_VSRC;

  case MCK_Reg5:
    switch (B) {
    default: return false;
    case MCK_G8RC: return true;
    case MCK_G8RC_NOX0: return true;
    }

  case MCK_Reg2:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRC_NOR0: return true;
    }
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  PPCOperand &Operand = (PPCOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'Imm' class
  case MCK_Imm:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ATBitsAsHint' class
  case MCK_ATBitsAsHint:
    if (Operand.isATBitsAsHint())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'CRBitMask' class
  case MCK_CRBitMask:
    if (Operand.isCRBitMask())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'CondBr' class
  case MCK_CondBr:
    if (Operand.isCondBr())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'DirectBr' class
  case MCK_DirectBr:
    if (Operand.isDirectBr())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'DispRI' class
  case MCK_DispRI:
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'DispRIX16' class
  case MCK_DispRIX16:
    if (Operand.isS16ImmX16())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'DispRIX' class
  case MCK_DispRIX:
    if (Operand.isS16ImmX4())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'DispSPE2' class
  case MCK_DispSPE2:
    if (Operand.isU6ImmX2())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'DispSPE4' class
  case MCK_DispSPE4:
    if (Operand.isU7ImmX4())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'DispSPE8' class
  case MCK_DispSPE8:
    if (Operand.isU8ImmX8())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegCRBITRC' class
  case MCK_RegCRBITRC:
    if (Operand.isCRBitNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegCRRC' class
  case MCK_RegCRRC:
    if (Operand.isCCRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegF4RC' class
  case MCK_RegF4RC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegF8RC' class
  case MCK_RegF8RC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegG8RC' class
  case MCK_RegG8RC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegG8RCNoX0' class
  case MCK_RegG8RCNoX0:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegGPRC' class
  case MCK_RegGPRC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegGPRCNoR0' class
  case MCK_RegGPRCNoR0:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegGxRCNoR0' class
  case MCK_RegGxRCNoR0:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegGxRC' class
  case MCK_RegGxRC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegQBRC' class
  case MCK_RegQBRC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegQFRC' class
  case MCK_RegQFRC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegQSRC' class
  case MCK_RegQSRC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegVFRC' class
  case MCK_RegVFRC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegVRRC' class
  case MCK_RegVRRC:
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegVSFRC' class
  case MCK_RegVSFRC:
    if (Operand.isVSRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegVSRC' class
  case MCK_RegVSRC:
    if (Operand.isVSRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegVSSRC' class
  case MCK_RegVSSRC:
    if (Operand.isVSRegNumber())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S16Imm' class
  case MCK_S16Imm:
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S17Imm' class
  case MCK_S17Imm:
    if (Operand.isS17Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'S5Imm' class
  case MCK_S5Imm:
    if (Operand.isS5Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'TLSReg' class
  case MCK_TLSReg:
    if (Operand.isTLSReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U10Imm' class
  case MCK_U10Imm:
    if (Operand.isU10Imm())
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
  // 'U3Imm' class
  case MCK_U3Imm:
    if (Operand.isU3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U4Imm' class
  case MCK_U4Imm:
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U5Imm' class
  case MCK_U5Imm:
    if (Operand.isU5Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U6Imm' class
  case MCK_U6Imm:
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U7Imm' class
  case MCK_U7Imm:
    if (Operand.isU7Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'U8Imm' class
  case MCK_U8Imm:
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case PPC::R0: OpKind = MCK_GPRC; break;
    case PPC::R1: OpKind = MCK_Reg2; break;
    case PPC::R2: OpKind = MCK_Reg2; break;
    case PPC::R3: OpKind = MCK_Reg2; break;
    case PPC::R4: OpKind = MCK_Reg2; break;
    case PPC::R5: OpKind = MCK_Reg2; break;
    case PPC::R6: OpKind = MCK_Reg2; break;
    case PPC::R7: OpKind = MCK_Reg2; break;
    case PPC::R8: OpKind = MCK_Reg2; break;
    case PPC::R9: OpKind = MCK_Reg2; break;
    case PPC::R10: OpKind = MCK_Reg2; break;
    case PPC::R11: OpKind = MCK_Reg2; break;
    case PPC::R12: OpKind = MCK_Reg2; break;
    case PPC::R13: OpKind = MCK_Reg2; break;
    case PPC::R14: OpKind = MCK_Reg2; break;
    case PPC::R15: OpKind = MCK_Reg2; break;
    case PPC::R16: OpKind = MCK_Reg2; break;
    case PPC::R17: OpKind = MCK_Reg2; break;
    case PPC::R18: OpKind = MCK_Reg2; break;
    case PPC::R19: OpKind = MCK_Reg2; break;
    case PPC::R20: OpKind = MCK_Reg2; break;
    case PPC::R21: OpKind = MCK_Reg2; break;
    case PPC::R22: OpKind = MCK_Reg2; break;
    case PPC::R23: OpKind = MCK_Reg2; break;
    case PPC::R24: OpKind = MCK_Reg2; break;
    case PPC::R25: OpKind = MCK_Reg2; break;
    case PPC::R26: OpKind = MCK_Reg2; break;
    case PPC::R27: OpKind = MCK_Reg2; break;
    case PPC::R28: OpKind = MCK_Reg2; break;
    case PPC::R29: OpKind = MCK_Reg2; break;
    case PPC::R30: OpKind = MCK_Reg2; break;
    case PPC::R31: OpKind = MCK_Reg2; break;
    case PPC::X0: OpKind = MCK_G8RC; break;
    case PPC::X1: OpKind = MCK_Reg5; break;
    case PPC::X2: OpKind = MCK_Reg5; break;
    case PPC::X3: OpKind = MCK_Reg5; break;
    case PPC::X4: OpKind = MCK_Reg5; break;
    case PPC::X5: OpKind = MCK_Reg5; break;
    case PPC::X6: OpKind = MCK_Reg5; break;
    case PPC::X7: OpKind = MCK_Reg5; break;
    case PPC::X8: OpKind = MCK_Reg5; break;
    case PPC::X9: OpKind = MCK_Reg5; break;
    case PPC::X10: OpKind = MCK_Reg5; break;
    case PPC::X11: OpKind = MCK_Reg5; break;
    case PPC::X12: OpKind = MCK_Reg5; break;
    case PPC::X13: OpKind = MCK_Reg5; break;
    case PPC::X14: OpKind = MCK_Reg5; break;
    case PPC::X15: OpKind = MCK_Reg5; break;
    case PPC::X16: OpKind = MCK_Reg5; break;
    case PPC::X17: OpKind = MCK_Reg5; break;
    case PPC::X18: OpKind = MCK_Reg5; break;
    case PPC::X19: OpKind = MCK_Reg5; break;
    case PPC::X20: OpKind = MCK_Reg5; break;
    case PPC::X21: OpKind = MCK_Reg5; break;
    case PPC::X22: OpKind = MCK_Reg5; break;
    case PPC::X23: OpKind = MCK_Reg5; break;
    case PPC::X24: OpKind = MCK_Reg5; break;
    case PPC::X25: OpKind = MCK_Reg5; break;
    case PPC::X26: OpKind = MCK_Reg5; break;
    case PPC::X27: OpKind = MCK_Reg5; break;
    case PPC::X28: OpKind = MCK_Reg5; break;
    case PPC::X29: OpKind = MCK_Reg5; break;
    case PPC::X30: OpKind = MCK_Reg5; break;
    case PPC::X31: OpKind = MCK_Reg5; break;
    case PPC::F0: OpKind = MCK_F4RC; break;
    case PPC::F1: OpKind = MCK_F4RC; break;
    case PPC::F2: OpKind = MCK_F4RC; break;
    case PPC::F3: OpKind = MCK_F4RC; break;
    case PPC::F4: OpKind = MCK_F4RC; break;
    case PPC::F5: OpKind = MCK_F4RC; break;
    case PPC::F6: OpKind = MCK_F4RC; break;
    case PPC::F7: OpKind = MCK_F4RC; break;
    case PPC::F8: OpKind = MCK_F4RC; break;
    case PPC::F9: OpKind = MCK_F4RC; break;
    case PPC::F10: OpKind = MCK_F4RC; break;
    case PPC::F11: OpKind = MCK_F4RC; break;
    case PPC::F12: OpKind = MCK_F4RC; break;
    case PPC::F13: OpKind = MCK_F4RC; break;
    case PPC::F14: OpKind = MCK_F4RC; break;
    case PPC::F15: OpKind = MCK_F4RC; break;
    case PPC::F16: OpKind = MCK_F4RC; break;
    case PPC::F17: OpKind = MCK_F4RC; break;
    case PPC::F18: OpKind = MCK_F4RC; break;
    case PPC::F19: OpKind = MCK_F4RC; break;
    case PPC::F20: OpKind = MCK_F4RC; break;
    case PPC::F21: OpKind = MCK_F4RC; break;
    case PPC::F22: OpKind = MCK_F4RC; break;
    case PPC::F23: OpKind = MCK_F4RC; break;
    case PPC::F24: OpKind = MCK_F4RC; break;
    case PPC::F25: OpKind = MCK_F4RC; break;
    case PPC::F26: OpKind = MCK_F4RC; break;
    case PPC::F27: OpKind = MCK_F4RC; break;
    case PPC::F28: OpKind = MCK_F4RC; break;
    case PPC::F29: OpKind = MCK_F4RC; break;
    case PPC::F30: OpKind = MCK_F4RC; break;
    case PPC::F31: OpKind = MCK_F4RC; break;
    case PPC::VF0: OpKind = MCK_VFRC; break;
    case PPC::VF1: OpKind = MCK_VFRC; break;
    case PPC::VF2: OpKind = MCK_VFRC; break;
    case PPC::VF3: OpKind = MCK_VFRC; break;
    case PPC::VF4: OpKind = MCK_VFRC; break;
    case PPC::VF5: OpKind = MCK_VFRC; break;
    case PPC::VF6: OpKind = MCK_VFRC; break;
    case PPC::VF7: OpKind = MCK_VFRC; break;
    case PPC::VF8: OpKind = MCK_VFRC; break;
    case PPC::VF9: OpKind = MCK_VFRC; break;
    case PPC::VF10: OpKind = MCK_VFRC; break;
    case PPC::VF11: OpKind = MCK_VFRC; break;
    case PPC::VF12: OpKind = MCK_VFRC; break;
    case PPC::VF13: OpKind = MCK_VFRC; break;
    case PPC::VF14: OpKind = MCK_VFRC; break;
    case PPC::VF15: OpKind = MCK_VFRC; break;
    case PPC::VF16: OpKind = MCK_VFRC; break;
    case PPC::VF17: OpKind = MCK_VFRC; break;
    case PPC::VF18: OpKind = MCK_VFRC; break;
    case PPC::VF19: OpKind = MCK_VFRC; break;
    case PPC::VF20: OpKind = MCK_VFRC; break;
    case PPC::VF21: OpKind = MCK_VFRC; break;
    case PPC::VF22: OpKind = MCK_VFRC; break;
    case PPC::VF23: OpKind = MCK_VFRC; break;
    case PPC::VF24: OpKind = MCK_VFRC; break;
    case PPC::VF25: OpKind = MCK_VFRC; break;
    case PPC::VF26: OpKind = MCK_VFRC; break;
    case PPC::VF27: OpKind = MCK_VFRC; break;
    case PPC::VF28: OpKind = MCK_VFRC; break;
    case PPC::VF29: OpKind = MCK_VFRC; break;
    case PPC::VF30: OpKind = MCK_VFRC; break;
    case PPC::VF31: OpKind = MCK_VFRC; break;
    case PPC::QF0: OpKind = MCK_QSRC; break;
    case PPC::QF1: OpKind = MCK_QSRC; break;
    case PPC::QF2: OpKind = MCK_QSRC; break;
    case PPC::QF3: OpKind = MCK_QSRC; break;
    case PPC::QF4: OpKind = MCK_QSRC; break;
    case PPC::QF5: OpKind = MCK_QSRC; break;
    case PPC::QF6: OpKind = MCK_QSRC; break;
    case PPC::QF7: OpKind = MCK_QSRC; break;
    case PPC::QF8: OpKind = MCK_QSRC; break;
    case PPC::QF9: OpKind = MCK_QSRC; break;
    case PPC::QF10: OpKind = MCK_QSRC; break;
    case PPC::QF11: OpKind = MCK_QSRC; break;
    case PPC::QF12: OpKind = MCK_QSRC; break;
    case PPC::QF13: OpKind = MCK_QSRC; break;
    case PPC::QF14: OpKind = MCK_QSRC; break;
    case PPC::QF15: OpKind = MCK_QSRC; break;
    case PPC::QF16: OpKind = MCK_QSRC; break;
    case PPC::QF17: OpKind = MCK_QSRC; break;
    case PPC::QF18: OpKind = MCK_QSRC; break;
    case PPC::QF19: OpKind = MCK_QSRC; break;
    case PPC::QF20: OpKind = MCK_QSRC; break;
    case PPC::QF21: OpKind = MCK_QSRC; break;
    case PPC::QF22: OpKind = MCK_QSRC; break;
    case PPC::QF23: OpKind = MCK_QSRC; break;
    case PPC::QF24: OpKind = MCK_QSRC; break;
    case PPC::QF25: OpKind = MCK_QSRC; break;
    case PPC::QF26: OpKind = MCK_QSRC; break;
    case PPC::QF27: OpKind = MCK_QSRC; break;
    case PPC::QF28: OpKind = MCK_QSRC; break;
    case PPC::QF29: OpKind = MCK_QSRC; break;
    case PPC::QF30: OpKind = MCK_QSRC; break;
    case PPC::QF31: OpKind = MCK_QSRC; break;
    case PPC::V0: OpKind = MCK_VRRC; break;
    case PPC::V1: OpKind = MCK_VRRC; break;
    case PPC::V2: OpKind = MCK_VRRC; break;
    case PPC::V3: OpKind = MCK_VRRC; break;
    case PPC::V4: OpKind = MCK_VRRC; break;
    case PPC::V5: OpKind = MCK_VRRC; break;
    case PPC::V6: OpKind = MCK_VRRC; break;
    case PPC::V7: OpKind = MCK_VRRC; break;
    case PPC::V8: OpKind = MCK_VRRC; break;
    case PPC::V9: OpKind = MCK_VRRC; break;
    case PPC::V10: OpKind = MCK_VRRC; break;
    case PPC::V11: OpKind = MCK_VRRC; break;
    case PPC::V12: OpKind = MCK_VRRC; break;
    case PPC::V13: OpKind = MCK_VRRC; break;
    case PPC::V14: OpKind = MCK_VRRC; break;
    case PPC::V15: OpKind = MCK_VRRC; break;
    case PPC::V16: OpKind = MCK_VRRC; break;
    case PPC::V17: OpKind = MCK_VRRC; break;
    case PPC::V18: OpKind = MCK_VRRC; break;
    case PPC::V19: OpKind = MCK_VRRC; break;
    case PPC::V20: OpKind = MCK_VRRC; break;
    case PPC::V21: OpKind = MCK_VRRC; break;
    case PPC::V22: OpKind = MCK_VRRC; break;
    case PPC::V23: OpKind = MCK_VRRC; break;
    case PPC::V24: OpKind = MCK_VRRC; break;
    case PPC::V25: OpKind = MCK_VRRC; break;
    case PPC::V26: OpKind = MCK_VRRC; break;
    case PPC::V27: OpKind = MCK_VRRC; break;
    case PPC::V28: OpKind = MCK_VRRC; break;
    case PPC::V29: OpKind = MCK_VRRC; break;
    case PPC::V30: OpKind = MCK_VRRC; break;
    case PPC::V31: OpKind = MCK_VRRC; break;
    case PPC::VSL0: OpKind = MCK_VSLRC; break;
    case PPC::VSL1: OpKind = MCK_VSLRC; break;
    case PPC::VSL2: OpKind = MCK_VSLRC; break;
    case PPC::VSL3: OpKind = MCK_VSLRC; break;
    case PPC::VSL4: OpKind = MCK_VSLRC; break;
    case PPC::VSL5: OpKind = MCK_VSLRC; break;
    case PPC::VSL6: OpKind = MCK_VSLRC; break;
    case PPC::VSL7: OpKind = MCK_VSLRC; break;
    case PPC::VSL8: OpKind = MCK_VSLRC; break;
    case PPC::VSL9: OpKind = MCK_VSLRC; break;
    case PPC::VSL10: OpKind = MCK_VSLRC; break;
    case PPC::VSL11: OpKind = MCK_VSLRC; break;
    case PPC::VSL12: OpKind = MCK_VSLRC; break;
    case PPC::VSL13: OpKind = MCK_VSLRC; break;
    case PPC::VSL14: OpKind = MCK_VSLRC; break;
    case PPC::VSL15: OpKind = MCK_VSLRC; break;
    case PPC::VSL16: OpKind = MCK_VSLRC; break;
    case PPC::VSL17: OpKind = MCK_VSLRC; break;
    case PPC::VSL18: OpKind = MCK_VSLRC; break;
    case PPC::VSL19: OpKind = MCK_VSLRC; break;
    case PPC::VSL20: OpKind = MCK_VSLRC; break;
    case PPC::VSL21: OpKind = MCK_VSLRC; break;
    case PPC::VSL22: OpKind = MCK_VSLRC; break;
    case PPC::VSL23: OpKind = MCK_VSLRC; break;
    case PPC::VSL24: OpKind = MCK_VSLRC; break;
    case PPC::VSL25: OpKind = MCK_VSLRC; break;
    case PPC::VSL26: OpKind = MCK_VSLRC; break;
    case PPC::VSL27: OpKind = MCK_VSLRC; break;
    case PPC::VSL28: OpKind = MCK_VSLRC; break;
    case PPC::VSL29: OpKind = MCK_VSLRC; break;
    case PPC::VSL30: OpKind = MCK_VSLRC; break;
    case PPC::VSL31: OpKind = MCK_VSLRC; break;
    case PPC::ZERO: OpKind = MCK_GPRC_NOR0; break;
    case PPC::ZERO8: OpKind = MCK_G8RC_NOX0; break;
    case PPC::FP: OpKind = MCK_Reg2; break;
    case PPC::FP8: OpKind = MCK_Reg5; break;
    case PPC::BP: OpKind = MCK_Reg2; break;
    case PPC::BP8: OpKind = MCK_Reg5; break;
    case PPC::CR0LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR0UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR1LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR1UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR2LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR2UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR3LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR3UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR4LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR4UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR5LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR5UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR6LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR6UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR7LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR7UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR0: OpKind = MCK_CRRC0; break;
    case PPC::CR1: OpKind = MCK_CRRC; break;
    case PPC::CR2: OpKind = MCK_CRRC; break;
    case PPC::CR3: OpKind = MCK_CRRC; break;
    case PPC::CR4: OpKind = MCK_CRRC; break;
    case PPC::CR5: OpKind = MCK_CRRC; break;
    case PPC::CR6: OpKind = MCK_CRRC; break;
    case PPC::CR7: OpKind = MCK_CRRC; break;
    case PPC::CTR: OpKind = MCK_CTRRC; break;
    case PPC::CTR8: OpKind = MCK_CTRRC8; break;
    case PPC::VRSAVE: OpKind = MCK_VRSAVERC; break;
    case PPC::CARRY: OpKind = MCK_CARRYRC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t PPCAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\004addc\004adde\004addi\005addic\005addis\005addme\005addze\003"
    "and\004andc\004andi\005andis\004attn\001b\002ba\002bc\003bc+\003bc-\003"
    "bca\004bca+\004bca-\005bcctr\006bcctrl\006bcdcfn\007bcdcfsq\006bcdcfz\010"
    "bcdcpsgn\006bcdctn\007bcdctsq\006bcdctz\004bcds\tbcdsetsgn\005bcdsr\010"
    "bcdtrunc\005bcdus\tbcdutrunc\003bcl\004bcl+\004bcl-\004bcla\005bcla+\005"
    "bcla-\004bclr\005bclrl\004bctr\005bctrl\004bdnz\005bdnz+\005bdnz-\005bd"
    "nza\006bdnza+\006bdnza-\005bdnzf\006bdnzfa\006bdnzfl\007bdnzfla\007bdnz"
    "flr\010bdnzflrl\005bdnzl\006bdnzl+\006bdnzl-\006bdnzla\007bdnzla+\007bd"
    "nzla-\006bdnzlr\007bdnzlr+\007bdnzlr-\007bdnzlrl\010bdnzlrl+\010bdnzlrl"
    "-\005bdnzt\006bdnzta\006bdnztl\007bdnztla\007bdnztlr\010bdnztlrl\003bdz"
    "\004bdz+\004bdz-\004bdza\005bdza+\005bdza-\004bdzf\005bdzfa\005bdzfl\006"
    "bdzfla\006bdzflr\007bdzflrl\004bdzl\005bdzl+\005bdzl-\005bdzla\006bdzla"
    "+\006bdzla-\005bdzlr\006bdzlr+\006bdzlr-\006bdzlrl\007bdzlrl+\007bdzlrl"
    "-\004bdzt\005bdzta\005bdztl\006bdztla\006bdztlr\007bdztlrl\003beq\004be"
    "q+\004beq-\004beqa\005beqa+\005beqa-\006beqctr\007beqctr+\007beqctr-\007"
    "beqctrl\010beqctrl+\010beqctrl-\004beql\005beql+\005beql-\005beqla\006b"
    "eqla+\006beqla-\005beqlr\006beqlr+\006beqlr-\006beqlrl\007beqlrl+\007be"
    "qlrl-\002bf\003bf+\003bf-\003bfa\004bfa+\004bfa-\005bfctr\006bfctr+\006"
    "bfctr-\006bfctrl\007bfctrl+\007bfctrl-\003bfl\004bfl+\004bfl-\004bfla\005"
    "bfla+\005bfla-\004bflr\005bflr+\005bflr-\005bflrl\006bflrl+\006bflrl-\003"
    "bge\004bge+\004bge-\004bgea\005bgea+\005bgea-\006bgectr\007bgectr+\007b"
    "gectr-\007bgectrl\010bgectrl+\010bgectrl-\004bgel\005bgel+\005bgel-\005"
    "bgela\006bgela+\006bgela-\005bgelr\006bgelr+\006bgelr-\006bgelrl\007bge"
    "lrl+\007bgelrl-\003bgt\004bgt+\004bgt-\004bgta\005bgta+\005bgta-\006bgt"
    "ctr\007bgtctr+\007bgtctr-\007bgtctrl\010bgtctrl+\010bgtctrl-\004bgtl\005"
    "bgtl+\005bgtl-\005bgtla\006bgtla+\006bgtla-\005bgtlr\006bgtlr+\006bgtlr"
    "-\006bgtlrl\007bgtlrl+\007bgtlrl-\002bl\003bla\003ble\004ble+\004ble-\004"
    "blea\005blea+\005blea-\006blectr\007blectr+\007blectr-\007blectrl\010bl"
    "ectrl+\010blectrl-\004blel\005blel+\005blel-\005blela\006blela+\006blel"
    "a-\005blelr\006blelr+\006blelr-\006blelrl\007blelrl+\007blelrl-\003blr\004"
    "blrl\003blt\004blt+\004blt-\004blta\005blta+\005blta-\006bltctr\007bltc"
    "tr+\007bltctr-\007bltctrl\010bltctrl+\010bltctrl-\004bltl\005bltl+\005b"
    "ltl-\005bltla\006bltla+\006bltla-\005bltlr\006bltlr+\006bltlr-\006bltlr"
    "l\007bltlrl+\007bltlrl-\003bne\004bne+\004bne-\004bnea\005bnea+\005bnea"
    "-\006bnectr\007bnectr+\007bnectr-\007bnectrl\010bnectrl+\010bnectrl-\004"
    "bnel\005bnel+\005bnel-\005bnela\006bnela+\006bnela-\005bnelr\006bnelr+\006"
    "bnelr-\006bnelrl\007bnelrl+\007bnelrl-\003bng\004bng+\004bng-\004bnga\005"
    "bnga+\005bnga-\006bngctr\007bngctr+\007bngctr-\007bngctrl\010bngctrl+\010"
    "bngctrl-\004bngl\005bngl+\005bngl-\005bngla\006bngla+\006bngla-\005bngl"
    "r\006bnglr+\006bnglr-\006bnglrl\007bnglrl+\007bnglrl-\003bnl\004bnl+\004"
    "bnl-\004bnla\005bnla+\005bnla-\006bnlctr\007bnlctr+\007bnlctr-\007bnlct"
    "rl\010bnlctrl+\010bnlctrl-\004bnll\005bnll+\005bnll-\005bnlla\006bnlla+"
    "\006bnlla-\005bnllr\006bnllr+\006bnllr-\006bnllrl\007bnllrl+\007bnllrl-"
    "\003bns\004bns+\004bns-\004bnsa\005bnsa+\005bnsa-\006bnsctr\007bnsctr+\007"
    "bnsctr-\007bnsctrl\010bnsctrl+\010bnsctrl-\004bnsl\005bnsl+\005bnsl-\005"
    "bnsla\006bnsla+\006bnsla-\005bnslr\006bnslr+\006bnslr-\006bnslrl\007bns"
    "lrl+\007bnslrl-\003bnu\004bnu+\004bnu-\004bnua\005bnua+\005bnua-\006bnu"
    "ctr\007bnuctr+\007bnuctr-\007bnuctrl\010bnuctrl+\010bnuctrl-\004bnul\005"
    "bnul+\005bnul-\005bnula\006bnula+\006bnula-\005bnulr\006bnulr+\006bnulr"
    "-\006bnulrl\007bnulrl+\007bnulrl-\006bpermd\005brinc\003bso\004bso+\004"
    "bso-\004bsoa\005bsoa+\005bsoa-\006bsoctr\007bsoctr+\007bsoctr-\007bsoct"
    "rl\010bsoctrl+\010bsoctrl-\004bsol\005bsol+\005bsol-\005bsola\006bsola+"
    "\006bsola-\005bsolr\006bsolr+\006bsolr-\006bsolrl\007bsolrl+\007bsolrl-"
    "\002bt\003bt+\003bt-\003bta\004bta+\004bta-\005btctr\006btctr+\006btctr"
    "-\006btctrl\007btctrl+\007btctrl-\003btl\004btl+\004btl-\004btla\005btl"
    "a+\005btla-\004btlr\005btlr+\005btlr-\005btlrl\006btlrl+\006btlrl-\003b"
    "un\004bun+\004bun-\004buna\005buna+\005buna-\006bunctr\007bunctr+\007bu"
    "nctr-\007bunctrl\010bunctrl+\010bunctrl-\004bunl\005bunl+\005bunl-\005b"
    "unla\006bunla+\006bunla-\005bunlr\006bunlr+\006bunlr-\006bunlrl\007bunl"
    "rl+\007bunlrl-\007clrbhrb\006clrldi\010clrlsldi\010clrlslwi\006clrlwi\006"
    "clrrdi\006clrrwi\003cmp\004cmpb\004cmpd\005cmpdi\006cmpeqb\004cmpi\004c"
    "mpl\005cmpld\006cmpldi\005cmpli\005cmplw\006cmplwi\005cmprb\004cmpw\005"
    "cmpwi\006cntlzd\006cntlzw\006cnttzd\006cnttzw\004copy\ncopy_first\010cp"
    "_abort\005crand\006crandc\005crclr\005creqv\006crmove\006crnand\005crno"
    "r\005crnot\004cror\005crorc\005crset\005crxor\004dcba\004dcbf\005dcbfl\006"
    "dcbflp\004dcbi\005dcbst\004dcbt\006dcbtct\006dcbtds\006dcbtst\010dcbtst"
    "ct\010dcbtstds\007dcbtstt\005dcbtt\004dcbz\005dcbzl\005dccci\003dci\004"
    "divd\005divde\006divdeu\005divdu\004divw\005divwe\006divweu\005divwu\003"
    "dss\006dssall\003dst\005dstst\006dststt\004dstt\005eieio\003eqv\005evab"
    "s\007evaddiw\013evaddsmiaaw\013evaddssiaaw\013evaddumiaaw\013evaddusiaa"
    "w\006evaddw\005evand\006evandc\007evcmpeq\010evcmpgts\010evcmpgtu\010ev"
    "cmplts\010evcmpltu\010evcntlsw\010evcntlzw\007evdivws\007evdivwu\005eve"
    "qv\007evextsb\007evextsh\005evldd\006evlddx\005evldh\006evldhx\005evldw"
    "\006evldwx\013evlhhesplat\014evlhhesplatx\014evlhhossplat\015evlhhosspl"
    "atx\014evlhhousplat\015evlhhousplatx\006evlwhe\007evlwhex\007evlwhos\010"
    "evlwhosx\007evlwhou\010evlwhoux\nevlwhsplat\013evlwhsplatx\nevlwwsplat\013"
    "evlwwsplatx\tevmergehi\013evmergehilo\tevmergelo\013evmergelohi\013evmh"
    "egsmfaa\013evmhegsmfan\013evmhegsmiaa\013evmhegsmian\013evmhegumiaa\013"
    "evmhegumian\010evmhesmf\tevmhesmfa\013evmhesmfaaw\013evmhesmfanw\010evm"
    "hesmi\tevmhesmia\013evmhesmiaaw\013evmhesmianw\010evmhessf\tevmhessfa\013"
    "evmhessfaaw\013evmhessfanw\013evmhessiaaw\013evmhessianw\010evmheumi\te"
    "vmheumia\013evmheumiaaw\013evmheumianw\013evmheusiaaw\013evmheusianw\013"
    "evmhogsmfaa\013evmhogsmfan\013evmhogsmiaa\013evmhogsmian\013evmhogumiaa"
    "\013evmhogumian\010evmhosmf\tevmhosmfa\013evmhosmfaaw\013evmhosmfanw\010"
    "evmhosmi\tevmhosmia\013evmhosmiaaw\013evmhosmianw\010evmhossf\tevmhossf"
    "a\013evmhossfaaw\013evmhossfanw\013evmhossiaaw\013evmhossianw\010evmhou"
    "mi\tevmhoumia\013evmhoumiaaw\013evmhoumianw\013evmhousiaaw\013evmhousia"
    "nw\005evmra\010evmwhsmf\tevmwhsmfa\010evmwhsmi\tevmwhsmia\010evmwhssf\t"
    "evmwhssfa\010evmwhumi\tevmwhumia\013evmwlsmiaaw\013evmwlsmianw\013evmwl"
    "ssiaaw\013evmwlssianw\010evmwlumi\tevmwlumia\013evmwlumiaaw\013evmwlumi"
    "anw\013evmwlusiaaw\013evmwlusianw\007evmwsmf\010evmwsmfa\tevmwsmfaa\tev"
    "mwsmfan\007evmwsmi\010evmwsmia\tevmwsmiaa\tevmwsmian\007evmwssf\010evmw"
    "ssfa\tevmwssfaa\tevmwssfan\007evmwumi\010evmwumia\tevmwumiaa\tevmwumian"
    "\006evnand\005evneg\005evnor\004evor\005evorc\005evrlw\006evrlwi\006evr"
    "ndw\005evslw\006evslwi\tevsplatfi\010evsplati\007evsrwis\007evsrwiu\006"
    "evsrws\006evsrwu\006evstdd\007evstddx\006evstdh\007evstdhx\006evstdw\007"
    "evstdwx\007evstwhe\010evstwhex\007evstwho\010evstwhox\007evstwwe\010evs"
    "twwex\007evstwwo\010evstwwox\014evsubfsmiaaw\014evsubfssiaaw\014evsubfu"
    "miaaw\014evsubfusiaaw\007evsubfw\010evsubifw\005evxor\006extldi\006extl"
    "wi\006extrdi\006extrwi\005extsb\005extsh\005extsw\004fabs\004fadd\005fa"
    "dds\005fcfid\006fcfids\006fcfidu\007fcfidus\005fcmpu\006fcpsgn\005fctid"
    "\007fctiduz\006fctidz\005fctiw\007fctiwuz\006fctiwz\004fdiv\005fdivs\005"
    "fmadd\006fmadds\003fmr\005fmsub\006fmsubs\004fmul\005fmuls\005fnabs\004"
    "fneg\006fnmadd\007fnmadds\006fnmsub\007fnmsubs\003fre\004fres\004frim\004"
    "frin\004frip\004friz\004frsp\007frsqrte\010frsqrtes\004fsel\005fsqrt\006"
    "fsqrts\004fsub\005fsubs\005hrfid\004icbi\004icbt\005iccci\003ici\006ins"
    "lwi\006insrdi\006insrwi\004isel\005isync\002la\005lbarx\003lbz\006lbzci"
    "x\004lbzu\005lbzux\004lbzx\002ld\005ldarx\004ldat\005ldbrx\005ldcix\004"
    "ldmx\003ldu\004ldux\003ldx\003lfd\004lfdu\005lfdux\004lfdx\006lfiwax\006"
    "lfiwzx\003lfs\004lfsu\005lfsux\004lfsx\003lha\005lharx\004lhau\005lhaux"
    "\004lhax\005lhbrx\003lhz\006lhzcix\004lhzu\005lhzux\004lhzx\002li\003li"
    "s\003lmw\004lswi\005lvebx\005lvehx\005lvewx\004lvsl\004lvsr\003lvx\004l"
    "vxl\003lwa\005lwarx\004lwat\005lwaux\004lwax\005lwbrx\006lwsync\003lwz\006"
    "lwzcix\004lwzu\005lwzux\004lwzx\004lxsd\005lxsdx\007lxsibzx\007lxsihzx\007"
    "lxsiwax\007lxsiwzx\005lxssp\006lxsspx\003lxv\007lxvb16x\006lxvd2x\006lx"
    "vdsx\006lxvh8x\004lxvl\005lxvll\006lxvw4x\006lxvwsx\004lxvx\004mbar\004"
    "mcrf\005mcrfs\006mcrxrx\005mfamr\005mfasr\007mfbhrbe\005mfbr0\005mfbr1\005"
    "mfbr2\005mfbr3\005mfbr4\005mfbr5\005mfbr6\005mfbr7\006mfcfar\004mfcr\005"
    "mfctr\005mfdar\007mfdbatl\007mfdbatu\006mfdccr\005mfdcr\006mfdear\005mf"
    "dec\006mfdscr\007mfdsisr\005mfesr\004mffs\007mfibatl\007mfibatu\006mfic"
    "cr\004mflr\005mfmsr\006mfocrf\005mfpid\005mfpvr\006mfrtcl\006mfrtcu\006"
    "mfsdr1\tmfspefscr\005mfspr\006mfsprg\007mfsprg0\007mfsprg1\007mfsprg2\007"
    "mfsprg3\007mfsprg4\007mfsprg5\007mfsprg6\007mfsprg7\004mfsr\006mfsrin\006"
    "mfsrr0\006mfsrr1\006mfsrr2\006mfsrr3\004mftb\006mftbhi\005mftbl\006mftb"
    "lo\005mftbu\005mftcr\010mfvrsave\006mfvscr\006mfvsrd\007mfvsrld\007mfvs"
    "rwz\005mfxer\002mr\007msgsync\005msync\005mtamr\005mtasr\005mtbr0\005mt"
    "br1\005mtbr2\005mtbr3\005mtbr4\005mtbr5\005mtbr6\005mtbr7\006mtcfar\004"
    "mtcr\005mtcrf\005mtctr\005mtdar\007mtdbatl\007mtdbatu\006mtdccr\005mtdc"
    "r\006mtdear\005mtdec\006mtdscr\007mtdsisr\005mtesr\006mtfsb0\006mtfsb1\005"
    "mtfsf\006mtfsfi\007mtibatl\007mtibatu\006mticcr\004mtlr\005mtmsr\006mtm"
    "srd\006mtocrf\005mtpid\006mtsdr1\tmtspefscr\005mtspr\006mtsprg\007mtspr"
    "g0\007mtsprg1\007mtsprg2\007mtsprg3\007mtsprg4\007mtsprg5\007mtsprg6\007"
    "mtsprg7\004mtsr\006mtsrin\006mtsrr0\006mtsrr1\006mtsrr2\006mtsrr3\006mt"
    "tbhi\005mttbl\006mttblo\005mttbu\005mttcr\010mtvrsave\006mtvscr\006mtvs"
    "rd\007mtvsrdd\007mtvsrwa\007mtvsrws\007mtvsrwz\005mtxer\005mulhd\006mul"
    "hdu\005mulhw\006mulhwu\005mulld\005mulli\005mullw\004nand\003nap\003neg"
    "\003nop\003nor\003not\002or\003orc\003ori\004oris\005paste\npaste_last\007"
    "popcntd\007popcntw\007ptesync\010qvaligni\tqvesplati\006qvfabs\006qvfad"
    "d\007qvfadds\006qvfand\007qvfandc\007qvfcfid\010qvfcfids\010qvfcfidu\tq"
    "vfcfidus\006qvfclr\010qvfcmpeq\010qvfcmpgt\010qvfcmplt\010qvfcpsgn\007q"
    "vfctfb\007qvfctid\010qvfctidu\tqvfctiduz\010qvfctidz\007qvfctiw\010qvfc"
    "tiwu\tqvfctiwuz\010qvfctiwz\006qvfequ\nqvflogical\007qvfmadd\010qvfmadd"
    "s\005qvfmr\007qvfmsub\010qvfmsubs\006qvfmul\007qvfmuls\007qvfnabs\007qv"
    "fnand\006qvfneg\010qvfnmadd\tqvfnmadds\010qvfnmsub\tqvfnmsubs\006qvfnor"
    "\006qvfnot\005qvfor\006qvforc\007qvfperm\005qvfre\006qvfres\006qvfrim\006"
    "qvfrin\006qvfrip\006qvfriz\006qvfrsp\tqvfrsqrte\nqvfrsqrtes\006qvfsel\006"
    "qvfset\006qvfsub\007qvfsubs\tqvftstnan\010qvfxmadd\tqvfxmadds\007qvfxmu"
    "l\010qvfxmuls\006qvfxor\014qvfxxcpnmadd\015qvfxxcpnmadds\tqvfxxmadd\nqv"
    "fxxmadds\013qvfxxnpmadd\014qvfxxnpmadds\006qvgpci\010qvlfcdux\tqvlfcdux"
    "a\007qvlfcdx\010qvlfcdxa\010qvlfcsux\tqvlfcsuxa\007qvlfcsx\010qvlfcsxa\007"
    "qvlfdux\010qvlfduxa\006qvlfdx\007qvlfdxa\010qvlfiwax\tqvlfiwaxa\010qvlf"
    "iwzx\tqvlfiwzxa\007qvlfsux\010qvlfsuxa\006qvlfsx\007qvlfsxa\010qvlpcldx"
    "\010qvlpclsx\010qvlpcrdx\010qvlpcrsx\tqvstfcdux\nqvstfcduxa\nqvstfcduxi"
    "\013qvstfcduxia\010qvstfcdx\tqvstfcdxa\tqvstfcdxi\nqvstfcdxia\tqvstfcsu"
    "x\nqvstfcsuxa\nqvstfcsuxi\013qvstfcsuxia\010qvstfcsx\tqvstfcsxa\tqvstfc"
    "sxi\nqvstfcsxia\010qvstfdux\tqvstfduxa\tqvstfduxi\nqvstfduxia\007qvstfd"
    "x\010qvstfdxa\010qvstfdxi\tqvstfdxia\010qvstfiwx\tqvstfiwxa\010qvstfsux"
    "\tqvstfsuxa\tqvstfsuxi\nqvstfsuxia\007qvstfsx\010qvstfsxa\010qvstfsxi\t"
    "qvstfsxia\004rfci\004rfdi\005rfebb\003rfi\004rfid\005rfmci\005rldcl\005"
    "rldcr\005rldic\006rldicl\006rldicr\006rldimi\006rlwimi\006rlwinm\005rlw"
    "nm\005rotld\006rotldi\005rotlw\006rotlwi\006rotrdi\006rotrwi\002sc\005s"
    "lbia\005slbie\006slbieg\007slbmfee\007slbmfev\006slbmte\007slbsync\003s"
    "ld\004sldi\003slw\004slwi\004srad\005sradi\004sraw\005srawi\003srd\004s"
    "rdi\003srw\004srwi\003stb\006stbcix\005stbcx\004stbu\005stbux\004stbx\003"
    "std\005stdat\006stdbrx\006stdcix\005stdcx\004stdu\005stdux\004stdx\004s"
    "tfd\005stfdu\006stfdux\005stfdx\006stfiwx\004stfs\005stfsu\006stfsux\005"
    "stfsx\003sth\006sthbrx\006sthcix\005sthcx\004sthu\005sthux\004sthx\004s"
    "tmw\004stop\005stswi\006stvebx\006stvehx\006stvewx\004stvx\005stvxl\003"
    "stw\005stwat\006stwbrx\006stwcix\005stwcx\004stwu\005stwux\004stwx\005s"
    "txsd\006stxsdx\007stxsibx\007stxsihx\007stxsiwx\006stxssp\007stxsspx\004"
    "stxv\010stxvb16x\007stxvd2x\007stxvh8x\005stxvl\006stxvll\007stxvw4x\005"
    "stxvx\003sub\004subc\004subf\005subfc\005subfe\006subfic\006subfme\006s"
    "ubfze\004subi\005subic\005subis\004sync\006tabort\010tabortdc\ttabortdc"
    "i\010tabortwc\ttabortwci\006tbegin\006tcheck\002td\004tdeq\005tdeqi\004"
    "tdge\005tdgei\004tdgt\005tdgti\003tdi\004tdle\005tdlei\005tdlge\006tdlg"
    "ei\005tdlgt\006tdlgti\005tdlle\006tdllei\005tdllt\006tdllti\005tdlng\006"
    "tdlngi\005tdlnl\006tdlnli\004tdlt\005tdlti\004tdne\005tdnei\004tdng\005"
    "tdngi\004tdnl\005tdnli\003tdu\004tdui\004tend\005tlbia\005tlbie\006tlbi"
    "el\007tlbivax\005tlbld\005tlbli\005tlbre\007tlbrehi\007tlbrelo\005tlbsx"
    "\007tlbsync\005tlbwe\007tlbwehi\007tlbwelo\004trap\010trechkpt\010trecl"
    "aim\003tsr\002tw\004tweq\005tweqi\004twge\005twgei\004twgt\005twgti\003"
    "twi\004twle\005twlei\005twlge\006twlgei\005twlgt\006twlgti\005twlle\006"
    "twllei\005twllt\006twllti\005twlng\006twlngi\005twlnl\006twlnli\004twlt"
    "\005twlti\004twne\005twnei\004twng\005twngi\004twnl\005twnli\003twu\004"
    "twui\007vabsdub\007vabsduh\007vabsduw\007vaddcuq\007vaddcuw\010vaddecuq"
    "\010vaddeuqm\006vaddfp\007vaddsbs\007vaddshs\007vaddsws\007vaddubm\007v"
    "addubs\007vaddudm\007vadduhm\007vadduhs\007vadduqm\007vadduwm\007vadduw"
    "s\004vand\005vandc\006vavgsb\006vavgsh\006vavgsw\006vavgub\006vavguh\006"
    "vavguw\007vbpermd\007vbpermq\005vcfsx\005vcfux\007vcipher\013vcipherlas"
    "t\005vclzb\005vclzd\005vclzh\010vclzlsbb\005vclzw\007vcmpbfp\010vcmpeqf"
    "p\010vcmpequb\010vcmpequd\010vcmpequh\010vcmpequw\010vcmpgefp\010vcmpgt"
    "fp\010vcmpgtsb\010vcmpgtsd\010vcmpgtsh\010vcmpgtsw\010vcmpgtub\010vcmpg"
    "tud\010vcmpgtuh\010vcmpgtuw\007vcmpneb\007vcmpneh\007vcmpnew\010vcmpnez"
    "b\010vcmpnezh\010vcmpnezw\006vctsxs\006vctuxs\005vctzb\005vctzd\005vctz"
    "h\010vctzlsbb\005vctzw\004veqv\010vexptefp\tvextractd\nvextractub\nvext"
    "ractuh\nvextractuw\010vextsb2d\010vextsb2w\010vextsh2d\010vextsh2w\010v"
    "extsw2d\010vextublx\010vextubrx\010vextuhlx\010vextuhrx\010vextuwlx\010"
    "vextuwrx\005vgbbd\010vinsertb\010vinsertd\010vinserth\010vinsertw\007vl"
    "ogefp\007vmaddfp\006vmaxfp\006vmaxsb\006vmaxsd\006vmaxsh\006vmaxsw\006v"
    "maxub\006vmaxud\006vmaxuh\006vmaxuw\tvmhaddshs\nvmhraddshs\006vminfp\006"
    "vminsb\006vminsd\006vminsh\006vminsw\006vminub\006vminud\006vminuh\006v"
    "minuw\tvmladduhm\006vmrgew\006vmrghb\006vmrghh\006vmrghw\006vmrglb\006v"
    "mrglh\006vmrglw\006vmrgow\010vmsummbm\010vmsumshm\010vmsumshs\010vmsumu"
    "bm\010vmsumuhm\010vmsumuhs\tvmul10cuq\nvmul10ecuq\tvmul10euq\010vmul10u"
    "q\007vmulesb\007vmulesh\007vmulesw\007vmuleub\007vmuleuh\007vmuleuw\007"
    "vmulosb\007vmulosh\007vmulosw\007vmuloub\007vmulouh\007vmulouw\007vmulu"
    "wm\005vnand\010vncipher\014vncipherlast\005vnegd\005vnegw\010vnmsubfp\004"
    "vnor\003vor\004vorc\005vperm\006vpermr\010vpermxor\005vpkpx\007vpksdss\007"
    "vpksdus\007vpkshss\007vpkshus\007vpkswss\007vpkswus\007vpkudum\007vpkud"
    "us\007vpkuhum\007vpkuhus\007vpkuwum\007vpkuwus\007vpmsumb\007vpmsumd\007"
    "vpmsumh\007vpmsumw\010vpopcntb\010vpopcntd\010vpopcnth\010vpopcntw\007v"
    "prtybd\007vprtybq\007vprtybw\005vrefp\005vrfim\005vrfin\005vrfip\005vrf"
    "iz\004vrlb\004vrld\006vrldmi\006vrldnm\004vrlh\004vrlw\006vrlwmi\006vrl"
    "wnm\tvrsqrtefp\005vsbox\004vsel\nvshasigmad\nvshasigmaw\003vsl\004vslb\004"
    "vsld\006vsldoi\004vslh\004vslo\004vslv\004vslw\006vspltb\006vsplth\010v"
    "spltisb\010vspltish\010vspltisw\006vspltw\003vsr\005vsrab\005vsrad\005v"
    "srah\005vsraw\004vsrb\004vsrd\004vsrh\004vsro\004vsrv\004vsrw\007vsubcu"
    "q\007vsubcuw\010vsubecuq\010vsubeuqm\006vsubfp\007vsubsbs\007vsubshs\007"
    "vsubsws\007vsububm\007vsububs\007vsubudm\007vsubuhm\007vsubuhs\007vsubu"
    "qm\007vsubuwm\007vsubuws\010vsum2sws\010vsum4sbs\010vsum4shs\010vsum4ub"
    "s\007vsumsws\007vupkhpx\007vupkhsb\007vupkhsh\007vupkhsw\007vupklpx\007"
    "vupklsb\007vupklsh\007vupklsw\004vxor\004wait\010waitimpl\007waitrsv\005"
    "wrtee\006wrteei\004xnop\003xor\004xori\005xoris\007xsabsdp\007xsabsqp\007"
    "xsadddp\007xsaddqp\010xsaddqpo\007xsaddsp\txscmpeqdp\nxscmpexpdp\nxscmp"
    "expqp\txscmpgedp\txscmpgtdp\txscmpnedp\010xscmpodp\010xscmpoqp\010xscmp"
    "udp\010xscmpuqp\txscpsgndp\txscpsgnqp\010xscvdphp\010xscvdpqp\010xscvdp"
    "sp\txscvdpspn\nxscvdpsxds\nxscvdpsxws\nxscvdpuxds\nxscvdpuxws\010xscvhp"
    "dp\010xscvqpdp\txscvqpdpo\txscvqpsdz\txscvqpswz\txscvqpudz\txscvqpuwz\010"
    "xscvsdqp\010xscvspdp\txscvspdpn\txscvsxddp\txscvsxdsp\010xscvudqp\txscv"
    "uxddp\txscvuxdsp\007xsdivdp\007xsdivqp\010xsdivqpo\007xsdivsp\010xsiexp"
    "dp\010xsiexpqp\txsmaddadp\txsmaddasp\txsmaddmdp\txsmaddmsp\010xsmaddqp\t"
    "xsmaddqpo\010xsmaxcdp\007xsmaxdp\010xsmaxjdp\010xsmincdp\007xsmindp\010"
    "xsminjdp\txsmsubadp\txsmsubasp\txsmsubmdp\txsmsubmsp\010xsmsubqp\txsmsu"
    "bqpo\007xsmuldp\007xsmulqp\010xsmulqpo\007xsmulsp\010xsnabsdp\010xsnabs"
    "qp\007xsnegdp\007xsnegqp\nxsnmaddadp\nxsnmaddasp\nxsnmaddmdp\nxsnmaddms"
    "p\txsnmaddqp\nxsnmaddqpo\nxsnmsubadp\nxsnmsubasp\nxsnmsubmdp\nxsnmsubms"
    "p\txsnmsubqp\nxsnmsubqpo\006xsrdpi\007xsrdpic\007xsrdpim\007xsrdpip\007"
    "xsrdpiz\006xsredp\006xsresp\006xsrqpi\007xsrqpix\007xsrqpxp\nxsrsqrtedp"
    "\nxsrsqrtesp\010xssqrtdp\010xssqrtqp\txssqrtqpo\010xssqrtsp\007xssubdp\007"
    "xssubqp\010xssubqpo\007xssubsp\010xstdivdp\txstsqrtdp\txststdcdp\txstst"
    "dcqp\txststdcsp\010xsxexpdp\010xsxexpqp\010xsxsigdp\010xsxsigqp\007xvab"
    "sdp\007xvabssp\007xvadddp\007xvaddsp\txvcmpeqdp\txvcmpeqsp\txvcmpgedp\t"
    "xvcmpgesp\txvcmpgtdp\txvcmpgtsp\txvcmpnedp\txvcmpnesp\txvcpsgndp\txvcps"
    "gnsp\010xvcvdpsp\nxvcvdpsxds\nxvcvdpsxws\nxvcvdpuxds\nxvcvdpuxws\010xvc"
    "vhpsp\010xvcvspdp\010xvcvsphp\nxvcvspsxds\nxvcvspsxws\nxvcvspuxds\nxvcv"
    "spuxws\txvcvsxddp\txvcvsxdsp\txvcvsxwdp\txvcvsxwsp\txvcvuxddp\txvcvuxds"
    "p\txvcvuxwdp\txvcvuxwsp\007xvdivdp\007xvdivsp\010xviexpdp\010xviexpsp\t"
    "xvmaddadp\txvmaddasp\txvmaddmdp\txvmaddmsp\007xvmaxdp\007xvmaxsp\007xvm"
    "indp\007xvminsp\007xvmovdp\007xvmovsp\txvmsubadp\txvmsubasp\txvmsubmdp\t"
    "xvmsubmsp\007xvmuldp\007xvmulsp\010xvnabsdp\010xvnabssp\007xvnegdp\007x"
    "vnegsp\nxvnmaddadp\nxvnmaddasp\nxvnmaddmdp\nxvnmaddmsp\nxvnmsubadp\nxvn"
    "msubasp\nxvnmsubmdp\nxvnmsubmsp\006xvrdpi\007xvrdpic\007xvrdpim\007xvrd"
    "pip\007xvrdpiz\006xvredp\006xvresp\006xvrspi\007xvrspic\007xvrspim\007x"
    "vrspip\007xvrspiz\nxvrsqrtedp\nxvrsqrtesp\010xvsqrtdp\010xvsqrtsp\007xv"
    "subdp\007xvsubsp\010xvtdivdp\010xvtdivsp\txvtsqrtdp\txvtsqrtsp\txvtstdc"
    "dp\txvtstdcsp\010xvxexpdp\010xvxexpsp\010xvxsigdp\010xvxsigsp\005xxbrd\005"
    "xxbrh\005xxbrq\005xxbrw\013xxextractuw\txxinsertw\006xxland\007xxlandc\006"
    "xxleqv\007xxlnand\006xxlnor\005xxlor\006xxlorc\006xxlxor\007xxmrghd\007"
    "xxmrghw\007xxmrgld\007xxmrglw\006xxperm\010xxpermdi\007xxpermr\005xxsel"
    "\007xxsldwi\007xxspltd\010xxspltib\007xxspltw\007xxswapd";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
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
  { 0 /* add */, PPC::ADD8TLS_, Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_TLSReg }, },
  { 0 /* add */, PPC::ADD4, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 0 /* add */, PPC::ADD4o, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 14 /* addi */, PPC::ADDI, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 25 /* addis */, PPC::ADDIS, Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S17Imm }, },
  { 31 /* addme */, PPC::ADDME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 31 /* addme */, PPC::ADDMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::AND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::ANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 52 /* andi */, PPC::ANDIo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 57 /* andis */, PPC::ANDISo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 63 /* attn */, PPC::ATTN, Convert_NoOperands, 0, {  }, },
  { 68 /* b */, PPC::B, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 70 /* ba */, PPC::BA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 73 /* bc */, PPC::gBC, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 73 /* bc */, PPC::gBCat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, 0, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 76 /* bc+ */, PPC::gBCat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 80 /* bc- */, PPC::gBCat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 84 /* bca */, PPC::gBCA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 84 /* bca */, PPC::gBCAat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, 0, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 88 /* bca+ */, PPC::gBCAat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 93 /* bca- */, PPC::gBCAat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 98 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 98 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 104 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 104 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 111 /* bcdcfn */, PPC::BCDCFNo, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 118 /* bcdcfsq */, PPC::BCDCFSQo, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 126 /* bcdcfz */, PPC::BCDCFZo, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 133 /* bcdcpsgn */, PPC::BCDCPSGNo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 142 /* bcdctn */, PPC::BCDCTNo, Convert__RegVRRC1_1__RegVRRC1_2, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 149 /* bcdctsq */, PPC::BCDCTSQo, Convert__RegVRRC1_1__RegVRRC1_2, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC }, },
  { 157 /* bcdctz */, PPC::BCDCTZo, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 164 /* bcds */, PPC::BCDSo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 169 /* bcdsetsgn */, PPC::BCDSETSGNo, Convert__RegVRRC1_1__RegVRRC1_2__U1Imm1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 179 /* bcdsr */, PPC::BCDSRo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 185 /* bcdtrunc */, PPC::BCDTRUNCo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3__U1Imm1_4, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm }, },
  { 194 /* bcdus */, PPC::BCDUSo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 200 /* bcdutrunc */, PPC::BCDUTRUNCo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 210 /* bcl */, PPC::gBCL, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 210 /* bcl */, PPC::gBCLat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, 0, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 214 /* bcl+ */, PPC::gBCLat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 219 /* bcl- */, PPC::gBCLat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 224 /* bcla */, PPC::gBCLA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 224 /* bcla */, PPC::gBCLAat, Convert__U5Imm1_1__ATBitsAsHint1_0__RegCRBITRC1_2__CondBr1_3, 0, { MCK_ATBitsAsHint, MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 229 /* bcla+ */, PPC::gBCLAat, Convert__U5Imm1_0__imm_95_3__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 235 /* bcla- */, PPC::gBCLAat, Convert__U5Imm1_0__imm_95_2__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 241 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 241 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 246 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 246 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 252 /* bctr */, PPC::BCTR, Convert_NoOperands, 0, {  }, },
  { 257 /* bctrl */, PPC::BCTRL, Convert_NoOperands, 0, {  }, },
  { 263 /* bdnz */, PPC::BDNZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 268 /* bdnz+ */, PPC::BDNZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 274 /* bdnz- */, PPC::BDNZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 280 /* bdnza */, PPC::BDNZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 286 /* bdnza+ */, PPC::BDNZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 293 /* bdnza- */, PPC::BDNZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 300 /* bdnzf */, PPC::gBC, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 306 /* bdnzfa */, PPC::gBCA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 313 /* bdnzfl */, PPC::gBCL, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 320 /* bdnzfla */, PPC::gBCLA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 328 /* bdnzflr */, PPC::gBCLR, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 336 /* bdnzflrl */, PPC::gBCLRL, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 345 /* bdnzl */, PPC::BDNZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 351 /* bdnzl+ */, PPC::BDNZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 358 /* bdnzl- */, PPC::BDNZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 365 /* bdnzla */, PPC::BDNZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 372 /* bdnzla+ */, PPC::BDNZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 380 /* bdnzla- */, PPC::BDNZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 388 /* bdnzlr */, PPC::BDNZLR, Convert_NoOperands, 0, {  }, },
  { 395 /* bdnzlr+ */, PPC::BDNZLRp, Convert_NoOperands, 0, {  }, },
  { 403 /* bdnzlr- */, PPC::BDNZLRm, Convert_NoOperands, 0, {  }, },
  { 411 /* bdnzlrl */, PPC::BDNZLRL, Convert_NoOperands, 0, {  }, },
  { 419 /* bdnzlrl+ */, PPC::BDNZLRLp, Convert_NoOperands, 0, {  }, },
  { 428 /* bdnzlrl- */, PPC::BDNZLRLm, Convert_NoOperands, 0, {  }, },
  { 437 /* bdnzt */, PPC::gBC, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 443 /* bdnzta */, PPC::gBCA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 450 /* bdnztl */, PPC::gBCL, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 457 /* bdnztla */, PPC::gBCLA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 465 /* bdnztlr */, PPC::gBCLR, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 473 /* bdnztlrl */, PPC::gBCLRL, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 482 /* bdz */, PPC::BDZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 486 /* bdz+ */, PPC::BDZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 491 /* bdz- */, PPC::BDZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 496 /* bdza */, PPC::BDZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 501 /* bdza+ */, PPC::BDZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 507 /* bdza- */, PPC::BDZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 513 /* bdzf */, PPC::gBC, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 518 /* bdzfa */, PPC::gBCA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 524 /* bdzfl */, PPC::gBCL, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 530 /* bdzfla */, PPC::gBCLA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 537 /* bdzflr */, PPC::gBCLR, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 544 /* bdzflrl */, PPC::gBCLRL, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 552 /* bdzl */, PPC::BDZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 557 /* bdzl+ */, PPC::BDZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 563 /* bdzl- */, PPC::BDZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 569 /* bdzla */, PPC::BDZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 575 /* bdzla+ */, PPC::BDZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 582 /* bdzla- */, PPC::BDZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 589 /* bdzlr */, PPC::BDZLR, Convert_NoOperands, 0, {  }, },
  { 595 /* bdzlr+ */, PPC::BDZLRp, Convert_NoOperands, 0, {  }, },
  { 602 /* bdzlr- */, PPC::BDZLRm, Convert_NoOperands, 0, {  }, },
  { 609 /* bdzlrl */, PPC::BDZLRL, Convert_NoOperands, 0, {  }, },
  { 616 /* bdzlrl+ */, PPC::BDZLRLp, Convert_NoOperands, 0, {  }, },
  { 624 /* bdzlrl- */, PPC::BDZLRLm, Convert_NoOperands, 0, {  }, },
  { 632 /* bdzt */, PPC::gBC, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 637 /* bdzta */, PPC::gBCA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 643 /* bdztl */, PPC::gBCL, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 649 /* bdztla */, PPC::gBCLA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 656 /* bdztlr */, PPC::gBCLR, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 663 /* bdztlrl */, PPC::gBCLRL, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 671 /* beq */, PPC::BCC, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 671 /* beq */, PPC::BCC, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 675 /* beq+ */, PPC::BCC, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 675 /* beq+ */, PPC::BCC, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 680 /* beq- */, PPC::BCC, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 680 /* beq- */, PPC::BCC, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 685 /* beqa */, PPC::BCCA, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 685 /* beqa */, PPC::BCCA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 690 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 690 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 696 /* beqa- */, PPC::BCCA, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 696 /* beqa- */, PPC::BCCA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 702 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__regCR0, 0, {  }, },
  { 702 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 709 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__regCR0, 0, {  }, },
  { 709 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 717 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__regCR0, 0, {  }, },
  { 717 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 725 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__regCR0, 0, {  }, },
  { 725 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 733 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__regCR0, 0, {  }, },
  { 733 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 742 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__regCR0, 0, {  }, },
  { 742 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 751 /* beql */, PPC::BCCL, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 751 /* beql */, PPC::BCCL, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 756 /* beql+ */, PPC::BCCL, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 756 /* beql+ */, PPC::BCCL, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 762 /* beql- */, PPC::BCCL, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 762 /* beql- */, PPC::BCCL, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 768 /* beqla */, PPC::BCCLA, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 768 /* beqla */, PPC::BCCLA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 774 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 774 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 781 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 781 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 788 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__regCR0, 0, {  }, },
  { 788 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 794 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__regCR0, 0, {  }, },
  { 794 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 801 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__regCR0, 0, {  }, },
  { 801 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 808 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__regCR0, 0, {  }, },
  { 808 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 815 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__regCR0, 0, {  }, },
  { 815 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 823 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__regCR0, 0, {  }, },
  { 823 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 831 /* bf */, PPC::gBC, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 834 /* bf+ */, PPC::gBC, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 838 /* bf- */, PPC::gBC, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 842 /* bfa */, PPC::gBCA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 846 /* bfa+ */, PPC::gBCA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 851 /* bfa- */, PPC::gBCA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 856 /* bfctr */, PPC::gBCCTR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 862 /* bfctr+ */, PPC::gBCCTR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 869 /* bfctr- */, PPC::gBCCTR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 876 /* bfctrl */, PPC::gBCCTRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 883 /* bfctrl+ */, PPC::gBCCTRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 891 /* bfctrl- */, PPC::gBCCTRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 899 /* bfl */, PPC::gBCL, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 903 /* bfl+ */, PPC::gBCL, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 908 /* bfl- */, PPC::gBCL, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 913 /* bfla */, PPC::gBCLA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 918 /* bfla+ */, PPC::gBCLA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 924 /* bfla- */, PPC::gBCLA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 930 /* bflr */, PPC::gBCLR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 935 /* bflr+ */, PPC::gBCLR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 941 /* bflr- */, PPC::gBCLR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 947 /* bflrl */, PPC::gBCLRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 953 /* bflrl+ */, PPC::gBCLRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 960 /* bflrl- */, PPC::gBCLRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 967 /* bge */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 967 /* bge */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 971 /* bge+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 971 /* bge+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 976 /* bge- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 976 /* bge- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 981 /* bgea */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 981 /* bgea */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 986 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 986 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 992 /* bgea- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 992 /* bgea- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 998 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 998 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1005 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1005 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1013 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1013 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1021 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1021 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1029 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1029 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1038 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1038 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1047 /* bgel */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1047 /* bgel */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1052 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1052 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1058 /* bgel- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1058 /* bgel- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1064 /* bgela */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1064 /* bgela */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1070 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1070 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1077 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1077 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1084 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1084 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1090 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1090 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1097 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1097 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1104 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1104 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1111 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1111 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1119 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1119 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1127 /* bgt */, PPC::BCC, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1127 /* bgt */, PPC::BCC, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1131 /* bgt+ */, PPC::BCC, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1131 /* bgt+ */, PPC::BCC, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1136 /* bgt- */, PPC::BCC, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1136 /* bgt- */, PPC::BCC, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1141 /* bgta */, PPC::BCCA, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1141 /* bgta */, PPC::BCCA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1146 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1146 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1152 /* bgta- */, PPC::BCCA, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1152 /* bgta- */, PPC::BCCA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1158 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1158 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1165 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1165 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1173 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1173 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1181 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1181 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1189 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1189 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1198 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1198 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1207 /* bgtl */, PPC::BCCL, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1207 /* bgtl */, PPC::BCCL, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1212 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1212 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1218 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1218 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1224 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1224 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1230 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1230 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1237 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1237 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1244 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1244 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1250 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1250 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1257 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1257 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1264 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1264 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1271 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1271 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1279 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1279 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1287 /* bl */, PPC::BL, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1287 /* bl */, PPC::BL8_TLS_, Convert__DirectBr1_0__Imm1_1, 0, { MCK_DirectBr, MCK_Imm }, },
  { 1290 /* bla */, PPC::BLA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1294 /* ble */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1294 /* ble */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1298 /* ble+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1298 /* ble+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1303 /* ble- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1303 /* ble- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1308 /* blea */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1308 /* blea */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1313 /* blea+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1313 /* blea+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1319 /* blea- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1319 /* blea- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1325 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1325 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1332 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1332 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1340 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1340 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1348 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1348 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1356 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1356 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1365 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1365 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1374 /* blel */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1374 /* blel */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1379 /* blel+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1379 /* blel+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1385 /* blel- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1385 /* blel- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1391 /* blela */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1391 /* blela */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1397 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1397 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1404 /* blela- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1404 /* blela- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1411 /* blelr */, PPC::BCCLR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1411 /* blelr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1417 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1417 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1424 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1424 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1431 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1431 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1438 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1438 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1446 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1446 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1454 /* blr */, PPC::BLR, Convert_NoOperands, 0, {  }, },
  { 1458 /* blrl */, PPC::BLRL, Convert_NoOperands, 0, {  }, },
  { 1463 /* blt */, PPC::BCC, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1463 /* blt */, PPC::BCC, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1467 /* blt+ */, PPC::BCC, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1467 /* blt+ */, PPC::BCC, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1472 /* blt- */, PPC::BCC, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1472 /* blt- */, PPC::BCC, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1477 /* blta */, PPC::BCCA, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1477 /* blta */, PPC::BCCA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1482 /* blta+ */, PPC::BCCA, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1482 /* blta+ */, PPC::BCCA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1488 /* blta- */, PPC::BCCA, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1488 /* blta- */, PPC::BCCA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1494 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1494 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1501 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1501 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1509 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1509 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1517 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1517 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1525 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1525 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1534 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1534 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1543 /* bltl */, PPC::BCCL, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1543 /* bltl */, PPC::BCCL, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1548 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1548 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1554 /* bltl- */, PPC::BCCL, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1554 /* bltl- */, PPC::BCCL, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1560 /* bltla */, PPC::BCCLA, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1560 /* bltla */, PPC::BCCLA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1566 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1566 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1573 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1573 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1580 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1580 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1586 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1586 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1593 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1593 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1600 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1600 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1607 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1607 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1615 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1615 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1623 /* bne */, PPC::BCC, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1623 /* bne */, PPC::BCC, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1627 /* bne+ */, PPC::BCC, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1627 /* bne+ */, PPC::BCC, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1632 /* bne- */, PPC::BCC, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1632 /* bne- */, PPC::BCC, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1637 /* bnea */, PPC::BCCA, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1637 /* bnea */, PPC::BCCA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1642 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1642 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1648 /* bnea- */, PPC::BCCA, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1648 /* bnea- */, PPC::BCCA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1654 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1654 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1661 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1661 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1669 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1669 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1677 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1677 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1685 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1685 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1694 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1694 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1703 /* bnel */, PPC::BCCL, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1703 /* bnel */, PPC::BCCL, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1708 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1708 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1714 /* bnel- */, PPC::BCCL, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1714 /* bnel- */, PPC::BCCL, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1720 /* bnela */, PPC::BCCLA, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1720 /* bnela */, PPC::BCCLA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1726 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1726 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1733 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1733 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1740 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1740 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1746 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1746 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1753 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1753 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1760 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1760 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1767 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1767 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1775 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1775 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1783 /* bng */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1783 /* bng */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1787 /* bng+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1787 /* bng+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1792 /* bng- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1792 /* bng- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1797 /* bnga */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1797 /* bnga */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1802 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1802 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1808 /* bnga- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1808 /* bnga- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1814 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1814 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1821 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1821 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1829 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1829 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1837 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1837 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1845 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1845 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1854 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1854 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1863 /* bngl */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1863 /* bngl */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1868 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1868 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1874 /* bngl- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1874 /* bngl- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1880 /* bngla */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1880 /* bngla */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1886 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1886 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1893 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1893 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1900 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1900 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1906 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1906 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1913 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1913 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1920 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1920 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1927 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1927 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1935 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1935 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1943 /* bnl */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1943 /* bnl */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1947 /* bnl+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1947 /* bnl+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1952 /* bnl- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1952 /* bnl- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1957 /* bnla */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1957 /* bnla */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1962 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1962 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1968 /* bnla- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1968 /* bnla- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1974 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1974 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1981 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1981 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1989 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1989 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1997 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1997 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2005 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 2005 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2014 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 2014 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2023 /* bnll */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2023 /* bnll */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2028 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2028 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2034 /* bnll- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2034 /* bnll- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2040 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2040 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2046 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2046 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2053 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2053 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2060 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 2060 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2066 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 2066 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2073 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 2073 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2080 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 2080 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2087 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 2087 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2095 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 2095 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2103 /* bns */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2103 /* bns */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2107 /* bns+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2107 /* bns+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2112 /* bns- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2112 /* bns- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2117 /* bnsa */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2117 /* bnsa */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2122 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2122 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2128 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2128 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2134 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2134 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2141 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2141 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2149 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2149 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2157 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2157 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2165 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2165 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2174 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2174 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2183 /* bnsl */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2183 /* bnsl */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2188 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2188 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2194 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2194 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2200 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2200 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2206 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2206 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2213 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2213 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2220 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2220 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2226 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2226 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2233 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2233 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2240 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2240 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2247 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2247 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2255 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2255 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2263 /* bnu */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2263 /* bnu */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2267 /* bnu+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2267 /* bnu+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2272 /* bnu- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2272 /* bnu- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2277 /* bnua */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2277 /* bnua */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2282 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2282 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2288 /* bnua- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2288 /* bnua- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2294 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2294 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2301 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2301 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2309 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2309 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2317 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2317 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2325 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2325 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2334 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2334 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2343 /* bnul */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2343 /* bnul */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2348 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2348 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2354 /* bnul- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2354 /* bnul- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2360 /* bnula */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2360 /* bnula */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2366 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2366 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2373 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2373 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2380 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2380 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2386 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2386 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2393 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2393 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2400 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2400 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2407 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2407 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2415 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2415 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2423 /* bpermd */, PPC::BPERMD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2430 /* brinc */, PPC::BRINC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2436 /* bso */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2436 /* bso */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2440 /* bso+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2440 /* bso+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2445 /* bso- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2445 /* bso- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2450 /* bsoa */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2450 /* bsoa */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2455 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2455 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2461 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2461 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2467 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2467 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2474 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2474 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2482 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2482 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2490 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2490 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2498 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2498 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2507 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2507 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2516 /* bsol */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2516 /* bsol */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2521 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2521 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2527 /* bsol- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2527 /* bsol- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2533 /* bsola */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2533 /* bsola */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2539 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2539 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2546 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2546 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2553 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2553 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2559 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2559 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2566 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2566 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2573 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2573 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2580 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2580 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2588 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2588 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2596 /* bt */, PPC::gBC, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2599 /* bt+ */, PPC::gBC, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2603 /* bt- */, PPC::gBC, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2607 /* bta */, PPC::gBCA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2611 /* bta+ */, PPC::gBCA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2616 /* bta- */, PPC::gBCA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2621 /* btctr */, PPC::gBCCTR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2627 /* btctr+ */, PPC::gBCCTR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2634 /* btctr- */, PPC::gBCCTR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2641 /* btctrl */, PPC::gBCCTRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2648 /* btctrl+ */, PPC::gBCCTRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2656 /* btctrl- */, PPC::gBCCTRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2664 /* btl */, PPC::gBCL, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2668 /* btl+ */, PPC::gBCL, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2673 /* btl- */, PPC::gBCL, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2678 /* btla */, PPC::gBCLA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2683 /* btla+ */, PPC::gBCLA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2689 /* btla- */, PPC::gBCLA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2695 /* btlr */, PPC::gBCLR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2700 /* btlr+ */, PPC::gBCLR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2706 /* btlr- */, PPC::gBCLR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2712 /* btlrl */, PPC::gBCLRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2718 /* btlrl+ */, PPC::gBCLRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2725 /* btlrl- */, PPC::gBCLRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2732 /* bun */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2732 /* bun */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2736 /* bun+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2736 /* bun+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2741 /* bun- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2741 /* bun- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2746 /* buna */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2746 /* buna */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2751 /* buna+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2751 /* buna+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2757 /* buna- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2757 /* buna- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2763 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2763 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2770 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2770 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2778 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2778 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2786 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2786 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2794 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2794 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2803 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2803 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2812 /* bunl */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2812 /* bunl */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2817 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2817 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2823 /* bunl- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2823 /* bunl- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2829 /* bunla */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2829 /* bunla */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2835 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2835 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2842 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2842 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2849 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2849 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2855 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2855 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2862 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2862 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2869 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2869 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2876 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2876 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2884 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2884 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2892 /* clrbhrb */, PPC::CLRBHRB, Convert_NoOperands, 0, {  }, },
  { 2900 /* clrldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2900 /* clrldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2907 /* clrlsldi */, PPC::CLRLSLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2907 /* clrlsldi */, PPC::CLRLSLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2916 /* clrlslwi */, PPC::CLRLSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2916 /* clrlslwi */, PPC::CLRLSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2925 /* clrlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2925 /* clrlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2932 /* clrrdi */, PPC::CLRRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2932 /* clrrdi */, PPC::CLRRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2939 /* clrrwi */, PPC::CLRRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2939 /* clrrwi */, PPC::CLRRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2946 /* cmp */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2946 /* cmp */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2950 /* cmpb */, PPC::CMPB, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2955 /* cmpd */, PPC::CMPD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2955 /* cmpd */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2960 /* cmpdi */, PPC::CMPDI, Convert__regCR0__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 2960 /* cmpdi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_S16Imm }, },
  { 2966 /* cmpeqb */, PPC::CMPEQB, Convert__RegCRBITRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRBITRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2973 /* cmpi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_S16Imm }, },
  { 2973 /* cmpi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_S16Imm }, },
  { 2978 /* cmpl */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2978 /* cmpl */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2983 /* cmpld */, PPC::CMPLD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2983 /* cmpld */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2989 /* cmpldi */, PPC::CMPLDI, Convert__regCR0__RegG8RC1_0__U16Imm1_1, 0, { MCK_RegG8RC, MCK_U16Imm }, },
  { 2989 /* cmpldi */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_U16Imm }, },
  { 2996 /* cmpli */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_U16Imm }, },
  { 2996 /* cmpli */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_U16Imm }, },
  { 3002 /* cmplw */, PPC::CMPLW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3002 /* cmplw */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3008 /* cmplwi */, PPC::CMPLWI, Convert__regCR0__RegGPRC1_0__U16Imm1_1, 0, { MCK_RegGPRC, MCK_U16Imm }, },
  { 3008 /* cmplwi */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 3015 /* cmprb */, PPC::CMPRB, Convert__RegCRBITRC1_0__U1Imm1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRBITRC, MCK_U1Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3021 /* cmpw */, PPC::CMPW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3021 /* cmpw */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3026 /* cmpwi */, PPC::CMPWI, Convert__regCR0__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 3026 /* cmpwi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 3032 /* cntlzd */, PPC::CNTLZD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3032 /* cntlzd */, PPC::CNTLZDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3039 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3039 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3039 /* cntlzw */, PPC::CNTLZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3039 /* cntlzw */, PPC::CNTLZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3046 /* cnttzd */, PPC::CNTTZD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 3046 /* cnttzd */, PPC::CNTTZDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3053 /* cnttzw */, PPC::CNTTZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3053 /* cnttzw */, PPC::CNTTZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3060 /* copy */, PPC::CP_COPYx, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3060 /* copy */, PPC::CP_COPY, Convert__RegGPRC1_0__RegGPRC1_1__U1Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U1Imm }, },
  { 3065 /* copy_first */, PPC::CP_COPY_FIRST, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3076 /* cp_abort */, PPC::CP_ABORT, Convert_NoOperands, 0, {  }, },
  { 3085 /* crand */, PPC::CRAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3091 /* crandc */, PPC::CRANDC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3098 /* crclr */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 3104 /* creqv */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3110 /* crmove */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3117 /* crnand */, PPC::CRNAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3124 /* crnor */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3130 /* crnot */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3136 /* cror */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3141 /* crorc */, PPC::CRORC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3147 /* crset */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 3153 /* crxor */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 3159 /* dcba */, PPC::DCBA, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3164 /* dcbf */, PPC::DCBFx, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3164 /* dcbf */, PPC::DCBF, Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3169 /* dcbfl */, PPC::DCBFL, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3175 /* dcbflp */, PPC::DCBFLP, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3182 /* dcbi */, PPC::DCBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3187 /* dcbst */, PPC::DCBST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3193 /* dcbt */, PPC::DCBTx, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3193 /* dcbt */, PPC::DCBT, Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3198 /* dcbtct */, PPC::DCBTCT, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3205 /* dcbtds */, PPC::DCBTDS, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3212 /* dcbtst */, PPC::DCBTSTx, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3212 /* dcbtst */, PPC::DCBTST, Convert__U5Imm1_2__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3219 /* dcbtstct */, PPC::DCBTSTCT, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3228 /* dcbtstds */, PPC::DCBTSTDS, Convert__RegGxRCNoR01_0__RegGxRC1_1__U5Imm1_2, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_U5Imm }, },
  { 3237 /* dcbtstt */, PPC::DCBTSTT, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3245 /* dcbtt */, PPC::DCBTT, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3251 /* dcbz */, PPC::DCBZ, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3256 /* dcbzl */, PPC::DCBZL, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3262 /* dccci */, PPC::DCCCI, Convert__regR0__regR0, 0, {  }, },
  { 3262 /* dccci */, PPC::DCCCI, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3268 /* dci */, PPC::DCCCI, Convert__regR0__regR0, 0, { MCK_0 }, },
  { 3272 /* divd */, PPC::DIVD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3272 /* divd */, PPC::DIVDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3277 /* divde */, PPC::DIVDE, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3277 /* divde */, PPC::DIVDEo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3283 /* divdeu */, PPC::DIVDEU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3283 /* divdeu */, PPC::DIVDEUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3290 /* divdu */, PPC::DIVDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3290 /* divdu */, PPC::DIVDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3296 /* divw */, PPC::DIVW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3296 /* divw */, PPC::DIVWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3301 /* divwe */, PPC::DIVWE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3301 /* divwe */, PPC::DIVWEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3307 /* divweu */, PPC::DIVWEU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3307 /* divweu */, PPC::DIVWEUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3314 /* divwu */, PPC::DIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3314 /* divwu */, PPC::DIVWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3320 /* dss */, PPC::DSS, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 3324 /* dssall */, PPC::DSSALL, Convert_NoOperands, 0, {  }, },
  { 3331 /* dst */, PPC::DST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3335 /* dstst */, PPC::DSTST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3341 /* dststt */, PPC::DSTSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3348 /* dstt */, PPC::DSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3353 /* eieio */, PPC::EnforceIEIO, Convert_NoOperands, 0, {  }, },
  { 3359 /* eqv */, PPC::EQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3359 /* eqv */, PPC::EQVo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3363 /* evabs */, PPC::EVABS, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3369 /* evaddiw */, PPC::EVADDIW, Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1, 0, { MCK_RegGPRC, MCK_U5Imm, MCK_RegGPRC }, },
  { 3377 /* evaddsmiaaw */, PPC::EVADDSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3389 /* evaddssiaaw */, PPC::EVADDSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3401 /* evaddumiaaw */, PPC::EVADDUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3413 /* evaddusiaaw */, PPC::EVADDUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3425 /* evaddw */, PPC::EVADDW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3432 /* evand */, PPC::EVAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3438 /* evandc */, PPC::EVANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3445 /* evcmpeq */, PPC::EVCMPEQ, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3453 /* evcmpgts */, PPC::EVCMPGTS, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3462 /* evcmpgtu */, PPC::EVCMPGTU, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3471 /* evcmplts */, PPC::EVCMPLTS, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3480 /* evcmpltu */, PPC::EVCMPLTU, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3489 /* evcntlsw */, PPC::EVCNTLSW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3498 /* evcntlzw */, PPC::EVCNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3507 /* evdivws */, PPC::EVDIVWS, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3515 /* evdivwu */, PPC::EVDIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3523 /* eveqv */, PPC::EVEQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3529 /* evextsb */, PPC::EVEXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3537 /* evextsh */, PPC::EVEXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3545 /* evldd */, PPC::EVLDD, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3551 /* evlddx */, PPC::EVLDDX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3558 /* evldh */, PPC::EVLDH, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3564 /* evldhx */, PPC::EVLDHX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3571 /* evldw */, PPC::EVLDW, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3577 /* evldwx */, PPC::EVLDWX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3584 /* evlhhesplat */, PPC::EVLHHESPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3596 /* evlhhesplatx */, PPC::EVLHHESPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3609 /* evlhhossplat */, PPC::EVLHHOSSPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3622 /* evlhhossplatx */, PPC::EVLHHOSSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3636 /* evlhhousplat */, PPC::EVLHHOUSPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3649 /* evlhhousplatx */, PPC::EVLHHOUSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3663 /* evlwhe */, PPC::EVLWHE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3670 /* evlwhex */, PPC::EVLWHEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3678 /* evlwhos */, PPC::EVLWHOS, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3686 /* evlwhosx */, PPC::EVLWHOSX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3695 /* evlwhou */, PPC::EVLWHOU, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3703 /* evlwhoux */, PPC::EVLWHOUX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3712 /* evlwhsplat */, PPC::EVLWHSPLAT, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3723 /* evlwhsplatx */, PPC::EVLWHSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3735 /* evlwwsplat */, PPC::EVLWWSPLAT, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3746 /* evlwwsplatx */, PPC::EVLWWSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3758 /* evmergehi */, PPC::EVMERGEHI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3768 /* evmergehilo */, PPC::EVMERGEHILO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3780 /* evmergelo */, PPC::EVMERGELO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3790 /* evmergelohi */, PPC::EVMERGELOHI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3802 /* evmhegsmfaa */, PPC::EVMHEGSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3814 /* evmhegsmfan */, PPC::EVMHEGSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3826 /* evmhegsmiaa */, PPC::EVMHEGSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3838 /* evmhegsmian */, PPC::EVMHEGSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3850 /* evmhegumiaa */, PPC::EVMHEGUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3862 /* evmhegumian */, PPC::EVMHEGUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3874 /* evmhesmf */, PPC::EVMHESMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3883 /* evmhesmfa */, PPC::EVMHESMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3893 /* evmhesmfaaw */, PPC::EVMHESMFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3905 /* evmhesmfanw */, PPC::EVMHESMFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3917 /* evmhesmi */, PPC::EVMHESMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3926 /* evmhesmia */, PPC::EVMHESMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3936 /* evmhesmiaaw */, PPC::EVMHESMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3948 /* evmhesmianw */, PPC::EVMHESMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3960 /* evmhessf */, PPC::EVMHESSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3969 /* evmhessfa */, PPC::EVMHESSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3979 /* evmhessfaaw */, PPC::EVMHESSFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3991 /* evmhessfanw */, PPC::EVMHESSFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4003 /* evmhessiaaw */, PPC::EVMHESSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4015 /* evmhessianw */, PPC::EVMHESSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4027 /* evmheumi */, PPC::EVMHEUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4036 /* evmheumia */, PPC::EVMHEUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4046 /* evmheumiaaw */, PPC::EVMHEUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4058 /* evmheumianw */, PPC::EVMHEUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4070 /* evmheusiaaw */, PPC::EVMHEUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4082 /* evmheusianw */, PPC::EVMHEUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4094 /* evmhogsmfaa */, PPC::EVMHOGSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4106 /* evmhogsmfan */, PPC::EVMHOGSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4118 /* evmhogsmiaa */, PPC::EVMHOGSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4130 /* evmhogsmian */, PPC::EVMHOGSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4142 /* evmhogumiaa */, PPC::EVMHOGUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4154 /* evmhogumian */, PPC::EVMHOGUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4166 /* evmhosmf */, PPC::EVMHOSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4175 /* evmhosmfa */, PPC::EVMHOSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4185 /* evmhosmfaaw */, PPC::EVMHOSMFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4197 /* evmhosmfanw */, PPC::EVMHOSMFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4209 /* evmhosmi */, PPC::EVMHOSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4218 /* evmhosmia */, PPC::EVMHOSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4228 /* evmhosmiaaw */, PPC::EVMHOSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4240 /* evmhosmianw */, PPC::EVMHOSMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4252 /* evmhossf */, PPC::EVMHOSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4261 /* evmhossfa */, PPC::EVMHOSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4271 /* evmhossfaaw */, PPC::EVMHOSSFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4283 /* evmhossfanw */, PPC::EVMHOSSFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4295 /* evmhossiaaw */, PPC::EVMHOSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4307 /* evmhossianw */, PPC::EVMHOSSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4319 /* evmhoumi */, PPC::EVMHOUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4328 /* evmhoumia */, PPC::EVMHOUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4338 /* evmhoumiaaw */, PPC::EVMHOUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4350 /* evmhoumianw */, PPC::EVMHOUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4362 /* evmhousiaaw */, PPC::EVMHOUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4374 /* evmhousianw */, PPC::EVMHOUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4386 /* evmra */, PPC::EVMRA, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4392 /* evmwhsmf */, PPC::EVMWHSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4401 /* evmwhsmfa */, PPC::EVMWHSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4411 /* evmwhsmi */, PPC::EVMWHSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4420 /* evmwhsmia */, PPC::EVMWHSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4430 /* evmwhssf */, PPC::EVMWHSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4439 /* evmwhssfa */, PPC::EVMWHSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4449 /* evmwhumi */, PPC::EVMWHUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4458 /* evmwhumia */, PPC::EVMWHUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4468 /* evmwlsmiaaw */, PPC::EVMWLSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4480 /* evmwlsmianw */, PPC::EVMWLSMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4492 /* evmwlssiaaw */, PPC::EVMWLSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4504 /* evmwlssianw */, PPC::EVMWLSSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4516 /* evmwlumi */, PPC::EVMWLUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4525 /* evmwlumia */, PPC::EVMWLUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4535 /* evmwlumiaaw */, PPC::EVMWLUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4547 /* evmwlumianw */, PPC::EVMWLUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4559 /* evmwlusiaaw */, PPC::EVMWLUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4571 /* evmwlusianw */, PPC::EVMWLUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4583 /* evmwsmf */, PPC::EVMWSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4591 /* evmwsmfa */, PPC::EVMWSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4600 /* evmwsmfaa */, PPC::EVMWSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4610 /* evmwsmfan */, PPC::EVMWSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4620 /* evmwsmi */, PPC::EVMWSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4628 /* evmwsmia */, PPC::EVMWSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4637 /* evmwsmiaa */, PPC::EVMWSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4647 /* evmwsmian */, PPC::EVMWSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4657 /* evmwssf */, PPC::EVMWSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4665 /* evmwssfa */, PPC::EVMWSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4674 /* evmwssfaa */, PPC::EVMWSSFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4684 /* evmwssfan */, PPC::EVMWSSFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4694 /* evmwumi */, PPC::EVMWUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4702 /* evmwumia */, PPC::EVMWUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4711 /* evmwumiaa */, PPC::EVMWUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4721 /* evmwumian */, PPC::EVMWUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4731 /* evnand */, PPC::EVNAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4738 /* evneg */, PPC::EVNEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4744 /* evnor */, PPC::EVNOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4750 /* evor */, PPC::EVOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4755 /* evorc */, PPC::EVORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4761 /* evrlw */, PPC::EVRLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4767 /* evrlwi */, PPC::EVRLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4774 /* evrndw */, PPC::EVRNDW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4781 /* evslw */, PPC::EVSLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4787 /* evslwi */, PPC::EVSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4794 /* evsplatfi */, PPC::EVSPLATFI, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 4804 /* evsplati */, PPC::EVSPLATI, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 4813 /* evsrwis */, PPC::EVSRWIS, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4821 /* evsrwiu */, PPC::EVSRWIU, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4829 /* evsrws */, PPC::EVSRWS, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4836 /* evsrwu */, PPC::EVSRWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4843 /* evstdd */, PPC::EVSTDD, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4850 /* evstddx */, PPC::EVSTDDX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4858 /* evstdh */, PPC::EVSTDH, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4865 /* evstdhx */, PPC::EVSTDHX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4873 /* evstdw */, PPC::EVSTDW, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4880 /* evstdwx */, PPC::EVSTDWX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4888 /* evstwhe */, PPC::EVSTWHE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4896 /* evstwhex */, PPC::EVSTWHEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4905 /* evstwho */, PPC::EVSTWHO, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4913 /* evstwhox */, PPC::EVSTWHOX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4922 /* evstwwe */, PPC::EVSTWWE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4930 /* evstwwex */, PPC::EVSTWWEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4939 /* evstwwo */, PPC::EVSTWWO, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4947 /* evstwwox */, PPC::EVSTWWOX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4956 /* evsubfsmiaaw */, PPC::EVSUBFSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4969 /* evsubfssiaaw */, PPC::EVSUBFSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4982 /* evsubfumiaaw */, PPC::EVSUBFUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4995 /* evsubfusiaaw */, PPC::EVSUBFUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5008 /* evsubfw */, PPC::EVSUBFW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5016 /* evsubifw */, PPC::EVSUBIFW, Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_U5Imm, MCK_RegGPRC }, },
  { 5025 /* evxor */, PPC::EVXOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5031 /* extldi */, PPC::EXTLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5031 /* extldi */, PPC::EXTLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5038 /* extlwi */, PPC::EXTLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5038 /* extlwi */, PPC::EXTLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5045 /* extrdi */, PPC::EXTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5045 /* extrdi */, PPC::EXTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5052 /* extrwi */, PPC::EXTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5052 /* extrwi */, PPC::EXTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5059 /* extsb */, PPC::EXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5059 /* extsb */, PPC::EXTSBo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5065 /* extsh */, PPC::EXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5065 /* extsh */, PPC::EXTSHo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5071 /* extsw */, PPC::EXTSW, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 5071 /* extsw */, PPC::EXTSWo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 5077 /* fabs */, PPC::FABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5077 /* fabs */, PPC::FABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5082 /* fadd */, PPC::FADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5082 /* fadd */, PPC::FADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5087 /* fadds */, PPC::FADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5087 /* fadds */, PPC::FADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5093 /* fcfid */, PPC::FCFID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5093 /* fcfid */, PPC::FCFIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5099 /* fcfids */, PPC::FCFIDS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 5099 /* fcfids */, PPC::FCFIDSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 5106 /* fcfidu */, PPC::FCFIDU, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5106 /* fcfidu */, PPC::FCFIDUo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5113 /* fcfidus */, PPC::FCFIDUS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 5113 /* fcfidus */, PPC::FCFIDUSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 5121 /* fcmpu */, PPC::FCMPUS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5127 /* fcpsgn */, PPC::FCPSGNS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5127 /* fcpsgn */, PPC::FCPSGNSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5134 /* fctid */, PPC::FCTID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5134 /* fctid */, PPC::FCTIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5140 /* fctiduz */, PPC::FCTIDUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5140 /* fctiduz */, PPC::FCTIDUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5148 /* fctidz */, PPC::FCTIDZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5148 /* fctidz */, PPC::FCTIDZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5155 /* fctiw */, PPC::FCTIW, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5155 /* fctiw */, PPC::FCTIWo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5161 /* fctiwuz */, PPC::FCTIWUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5161 /* fctiwuz */, PPC::FCTIWUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5169 /* fctiwz */, PPC::FCTIWZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5169 /* fctiwz */, PPC::FCTIWZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5176 /* fdiv */, PPC::FDIV, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5176 /* fdiv */, PPC::FDIVo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5181 /* fdivs */, PPC::FDIVS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5181 /* fdivs */, PPC::FDIVSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5187 /* fmadd */, PPC::FMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5187 /* fmadd */, PPC::FMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5193 /* fmadds */, PPC::FMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5193 /* fmadds */, PPC::FMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5200 /* fmr */, PPC::FMR, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5200 /* fmr */, PPC::FMRo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5204 /* fmsub */, PPC::FMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5204 /* fmsub */, PPC::FMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5210 /* fmsubs */, PPC::FMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5210 /* fmsubs */, PPC::FMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5217 /* fmul */, PPC::FMUL, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5217 /* fmul */, PPC::FMULo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5222 /* fmuls */, PPC::FMULS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5222 /* fmuls */, PPC::FMULSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5228 /* fnabs */, PPC::FNABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5228 /* fnabs */, PPC::FNABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5234 /* fneg */, PPC::FNEGS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5234 /* fneg */, PPC::FNEGSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5239 /* fnmadd */, PPC::FNMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5239 /* fnmadd */, PPC::FNMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5246 /* fnmadds */, PPC::FNMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5246 /* fnmadds */, PPC::FNMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5254 /* fnmsub */, PPC::FNMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5254 /* fnmsub */, PPC::FNMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5261 /* fnmsubs */, PPC::FNMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5261 /* fnmsubs */, PPC::FNMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5269 /* fre */, PPC::FRE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5269 /* fre */, PPC::FREo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5273 /* fres */, PPC::FRES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5273 /* fres */, PPC::FRESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5278 /* frim */, PPC::FRIMS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5278 /* frim */, PPC::FRIMSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5283 /* frin */, PPC::FRINS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5283 /* frin */, PPC::FRINSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5288 /* frip */, PPC::FRIPS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5288 /* frip */, PPC::FRIPSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5293 /* friz */, PPC::FRIZS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5293 /* friz */, PPC::FRIZSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5298 /* frsp */, PPC::FRSP, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 5298 /* frsp */, PPC::FRSPo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 5303 /* frsqrte */, PPC::FRSQRTE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5303 /* frsqrte */, PPC::FRSQRTEo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5311 /* frsqrtes */, PPC::FRSQRTES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5311 /* frsqrtes */, PPC::FRSQRTESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5320 /* fsel */, PPC::FSELS, Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5320 /* fsel */, PPC::FSELSo, Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5325 /* fsqrt */, PPC::FSQRT, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5325 /* fsqrt */, PPC::FSQRTo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5331 /* fsqrts */, PPC::FSQRTS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5331 /* fsqrts */, PPC::FSQRTSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5338 /* fsub */, PPC::FSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5338 /* fsub */, PPC::FSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5343 /* fsubs */, PPC::FSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5343 /* fsubs */, PPC::FSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5349 /* hrfid */, PPC::HRFID, Convert_NoOperands, 0, {  }, },
  { 5355 /* icbi */, PPC::ICBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5360 /* icbt */, PPC::ICBT, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5365 /* iccci */, PPC::ICCCI, Convert__regR0__regR0, 0, {  }, },
  { 5365 /* iccci */, PPC::ICCCI, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5371 /* ici */, PPC::ICCCI, Convert__regR0__regR0, 0, { MCK_0 }, },
  { 5375 /* inslwi */, PPC::INSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5375 /* inslwi */, PPC::INSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5382 /* insrdi */, PPC::INSRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5382 /* insrdi */, PPC::INSRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5389 /* insrwi */, PPC::INSRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5389 /* insrwi */, PPC::INSRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5396 /* isel */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 5401 /* isync */, PPC::ISYNC, Convert_NoOperands, 0, {  }, },
  { 5407 /* la */, PPC::LAx, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5410 /* lbarx */, PPC::LBARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5410 /* lbarx */, PPC::LBARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 5416 /* lbz */, PPC::LBZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5420 /* lbzcix */, PPC::LBZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5427 /* lbzu */, PPC::LBZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5432 /* lbzux */, PPC::LBZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5438 /* lbzx */, PPC::LBZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5443 /* ld */, PPC::LD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5446 /* ldarx */, PPC::LDARX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5446 /* ldarx */, PPC::LDARXL, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 5452 /* ldat */, PPC::LDAT, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 5457 /* ldbrx */, PPC::LDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5463 /* ldcix */, PPC::LDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5469 /* ldmx */, PPC::LDMX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5474 /* ldu */, PPC::LDU, Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5478 /* ldux */, PPC::LDUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5483 /* ldx */, PPC::LDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5487 /* lfd */, PPC::LFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5491 /* lfdu */, PPC::LFDU, Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5496 /* lfdux */, PPC::LFDUX, Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5502 /* lfdx */, PPC::LFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5507 /* lfiwax */, PPC::LFIWAX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5514 /* lfiwzx */, PPC::LFIWZX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5521 /* lfs */, PPC::LFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5525 /* lfsu */, PPC::LFSU, Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5530 /* lfsux */, PPC::LFSUX, Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5536 /* lfsx */, PPC::LFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5541 /* lha */, PPC::LHA, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5545 /* lharx */, PPC::LHARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5545 /* lharx */, PPC::LHARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 5551 /* lhau */, PPC::LHAU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5556 /* lhaux */, PPC::LHAUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5562 /* lhax */, PPC::LHAX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5567 /* lhbrx */, PPC::LHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5573 /* lhz */, PPC::LHZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5577 /* lhzcix */, PPC::LHZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5584 /* lhzu */, PPC::LHZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5589 /* lhzux */, PPC::LHZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5595 /* lhzx */, PPC::LHZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5600 /* li */, PPC::LI, Convert__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 5603 /* lis */, PPC::LIS, Convert__RegGPRC1_0__S17Imm1_1, 0, { MCK_RegGPRC, MCK_S17Imm }, },
  { 5607 /* lmw */, PPC::LMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5611 /* lswi */, PPC::LSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 5616 /* lvebx */, PPC::LVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5622 /* lvehx */, PPC::LVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5628 /* lvewx */, PPC::LVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5634 /* lvsl */, PPC::LVSL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5639 /* lvsr */, PPC::LVSR, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5644 /* lvx */, PPC::LVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5648 /* lvxl */, PPC::LVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5653 /* lwa */, PPC::LWA, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5657 /* lwarx */, PPC::LWARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5657 /* lwarx */, PPC::LWARXL, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC, MCK_1 }, },
  { 5663 /* lwat */, PPC::LWAT, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 5668 /* lwaux */, PPC::LWAUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5674 /* lwax */, PPC::LWAX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5679 /* lwbrx */, PPC::LWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5685 /* lwsync */, PPC::SYNC, Convert__imm_95_1, 0, {  }, },
  { 5692 /* lwz */, PPC::LWZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5696 /* lwzcix */, PPC::LWZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5703 /* lwzu */, PPC::LWZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5708 /* lwzux */, PPC::LWZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5714 /* lwzx */, PPC::LWZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5719 /* lxsd */, PPC::LXSD, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5724 /* lxsdx */, PPC::LXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5730 /* lxsibzx */, PPC::LXSIBZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5738 /* lxsihzx */, PPC::LXSIHZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5746 /* lxsiwax */, PPC::LXSIWAX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5754 /* lxsiwzx */, PPC::LXSIWZX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5762 /* lxssp */, PPC::LXSSP, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5768 /* lxsspx */, PPC::LXSSPX, Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5775 /* lxv */, PPC::LXV, Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2, 0, { MCK_RegVSRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 5779 /* lxvb16x */, PPC::LXVB16X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5787 /* lxvd2x */, PPC::LXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5794 /* lxvdsx */, PPC::LXVDSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5801 /* lxvh8x */, PPC::LXVH8X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5808 /* lxvl */, PPC::LXVL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, 0, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 5813 /* lxvll */, PPC::LXVLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, 0, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 5819 /* lxvw4x */, PPC::LXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5826 /* lxvwsx */, PPC::LXVWSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5833 /* lxvx */, PPC::LXVX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5838 /* mbar */, PPC::MBAR, Convert__imm_95_0, 0, {  }, },
  { 5838 /* mbar */, PPC::MBAR, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 5843 /* mcrf */, PPC::MCRF, Convert__RegCRRC1_0__RegCRRC1_1, 0, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 5848 /* mcrfs */, PPC::MCRFS, Convert__RegCRRC1_0__RegCRRC1_1, 0, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 5854 /* mcrxrx */, PPC::MCRXRX, Convert__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 5861 /* mfamr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_29, 0, { MCK_RegGPRC }, },
  { 5867 /* mfasr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_280, 0, { MCK_RegGPRC }, },
  { 5873 /* mfbhrbe */, PPC::MFBHRBE, Convert__RegGPRC1_0__U10Imm1_1__imm_95_0, 0, { MCK_RegGPRC, MCK_U10Imm }, },
  { 5881 /* mfbr0 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_128, 0, { MCK_RegGPRC }, },
  { 5887 /* mfbr1 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_129, 0, { MCK_RegGPRC }, },
  { 5893 /* mfbr2 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_130, 0, { MCK_RegGPRC }, },
  { 5899 /* mfbr3 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_131, 0, { MCK_RegGPRC }, },
  { 5905 /* mfbr4 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_132, 0, { MCK_RegGPRC }, },
  { 5911 /* mfbr5 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_133, 0, { MCK_RegGPRC }, },
  { 5917 /* mfbr6 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_134, 0, { MCK_RegGPRC }, },
  { 5923 /* mfbr7 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_135, 0, { MCK_RegGPRC }, },
  { 5929 /* mfcfar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_28, 0, { MCK_RegGPRC }, },
  { 5936 /* mfcr */, PPC::MFCR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5941 /* mfctr */, PPC::MFCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5947 /* mfdar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_19, 0, { MCK_RegGPRC }, },
  { 5953 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_537, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5953 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_539, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5953 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_541, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5953 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_543, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5961 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_536, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5961 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_538, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5961 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_540, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5961 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_542, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5969 /* mfdccr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1018, 0, { MCK_RegGPRC }, },
  { 5976 /* mfdcr */, PPC::MFDCR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 5982 /* mfdear */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_981, 0, { MCK_RegGPRC }, },
  { 5989 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_22, 0, { MCK_RegGPRC }, },
  { 5989 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_22, 0, { MCK_RegGPRC }, },
  { 5995 /* mfdscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_17, 0, { MCK_RegGPRC }, },
  { 6002 /* mfdsisr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_18, 0, { MCK_RegGPRC }, },
  { 6010 /* mfesr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_980, 0, { MCK_RegGPRC }, },
  { 6016 /* mffs */, PPC::MFFS, Convert__RegF8RC1_0, 0, { MCK_RegF8RC }, },
  { 6016 /* mffs */, PPC::MFFSo, Convert__RegF8RC1_1, 0, { MCK__DOT_, MCK_RegF8RC }, },
  { 6021 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_529, 0, { MCK_RegGPRC, MCK_0 }, },
  { 6021 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_531, 0, { MCK_RegGPRC, MCK_1 }, },
  { 6021 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_533, 0, { MCK_RegGPRC, MCK_2 }, },
  { 6021 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_535, 0, { MCK_RegGPRC, MCK_3 }, },
  { 6029 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_528, 0, { MCK_RegGPRC, MCK_0 }, },
  { 6029 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_530, 0, { MCK_RegGPRC, MCK_1 }, },
  { 6029 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_532, 0, { MCK_RegGPRC, MCK_2 }, },
  { 6029 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_534, 0, { MCK_RegGPRC, MCK_3 }, },
  { 6037 /* mficcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1019, 0, { MCK_RegGPRC }, },
  { 6044 /* mflr */, PPC::MFLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6049 /* mfmsr */, PPC::MFMSR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6055 /* mfocrf */, PPC::MFOCRF, Convert__RegGPRC1_0__CRBitMask1_1, 0, { MCK_RegGPRC, MCK_CRBitMask }, },
  { 6062 /* mfpid */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_48, 0, { MCK_RegGPRC }, },
  { 6068 /* mfpvr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_287, 0, { MCK_RegGPRC }, },
  { 6074 /* mfrtcl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_5, 0, { MCK_RegGPRC }, },
  { 6081 /* mfrtcu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_4, 0, { MCK_RegGPRC }, },
  { 6088 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_25, 0, { MCK_RegGPRC }, },
  { 6088 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_25, 0, { MCK_RegGPRC }, },
  { 6095 /* mfspefscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_512, 0, { MCK_RegGPRC }, },
  { 6105 /* mfspr */, PPC::MFSPR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, 0, { MCK_RegGPRC, MCK_0 }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, 0, { MCK_RegGPRC, MCK_1 }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, 0, { MCK_RegGPRC, MCK_2 }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, 0, { MCK_RegGPRC, MCK_3 }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, 0, { MCK_RegGPRC, MCK_4 }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, 0, { MCK_RegGPRC, MCK_5 }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, 0, { MCK_RegGPRC, MCK_6 }, },
  { 6111 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, 0, { MCK_RegGPRC, MCK_7 }, },
  { 6118 /* mfsprg0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, 0, { MCK_RegGPRC }, },
  { 6126 /* mfsprg1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, 0, { MCK_RegGPRC }, },
  { 6134 /* mfsprg2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, 0, { MCK_RegGPRC }, },
  { 6142 /* mfsprg3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, 0, { MCK_RegGPRC }, },
  { 6150 /* mfsprg4 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, 0, { MCK_RegGPRC }, },
  { 6158 /* mfsprg5 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, 0, { MCK_RegGPRC }, },
  { 6166 /* mfsprg6 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, 0, { MCK_RegGPRC }, },
  { 6174 /* mfsprg7 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, 0, { MCK_RegGPRC }, },
  { 6182 /* mfsr */, PPC::MFSR, Convert__RegGPRC1_0__U4Imm1_1, 0, { MCK_RegGPRC, MCK_U4Imm }, },
  { 6187 /* mfsrin */, PPC::MFSRIN, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6194 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_26, 0, { MCK_RegGPRC }, },
  { 6194 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_26, 0, { MCK_RegGPRC }, },
  { 6201 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_27, 0, { MCK_RegGPRC }, },
  { 6201 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_27, 0, { MCK_RegGPRC }, },
  { 6208 /* mfsrr2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_990, 0, { MCK_RegGPRC }, },
  { 6215 /* mfsrr3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_991, 0, { MCK_RegGPRC }, },
  { 6222 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, 0, { MCK_RegGPRC }, },
  { 6222 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6227 /* mftbhi */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_988, 0, { MCK_RegGPRC }, },
  { 6234 /* mftbl */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, 0, { MCK_RegGPRC }, },
  { 6240 /* mftblo */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_989, 0, { MCK_RegGPRC }, },
  { 6247 /* mftbu */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_269, 0, { MCK_RegGPRC }, },
  { 6253 /* mftcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_986, 0, { MCK_RegGPRC }, },
  { 6259 /* mfvrsave */, PPC::MFVRSAVE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6268 /* mfvscr */, PPC::MFVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 6275 /* mfvsrd */, PPC::MFVSRD, Convert__RegG8RC1_0__RegVSFRC1_1, 0, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 6282 /* mfvsrld */, PPC::MFVSRLD, Convert__RegG8RC1_0__RegVSRC1_1, 0, { MCK_RegG8RC, MCK_RegVSRC }, },
  { 6290 /* mfvsrwz */, PPC::MFVSRWZ, Convert__RegGPRC1_0__RegVSFRC1_1, 0, { MCK_RegGPRC, MCK_RegVSFRC }, },
  { 6298 /* mfxer */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1, 0, { MCK_RegGPRC }, },
  { 6304 /* mr */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6304 /* mr */, PPC::OR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6307 /* msgsync */, PPC::MSGSYNC, Convert_NoOperands, 0, {  }, },
  { 6315 /* msync */, PPC::SYNC, Convert__imm_95_0, 0, {  }, },
  { 6321 /* mtamr */, PPC::MTSPR, Convert__imm_95_29__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6327 /* mtasr */, PPC::MTSPR, Convert__imm_95_280__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6327 /* mtasr */, PPC::MTSPR, Convert__imm_95_280__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6333 /* mtbr0 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_128, 0, { MCK_RegGPRC }, },
  { 6339 /* mtbr1 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_129, 0, { MCK_RegGPRC }, },
  { 6345 /* mtbr2 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_130, 0, { MCK_RegGPRC }, },
  { 6351 /* mtbr3 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_131, 0, { MCK_RegGPRC }, },
  { 6357 /* mtbr4 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_132, 0, { MCK_RegGPRC }, },
  { 6363 /* mtbr5 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_133, 0, { MCK_RegGPRC }, },
  { 6369 /* mtbr6 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_134, 0, { MCK_RegGPRC }, },
  { 6375 /* mtbr7 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_135, 0, { MCK_RegGPRC }, },
  { 6381 /* mtcfar */, PPC::MTSPR, Convert__imm_95_28__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6388 /* mtcr */, PPC::MTCRF8, Convert__imm_95_255__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 6393 /* mtcrf */, PPC::MTCRF, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 6399 /* mtctr */, PPC::MTCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6405 /* mtdar */, PPC::MTSPR, Convert__imm_95_19__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6411 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_537__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6411 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_539__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6411 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_541__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6411 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_543__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6419 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_536__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6419 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_538__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6419 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_540__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6419 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_542__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6427 /* mtdccr */, PPC::MTSPR, Convert__imm_95_1018__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6434 /* mtdcr */, PPC::MTDCR, Convert__RegGPRC1_1__Imm1_0, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 6440 /* mtdear */, PPC::MTSPR, Convert__imm_95_981__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6447 /* mtdec */, PPC::MTSPR, Convert__imm_95_22__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6447 /* mtdec */, PPC::MTSPR, Convert__imm_95_22__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6453 /* mtdscr */, PPC::MTSPR, Convert__imm_95_17__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6460 /* mtdsisr */, PPC::MTSPR, Convert__imm_95_18__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6468 /* mtesr */, PPC::MTSPR, Convert__imm_95_980__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6474 /* mtfsb0 */, PPC::MTFSB0, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 6481 /* mtfsb1 */, PPC::MTFSB1, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 6488 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0, 0, { MCK_Imm, MCK_RegF8RC }, },
  { 6488 /* mtfsf */, PPC::MTFSFo, Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0, 0, { MCK__DOT_, MCK_Imm, MCK_RegF8RC }, },
  { 6488 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__Imm1_2__Imm1_3, 0, { MCK_Imm, MCK_RegF8RC, MCK_Imm, MCK_Imm }, },
  { 6488 /* mtfsf */, PPC::MTFSFo, Convert__Imm1_1__RegF8RC1_2__Imm1_3__Imm1_4, 0, { MCK__DOT_, MCK_Imm, MCK_RegF8RC, MCK_Imm, MCK_Imm }, },
  { 6494 /* mtfsfi */, PPC::MTFSFI, Convert__RegCRRC1_0__Imm1_1__imm_95_0, 0, { MCK_RegCRRC, MCK_Imm }, },
  { 6494 /* mtfsfi */, PPC::MTFSFIo, Convert__RegCRRC1_1__Imm1_2__imm_95_0, 0, { MCK__DOT_, MCK_RegCRRC, MCK_Imm }, },
  { 6494 /* mtfsfi */, PPC::MTFSFI, Convert__RegCRRC1_0__Imm1_1__Imm1_2, 0, { MCK_RegCRRC, MCK_Imm, MCK_Imm }, },
  { 6494 /* mtfsfi */, PPC::MTFSFIo, Convert__RegCRRC1_1__Imm1_2__Imm1_3, 0, { MCK__DOT_, MCK_RegCRRC, MCK_Imm, MCK_Imm }, },
  { 6501 /* mtibatl */, PPC::MTSPR, Convert__imm_95_529__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6501 /* mtibatl */, PPC::MTSPR, Convert__imm_95_531__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6501 /* mtibatl */, PPC::MTSPR, Convert__imm_95_533__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6501 /* mtibatl */, PPC::MTSPR, Convert__imm_95_535__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6509 /* mtibatu */, PPC::MTSPR, Convert__imm_95_528__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6509 /* mtibatu */, PPC::MTSPR, Convert__imm_95_530__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6509 /* mtibatu */, PPC::MTSPR, Convert__imm_95_532__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6509 /* mtibatu */, PPC::MTSPR, Convert__imm_95_534__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6517 /* mticcr */, PPC::MTSPR, Convert__imm_95_1019__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6524 /* mtlr */, PPC::MTLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6529 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__imm_95_0, 0, { MCK_RegGPRC }, },
  { 6529 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6535 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__imm_95_0, 0, { MCK_RegGPRC }, },
  { 6535 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6542 /* mtocrf */, PPC::MTOCRF, Convert__CRBitMask1_0__RegGPRC1_1, 0, { MCK_CRBitMask, MCK_RegGPRC }, },
  { 6549 /* mtpid */, PPC::MTSPR, Convert__imm_95_48__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6555 /* mtsdr1 */, PPC::MTSPR, Convert__imm_95_25__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6555 /* mtsdr1 */, PPC::MTSPR, Convert__imm_95_25__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6562 /* mtspefscr */, PPC::MTSPR, Convert__imm_95_512__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6572 /* mtspr */, PPC::MTSPR, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_1, 0, { MCK_4, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_1, 0, { MCK_5, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_1, 0, { MCK_6, MCK_RegGPRC }, },
  { 6578 /* mtsprg */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_1, 0, { MCK_7, MCK_RegGPRC }, },
  { 6585 /* mtsprg0 */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6593 /* mtsprg1 */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6601 /* mtsprg2 */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6609 /* mtsprg3 */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6617 /* mtsprg4 */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6625 /* mtsprg5 */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6633 /* mtsprg6 */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6641 /* mtsprg7 */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6649 /* mtsr */, PPC::MTSR, Convert__RegGPRC1_1__U4Imm1_0, 0, { MCK_U4Imm, MCK_RegGPRC }, },
  { 6654 /* mtsrin */, PPC::MTSRIN, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6661 /* mtsrr0 */, PPC::MTSPR, Convert__imm_95_26__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6661 /* mtsrr0 */, PPC::MTSPR, Convert__imm_95_26__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6668 /* mtsrr1 */, PPC::MTSPR, Convert__imm_95_27__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6668 /* mtsrr1 */, PPC::MTSPR, Convert__imm_95_27__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6675 /* mtsrr2 */, PPC::MTSPR, Convert__imm_95_990__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6682 /* mtsrr3 */, PPC::MTSPR, Convert__imm_95_991__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6689 /* mttbhi */, PPC::MTSPR, Convert__imm_95_988__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6696 /* mttbl */, PPC::MTSPR, Convert__imm_95_284__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6702 /* mttblo */, PPC::MTSPR, Convert__imm_95_989__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6709 /* mttbu */, PPC::MTSPR, Convert__imm_95_285__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6715 /* mttcr */, PPC::MTSPR, Convert__imm_95_986__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6721 /* mtvrsave */, PPC::MTVRSAVE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6730 /* mtvscr */, PPC::MTVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 6737 /* mtvsrd */, PPC::MTVSRD, Convert__RegVSFRC1_0__RegG8RC1_1, 0, { MCK_RegVSFRC, MCK_RegG8RC }, },
  { 6744 /* mtvsrdd */, PPC::MTVSRDD, Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegVSRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6752 /* mtvsrwa */, PPC::MTVSRWA, Convert__RegVSFRC1_0__RegGPRC1_1, 0, { MCK_RegVSFRC, MCK_RegGPRC }, },
  { 6760 /* mtvsrws */, PPC::MTVSRWS, Convert__RegVSRC1_0__RegGPRC1_1, 0, { MCK_RegVSRC, MCK_RegGPRC }, },
  { 6768 /* mtvsrwz */, PPC::MTVSRWZ, Convert__RegVSFRC1_0__RegGPRC1_1, 0, { MCK_RegVSFRC, MCK_RegGPRC }, },
  { 6776 /* mtxer */, PPC::MTSPR, Convert__imm_95_1__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6782 /* mulhd */, PPC::MULHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6782 /* mulhd */, PPC::MULHDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6788 /* mulhdu */, PPC::MULHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6788 /* mulhdu */, PPC::MULHDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6795 /* mulhw */, PPC::MULHW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6795 /* mulhw */, PPC::MULHWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6801 /* mulhwu */, PPC::MULHWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6801 /* mulhwu */, PPC::MULHWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6808 /* mulld */, PPC::MULLD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6808 /* mulld */, PPC::MULLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6814 /* mulli */, PPC::MULLI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6820 /* mullw */, PPC::MULLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6820 /* mullw */, PPC::MULLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6826 /* nand */, PPC::NAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6826 /* nand */, PPC::NANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6831 /* nap */, PPC::NAP, Convert_NoOperands, 0, {  }, },
  { 6835 /* neg */, PPC::NEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6835 /* neg */, PPC::NEGo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6839 /* nop */, PPC::NOP, Convert_NoOperands, 0, {  }, },
  { 6843 /* nor */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6843 /* nor */, PPC::NORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6847 /* not */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6847 /* not */, PPC::NOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6851 /* or */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6851 /* or */, PPC::ORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6854 /* orc */, PPC::ORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6854 /* orc */, PPC::ORCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6858 /* ori */, PPC::ORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 6862 /* oris */, PPC::ORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 6867 /* paste */, PPC::CP_PASTEx, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6867 /* paste */, PPC::CP_PASTE, Convert__RegGPRC1_0__RegGPRC1_1__U1Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U1Imm }, },
  { 6867 /* paste */, PPC::CP_PASTEo, Convert__RegGPRC1_1__RegGPRC1_2__U1Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U1Imm }, },
  { 6873 /* paste_last */, PPC::CP_PASTE_LAST, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6884 /* popcntd */, PPC::POPCNTD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6892 /* popcntw */, PPC::POPCNTW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6900 /* ptesync */, PPC::SYNC, Convert__imm_95_2, 0, {  }, },
  { 6908 /* qvaligni */, PPC::QVALIGNI, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2__U2Imm1_3, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_U2Imm }, },
  { 6917 /* qvesplati */, PPC::QVESPLATI, Convert__RegQFRC1_0__RegQFRC1_1__U2Imm1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_U2Imm }, },
  { 6927 /* qvfabs */, PPC::QVFABS, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 6934 /* qvfadd */, PPC::QVFADD, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 6941 /* qvfadds */, PPC::QVFADDSs, Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_2, 0, { MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC }, },
  { 6949 /* qvfand */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_1, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 6956 /* qvfandc */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_4, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 6964 /* qvfcfid */, PPC::QVFCFID, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 6972 /* qvfcfids */, PPC::QVFCFIDS, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 6981 /* qvfcfidu */, PPC::QVFCFIDU, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 6990 /* qvfcfidus */, PPC::QVFCFIDUS, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7000 /* qvfclr */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_0__RegQBRC1_0__imm_95_0, 0, { MCK_RegQBRC }, },
  { 7007 /* qvfcmpeq */, PPC::QVFCMPEQb, Convert__RegQBRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQBRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7016 /* qvfcmpgt */, PPC::QVFCMPGTb, Convert__RegQBRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQBRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7025 /* qvfcmplt */, PPC::QVFCMPLTb, Convert__RegQBRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQBRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7034 /* qvfcpsgn */, PPC::QVFCPSGN, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7043 /* qvfctfb */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_1__imm_95_5, 0, { MCK_RegQBRC, MCK_RegQBRC }, },
  { 7051 /* qvfctid */, PPC::QVFCTID, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7059 /* qvfctidu */, PPC::QVFCTIDU, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7068 /* qvfctiduz */, PPC::QVFCTIDUZ, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7078 /* qvfctidz */, PPC::QVFCTIDZ, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7087 /* qvfctiw */, PPC::QVFCTIW, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7095 /* qvfctiwu */, PPC::QVFCTIWU, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7104 /* qvfctiwuz */, PPC::QVFCTIWUZ, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7114 /* qvfctiwz */, PPC::QVFCTIWZ, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7123 /* qvfequ */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_9, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 7130 /* qvflogical */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__U12Imm1_3, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC, MCK_U12Imm }, },
  { 7141 /* qvfmadd */, PPC::QVFMADD, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7149 /* qvfmadds */, PPC::QVFMADDSs, Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_3__RegQSRC1_2, 0, { MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC }, },
  { 7158 /* qvfmr */, PPC::QVFMR, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7164 /* qvfmsub */, PPC::QVFMSUB, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7172 /* qvfmsubs */, PPC::QVFMSUBSs, Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_3__RegQSRC1_2, 0, { MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC }, },
  { 7181 /* qvfmul */, PPC::QVFMUL, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7188 /* qvfmuls */, PPC::QVFMULSs, Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_2, 0, { MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC }, },
  { 7196 /* qvfnabs */, PPC::QVFNABS, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7204 /* qvfnand */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_14, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 7212 /* qvfneg */, PPC::QVFNEG, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7219 /* qvfnmadd */, PPC::QVFNMADD, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7228 /* qvfnmadds */, PPC::QVFNMADDSs, Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_3__RegQSRC1_2, 0, { MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC }, },
  { 7238 /* qvfnmsub */, PPC::QVFNMSUB, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7247 /* qvfnmsubs */, PPC::QVFNMSUBSs, Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_3__RegQSRC1_2, 0, { MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC }, },
  { 7257 /* qvfnor */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_8, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 7264 /* qvfnot */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_1__imm_95_10, 0, { MCK_RegQBRC, MCK_RegQBRC }, },
  { 7271 /* qvfor */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_7, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 7277 /* qvforc */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_13, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 7284 /* qvfperm */, PPC::QVFPERM, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2__RegQFRC1_3, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7292 /* qvfre */, PPC::QVFRE, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7298 /* qvfres */, PPC::QVFRES, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7305 /* qvfrim */, PPC::QVFRIM, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7312 /* qvfrin */, PPC::QVFRIN, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7319 /* qvfrip */, PPC::QVFRIP, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7326 /* qvfriz */, PPC::QVFRIZ, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7333 /* qvfrsp */, PPC::QVFRSPs, Convert__RegQSRC1_0__RegQFRC1_1, 0, { MCK_RegQSRC, MCK_RegQFRC }, },
  { 7340 /* qvfrsqrte */, PPC::QVFRSQRTE, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7350 /* qvfrsqrtes */, PPC::QVFRSQRTES, Convert__RegQFRC1_0__RegQFRC1_1, 0, { MCK_RegQFRC, MCK_RegQFRC }, },
  { 7361 /* qvfsel */, PPC::QVFSELb, Convert__RegQFRC1_0__RegQBRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQBRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7368 /* qvfset */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_0__RegQBRC1_0__imm_95_15, 0, { MCK_RegQBRC }, },
  { 7375 /* qvfsub */, PPC::QVFSUB, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7382 /* qvfsubs */, PPC::QVFSUBSs, Convert__RegQSRC1_0__RegQSRC1_1__RegQSRC1_2, 0, { MCK_RegQSRC, MCK_RegQSRC, MCK_RegQSRC }, },
  { 7390 /* qvftstnan */, PPC::QVFTSTNANb, Convert__RegQBRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQBRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7400 /* qvfxmadd */, PPC::QVFXMADD, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7409 /* qvfxmadds */, PPC::QVFXMADDS, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7419 /* qvfxmul */, PPC::QVFXMUL, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7427 /* qvfxmuls */, PPC::QVFXMULS, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7436 /* qvfxor */, PPC::QVFLOGICALb, Convert__RegQBRC1_0__RegQBRC1_1__RegQBRC1_2__imm_95_6, 0, { MCK_RegQBRC, MCK_RegQBRC, MCK_RegQBRC }, },
  { 7443 /* qvfxxcpnmadd */, PPC::QVFXXCPNMADD, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7456 /* qvfxxcpnmadds */, PPC::QVFXXCPNMADDS, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7470 /* qvfxxmadd */, PPC::QVFXXMADD, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7480 /* qvfxxmadds */, PPC::QVFXXMADDS, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7491 /* qvfxxnpmadd */, PPC::QVFXXNPMADD, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7503 /* qvfxxnpmadds */, PPC::QVFXXNPMADDS, Convert__RegQFRC1_0__RegQFRC1_1__RegQFRC1_3__RegQFRC1_2, 0, { MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC, MCK_RegQFRC }, },
  { 7516 /* qvgpci */, PPC::QVGPCI, Convert__RegQFRC1_0__U12Imm1_1, 0, { MCK_RegQFRC, MCK_U12Imm }, },
  { 7523 /* qvlfcdux */, PPC::QVLFCDUX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7532 /* qvlfcduxa */, PPC::QVLFCDUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7542 /* qvlfcdx */, PPC::QVLFCDX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7550 /* qvlfcdxa */, PPC::QVLFCDXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7559 /* qvlfcsux */, PPC::QVLFCSUX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7568 /* qvlfcsuxa */, PPC::QVLFCSUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7578 /* qvlfcsx */, PPC::QVLFCSX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7586 /* qvlfcsxa */, PPC::QVLFCSXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7595 /* qvlfdux */, PPC::QVLFDUX, Convert__RegQFRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7603 /* qvlfduxa */, PPC::QVLFDUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7612 /* qvlfdx */, PPC::QVLFDX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7619 /* qvlfdxa */, PPC::QVLFDXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7627 /* qvlfiwax */, PPC::QVLFIWAX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7636 /* qvlfiwaxa */, PPC::QVLFIWAXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7646 /* qvlfiwzx */, PPC::QVLFIWZX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7655 /* qvlfiwzxa */, PPC::QVLFIWZXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7665 /* qvlfsux */, PPC::QVLFSUX, Convert__RegQSRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7673 /* qvlfsuxa */, PPC::QVLFSUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7682 /* qvlfsx */, PPC::QVLFSX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7689 /* qvlfsxa */, PPC::QVLFSXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7697 /* qvlpcldx */, PPC::QVLPCLDX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7706 /* qvlpclsx */, PPC::QVLPCLSX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7715 /* qvlpcrdx */, PPC::QVLPCRDX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7724 /* qvlpcrsx */, PPC::QVLPCRSX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7733 /* qvstfcdux */, PPC::QVSTFCDUX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7743 /* qvstfcduxa */, PPC::QVSTFCDUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7754 /* qvstfcduxi */, PPC::QVSTFCDUXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7765 /* qvstfcduxia */, PPC::QVSTFCDUXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7777 /* qvstfcdx */, PPC::QVSTFCDX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7786 /* qvstfcdxa */, PPC::QVSTFCDXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7796 /* qvstfcdxi */, PPC::QVSTFCDXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7806 /* qvstfcdxia */, PPC::QVSTFCDXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7817 /* qvstfcsux */, PPC::QVSTFCSUX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7827 /* qvstfcsuxa */, PPC::QVSTFCSUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7838 /* qvstfcsuxi */, PPC::QVSTFCSUXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7849 /* qvstfcsuxia */, PPC::QVSTFCSUXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7861 /* qvstfcsx */, PPC::QVSTFCSX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7870 /* qvstfcsxa */, PPC::QVSTFCSXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7880 /* qvstfcsxi */, PPC::QVSTFCSXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7890 /* qvstfcsxia */, PPC::QVSTFCSXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7901 /* qvstfdux */, PPC::QVSTFDUX, Convert__imm_95_0__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7910 /* qvstfduxa */, PPC::QVSTFDUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7920 /* qvstfduxi */, PPC::QVSTFDUXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7930 /* qvstfduxia */, PPC::QVSTFDUXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7941 /* qvstfdx */, PPC::QVSTFDX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7949 /* qvstfdxa */, PPC::QVSTFDXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7958 /* qvstfdxi */, PPC::QVSTFDXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7967 /* qvstfdxia */, PPC::QVSTFDXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7977 /* qvstfiwx */, PPC::QVSTFIWX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7986 /* qvstfiwxa */, PPC::QVSTFIWXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 7996 /* qvstfsux */, PPC::QVSTFSUX, Convert__imm_95_0__RegQSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8005 /* qvstfsuxa */, PPC::QVSTFSUXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8015 /* qvstfsuxi */, PPC::QVSTFSUXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8025 /* qvstfsuxia */, PPC::QVSTFSUXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8036 /* qvstfsx */, PPC::QVSTFSX, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8044 /* qvstfsxa */, PPC::QVSTFSXA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8053 /* qvstfsxi */, PPC::QVSTFSXI, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8062 /* qvstfsxia */, PPC::QVSTFSXIA, Convert__RegQFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegQFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8072 /* rfci */, PPC::RFCI, Convert_NoOperands, 0, {  }, },
  { 8077 /* rfdi */, PPC::RFDI, Convert_NoOperands, 0, {  }, },
  { 8082 /* rfebb */, PPC::RFEBB, Convert__U1Imm1_0, 0, { MCK_U1Imm }, },
  { 8088 /* rfi */, PPC::RFI, Convert_NoOperands, 0, {  }, },
  { 8092 /* rfid */, PPC::RFID, Convert_NoOperands, 0, {  }, },
  { 8097 /* rfmci */, PPC::RFMCI, Convert_NoOperands, 0, {  }, },
  { 8103 /* rldcl */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8103 /* rldcl */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8109 /* rldcr */, PPC::RLDCR, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8109 /* rldcr */, PPC::RLDCRo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 8115 /* rldic */, PPC::RLDIC, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8115 /* rldic */, PPC::RLDICo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8121 /* rldicl */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8121 /* rldicl */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8128 /* rldicr */, PPC::RLDICR, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8128 /* rldicr */, PPC::RLDICRo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8135 /* rldimi */, PPC::RLDIMI, Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8135 /* rldimi */, PPC::RLDIMIo, Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 8142 /* rlwimi */, PPC::RLWIMIbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8142 /* rlwimi */, PPC::RLWIMIobm, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8142 /* rlwimi */, PPC::RLWIMI, Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8142 /* rlwimi */, PPC::RLWIMIo, Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8149 /* rlwinm */, PPC::RLWINMbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8149 /* rlwinm */, PPC::RLWINMobm, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8149 /* rlwinm */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8149 /* rlwinm */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 8156 /* rlwnm */, PPC::RLWNMbm, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8156 /* rlwnm */, PPC::RLWNMobm, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_Imm }, },
  { 8156 /* rlwnm */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 8156 /* rlwnm */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 8162 /* rotld */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8162 /* rotld */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8168 /* rotldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8168 /* rotldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8175 /* rotlw */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8175 /* rotlw */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8181 /* rotlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8181 /* rotlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8188 /* rotrdi */, PPC::ROTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8188 /* rotrdi */, PPC::ROTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8195 /* rotrwi */, PPC::ROTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8195 /* rotrwi */, PPC::ROTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8202 /* sc */, PPC::SC, Convert__imm_95_0, 0, {  }, },
  { 8202 /* sc */, PPC::SC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 8205 /* slbia */, PPC::SLBIA, Convert_NoOperands, 0, {  }, },
  { 8211 /* slbie */, PPC::SLBIE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 8217 /* slbieg */, PPC::SLBIEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8224 /* slbmfee */, PPC::SLBMFEE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8232 /* slbmfev */, PPC::SLBMFEV, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8240 /* slbmte */, PPC::SLBMTE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8247 /* slbsync */, PPC::SLBSYNC, Convert_NoOperands, 0, {  }, },
  { 8255 /* sld */, PPC::SLD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8255 /* sld */, PPC::SLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8259 /* sldi */, PPC::SLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8259 /* sldi */, PPC::SLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8264 /* slw */, PPC::SLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8264 /* slw */, PPC::SLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8268 /* slwi */, PPC::SLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8268 /* slwi */, PPC::SLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8273 /* srad */, PPC::SRAD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8273 /* srad */, PPC::SRADo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8278 /* sradi */, PPC::SRADI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8278 /* sradi */, PPC::SRADIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8284 /* sraw */, PPC::SRAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8284 /* sraw */, PPC::SRAWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8289 /* srawi */, PPC::SRAWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8289 /* srawi */, PPC::SRAWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8295 /* srd */, PPC::SRD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8295 /* srd */, PPC::SRDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 8299 /* srdi */, PPC::SRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8299 /* srdi */, PPC::SRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 8304 /* srw */, PPC::SRW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8304 /* srw */, PPC::SRWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8308 /* srwi */, PPC::SRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8308 /* srwi */, PPC::SRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8313 /* stb */, PPC::STB, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8317 /* stbcix */, PPC::STBCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8324 /* stbcx */, PPC::STBCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8330 /* stbu */, PPC::STBU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8335 /* stbux */, PPC::STBUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8341 /* stbx */, PPC::STBX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8346 /* std */, PPC::STD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 8350 /* stdat */, PPC::STDAT, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm }, },
  { 8356 /* stdbrx */, PPC::STDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8363 /* stdcix */, PPC::STDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8370 /* stdcx */, PPC::STDCX, Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8376 /* stdu */, PPC::STDU, Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 8381 /* stdux */, PPC::STDUX, Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8387 /* stdx */, PPC::STDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8392 /* stfd */, PPC::STFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8397 /* stfdu */, PPC::STFDU, Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8403 /* stfdux */, PPC::STFDUX, Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8410 /* stfdx */, PPC::STFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8416 /* stfiwx */, PPC::STFIWX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8423 /* stfs */, PPC::STFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8428 /* stfsu */, PPC::STFSU, Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8434 /* stfsux */, PPC::STFSUX, Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8441 /* stfsx */, PPC::STFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8447 /* sth */, PPC::STH, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8451 /* sthbrx */, PPC::STHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8458 /* sthcix */, PPC::STHCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8465 /* sthcx */, PPC::STHCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8471 /* sthu */, PPC::STHU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8476 /* sthux */, PPC::STHUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8482 /* sthx */, PPC::STHX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8487 /* stmw */, PPC::STMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8492 /* stop */, PPC::STOP, Convert_NoOperands, 0, {  }, },
  { 8497 /* stswi */, PPC::STSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8503 /* stvebx */, PPC::STVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8510 /* stvehx */, PPC::STVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8517 /* stvewx */, PPC::STVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8524 /* stvx */, PPC::STVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8529 /* stvxl */, PPC::STVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8535 /* stw */, PPC::STW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8539 /* stwat */, PPC::STWAT, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 8545 /* stwbrx */, PPC::STWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8552 /* stwcix */, PPC::STWCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8559 /* stwcx */, PPC::STWCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8565 /* stwu */, PPC::STWU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 8570 /* stwux */, PPC::STWUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8576 /* stwx */, PPC::STWX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8581 /* stxsd */, PPC::STXSD, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 8587 /* stxsdx */, PPC::STXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8594 /* stxsibx */, PPC::STXSIBX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8602 /* stxsihx */, PPC::STXSIHX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8610 /* stxsiwx */, PPC::STXSIWX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8618 /* stxssp */, PPC::STXSSP, Convert__RegVFRC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegVFRC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 8625 /* stxsspx */, PPC::STXSSPX, Convert__RegVSSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8633 /* stxv */, PPC::STXV, Convert__RegVSRC1_0__DispRIX161_1__RegGxRCNoR01_2, 0, { MCK_RegVSRC, MCK_DispRIX16, MCK_RegGxRCNoR0 }, },
  { 8638 /* stxvb16x */, PPC::STXVB16X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8647 /* stxvd2x */, PPC::STXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8655 /* stxvh8x */, PPC::STXVH8X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8663 /* stxvl */, PPC::STXVL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, 0, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 8669 /* stxvll */, PPC::STXVLL, Convert__RegVSRC1_0__Imm1_1__RegG8RC1_2, 0, { MCK_RegVSRC, MCK_Imm, MCK_RegG8RC }, },
  { 8676 /* stxvw4x */, PPC::STXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8684 /* stxvx */, PPC::STXVX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 8690 /* sub */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8690 /* sub */, PPC::SUBF8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8694 /* subc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8694 /* subc */, PPC::SUBFC8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8699 /* subf */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8699 /* subf */, PPC::SUBFo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8704 /* subfc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8704 /* subfc */, PPC::SUBFCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8710 /* subfe */, PPC::SUBFE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8710 /* subfe */, PPC::SUBFEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8716 /* subfic */, PPC::SUBFIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 8723 /* subfme */, PPC::SUBFME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8723 /* subfme */, PPC::SUBFMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8730 /* subfze */, PPC::SUBFZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 8730 /* subfze */, PPC::SUBFZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8737 /* subi */, PPC::SUBI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 8742 /* subic */, PPC::SUBIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 8742 /* subic */, PPC::SUBICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 8748 /* subis */, PPC::SUBIS, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 8754 /* sync */, PPC::SYNC, Convert__imm_95_0, 0, {  }, },
  { 8754 /* sync */, PPC::SYNC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 8759 /* tabort */, PPC::TABORT, Convert__imm_95_0__RegGPRC1_1, 0, { MCK__DOT_, MCK_RegGPRC }, },
  { 8766 /* tabortdc */, PPC::TABORTDC, Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8775 /* tabortdci */, PPC::TABORTDCI, Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_U5Imm }, },
  { 8785 /* tabortwc */, PPC::TABORTWC, Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8794 /* tabortwci */, PPC::TABORTWCI, Convert__imm_95_0__U5Imm1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_U5Imm, MCK_RegGPRC, MCK_U5Imm }, },
  { 8804 /* tbegin */, PPC::TBEGIN, Convert__imm_95_0__U1Imm1_1, 0, { MCK__DOT_, MCK_U1Imm }, },
  { 8811 /* tcheck */, PPC::TCHECK, Convert__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 8818 /* td */, PPC::TD, Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 8821 /* tdeq */, PPC::TD, Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8826 /* tdeqi */, PPC::TDI, Convert__imm_95_4__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8832 /* tdge */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8837 /* tdgei */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8843 /* tdgt */, PPC::TD, Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8848 /* tdgti */, PPC::TDI, Convert__imm_95_8__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8854 /* tdi */, PPC::TDI, Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_S16Imm }, },
  { 8858 /* tdle */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8863 /* tdlei */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8869 /* tdlge */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8875 /* tdlgei */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8882 /* tdlgt */, PPC::TD, Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8888 /* tdlgti */, PPC::TDI, Convert__imm_95_1__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8895 /* tdlle */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8901 /* tdllei */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8908 /* tdllt */, PPC::TD, Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8914 /* tdllti */, PPC::TDI, Convert__imm_95_2__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8921 /* tdlng */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8927 /* tdlngi */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8934 /* tdlnl */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8940 /* tdlnli */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8947 /* tdlt */, PPC::TD, Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8952 /* tdlti */, PPC::TDI, Convert__imm_95_16__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8958 /* tdne */, PPC::TD, Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8963 /* tdnei */, PPC::TDI, Convert__imm_95_24__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8969 /* tdng */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8974 /* tdngi */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8980 /* tdnl */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8985 /* tdnli */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 8991 /* tdu */, PPC::TD, Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 8995 /* tdui */, PPC::TDI, Convert__imm_95_31__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 9000 /* tend */, PPC::TEND, Convert__imm_95_0__U1Imm1_1, 0, { MCK__DOT_, MCK_U1Imm }, },
  { 9005 /* tlbia */, PPC::TLBIA, Convert_NoOperands, 0, {  }, },
  { 9011 /* tlbie */, PPC::TLBIE, Convert__regR0__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 9011 /* tlbie */, PPC::TLBIE, Convert__RegGPRC1_1__RegGPRC1_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9017 /* tlbiel */, PPC::TLBIEL, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 9024 /* tlbivax */, PPC::TLBIVAX, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9032 /* tlbld */, PPC::TLBLD, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 9038 /* tlbli */, PPC::TLBLI, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 9044 /* tlbre */, PPC::TLBRE, Convert_NoOperands, 0, {  }, },
  { 9044 /* tlbre */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 9050 /* tlbrehi */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9058 /* tlbrelo */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9066 /* tlbsx */, PPC::TLBSX, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9066 /* tlbsx */, PPC::TLBSX2, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9066 /* tlbsx */, PPC::TLBSX2D, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9072 /* tlbsync */, PPC::TLBSYNC, Convert_NoOperands, 0, {  }, },
  { 9080 /* tlbwe */, PPC::TLBWE, Convert_NoOperands, 0, {  }, },
  { 9080 /* tlbwe */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 9086 /* tlbwehi */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9094 /* tlbwelo */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9102 /* trap */, PPC::TRAP, Convert_NoOperands, 0, {  }, },
  { 9107 /* trechkpt */, PPC::TRECHKPT, Convert__imm_95_0, 0, { MCK__DOT_ }, },
  { 9116 /* treclaim */, PPC::TRECLAIM, Convert__imm_95_0__RegGPRC1_1, 0, { MCK__DOT_, MCK_RegGPRC }, },
  { 9125 /* tsr */, PPC::TSR, Convert__imm_95_0__U1Imm1_1, 0, { MCK__DOT_, MCK_U1Imm }, },
  { 9129 /* tw */, PPC::TW, Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9132 /* tweq */, PPC::TW, Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9137 /* tweqi */, PPC::TWI, Convert__imm_95_4__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9143 /* twge */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9148 /* twgei */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9154 /* twgt */, PPC::TW, Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9159 /* twgti */, PPC::TWI, Convert__imm_95_8__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9165 /* twi */, PPC::TWI, Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_S16Imm }, },
  { 9169 /* twle */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9174 /* twlei */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9180 /* twlge */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9186 /* twlgei */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9193 /* twlgt */, PPC::TW, Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9199 /* twlgti */, PPC::TWI, Convert__imm_95_1__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9206 /* twlle */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9212 /* twllei */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9219 /* twllt */, PPC::TW, Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9225 /* twllti */, PPC::TWI, Convert__imm_95_2__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9232 /* twlng */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9238 /* twlngi */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9245 /* twlnl */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9251 /* twlnli */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9258 /* twlt */, PPC::TW, Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9263 /* twlti */, PPC::TWI, Convert__imm_95_16__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9269 /* twne */, PPC::TW, Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9274 /* twnei */, PPC::TWI, Convert__imm_95_24__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9280 /* twng */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9285 /* twngi */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9291 /* twnl */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9296 /* twnli */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9302 /* twu */, PPC::TW, Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 9306 /* twui */, PPC::TWI, Convert__imm_95_31__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 9311 /* vabsdub */, PPC::VABSDUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9319 /* vabsduh */, PPC::VABSDUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9327 /* vabsduw */, PPC::VABSDUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9335 /* vaddcuq */, PPC::VADDCUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9343 /* vaddcuw */, PPC::VADDCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9351 /* vaddecuq */, PPC::VADDECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9360 /* vaddeuqm */, PPC::VADDEUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9369 /* vaddfp */, PPC::VADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9376 /* vaddsbs */, PPC::VADDSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9384 /* vaddshs */, PPC::VADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9392 /* vaddsws */, PPC::VADDSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9400 /* vaddubm */, PPC::VADDUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9408 /* vaddubs */, PPC::VADDUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9416 /* vaddudm */, PPC::VADDUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9424 /* vadduhm */, PPC::VADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9432 /* vadduhs */, PPC::VADDUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9440 /* vadduqm */, PPC::VADDUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9448 /* vadduwm */, PPC::VADDUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9456 /* vadduws */, PPC::VADDUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9464 /* vand */, PPC::VAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9469 /* vandc */, PPC::VANDC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9475 /* vavgsb */, PPC::VAVGSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9482 /* vavgsh */, PPC::VAVGSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9489 /* vavgsw */, PPC::VAVGSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9496 /* vavgub */, PPC::VAVGUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9503 /* vavguh */, PPC::VAVGUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9510 /* vavguw */, PPC::VAVGUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9517 /* vbpermd */, PPC::VBPERMD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9525 /* vbpermq */, PPC::VBPERMQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9533 /* vcfsx */, PPC::VCFSX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 9539 /* vcfux */, PPC::VCFUX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 9545 /* vcipher */, PPC::VCIPHER, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9553 /* vcipherlast */, PPC::VCIPHERLAST, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9565 /* vclzb */, PPC::VCLZB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9571 /* vclzd */, PPC::VCLZD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9577 /* vclzh */, PPC::VCLZH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9583 /* vclzlsbb */, PPC::VCLZLSBB, Convert__RegGPRC1_0__RegVRRC1_1, 0, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 9592 /* vclzw */, PPC::VCLZW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9598 /* vcmpbfp */, PPC::VCMPBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9598 /* vcmpbfp */, PPC::VCMPBFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9606 /* vcmpeqfp */, PPC::VCMPEQFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9606 /* vcmpeqfp */, PPC::VCMPEQFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9615 /* vcmpequb */, PPC::VCMPEQUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9615 /* vcmpequb */, PPC::VCMPEQUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9624 /* vcmpequd */, PPC::VCMPEQUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9624 /* vcmpequd */, PPC::VCMPEQUDo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9633 /* vcmpequh */, PPC::VCMPEQUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9633 /* vcmpequh */, PPC::VCMPEQUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9642 /* vcmpequw */, PPC::VCMPEQUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9642 /* vcmpequw */, PPC::VCMPEQUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9651 /* vcmpgefp */, PPC::VCMPGEFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9651 /* vcmpgefp */, PPC::VCMPGEFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9660 /* vcmpgtfp */, PPC::VCMPGTFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9660 /* vcmpgtfp */, PPC::VCMPGTFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9669 /* vcmpgtsb */, PPC::VCMPGTSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9669 /* vcmpgtsb */, PPC::VCMPGTSBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9678 /* vcmpgtsd */, PPC::VCMPGTSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9678 /* vcmpgtsd */, PPC::VCMPGTSDo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9687 /* vcmpgtsh */, PPC::VCMPGTSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9687 /* vcmpgtsh */, PPC::VCMPGTSHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9696 /* vcmpgtsw */, PPC::VCMPGTSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9696 /* vcmpgtsw */, PPC::VCMPGTSWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9705 /* vcmpgtub */, PPC::VCMPGTUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9705 /* vcmpgtub */, PPC::VCMPGTUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9714 /* vcmpgtud */, PPC::VCMPGTUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9714 /* vcmpgtud */, PPC::VCMPGTUDo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9723 /* vcmpgtuh */, PPC::VCMPGTUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9723 /* vcmpgtuh */, PPC::VCMPGTUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9732 /* vcmpgtuw */, PPC::VCMPGTUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9732 /* vcmpgtuw */, PPC::VCMPGTUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9741 /* vcmpneb */, PPC::VCMPNEB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9741 /* vcmpneb */, PPC::VCMPNEBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9749 /* vcmpneh */, PPC::VCMPNEH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9749 /* vcmpneh */, PPC::VCMPNEHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9757 /* vcmpnew */, PPC::VCMPNEW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9757 /* vcmpnew */, PPC::VCMPNEWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9765 /* vcmpnezb */, PPC::VCMPNEZB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9765 /* vcmpnezb */, PPC::VCMPNEZBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9774 /* vcmpnezh */, PPC::VCMPNEZH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9774 /* vcmpnezh */, PPC::VCMPNEZHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9783 /* vcmpnezw */, PPC::VCMPNEZW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9783 /* vcmpnezw */, PPC::VCMPNEZWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9792 /* vctsxs */, PPC::VCTSXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 9799 /* vctuxs */, PPC::VCTUXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 9806 /* vctzb */, PPC::VCTZB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9812 /* vctzd */, PPC::VCTZD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9818 /* vctzh */, PPC::VCTZH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9824 /* vctzlsbb */, PPC::VCTZLSBB, Convert__RegGPRC1_0__RegVRRC1_1, 0, { MCK_RegGPRC, MCK_RegVRRC }, },
  { 9833 /* vctzw */, PPC::VCTZW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9839 /* veqv */, PPC::VEQV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 9844 /* vexptefp */, PPC::VEXPTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9853 /* vextractd */, PPC::VEXTRACTD, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 9863 /* vextractub */, PPC::VEXTRACTUB, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 9874 /* vextractuh */, PPC::VEXTRACTUH, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 9885 /* vextractuw */, PPC::VEXTRACTUW, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 9896 /* vextsb2d */, PPC::VEXTSB2D, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9905 /* vextsb2w */, PPC::VEXTSB2W, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9914 /* vextsh2d */, PPC::VEXTSH2D, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9923 /* vextsh2w */, PPC::VEXTSH2W, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9932 /* vextsw2d */, PPC::VEXTSW2D, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 9941 /* vextublx */, PPC::VEXTUBLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 9950 /* vextubrx */, PPC::VEXTUBRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 9959 /* vextuhlx */, PPC::VEXTUHLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 9968 /* vextuhrx */, PPC::VEXTUHRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 9977 /* vextuwlx */, PPC::VEXTUWLX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 9986 /* vextuwrx */, PPC::VEXTUWRX, Convert__RegG8RC1_0__RegG8RC1_1__RegVRRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegVRRC }, },
  { 9995 /* vgbbd */, PPC::VGBBD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10001 /* vinsertb */, PPC::VINSERTB, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 10010 /* vinsertd */, PPC::VINSERTD, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 10019 /* vinserth */, PPC::VINSERTH, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 10028 /* vinsertw */, PPC::VINSERTW, Convert__RegVRRC1_0__U4Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U4Imm }, },
  { 10037 /* vlogefp */, PPC::VLOGEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10045 /* vmaddfp */, PPC::VMADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10053 /* vmaxfp */, PPC::VMAXFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10060 /* vmaxsb */, PPC::VMAXSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10067 /* vmaxsd */, PPC::VMAXSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10074 /* vmaxsh */, PPC::VMAXSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10081 /* vmaxsw */, PPC::VMAXSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10088 /* vmaxub */, PPC::VMAXUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10095 /* vmaxud */, PPC::VMAXUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10102 /* vmaxuh */, PPC::VMAXUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10109 /* vmaxuw */, PPC::VMAXUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10116 /* vmhaddshs */, PPC::VMHADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10126 /* vmhraddshs */, PPC::VMHRADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10137 /* vminfp */, PPC::VMINFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10144 /* vminsb */, PPC::VMINSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10151 /* vminsd */, PPC::VMINSD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10158 /* vminsh */, PPC::VMINSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10165 /* vminsw */, PPC::VMINSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10172 /* vminub */, PPC::VMINUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10179 /* vminud */, PPC::VMINUD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10186 /* vminuh */, PPC::VMINUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10193 /* vminuw */, PPC::VMINUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10200 /* vmladduhm */, PPC::VMLADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10210 /* vmrgew */, PPC::VMRGEW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10217 /* vmrghb */, PPC::VMRGHB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10224 /* vmrghh */, PPC::VMRGHH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10231 /* vmrghw */, PPC::VMRGHW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10238 /* vmrglb */, PPC::VMRGLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10245 /* vmrglh */, PPC::VMRGLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10252 /* vmrglw */, PPC::VMRGLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10259 /* vmrgow */, PPC::VMRGOW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10266 /* vmsummbm */, PPC::VMSUMMBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10275 /* vmsumshm */, PPC::VMSUMSHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10284 /* vmsumshs */, PPC::VMSUMSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10293 /* vmsumubm */, PPC::VMSUMUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10302 /* vmsumuhm */, PPC::VMSUMUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10311 /* vmsumuhs */, PPC::VMSUMUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10320 /* vmul10cuq */, PPC::VMUL10CUQ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10330 /* vmul10ecuq */, PPC::VMUL10ECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10341 /* vmul10euq */, PPC::VMUL10EUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10351 /* vmul10uq */, PPC::VMUL10UQ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10360 /* vmulesb */, PPC::VMULESB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10368 /* vmulesh */, PPC::VMULESH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10376 /* vmulesw */, PPC::VMULESW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10384 /* vmuleub */, PPC::VMULEUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10392 /* vmuleuh */, PPC::VMULEUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10400 /* vmuleuw */, PPC::VMULEUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10408 /* vmulosb */, PPC::VMULOSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10416 /* vmulosh */, PPC::VMULOSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10424 /* vmulosw */, PPC::VMULOSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10432 /* vmuloub */, PPC::VMULOUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10440 /* vmulouh */, PPC::VMULOUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10448 /* vmulouw */, PPC::VMULOUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10456 /* vmuluwm */, PPC::VMULUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10464 /* vnand */, PPC::VNAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10470 /* vncipher */, PPC::VNCIPHER, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10479 /* vncipherlast */, PPC::VNCIPHERLAST, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10492 /* vnegd */, PPC::VNEGD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10498 /* vnegw */, PPC::VNEGW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10504 /* vnmsubfp */, PPC::VNMSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10513 /* vnor */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10518 /* vor */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10522 /* vorc */, PPC::VORC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10527 /* vperm */, PPC::VPERM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10533 /* vpermr */, PPC::VPERMR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10540 /* vpermxor */, PPC::VPERMXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10549 /* vpkpx */, PPC::VPKPX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10555 /* vpksdss */, PPC::VPKSDSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10563 /* vpksdus */, PPC::VPKSDUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10571 /* vpkshss */, PPC::VPKSHSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10579 /* vpkshus */, PPC::VPKSHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10587 /* vpkswss */, PPC::VPKSWSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10595 /* vpkswus */, PPC::VPKSWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10603 /* vpkudum */, PPC::VPKUDUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10611 /* vpkudus */, PPC::VPKUDUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10619 /* vpkuhum */, PPC::VPKUHUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10627 /* vpkuhus */, PPC::VPKUHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10635 /* vpkuwum */, PPC::VPKUWUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10643 /* vpkuwus */, PPC::VPKUWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10651 /* vpmsumb */, PPC::VPMSUMB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10659 /* vpmsumd */, PPC::VPMSUMD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10667 /* vpmsumh */, PPC::VPMSUMH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10675 /* vpmsumw */, PPC::VPMSUMW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10683 /* vpopcntb */, PPC::VPOPCNTB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10692 /* vpopcntd */, PPC::VPOPCNTD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10701 /* vpopcnth */, PPC::VPOPCNTH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10710 /* vpopcntw */, PPC::VPOPCNTW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10719 /* vprtybd */, PPC::VPRTYBD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10727 /* vprtybq */, PPC::VPRTYBQ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10735 /* vprtybw */, PPC::VPRTYBW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10743 /* vrefp */, PPC::VREFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10749 /* vrfim */, PPC::VRFIM, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10755 /* vrfin */, PPC::VRFIN, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10761 /* vrfip */, PPC::VRFIP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10767 /* vrfiz */, PPC::VRFIZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10773 /* vrlb */, PPC::VRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10778 /* vrld */, PPC::VRLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10783 /* vrldmi */, PPC::VRLDMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10790 /* vrldnm */, PPC::VRLDNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10797 /* vrlh */, PPC::VRLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10802 /* vrlw */, PPC::VRLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10807 /* vrlwmi */, PPC::VRLWMI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__Tie0, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10814 /* vrlwnm */, PPC::VRLWNM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10821 /* vrsqrtefp */, PPC::VRSQRTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10831 /* vsbox */, PPC::VSBOX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 10837 /* vsel */, PPC::VSEL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10842 /* vshasigmad */, PPC::VSHASIGMAD, Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm, MCK_U4Imm }, },
  { 10853 /* vshasigmaw */, PPC::VSHASIGMAW, Convert__RegVRRC1_0__RegVRRC1_1__U1Imm1_2__U4Imm1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U1Imm, MCK_U4Imm }, },
  { 10864 /* vsl */, PPC::VSL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10868 /* vslb */, PPC::VSLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10873 /* vsld */, PPC::VSLD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10878 /* vsldoi */, PPC::VSLDOI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10885 /* vslh */, PPC::VSLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10890 /* vslo */, PPC::VSLO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10895 /* vslv */, PPC::VSLV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10900 /* vslw */, PPC::VSLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10905 /* vspltb */, PPC::VSPLTB, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10912 /* vsplth */, PPC::VSPLTH, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10919 /* vspltisb */, PPC::VSPLTISB, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 10928 /* vspltish */, PPC::VSPLTISH, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 10937 /* vspltisw */, PPC::VSPLTISW, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 10946 /* vspltw */, PPC::VSPLTW, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 10953 /* vsr */, PPC::VSR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10957 /* vsrab */, PPC::VSRAB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10963 /* vsrad */, PPC::VSRAD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10969 /* vsrah */, PPC::VSRAH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10975 /* vsraw */, PPC::VSRAW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10981 /* vsrb */, PPC::VSRB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10986 /* vsrd */, PPC::VSRD, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10991 /* vsrh */, PPC::VSRH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 10996 /* vsro */, PPC::VSRO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11001 /* vsrv */, PPC::VSRV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11006 /* vsrw */, PPC::VSRW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11011 /* vsubcuq */, PPC::VSUBCUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11019 /* vsubcuw */, PPC::VSUBCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11027 /* vsubecuq */, PPC::VSUBECUQ, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11036 /* vsubeuqm */, PPC::VSUBEUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11045 /* vsubfp */, PPC::VSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11052 /* vsubsbs */, PPC::VSUBSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11060 /* vsubshs */, PPC::VSUBSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11068 /* vsubsws */, PPC::VSUBSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11076 /* vsububm */, PPC::VSUBUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11084 /* vsububs */, PPC::VSUBUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11092 /* vsubudm */, PPC::VSUBUDM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11100 /* vsubuhm */, PPC::VSUBUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11108 /* vsubuhs */, PPC::VSUBUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11116 /* vsubuqm */, PPC::VSUBUQM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11124 /* vsubuwm */, PPC::VSUBUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11132 /* vsubuws */, PPC::VSUBUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11140 /* vsum2sws */, PPC::VSUM2SWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11149 /* vsum4sbs */, PPC::VSUM4SBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11158 /* vsum4shs */, PPC::VSUM4SHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11167 /* vsum4ubs */, PPC::VSUM4UBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11176 /* vsumsws */, PPC::VSUMSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11184 /* vupkhpx */, PPC::VUPKHPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11192 /* vupkhsb */, PPC::VUPKHSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11200 /* vupkhsh */, PPC::VUPKHSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11208 /* vupkhsw */, PPC::VUPKHSW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11216 /* vupklpx */, PPC::VUPKLPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11224 /* vupklsb */, PPC::VUPKLSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11232 /* vupklsh */, PPC::VUPKLSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11240 /* vupklsw */, PPC::VUPKLSW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11248 /* vxor */, PPC::VXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11253 /* wait */, PPC::WAIT, Convert__imm_95_0, 0, {  }, },
  { 11253 /* wait */, PPC::WAIT, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 11258 /* waitimpl */, PPC::WAIT, Convert__imm_95_2, 0, {  }, },
  { 11267 /* waitrsv */, PPC::WAIT, Convert__imm_95_1, 0, {  }, },
  { 11275 /* wrtee */, PPC::WRTEE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 11281 /* wrteei */, PPC::WRTEEI, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 11288 /* xnop */, PPC::XORI, Convert__regR0__regR0__imm_95_0, 0, {  }, },
  { 11293 /* xor */, PPC::XOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11293 /* xor */, PPC::XORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 11297 /* xori */, PPC::XORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 11302 /* xoris */, PPC::XORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 11308 /* xsabsdp */, PPC::XSABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11316 /* xsabsqp */, PPC::XSABSQP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11324 /* xsadddp */, PPC::XSADDDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11332 /* xsaddqp */, PPC::XSADDQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11340 /* xsaddqpo */, PPC::XSADDQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11349 /* xsaddsp */, PPC::XSADDSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 11357 /* xscmpeqdp */, PPC::XSCMPEQDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11367 /* xscmpexpdp */, PPC::XSCMPEXPDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11378 /* xscmpexpqp */, PPC::XSCMPEXPQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11389 /* xscmpgedp */, PPC::XSCMPGEDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11399 /* xscmpgtdp */, PPC::XSCMPGTDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11409 /* xscmpnedp */, PPC::XSCMPNEDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11419 /* xscmpodp */, PPC::XSCMPODP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11428 /* xscmpoqp */, PPC::XSCMPOQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11437 /* xscmpudp */, PPC::XSCMPUDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11446 /* xscmpuqp */, PPC::XSCMPUQP, Convert__RegCRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegCRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11455 /* xscpsgndp */, PPC::XSCPSGNDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11465 /* xscpsgnqp */, PPC::XSCPSGNQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11475 /* xscvdphp */, PPC::XSCVDPHP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11484 /* xscvdpqp */, PPC::XSCVDPQP, Convert__RegVRRC1_0__RegVFRC1_1, 0, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 11493 /* xscvdpsp */, PPC::XSCVDPSP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11502 /* xscvdpspn */, PPC::XSCVDPSPN, Convert__RegVSRC1_0__RegVSSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSSRC }, },
  { 11512 /* xscvdpsxds */, PPC::XSCVDPSXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11523 /* xscvdpsxws */, PPC::XSCVDPSXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11534 /* xscvdpuxds */, PPC::XSCVDPUXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11545 /* xscvdpuxws */, PPC::XSCVDPUXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11556 /* xscvhpdp */, PPC::XSCVHPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11565 /* xscvqpdp */, PPC::XSCVQPDP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11574 /* xscvqpdpo */, PPC::XSCVQPDPO, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11584 /* xscvqpsdz */, PPC::XSCVQPSDZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11594 /* xscvqpswz */, PPC::XSCVQPSWZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11604 /* xscvqpudz */, PPC::XSCVQPUDZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11614 /* xscvqpuwz */, PPC::XSCVQPUWZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11624 /* xscvsdqp */, PPC::XSCVSDQP, Convert__RegVRRC1_0__RegVFRC1_1, 0, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 11633 /* xscvspdp */, PPC::XSCVSPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11642 /* xscvspdpn */, PPC::XSCVSPDPN, Convert__RegVSSRC1_0__RegVSRC1_1, 0, { MCK_RegVSSRC, MCK_RegVSRC }, },
  { 11652 /* xscvsxddp */, PPC::XSCVSXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11662 /* xscvsxdsp */, PPC::XSCVSXDSP, Convert__RegVSSRC1_0__RegVSFRC1_1, 0, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 11672 /* xscvudqp */, PPC::XSCVUDQP, Convert__RegVRRC1_0__RegVFRC1_1, 0, { MCK_RegVRRC, MCK_RegVFRC }, },
  { 11681 /* xscvuxddp */, PPC::XSCVUXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11691 /* xscvuxdsp */, PPC::XSCVUXDSP, Convert__RegVSSRC1_0__RegVSFRC1_1, 0, { MCK_RegVSSRC, MCK_RegVSFRC }, },
  { 11701 /* xsdivdp */, PPC::XSDIVDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11709 /* xsdivqp */, PPC::XSDIVQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11717 /* xsdivqpo */, PPC::XSDIVQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11726 /* xsdivsp */, PPC::XSDIVSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 11734 /* xsiexpdp */, PPC::XSIEXPDP, Convert__RegVSRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegVSRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 11743 /* xsiexpqp */, PPC::XSIEXPQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVSFRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVSFRC }, },
  { 11752 /* xsmaddadp */, PPC::XSMADDADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11762 /* xsmaddasp */, PPC::XSMADDASP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 11772 /* xsmaddmdp */, PPC::XSMADDMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11782 /* xsmaddmsp */, PPC::XSMADDMSP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 11792 /* xsmaddqp */, PPC::XSMADDQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11801 /* xsmaddqpo */, PPC::XSMADDQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11811 /* xsmaxcdp */, PPC::XSMAXCDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11820 /* xsmaxdp */, PPC::XSMAXDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11828 /* xsmaxjdp */, PPC::XSMAXJDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11837 /* xsmincdp */, PPC::XSMINCDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11846 /* xsmindp */, PPC::XSMINDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11854 /* xsminjdp */, PPC::XSMINJDP, Convert__RegVSRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11863 /* xsmsubadp */, PPC::XSMSUBADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11873 /* xsmsubasp */, PPC::XSMSUBASP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 11883 /* xsmsubmdp */, PPC::XSMSUBMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11893 /* xsmsubmsp */, PPC::XSMSUBMSP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 11903 /* xsmsubqp */, PPC::XSMSUBQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11912 /* xsmsubqpo */, PPC::XSMSUBQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11922 /* xsmuldp */, PPC::XSMULDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11930 /* xsmulqp */, PPC::XSMULQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11938 /* xsmulqpo */, PPC::XSMULQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 11947 /* xsmulsp */, PPC::XSMULSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 11955 /* xsnabsdp */, PPC::XSNABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11964 /* xsnabsqp */, PPC::XSNABSQP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11973 /* xsnegdp */, PPC::XSNEGDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 11981 /* xsnegqp */, PPC::XSNEGQP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 11989 /* xsnmaddadp */, PPC::XSNMADDADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12000 /* xsnmaddasp */, PPC::XSNMADDASP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12011 /* xsnmaddmdp */, PPC::XSNMADDMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12022 /* xsnmaddmsp */, PPC::XSNMADDMSP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12033 /* xsnmaddqp */, PPC::XSNMADDQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12043 /* xsnmaddqpo */, PPC::XSNMADDQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12054 /* xsnmsubadp */, PPC::XSNMSUBADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12065 /* xsnmsubasp */, PPC::XSNMSUBASP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12076 /* xsnmsubmdp */, PPC::XSNMSUBMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12087 /* xsnmsubmsp */, PPC::XSNMSUBMSP, Convert__RegVSSRC1_0__Tie0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12098 /* xsnmsubqp */, PPC::XSNMSUBQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12108 /* xsnmsubqpo */, PPC::XSNMSUBQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12119 /* xsrdpi */, PPC::XSRDPI, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12126 /* xsrdpic */, PPC::XSRDPIC, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12134 /* xsrdpim */, PPC::XSRDPIM, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12142 /* xsrdpip */, PPC::XSRDPIP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12150 /* xsrdpiz */, PPC::XSRDPIZ, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12158 /* xsredp */, PPC::XSREDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12165 /* xsresp */, PPC::XSRESP, Convert__RegVSSRC1_0__RegVSSRC1_1, 0, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12172 /* xsrqpi */, PPC::XSRQPI, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, 0, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 12179 /* xsrqpix */, PPC::XSRQPIX, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, 0, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 12187 /* xsrqpxp */, PPC::XSRQPXP, Convert__RegVRRC1_1__U1Imm1_0__RegVRRC1_2__U2Imm1_3, 0, { MCK_U1Imm, MCK_RegVRRC, MCK_RegVRRC, MCK_U2Imm }, },
  { 12195 /* xsrsqrtedp */, PPC::XSRSQRTEDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12206 /* xsrsqrtesp */, PPC::XSRSQRTESP, Convert__RegVSSRC1_0__RegVSSRC1_1, 0, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12217 /* xssqrtdp */, PPC::XSSQRTDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12226 /* xssqrtqp */, PPC::XSSQRTQP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12235 /* xssqrtqpo */, PPC::XSSQRTQPO, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12245 /* xssqrtsp */, PPC::XSSQRTSP, Convert__RegVSSRC1_0__RegVSSRC1_1, 0, { MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12254 /* xssubdp */, PPC::XSSUBDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12262 /* xssubqp */, PPC::XSSUBQP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12270 /* xssubqpo */, PPC::XSSUBQPO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 12279 /* xssubsp */, PPC::XSSUBSP, Convert__RegVSSRC1_0__RegVSSRC1_1__RegVSSRC1_2, 0, { MCK_RegVSSRC, MCK_RegVSSRC, MCK_RegVSSRC }, },
  { 12287 /* xstdivdp */, PPC::XSTDIVDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 12296 /* xstsqrtdp */, PPC::XSTSQRTDP, Convert__RegCRRC1_0__RegVSFRC1_1, 0, { MCK_RegCRRC, MCK_RegVSFRC }, },
  { 12306 /* xststdcdp */, PPC::XSTSTDCDP, Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_U7Imm }, },
  { 12316 /* xststdcqp */, PPC::XSTSTDCQP, Convert__RegCRRC1_0__U7Imm1_2__RegVRRC1_1, 0, { MCK_RegCRRC, MCK_RegVRRC, MCK_U7Imm }, },
  { 12326 /* xststdcsp */, PPC::XSTSTDCSP, Convert__RegCRRC1_0__U7Imm1_2__RegVSFRC1_1, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_U7Imm }, },
  { 12336 /* xsxexpdp */, PPC::XSXEXPDP, Convert__RegG8RC1_0__RegVSFRC1_1, 0, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 12345 /* xsxexpqp */, PPC::XSXEXPQP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12354 /* xsxsigdp */, PPC::XSXSIGDP, Convert__RegG8RC1_0__RegVSFRC1_1, 0, { MCK_RegG8RC, MCK_RegVSFRC }, },
  { 12363 /* xsxsigqp */, PPC::XSXSIGQP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 12372 /* xvabsdp */, PPC::XVABSDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12380 /* xvabssp */, PPC::XVABSSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12388 /* xvadddp */, PPC::XVADDDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12396 /* xvaddsp */, PPC::XVADDSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12404 /* xvcmpeqdp */, PPC::XVCMPEQDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12404 /* xvcmpeqdp */, PPC::XVCMPEQDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12414 /* xvcmpeqsp */, PPC::XVCMPEQSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12414 /* xvcmpeqsp */, PPC::XVCMPEQSPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12424 /* xvcmpgedp */, PPC::XVCMPGEDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12424 /* xvcmpgedp */, PPC::XVCMPGEDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12434 /* xvcmpgesp */, PPC::XVCMPGESP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12434 /* xvcmpgesp */, PPC::XVCMPGESPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12444 /* xvcmpgtdp */, PPC::XVCMPGTDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12444 /* xvcmpgtdp */, PPC::XVCMPGTDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12454 /* xvcmpgtsp */, PPC::XVCMPGTSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12454 /* xvcmpgtsp */, PPC::XVCMPGTSPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12464 /* xvcmpnedp */, PPC::XVCMPNEDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12464 /* xvcmpnedp */, PPC::XVCMPNEDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12474 /* xvcmpnesp */, PPC::XVCMPNESP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12474 /* xvcmpnesp */, PPC::XVCMPNESPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12484 /* xvcpsgndp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12494 /* xvcpsgnsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12504 /* xvcvdpsp */, PPC::XVCVDPSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12513 /* xvcvdpsxds */, PPC::XVCVDPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12524 /* xvcvdpsxws */, PPC::XVCVDPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12535 /* xvcvdpuxds */, PPC::XVCVDPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12546 /* xvcvdpuxws */, PPC::XVCVDPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12557 /* xvcvhpsp */, PPC::XVCVHPSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12566 /* xvcvspdp */, PPC::XVCVSPDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12575 /* xvcvsphp */, PPC::XVCVSPHP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12584 /* xvcvspsxds */, PPC::XVCVSPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12595 /* xvcvspsxws */, PPC::XVCVSPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12606 /* xvcvspuxds */, PPC::XVCVSPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12617 /* xvcvspuxws */, PPC::XVCVSPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12628 /* xvcvsxddp */, PPC::XVCVSXDDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12638 /* xvcvsxdsp */, PPC::XVCVSXDSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12648 /* xvcvsxwdp */, PPC::XVCVSXWDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12658 /* xvcvsxwsp */, PPC::XVCVSXWSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12668 /* xvcvuxddp */, PPC::XVCVUXDDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12678 /* xvcvuxdsp */, PPC::XVCVUXDSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12688 /* xvcvuxwdp */, PPC::XVCVUXWDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12698 /* xvcvuxwsp */, PPC::XVCVUXWSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12708 /* xvdivdp */, PPC::XVDIVDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12716 /* xvdivsp */, PPC::XVDIVSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12724 /* xviexpdp */, PPC::XVIEXPDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12733 /* xviexpsp */, PPC::XVIEXPSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12742 /* xvmaddadp */, PPC::XVMADDADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12752 /* xvmaddasp */, PPC::XVMADDASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12762 /* xvmaddmdp */, PPC::XVMADDMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12772 /* xvmaddmsp */, PPC::XVMADDMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12782 /* xvmaxdp */, PPC::XVMAXDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12790 /* xvmaxsp */, PPC::XVMAXSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12798 /* xvmindp */, PPC::XVMINDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12806 /* xvminsp */, PPC::XVMINSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12814 /* xvmovdp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12822 /* xvmovsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12830 /* xvmsubadp */, PPC::XVMSUBADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12840 /* xvmsubasp */, PPC::XVMSUBASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12850 /* xvmsubmdp */, PPC::XVMSUBMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12860 /* xvmsubmsp */, PPC::XVMSUBMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12870 /* xvmuldp */, PPC::XVMULDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12878 /* xvmulsp */, PPC::XVMULSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12886 /* xvnabsdp */, PPC::XVNABSDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12895 /* xvnabssp */, PPC::XVNABSSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12904 /* xvnegdp */, PPC::XVNEGDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12912 /* xvnegsp */, PPC::XVNEGSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 12920 /* xvnmaddadp */, PPC::XVNMADDADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12931 /* xvnmaddasp */, PPC::XVNMADDASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12942 /* xvnmaddmdp */, PPC::XVNMADDMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12953 /* xvnmaddmsp */, PPC::XVNMADDMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12964 /* xvnmsubadp */, PPC::XVNMSUBADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12975 /* xvnmsubasp */, PPC::XVNMSUBASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12986 /* xvnmsubmdp */, PPC::XVNMSUBMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 12997 /* xvnmsubmsp */, PPC::XVNMSUBMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13008 /* xvrdpi */, PPC::XVRDPI, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13015 /* xvrdpic */, PPC::XVRDPIC, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13023 /* xvrdpim */, PPC::XVRDPIM, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13031 /* xvrdpip */, PPC::XVRDPIP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13039 /* xvrdpiz */, PPC::XVRDPIZ, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13047 /* xvredp */, PPC::XVREDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13054 /* xvresp */, PPC::XVRESP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13061 /* xvrspi */, PPC::XVRSPI, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13068 /* xvrspic */, PPC::XVRSPIC, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13076 /* xvrspim */, PPC::XVRSPIM, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13084 /* xvrspip */, PPC::XVRSPIP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13092 /* xvrspiz */, PPC::XVRSPIZ, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13100 /* xvrsqrtedp */, PPC::XVRSQRTEDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13111 /* xvrsqrtesp */, PPC::XVRSQRTESP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13122 /* xvsqrtdp */, PPC::XVSQRTDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13131 /* xvsqrtsp */, PPC::XVSQRTSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13140 /* xvsubdp */, PPC::XVSUBDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13148 /* xvsubsp */, PPC::XVSUBSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13156 /* xvtdivdp */, PPC::XVTDIVDP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13165 /* xvtdivsp */, PPC::XVTDIVSP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13174 /* xvtsqrtdp */, PPC::XVTSQRTDP, Convert__RegCRRC1_0__RegVSRC1_1, 0, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 13184 /* xvtsqrtsp */, PPC::XVTSQRTSP, Convert__RegCRRC1_0__RegVSRC1_1, 0, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 13194 /* xvtstdcdp */, PPC::XVTSTDCDP, Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_U7Imm }, },
  { 13204 /* xvtstdcsp */, PPC::XVTSTDCSP, Convert__RegVSRC1_0__U7Imm1_2__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_U7Imm }, },
  { 13214 /* xvxexpdp */, PPC::XVXEXPDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13223 /* xvxexpsp */, PPC::XVXEXPSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13232 /* xvxsigdp */, PPC::XVXSIGDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13241 /* xvxsigsp */, PPC::XVXSIGSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13250 /* xxbrd */, PPC::XXBRD, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13256 /* xxbrh */, PPC::XXBRH, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13262 /* xxbrq */, PPC::XXBRQ, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13268 /* xxbrw */, PPC::XXBRW, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 13274 /* xxextractuw */, PPC::XXEXTRACTUW, Convert__RegVSFRC1_0__RegVSRC1_1__U4Imm1_2, 0, { MCK_RegVSFRC, MCK_RegVSRC, MCK_U4Imm }, },
  { 13286 /* xxinsertw */, PPC::XXINSERTW, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__U4Imm1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_U4Imm }, },
  { 13296 /* xxland */, PPC::XXLAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13303 /* xxlandc */, PPC::XXLANDC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13311 /* xxleqv */, PPC::XXLEQV, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13318 /* xxlnand */, PPC::XXLNAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13326 /* xxlnor */, PPC::XXLNOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13333 /* xxlor */, PPC::XXLOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13339 /* xxlorc */, PPC::XXLORC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13346 /* xxlxor */, PPC::XXLXOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13353 /* xxmrghd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13361 /* xxmrghw */, PPC::XXMRGHW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13369 /* xxmrgld */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13377 /* xxmrglw */, PPC::XXMRGLW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13385 /* xxperm */, PPC::XXPERM, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13392 /* xxpermdi */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 13401 /* xxpermr */, PPC::XXPERMR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13409 /* xxsel */, PPC::XXSEL, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 13415 /* xxsldwi */, PPC::XXSLDWI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 13423 /* xxspltd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_0, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_0 }, },
  { 13423 /* xxspltd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_3, 0, { MCK_RegVSRC, MCK_RegVSFRC, MCK_1 }, },
  { 13423 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_0 }, },
  { 13423 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_1 }, },
  { 13431 /* xxspltib */, PPC::XXSPLTIB, Convert__RegVSRC1_0__U8Imm1_1, 0, { MCK_RegVSRC, MCK_U8Imm }, },
  { 13440 /* xxspltw */, PPC::XXSPLTW, Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 13448 /* xxswapd */, PPC::XXPERMDIs, Convert__RegVSRC1_0__RegVSFRC1_1__imm_95_2, 0, { MCK_RegVSRC, MCK_RegVSFRC }, },
  { 13448 /* xxswapd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
};

bool PPCAsmParser::
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

unsigned PPCAsmParser::
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
  StringRef Mnemonic = ((PPCOperand&)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

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

    std::string Info;
    if (!getParser().getTargetParser().
        getTargetOptions().MCNoDeprecatedWarn &&
        MII.get(Inst.getOpcode()).getDeprecatedInfo(Inst, getSTI(), Info)) {
      SMLoc Loc = ((PPCOperand&)*Operands[0]).getStartLoc();
      getParser().Warning(Loc, Info, None);
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

#endif // GET_MATCHER_IMPLEMENTATION

