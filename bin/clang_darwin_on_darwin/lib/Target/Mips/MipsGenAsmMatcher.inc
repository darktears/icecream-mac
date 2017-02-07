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

  Match_Immz,
  Match_MemSImm10,
  Match_MemSImm10Lsl1,
  Match_MemSImm10Lsl2,
  Match_MemSImm10Lsl3,
  Match_MemSImm11,
  Match_MemSImm12,
  Match_MemSImm16,
  Match_MemSImm9,
  Match_SImm10_0,
  Match_SImm10_Lsl1,
  Match_SImm10_Lsl2,
  Match_SImm10_Lsl3,
  Match_SImm11_0,
  Match_SImm16,
  Match_SImm16_Relaxed,
  Match_SImm19_Lsl2,
  Match_SImm32,
  Match_SImm32_Relaxed,
  Match_SImm4_0,
  Match_SImm5_0,
  Match_SImm6_0,
  Match_SImm7_Lsl2,
  Match_SImm9_0,
  Match_UImm10_0,
  Match_UImm16,
  Match_UImm16_AltRelaxed,
  Match_UImm16_Relaxed,
  Match_UImm1_0,
  Match_UImm20_0,
  Match_UImm26_0,
  Match_UImm2_0,
  Match_UImm2_1,
  Match_UImm32_Coerced,
  Match_UImm3_0,
  Match_UImm4_0,
  Match_UImm5_0,
  Match_UImm5_0_Report_UImm6,
  Match_UImm5_1,
  Match_UImm5_32,
  Match_UImm5_33,
  Match_UImm5_Lsl2,
  Match_UImm6_0,
  Match_UImm6_Lsl2,
  Match_UImm7_0,
  Match_UImm7_N1,
  Match_UImm8_0,
  Match_UImmRange2_64,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint64_t {
  Feature_HasMips2 = (1ULL << 8),
  Feature_HasMips3_32 = (1ULL << 14),
  Feature_HasMips3_32r2 = (1ULL << 15),
  Feature_HasMips3 = (1ULL << 9),
  Feature_NotMips3 = (1ULL << 36),
  Feature_HasMips4_32 = (1ULL << 16),
  Feature_NotMips4_32 = (1ULL << 38),
  Feature_HasMips4_32r2 = (1ULL << 17),
  Feature_HasMips5_32r2 = (1ULL << 18),
  Feature_HasMips32 = (1ULL << 10),
  Feature_HasMips32r2 = (1ULL << 11),
  Feature_HasMips32r5 = (1ULL << 12),
  Feature_HasMips32r6 = (1ULL << 13),
  Feature_NotMips32r6 = (1ULL << 37),
  Feature_IsGP64bit = (1ULL << 27),
  Feature_IsGP32bit = (1ULL << 26),
  Feature_IsPTR64bit = (1ULL << 31),
  Feature_IsPTR32bit = (1ULL << 30),
  Feature_HasMips64 = (1ULL << 19),
  Feature_NotMips64 = (1ULL << 39),
  Feature_HasMips64r2 = (1ULL << 20),
  Feature_HasMips64r6 = (1ULL << 21),
  Feature_NotMips64r6 = (1ULL << 40),
  Feature_HasMicroMips32r6 = (1ULL << 6),
  Feature_HasMicroMips64r6 = (1ULL << 7),
  Feature_InMips16Mode = (1ULL << 24),
  Feature_HasCnMips = (1ULL << 0),
  Feature_NotCnMips = (1ULL << 33),
  Feature_HasStdEnc = (1ULL << 22),
  Feature_InMicroMips = (1ULL << 23),
  Feature_NotInMicroMips = (1ULL << 35),
  Feature_HasEVA = (1ULL << 4),
  Feature_HasMSA = (1ULL << 5),
  Feature_IsFP64bit = (1ULL << 25),
  Feature_NotFP64bit = (1ULL << 34),
  Feature_IsSingleFloat = (1ULL << 32),
  Feature_IsNotSingleFloat = (1ULL << 28),
  Feature_IsNotSoftFloat = (1ULL << 29),
  Feature_HasDSP = (1ULL << 1),
  Feature_HasDSPR2 = (1ULL << 2),
  Feature_HasDSPR3 = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasMips2: return "";
  case Feature_HasMips3_32: return "";
  case Feature_HasMips3_32r2: return "";
  case Feature_HasMips3: return "";
  case Feature_NotMips3: return "";
  case Feature_HasMips4_32: return "";
  case Feature_NotMips4_32: return "";
  case Feature_HasMips4_32r2: return "";
  case Feature_HasMips5_32r2: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips32r5: return "";
  case Feature_HasMips32r6: return "";
  case Feature_NotMips32r6: return "";
  case Feature_IsGP64bit: return "";
  case Feature_IsGP32bit: return "";
  case Feature_IsPTR64bit: return "";
  case Feature_IsPTR32bit: return "";
  case Feature_HasMips64: return "";
  case Feature_NotMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_HasMips64r6: return "";
  case Feature_NotMips64r6: return "";
  case Feature_HasMicroMips32r6: return "";
  case Feature_HasMicroMips64r6: return "";
  case Feature_InMips16Mode: return "";
  case Feature_HasCnMips: return "";
  case Feature_NotCnMips: return "";
  case Feature_HasStdEnc: return "";
  case Feature_InMicroMips: return "";
  case Feature_NotInMicroMips: return "";
  case Feature_HasEVA: return "";
  case Feature_HasMSA: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_IsNotSoftFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  case Feature_HasDSPR3: return "";
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
  CVT_95_addGPR32AsmRegOperands,
  CVT_95_addAFGR64AsmRegOperands,
  CVT_95_addFGR64AsmRegOperands,
  CVT_95_addFGR32AsmRegOperands,
  CVT_95_addSImmOperands_LT_32_GT_,
  CVT_95_addMSA128AsmRegOperands,
  CVT_95_addSImmOperands_LT_16_GT_,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_95_addGPRMM16AsmRegOperands,
  CVT_95_addConstantSImmOperands_LT_4_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_,
  CVT_95_addUImmOperands_LT_16_GT_,
  CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_,
  CVT_regZERO,
  CVT_95_addGPR64AsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_,
  CVT_regFCC0,
  CVT_95_addFCCAsmRegOperands,
  CVT_95_addCOP2AsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_,
  CVT_imm_95_0,
  CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_,
  CVT_95_addMemOperands,
  CVT_95_addConstantSImmOperands_LT_5_44__32_0_GT_,
  CVT_95_addCCRAsmRegOperands,
  CVT_95_addMSACtrlAsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_,
  CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_,
  CVT_95_addCOP0AsmRegOperands,
  CVT_regZERO_64,
  CVT_95_addACC64DSPAsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_1_GT_,
  CVT_regRA,
  CVT_95_addMicroMipsMemOperands,
  CVT_95_addCOP3AsmRegOperands,
  CVT_95_addConstantSImmOperands_LT_10_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_32_GT_,
  CVT_95_addConstantUImmOperands_LT_7_44__32__MINUS_1_GT_,
  CVT_95_addRegListOperands,
  CVT_95_addRegPairOperands,
  CVT_95_addMovePRegPairOperands,
  CVT_95_addGPRMM16AsmRegMovePOperands,
  CVT_95_addHI32DSPAsmRegOperands,
  CVT_95_addLO32DSPAsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_,
  CVT_95_addHWRegsAsmRegOperands,
  CVT_95_addGPRMM16AsmRegZeroOperands,
  CVT_95_addConstantUImmOperands_LT_20_44__32_0_GT_,
  CVT_95_addConstantSImmOperands_LT_6_44__32_0_GT_,
  CVT_imm_95_2,
  CVT_imm_95_6,
  CVT_imm_95_4,
  CVT_imm_95_5,
  CVT_imm_95_31,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm16_Relaxed1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm16_Relaxed1_2,
  Convert__SImm161_1,
  Convert__Reg1_0__SImm161_1,
  Convert__Reg1_0__SImm161_2,
  Convert__Reg1_0__Reg1_1__SImm161_2,
  Convert__Reg1_0__Tie0__SImm161_1,
  Convert__GPR32AsmReg1_0__Simm19_Lsl21_1,
  Convert__GPRMM16AsmReg1_0__Imm1_1,
  Convert__GPRMM16AsmReg1_0__UImm6Lsl21_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__ConstantSImm4_01_1,
  Convert__Imm1_0,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3,
  Convert__GPR32AsmReg1_0__SImm161_1,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0,
  Convert__JumpTarget1_0,
  Convert__regZERO__regZERO__JumpTarget1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO__JumpTarget1_0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm2_01_2__Tie0,
  Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2,
  Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2,
  Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2,
  Convert__FGR64AsmReg1_0__JumpTarget1_1,
  Convert__regFCC0__JumpTarget1_0,
  Convert__FCCAsmReg1_0__JumpTarget1_1,
  Convert__COP2AsmReg1_0__JumpTarget1_1,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2,
  Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2,
  Convert__Reg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__JumpTarget1_1,
  Convert__GPR64AsmReg1_0__JumpTarget1_1,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm6_01_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm5_01_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm8_01_2,
  Convert__MSA128AsmReg1_0__JumpTarget1_1,
  Convert__imm_95_0__imm_95_0,
  Convert_NoOperands,
  Convert__ConstantUImm10_01_0__imm_95_0,
  Convert__ConstantUImm10_01_0__ConstantUImm10_01_1,
  Convert__ConstantUImm4_01_0,
  Convert__SImm161_0,
  Convert__MemOffsetSimm92_1__ConstantUImm5_01_0,
  Convert__Mem2_1__ConstantUImm5_01_0,
  Convert__FGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2,
  Convert__GPR32AsmReg1_0__CCRAsmReg1_1,
  Convert__GPR32AsmReg1_0__COP2AsmReg1_1,
  Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3,
  Convert__Reg1_0__Reg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_3,
  Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__ConstantUImm1_01_3,
  Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_3,
  Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm2_01_3,
  Convert__CCRAsmReg1_1__GPR32AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR32AsmReg1_0,
  Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2,
  Convert__GPR64AsmReg1_0__Tie0__UImm16_AltRelaxed1_2,
  Convert__GPR64AsmReg1_0__Tie0__UImm161_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__UImm161_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_0_Report_UImm61_2__ConstantUImm5_11_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3,
  Convert__regZERO,
  Convert__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2__ConstantUImm5_11_3__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImmRange2_641_3__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3__Tie0,
  Convert__Reg1_1__Reg1_2,
  Convert__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__Mem2_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3,
  Convert__GPR64AsmReg1_2__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm2_11_3,
  Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0,
  Convert__GPR64AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2,
  Convert__GPR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__COP2AsmReg1_1,
  Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0,
  Convert__GPR64AsmReg1_0__UImm161_1,
  Convert__GPR64AsmReg1_0__COP2AsmReg1_1__ConstantUImm3_01_2,
  Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0,
  Convert__COP0AsmReg1_1__GPR64AsmReg1_0__ConstantUImm3_01_2,
  Convert__FGR64AsmReg1_1__GPR64AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR64AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0,
  Convert__COP2AsmReg1_1__GPR64AsmReg1_0__ConstantUImm3_01_2,
  Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm4_01_2,
  Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__ConstantUImm1_01_2,
  Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm3_01_2,
  Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm2_01_2,
  Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm4_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm1_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm3_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm2_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__regRA__GPR32AsmReg1_0,
  Convert__Reg1_0,
  Convert__GPR32AsmReg1_0__imm_95_0,
  Convert__GPR64AsmReg1_0__imm_95_0,
  Convert__regZERO__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0,
  Convert__regZERO_64__GPR64AsmReg1_0,
  Convert__UImm5Lsl21_0,
  Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1,
  Convert__FGR64AsmReg1_0__MemOffsetSimm162_1,
  Convert__FGR32AsmReg1_0__MemOffsetSimm162_1,
  Convert__GPR32AsmReg1_0__Imm1_1,
  Convert__GPR32AsmReg1_0__Mem2_1,
  Convert__GPR32AsmReg1_0__MemOffsetSimm162_1,
  Convert__GPR32AsmReg1_0__MemOffsetSimm92_1,
  Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__MemOffsetSimm162_1,
  Convert__MSA128AsmReg1_0__MemOffsetSimm102_1,
  Convert__MSA128AsmReg1_0__MemOffsetSimm10_32_1,
  Convert__MSA128AsmReg1_0__MemOffsetSimm10_12_1,
  Convert__MSA128AsmReg1_0__MemOffsetSimm10_22_1,
  Convert__COP2AsmReg1_0__MemOffsetSimm112_1,
  Convert__COP2AsmReg1_0__MemOffsetSimm162_1,
  Convert__COP3AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__ConstantSImm10_01_1,
  Convert__GPR64AsmReg1_0__Mem2_1__Tie0,
  Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__UImm32_Coerced1_1,
  Convert__GPRMM16AsmReg1_0__UImm7_N11_1,
  Convert__GPR64AsmReg1_0__MemOffsetSimm122_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3,
  Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__ConstantUImm2_11_3,
  Convert__GPR32AsmReg1_0__UImm161_1,
  Convert__GPR32AsmReg1_0__UImm16_Relaxed1_1,
  Convert__Reg1_0__Imm1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1,
  Convert__GPRMM16AsmReg1_0__MicroMipsMemGP2_1,
  Convert__GPR32AsmReg1_0__Mem2_1__Tie0,
  Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0,
  Convert__RegList1_0__Mem2_1,
  Convert__RegList161_0__MemOffsetUimm42_1,
  Convert__RegPair2_0__MemOffsetSimm122_1,
  Convert__GPR32AsmReg1_0__MemOffsetSimm122_1,
  Convert__GPR64AsmReg1_0__Simm19_Lsl21_1,
  Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3,
  Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2,
  Convert__GPR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__COP2AsmReg1_1__ConstantUImm3_01_2,
  Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64,
  Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0,
  Convert__COP0AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2,
  Convert__FGR32AsmReg1_1__GPR32AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0,
  Convert__COP2AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2,
  Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0,
  Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1,
  Convert__regZERO__regZERO__imm_95_0,
  Convert__regZERO__regZERO,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm321_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__regZERO,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0,
  Convert__GPR32AsmReg1_3__GPR32AsmReg1_1__ConstantUImm5_01_0,
  Convert__GPR32AsmReg1_0__ConstantUImm7_01_1,
  Convert__GPR32AsmReg1_0__ConstantUImm10_01_1,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__ConstantUImm3_01_2,
  Convert__GPR32AsmReg1_0__ConstantUImm8_01_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2,
  Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1,
  Convert__GPR32AsmReg1_0__Tie0__Mem2_1,
  Convert__GPR64AsmReg1_0__Tie0__MemOffsetSimm92_1,
  Convert__GPR64AsmReg1_0__Tie0__Mem2_1,
  Convert__imm_95_0,
  Convert__ConstantUImm10_01_0,
  Convert__ConstantUImm20_01_0,
  Convert__Reg1_0__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm321_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantSImm10_01_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantSImm10_01_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_2__GPR32AsmReg1_1,
  Convert__ACC64DSPAsmReg1_0__ConstantSImm6_01_1__Tie0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm1_01_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm2_01_3,
  Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm1_01_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm2_01_3,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2,
  Convert__ConstantUImm5_01_0,
  Convert__MemOffsetSimm162_0,
  Convert__imm_95_2,
  Convert__imm_95_6,
  Convert__imm_95_4,
  Convert__imm_95_5,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2,
  Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__imm_95_31,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addSImmOperands_LT_32_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addSImmOperands_LT_32_GT_, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 3, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 3, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addSImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm16_Relaxed1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addSImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addSImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm16_Relaxed1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addSImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__SImm161_1
  { CVT_95_addSImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__Reg1_0__SImm161_1
  { CVT_95_Reg, 1, CVT_95_addSImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__Reg1_0__SImm161_2
  { CVT_95_Reg, 1, CVT_95_addSImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm161_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addSImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__SImm161_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addSImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Simm19_Lsl21_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Imm1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__UImm6Lsl21_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__ConstantSImm4_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantSImmOperands_LT_4_44__32_0_GT_, 2, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addGPRMM16AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__SImm161_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addSImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addUImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addUImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Tied, 0, CVT_Done },
  // Convert__JumpTarget1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm2_01_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regFCC0__JumpTarget1_0
  { CVT_regFCC0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FCCAsmReg1_0__JumpTarget1_1
  { CVT_95_addFCCAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__JumpTarget1_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__JumpTarget1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm6_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm8_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__JumpTarget1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__ConstantUImm10_01_0__imm_95_0
  { CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__ConstantUImm10_01_0__ConstantUImm10_01_1
  { CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 1, CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 2, CVT_Done },
  // Convert__ConstantUImm4_01_0
  { CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 1, CVT_Done },
  // Convert__SImm161_0
  { CVT_95_addSImmOperands_LT_16_GT_, 1, CVT_Done },
  // Convert__MemOffsetSimm92_1__ConstantUImm5_01_0
  { CVT_95_addMemOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 1, CVT_Done },
  // Convert__Mem2_1__ConstantUImm5_01_0
  { CVT_95_addMemOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 1, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantSImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__CCRAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCCRAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP2AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSACtrlAsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__ConstantUImm1_01_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm2_01_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 4, CVT_Done },
  // Convert__CCRAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addCCRAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSACtrlAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addSImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addSImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__UImm16_AltRelaxed1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addSImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__UImm161_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addUImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__UImm161_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addUImmOperands_LT_16_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_0_Report_UImm61_2__ConstantUImm5_11_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Done },
  // Convert__regZERO
  { CVT_regZERO, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2__ConstantUImm5_11_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImmRange2_641_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_2__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm2_11_3
  { CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP2AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__UImm161_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addUImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP2AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR64AsmReg1_0__ConstantUImm3_01_2
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__FGR64AsmReg1_1__GPR64AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR64AsmReg1_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR64AsmReg1_0__ConstantUImm3_01_2
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm4_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__ConstantUImm1_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR64AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm3_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm2_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm4_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm1_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm3_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm2_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__regRA__GPR32AsmReg1_0
  { CVT_regRA, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regZERO__GPR32AsmReg1_0
  { CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO_64__GPR64AsmReg1_0
  { CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__UImm5Lsl21_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__MemOffsetSimm162_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__MemOffsetSimm162_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MemOffsetSimm162_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MemOffsetSimm92_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__MemOffsetSimm162_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__MemOffsetSimm102_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__MemOffsetSimm10_32_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__MemOffsetSimm10_12_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__MemOffsetSimm10_22_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__MemOffsetSimm112_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__MemOffsetSimm162_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP3AsmReg1_0__Mem2_1
  { CVT_95_addCOP3AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__ConstantSImm10_01_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addConstantSImmOperands_LT_10_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__UImm32_Coerced1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_32_GT_, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__UImm7_N11_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_7_44__32__MINUS_1_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__MemOffsetSimm122_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__ConstantUImm2_11_3
  { CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__UImm161_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addUImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__UImm16_Relaxed1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addUImmOperands_LT_16_GT_, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__MicroMipsMemGP2_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__RegList1_0__Mem2_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegList161_0__MemOffsetUimm42_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegPair2_0__MemOffsetSimm122_1
  { CVT_95_addRegPairOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MemOffsetSimm122_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Simm19_Lsl21_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_95_addAFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_95_addFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_95_addFGR32AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP2AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2
  { CVT_95_addMovePRegPairOperands, 1, CVT_95_addGPRMM16AsmRegMovePOperands, 2, CVT_95_addGPRMM16AsmRegMovePOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__FGR32AsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addAFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addHI32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addLO32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__regZERO__regZERO__imm_95_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regZERO__regZERO
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm321_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addSImmOperands_LT_32_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__regZERO
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_3__GPR32AsmReg1_1__ConstantUImm5_01_0
  { CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__ConstantUImm7_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__ConstantUImm10_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__ConstantUImm8_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegZeroOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__MemOffsetSimm92_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__ConstantUImm10_01_0
  { CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 1, CVT_Done },
  // Convert__ConstantUImm20_01_0
  { CVT_95_addConstantUImmOperands_LT_20_44__32_0_GT_, 1, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm321_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addSImmOperands_LT_32_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantSImm10_01_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantSImmOperands_LT_10_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantSImm10_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantSImmOperands_LT_10_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_2__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__ConstantSImm6_01_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addConstantSImmOperands_LT_6_44__32_0_GT_, 2, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm1_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm2_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm1_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm2_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__ConstantUImm5_01_0
  { CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 1, CVT_Done },
  // Convert__MemOffsetSimm162_0
  { CVT_95_addMemOperands, 1, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__imm_95_6
  { CVT_imm_95_6, 0, CVT_Done },
  // Convert__imm_95_4
  { CVT_imm_95_4, 0, CVT_Done },
  // Convert__imm_95_5
  { CVT_imm_95_5, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__imm_95_31
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_31, 0, CVT_Done },
};

void MipsAsmParser::
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
      static_cast<MipsOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_addGPR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addGPR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addAFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addFGR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addSImmOperands_LT_32_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addSImmOperands<32>(Inst, 1);
      break;
    case CVT_95_addMSA128AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addMSA128AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addSImmOperands_LT_16_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addSImmOperands<16>(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addGPRMM16AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantSImmOperands_LT_4_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantSImmOperands<4, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<5, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<2, 0>(Inst, 1);
      break;
    case CVT_95_addUImmOperands_LT_16_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addUImmOperands<16>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<8, 0>(Inst, 1);
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::createReg(Mips::ZERO));
      break;
    case CVT_95_addGPR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addGPR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<5, 32, -32>(Inst, 1);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::createReg(Mips::FCC0));
      break;
    case CVT_95_addFCCAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addFCCAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addCOP2AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addCOP2AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<3, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<6, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<4, 0>(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<10, 0>(Inst, 1);
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addMemOperands(Inst, 2);
      break;
    case CVT_95_addConstantSImmOperands_LT_5_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantSImmOperands<5, 0>(Inst, 1);
      break;
    case CVT_95_addCCRAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addCCRAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addMSACtrlAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<1, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<5, 1>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<5, 33>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<5, 32>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<2, 1>(Inst, 1);
      break;
    case CVT_95_addCOP0AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addCOP0AsmRegOperands(Inst, 1);
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::createReg(Mips::ZERO_64));
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addACC64DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_1_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<1>(Inst, 1);
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::createReg(Mips::RA));
      break;
    case CVT_95_addMicroMipsMemOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addMicroMipsMemOperands(Inst, 2);
      break;
    case CVT_95_addCOP3AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addCOP3AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantSImmOperands_LT_10_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantSImmOperands<10, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_32_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<32>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_7_44__32__MINUS_1_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<7, -1>(Inst, 1);
      break;
    case CVT_95_addRegListOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addRegListOperands(Inst, 1);
      break;
    case CVT_95_addRegPairOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addRegPairOperands(Inst, 2);
      break;
    case CVT_95_addMovePRegPairOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addMovePRegPairOperands(Inst, 2);
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addGPRMM16AsmRegMovePOperands(Inst, 1);
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addHI32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addLO32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<7, 0>(Inst, 1);
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addHWRegsAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addGPRMM16AsmRegZeroOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_20_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantUImmOperands<20, 0>(Inst, 1);
      break;
    case CVT_95_addConstantSImmOperands_LT_6_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[OpIdx]).addConstantSImmOperands<6, 0>(Inst, 1);
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    }
  }
}

void MipsAsmParser::
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
    case CVT_95_addGPR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSImmOperands_LT_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSA128AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSImmOperands_LT_16_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantSImmOperands_LT_4_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addUImmOperands_LT_16_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addGPR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addFCCAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP2AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addConstantSImmOperands_LT_5_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCCRAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP0AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMicroMipsMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCOP3AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantSImmOperands_LT_10_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_7_44__32__MINUS_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMovePRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_20_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantSImmOperands_LT_6_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
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
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK_0, // '0'
  MCK_16, // '16'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_Reg24, // derived register class
  MCK_ACC128, // register class 'ACC128'
  MCK_ACC64, // register class 'ACC64'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP32,SP'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_GP32, // register class 'GP32'
  MCK_GP64, // register class 'GP64'
  MCK_HI32, // register class 'HI32'
  MCK_HI64, // register class 'HI64'
  MCK_LO32, // register class 'LO32'
  MCK_LO64, // register class 'LO64'
  MCK_PC, // register class 'PC'
  MCK_SP64, // register class 'SP64'
  MCK_ZERO, // register class 'ZERO'
  MCK_Reg21, // derived register class
  MCK_Reg9, // derived register class
  MCK_OCTEON_MPL, // register class 'OCTEON_MPL'
  MCK_OCTEON_P, // register class 'OCTEON_P'
  MCK_Reg20, // derived register class
  MCK_Reg16, // derived register class
  MCK_Reg8, // derived register class
  MCK_Reg4, // derived register class
  MCK_ACC64DSP, // register class 'ACC64DSP'
  MCK_HI32DSP, // register class 'HI32DSP'
  MCK_LO32DSP, // register class 'LO32DSP'
  MCK_Reg19, // derived register class
  MCK_Reg7, // derived register class
  MCK_Reg31, // derived register class
  MCK_Reg15, // derived register class
  MCK_Reg14, // derived register class
  MCK_CPU16Regs, // register class 'CPU16Regs,GPRMM16'
  MCK_FCC, // register class 'FCC'
  MCK_GPRMM16MoveP, // register class 'GPRMM16MoveP'
  MCK_GPRMM16Zero, // register class 'GPRMM16Zero'
  MCK_GPRMM16_64, // register class 'GPRMM16_64'
  MCK_MSACtrl, // register class 'MSACtrl'
  MCK_Reg18, // derived register class
  MCK_CPU16RegsPlusSP, // register class 'CPU16RegsPlusSP'
  MCK_Reg37, // derived register class
  MCK_Reg34, // derived register class
  MCK_Reg29, // derived register class
  MCK_Reg26, // derived register class
  MCK_AFGR64, // register class 'AFGR64'
  MCK_MSA128WEvens, // register class 'MSA128WEvens'
  MCK_Reg32, // derived register class
  MCK_CCR, // register class 'CCR'
  MCK_COP0, // register class 'COP0'
  MCK_COP2, // register class 'COP2'
  MCK_COP3, // register class 'COP3'
  MCK_DSPR, // register class 'DSPR,GPR32'
  MCK_FGR32, // register class 'FGR32,FGRCC'
  MCK_FGR64, // register class 'FGR64'
  MCK_FGRH32, // register class 'FGRH32'
  MCK_GPR64, // register class 'GPR64'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_MSA128F16, // register class 'MSA128F16,MSA128B,MSA128D,MSA128H,MSA128W'
  MCK_OddSP, // register class 'OddSP'
  MCK_ACC64DSPAsmReg, // user defined class 'ACC64DSPAsmOperand'
  MCK_AFGR64AsmReg, // user defined class 'AFGR64AsmOperand'
  MCK_CCRAsmReg, // user defined class 'CCRAsmOperand'
  MCK_COP0AsmReg, // user defined class 'COP0AsmOperand'
  MCK_COP2AsmReg, // user defined class 'COP2AsmOperand'
  MCK_COP3AsmReg, // user defined class 'COP3AsmOperand'
  MCK_FCCAsmReg, // user defined class 'FCCRegsAsmOperand'
  MCK_FGR32AsmReg, // user defined class 'FGR32AsmOperand'
  MCK_FGR64AsmReg, // user defined class 'FGR64AsmOperand'
  MCK_FGRH32AsmReg, // user defined class 'FGRH32AsmOperand'
  MCK_GPR32AsmReg, // user defined class 'GPR32AsmOperand'
  MCK_GPR64AsmReg, // user defined class 'GPR64AsmOperand'
  MCK_GPRMM16AsmReg, // user defined class 'GPRMM16AsmOperand'
  MCK_GPRMM16AsmRegMoveP, // user defined class 'GPRMM16AsmOperandMoveP'
  MCK_GPRMM16AsmRegZero, // user defined class 'GPRMM16AsmOperandZero'
  MCK_HI32DSPAsmReg, // user defined class 'HI32DSPAsmOperand'
  MCK_HWRegsAsmReg, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_LO32DSPAsmReg, // user defined class 'LO32DSPAsmOperand'
  MCK_MSA128AsmReg, // user defined class 'MSA128AsmOperand'
  MCK_MSACtrlAsmReg, // user defined class 'MSACtrlAsmOperand'
  MCK_MicroMipsMemGP, // user defined class 'MicroMipsMemGPAsmOperand'
  MCK_MicroMipsMem, // user defined class 'MicroMipsMemGPRMM16AsmOperand'
  MCK_MicroMipsMemSP, // user defined class 'MicroMipsMemSPAsmOperand'
  MCK_InvNum, // user defined class 'MipsInvertedImmoperand'
  MCK_JumpTarget, // user defined class 'MipsJumpTargetAsmOperand'
  MCK_MemOffsetSimm10, // user defined class 'MipsMemSimm10AsmOperand'
  MCK_MemOffsetSimm10_1, // user defined class 'MipsMemSimm10Lsl1AsmOperand'
  MCK_MemOffsetSimm10_2, // user defined class 'MipsMemSimm10Lsl2AsmOperand'
  MCK_MemOffsetSimm10_3, // user defined class 'MipsMemSimm10Lsl3AsmOperand'
  MCK_MemOffsetSimm11, // user defined class 'MipsMemSimm11AsmOperand'
  MCK_MemOffsetSimm12, // user defined class 'MipsMemSimm12AsmOperand'
  MCK_MemOffsetSimm16, // user defined class 'MipsMemSimm16AsmOperand'
  MCK_MemOffsetSimm9, // user defined class 'MipsMemSimm9AsmOperand'
  MCK_MemOffsetUimm4, // user defined class 'MipsMemUimm4AsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  MCK_MovePRegPair, // user defined class 'MovePRegPairAsmOperand'
  MCK_RegList16, // user defined class 'RegList16AsmOperand'
  MCK_RegList, // user defined class 'RegListAsmOperand'
  MCK_RegPair, // user defined class 'RegPairAsmOperand'
  MCK_Simm19_Lsl2, // user defined class 'Simm19Lsl2AsmOperand'
  MCK_ConstantImmz, // user defined class 'ConstantImmzAsmOperandClass'
  MCK_ConstantUImm1_0, // user defined class 'ConstantUImm1AsmOperandClass'
  MCK_ConstantUImm2_0, // user defined class 'ConstantUImm2AsmOperandClass'
  MCK_ConstantUImm2_1, // user defined class 'ConstantUImm2Plus1AsmOperandClass'
  MCK_ConstantUImm3_0, // user defined class 'ConstantUImm3AsmOperandClass'
  MCK_ConstantSImm4_0, // user defined class 'ConstantSImm4AsmOperandClass'
  MCK_ConstantUImm4_0, // user defined class 'ConstantUImm4AsmOperandClass'
  MCK_ConstantSImm5_0, // user defined class 'ConstantSImm5AsmOperandClass'
  MCK_ConstantUImm5_0, // user defined class 'ConstantUImm5AsmOperandClass'
  MCK_ConstantUImm5_1, // user defined class 'ConstantUImm5Plus1AsmOperandClass'
  MCK_ConstantUImm5_32_Norm, // user defined class 'ConstantUImm5Plus32NormalizeAsmOperandClass'
  MCK_ConstantUImm5_32, // user defined class 'ConstantUImm5Plus32AsmOperandClass'
  MCK_ConstantUImm5_0_Report_UImm6, // user defined class 'ConstantUImm5ReportUImm6AsmOperandClass'
  MCK_ConstantUImm5_33, // user defined class 'ConstantUImm5Plus33AsmOperandClass'
  MCK_ConstantUImmRange2_64, // user defined class 'ConstantUImm5_Range2_64AsmOperandClass'
  MCK_UImm5Lsl2, // user defined class 'ConstantUImm5Lsl2AsmOperandClass'
  MCK_ConstantSImm6_0, // user defined class 'ConstantSImm6AsmOperandClass'
  MCK_ConstantUImm6_0, // user defined class 'ConstantUImm6AsmOperandClass'
  MCK_UImm6Lsl2, // user defined class 'ConstantUImm6Lsl2AsmOperandClass'
  MCK_ConstantUImm7_0, // user defined class 'ConstantUImm7AsmOperandClass'
  MCK_UImm7_N1, // user defined class 'ConstantUImm7Sub1AsmOperandClass'
  MCK_ConstantUImm8_0, // user defined class 'ConstantUImm8AsmOperandClass'
  MCK_SImm7Lsl2, // user defined class 'ConstantSImm7Lsl2AsmOperandClass'
  MCK_ConstantSImm9_0, // user defined class 'ConstantSImm9AsmOperandClass'
  MCK_ConstantSImm10_0, // user defined class 'ConstantSImm10AsmOperandClass'
  MCK_ConstantUImm10_0, // user defined class 'ConstantUImm10AsmOperandClass'
  MCK_SImm10Lsl1, // user defined class 'ConstantSImm10Lsl1AsmOperandClass'
  MCK_ConstantSImm11_0, // user defined class 'ConstantSImm11AsmOperandClass'
  MCK_SImm10Lsl2, // user defined class 'ConstantSImm10Lsl2AsmOperandClass'
  MCK_SImm10Lsl3, // user defined class 'ConstantSImm10Lsl3AsmOperandClass'
  MCK_SImm16, // user defined class 'SImm16AsmOperandClass'
  MCK_SImm16_Relaxed, // user defined class 'SImm16RelaxedAsmOperandClass'
  MCK_UImm16_AltRelaxed, // user defined class 'UImm16AltRelaxedAsmOperandClass'
  MCK_UImm16, // user defined class 'UImm16AsmOperandClass'
  MCK_SImm19Lsl2, // user defined class 'ConstantSImm19Lsl2AsmOperandClass'
  MCK_UImm16_Relaxed, // user defined class 'UImm16RelaxedAsmOperandClass'
  MCK_ConstantUImm20_0, // user defined class 'ConstantUImm20AsmOperandClass'
  MCK_ConstantUImm26_0, // user defined class 'ConstantUImm26AsmOperandClass'
  MCK_SImm32, // user defined class 'SImm32AsmOperandClass'
  MCK_SImm32_Relaxed, // user defined class 'SImm32RelaxedAsmOperandClass'
  MCK_UImm32_Coerced, // user defined class 'UImm32CoercedAsmOperandClass'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    }
    break;
  case 2:	 // 1 string to match.
    if (memcmp(Name.data()+0, "16", 2))
      break;
    return MCK_16;	 // "16"
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "bit", 3))
      break;
    return MCK_bit;	 // "bit"
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "inst", 4))
      break;
    return MCK_inst;	 // "inst"
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

  case MCK_Reg24:
    return B == MCK_GPR64;

  case MCK_ACC64:
    return B == MCK_ACC64DSP;

  case MCK_CPURAReg:
    return B == MCK_DSPR;

  case MCK_CPUSPReg:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_GP32:
    return B == MCK_DSPR;

  case MCK_GP64:
    return B == MCK_GPR64;

  case MCK_HI32:
    return B == MCK_HI32DSP;

  case MCK_LO32:
    return B == MCK_LO32DSP;

  case MCK_SP64:
    switch (B) {
    default: return false;
    case MCK_Reg18: return true;
    case MCK_GPR64: return true;
    }

  case MCK_ZERO:
    switch (B) {
    default: return false;
    case MCK_Reg4: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg21:
    switch (B) {
    default: return false;
    case MCK_Reg20: return true;
    case MCK_Reg16: return true;
    case MCK_Reg19: return true;
    case MCK_Reg15: return true;
    case MCK_Reg14: return true;
    case MCK_GPRMM16_64: return true;
    case MCK_Reg18: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_Reg4: return true;
    case MCK_Reg7: return true;
    case MCK_CPU16Regs: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg20:
    switch (B) {
    default: return false;
    case MCK_Reg15: return true;
    case MCK_GPRMM16_64: return true;
    case MCK_Reg18: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg16:
    switch (B) {
    default: return false;
    case MCK_Reg15: return true;
    case MCK_Reg14: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg8:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg4:
    switch (B) {
    default: return false;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg19:
    switch (B) {
    default: return false;
    case MCK_Reg14: return true;
    case MCK_GPRMM16_64: return true;
    case MCK_Reg18: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg7:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg31:
    switch (B) {
    default: return false;
    case MCK_AFGR64: return true;
    case MCK_Reg32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg15:
    return B == MCK_GPR64;

  case MCK_Reg14:
    return B == MCK_GPR64;

  case MCK_CPU16Regs:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_GPRMM16MoveP:
    return B == MCK_DSPR;

  case MCK_GPRMM16Zero:
    return B == MCK_DSPR;

  case MCK_GPRMM16_64:
    switch (B) {
    default: return false;
    case MCK_Reg18: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg18:
    return B == MCK_GPR64;

  case MCK_CPU16RegsPlusSP:
    return B == MCK_DSPR;

  case MCK_Reg37:
    return B == MCK_MSA128F16;

  case MCK_Reg34:
    switch (B) {
    default: return false;
    case MCK_Reg32: return true;
    case MCK_FGR64: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg29:
    switch (B) {
    default: return false;
    case MCK_FGRH32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg26:
    switch (B) {
    default: return false;
    case MCK_FGR32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_MSA128WEvens:
    return B == MCK_MSA128F16;

  case MCK_Reg32:
    return B == MCK_OddSP;

  case MCK_MemOffsetSimm10:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm10_1:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm10_2:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm10_3:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm11:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm12:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm16:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm9:
    return B == MCK_Mem;

  case MCK_MemOffsetUimm4:
    return B == MCK_Mem;

  case MCK_ConstantImmz:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm1_0: return true;
    case MCK_ConstantUImm2_0: return true;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantSImm4_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantSImm5_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm1_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm2_0: return true;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantSImm4_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantSImm5_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm2_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantSImm4_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantSImm5_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm2_1:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantSImm4_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantSImm5_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm3_0:
    switch (B) {
    default: return false;
    case MCK_ConstantSImm4_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantSImm5_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantSImm4_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantSImm5_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm4_0:
    switch (B) {
    default: return false;
    case MCK_ConstantSImm5_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantSImm5_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm5_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm5_1: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm5_1:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm5_32_Norm:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm5_32:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm5_0_Report_UImm6: return true;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm5_0_Report_UImm6:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm5_33: return true;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm5_33:
    switch (B) {
    default: return false;
    case MCK_ConstantUImmRange2_64: return true;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImmRange2_64:
    switch (B) {
    default: return false;
    case MCK_UImm5Lsl2: return true;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_UImm5Lsl2:
    switch (B) {
    default: return false;
    case MCK_ConstantSImm6_0: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantSImm6_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm6_0:
    switch (B) {
    default: return false;
    case MCK_UImm6Lsl2: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_UImm6Lsl2:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm7_0: return true;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm7_0:
    switch (B) {
    default: return false;
    case MCK_UImm7_N1: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_UImm7_N1:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm8_0: return true;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm8_0:
    switch (B) {
    default: return false;
    case MCK_SImm7Lsl2: return true;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm7Lsl2:
    switch (B) {
    default: return false;
    case MCK_ConstantSImm9_0: return true;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantSImm9_0:
    switch (B) {
    default: return false;
    case MCK_ConstantSImm10_0: return true;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantSImm10_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm10_0: return true;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm10_0:
    switch (B) {
    default: return false;
    case MCK_SImm10Lsl1: return true;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm10Lsl1:
    switch (B) {
    default: return false;
    case MCK_ConstantSImm11_0: return true;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantSImm11_0:
    switch (B) {
    default: return false;
    case MCK_SImm10Lsl2: return true;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm10Lsl2:
    switch (B) {
    default: return false;
    case MCK_SImm10Lsl3: return true;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm10Lsl3:
    switch (B) {
    default: return false;
    case MCK_SImm16: return true;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm16:
    switch (B) {
    default: return false;
    case MCK_SImm16_Relaxed: return true;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm16_Relaxed:
    switch (B) {
    default: return false;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_UImm16_AltRelaxed:
    switch (B) {
    default: return false;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_UImm16:
    switch (B) {
    default: return false;
    case MCK_UImm16_Relaxed: return true;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm19Lsl2:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_UImm16_Relaxed:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm20_0: return true;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm20_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm26_0: return true;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_ConstantUImm26_0:
    switch (B) {
    default: return false;
    case MCK_SImm32: return true;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm32:
    switch (B) {
    default: return false;
    case MCK_SImm32_Relaxed: return true;
    case MCK_UImm32_Coerced: return true;
    }

  case MCK_SImm32_Relaxed:
    return B == MCK_UImm32_Coerced;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  MipsOperand &Operand = (MipsOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'ACC64DSPAsmReg' class
  case MCK_ACC64DSPAsmReg:
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'AFGR64AsmReg' class
  case MCK_AFGR64AsmReg:
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'CCRAsmReg' class
  case MCK_CCRAsmReg:
    if (Operand.isCCRAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'COP0AsmReg' class
  case MCK_COP0AsmReg:
    if (Operand.isCOP0AsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'COP2AsmReg' class
  case MCK_COP2AsmReg:
    if (Operand.isCOP2AsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'COP3AsmReg' class
  case MCK_COP3AsmReg:
    if (Operand.isCOP3AsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FCCAsmReg' class
  case MCK_FCCAsmReg:
    if (Operand.isFCCAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FGR32AsmReg' class
  case MCK_FGR32AsmReg:
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FGR64AsmReg' class
  case MCK_FGR64AsmReg:
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'FGRH32AsmReg' class
  case MCK_FGRH32AsmReg:
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GPR32AsmReg' class
  case MCK_GPR32AsmReg:
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GPR64AsmReg' class
  case MCK_GPR64AsmReg:
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GPRMM16AsmReg' class
  case MCK_GPRMM16AsmReg:
    if (Operand.isMM16AsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GPRMM16AsmRegMoveP' class
  case MCK_GPRMM16AsmRegMoveP:
    if (Operand.isMM16AsmRegMoveP())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'GPRMM16AsmRegZero' class
  case MCK_GPRMM16AsmRegZero:
    if (Operand.isMM16AsmRegZero())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'HI32DSPAsmReg' class
  case MCK_HI32DSPAsmReg:
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'HWRegsAsmReg' class
  case MCK_HWRegsAsmReg:
    if (Operand.isHWRegsAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Imm' class
  case MCK_Imm:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'LO32DSPAsmReg' class
  case MCK_LO32DSPAsmReg:
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MSA128AsmReg' class
  case MCK_MSA128AsmReg:
    if (Operand.isMSA128AsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MSACtrlAsmReg' class
  case MCK_MSACtrlAsmReg:
    if (Operand.isMSACtrlAsmReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MicroMipsMemGP' class
  case MCK_MicroMipsMemGP:
    if (Operand.isMemWithSimmWordAlignedOffsetGP<9>())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MicroMipsMem' class
  case MCK_MicroMipsMem:
    if (Operand.isMemWithGRPMM16Base())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MicroMipsMemSP' class
  case MCK_MicroMipsMemSP:
    if (Operand.isMemWithUimmWordAlignedOffsetSP<7>())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'InvNum' class
  case MCK_InvNum:
    if (Operand.isInvNum())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'JumpTarget' class
  case MCK_JumpTarget:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MemOffsetSimm10' class
  case MCK_MemOffsetSimm10:
    if (Operand.isMemWithSimmOffset<10>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm10;
  // 'MemOffsetSimm10_1' class
  case MCK_MemOffsetSimm10_1:
    if (Operand.isMemWithSimmOffset<10, 1>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm10Lsl1;
  // 'MemOffsetSimm10_2' class
  case MCK_MemOffsetSimm10_2:
    if (Operand.isMemWithSimmOffset<10, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm10Lsl2;
  // 'MemOffsetSimm10_3' class
  case MCK_MemOffsetSimm10_3:
    if (Operand.isMemWithSimmOffset<10, 3>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm10Lsl3;
  // 'MemOffsetSimm11' class
  case MCK_MemOffsetSimm11:
    if (Operand.isMemWithSimmOffset<11>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm11;
  // 'MemOffsetSimm12' class
  case MCK_MemOffsetSimm12:
    if (Operand.isMemWithSimmOffset<12>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm12;
  // 'MemOffsetSimm16' class
  case MCK_MemOffsetSimm16:
    if (Operand.isMemWithSimmOffset<16>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm16;
  // 'MemOffsetSimm9' class
  case MCK_MemOffsetSimm9:
    if (Operand.isMemWithSimmOffset<9>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_MemSImm9;
  // 'MemOffsetUimm4' class
  case MCK_MemOffsetUimm4:
    if (Operand.isMemWithUimmOffsetSP<6>())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Mem' class
  case MCK_Mem:
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MovePRegPair' class
  case MCK_MovePRegPair:
    if (Operand.isMovePRegPair())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegList16' class
  case MCK_RegList16:
    if (Operand.isRegList16())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegList' class
  case MCK_RegList:
    if (Operand.isRegList())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'RegPair' class
  case MCK_RegPair:
    if (Operand.isRegPair())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Simm19_Lsl2' class
  case MCK_Simm19_Lsl2:
    if (Operand.isScaledSImm<19, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm19_Lsl2;
  // 'ConstantImmz' class
  case MCK_ConstantImmz:
    if (Operand.isConstantImmz())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_Immz;
  // 'ConstantUImm1_0' class
  case MCK_ConstantUImm1_0:
    if (Operand.isConstantUImm<1, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm1_0;
  // 'ConstantUImm2_0' class
  case MCK_ConstantUImm2_0:
    if (Operand.isConstantUImm<2, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm2_0;
  // 'ConstantUImm2_1' class
  case MCK_ConstantUImm2_1:
    if (Operand.isConstantUImm<2, 1>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm2_1;
  // 'ConstantUImm3_0' class
  case MCK_ConstantUImm3_0:
    if (Operand.isConstantUImm<3, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm3_0;
  // 'ConstantSImm4_0' class
  case MCK_ConstantSImm4_0:
    if (Operand.isConstantSImm<4, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm4_0;
  // 'ConstantUImm4_0' class
  case MCK_ConstantUImm4_0:
    if (Operand.isConstantUImm<4, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm4_0;
  // 'ConstantSImm5_0' class
  case MCK_ConstantSImm5_0:
    if (Operand.isConstantSImm<5, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm5_0;
  // 'ConstantUImm5_0' class
  case MCK_ConstantUImm5_0:
    if (Operand.isConstantUImm<5, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_0;
  // 'ConstantUImm5_1' class
  case MCK_ConstantUImm5_1:
    if (Operand.isConstantUImm<5, 1>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_1;
  // 'ConstantUImm5_32_Norm' class
  case MCK_ConstantUImm5_32_Norm:
    if (Operand.isConstantUImm<5, 32>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_32;
  // 'ConstantUImm5_32' class
  case MCK_ConstantUImm5_32:
    if (Operand.isConstantUImm<5, 32>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_32;
  // 'ConstantUImm5_0_Report_UImm6' class
  case MCK_ConstantUImm5_0_Report_UImm6:
    if (Operand.isConstantUImm<5, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_0_Report_UImm6;
  // 'ConstantUImm5_33' class
  case MCK_ConstantUImm5_33:
    if (Operand.isConstantUImm<5, 33>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_33;
  // 'ConstantUImmRange2_64' class
  case MCK_ConstantUImmRange2_64:
    if (Operand.isConstantUImmRange<2, 64>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImmRange2_64;
  // 'UImm5Lsl2' class
  case MCK_UImm5Lsl2:
    if (Operand.isScaledUImm<5, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_Lsl2;
  // 'ConstantSImm6_0' class
  case MCK_ConstantSImm6_0:
    if (Operand.isConstantSImm<6, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm6_0;
  // 'ConstantUImm6_0' class
  case MCK_ConstantUImm6_0:
    if (Operand.isConstantUImm<6, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm6_0;
  // 'UImm6Lsl2' class
  case MCK_UImm6Lsl2:
    if (Operand.isScaledUImm<6, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm6_Lsl2;
  // 'ConstantUImm7_0' class
  case MCK_ConstantUImm7_0:
    if (Operand.isConstantUImm<7, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm7_0;
  // 'UImm7_N1' class
  case MCK_UImm7_N1:
    if (Operand.isConstantUImm<7, -1>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm7_N1;
  // 'ConstantUImm8_0' class
  case MCK_ConstantUImm8_0:
    if (Operand.isConstantUImm<8, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm8_0;
  // 'SImm7Lsl2' class
  case MCK_SImm7Lsl2:
    if (Operand.isScaledSImm<7, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm7_Lsl2;
  // 'ConstantSImm9_0' class
  case MCK_ConstantSImm9_0:
    if (Operand.isConstantSImm<9, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm9_0;
  // 'ConstantSImm10_0' class
  case MCK_ConstantSImm10_0:
    if (Operand.isConstantSImm<10, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm10_0;
  // 'ConstantUImm10_0' class
  case MCK_ConstantUImm10_0:
    if (Operand.isConstantUImm<10, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm10_0;
  // 'SImm10Lsl1' class
  case MCK_SImm10Lsl1:
    if (Operand.isScaledSImm<10, 1>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm10_Lsl1;
  // 'ConstantSImm11_0' class
  case MCK_ConstantSImm11_0:
    if (Operand.isConstantSImm<11, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm11_0;
  // 'SImm10Lsl2' class
  case MCK_SImm10Lsl2:
    if (Operand.isScaledSImm<10, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm10_Lsl2;
  // 'SImm10Lsl3' class
  case MCK_SImm10Lsl3:
    if (Operand.isScaledSImm<10, 3>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm10_Lsl3;
  // 'SImm16' class
  case MCK_SImm16:
    if (Operand.isSImm<16>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm16;
  // 'SImm16_Relaxed' class
  case MCK_SImm16_Relaxed:
    if (Operand.isAnyImm<16>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm16_Relaxed;
  // 'UImm16_AltRelaxed' class
  case MCK_UImm16_AltRelaxed:
    if (Operand.isUImm<16>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm16_AltRelaxed;
  // 'UImm16' class
  case MCK_UImm16:
    if (Operand.isUImm<16>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm16;
  // 'SImm19Lsl2' class
  case MCK_SImm19Lsl2:
    if (Operand.isScaledSImm<19, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm19_Lsl2;
  // 'UImm16_Relaxed' class
  case MCK_UImm16_Relaxed:
    if (Operand.isAnyImm<16>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm16_Relaxed;
  // 'ConstantUImm20_0' class
  case MCK_ConstantUImm20_0:
    if (Operand.isConstantUImm<20, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm20_0;
  // 'ConstantUImm26_0' class
  case MCK_ConstantUImm26_0:
    if (Operand.isConstantUImm<26, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm26_0;
  // 'SImm32' class
  case MCK_SImm32:
    if (Operand.isSImm<32>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm32;
  // 'SImm32_Relaxed' class
  case MCK_SImm32_Relaxed:
    if (Operand.isAnyImm<32>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm32_Relaxed;
  // 'UImm32_Coerced' class
  case MCK_UImm32_Coerced:
    if (Operand.isSImm<33>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm32_Coerced;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_DSPR; break;
    case Mips::V0: OpKind = MCK_Reg9; break;
    case Mips::V1: OpKind = MCK_Reg9; break;
    case Mips::A0: OpKind = MCK_Reg7; break;
    case Mips::A1: OpKind = MCK_Reg7; break;
    case Mips::A2: OpKind = MCK_Reg7; break;
    case Mips::A3: OpKind = MCK_Reg7; break;
    case Mips::T0: OpKind = MCK_DSPR; break;
    case Mips::T1: OpKind = MCK_DSPR; break;
    case Mips::T2: OpKind = MCK_DSPR; break;
    case Mips::T3: OpKind = MCK_DSPR; break;
    case Mips::T4: OpKind = MCK_DSPR; break;
    case Mips::T5: OpKind = MCK_DSPR; break;
    case Mips::T6: OpKind = MCK_DSPR; break;
    case Mips::T7: OpKind = MCK_DSPR; break;
    case Mips::S0: OpKind = MCK_Reg8; break;
    case Mips::S1: OpKind = MCK_Reg9; break;
    case Mips::S2: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S3: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S4: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S5: OpKind = MCK_DSPR; break;
    case Mips::S6: OpKind = MCK_DSPR; break;
    case Mips::S7: OpKind = MCK_DSPR; break;
    case Mips::T8: OpKind = MCK_DSPR; break;
    case Mips::T9: OpKind = MCK_DSPR; break;
    case Mips::K0: OpKind = MCK_DSPR; break;
    case Mips::K1: OpKind = MCK_DSPR; break;
    case Mips::GP: OpKind = MCK_GP32; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_DSPR; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_Reg16; break;
    case Mips::AT_64: OpKind = MCK_GPR64; break;
    case Mips::V0_64: OpKind = MCK_Reg21; break;
    case Mips::V1_64: OpKind = MCK_Reg21; break;
    case Mips::A0_64: OpKind = MCK_Reg19; break;
    case Mips::A1_64: OpKind = MCK_Reg19; break;
    case Mips::A2_64: OpKind = MCK_Reg19; break;
    case Mips::A3_64: OpKind = MCK_Reg19; break;
    case Mips::T0_64: OpKind = MCK_GPR64; break;
    case Mips::T1_64: OpKind = MCK_GPR64; break;
    case Mips::T2_64: OpKind = MCK_GPR64; break;
    case Mips::T3_64: OpKind = MCK_GPR64; break;
    case Mips::T4_64: OpKind = MCK_GPR64; break;
    case Mips::T5_64: OpKind = MCK_GPR64; break;
    case Mips::T6_64: OpKind = MCK_GPR64; break;
    case Mips::T7_64: OpKind = MCK_GPR64; break;
    case Mips::S0_64: OpKind = MCK_Reg20; break;
    case Mips::S1_64: OpKind = MCK_Reg21; break;
    case Mips::S2_64: OpKind = MCK_Reg15; break;
    case Mips::S3_64: OpKind = MCK_Reg15; break;
    case Mips::S4_64: OpKind = MCK_Reg15; break;
    case Mips::S5_64: OpKind = MCK_GPR64; break;
    case Mips::S6_64: OpKind = MCK_GPR64; break;
    case Mips::S7_64: OpKind = MCK_GPR64; break;
    case Mips::T8_64: OpKind = MCK_GPR64; break;
    case Mips::T9_64: OpKind = MCK_GPR64; break;
    case Mips::K0_64: OpKind = MCK_GPR64; break;
    case Mips::K1_64: OpKind = MCK_GPR64; break;
    case Mips::GP_64: OpKind = MCK_GP64; break;
    case Mips::SP_64: OpKind = MCK_SP64; break;
    case Mips::FP_64: OpKind = MCK_GPR64; break;
    case Mips::RA_64: OpKind = MCK_Reg24; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_Reg26; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_Reg26; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_Reg26; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_Reg26; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_Reg26; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_Reg26; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_Reg26; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_Reg26; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_Reg26; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_Reg26; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_Reg26; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_Reg26; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_Reg26; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_Reg26; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_Reg26; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_Reg26; break;
    case Mips::F_HI0: OpKind = MCK_FGRH32; break;
    case Mips::F_HI1: OpKind = MCK_Reg29; break;
    case Mips::F_HI2: OpKind = MCK_FGRH32; break;
    case Mips::F_HI3: OpKind = MCK_Reg29; break;
    case Mips::F_HI4: OpKind = MCK_FGRH32; break;
    case Mips::F_HI5: OpKind = MCK_Reg29; break;
    case Mips::F_HI6: OpKind = MCK_FGRH32; break;
    case Mips::F_HI7: OpKind = MCK_Reg29; break;
    case Mips::F_HI8: OpKind = MCK_FGRH32; break;
    case Mips::F_HI9: OpKind = MCK_Reg29; break;
    case Mips::F_HI10: OpKind = MCK_FGRH32; break;
    case Mips::F_HI11: OpKind = MCK_Reg29; break;
    case Mips::F_HI12: OpKind = MCK_FGRH32; break;
    case Mips::F_HI13: OpKind = MCK_Reg29; break;
    case Mips::F_HI14: OpKind = MCK_FGRH32; break;
    case Mips::F_HI15: OpKind = MCK_Reg29; break;
    case Mips::F_HI16: OpKind = MCK_FGRH32; break;
    case Mips::F_HI17: OpKind = MCK_Reg29; break;
    case Mips::F_HI18: OpKind = MCK_FGRH32; break;
    case Mips::F_HI19: OpKind = MCK_Reg29; break;
    case Mips::F_HI20: OpKind = MCK_FGRH32; break;
    case Mips::F_HI21: OpKind = MCK_Reg29; break;
    case Mips::F_HI22: OpKind = MCK_FGRH32; break;
    case Mips::F_HI23: OpKind = MCK_Reg29; break;
    case Mips::F_HI24: OpKind = MCK_FGRH32; break;
    case Mips::F_HI25: OpKind = MCK_Reg29; break;
    case Mips::F_HI26: OpKind = MCK_FGRH32; break;
    case Mips::F_HI27: OpKind = MCK_Reg29; break;
    case Mips::F_HI28: OpKind = MCK_FGRH32; break;
    case Mips::F_HI29: OpKind = MCK_Reg29; break;
    case Mips::F_HI30: OpKind = MCK_FGRH32; break;
    case Mips::F_HI31: OpKind = MCK_Reg29; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_Reg31; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_Reg31; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_Reg31; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_Reg31; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_Reg31; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_Reg31; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_Reg31; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_Reg31; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_Reg34; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_Reg34; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_Reg34; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_Reg34; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_Reg34; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_Reg34; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_Reg34; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_Reg34; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_Reg34; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_Reg34; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_Reg34; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_Reg34; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_Reg34; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_Reg34; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_Reg34; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_Reg34; break;
    case Mips::W0: OpKind = MCK_MSA128WEvens; break;
    case Mips::W1: OpKind = MCK_Reg37; break;
    case Mips::W2: OpKind = MCK_MSA128WEvens; break;
    case Mips::W3: OpKind = MCK_Reg37; break;
    case Mips::W4: OpKind = MCK_MSA128WEvens; break;
    case Mips::W5: OpKind = MCK_Reg37; break;
    case Mips::W6: OpKind = MCK_MSA128WEvens; break;
    case Mips::W7: OpKind = MCK_Reg37; break;
    case Mips::W8: OpKind = MCK_MSA128WEvens; break;
    case Mips::W9: OpKind = MCK_Reg37; break;
    case Mips::W10: OpKind = MCK_MSA128WEvens; break;
    case Mips::W11: OpKind = MCK_Reg37; break;
    case Mips::W12: OpKind = MCK_MSA128WEvens; break;
    case Mips::W13: OpKind = MCK_Reg37; break;
    case Mips::W14: OpKind = MCK_MSA128WEvens; break;
    case Mips::W15: OpKind = MCK_Reg37; break;
    case Mips::W16: OpKind = MCK_MSA128WEvens; break;
    case Mips::W17: OpKind = MCK_Reg37; break;
    case Mips::W18: OpKind = MCK_MSA128WEvens; break;
    case Mips::W19: OpKind = MCK_Reg37; break;
    case Mips::W20: OpKind = MCK_MSA128WEvens; break;
    case Mips::W21: OpKind = MCK_Reg37; break;
    case Mips::W22: OpKind = MCK_MSA128WEvens; break;
    case Mips::W23: OpKind = MCK_Reg37; break;
    case Mips::W24: OpKind = MCK_MSA128WEvens; break;
    case Mips::W25: OpKind = MCK_Reg37; break;
    case Mips::W26: OpKind = MCK_MSA128WEvens; break;
    case Mips::W27: OpKind = MCK_Reg37; break;
    case Mips::W28: OpKind = MCK_MSA128WEvens; break;
    case Mips::W29: OpKind = MCK_Reg37; break;
    case Mips::W30: OpKind = MCK_MSA128WEvens; break;
    case Mips::W31: OpKind = MCK_Reg37; break;
    case Mips::HI0: OpKind = MCK_HI32; break;
    case Mips::HI1: OpKind = MCK_HI32DSP; break;
    case Mips::HI2: OpKind = MCK_HI32DSP; break;
    case Mips::HI3: OpKind = MCK_HI32DSP; break;
    case Mips::LO0: OpKind = MCK_LO32; break;
    case Mips::LO1: OpKind = MCK_LO32DSP; break;
    case Mips::LO2: OpKind = MCK_LO32DSP; break;
    case Mips::LO3: OpKind = MCK_LO32DSP; break;
    case Mips::HI0_64: OpKind = MCK_HI64; break;
    case Mips::LO0_64: OpKind = MCK_LO64; break;
    case Mips::FCR0: OpKind = MCK_CCR; break;
    case Mips::FCR1: OpKind = MCK_CCR; break;
    case Mips::FCR2: OpKind = MCK_CCR; break;
    case Mips::FCR3: OpKind = MCK_CCR; break;
    case Mips::FCR4: OpKind = MCK_CCR; break;
    case Mips::FCR5: OpKind = MCK_CCR; break;
    case Mips::FCR6: OpKind = MCK_CCR; break;
    case Mips::FCR7: OpKind = MCK_CCR; break;
    case Mips::FCR8: OpKind = MCK_CCR; break;
    case Mips::FCR9: OpKind = MCK_CCR; break;
    case Mips::FCR10: OpKind = MCK_CCR; break;
    case Mips::FCR11: OpKind = MCK_CCR; break;
    case Mips::FCR12: OpKind = MCK_CCR; break;
    case Mips::FCR13: OpKind = MCK_CCR; break;
    case Mips::FCR14: OpKind = MCK_CCR; break;
    case Mips::FCR15: OpKind = MCK_CCR; break;
    case Mips::FCR16: OpKind = MCK_CCR; break;
    case Mips::FCR17: OpKind = MCK_CCR; break;
    case Mips::FCR18: OpKind = MCK_CCR; break;
    case Mips::FCR19: OpKind = MCK_CCR; break;
    case Mips::FCR20: OpKind = MCK_CCR; break;
    case Mips::FCR21: OpKind = MCK_CCR; break;
    case Mips::FCR22: OpKind = MCK_CCR; break;
    case Mips::FCR23: OpKind = MCK_CCR; break;
    case Mips::FCR24: OpKind = MCK_CCR; break;
    case Mips::FCR25: OpKind = MCK_CCR; break;
    case Mips::FCR26: OpKind = MCK_CCR; break;
    case Mips::FCR27: OpKind = MCK_CCR; break;
    case Mips::FCR28: OpKind = MCK_CCR; break;
    case Mips::FCR29: OpKind = MCK_CCR; break;
    case Mips::FCR30: OpKind = MCK_CCR; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC; break;
    case Mips::FCC1: OpKind = MCK_FCC; break;
    case Mips::FCC2: OpKind = MCK_FCC; break;
    case Mips::FCC3: OpKind = MCK_FCC; break;
    case Mips::FCC4: OpKind = MCK_FCC; break;
    case Mips::FCC5: OpKind = MCK_FCC; break;
    case Mips::FCC6: OpKind = MCK_FCC; break;
    case Mips::FCC7: OpKind = MCK_FCC; break;
    case Mips::COP00: OpKind = MCK_COP0; break;
    case Mips::COP01: OpKind = MCK_COP0; break;
    case Mips::COP02: OpKind = MCK_COP0; break;
    case Mips::COP03: OpKind = MCK_COP0; break;
    case Mips::COP04: OpKind = MCK_COP0; break;
    case Mips::COP05: OpKind = MCK_COP0; break;
    case Mips::COP06: OpKind = MCK_COP0; break;
    case Mips::COP07: OpKind = MCK_COP0; break;
    case Mips::COP08: OpKind = MCK_COP0; break;
    case Mips::COP09: OpKind = MCK_COP0; break;
    case Mips::COP010: OpKind = MCK_COP0; break;
    case Mips::COP011: OpKind = MCK_COP0; break;
    case Mips::COP012: OpKind = MCK_COP0; break;
    case Mips::COP013: OpKind = MCK_COP0; break;
    case Mips::COP014: OpKind = MCK_COP0; break;
    case Mips::COP015: OpKind = MCK_COP0; break;
    case Mips::COP016: OpKind = MCK_COP0; break;
    case Mips::COP017: OpKind = MCK_COP0; break;
    case Mips::COP018: OpKind = MCK_COP0; break;
    case Mips::COP019: OpKind = MCK_COP0; break;
    case Mips::COP020: OpKind = MCK_COP0; break;
    case Mips::COP021: OpKind = MCK_COP0; break;
    case Mips::COP022: OpKind = MCK_COP0; break;
    case Mips::COP023: OpKind = MCK_COP0; break;
    case Mips::COP024: OpKind = MCK_COP0; break;
    case Mips::COP025: OpKind = MCK_COP0; break;
    case Mips::COP026: OpKind = MCK_COP0; break;
    case Mips::COP027: OpKind = MCK_COP0; break;
    case Mips::COP028: OpKind = MCK_COP0; break;
    case Mips::COP029: OpKind = MCK_COP0; break;
    case Mips::COP030: OpKind = MCK_COP0; break;
    case Mips::COP031: OpKind = MCK_COP0; break;
    case Mips::COP20: OpKind = MCK_COP2; break;
    case Mips::COP21: OpKind = MCK_COP2; break;
    case Mips::COP22: OpKind = MCK_COP2; break;
    case Mips::COP23: OpKind = MCK_COP2; break;
    case Mips::COP24: OpKind = MCK_COP2; break;
    case Mips::COP25: OpKind = MCK_COP2; break;
    case Mips::COP26: OpKind = MCK_COP2; break;
    case Mips::COP27: OpKind = MCK_COP2; break;
    case Mips::COP28: OpKind = MCK_COP2; break;
    case Mips::COP29: OpKind = MCK_COP2; break;
    case Mips::COP210: OpKind = MCK_COP2; break;
    case Mips::COP211: OpKind = MCK_COP2; break;
    case Mips::COP212: OpKind = MCK_COP2; break;
    case Mips::COP213: OpKind = MCK_COP2; break;
    case Mips::COP214: OpKind = MCK_COP2; break;
    case Mips::COP215: OpKind = MCK_COP2; break;
    case Mips::COP216: OpKind = MCK_COP2; break;
    case Mips::COP217: OpKind = MCK_COP2; break;
    case Mips::COP218: OpKind = MCK_COP2; break;
    case Mips::COP219: OpKind = MCK_COP2; break;
    case Mips::COP220: OpKind = MCK_COP2; break;
    case Mips::COP221: OpKind = MCK_COP2; break;
    case Mips::COP222: OpKind = MCK_COP2; break;
    case Mips::COP223: OpKind = MCK_COP2; break;
    case Mips::COP224: OpKind = MCK_COP2; break;
    case Mips::COP225: OpKind = MCK_COP2; break;
    case Mips::COP226: OpKind = MCK_COP2; break;
    case Mips::COP227: OpKind = MCK_COP2; break;
    case Mips::COP228: OpKind = MCK_COP2; break;
    case Mips::COP229: OpKind = MCK_COP2; break;
    case Mips::COP230: OpKind = MCK_COP2; break;
    case Mips::COP231: OpKind = MCK_COP2; break;
    case Mips::COP30: OpKind = MCK_COP3; break;
    case Mips::COP31: OpKind = MCK_COP3; break;
    case Mips::COP32: OpKind = MCK_COP3; break;
    case Mips::COP33: OpKind = MCK_COP3; break;
    case Mips::COP34: OpKind = MCK_COP3; break;
    case Mips::COP35: OpKind = MCK_COP3; break;
    case Mips::COP36: OpKind = MCK_COP3; break;
    case Mips::COP37: OpKind = MCK_COP3; break;
    case Mips::COP38: OpKind = MCK_COP3; break;
    case Mips::COP39: OpKind = MCK_COP3; break;
    case Mips::COP310: OpKind = MCK_COP3; break;
    case Mips::COP311: OpKind = MCK_COP3; break;
    case Mips::COP312: OpKind = MCK_COP3; break;
    case Mips::COP313: OpKind = MCK_COP3; break;
    case Mips::COP314: OpKind = MCK_COP3; break;
    case Mips::COP315: OpKind = MCK_COP3; break;
    case Mips::COP316: OpKind = MCK_COP3; break;
    case Mips::COP317: OpKind = MCK_COP3; break;
    case Mips::COP318: OpKind = MCK_COP3; break;
    case Mips::COP319: OpKind = MCK_COP3; break;
    case Mips::COP320: OpKind = MCK_COP3; break;
    case Mips::COP321: OpKind = MCK_COP3; break;
    case Mips::COP322: OpKind = MCK_COP3; break;
    case Mips::COP323: OpKind = MCK_COP3; break;
    case Mips::COP324: OpKind = MCK_COP3; break;
    case Mips::COP325: OpKind = MCK_COP3; break;
    case Mips::COP326: OpKind = MCK_COP3; break;
    case Mips::COP327: OpKind = MCK_COP3; break;
    case Mips::COP328: OpKind = MCK_COP3; break;
    case Mips::COP329: OpKind = MCK_COP3; break;
    case Mips::COP330: OpKind = MCK_COP3; break;
    case Mips::COP331: OpKind = MCK_COP3; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR0: OpKind = MCK_HWRegs; break;
    case Mips::HWR1: OpKind = MCK_HWRegs; break;
    case Mips::HWR2: OpKind = MCK_HWRegs; break;
    case Mips::HWR3: OpKind = MCK_HWRegs; break;
    case Mips::HWR4: OpKind = MCK_HWRegs; break;
    case Mips::HWR5: OpKind = MCK_HWRegs; break;
    case Mips::HWR6: OpKind = MCK_HWRegs; break;
    case Mips::HWR7: OpKind = MCK_HWRegs; break;
    case Mips::HWR8: OpKind = MCK_HWRegs; break;
    case Mips::HWR9: OpKind = MCK_HWRegs; break;
    case Mips::HWR10: OpKind = MCK_HWRegs; break;
    case Mips::HWR11: OpKind = MCK_HWRegs; break;
    case Mips::HWR12: OpKind = MCK_HWRegs; break;
    case Mips::HWR13: OpKind = MCK_HWRegs; break;
    case Mips::HWR14: OpKind = MCK_HWRegs; break;
    case Mips::HWR15: OpKind = MCK_HWRegs; break;
    case Mips::HWR16: OpKind = MCK_HWRegs; break;
    case Mips::HWR17: OpKind = MCK_HWRegs; break;
    case Mips::HWR18: OpKind = MCK_HWRegs; break;
    case Mips::HWR19: OpKind = MCK_HWRegs; break;
    case Mips::HWR20: OpKind = MCK_HWRegs; break;
    case Mips::HWR21: OpKind = MCK_HWRegs; break;
    case Mips::HWR22: OpKind = MCK_HWRegs; break;
    case Mips::HWR23: OpKind = MCK_HWRegs; break;
    case Mips::HWR24: OpKind = MCK_HWRegs; break;
    case Mips::HWR25: OpKind = MCK_HWRegs; break;
    case Mips::HWR26: OpKind = MCK_HWRegs; break;
    case Mips::HWR27: OpKind = MCK_HWRegs; break;
    case Mips::HWR28: OpKind = MCK_HWRegs; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::HWR30: OpKind = MCK_HWRegs; break;
    case Mips::HWR31: OpKind = MCK_HWRegs; break;
    case Mips::AC0: OpKind = MCK_ACC64; break;
    case Mips::AC1: OpKind = MCK_ACC64DSP; break;
    case Mips::AC2: OpKind = MCK_ACC64DSP; break;
    case Mips::AC3: OpKind = MCK_ACC64DSP; break;
    case Mips::AC0_64: OpKind = MCK_ACC128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    case Mips::MSAIR: OpKind = MCK_MSACtrl; break;
    case Mips::MSACSR: OpKind = MCK_MSACtrl; break;
    case Mips::MSAAccess: OpKind = MCK_MSACtrl; break;
    case Mips::MSASave: OpKind = MCK_MSACtrl; break;
    case Mips::MSAModify: OpKind = MCK_MSACtrl; break;
    case Mips::MSARequest: OpKind = MCK_MSACtrl; break;
    case Mips::MSAMap: OpKind = MCK_MSACtrl; break;
    case Mips::MSAUnmap: OpKind = MCK_MSACtrl; break;
    case Mips::MPL0: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL1: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL2: OpKind = MCK_OCTEON_MPL; break;
    case Mips::P0: OpKind = MCK_OCTEON_P; break;
    case Mips::P1: OpKind = MCK_OCTEON_P; break;
    case Mips::P2: OpKind = MCK_OCTEON_P; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t MipsAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[Mips::FeatureMips2]))
    Features |= Feature_HasMips2;
  if ((FB[Mips::FeatureMips3_32]))
    Features |= Feature_HasMips3_32;
  if ((FB[Mips::FeatureMips3_32r2]))
    Features |= Feature_HasMips3_32r2;
  if ((FB[Mips::FeatureMips3]))
    Features |= Feature_HasMips3;
  if ((!FB[Mips::FeatureMips3]))
    Features |= Feature_NotMips3;
  if ((FB[Mips::FeatureMips4_32]))
    Features |= Feature_HasMips4_32;
  if ((!FB[Mips::FeatureMips4_32]))
    Features |= Feature_NotMips4_32;
  if ((FB[Mips::FeatureMips4_32r2]))
    Features |= Feature_HasMips4_32r2;
  if ((FB[Mips::FeatureMips5_32r2]))
    Features |= Feature_HasMips5_32r2;
  if ((FB[Mips::FeatureMips32]))
    Features |= Feature_HasMips32;
  if ((FB[Mips::FeatureMips32r2]))
    Features |= Feature_HasMips32r2;
  if ((FB[Mips::FeatureMips32r5]))
    Features |= Feature_HasMips32r5;
  if ((FB[Mips::FeatureMips32r6]))
    Features |= Feature_HasMips32r6;
  if ((!FB[Mips::FeatureMips32r6]))
    Features |= Feature_NotMips32r6;
  if ((FB[Mips::FeatureGP64Bit]))
    Features |= Feature_IsGP64bit;
  if ((!FB[Mips::FeatureGP64Bit]))
    Features |= Feature_IsGP32bit;
  if ((FB[Mips::FeaturePTR64Bit]))
    Features |= Feature_IsPTR64bit;
  if ((!FB[Mips::FeaturePTR64Bit]))
    Features |= Feature_IsPTR32bit;
  if ((FB[Mips::FeatureMips64]))
    Features |= Feature_HasMips64;
  if ((!FB[Mips::FeatureMips64]))
    Features |= Feature_NotMips64;
  if ((FB[Mips::FeatureMips64r2]))
    Features |= Feature_HasMips64r2;
  if ((FB[Mips::FeatureMips64r6]))
    Features |= Feature_HasMips64r6;
  if ((!FB[Mips::FeatureMips64r6]))
    Features |= Feature_NotMips64r6;
  if ((FB[Mips::FeatureMicroMips]) && (FB[Mips::FeatureMips32r6]))
    Features |= Feature_HasMicroMips32r6;
  if ((FB[Mips::FeatureMicroMips]) && (FB[Mips::FeatureMips64r6]))
    Features |= Feature_HasMicroMips64r6;
  if ((FB[Mips::FeatureMips16]))
    Features |= Feature_InMips16Mode;
  if ((FB[Mips::FeatureCnMips]))
    Features |= Feature_HasCnMips;
  if ((!FB[Mips::FeatureCnMips]))
    Features |= Feature_NotCnMips;
  if ((!FB[Mips::FeatureMips16]))
    Features |= Feature_HasStdEnc;
  if ((FB[Mips::FeatureMicroMips]))
    Features |= Feature_InMicroMips;
  if ((!FB[Mips::FeatureMicroMips]))
    Features |= Feature_NotInMicroMips;
  if ((FB[Mips::FeatureEVA]) && (FB[Mips::FeatureMips32r2]))
    Features |= Feature_HasEVA;
  if ((FB[Mips::FeatureMSA]))
    Features |= Feature_HasMSA;
  if ((FB[Mips::FeatureFP64Bit]))
    Features |= Feature_IsFP64bit;
  if ((!FB[Mips::FeatureFP64Bit]))
    Features |= Feature_NotFP64bit;
  if ((FB[Mips::FeatureSingleFloat]))
    Features |= Feature_IsSingleFloat;
  if ((!FB[Mips::FeatureSingleFloat]))
    Features |= Feature_IsNotSingleFloat;
  if ((!FB[Mips::FeatureSoftFloat]))
    Features |= Feature_IsNotSoftFloat;
  if ((FB[Mips::FeatureDSP]))
    Features |= Feature_HasDSP;
  if ((FB[Mips::FeatureDSPR2]))
    Features |= Feature_HasDSPR2;
  if ((FB[Mips::FeatureDSPR3]))
    Features |= Feature_HasDSPR3;
  return Features;
}

static const char *const MnemonicTable =
    "\003abs\005abs.d\005abs.s\tabsq_s.ph\tabsq_s.qb\010absq_s.w\003add\005a"
    "dd.d\005add.s\007add_a.b\007add_a.d\007add_a.h\007add_a.w\004addi\005ad"
    "diu\007addiupc\taddiur1sp\007addiur2\007addius5\007addiusp\007addq.ph\t"
    "addq_s.ph\010addq_s.w\010addqh.ph\007addqh.w\naddqh_r.ph\taddqh_r.w\010"
    "adds_a.b\010adds_a.d\010adds_a.h\010adds_a.w\010adds_s.b\010adds_s.d\010"
    "adds_s.h\010adds_s.w\010adds_u.b\010adds_u.d\010adds_u.h\010adds_u.w\005"
    "addsc\004addu\007addu.ph\007addu.qb\006addu16\taddu_s.ph\taddu_s.qb\010"
    "adduh.qb\nadduh_r.qb\006addv.b\006addv.d\006addv.h\006addv.w\007addvi.b"
    "\007addvi.d\007addvi.h\007addvi.w\005addwc\005align\006aluipc\003and\005"
    "and.v\005and16\004andi\006andi.b\006andi16\006append\010asub_s.b\010asu"
    "b_s.d\010asub_s.h\010asub_s.w\010asub_u.b\010asub_u.d\010asub_u.h\010as"
    "ub_u.w\003aui\005auipc\007ave_s.b\007ave_s.d\007ave_s.h\007ave_s.w\007a"
    "ve_u.b\007ave_u.d\007ave_u.h\007ave_u.w\010aver_s.b\010aver_s.d\010aver"
    "_s.h\010aver_s.w\010aver_u.b\010aver_u.d\010aver_u.h\010aver_u.w\001b\003"
    "b16\005baddu\003bal\004balc\006balign\005bbit0\007bbit032\005bbit1\007b"
    "bit132\002bc\004bc16\006bc1eqz\007bc1eqzc\004bc1f\005bc1fl\006bc1nez\007"
    "bc1nezc\004bc1t\005bc1tl\006bc2eqz\007bc2eqzc\006bc2nez\007bc2nezc\006b"
    "clr.b\006bclr.d\006bclr.h\006bclr.w\007bclri.b\007bclri.d\007bclri.h\007"
    "bclri.w\003beq\004beqc\004beql\004beqz\006beqz16\007beqzalc\005beqzc\007"
    "beqzc16\005beqzl\003bge\004bgec\004bgel\004bgeu\005bgeuc\005bgeul\004bg"
    "ez\006bgezal\007bgezalc\007bgezall\007bgezals\005bgezc\005bgezl\003bgt\004"
    "bgtl\004bgtu\005bgtul\004bgtz\007bgtzalc\005bgtzc\005bgtzl\007binsl.b\007"
    "binsl.d\007binsl.h\007binsl.w\010binsli.b\010binsli.d\010binsli.h\010bi"
    "nsli.w\007binsr.b\007binsr.d\007binsr.h\007binsr.w\010binsri.b\010binsr"
    "i.d\010binsri.h\010binsri.w\006bitrev\007bitswap\003ble\004blel\004bleu"
    "\005bleul\004blez\007blezalc\005blezc\005blezl\003blt\004bltc\004bltl\004"
    "bltu\005bltuc\005bltul\004bltz\006bltzal\007bltzalc\007bltzall\007bltza"
    "ls\005bltzc\005bltzl\006bmnz.v\007bmnzi.b\005bmz.v\006bmzi.b\003bne\004"
    "bnec\006bneg.b\006bneg.d\006bneg.h\006bneg.w\007bnegi.b\007bnegi.d\007b"
    "negi.h\007bnegi.w\004bnel\004bnez\006bnez16\007bnezalc\005bnezc\007bnez"
    "c16\005bnezl\004bnvc\005bnz.b\005bnz.d\005bnz.h\005bnz.v\005bnz.w\004bo"
    "vc\010bposge32\tbposge32c\005break\007break16\006bsel.v\007bseli.b\006b"
    "set.b\006bset.d\006bset.h\006bset.w\007bseti.b\007bseti.d\007bseti.h\007"
    "bseti.w\005bteqz\005btnez\004bz.b\004bz.d\004bz.h\004bz.v\004bz.w\006c."
    "eq.d\006c.eq.s\005c.f.d\005c.f.s\006c.le.d\006c.le.s\006c.lt.d\006c.lt."
    "s\007c.nge.d\007c.nge.s\007c.ngl.d\007c.ngl.s\010c.ngle.d\010c.ngle.s\007"
    "c.ngt.d\007c.ngt.s\007c.ole.d\007c.ole.s\007c.olt.d\007c.olt.s\007c.seq"
    ".d\007c.seq.s\006c.sf.d\006c.sf.s\007c.ueq.d\007c.ueq.s\007c.ule.d\007c"
    ".ule.s\007c.ult.d\007c.ult.s\006c.un.d\006c.un.s\005cache\006cachee\010"
    "ceil.l.d\010ceil.l.s\010ceil.w.d\010ceil.w.s\005ceq.b\005ceq.d\005ceq.h"
    "\005ceq.w\006ceqi.b\006ceqi.d\006ceqi.h\006ceqi.w\004cfc1\004cfc2\006cf"
    "cmsa\004cins\006cins32\007class.d\007class.s\007cle_s.b\007cle_s.d\007c"
    "le_s.h\007cle_s.w\007cle_u.b\007cle_u.d\007cle_u.h\007cle_u.w\010clei_s"
    ".b\010clei_s.d\010clei_s.h\010clei_s.w\010clei_u.b\010clei_u.d\010clei_"
    "u.h\010clei_u.w\003clo\007clt_s.b\007clt_s.d\007clt_s.h\007clt_s.w\007c"
    "lt_u.b\007clt_u.d\007clt_u.h\007clt_u.w\010clti_s.b\010clti_s.d\010clti"
    "_s.h\010clti_s.w\010clti_u.b\010clti_u.d\010clti_u.h\010clti_u.w\003clz"
    "\003cmp\010cmp.af.d\010cmp.af.s\010cmp.eq.d\tcmp.eq.ph\010cmp.eq.s\010c"
    "mp.le.d\tcmp.le.ph\010cmp.le.s\010cmp.lt.d\tcmp.lt.ph\010cmp.lt.s\tcmp."
    "saf.d\tcmp.saf.s\tcmp.seq.d\tcmp.seq.s\tcmp.sle.d\tcmp.sle.s\tcmp.slt.d"
    "\tcmp.slt.s\ncmp.sueq.d\ncmp.sueq.s\ncmp.sule.d\ncmp.sule.s\ncmp.sult.d"
    "\ncmp.sult.s\tcmp.sun.d\tcmp.sun.s\tcmp.ueq.d\tcmp.ueq.s\tcmp.ule.d\tcm"
    "p.ule.s\tcmp.ult.d\tcmp.ult.s\010cmp.un.d\010cmp.un.s\014cmpgdu.eq.qb\014"
    "cmpgdu.le.qb\014cmpgdu.lt.qb\013cmpgu.eq.qb\013cmpgu.le.qb\013cmpgu.lt."
    "qb\004cmpi\ncmpu.eq.qb\ncmpu.le.qb\ncmpu.lt.qb\010copy_s.b\010copy_s.d\010"
    "copy_s.h\010copy_s.w\010copy_u.b\010copy_u.h\010copy_u.w\004ctc1\004ctc"
    "2\006ctcmsa\007cvt.d.l\007cvt.d.s\007cvt.d.w\007cvt.l.d\007cvt.l.s\007c"
    "vt.s.d\007cvt.s.l\007cvt.s.w\007cvt.w.d\007cvt.w.s\004dadd\005daddi\006"
    "daddiu\005daddu\004dahi\006dalign\004dati\004daui\010dbitswap\004dclo\004"
    "dclz\004ddiv\005ddivu\005deret\004dext\005dextm\005dextu\002di\004dins\005"
    "dinsm\005dinsu\003div\005div.d\005div.s\007div_s.b\007div_s.d\007div_s."
    "h\007div_s.w\007div_u.b\007div_u.d\007div_u.h\007div_u.w\004divu\003dla"
    "\003dli\004dlsa\005dmfc0\005dmfc1\005dmfc2\004dmod\005dmodu\005dmtc0\005"
    "dmtc1\005dmtc2\004dmuh\005dmuhu\004dmul\005dmult\006dmultu\005dmulu\004"
    "dneg\005dnegu\010dotp_s.d\010dotp_s.h\010dotp_s.w\010dotp_u.d\010dotp_u"
    ".h\010dotp_u.w\010dpa.w.ph\tdpadd_s.d\tdpadd_s.h\tdpadd_s.w\tdpadd_u.d\t"
    "dpadd_u.h\tdpadd_u.w\013dpaq_s.w.ph\013dpaq_sa.l.w\014dpaqx_s.w.ph\015d"
    "paqx_sa.w.ph\ndpau.h.qbl\ndpau.h.qbr\tdpax.w.ph\004dpop\010dps.w.ph\013"
    "dpsq_s.w.ph\013dpsq_sa.l.w\014dpsqx_s.w.ph\015dpsqx_sa.w.ph\ndpsu.h.qbl"
    "\ndpsu.h.qbr\tdpsub_s.d\tdpsub_s.h\tdpsub_s.w\tdpsub_u.d\tdpsub_u.h\tdp"
    "sub_u.w\tdpsx.w.ph\004drol\004dror\005drotr\007drotr32\006drotrv\004dsb"
    "h\004dshd\004dsll\006dsll32\005dsllv\004dsra\006dsra32\005dsrav\004dsrl"
    "\006dsrl32\005dsrlv\004dsub\005dsubi\005dsubu\003dvp\003ehb\002ei\004er"
    "et\006eretnc\003evp\003ext\004extp\006extpdp\007extpdpv\005extpv\006ext"
    "r.w\010extr_r.w\textr_rs.w\010extr_s.h\007extrv.w\textrv_r.w\nextrv_rs."
    "w\textrv_s.h\004exts\006exts32\006fadd.d\006fadd.w\006fcaf.d\006fcaf.w\006"
    "fceq.d\006fceq.w\010fclass.d\010fclass.w\006fcle.d\006fcle.w\006fclt.d\006"
    "fclt.w\006fcne.d\006fcne.w\006fcor.d\006fcor.w\007fcueq.d\007fcueq.w\007"
    "fcule.d\007fcule.w\007fcult.d\007fcult.w\006fcun.d\006fcun.w\007fcune.d"
    "\007fcune.w\006fdiv.d\006fdiv.w\007fexdo.h\007fexdo.w\007fexp2.d\007fex"
    "p2.w\010fexupl.d\010fexupl.w\010fexupr.d\010fexupr.w\tffint_s.d\tffint_"
    "s.w\tffint_u.d\tffint_u.w\006ffql.d\006ffql.w\006ffqr.d\006ffqr.w\006fi"
    "ll.b\006fill.d\006fill.h\006fill.w\007flog2.d\007flog2.w\tfloor.l.d\tfl"
    "oor.l.s\tfloor.w.d\tfloor.w.s\007fmadd.d\007fmadd.w\006fmax.d\006fmax.w"
    "\010fmax_a.d\010fmax_a.w\006fmin.d\006fmin.w\010fmin_a.d\010fmin_a.w\007"
    "fmsub.d\007fmsub.w\006fmul.d\006fmul.w\006frcp.d\006frcp.w\007frint.d\007"
    "frint.w\010frsqrt.d\010frsqrt.w\006fsaf.d\006fsaf.w\006fseq.d\006fseq.w"
    "\006fsle.d\006fsle.w\006fslt.d\006fslt.w\006fsne.d\006fsne.w\006fsor.d\006"
    "fsor.w\007fsqrt.d\007fsqrt.w\006fsub.d\006fsub.w\007fsueq.d\007fsueq.w\007"
    "fsule.d\007fsule.w\007fsult.d\007fsult.w\006fsun.d\006fsun.w\007fsune.d"
    "\007fsune.w\tftint_s.d\tftint_s.w\tftint_u.d\tftint_u.w\005ftq.h\005ftq"
    ".w\nftrunc_s.d\nftrunc_s.w\nftrunc_u.d\nftrunc_u.w\010hadd_s.d\010hadd_"
    "s.h\010hadd_s.w\010hadd_u.d\010hadd_u.h\010hadd_u.w\010hsub_s.d\010hsub"
    "_s.h\010hsub_s.w\010hsub_u.d\010hsub_u.h\010hsub_u.w\007ilvev.b\007ilve"
    "v.d\007ilvev.h\007ilvev.w\006ilvl.b\006ilvl.d\006ilvl.h\006ilvl.w\007il"
    "vod.b\007ilvod.d\007ilvod.h\007ilvod.w\006ilvr.b\006ilvr.d\006ilvr.h\006"
    "ilvr.w\003ins\010insert.b\010insert.d\010insert.h\010insert.w\004insv\007"
    "insve.b\007insve.d\007insve.h\007insve.w\001j\003jal\004jalr\007jalr.hb"
    "\005jalrc\010jalrc.hb\005jalrs\007jalrs16\004jals\004jalx\005jialc\003j"
    "ic\002jr\005jr.hb\004jr16\tjraddiusp\003jrc\005jrc16\njrcaddiusp\003l.d"
    "\003l.s\002la\002lb\003lbe\003lbu\005lbu16\004lbue\004lbux\002ld\004ld."
    "b\004ld.d\004ld.h\004ld.w\004ldc1\004ldc2\004ldc3\005ldi.b\005ldi.d\005"
    "ldi.h\005ldi.w\003ldl\004ldpc\003ldr\005ldxc1\002lh\003lhe\003lhu\005lh"
    "u16\004lhue\003lhx\002li\004li16\002ll\003lld\003lle\003lsa\003lui\005l"
    "uxc1\002lw\004lw16\004lwc1\004lwc2\004lwc3\003lwe\003lwl\004lwle\003lwm"
    "\005lwm16\005lwm32\003lwp\004lwpc\003lwr\004lwre\003lwu\005lwupc\003lwx"
    "\005lwxc1\004lwxs\004madd\006madd.d\006madd.s\010madd_q.h\010madd_q.w\007"
    "maddf.d\007maddf.s\tmaddr_q.h\tmaddr_q.w\005maddu\007maddv.b\007maddv.d"
    "\007maddv.h\007maddv.w\013maq_s.w.phl\013maq_s.w.phr\014maq_sa.w.phl\014"
    "maq_sa.w.phr\005max.d\005max.s\007max_a.b\007max_a.d\007max_a.h\007max_"
    "a.w\007max_s.b\007max_s.d\007max_s.h\007max_s.w\007max_u.b\007max_u.d\007"
    "max_u.h\007max_u.w\006maxa.d\006maxa.s\010maxi_s.b\010maxi_s.d\010maxi_"
    "s.h\010maxi_s.w\010maxi_u.b\010maxi_u.d\010maxi_u.h\010maxi_u.w\004mfc0"
    "\004mfc1\004mfc2\005mfhc0\005mfhc1\005mfhc2\004mfhi\004mflo\005min.d\005"
    "min.s\007min_a.b\007min_a.d\007min_a.h\007min_a.w\007min_s.b\007min_s.d"
    "\007min_s.h\007min_s.w\007min_u.b\007min_u.d\007min_u.h\007min_u.w\006m"
    "ina.d\006mina.s\010mini_s.b\010mini_s.d\010mini_s.h\010mini_s.w\010mini"
    "_u.b\010mini_u.d\010mini_u.h\010mini_u.w\003mod\007mod_s.b\007mod_s.d\007"
    "mod_s.h\007mod_s.w\007mod_u.b\007mod_u.d\007mod_u.h\007mod_u.w\006modsu"
    "b\004modu\005mov.d\005mov.s\004move\006move.v\006move16\005movep\004mov"
    "f\006movf.d\006movf.s\004movn\006movn.d\006movn.s\004movt\006movt.d\006"
    "movt.s\004movz\006movz.d\006movz.s\004msub\006msub.d\006msub.s\010msub_"
    "q.h\010msub_q.w\007msubf.d\007msubf.s\tmsubr_q.h\tmsubr_q.w\005msubu\007"
    "msubv.b\007msubv.d\007msubv.h\007msubv.w\004mtc0\004mtc1\004mtc2\005mth"
    "c0\005mthc1\005mthc2\004mthi\006mthlip\004mtlo\004mtm0\004mtm1\004mtm2\004"
    "mtp0\004mtp1\004mtp2\003muh\004muhu\003mul\005mul.d\006mul.ph\005mul.s\007"
    "mul_q.h\007mul_q.w\010mul_s.ph\015muleq_s.w.phl\015muleq_s.w.phr\016mul"
    "eu_s.ph.qbl\016muleu_s.ph.qbr\nmulq_rs.ph\tmulq_rs.w\tmulq_s.ph\010mulq"
    "_s.w\010mulr_q.h\010mulr_q.w\nmulsa.w.ph\015mulsaq_s.w.ph\004mult\005mu"
    "ltu\004mulu\006mulv.b\006mulv.d\006mulv.h\006mulv.w\003neg\005neg.d\005"
    "neg.s\004negu\006nloc.b\006nloc.d\006nloc.h\006nloc.w\006nlzc.b\006nlzc"
    ".d\006nlzc.h\006nlzc.w\007nmadd.d\007nmadd.s\007nmsub.d\007nmsub.s\003n"
    "op\003nor\005nor.v\006nori.b\003not\005not16\002or\004or.v\004or16\003o"
    "ri\005ori.b\tpackrl.ph\005pause\007pckev.b\007pckev.d\007pckev.h\007pck"
    "ev.w\007pckod.b\007pckod.d\007pckod.h\007pckod.w\006pcnt.b\006pcnt.d\006"
    "pcnt.h\006pcnt.w\007pick.ph\007pick.qb\003pop\014preceq.w.phl\014preceq"
    ".w.phr\016precequ.ph.qbl\017precequ.ph.qbla\016precequ.ph.qbr\017preceq"
    "u.ph.qbra\015preceu.ph.qbl\016preceu.ph.qbla\015preceu.ph.qbr\016preceu"
    ".ph.qbra\013precr.qb.ph\016precr_sra.ph.w\020precr_sra_r.ph.w\013precrq"
    ".ph.w\014precrq.qb.ph\016precrq_rs.ph.w\017precrqu_s.qb.ph\004pref\005p"
    "refe\005prefx\007prepend\nraddu.w.qb\005rddsp\005rdhwr\006rdpgpr\007rec"
    "ip.d\007recip.s\007repl.ph\007repl.qb\010replv.ph\010replv.qb\006rint.d"
    "\006rint.s\003rol\003ror\004rotr\005rotrv\tround.l.d\tround.l.s\tround."
    "w.d\tround.w.s\007rsqrt.d\007rsqrt.s\003s.d\003s.s\007sat_s.b\007sat_s."
    "d\007sat_s.h\007sat_s.w\007sat_u.b\007sat_u.d\007sat_u.h\007sat_u.w\002"
    "sb\004sb16\003sbe\002sc\003scd\003sce\002sd\005sdbbp\007sdbbp16\004sdc1"
    "\004sdc2\004sdc3\003sdl\003sdr\005sdxc1\003seb\003seh\005sel.d\005sel.s"
    "\006seleqz\010seleqz.d\010seleqz.s\006selnez\010selnez.d\010selnez.s\003"
    "seq\004seqi\003sgt\004sgtu\002sh\004sh16\003she\005shf.b\005shf.h\005sh"
    "f.w\005shilo\006shilov\007shll.ph\007shll.qb\tshll_s.ph\010shll_s.w\010"
    "shllv.ph\010shllv.qb\nshllv_s.ph\tshllv_s.w\007shra.ph\007shra.qb\tshra"
    "_r.ph\tshra_r.qb\010shra_r.w\010shrav.ph\010shrav.qb\nshrav_r.ph\nshrav"
    "_r.qb\tshrav_r.w\007shrl.ph\007shrl.qb\010shrlv.ph\010shrlv.qb\005sld.b"
    "\005sld.d\005sld.h\005sld.w\006sldi.b\006sldi.d\006sldi.h\006sldi.w\003"
    "sll\005sll.b\005sll.d\005sll.h\005sll.w\005sll16\006slli.b\006slli.d\006"
    "slli.h\006slli.w\004sllv\003slt\004slti\005sltiu\004sltu\003sne\004snei"
    "\007splat.b\007splat.d\007splat.h\007splat.w\010splati.b\010splati.d\010"
    "splati.h\010splati.w\006sqrt.d\006sqrt.s\003sra\005sra.b\005sra.d\005sr"
    "a.h\005sra.w\006srai.b\006srai.d\006srai.h\006srai.w\006srar.b\006srar."
    "d\006srar.h\006srar.w\007srari.b\007srari.d\007srari.h\007srari.w\004sr"
    "av\003srl\005srl.b\005srl.d\005srl.h\005srl.w\005srl16\006srli.b\006srl"
    "i.d\006srli.h\006srli.w\006srlr.b\006srlr.d\006srlr.h\006srlr.w\007srlr"
    "i.b\007srlri.d\007srlri.h\007srlri.w\004srlv\005ssnop\004st.b\004st.d\004"
    "st.h\004st.w\003sub\005sub.d\005sub.s\007subq.ph\tsubq_s.ph\010subq_s.w"
    "\010subqh.ph\007subqh.w\nsubqh_r.ph\tsubqh_r.w\010subs_s.b\010subs_s.d\010"
    "subs_s.h\010subs_s.w\010subs_u.b\010subs_u.d\010subs_u.h\010subs_u.w\ns"
    "ubsus_u.b\nsubsus_u.d\nsubsus_u.h\nsubsus_u.w\nsubsuu_s.b\nsubsuu_s.d\n"
    "subsuu_s.h\nsubsuu_s.w\004subu\007subu.ph\007subu.qb\006subu16\tsubu_s."
    "ph\tsubu_s.qb\010subuh.qb\nsubuh_r.qb\006subv.b\006subv.d\006subv.h\006"
    "subv.w\007subvi.b\007subvi.d\007subvi.h\007subvi.w\005suxc1\002sw\004sw"
    "16\004swc1\004swc2\004swc3\003swe\003swl\004swle\003swm\005swm16\005swm"
    "32\003swp\003swr\004swre\005swxc1\004sync\005synci\nsynciobdma\005syncs"
    "\005syncw\006syncws\007syscall\003teq\004teqi\003tge\004tgei\005tgeiu\004"
    "tgeu\006tlbinv\007tlbinvf\004tlbp\004tlbr\005tlbwi\005tlbwr\003tlt\004t"
    "lti\005tltiu\004tltu\003tne\004tnei\ttrunc.l.d\ttrunc.l.s\ttrunc.w.d\tt"
    "runc.w.s\003ulh\004ulhu\003ulw\003ush\003usw\006v3mulu\004vmm0\005vmulu"
    "\006vshf.b\006vshf.d\006vshf.h\006vshf.w\004wait\005wrdsp\006wrpgpr\004"
    "wsbh\003xor\005xor.v\005xor16\004xori\006xori.b";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint64_t RequiredFeatures;
    uint8_t Classes[8];
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
  { 0 /* abs */, Mips::ABSMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 4 /* abs.d */, Mips::ABS_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 4 /* abs.d */, Mips::FABS_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 4 /* abs.d */, Mips::FABS_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 10 /* abs.s */, Mips::ABS_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 10 /* abs.s */, Mips::FABS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 16 /* absq_s.ph */, Mips::ABSQ_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 16 /* absq_s.ph */, Mips::ABSQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 26 /* absq_s.qb */, Mips::ABSQ_S_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 26 /* absq_s.qb */, Mips::ABSQ_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 36 /* absq_s.w */, Mips::ABSQ_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 36 /* absq_s.w */, Mips::ABSQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 45 /* add */, Mips::ADD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 45 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 45 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 45 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 45 /* add */, Mips::ADD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 45 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 45 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 45 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 49 /* add.d */, Mips::FADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 49 /* add.d */, Mips::FADD_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 49 /* add.d */, Mips::FADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 55 /* add.s */, Mips::FADD_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 55 /* add.s */, Mips::FADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 61 /* add_a.b */, Mips::ADD_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 69 /* add_a.d */, Mips::ADD_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 77 /* add_a.h */, Mips::ADD_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 85 /* add_a.w */, Mips::ADD_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 93 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 93 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm16_Relaxed1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm16_Relaxed }, },
  { 93 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 93 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm16_Relaxed1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16_Relaxed }, },
  { 98 /* addiu */, Mips::AddiuSpImmX16, Convert__SImm161_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::ADDIU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm16_Relaxed1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_SImm16_Relaxed }, },
  { 98 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__SImm161_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__SImm161_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::ADDIU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 98 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm16_Relaxed1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16_Relaxed }, },
  { 98 /* addiu */, Mips::AddiuSpImm16, Convert__SImm161_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 98 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 104 /* addiupc */, Mips::ADDIUPC, Convert__GPR32AsmReg1_0__Simm19_Lsl21_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Simm19_Lsl2 }, },
  { 104 /* addiupc */, Mips::ADDIUPC_MMR6, Convert__GPR32AsmReg1_0__Simm19_Lsl21_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Simm19_Lsl2 }, },
  { 104 /* addiupc */, Mips::ADDIUPC_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 112 /* addiur1sp */, Mips::ADDIUR1SP_MM, Convert__GPRMM16AsmReg1_0__UImm6Lsl21_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_UImm6Lsl2 }, },
  { 122 /* addiur2 */, Mips::ADDIUR2_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 130 /* addius5 */, Mips::ADDIUS5_MM, Convert__GPR32AsmReg1_0__Tie0__ConstantSImm4_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantSImm4_0 }, },
  { 138 /* addiusp */, Mips::ADDIUSP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 146 /* addq.ph */, Mips::ADDQ_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 146 /* addq.ph */, Mips::ADDQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 154 /* addq_s.ph */, Mips::ADDQ_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 154 /* addq_s.ph */, Mips::ADDQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 164 /* addq_s.w */, Mips::ADDQ_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 164 /* addq_s.w */, Mips::ADDQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 173 /* addqh.ph */, Mips::ADDQH_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 173 /* addqh.ph */, Mips::ADDQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 182 /* addqh.w */, Mips::ADDQH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 182 /* addqh.w */, Mips::ADDQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 190 /* addqh_r.ph */, Mips::ADDQH_R_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 190 /* addqh_r.ph */, Mips::ADDQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 201 /* addqh_r.w */, Mips::ADDQH_R_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 201 /* addqh_r.w */, Mips::ADDQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 211 /* adds_a.b */, Mips::ADDS_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 220 /* adds_a.d */, Mips::ADDS_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 229 /* adds_a.h */, Mips::ADDS_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 238 /* adds_a.w */, Mips::ADDS_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 247 /* adds_s.b */, Mips::ADDS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 256 /* adds_s.d */, Mips::ADDS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 265 /* adds_s.h */, Mips::ADDS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 274 /* adds_s.w */, Mips::ADDS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 283 /* adds_u.b */, Mips::ADDS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 292 /* adds_u.d */, Mips::ADDS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 301 /* adds_u.h */, Mips::ADDS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 310 /* adds_u.w */, Mips::ADDS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 319 /* addsc */, Mips::ADDSC_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 319 /* addsc */, Mips::ADDSC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 325 /* addu */, Mips::ADDU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 325 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 325 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 325 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1, 0, { MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 325 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 325 /* addu */, Mips::ADDU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 325 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 325 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 325 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 330 /* addu.ph */, Mips::ADDU_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 330 /* addu.ph */, Mips::ADDU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 338 /* addu.qb */, Mips::ADDU_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 338 /* addu.qb */, Mips::ADDU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 346 /* addu16 */, Mips::ADDU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 346 /* addu16 */, Mips::ADDU16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 353 /* addu_s.ph */, Mips::ADDU_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 353 /* addu_s.ph */, Mips::ADDU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 363 /* addu_s.qb */, Mips::ADDU_S_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 363 /* addu_s.qb */, Mips::ADDU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 373 /* adduh.qb */, Mips::ADDUH_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 373 /* adduh.qb */, Mips::ADDUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 382 /* adduh_r.qb */, Mips::ADDUH_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 382 /* adduh_r.qb */, Mips::ADDUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 393 /* addv.b */, Mips::ADDV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 400 /* addv.d */, Mips::ADDV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 407 /* addv.h */, Mips::ADDV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 414 /* addv.w */, Mips::ADDV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 421 /* addvi.b */, Mips::ADDVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 429 /* addvi.d */, Mips::ADDVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 437 /* addvi.h */, Mips::ADDVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 445 /* addvi.w */, Mips::ADDVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 453 /* addwc */, Mips::ADDWC_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 453 /* addwc */, Mips::ADDWC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 459 /* align */, Mips::ALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_0 }, },
  { 459 /* align */, Mips::ALIGN_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_0 }, },
  { 465 /* aluipc */, Mips::ALUIPC, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 465 /* aluipc */, Mips::ALUIPC_MMR6, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 472 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 472 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 472 /* and */, Mips::AND_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 472 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 472 /* and */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 472 /* and */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 472 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 472 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1, 0, { MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 472 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 472 /* and */, Mips::AND_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 472 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 472 /* and */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 472 /* and */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 472 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 472 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 476 /* and.v */, Mips::AND_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 482 /* and16 */, Mips::AND16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 482 /* and16 */, Mips::AND16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 488 /* andi */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 488 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 488 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 488 /* andi */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 488 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 488 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 493 /* andi.b */, Mips::ANDI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 500 /* andi16 */, Mips::ANDI16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 500 /* andi16 */, Mips::ANDI16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 507 /* append */, Mips::APPEND_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 507 /* append */, Mips::APPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 514 /* asub_s.b */, Mips::ASUB_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 523 /* asub_s.d */, Mips::ASUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 532 /* asub_s.h */, Mips::ASUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 541 /* asub_s.w */, Mips::ASUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 550 /* asub_u.b */, Mips::ASUB_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 559 /* asub_u.d */, Mips::ASUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 568 /* asub_u.h */, Mips::ASUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 577 /* asub_u.w */, Mips::ASUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 586 /* aui */, Mips::AUI, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 586 /* aui */, Mips::AUI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 590 /* auipc */, Mips::AUIPC, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 590 /* auipc */, Mips::AUIPC_MMR6, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 596 /* ave_s.b */, Mips::AVE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 604 /* ave_s.d */, Mips::AVE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 612 /* ave_s.h */, Mips::AVE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 620 /* ave_s.w */, Mips::AVE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 628 /* ave_u.b */, Mips::AVE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 636 /* ave_u.d */, Mips::AVE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 644 /* ave_u.h */, Mips::AVE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 652 /* ave_u.w */, Mips::AVE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 660 /* aver_s.b */, Mips::AVER_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 669 /* aver_s.d */, Mips::AVER_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 678 /* aver_s.h */, Mips::AVER_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 687 /* aver_s.w */, Mips::AVER_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 696 /* aver_u.b */, Mips::AVER_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 705 /* aver_u.d */, Mips::AVER_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 714 /* aver_u.h */, Mips::AVER_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 723 /* aver_u.w */, Mips::AVER_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 732 /* b */, Mips::B_MM_Pseudo, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 732 /* b */, Mips::BimmX16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget }, },
  { 732 /* b */, Mips::BEQ, Convert__regZERO__regZERO__JumpTarget1_0, Feature_NotInMicroMips, { MCK_JumpTarget }, },
  { 732 /* b */, Mips::B_MMR6_Pseudo, Convert__JumpTarget1_0, 0, { MCK_JumpTarget }, },
  { 732 /* b */, Mips::Bimm16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 734 /* b16 */, Mips::B16_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 738 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 738 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 744 /* bal */, Mips::BAL, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 744 /* bal */, Mips::BGEZAL, Convert__regZERO__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 748 /* balc */, Mips::BALC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 748 /* balc */, Mips::BALC_MMR6, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 753 /* balign */, Mips::BALIGN_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm2_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_0 }, },
  { 753 /* balign */, Mips::BALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm2_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_0 }, },
  { 760 /* bbit0 */, Mips::BBIT032, Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_JumpTarget }, },
  { 760 /* bbit0 */, Mips::BBIT0, Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0_Report_UImm6, MCK_JumpTarget }, },
  { 766 /* bbit032 */, Mips::BBIT032, Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_JumpTarget }, },
  { 774 /* bbit1 */, Mips::BBIT132, Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_JumpTarget }, },
  { 774 /* bbit1 */, Mips::BBIT1, Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0_Report_UImm6, MCK_JumpTarget }, },
  { 780 /* bbit132 */, Mips::BBIT132, Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_JumpTarget }, },
  { 788 /* bc */, Mips::BC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 788 /* bc */, Mips::BC_MMR6, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 791 /* bc16 */, Mips::BC16_MMR6, Convert__JumpTarget1_0, Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 796 /* bc1eqz */, Mips::BC1EQZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 803 /* bc1eqzc */, Mips::BC1EQZC_MMR6, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 811 /* bc1f */, Mips::BC1F, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 811 /* bc1f */, Mips::BC1F, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 816 /* bc1fl */, Mips::BC1FL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 816 /* bc1fl */, Mips::BC1FL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 822 /* bc1nez */, Mips::BC1NEZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 829 /* bc1nezc */, Mips::BC1NEZC_MMR6, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 837 /* bc1t */, Mips::BC1T, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 837 /* bc1t */, Mips::BC1T, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 842 /* bc1tl */, Mips::BC1TL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 842 /* bc1tl */, Mips::BC1TL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 848 /* bc2eqz */, Mips::BC2EQZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 855 /* bc2eqzc */, Mips::BC2EQZC_MMR6, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 863 /* bc2nez */, Mips::BC2NEZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 870 /* bc2nezc */, Mips::BC2NEZC_MMR6, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 878 /* bclr.b */, Mips::BCLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 885 /* bclr.d */, Mips::BCLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 892 /* bclr.h */, Mips::BCLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 899 /* bclr.w */, Mips::BCLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 906 /* bclri.b */, Mips::BCLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 914 /* bclri.d */, Mips::BCLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 922 /* bclri.h */, Mips::BCLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 930 /* bclri.w */, Mips::BCLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 938 /* beq */, Mips::BEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 938 /* beq */, Mips::BEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 938 /* beq */, Mips::BeqImm, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 942 /* beqc */, Mips::BEQC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 942 /* beqc */, Mips::BEQC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 942 /* beqc */, Mips::BEQC64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 947 /* beql */, Mips::BEQL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 952 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 952 /* beqz */, Mips::BEQ_MM, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 952 /* beqz */, Mips::BEQ, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 952 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 957 /* beqz16 */, Mips::BEQZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 964 /* beqzalc */, Mips::BEQZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 964 /* beqzalc */, Mips::BEQZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 972 /* beqzc */, Mips::BEQZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 972 /* beqzc */, Mips::BEQZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 972 /* beqzc */, Mips::BEQZC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 972 /* beqzc */, Mips::BEQZC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 978 /* beqzc16 */, Mips::BEQZC16_MMR6, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 986 /* beqzl */, Mips::BEQL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 992 /* bge */, Mips::BGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 992 /* bge */, Mips::BGEImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 996 /* bgec */, Mips::BGEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 996 /* bgec */, Mips::BGEC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 996 /* bgec */, Mips::BGEC64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1001 /* bgel */, Mips::BGEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1001 /* bgel */, Mips::BGELImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1006 /* bgeu */, Mips::BGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1006 /* bgeu */, Mips::BGEUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1011 /* bgeuc */, Mips::BGEUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1011 /* bgeuc */, Mips::BGEUC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1011 /* bgeuc */, Mips::BGEUC64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1017 /* bgeul */, Mips::BGEUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1017 /* bgeul */, Mips::BGEULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1023 /* bgez */, Mips::BGEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1023 /* bgez */, Mips::BGEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1028 /* bgezal */, Mips::BGEZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1028 /* bgezal */, Mips::BGEZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1035 /* bgezalc */, Mips::BGEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1035 /* bgezalc */, Mips::BGEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1043 /* bgezall */, Mips::BGEZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1051 /* bgezals */, Mips::BGEZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1059 /* bgezc */, Mips::BGEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1059 /* bgezc */, Mips::BGEZC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1059 /* bgezc */, Mips::BGEZC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1065 /* bgezl */, Mips::BGEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1071 /* bgt */, Mips::BGT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1071 /* bgt */, Mips::BGTImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1075 /* bgtl */, Mips::BGTL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1075 /* bgtl */, Mips::BGTLImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1080 /* bgtu */, Mips::BGTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1080 /* bgtu */, Mips::BGTUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1085 /* bgtul */, Mips::BGTUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1085 /* bgtul */, Mips::BGTULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1091 /* bgtz */, Mips::BGTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1091 /* bgtz */, Mips::BGTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1096 /* bgtzalc */, Mips::BGTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1096 /* bgtzalc */, Mips::BGTZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1104 /* bgtzc */, Mips::BGTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1104 /* bgtzc */, Mips::BGTZC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1104 /* bgtzc */, Mips::BGTZC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1110 /* bgtzl */, Mips::BGTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1116 /* binsl.b */, Mips::BINSL_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1124 /* binsl.d */, Mips::BINSL_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1132 /* binsl.h */, Mips::BINSL_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1140 /* binsl.w */, Mips::BINSL_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1148 /* binsli.b */, Mips::BINSLI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 1157 /* binsli.d */, Mips::BINSLI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 1166 /* binsli.h */, Mips::BINSLI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 1175 /* binsli.w */, Mips::BINSLI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 1184 /* binsr.b */, Mips::BINSR_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1192 /* binsr.d */, Mips::BINSR_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1200 /* binsr.h */, Mips::BINSR_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1208 /* binsr.w */, Mips::BINSR_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1216 /* binsri.b */, Mips::BINSRI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 1225 /* binsri.d */, Mips::BINSRI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 1234 /* binsri.h */, Mips::BINSRI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 1243 /* binsri.w */, Mips::BINSRI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 1252 /* bitrev */, Mips::BITREV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1252 /* bitrev */, Mips::BITREV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1259 /* bitswap */, Mips::BITSWAP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1259 /* bitswap */, Mips::BITSWAP_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1267 /* ble */, Mips::BLE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1267 /* ble */, Mips::BLEImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1271 /* blel */, Mips::BLEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1271 /* blel */, Mips::BLELImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1276 /* bleu */, Mips::BLEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1276 /* bleu */, Mips::BLEUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1281 /* bleul */, Mips::BLEUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1281 /* bleul */, Mips::BLEULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1287 /* blez */, Mips::BLEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1287 /* blez */, Mips::BLEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1292 /* blezalc */, Mips::BLEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1292 /* blezalc */, Mips::BLEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1300 /* blezc */, Mips::BLEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1300 /* blezc */, Mips::BLEZC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1300 /* blezc */, Mips::BLEZC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1306 /* blezl */, Mips::BLEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1312 /* blt */, Mips::BLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1312 /* blt */, Mips::BLTImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1316 /* bltc */, Mips::BLTC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1316 /* bltc */, Mips::BLTC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1316 /* bltc */, Mips::BLTC64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1321 /* bltl */, Mips::BLTL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1321 /* bltl */, Mips::BLTLImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1326 /* bltu */, Mips::BLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1326 /* bltu */, Mips::BLTUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1331 /* bltuc */, Mips::BLTUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1331 /* bltuc */, Mips::BLTUC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1331 /* bltuc */, Mips::BLTUC64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1337 /* bltul */, Mips::BLTUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1337 /* bltul */, Mips::BLTULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1343 /* bltz */, Mips::BLTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1343 /* bltz */, Mips::BLTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1348 /* bltzal */, Mips::BLTZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1348 /* bltzal */, Mips::BLTZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1355 /* bltzalc */, Mips::BLTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1355 /* bltzalc */, Mips::BLTZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1363 /* bltzall */, Mips::BLTZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1371 /* bltzals */, Mips::BLTZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1379 /* bltzc */, Mips::BLTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1379 /* bltzc */, Mips::BLTZC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1379 /* bltzc */, Mips::BLTZC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1385 /* bltzl */, Mips::BLTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1391 /* bmnz.v */, Mips::BMNZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1398 /* bmnzi.b */, Mips::BMNZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 1406 /* bmz.v */, Mips::BMZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1412 /* bmzi.b */, Mips::BMZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 1419 /* bne */, Mips::BNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1419 /* bne */, Mips::BNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1419 /* bne */, Mips::BneImm, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1423 /* bnec */, Mips::BNEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1423 /* bnec */, Mips::BNEC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1423 /* bnec */, Mips::BNEC64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1428 /* bneg.b */, Mips::BNEG_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1435 /* bneg.d */, Mips::BNEG_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1442 /* bneg.h */, Mips::BNEG_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1449 /* bneg.w */, Mips::BNEG_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1456 /* bnegi.b */, Mips::BNEGI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 1464 /* bnegi.d */, Mips::BNEGI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 1472 /* bnegi.h */, Mips::BNEGI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 1480 /* bnegi.w */, Mips::BNEGI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 1488 /* bnel */, Mips::BNEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1493 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 1493 /* bnez */, Mips::BNE_MM, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1493 /* bnez */, Mips::BNE, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1493 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1498 /* bnez16 */, Mips::BNEZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 1505 /* bnezalc */, Mips::BNEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1505 /* bnezalc */, Mips::BNEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1513 /* bnezc */, Mips::BNEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1513 /* bnezc */, Mips::BNEZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1513 /* bnezc */, Mips::BNEZC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1513 /* bnezc */, Mips::BNEZC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 1519 /* bnezc16 */, Mips::BNEZC16_MMR6, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 1527 /* bnezl */, Mips::BNEL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1533 /* bnvc */, Mips::BNVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1533 /* bnvc */, Mips::BNVC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1538 /* bnz.b */, Mips::BNZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1544 /* bnz.d */, Mips::BNZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1550 /* bnz.h */, Mips::BNZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1556 /* bnz.v */, Mips::BNZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1562 /* bnz.w */, Mips::BNZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1568 /* bovc */, Mips::BOVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1568 /* bovc */, Mips::BOVC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1573 /* bposge32 */, Mips::BPOSGE32_MM, Convert__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_InMicroMips, { MCK_JumpTarget }, },
  { 1573 /* bposge32 */, Mips::BPOSGE32, Convert__JumpTarget1_0, Feature_HasDSP|Feature_NotInMicroMips, { MCK_JumpTarget }, },
  { 1582 /* bposge32c */, Mips::BPOSGE32C_MMR3, Convert__JumpTarget1_0, Feature_HasDSPR3|Feature_InMicroMips, { MCK_JumpTarget }, },
  { 1592 /* break */, Mips::BREAK, Convert__imm_95_0__imm_95_0, 0, {  }, },
  { 1592 /* break */, Mips::Break16, Convert_NoOperands, Feature_InMips16Mode, { MCK_0 }, },
  { 1592 /* break */, Mips::BREAK, Convert__ConstantUImm10_01_0__imm_95_0, 0, { MCK_ConstantUImm10_0 }, },
  { 1592 /* break */, Mips::BREAK, Convert__ConstantUImm10_01_0__ConstantUImm10_01_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_ConstantUImm10_0, MCK_ConstantUImm10_0 }, },
  { 1592 /* break */, Mips::BREAK_MMR6, Convert__ConstantUImm10_01_0__ConstantUImm10_01_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm10_0, MCK_ConstantUImm10_0 }, },
  { 1592 /* break */, Mips::BREAK_MM, Convert__ConstantUImm10_01_0__ConstantUImm10_01_1, Feature_InMicroMips, { MCK_ConstantUImm10_0, MCK_ConstantUImm10_0 }, },
  { 1598 /* break16 */, Mips::BREAK16_MM, Convert__ConstantUImm4_01_0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm4_0 }, },
  { 1598 /* break16 */, Mips::BREAK16_MMR6, Convert__ConstantUImm4_01_0, Feature_HasMicroMips32r6, { MCK_ConstantUImm4_0 }, },
  { 1606 /* bsel.v */, Mips::BSEL_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1613 /* bseli.b */, Mips::BSELI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 1621 /* bset.b */, Mips::BSET_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1628 /* bset.d */, Mips::BSET_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1635 /* bset.h */, Mips::BSET_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1642 /* bset.w */, Mips::BSET_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1649 /* bseti.b */, Mips::BSETI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 1657 /* bseti.d */, Mips::BSETI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 1665 /* bseti.h */, Mips::BSETI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 1673 /* bseti.w */, Mips::BSETI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 1681 /* bteqz */, Mips::BteqzX16, Convert__SImm161_0, Feature_InMips16Mode, { MCK_SImm16 }, },
  { 1681 /* bteqz */, Mips::Bteqz16, Convert__SImm161_0, Feature_InMips16Mode, { MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1687 /* btnez */, Mips::BtnezX16, Convert__SImm161_0, Feature_InMips16Mode, { MCK_SImm16 }, },
  { 1687 /* btnez */, Mips::Btnez16, Convert__SImm161_0, Feature_InMips16Mode, { MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1693 /* bz.b */, Mips::BZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1698 /* bz.d */, Mips::BZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1703 /* bz.h */, Mips::BZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1708 /* bz.v */, Mips::BZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1713 /* bz.w */, Mips::BZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1718 /* c.eq.d */, Mips::C_EQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1718 /* c.eq.d */, Mips::C_EQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1725 /* c.eq.s */, Mips::C_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1732 /* c.f.d */, Mips::C_F_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1732 /* c.f.d */, Mips::C_F_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1738 /* c.f.s */, Mips::C_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1744 /* c.le.d */, Mips::C_LE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1744 /* c.le.d */, Mips::C_LE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1751 /* c.le.s */, Mips::C_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1758 /* c.lt.d */, Mips::C_LT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1758 /* c.lt.d */, Mips::C_LT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1765 /* c.lt.s */, Mips::C_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1772 /* c.nge.d */, Mips::C_NGE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1772 /* c.nge.d */, Mips::C_NGE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1780 /* c.nge.s */, Mips::C_NGE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1788 /* c.ngl.d */, Mips::C_NGL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1788 /* c.ngl.d */, Mips::C_NGL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1796 /* c.ngl.s */, Mips::C_NGL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1804 /* c.ngle.d */, Mips::C_NGLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1804 /* c.ngle.d */, Mips::C_NGLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1813 /* c.ngle.s */, Mips::C_NGLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1822 /* c.ngt.d */, Mips::C_NGT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1822 /* c.ngt.d */, Mips::C_NGT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1830 /* c.ngt.s */, Mips::C_NGT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1838 /* c.ole.d */, Mips::C_OLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1838 /* c.ole.d */, Mips::C_OLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1846 /* c.ole.s */, Mips::C_OLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1854 /* c.olt.d */, Mips::C_OLT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1854 /* c.olt.d */, Mips::C_OLT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1862 /* c.olt.s */, Mips::C_OLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1870 /* c.seq.d */, Mips::C_SEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1870 /* c.seq.d */, Mips::C_SEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1878 /* c.seq.s */, Mips::C_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1886 /* c.sf.d */, Mips::C_SF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1886 /* c.sf.d */, Mips::C_SF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1893 /* c.sf.s */, Mips::C_SF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1900 /* c.ueq.d */, Mips::C_UEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1900 /* c.ueq.d */, Mips::C_UEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1908 /* c.ueq.s */, Mips::C_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1916 /* c.ule.d */, Mips::C_ULE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1916 /* c.ule.d */, Mips::C_ULE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1924 /* c.ule.s */, Mips::C_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1932 /* c.ult.d */, Mips::C_ULT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1932 /* c.ult.d */, Mips::C_ULT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1940 /* c.ult.s */, Mips::C_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1948 /* c.un.d */, Mips::C_UN_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1948 /* c.un.d */, Mips::C_UN_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1955 /* c.un.s */, Mips::C_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1962 /* cache */, Mips::CACHE_R6, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 1962 /* cache */, Mips::CACHE, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1962 /* cache */, Mips::CACHE_MMR6, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1962 /* cache */, Mips::CACHE_MM, Convert__Mem2_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1968 /* cachee */, Mips::CACHEE, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasEVA, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 1968 /* cachee */, Mips::CACHEE_MMR6, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 1968 /* cachee */, Mips::CACHEE_MM, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 1975 /* ceil.l.d */, Mips::CEIL_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1975 /* ceil.l.d */, Mips::CEIL_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1984 /* ceil.l.s */, Mips::CEIL_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 1984 /* ceil.l.s */, Mips::CEIL_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 1993 /* ceil.w.d */, Mips::CEIL_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 1993 /* ceil.w.d */, Mips::CEIL_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 1993 /* ceil.w.d */, Mips::CEIL_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2002 /* ceil.w.s */, Mips::CEIL_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2002 /* ceil.w.s */, Mips::CEIL_W_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2002 /* ceil.w.s */, Mips::CEIL_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2011 /* ceq.b */, Mips::CEQ_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2017 /* ceq.d */, Mips::CEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2023 /* ceq.h */, Mips::CEQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2029 /* ceq.w */, Mips::CEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2035 /* ceqi.b */, Mips::CEQI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2042 /* ceqi.d */, Mips::CEQI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2049 /* ceqi.h */, Mips::CEQI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2056 /* ceqi.w */, Mips::CEQI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2063 /* cfc1 */, Mips::CFC1, Convert__GPR32AsmReg1_0__CCRAsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2063 /* cfc1 */, Mips::CFC1_MM, Convert__GPR32AsmReg1_0__CCRAsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2068 /* cfc2 */, Mips::CFC2_MM, Convert__GPR32AsmReg1_0__COP2AsmReg1_1, Feature_HasStdEnc|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 2073 /* cfcmsa */, Mips::CFCMSA, Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSACtrlAsmReg }, },
  { 2080 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2080 /* cins */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 2080 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2080 /* cins */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 2085 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2085 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2092 /* class.d */, Mips::CLASS_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2092 /* class.d */, Mips::CLASS_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2100 /* class.s */, Mips::CLASS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2100 /* class.s */, Mips::CLASS_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2108 /* cle_s.b */, Mips::CLE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2116 /* cle_s.d */, Mips::CLE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2124 /* cle_s.h */, Mips::CLE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2132 /* cle_s.w */, Mips::CLE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2140 /* cle_u.b */, Mips::CLE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2148 /* cle_u.d */, Mips::CLE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2156 /* cle_u.h */, Mips::CLE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2164 /* cle_u.w */, Mips::CLE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2172 /* clei_s.b */, Mips::CLEI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2181 /* clei_s.d */, Mips::CLEI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2190 /* clei_s.h */, Mips::CLEI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2199 /* clei_s.w */, Mips::CLEI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2208 /* clei_u.b */, Mips::CLEI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2217 /* clei_u.d */, Mips::CLEI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2226 /* clei_u.h */, Mips::CLEI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2235 /* clei_u.w */, Mips::CLEI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2244 /* clo */, Mips::CLO, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2244 /* clo */, Mips::CLO_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2244 /* clo */, Mips::CLO_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2244 /* clo */, Mips::CLO_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2248 /* clt_s.b */, Mips::CLT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2256 /* clt_s.d */, Mips::CLT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2264 /* clt_s.h */, Mips::CLT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2272 /* clt_s.w */, Mips::CLT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2280 /* clt_u.b */, Mips::CLT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2288 /* clt_u.d */, Mips::CLT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2296 /* clt_u.h */, Mips::CLT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2304 /* clt_u.w */, Mips::CLT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2312 /* clti_s.b */, Mips::CLTI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2321 /* clti_s.d */, Mips::CLTI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2330 /* clti_s.h */, Mips::CLTI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2339 /* clti_s.w */, Mips::CLTI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 2348 /* clti_u.b */, Mips::CLTI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2357 /* clti_u.d */, Mips::CLTI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2366 /* clti_u.h */, Mips::CLTI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2375 /* clti_u.w */, Mips::CLTI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 2384 /* clz */, Mips::CLZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2384 /* clz */, Mips::CLZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2384 /* clz */, Mips::CLZ_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2384 /* clz */, Mips::CLZ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2388 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2392 /* cmp.af.d */, Mips::CMP_F_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2392 /* cmp.af.d */, Mips::CMP_AF_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2401 /* cmp.af.s */, Mips::CMP_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2401 /* cmp.af.s */, Mips::CMP_AF_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2410 /* cmp.eq.d */, Mips::CMP_EQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2410 /* cmp.eq.d */, Mips::CMP_EQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2419 /* cmp.eq.ph */, Mips::CMP_EQ_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2419 /* cmp.eq.ph */, Mips::CMP_EQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2429 /* cmp.eq.s */, Mips::CMP_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2429 /* cmp.eq.s */, Mips::CMP_EQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2438 /* cmp.le.d */, Mips::CMP_LE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2438 /* cmp.le.d */, Mips::CMP_LE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2447 /* cmp.le.ph */, Mips::CMP_LE_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2447 /* cmp.le.ph */, Mips::CMP_LE_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2457 /* cmp.le.s */, Mips::CMP_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2457 /* cmp.le.s */, Mips::CMP_LE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2466 /* cmp.lt.d */, Mips::CMP_LT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2466 /* cmp.lt.d */, Mips::CMP_LT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2475 /* cmp.lt.ph */, Mips::CMP_LT_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2475 /* cmp.lt.ph */, Mips::CMP_LT_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2485 /* cmp.lt.s */, Mips::CMP_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2485 /* cmp.lt.s */, Mips::CMP_LT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2494 /* cmp.saf.d */, Mips::CMP_SAF_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2494 /* cmp.saf.d */, Mips::CMP_SAF_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2504 /* cmp.saf.s */, Mips::CMP_SAF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2504 /* cmp.saf.s */, Mips::CMP_SAF_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2514 /* cmp.seq.d */, Mips::CMP_SEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2514 /* cmp.seq.d */, Mips::CMP_SEQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2524 /* cmp.seq.s */, Mips::CMP_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2524 /* cmp.seq.s */, Mips::CMP_SEQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2534 /* cmp.sle.d */, Mips::CMP_SLE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2534 /* cmp.sle.d */, Mips::CMP_SLE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2544 /* cmp.sle.s */, Mips::CMP_SLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2544 /* cmp.sle.s */, Mips::CMP_SLE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2554 /* cmp.slt.d */, Mips::CMP_SLT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2554 /* cmp.slt.d */, Mips::CMP_SLT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2564 /* cmp.slt.s */, Mips::CMP_SLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2564 /* cmp.slt.s */, Mips::CMP_SLT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2574 /* cmp.sueq.d */, Mips::CMP_SUEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2574 /* cmp.sueq.d */, Mips::CMP_SUEQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2585 /* cmp.sueq.s */, Mips::CMP_SUEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2585 /* cmp.sueq.s */, Mips::CMP_SUEQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2596 /* cmp.sule.d */, Mips::CMP_SULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2596 /* cmp.sule.d */, Mips::CMP_SULE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2607 /* cmp.sule.s */, Mips::CMP_SULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2607 /* cmp.sule.s */, Mips::CMP_SULE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2618 /* cmp.sult.d */, Mips::CMP_SULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2618 /* cmp.sult.d */, Mips::CMP_SULT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2629 /* cmp.sult.s */, Mips::CMP_SULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2629 /* cmp.sult.s */, Mips::CMP_SULT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2640 /* cmp.sun.d */, Mips::CMP_SUN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2640 /* cmp.sun.d */, Mips::CMP_SUN_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2650 /* cmp.sun.s */, Mips::CMP_SUN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2650 /* cmp.sun.s */, Mips::CMP_SUN_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2660 /* cmp.ueq.d */, Mips::CMP_UEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2660 /* cmp.ueq.d */, Mips::CMP_UEQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2670 /* cmp.ueq.s */, Mips::CMP_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2670 /* cmp.ueq.s */, Mips::CMP_UEQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2680 /* cmp.ule.d */, Mips::CMP_ULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2680 /* cmp.ule.d */, Mips::CMP_ULE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2690 /* cmp.ule.s */, Mips::CMP_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2690 /* cmp.ule.s */, Mips::CMP_ULE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2700 /* cmp.ult.d */, Mips::CMP_ULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2700 /* cmp.ult.d */, Mips::CMP_ULT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2710 /* cmp.ult.s */, Mips::CMP_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2710 /* cmp.ult.s */, Mips::CMP_ULT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2720 /* cmp.un.d */, Mips::CMP_UN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2720 /* cmp.un.d */, Mips::CMP_UN_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2729 /* cmp.un.s */, Mips::CMP_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2729 /* cmp.un.s */, Mips::CMP_UN_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2738 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2738 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2751 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2751 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2764 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2764 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2777 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2777 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2789 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2789 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2801 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2801 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2813 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16 }, },
  { 2813 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2818 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2818 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2829 /* cmpu.le.qb */, Mips::CMPU_LE_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2829 /* cmpu.le.qb */, Mips::CMPU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2840 /* cmpu.lt.qb */, Mips::CMPU_LT_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2840 /* cmpu.lt.qb */, Mips::CMPU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2851 /* copy_s.b */, Mips::COPY_S_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_ }, },
  { 2860 /* copy_s.d */, Mips::COPY_S_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__ConstantUImm1_01_3, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm1_0, MCK__93_ }, },
  { 2869 /* copy_s.h */, Mips::COPY_S_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_ }, },
  { 2878 /* copy_s.w */, Mips::COPY_S_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_ }, },
  { 2887 /* copy_u.b */, Mips::COPY_U_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_ }, },
  { 2896 /* copy_u.h */, Mips::COPY_U_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_ }, },
  { 2905 /* copy_u.w */, Mips::COPY_U_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_ }, },
  { 2914 /* ctc1 */, Mips::CTC1, Convert__CCRAsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2914 /* ctc1 */, Mips::CTC1_MM, Convert__CCRAsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2919 /* ctc2 */, Mips::CTC2_MM, Convert__COP2AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 2924 /* ctcmsa */, Mips::CTCMSA, Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSACtrlAsmReg, MCK_GPR32AsmReg }, },
  { 2931 /* cvt.d.l */, Mips::CVT_D_L_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2931 /* cvt.d.l */, Mips::CVT_D64_L, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2939 /* cvt.d.s */, Mips::CVT_D32_S, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2939 /* cvt.d.s */, Mips::CVT_D_S_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2939 /* cvt.d.s */, Mips::CVT_D64_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2947 /* cvt.d.w */, Mips::CVT_D32_W, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2947 /* cvt.d.w */, Mips::CVT_D_W_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2947 /* cvt.d.w */, Mips::CVT_D64_W, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2955 /* cvt.l.d */, Mips::CVT_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2955 /* cvt.l.d */, Mips::CVT_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2963 /* cvt.l.s */, Mips::CVT_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2963 /* cvt.l.s */, Mips::CVT_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2971 /* cvt.s.d */, Mips::CVT_S_D_MMR6, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2971 /* cvt.s.d */, Mips::CVT_S_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2971 /* cvt.s.d */, Mips::CVT_S_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2979 /* cvt.s.l */, Mips::CVT_S_L, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2979 /* cvt.s.l */, Mips::CVT_S_L_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2987 /* cvt.s.w */, Mips::CVT_S_W_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2987 /* cvt.s.w */, Mips::CVT_S_W, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2995 /* cvt.w.d */, Mips::CVT_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2995 /* cvt.w.d */, Mips::CVT_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2995 /* cvt.w.d */, Mips::CVT_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 3003 /* cvt.w.s */, Mips::CVT_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 3003 /* cvt.w.s */, Mips::CVT_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 3011 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3011 /* dadd */, Mips::DADD_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3011 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3011 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3011 /* dadd */, Mips::DADD_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3011 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3016 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3016 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3022 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3022 /* daddiu */, Mips::DADDIU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3022 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3022 /* daddiu */, Mips::DADDIU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3029 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3029 /* daddu */, Mips::DADDU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3029 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3029 /* daddu */, Mips::DADDIU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__SImm161_1, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3029 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3029 /* daddu */, Mips::DADDU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3029 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3029 /* daddu */, Mips::DADDIU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__SImm161_2, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_SImm16 }, },
  { 3035 /* dahi */, Mips::DAHI, Convert__GPR64AsmReg1_0__Tie0__UImm16_AltRelaxed1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_UImm16_AltRelaxed }, },
  { 3035 /* dahi */, Mips::DAHI_MM64R6, Convert__GPR64AsmReg1_0__Tie0__UImm161_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_UImm16 }, },
  { 3040 /* dalign */, Mips::DALIGN, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm3_0 }, },
  { 3040 /* dalign */, Mips::DALIGN_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm3_0 }, },
  { 3047 /* dati */, Mips::DATI, Convert__GPR64AsmReg1_0__Tie0__UImm16_AltRelaxed1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_UImm16_AltRelaxed }, },
  { 3047 /* dati */, Mips::DATI_MM64R6, Convert__GPR64AsmReg1_0__Tie0__UImm161_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_UImm16 }, },
  { 3052 /* daui */, Mips::DAUI, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_UImm16 }, },
  { 3052 /* daui */, Mips::DAUI_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_UImm16 }, },
  { 3057 /* dbitswap */, Mips::DBITSWAP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3057 /* dbitswap */, Mips::DBITSWAP_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3066 /* dclo */, Mips::DCLO, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3066 /* dclo */, Mips::DCLO_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3066 /* dclo */, Mips::DCLO_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3071 /* dclz */, Mips::DCLZ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3071 /* dclz */, Mips::DCLZ_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3071 /* dclz */, Mips::DCLZ_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3076 /* ddiv */, Mips::DSDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3076 /* ddiv */, Mips::DSDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3076 /* ddiv */, Mips::DSDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3076 /* ddiv */, Mips::DDIV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3076 /* ddiv */, Mips::DDIV_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3081 /* ddivu */, Mips::DUDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3081 /* ddivu */, Mips::DUDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3081 /* ddivu */, Mips::DUDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3081 /* ddivu */, Mips::DDIVU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3081 /* ddivu */, Mips::DDIVU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3087 /* deret */, Mips::DERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, {  }, },
  { 3087 /* deret */, Mips::DERET_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3087 /* deret */, Mips::DERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3093 /* dext */, Mips::DEXT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_0_Report_UImm61_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0_Report_UImm6, MCK_ConstantUImm5_1 }, },
  { 3093 /* dext */, Mips::DEXT_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_0_Report_UImm61_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0_Report_UImm6, MCK_ConstantUImm5_1 }, },
  { 3098 /* dextm */, Mips::DEXTM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_33 }, },
  { 3098 /* dextm */, Mips::DEXTM_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_33 }, },
  { 3104 /* dextu */, Mips::DEXTU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32, MCK_ConstantUImm5_1 }, },
  { 3104 /* dextu */, Mips::DEXTU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32, MCK_ConstantUImm5_1 }, },
  { 3110 /* di */, Mips::DI, Convert__regZERO, Feature_HasMips32r2|Feature_NotInMicroMips, {  }, },
  { 3110 /* di */, Mips::DI_MM, Convert__regZERO, Feature_InMicroMips, {  }, },
  { 3110 /* di */, Mips::DI_MMR6, Convert__regZERO, Feature_HasMicroMips32r6, {  }, },
  { 3110 /* di */, Mips::DI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 3110 /* di */, Mips::DI_MMR6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 3110 /* di */, Mips::DI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 3113 /* dins */, Mips::DINS_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3113 /* dins */, Mips::DINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2__ConstantUImm5_11_3__Tie0, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0, MCK_ConstantUImm5_1 }, },
  { 3118 /* dinsm */, Mips::DINSM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3118 /* dinsm */, Mips::DINSM_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImmRange2_641_3__Tie0, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImmRange2_64 }, },
  { 3124 /* dinsu */, Mips::DINSU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3__Tie0, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32, MCK_ConstantUImm5_1 }, },
  { 3124 /* dinsu */, Mips::DINSU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3__Tie0, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32, MCK_ConstantUImm5_1 }, },
  { 3130 /* div */, Mips::SDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3130 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3130 /* div */, Mips::SDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3130 /* div */, Mips::SDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3130 /* div */, Mips::DIV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3130 /* div */, Mips::DIV_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3130 /* div */, Mips::SDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3134 /* div.d */, Mips::FDIV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 3134 /* div.d */, Mips::FDIV_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 3134 /* div.d */, Mips::FDIV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 3140 /* div.s */, Mips::FDIV_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 3140 /* div.s */, Mips::FDIV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 3146 /* div_s.b */, Mips::DIV_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3154 /* div_s.d */, Mips::DIV_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3162 /* div_s.h */, Mips::DIV_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3170 /* div_s.w */, Mips::DIV_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3178 /* div_u.b */, Mips::DIV_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3186 /* div_u.d */, Mips::DIV_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3194 /* div_u.h */, Mips::DIV_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3202 /* div_u.w */, Mips::DIV_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3210 /* divu */, Mips::UDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3210 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3210 /* divu */, Mips::UDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3210 /* divu */, Mips::UDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3210 /* divu */, Mips::DIVU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3210 /* divu */, Mips::DIVU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3210 /* divu */, Mips::UDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3215 /* dla */, Mips::LoadAddrImm64, Convert__GPR64AsmReg1_0__Imm1_1, 0, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3215 /* dla */, Mips::LoadAddrReg64, Convert__GPR64AsmReg1_0__Mem2_1, 0, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 3219 /* dli */, Mips::LoadImm64, Convert__GPR64AsmReg1_0__Imm1_1, 0, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3223 /* dlsa */, Mips::DLSA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm2_1 }, },
  { 3223 /* dlsa */, Mips::DLSA_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm2_1 }, },
  { 3223 /* dlsa */, Mips::DLSA_MM64R6, Convert__GPR64AsmReg1_2__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm2_1 }, },
  { 3228 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0, Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3228 /* dmfc0 */, Mips::DMFC0_MM64R6, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3228 /* dmfc0 */, Mips::DMFC0_MM64R6, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 3228 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 3234 /* dmfc1 */, Mips::DMFC1, Convert__GPR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3234 /* dmfc1 */, Mips::DMFC1_MM64R6, Convert__GPR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3240 /* dmfc2 */, Mips::DMFC2_MM64R6, Convert__GPR64AsmReg1_0__COP2AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3240 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3240 /* dmfc2 */, Mips::DMFC2_OCTEON, Convert__GPR64AsmReg1_0__UImm161_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_UImm16 }, },
  { 3240 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__COP2AsmReg1_1__ConstantUImm3_01_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP2AsmReg, MCK_ConstantUImm3_0 }, },
  { 3246 /* dmod */, Mips::DMOD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3246 /* dmod */, Mips::DMOD_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3251 /* dmodu */, Mips::DMODU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3251 /* dmodu */, Mips::DMODU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3257 /* dmtc0 */, Mips::DMTC0, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0, Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3257 /* dmtc0 */, Mips::DMTC0_MM64R6, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3257 /* dmtc0 */, Mips::DMTC0_MM64R6, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 3257 /* dmtc0 */, Mips::DMTC0, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__ConstantUImm3_01_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 3263 /* dmtc1 */, Mips::DMTC1, Convert__FGR64AsmReg1_1__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3263 /* dmtc1 */, Mips::DMTC1_MM64R6, Convert__FGR64AsmReg1_1__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3269 /* dmtc2 */, Mips::DMTC2_MM64R6, Convert__COP2AsmReg1_1__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3269 /* dmtc2 */, Mips::DMTC2, Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3269 /* dmtc2 */, Mips::DMTC2_OCTEON, Convert__GPR64AsmReg1_0__UImm161_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_UImm16 }, },
  { 3269 /* dmtc2 */, Mips::DMTC2, Convert__COP2AsmReg1_1__GPR64AsmReg1_0__ConstantUImm3_01_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP2AsmReg, MCK_ConstantUImm3_0 }, },
  { 3275 /* dmuh */, Mips::DMUH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3275 /* dmuh */, Mips::DMUH_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3280 /* dmuhu */, Mips::DMUHU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3280 /* dmuhu */, Mips::DMUHU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3286 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3286 /* dmul */, Mips::DMUL_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3286 /* dmul */, Mips::DMUL_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3286 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3291 /* dmult */, Mips::DMULT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3297 /* dmultu */, Mips::DMULTu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3304 /* dmulu */, Mips::DMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3304 /* dmulu */, Mips::DMULU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3310 /* dneg */, Mips::DSUB, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg }, },
  { 3310 /* dneg */, Mips::DSUB_MM64R6, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg }, },
  { 3310 /* dneg */, Mips::DSUB, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3310 /* dneg */, Mips::DSUB_MM64R6, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3315 /* dnegu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg }, },
  { 3315 /* dnegu */, Mips::DSUBU_MM64R6, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg }, },
  { 3315 /* dnegu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3315 /* dnegu */, Mips::DSUBU_MM64R6, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3321 /* dotp_s.d */, Mips::DOTP_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3330 /* dotp_s.h */, Mips::DOTP_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3339 /* dotp_s.w */, Mips::DOTP_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3348 /* dotp_u.d */, Mips::DOTP_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3357 /* dotp_u.h */, Mips::DOTP_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3366 /* dotp_u.w */, Mips::DOTP_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3375 /* dpa.w.ph */, Mips::DPA_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3375 /* dpa.w.ph */, Mips::DPA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3384 /* dpadd_s.d */, Mips::DPADD_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3394 /* dpadd_s.h */, Mips::DPADD_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3404 /* dpadd_s.w */, Mips::DPADD_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3414 /* dpadd_u.d */, Mips::DPADD_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3424 /* dpadd_u.h */, Mips::DPADD_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3434 /* dpadd_u.w */, Mips::DPADD_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3444 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3444 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3456 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3456 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3468 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3468 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3481 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3481 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3495 /* dpau.h.qbl */, Mips::DPAU_H_QBL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3495 /* dpau.h.qbl */, Mips::DPAU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3506 /* dpau.h.qbr */, Mips::DPAU_H_QBR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3506 /* dpau.h.qbr */, Mips::DPAU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3517 /* dpax.w.ph */, Mips::DPAX_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3517 /* dpax.w.ph */, Mips::DPAX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3527 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 3527 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3532 /* dps.w.ph */, Mips::DPS_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3532 /* dps.w.ph */, Mips::DPS_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3541 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3541 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3553 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3553 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3565 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3565 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3578 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3578 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3592 /* dpsu.h.qbl */, Mips::DPSU_H_QBL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3592 /* dpsu.h.qbl */, Mips::DPSU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3603 /* dpsu.h.qbr */, Mips::DPSU_H_QBR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3603 /* dpsu.h.qbr */, Mips::DPSU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3614 /* dpsub_s.d */, Mips::DPSUB_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3624 /* dpsub_s.h */, Mips::DPSUB_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3634 /* dpsub_s.w */, Mips::DPSUB_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3644 /* dpsub_u.d */, Mips::DPSUB_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3654 /* dpsub_u.h */, Mips::DPSUB_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3664 /* dpsub_u.w */, Mips::DPSUB_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3674 /* dpsx.w.ph */, Mips::DPSX_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3674 /* dpsx.w.ph */, Mips::DPSX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3684 /* drol */, Mips::DROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3684 /* drol */, Mips::DROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 3684 /* drol */, Mips::DROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3684 /* drol */, Mips::DROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 3689 /* dror */, Mips::DROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3689 /* dror */, Mips::DRORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 3689 /* dror */, Mips::DROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3689 /* dror */, Mips::DRORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 3694 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3694 /* drotr */, Mips::DROTR_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3694 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3694 /* drotr */, Mips::DROTR_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3700 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3700 /* drotr32 */, Mips::DROTR32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3700 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3700 /* drotr32 */, Mips::DROTR32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3708 /* drotrv */, Mips::DROTRV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3708 /* drotrv */, Mips::DROTRV_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3715 /* dsbh */, Mips::DSBH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3715 /* dsbh */, Mips::DSBH_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3720 /* dshd */, Mips::DSHD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3720 /* dshd */, Mips::DSHD_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3725 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3725 /* dsll */, Mips::DSLL_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3725 /* dsll */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3725 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3725 /* dsll */, Mips::DSLL_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3730 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3730 /* dsll32 */, Mips::DSLL32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3730 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3730 /* dsll32 */, Mips::DSLL32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3737 /* dsllv */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3737 /* dsllv */, Mips::DSLLV_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3743 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3743 /* dsra */, Mips::DSRA_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3743 /* dsra */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3743 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3743 /* dsra */, Mips::DSRA_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3748 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3748 /* dsra32 */, Mips::DSRA32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3748 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3748 /* dsra32 */, Mips::DSRA32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3755 /* dsrav */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3755 /* dsrav */, Mips::DSRAV_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3761 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3761 /* dsrl */, Mips::DSRL_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3761 /* dsrl */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3761 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3761 /* dsrl */, Mips::DSRL_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3766 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3766 /* dsrl32 */, Mips::DSRL32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3766 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3766 /* dsrl32 */, Mips::DSRL32_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3773 /* dsrlv */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3773 /* dsrlv */, Mips::DSRLV_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3779 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3779 /* dsub */, Mips::DSUB_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3779 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3779 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3779 /* dsub */, Mips::DSUB_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3779 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3784 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3784 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3790 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3790 /* dsubu */, Mips::DSUBU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3790 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3790 /* dsubu */, Mips::DADDIU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3790 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3790 /* dsubu */, Mips::DSUBU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3790 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3790 /* dsubu */, Mips::DADDIU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3796 /* dvp */, Mips::DVP, Convert__regZERO, Feature_HasMips32r6, {  }, },
  { 3796 /* dvp */, Mips::DVP_MMR6, Convert__regZERO, Feature_HasMicroMips32r6, {  }, },
  { 3796 /* dvp */, Mips::DVP, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 3796 /* dvp */, Mips::DVP_MMR6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 3800 /* ehb */, Mips::EHB_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3800 /* ehb */, Mips::EHB, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 3800 /* ehb */, Mips::EHB_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3804 /* ei */, Mips::EI, Convert__regZERO, Feature_HasMips32r2|Feature_NotInMicroMips, {  }, },
  { 3804 /* ei */, Mips::EI_MM, Convert__regZERO, Feature_InMicroMips, {  }, },
  { 3804 /* ei */, Mips::EI_MMR6, Convert__regZERO, Feature_HasMicroMips32r6, {  }, },
  { 3804 /* ei */, Mips::EI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 3804 /* ei */, Mips::EI_MMR6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 3804 /* ei */, Mips::EI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 3807 /* eret */, Mips::ERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotInMicroMips, {  }, },
  { 3807 /* eret */, Mips::ERET_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3807 /* eret */, Mips::ERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3812 /* eretnc */, Mips::ERETNC, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32r5|Feature_NotInMicroMips, {  }, },
  { 3812 /* eretnc */, Mips::ERETNC_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3819 /* evp */, Mips::EVP, Convert__regZERO, Feature_HasMips32r6, {  }, },
  { 3819 /* evp */, Mips::EVP_MMR6, Convert__regZERO, Feature_HasMicroMips32r6, {  }, },
  { 3819 /* evp */, Mips::EVP, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 3819 /* evp */, Mips::EVP_MMR6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 3823 /* ext */, Mips::EXT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3823 /* ext */, Mips::EXT_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3823 /* ext */, Mips::EXT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3827 /* extp */, Mips::EXTP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3827 /* extp */, Mips::EXTP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3832 /* extpdp */, Mips::EXTPDP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3832 /* extpdp */, Mips::EXTPDP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3839 /* extpdpv */, Mips::EXTPDPV_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3839 /* extpdpv */, Mips::EXTPDPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3847 /* extpv */, Mips::EXTPV_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3847 /* extpv */, Mips::EXTPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3853 /* extr.w */, Mips::EXTR_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3853 /* extr.w */, Mips::EXTR_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3860 /* extr_r.w */, Mips::EXTR_R_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3860 /* extr_r.w */, Mips::EXTR_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3869 /* extr_rs.w */, Mips::EXTR_RS_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3869 /* extr_rs.w */, Mips::EXTR_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3879 /* extr_s.h */, Mips::EXTR_S_H_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3879 /* extr_s.h */, Mips::EXTR_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3888 /* extrv.w */, Mips::EXTRV_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3888 /* extrv.w */, Mips::EXTRV_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3896 /* extrv_r.w */, Mips::EXTRV_R_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3896 /* extrv_r.w */, Mips::EXTRV_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3906 /* extrv_rs.w */, Mips::EXTRV_RS_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3906 /* extrv_rs.w */, Mips::EXTRV_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3917 /* extrv_s.h */, Mips::EXTRV_S_H_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3917 /* extrv_s.h */, Mips::EXTRV_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3927 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3927 /* exts */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 3927 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3927 /* exts */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 3932 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3932 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3939 /* fadd.d */, Mips::FADD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3946 /* fadd.w */, Mips::FADD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3953 /* fcaf.d */, Mips::FCAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3960 /* fcaf.w */, Mips::FCAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3967 /* fceq.d */, Mips::FCEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3974 /* fceq.w */, Mips::FCEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3981 /* fclass.d */, Mips::FCLASS_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3990 /* fclass.w */, Mips::FCLASS_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3999 /* fcle.d */, Mips::FCLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4006 /* fcle.w */, Mips::FCLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4013 /* fclt.d */, Mips::FCLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4020 /* fclt.w */, Mips::FCLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4027 /* fcne.d */, Mips::FCNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4034 /* fcne.w */, Mips::FCNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4041 /* fcor.d */, Mips::FCOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4048 /* fcor.w */, Mips::FCOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4055 /* fcueq.d */, Mips::FCUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4063 /* fcueq.w */, Mips::FCUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4071 /* fcule.d */, Mips::FCULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4079 /* fcule.w */, Mips::FCULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4087 /* fcult.d */, Mips::FCULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4095 /* fcult.w */, Mips::FCULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4103 /* fcun.d */, Mips::FCUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4110 /* fcun.w */, Mips::FCUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4117 /* fcune.d */, Mips::FCUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4125 /* fcune.w */, Mips::FCUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4133 /* fdiv.d */, Mips::FDIV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4140 /* fdiv.w */, Mips::FDIV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4147 /* fexdo.h */, Mips::FEXDO_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4155 /* fexdo.w */, Mips::FEXDO_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4163 /* fexp2.d */, Mips::FEXP2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4171 /* fexp2.w */, Mips::FEXP2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4179 /* fexupl.d */, Mips::FEXUPL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4188 /* fexupl.w */, Mips::FEXUPL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4197 /* fexupr.d */, Mips::FEXUPR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4206 /* fexupr.w */, Mips::FEXUPR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4215 /* ffint_s.d */, Mips::FFINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4225 /* ffint_s.w */, Mips::FFINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4235 /* ffint_u.d */, Mips::FFINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4245 /* ffint_u.w */, Mips::FFINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4255 /* ffql.d */, Mips::FFQL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4262 /* ffql.w */, Mips::FFQL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4269 /* ffqr.d */, Mips::FFQR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4276 /* ffqr.w */, Mips::FFQR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4283 /* fill.b */, Mips::FILL_B, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4290 /* fill.d */, Mips::FILL_D, Convert__MSA128AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK_GPR64AsmReg }, },
  { 4297 /* fill.h */, Mips::FILL_H, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4304 /* fill.w */, Mips::FILL_W, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4311 /* flog2.d */, Mips::FLOG2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4319 /* flog2.w */, Mips::FLOG2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4327 /* floor.l.d */, Mips::FLOOR_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 4327 /* floor.l.d */, Mips::FLOOR_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 4337 /* floor.l.s */, Mips::FLOOR_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 4337 /* floor.l.s */, Mips::FLOOR_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 4347 /* floor.w.d */, Mips::FLOOR_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 4347 /* floor.w.d */, Mips::FLOOR_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 4347 /* floor.w.d */, Mips::FLOOR_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 4357 /* floor.w.s */, Mips::FLOOR_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4357 /* floor.w.s */, Mips::FLOOR_W_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4357 /* floor.w.s */, Mips::FLOOR_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4367 /* fmadd.d */, Mips::FMADD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4375 /* fmadd.w */, Mips::FMADD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4383 /* fmax.d */, Mips::FMAX_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4390 /* fmax.w */, Mips::FMAX_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4397 /* fmax_a.d */, Mips::FMAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4406 /* fmax_a.w */, Mips::FMAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4415 /* fmin.d */, Mips::FMIN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4422 /* fmin.w */, Mips::FMIN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4429 /* fmin_a.d */, Mips::FMIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4438 /* fmin_a.w */, Mips::FMIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4447 /* fmsub.d */, Mips::FMSUB_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4455 /* fmsub.w */, Mips::FMSUB_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4463 /* fmul.d */, Mips::FMUL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4470 /* fmul.w */, Mips::FMUL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4477 /* frcp.d */, Mips::FRCP_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4484 /* frcp.w */, Mips::FRCP_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4491 /* frint.d */, Mips::FRINT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4499 /* frint.w */, Mips::FRINT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4507 /* frsqrt.d */, Mips::FRSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4516 /* frsqrt.w */, Mips::FRSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4525 /* fsaf.d */, Mips::FSAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4532 /* fsaf.w */, Mips::FSAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4539 /* fseq.d */, Mips::FSEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4546 /* fseq.w */, Mips::FSEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4553 /* fsle.d */, Mips::FSLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4560 /* fsle.w */, Mips::FSLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4567 /* fslt.d */, Mips::FSLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4574 /* fslt.w */, Mips::FSLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4581 /* fsne.d */, Mips::FSNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4588 /* fsne.w */, Mips::FSNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4595 /* fsor.d */, Mips::FSOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4602 /* fsor.w */, Mips::FSOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4609 /* fsqrt.d */, Mips::FSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4617 /* fsqrt.w */, Mips::FSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4625 /* fsub.d */, Mips::FSUB_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4632 /* fsub.w */, Mips::FSUB_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4639 /* fsueq.d */, Mips::FSUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4647 /* fsueq.w */, Mips::FSUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4655 /* fsule.d */, Mips::FSULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4663 /* fsule.w */, Mips::FSULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4671 /* fsult.d */, Mips::FSULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4679 /* fsult.w */, Mips::FSULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4687 /* fsun.d */, Mips::FSUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4694 /* fsun.w */, Mips::FSUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4701 /* fsune.d */, Mips::FSUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4709 /* fsune.w */, Mips::FSUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4717 /* ftint_s.d */, Mips::FTINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4727 /* ftint_s.w */, Mips::FTINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4737 /* ftint_u.d */, Mips::FTINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4747 /* ftint_u.w */, Mips::FTINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4757 /* ftq.h */, Mips::FTQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4763 /* ftq.w */, Mips::FTQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4769 /* ftrunc_s.d */, Mips::FTRUNC_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4780 /* ftrunc_s.w */, Mips::FTRUNC_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4791 /* ftrunc_u.d */, Mips::FTRUNC_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4802 /* ftrunc_u.w */, Mips::FTRUNC_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4813 /* hadd_s.d */, Mips::HADD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4822 /* hadd_s.h */, Mips::HADD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4831 /* hadd_s.w */, Mips::HADD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4840 /* hadd_u.d */, Mips::HADD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4849 /* hadd_u.h */, Mips::HADD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4858 /* hadd_u.w */, Mips::HADD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4867 /* hsub_s.d */, Mips::HSUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4876 /* hsub_s.h */, Mips::HSUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4885 /* hsub_s.w */, Mips::HSUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4894 /* hsub_u.d */, Mips::HSUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4903 /* hsub_u.h */, Mips::HSUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4912 /* hsub_u.w */, Mips::HSUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4921 /* ilvev.b */, Mips::ILVEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4929 /* ilvev.d */, Mips::ILVEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4937 /* ilvev.h */, Mips::ILVEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4945 /* ilvev.w */, Mips::ILVEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4953 /* ilvl.b */, Mips::ILVL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4960 /* ilvl.d */, Mips::ILVL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4967 /* ilvl.h */, Mips::ILVL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4974 /* ilvl.w */, Mips::ILVL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4981 /* ilvod.b */, Mips::ILVOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4989 /* ilvod.d */, Mips::ILVOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4997 /* ilvod.h */, Mips::ILVOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5005 /* ilvod.w */, Mips::ILVOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5013 /* ilvr.b */, Mips::ILVR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5020 /* ilvr.d */, Mips::ILVR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5027 /* ilvr.h */, Mips::ILVR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5034 /* ilvr.w */, Mips::ILVR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5041 /* ins */, Mips::INS, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 5041 /* ins */, Mips::INS_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 5041 /* ins */, Mips::INS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 5045 /* insert.b */, Mips::INSERT_B, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_, MCK_GPR32AsmReg }, },
  { 5054 /* insert.d */, Mips::INSERT_D, Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__ConstantUImm1_01_2, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm1_0, MCK__93_, MCK_GPR64AsmReg }, },
  { 5063 /* insert.h */, Mips::INSERT_H, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_, MCK_GPR32AsmReg }, },
  { 5072 /* insert.w */, Mips::INSERT_W, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__ConstantUImm2_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_, MCK_GPR32AsmReg }, },
  { 5081 /* insv */, Mips::INSV_MM, Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5081 /* insv */, Mips::INSV, Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5086 /* insve.b */, Mips::INSVE_B, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm4_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5094 /* insve.d */, Mips::INSVE_D, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm1_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm1_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5102 /* insve.h */, Mips::INSVE_H, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm3_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5110 /* insve.w */, Mips::INSVE_W, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm2_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5118 /* j */, Mips::JR, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 5118 /* j */, Mips::J_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5118 /* j */, Mips::J, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 5120 /* jal */, Mips::JalOneReg, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 5120 /* jal */, Mips::JAL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5120 /* jal */, Mips::JAL, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 5120 /* jal */, Mips::JalTwoReg, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5124 /* jalr */, Mips::JALR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips|Feature_NotMips32r6, { MCK_GPR32AsmReg }, },
  { 5124 /* jalr */, Mips::JALRC16_MMR6, Convert__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 5124 /* jalr */, Mips::JALR, Convert__regRA__GPR32AsmReg1_0, Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5124 /* jalr */, Mips::JALR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5124 /* jalr */, Mips::JALR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5124 /* jalr */, Mips::JALR64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 5129 /* jalr.hb */, Mips::JALR_HB, Convert__regRA__GPR32AsmReg1_0, Feature_HasMips32, { MCK_GPR32AsmReg }, },
  { 5129 /* jalr.hb */, Mips::JALR_HB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5137 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5137 /* jalrc */, Mips::JIALC, Convert__GPR32AsmReg1_0__imm_95_0, Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5137 /* jalrc */, Mips::JALRC_MMR6, Convert__regRA__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 5137 /* jalrc */, Mips::JIALC64, Convert__GPR64AsmReg1_0__imm_95_0, Feature_HasMips64r6, { MCK_GPR64AsmReg }, },
  { 5137 /* jalrc */, Mips::JALRC_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5143 /* jalrc.hb */, Mips::JALRC_HB_MMR6, Convert__regRA__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 5143 /* jalrc.hb */, Mips::JALRC_HB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5152 /* jalrs */, Mips::JALRS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5158 /* jalrs16 */, Mips::JALRS16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5166 /* jals */, Mips::JALS_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5171 /* jalx */, Mips::JALX, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 5171 /* jalx */, Mips::JALX_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 5176 /* jialc */, Mips::JIALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5176 /* jialc */, Mips::JIALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5176 /* jialc */, Mips::JIALC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5182 /* jic */, Mips::JIC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5182 /* jic */, Mips::JIC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5182 /* jic */, Mips::JIC64, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5186 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 5186 /* jr */, Mips::JR, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 5186 /* jr */, Mips::JALR, Convert__regZERO__GPR32AsmReg1_0, Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5186 /* jr */, Mips::JR_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5186 /* jr */, Mips::JR64, Convert__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_IsPTR64bit|Feature_NotInMicroMips, { MCK_GPR64AsmReg }, },
  { 5186 /* jr */, Mips::JALR64, Convert__regZERO_64__GPR64AsmReg1_0, Feature_HasMips64r6, { MCK_GPR64AsmReg }, },
  { 5189 /* jr.hb */, Mips::JR_HB, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 5189 /* jr.hb */, Mips::JR_HB_R6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 5195 /* jr16 */, Mips::JR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5200 /* jraddiusp */, Mips::JRADDIUSP, Convert__UImm5Lsl21_0, Feature_InMicroMips, { MCK_UImm5Lsl2 }, },
  { 5210 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 5210 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5210 /* jrc */, Mips::JIC, Convert__GPR32AsmReg1_0__imm_95_0, Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 5210 /* jrc */, Mips::JRC16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5210 /* jrc */, Mips::JIC64, Convert__GPR64AsmReg1_0__imm_95_0, Feature_HasMips64r6, { MCK_GPR64AsmReg }, },
  { 5214 /* jrc16 */, Mips::JRC16_MMR6, Convert__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 5220 /* jrcaddiusp */, Mips::JRCADDIUSP_MMR6, Convert__UImm5Lsl21_0, Feature_HasMicroMips32r6, { MCK_UImm5Lsl2 }, },
  { 5231 /* l.d */, Mips::LDC1, Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1, Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5231 /* l.d */, Mips::LDC164, Convert__FGR64AsmReg1_0__MemOffsetSimm162_1, Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5235 /* l.s */, Mips::LWC1, Convert__FGR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5239 /* la */, Mips::LoadAddrImm32, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5239 /* la */, Mips::LoadAddrReg32, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5242 /* lb */, Mips::LB_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5242 /* lb */, Mips::LB, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5242 /* lb */, Mips::LB_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5245 /* lbe */, Mips::LBE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5245 /* lbe */, Mips::LBE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5245 /* lbe */, Mips::LBE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5249 /* lbu */, Mips::LBU_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5249 /* lbu */, Mips::LBu, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5249 /* lbu */, Mips::LBu_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5253 /* lbu16 */, Mips::LBU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5259 /* lbue */, Mips::LBUE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5259 /* lbue */, Mips::LBuE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5259 /* lbue */, Mips::LBuE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5264 /* lbux */, Mips::LBUX_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5264 /* lbux */, Mips::LBUX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5269 /* ld */, Mips::LDMacro, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_NotMips3, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5269 /* ld */, Mips::LD, Convert__GPR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5269 /* ld */, Mips::LD_MM64R6, Convert__GPR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5272 /* ld.b */, Mips::LD_B, Convert__MSA128AsmReg1_0__MemOffsetSimm102_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10 }, },
  { 5277 /* ld.d */, Mips::LD_D, Convert__MSA128AsmReg1_0__MemOffsetSimm10_32_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10_3 }, },
  { 5282 /* ld.h */, Mips::LD_H, Convert__MSA128AsmReg1_0__MemOffsetSimm10_12_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10_1 }, },
  { 5287 /* ld.w */, Mips::LD_W, Convert__MSA128AsmReg1_0__MemOffsetSimm10_22_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10_2 }, },
  { 5292 /* ldc1 */, Mips::LDC1, Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5292 /* ldc1 */, Mips::LDC1_MM, Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_AFGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5292 /* ldc1 */, Mips::LDC164, Convert__FGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5292 /* ldc1 */, Mips::LDC1_D64_MMR6, Convert__FGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5297 /* ldc2 */, Mips::LDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5297 /* ldc2 */, Mips::LDC2_MMR6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5297 /* ldc2 */, Mips::LDC2, Convert__COP2AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm16 }, },
  { 5302 /* ldc3 */, Mips::LDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5307 /* ldi.b */, Mips::LDI_B, Convert__MSA128AsmReg1_0__ConstantSImm10_01_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_ConstantSImm10_0 }, },
  { 5313 /* ldi.d */, Mips::LDI_D, Convert__MSA128AsmReg1_0__ConstantSImm10_01_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_ConstantSImm10_0 }, },
  { 5319 /* ldi.h */, Mips::LDI_H, Convert__MSA128AsmReg1_0__ConstantSImm10_01_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_ConstantSImm10_0 }, },
  { 5325 /* ldi.w */, Mips::LDI_W, Convert__MSA128AsmReg1_0__ConstantSImm10_01_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_ConstantSImm10_0 }, },
  { 5331 /* ldl */, Mips::LDL, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5335 /* ldpc */, Mips::LDPC, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5335 /* ldpc */, Mips::LDPC_MM64R6, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5340 /* ldr */, Mips::LDR, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5344 /* ldxc1 */, Mips::LDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5344 /* ldxc1 */, Mips::LDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5350 /* lh */, Mips::LH, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5350 /* lh */, Mips::LH_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5353 /* lhe */, Mips::LHE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5353 /* lhe */, Mips::LHE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5357 /* lhu */, Mips::LHu, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5357 /* lhu */, Mips::LHu_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5361 /* lhu16 */, Mips::LHU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5367 /* lhue */, Mips::LHuE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5367 /* lhue */, Mips::LHuE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5372 /* lhx */, Mips::LHX_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5372 /* lhx */, Mips::LHX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5376 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16 }, },
  { 5376 /* li */, Mips::LoadImm32, Convert__GPR32AsmReg1_0__UImm32_Coerced1_1, 0, { MCK_GPR32AsmReg, MCK_UImm32_Coerced }, },
  { 5376 /* li */, Mips::LiRxImm16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5379 /* li16 */, Mips::LI16_MM, Convert__GPRMM16AsmReg1_0__UImm7_N11_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_UImm7_N1 }, },
  { 5379 /* li16 */, Mips::LI16_MMR6, Convert__GPRMM16AsmReg1_0__UImm7_N11_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_UImm7_N1 }, },
  { 5384 /* ll */, Mips::LL64_R6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5384 /* ll */, Mips::LL_R6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5384 /* ll */, Mips::LL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5384 /* ll */, Mips::LL64, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5384 /* ll */, Mips::LL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5387 /* lld */, Mips::LLD_MM64R6, Convert__GPR64AsmReg1_0__MemOffsetSimm122_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_MemOffsetSimm12 }, },
  { 5387 /* lld */, Mips::LLD, Convert__GPR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5387 /* lld */, Mips::LLD_R6, Convert__GPR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 5391 /* lle */, Mips::LLE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5391 /* lle */, Mips::LLE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5391 /* lle */, Mips::LLE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5395 /* lsa */, Mips::LSA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_1 }, },
  { 5395 /* lsa */, Mips::LSA_MMR6, Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_1 }, },
  { 5395 /* lsa */, Mips::LSA_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_1 }, },
  { 5399 /* lui */, Mips::LUI_MMR6, Convert__GPR32AsmReg1_0__UImm161_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 5399 /* lui */, Mips::LUi, Convert__GPR32AsmReg1_0__UImm16_Relaxed1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_UImm16_Relaxed }, },
  { 5399 /* lui */, Mips::LUi_MM, Convert__GPR32AsmReg1_0__UImm16_Relaxed1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_UImm16_Relaxed }, },
  { 5403 /* luxc1 */, Mips::LUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5403 /* luxc1 */, Mips::LUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5409 /* lw */, Mips::LwRxPcTcpX16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5409 /* lw */, Mips::LWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 5409 /* lw */, Mips::LW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5409 /* lw */, Mips::LW_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5409 /* lw */, Mips::LW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5409 /* lw */, Mips::LWGP_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMemGP2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMemGP }, },
  { 5409 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_1__SImm161_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_SImm16 }, },
  { 5409 /* lw */, Mips::LwRxPcTcp16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5412 /* lw16 */, Mips::LW16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5417 /* lwc1 */, Mips::LWC1, Convert__FGR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5417 /* lwc1 */, Mips::LWC1_MM, Convert__FGR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 5422 /* lwc2 */, Mips::LWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5422 /* lwc2 */, Mips::LWC2_MMR6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5422 /* lwc2 */, Mips::LWC2, Convert__COP2AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm16 }, },
  { 5427 /* lwc3 */, Mips::LWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5432 /* lwe */, Mips::LWE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5432 /* lwe */, Mips::LWE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5432 /* lwe */, Mips::LWE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5436 /* lwl */, Mips::LWL, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5436 /* lwl */, Mips::LWL_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5440 /* lwle */, Mips::LWLE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5440 /* lwle */, Mips::LWLE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5445 /* lwm */, Mips::LWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5449 /* lwm16 */, Mips::LWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips|Feature_NotMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 5449 /* lwm16 */, Mips::LWM16_MMR6, Convert__RegList161_0__MemOffsetUimm42_1, Feature_HasMicroMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 5455 /* lwm32 */, Mips::LWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5461 /* lwp */, Mips::LWP_MMR6, Convert__RegPair2_0__MemOffsetSimm122_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_RegPair, MCK_MemOffsetSimm12 }, },
  { 5461 /* lwp */, Mips::LWP_MM, Convert__RegPair2_0__MemOffsetSimm122_1, Feature_InMicroMips, { MCK_RegPair, MCK_MemOffsetSimm12 }, },
  { 5465 /* lwpc */, Mips::LWPC, Convert__GPR32AsmReg1_0__Simm19_Lsl21_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Simm19_Lsl2 }, },
  { 5465 /* lwpc */, Mips::LWPC_MMR6, Convert__GPR32AsmReg1_0__Simm19_Lsl21_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Simm19_Lsl2 }, },
  { 5470 /* lwr */, Mips::LWR, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5470 /* lwr */, Mips::LWR_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5474 /* lwre */, Mips::LWRE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5474 /* lwre */, Mips::LWRE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5479 /* lwu */, Mips::LWU_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm122_1, Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm12 }, },
  { 5479 /* lwu */, Mips::LWU_MM64R6, Convert__GPR64AsmReg1_0__MemOffsetSimm122_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_MemOffsetSimm12 }, },
  { 5479 /* lwu */, Mips::LWu, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5483 /* lwupc */, Mips::LWUPC, Convert__GPR32AsmReg1_0__Simm19_Lsl21_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Simm19_Lsl2 }, },
  { 5483 /* lwupc */, Mips::LWUPC_MM64R6, Convert__GPR64AsmReg1_0__Simm19_Lsl21_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_Simm19_Lsl2 }, },
  { 5489 /* lwx */, Mips::LWX_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5489 /* lwx */, Mips::LWX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5493 /* lwxc1 */, Mips::LWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5499 /* lwxs */, Mips::LWXS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5504 /* madd */, Mips::MADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5504 /* madd */, Mips::MADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5504 /* madd */, Mips::MADD_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5504 /* madd */, Mips::MADD_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5509 /* madd.d */, Mips::MADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5509 /* madd.d */, Mips::MADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5516 /* madd.s */, Mips::MADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5523 /* madd_q.h */, Mips::MADD_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5532 /* madd_q.w */, Mips::MADD_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5541 /* maddf.d */, Mips::MADDF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5541 /* maddf.d */, Mips::MADDF_D_MMR6, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5549 /* maddf.s */, Mips::MADDF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5549 /* maddf.s */, Mips::MADDF_S_MMR6, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5557 /* maddr_q.h */, Mips::MADDR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5567 /* maddr_q.w */, Mips::MADDR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5577 /* maddu */, Mips::MADDU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5577 /* maddu */, Mips::MADDU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5577 /* maddu */, Mips::MADDU_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5577 /* maddu */, Mips::MADDU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5583 /* maddv.b */, Mips::MADDV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5591 /* maddv.d */, Mips::MADDV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5599 /* maddv.h */, Mips::MADDV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5607 /* maddv.w */, Mips::MADDV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5615 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5615 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5627 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5627 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5639 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5639 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5652 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5652 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5665 /* max.d */, Mips::MAX_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5665 /* max.d */, Mips::MAX_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5671 /* max.s */, Mips::MAX_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5671 /* max.s */, Mips::MAX_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5677 /* max_a.b */, Mips::MAX_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5685 /* max_a.d */, Mips::MAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5693 /* max_a.h */, Mips::MAX_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5701 /* max_a.w */, Mips::MAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5709 /* max_s.b */, Mips::MAX_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5717 /* max_s.d */, Mips::MAX_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5725 /* max_s.h */, Mips::MAX_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5733 /* max_s.w */, Mips::MAX_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5741 /* max_u.b */, Mips::MAX_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5749 /* max_u.d */, Mips::MAX_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5757 /* max_u.h */, Mips::MAX_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5765 /* max_u.w */, Mips::MAX_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5773 /* maxa.d */, Mips::MAXA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5773 /* maxa.d */, Mips::MAXA_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5780 /* maxa.s */, Mips::MAXA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5780 /* maxa.s */, Mips::MAXA_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5787 /* maxi_s.b */, Mips::MAXI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 5796 /* maxi_s.d */, Mips::MAXI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 5805 /* maxi_s.h */, Mips::MAXI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 5814 /* maxi_s.w */, Mips::MAXI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 5823 /* maxi_u.b */, Mips::MAXI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 5832 /* maxi_u.d */, Mips::MAXI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 5841 /* maxi_u.h */, Mips::MAXI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 5850 /* maxi_u.w */, Mips::MAXI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 5859 /* mfc0 */, Mips::MFC0_MMR6, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 5859 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 5859 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 5859 /* mfc0 */, Mips::MFC0_MMR6, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 5864 /* mfc1 */, Mips::MFC1_MMR6, Convert__GPR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 5864 /* mfc1 */, Mips::MFC1, Convert__GPR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 5869 /* mfc2 */, Mips::MFC2_MMR6, Convert__GPR32AsmReg1_0__COP2AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 5869 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 5869 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__COP2AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_COP2AsmReg, MCK_ConstantUImm3_0 }, },
  { 5874 /* mfhc0 */, Mips::MFHC0_MMR6, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 5874 /* mfhc0 */, Mips::MFHC0_MMR6, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 5880 /* mfhc1 */, Mips::MFHC1_D32, Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 5880 /* mfhc1 */, Mips::MFHC1_MM, Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 5880 /* mfhc1 */, Mips::MFHC1_D32_MMR6, Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 5880 /* mfhc1 */, Mips::MFHC1_D64, Convert__GPR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 5880 /* mfhc1 */, Mips::MFHC1_D64_MMR6, Convert__GPR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 5886 /* mfhc2 */, Mips::MFHC2_MMR6, Convert__GPR32AsmReg1_0__COP2AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 5892 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5892 /* mfhi */, Mips::MFHI, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5892 /* mfhi */, Mips::MFHI16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5892 /* mfhi */, Mips::MFHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5892 /* mfhi */, Mips::MFHI_DSP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5892 /* mfhi */, Mips::MFHI_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5897 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5897 /* mflo */, Mips::MFLO, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5897 /* mflo */, Mips::MFLO16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5897 /* mflo */, Mips::MFLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5897 /* mflo */, Mips::MFLO_DSP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5897 /* mflo */, Mips::MFLO_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5902 /* min.d */, Mips::MIN_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5902 /* min.d */, Mips::MIN_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5908 /* min.s */, Mips::MIN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5908 /* min.s */, Mips::MIN_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5914 /* min_a.b */, Mips::MIN_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5922 /* min_a.d */, Mips::MIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5930 /* min_a.h */, Mips::MIN_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5938 /* min_a.w */, Mips::MIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5946 /* min_s.b */, Mips::MIN_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5954 /* min_s.d */, Mips::MIN_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5962 /* min_s.h */, Mips::MIN_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5970 /* min_s.w */, Mips::MIN_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5978 /* min_u.b */, Mips::MIN_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5986 /* min_u.d */, Mips::MIN_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5994 /* min_u.h */, Mips::MIN_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6002 /* min_u.w */, Mips::MIN_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6010 /* mina.d */, Mips::MINA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6010 /* mina.d */, Mips::MINA_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6017 /* mina.s */, Mips::MINA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6017 /* mina.s */, Mips::MINA_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6024 /* mini_s.b */, Mips::MINI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 6033 /* mini_s.d */, Mips::MINI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 6042 /* mini_s.h */, Mips::MINI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 6051 /* mini_s.w */, Mips::MINI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantSImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantSImm5_0 }, },
  { 6060 /* mini_u.b */, Mips::MINI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 6069 /* mini_u.d */, Mips::MINI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 6078 /* mini_u.h */, Mips::MINI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 6087 /* mini_u.w */, Mips::MINI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 6096 /* mod */, Mips::MOD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6096 /* mod */, Mips::MOD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6100 /* mod_s.b */, Mips::MOD_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6108 /* mod_s.d */, Mips::MOD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6116 /* mod_s.h */, Mips::MOD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6124 /* mod_s.w */, Mips::MOD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6132 /* mod_u.b */, Mips::MOD_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6140 /* mod_u.d */, Mips::MOD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6148 /* mod_u.h */, Mips::MOD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6156 /* mod_u.w */, Mips::MOD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6164 /* modsub */, Mips::MODSUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6164 /* modsub */, Mips::MODSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6171 /* modu */, Mips::MODU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6171 /* modu */, Mips::MODU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6176 /* mov.d */, Mips::FMOV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6176 /* mov.d */, Mips::FMOV_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6176 /* mov.d */, Mips::FMOV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6182 /* mov.s */, Mips::FMOV_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6182 /* mov.s */, Mips::FMOV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6188 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_DSPR }, },
  { 6188 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_DSPR, MCK_CPU16Regs }, },
  { 6188 /* move */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_IsGP32bit|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6188 /* move */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_IsGP32bit|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6188 /* move */, Mips::MOVE16_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6188 /* move */, Mips::OR64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64, Feature_IsGP64bit|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 6188 /* move */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64, Feature_IsGP64bit|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 6193 /* move.v */, Mips::MOVE_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6200 /* move16 */, Mips::MOVE16_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6207 /* movep */, Mips::MOVEP_MM, Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2, Feature_InMicroMips, { MCK_MovePRegPair, MCK_GPRMM16AsmRegMoveP, MCK_GPRMM16AsmRegMoveP }, },
  { 6213 /* movf */, Mips::MOVF_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6213 /* movf */, Mips::MOVF_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6218 /* movf.d */, Mips::MOVF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 6218 /* movf.d */, Mips::MOVF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 6225 /* movf.s */, Mips::MOVF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 6232 /* movn */, Mips::MOVN_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6232 /* movn */, Mips::MOVN_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6237 /* movn.d */, Mips::MOVN_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6237 /* movn.d */, Mips::MOVN_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6244 /* movn.s */, Mips::MOVN_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 6251 /* movt */, Mips::MOVT_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6251 /* movt */, Mips::MOVT_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6256 /* movt.d */, Mips::MOVT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 6256 /* movt.d */, Mips::MOVT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 6263 /* movt.s */, Mips::MOVT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 6270 /* movz */, Mips::MOVZ_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6270 /* movz */, Mips::MOVZ_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6275 /* movz.d */, Mips::MOVZ_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6275 /* movz.d */, Mips::MOVZ_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6282 /* movz.s */, Mips::MOVZ_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 6289 /* msub */, Mips::MSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6289 /* msub */, Mips::MSUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6289 /* msub */, Mips::MSUB_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6289 /* msub */, Mips::MSUB_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6294 /* msub.d */, Mips::MSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6294 /* msub.d */, Mips::MSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6301 /* msub.s */, Mips::MSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6308 /* msub_q.h */, Mips::MSUB_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6317 /* msub_q.w */, Mips::MSUB_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6326 /* msubf.d */, Mips::MSUBF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6326 /* msubf.d */, Mips::MSUBF_D_MMR6, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6334 /* msubf.s */, Mips::MSUBF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6334 /* msubf.s */, Mips::MSUBF_S_MMR6, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6342 /* msubr_q.h */, Mips::MSUBR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6352 /* msubr_q.w */, Mips::MSUBR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6362 /* msubu */, Mips::MSUBU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6362 /* msubu */, Mips::MSUBU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6362 /* msubu */, Mips::MSUBU_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6362 /* msubu */, Mips::MSUBU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6368 /* msubv.b */, Mips::MSUBV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6376 /* msubv.d */, Mips::MSUBV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6384 /* msubv.h */, Mips::MSUBV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6392 /* msubv.w */, Mips::MSUBV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6400 /* mtc0 */, Mips::MTC0_MMR6, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 6400 /* mtc0 */, Mips::MTC0, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 6400 /* mtc0 */, Mips::MTC0, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 6400 /* mtc0 */, Mips::MTC0_MMR6, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 6405 /* mtc1 */, Mips::MTC1_MMR6, Convert__FGR32AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 6405 /* mtc1 */, Mips::MTC1, Convert__FGR32AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 6410 /* mtc2 */, Mips::MTC2_MMR6, Convert__COP2AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 6410 /* mtc2 */, Mips::MTC2, Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 6410 /* mtc2 */, Mips::MTC2, Convert__COP2AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_COP2AsmReg, MCK_ConstantUImm3_0 }, },
  { 6415 /* mthc0 */, Mips::MTHC0_MMR6, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 6415 /* mthc0 */, Mips::MTHC0_MMR6, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_ConstantUImm3_0 }, },
  { 6421 /* mthc1 */, Mips::MTHC1_D32, Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6421 /* mthc1 */, Mips::MTHC1_MM, Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6421 /* mthc1 */, Mips::MTHC1_D32_MMR6, Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6421 /* mthc1 */, Mips::MTHC1_D64, Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 6421 /* mthc1 */, Mips::MTHC1_D64_MMR6, Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 6427 /* mthc2 */, Mips::MTHC2_MMR6, Convert__COP2AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 6433 /* mthi */, Mips::MTHI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6433 /* mthi */, Mips::MTHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6433 /* mthi */, Mips::MTHI_DSP_MM, Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_HI32DSPAsmReg }, },
  { 6433 /* mthi */, Mips::MTHI_DSP, Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_HI32DSPAsmReg }, },
  { 6438 /* mthlip */, Mips::MTHLIP_MM, Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 6438 /* mthlip */, Mips::MTHLIP, Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 6445 /* mtlo */, Mips::MTLO, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6445 /* mtlo */, Mips::MTLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6445 /* mtlo */, Mips::MTLO_DSP_MM, Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_LO32DSPAsmReg }, },
  { 6445 /* mtlo */, Mips::MTLO_DSP, Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_LO32DSPAsmReg }, },
  { 6450 /* mtm0 */, Mips::MTM0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6455 /* mtm1 */, Mips::MTM1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6460 /* mtm2 */, Mips::MTM2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6465 /* mtp0 */, Mips::MTP0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6470 /* mtp1 */, Mips::MTP1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6475 /* mtp2 */, Mips::MTP2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6480 /* muh */, Mips::MUH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6480 /* muh */, Mips::MUH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6480 /* muh */, Mips::MUH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6484 /* muhu */, Mips::MUHU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6484 /* muhu */, Mips::MUHU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6484 /* muhu */, Mips::MUHU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6489 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6489 /* mul */, Mips::MUL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6489 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6489 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6489 /* mul */, Mips::MUL_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6489 /* mul */, Mips::MUL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6489 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6493 /* mul.d */, Mips::FMUL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6493 /* mul.d */, Mips::FMUL_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6493 /* mul.d */, Mips::FMUL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6499 /* mul.ph */, Mips::MUL_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6499 /* mul.ph */, Mips::MUL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6506 /* mul.s */, Mips::FMUL_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6506 /* mul.s */, Mips::FMUL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6512 /* mul_q.h */, Mips::MUL_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6520 /* mul_q.w */, Mips::MUL_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6528 /* mul_s.ph */, Mips::MUL_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6528 /* mul_s.ph */, Mips::MUL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6537 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6537 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6551 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6551 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6565 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6565 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6580 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6580 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6595 /* mulq_rs.ph */, Mips::MULQ_RS_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6595 /* mulq_rs.ph */, Mips::MULQ_RS_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6606 /* mulq_rs.w */, Mips::MULQ_RS_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6606 /* mulq_rs.w */, Mips::MULQ_RS_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6616 /* mulq_s.ph */, Mips::MULQ_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6616 /* mulq_s.ph */, Mips::MULQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6626 /* mulq_s.w */, Mips::MULQ_S_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6626 /* mulq_s.w */, Mips::MULQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6635 /* mulr_q.h */, Mips::MULR_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6644 /* mulr_q.w */, Mips::MULR_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6653 /* mulsa.w.ph */, Mips::MULSA_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6653 /* mulsa.w.ph */, Mips::MULSA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6664 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6664 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6678 /* mult */, Mips::MULT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6678 /* mult */, Mips::MULT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6678 /* mult */, Mips::MULT_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6678 /* mult */, Mips::MULT_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6683 /* multu */, Mips::MULTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6683 /* multu */, Mips::MULTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6683 /* multu */, Mips::MULTU_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6683 /* multu */, Mips::MULTU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6689 /* mulu */, Mips::MULU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6689 /* mulu */, Mips::MULU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6689 /* mulu */, Mips::MULU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6694 /* mulv.b */, Mips::MULV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6701 /* mulv.d */, Mips::MULV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6708 /* mulv.h */, Mips::MULV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6715 /* mulv.w */, Mips::MULV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6722 /* neg */, Mips::SUB, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 6722 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6722 /* neg */, Mips::SUB, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6726 /* neg.d */, Mips::FNEG_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6726 /* neg.d */, Mips::FNEG_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6726 /* neg.d */, Mips::FNEG_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6732 /* neg.s */, Mips::FNEG_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6732 /* neg.s */, Mips::FNEG_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6738 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 6738 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6743 /* nloc.b */, Mips::NLOC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6750 /* nloc.d */, Mips::NLOC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6757 /* nloc.h */, Mips::NLOC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6764 /* nloc.w */, Mips::NLOC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6771 /* nlzc.b */, Mips::NLZC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6778 /* nlzc.d */, Mips::NLZC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6785 /* nlzc.h */, Mips::NLZC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6792 /* nlzc.w */, Mips::NLZC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6799 /* nmadd.d */, Mips::NMADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6799 /* nmadd.d */, Mips::NMADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6807 /* nmadd.s */, Mips::NMADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6815 /* nmsub.d */, Mips::NMSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6815 /* nmsub.d */, Mips::NMSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6823 /* nmsub.s */, Mips::NMSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6831 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_95_0, Feature_NotInMicroMips, {  }, },
  { 6831 /* nop */, Mips::SLL_MM, Convert__regZERO__regZERO__imm_95_0, Feature_InMicroMips, {  }, },
  { 6831 /* nop */, Mips::MOVE16_MM, Convert__regZERO__regZERO, Feature_InMicroMips, {  }, },
  { 6831 /* nop */, Mips::SLL_MMR6, Convert__regZERO__regZERO__imm_95_0, Feature_HasMicroMips32r6, {  }, },
  { 6835 /* nor */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6835 /* nor */, Mips::NOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6835 /* nor */, Mips::NOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6835 /* nor */, Mips::NORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm321_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32 }, },
  { 6839 /* nor.v */, Mips::NOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6845 /* nori.b */, Mips::NORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 6852 /* not */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__regZERO, Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 6852 /* not */, Mips::NOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__regZERO, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6852 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6852 /* not */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6852 /* not */, Mips::NOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6852 /* not */, Mips::NOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6856 /* not16 */, Mips::NOT16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6856 /* not16 */, Mips::NOT16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6862 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6862 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6862 /* or */, Mips::OR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6862 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6862 /* or */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6862 /* or */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6862 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 6862 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6862 /* or */, Mips::OR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6862 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6862 /* or */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6862 /* or */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6862 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 6865 /* or.v */, Mips::OR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6870 /* or16 */, Mips::OR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6870 /* or16 */, Mips::OR16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6875 /* ori */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6875 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6875 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6875 /* ori */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6875 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6875 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 6879 /* ori.b */, Mips::ORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 6885 /* packrl.ph */, Mips::PACKRL_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6885 /* packrl.ph */, Mips::PACKRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6895 /* pause */, Mips::PAUSE, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32r2, {  }, },
  { 6895 /* pause */, Mips::PAUSE_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 6895 /* pause */, Mips::PAUSE_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 6901 /* pckev.b */, Mips::PCKEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6909 /* pckev.d */, Mips::PCKEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6917 /* pckev.h */, Mips::PCKEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6925 /* pckev.w */, Mips::PCKEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6933 /* pckod.b */, Mips::PCKOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6941 /* pckod.d */, Mips::PCKOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6949 /* pckod.h */, Mips::PCKOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6957 /* pckod.w */, Mips::PCKOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6965 /* pcnt.b */, Mips::PCNT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6972 /* pcnt.d */, Mips::PCNT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6979 /* pcnt.h */, Mips::PCNT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6986 /* pcnt.w */, Mips::PCNT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6993 /* pick.ph */, Mips::PICK_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6993 /* pick.ph */, Mips::PICK_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7001 /* pick.qb */, Mips::PICK_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7001 /* pick.qb */, Mips::PICK_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7009 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasCnMips, { MCK_GPR32AsmReg }, },
  { 7009 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7013 /* preceq.w.phl */, Mips::PRECEQ_W_PHL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7013 /* preceq.w.phl */, Mips::PRECEQ_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7026 /* preceq.w.phr */, Mips::PRECEQ_W_PHR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7026 /* preceq.w.phr */, Mips::PRECEQ_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7039 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7039 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7054 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7054 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7070 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7070 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7085 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7085 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7101 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7101 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7115 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7115 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7130 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7130 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7144 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7144 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7159 /* precr.qb.ph */, Mips::PRECR_QB_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7159 /* precr.qb.ph */, Mips::PRECR_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7171 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7171 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7186 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7186 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7203 /* precrq.ph.w */, Mips::PRECRQ_PH_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7203 /* precrq.ph.w */, Mips::PRECRQ_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7215 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7215 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7228 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7228 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7243 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7243 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7259 /* pref */, Mips::PREF_R6, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 7259 /* pref */, Mips::PREF, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7259 /* pref */, Mips::PREF_MMR6, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7259 /* pref */, Mips::PREF_MM, Convert__Mem2_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7264 /* prefe */, Mips::PREFE, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasEVA, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 7264 /* prefe */, Mips::PREFE_MMR6, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 7264 /* prefe */, Mips::PREFE_MM, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 7270 /* prefx */, Mips::PREFX_MM, Convert__GPR32AsmReg1_3__GPR32AsmReg1_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7276 /* prepend */, Mips::PREPEND_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7276 /* prepend */, Mips::PREPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7284 /* raddu.w.qb */, Mips::RADDU_W_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7284 /* raddu.w.qb */, Mips::RADDU_W_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7295 /* rddsp */, Mips::RDDSP_MM, Convert__GPR32AsmReg1_0__ConstantUImm7_01_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm7_0 }, },
  { 7295 /* rddsp */, Mips::RDDSP, Convert__GPR32AsmReg1_0__ConstantUImm10_01_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 7301 /* rdhwr */, Mips::RDHWR_MM, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7301 /* rdhwr */, Mips::RDHWR, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7301 /* rdhwr */, Mips::RDHWR_MMR6, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__imm_95_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7301 /* rdhwr */, Mips::RDHWR_MMR6, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg, MCK_ConstantUImm3_0 }, },
  { 7307 /* rdpgpr */, Mips::RDPGPR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7314 /* recip.d */, Mips::RECIP_D_MM, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 7314 /* recip.d */, Mips::RECIP_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7322 /* recip.s */, Mips::RECIP_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7322 /* recip.s */, Mips::RECIP_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7330 /* repl.ph */, Mips::REPL_PH_MM, Convert__GPR32AsmReg1_0__ConstantUImm10_01_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 7330 /* repl.ph */, Mips::REPL_PH, Convert__GPR32AsmReg1_0__ConstantUImm10_01_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 7338 /* repl.qb */, Mips::REPL_QB_MM, Convert__GPR32AsmReg1_0__ConstantUImm8_01_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm8_0 }, },
  { 7338 /* repl.qb */, Mips::REPL_QB, Convert__GPR32AsmReg1_0__ConstantUImm8_01_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ConstantUImm8_0 }, },
  { 7346 /* replv.ph */, Mips::REPLV_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7346 /* replv.ph */, Mips::REPLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7355 /* replv.qb */, Mips::REPLV_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7355 /* replv.qb */, Mips::REPLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7364 /* rint.d */, Mips::RINT_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7364 /* rint.d */, Mips::RINT_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7371 /* rint.s */, Mips::RINT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7371 /* rint.s */, Mips::RINT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7378 /* rol */, Mips::ROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7378 /* rol */, Mips::ROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, 0, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 7378 /* rol */, Mips::ROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7378 /* rol */, Mips::ROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 7382 /* ror */, Mips::ROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7382 /* ror */, Mips::RORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm161_1, 0, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 7382 /* ror */, Mips::ROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7382 /* ror */, Mips::RORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 7386 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7386 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7386 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7386 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7386 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7391 /* rotrv */, Mips::ROTRV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7391 /* rotrv */, Mips::ROTRV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7397 /* round.l.d */, Mips::ROUND_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7397 /* round.l.d */, Mips::ROUND_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7407 /* round.l.s */, Mips::ROUND_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 7407 /* round.l.s */, Mips::ROUND_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 7417 /* round.w.d */, Mips::ROUND_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 7417 /* round.w.d */, Mips::ROUND_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 7417 /* round.w.d */, Mips::ROUND_W_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7427 /* round.w.s */, Mips::ROUND_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7427 /* round.w.s */, Mips::ROUND_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7437 /* rsqrt.d */, Mips::RSQRT_D_MM, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 7437 /* rsqrt.d */, Mips::RSQRT_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7445 /* rsqrt.s */, Mips::RSQRT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7445 /* rsqrt.s */, Mips::RSQRT_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7453 /* s.d */, Mips::SDC1, Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1, Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7453 /* s.d */, Mips::SDC164, Convert__FGR64AsmReg1_0__MemOffsetSimm162_1, Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7457 /* s.s */, Mips::SWC1, Convert__FGR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 7461 /* sat_s.b */, Mips::SAT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 7469 /* sat_s.d */, Mips::SAT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 7477 /* sat_s.h */, Mips::SAT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 7485 /* sat_s.w */, Mips::SAT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 7493 /* sat_u.b */, Mips::SAT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 7501 /* sat_u.d */, Mips::SAT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 7509 /* sat_u.h */, Mips::SAT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 7517 /* sat_u.w */, Mips::SAT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 7525 /* sb */, Mips::SB_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7525 /* sb */, Mips::SB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7525 /* sb */, Mips::SB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7525 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__SImm161_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_SImm16 }, },
  { 7528 /* sb16 */, Mips::SB16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7528 /* sb16 */, Mips::SB16_MMR6, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7533 /* sbe */, Mips::SBE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7533 /* sbe */, Mips::SBE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7533 /* sbe */, Mips::SBE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7537 /* sc */, Mips::SC64_R6, Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7537 /* sc */, Mips::SC_R6, Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7537 /* sc */, Mips::SC, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7537 /* sc */, Mips::SC64, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7537 /* sc */, Mips::SC_MM, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7540 /* scd */, Mips::SCD_R6, Convert__GPR64AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_MemOffsetSimm9 }, },
  { 7540 /* scd */, Mips::SCD, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7544 /* sce */, Mips::SCE, Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7544 /* sce */, Mips::SCE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7544 /* sce */, Mips::SCE_MM, Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7548 /* sd */, Mips::SDMacro, Convert__GPR32AsmReg1_0__MemOffsetSimm162_1, Feature_NotMips3, { MCK_GPR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 7548 /* sd */, Mips::SD, Convert__GPR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7548 /* sd */, Mips::SD_MM64R6, Convert__GPR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7551 /* sdbbp */, Mips::SDBBP, Convert__imm_95_0, Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, {  }, },
  { 7551 /* sdbbp */, Mips::SDBBP_R6, Convert__imm_95_0, Feature_HasMips32r6|Feature_NotInMicroMips, {  }, },
  { 7551 /* sdbbp */, Mips::SDBBP_MMR6, Convert__imm_95_0, Feature_HasMicroMips32r6, {  }, },
  { 7551 /* sdbbp */, Mips::SDBBP_MM, Convert__ConstantUImm10_01_0, Feature_InMicroMips, { MCK_ConstantUImm10_0 }, },
  { 7551 /* sdbbp */, Mips::SDBBP, Convert__ConstantUImm20_01_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_ConstantUImm20_0 }, },
  { 7551 /* sdbbp */, Mips::SDBBP_R6, Convert__ConstantUImm20_01_0, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_ConstantUImm20_0 }, },
  { 7551 /* sdbbp */, Mips::SDBBP_MMR6, Convert__ConstantUImm20_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm20_0 }, },
  { 7557 /* sdbbp16 */, Mips::SDBBP16_MM, Convert__ConstantUImm4_01_0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm4_0 }, },
  { 7557 /* sdbbp16 */, Mips::SDBBP16_MMR6, Convert__ConstantUImm4_01_0, Feature_HasMicroMips32r6, { MCK_ConstantUImm4_0 }, },
  { 7565 /* sdc1 */, Mips::SDC1, Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7565 /* sdc1 */, Mips::SDC1_MM, Convert__AFGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_AFGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7565 /* sdc1 */, Mips::SDC164, Convert__FGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7565 /* sdc1 */, Mips::SDC1_D64_MMR6, Convert__FGR64AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_MemOffsetSimm16 }, },
  { 7570 /* sdc2 */, Mips::SDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 7570 /* sdc2 */, Mips::SDC2_MMR6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 7570 /* sdc2 */, Mips::SDC2, Convert__COP2AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm16 }, },
  { 7575 /* sdc3 */, Mips::SDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 7580 /* sdl */, Mips::SDL, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7584 /* sdr */, Mips::SDR, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7588 /* sdxc1 */, Mips::SDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7588 /* sdxc1 */, Mips::SDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7594 /* seb */, Mips::SebRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7594 /* seb */, Mips::SEB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 7594 /* seb */, Mips::SEB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 7594 /* seb */, Mips::SEB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 7594 /* seb */, Mips::SEB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7594 /* seb */, Mips::SEB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7594 /* seb */, Mips::SEB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7598 /* seh */, Mips::SehRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7598 /* seh */, Mips::SEH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 7598 /* seh */, Mips::SEH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 7598 /* seh */, Mips::SEH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 7598 /* seh */, Mips::SEH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7598 /* seh */, Mips::SEH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7598 /* seh */, Mips::SEH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7602 /* sel.d */, Mips::SEL_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7602 /* sel.d */, Mips::SEL_D_MMR6, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7608 /* sel.s */, Mips::SEL_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7608 /* sel.s */, Mips::SEL_S_MMR6, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7614 /* seleqz */, Mips::SELEQZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7614 /* seleqz */, Mips::SELEQZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7614 /* seleqz */, Mips::SELEQZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7621 /* seleqz.d */, Mips::SELEQZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7621 /* seleqz.d */, Mips::SELEQZ_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7630 /* seleqz.s */, Mips::SELEQZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7630 /* seleqz.s */, Mips::SELEQZ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7639 /* selnez */, Mips::SELNEZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7639 /* selnez */, Mips::SELNEZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7639 /* selnez */, Mips::SELNEZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7646 /* selnez.d */, Mips::SELNEZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7646 /* selnez.d */, Mips::SELNEZ_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7655 /* selnez.s */, Mips::SELNEZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7655 /* selnez.s */, Mips::SELNEZ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7664 /* seq */, Mips::SEQMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_NotCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7664 /* seq */, Mips::SEQIMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm321_1, Feature_NotCnMips, { MCK_GPR32AsmReg, MCK_SImm32 }, },
  { 7664 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7664 /* seq */, Mips::SEQMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_NotCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7664 /* seq */, Mips::SEQIMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_NotCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 7664 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7668 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantSImm10_01_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantSImm10_0 }, },
  { 7668 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantSImm10_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantSImm10_0 }, },
  { 7673 /* sgt */, Mips::SLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_0, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7673 /* sgt */, Mips::SLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7673 /* sgt */, Mips::SLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_2__GPR32AsmReg1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7673 /* sgt */, Mips::SLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_2__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7677 /* sgtu */, Mips::SLTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_0, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7677 /* sgtu */, Mips::SLTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7677 /* sgtu */, Mips::SLTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_2__GPR32AsmReg1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7677 /* sgtu */, Mips::SLTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_2__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7682 /* sh */, Mips::SH_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7682 /* sh */, Mips::SH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7682 /* sh */, Mips::SH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7682 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__SImm161_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_SImm16 }, },
  { 7685 /* sh16 */, Mips::SH16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7685 /* sh16 */, Mips::SH16_MMR6, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7690 /* she */, Mips::SHE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7690 /* she */, Mips::SHE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7690 /* she */, Mips::SHE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7694 /* shf.b */, Mips::SHF_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 7700 /* shf.h */, Mips::SHF_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 7706 /* shf.w */, Mips::SHF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 7712 /* shilo */, Mips::SHILO_MM, Convert__ACC64DSPAsmReg1_0__ConstantSImm6_01_1__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_ConstantSImm6_0 }, },
  { 7712 /* shilo */, Mips::SHILO, Convert__ACC64DSPAsmReg1_0__ConstantSImm6_01_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_ConstantSImm6_0 }, },
  { 7718 /* shilov */, Mips::SHILOV_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 7718 /* shilov */, Mips::SHILOV, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 7725 /* shll.ph */, Mips::SHLL_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7725 /* shll.ph */, Mips::SHLL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7733 /* shll.qb */, Mips::SHLL_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7733 /* shll.qb */, Mips::SHLL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7741 /* shll_s.ph */, Mips::SHLL_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7741 /* shll_s.ph */, Mips::SHLL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7751 /* shll_s.w */, Mips::SHLL_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7751 /* shll_s.w */, Mips::SHLL_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7760 /* shllv.ph */, Mips::SHLLV_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7760 /* shllv.ph */, Mips::SHLLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7769 /* shllv.qb */, Mips::SHLLV_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7769 /* shllv.qb */, Mips::SHLLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7778 /* shllv_s.ph */, Mips::SHLLV_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7778 /* shllv_s.ph */, Mips::SHLLV_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7789 /* shllv_s.w */, Mips::SHLLV_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7789 /* shllv_s.w */, Mips::SHLLV_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7799 /* shra.ph */, Mips::SHRA_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7799 /* shra.ph */, Mips::SHRA_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7807 /* shra.qb */, Mips::SHRA_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7807 /* shra.qb */, Mips::SHRA_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7815 /* shra_r.ph */, Mips::SHRA_R_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7815 /* shra_r.ph */, Mips::SHRA_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7825 /* shra_r.qb */, Mips::SHRA_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7825 /* shra_r.qb */, Mips::SHRA_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7835 /* shra_r.w */, Mips::SHRA_R_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7835 /* shra_r.w */, Mips::SHRA_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7844 /* shrav.ph */, Mips::SHRAV_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7844 /* shrav.ph */, Mips::SHRAV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7853 /* shrav.qb */, Mips::SHRAV_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7853 /* shrav.qb */, Mips::SHRAV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7862 /* shrav_r.ph */, Mips::SHRAV_R_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7862 /* shrav_r.ph */, Mips::SHRAV_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7873 /* shrav_r.qb */, Mips::SHRAV_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7873 /* shrav_r.qb */, Mips::SHRAV_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7884 /* shrav_r.w */, Mips::SHRAV_R_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7884 /* shrav_r.w */, Mips::SHRAV_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7894 /* shrl.ph */, Mips::SHRL_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7894 /* shrl.ph */, Mips::SHRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7902 /* shrl.qb */, Mips::SHRL_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7902 /* shrl.qb */, Mips::SHRL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7910 /* shrlv.ph */, Mips::SHRLV_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7910 /* shrlv.ph */, Mips::SHRLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7919 /* shrlv.qb */, Mips::SHRLV_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7919 /* shrlv.qb */, Mips::SHRLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7928 /* sld.b */, Mips::SLD_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7934 /* sld.d */, Mips::SLD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7940 /* sld.h */, Mips::SLD_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7946 /* sld.w */, Mips::SLD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7952 /* sldi.b */, Mips::SLDI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_ }, },
  { 7959 /* sldi.d */, Mips::SLDI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm1_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm1_0, MCK__93_ }, },
  { 7966 /* sldi.h */, Mips::SLDI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_ }, },
  { 7973 /* sldi.w */, Mips::SLDI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_ }, },
  { 7980 /* sll */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7980 /* sll */, Mips::SLLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7980 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7980 /* sll */, Mips::SLL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7980 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7980 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7980 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_ConstantUImm5_0 }, },
  { 7980 /* sll */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7980 /* sll */, Mips::SLLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7980 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7980 /* sll */, Mips::SLL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7980 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7984 /* sll.b */, Mips::SLL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7990 /* sll.d */, Mips::SLL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7996 /* sll.h */, Mips::SLL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8002 /* sll.w */, Mips::SLL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8008 /* sll16 */, Mips::SLL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 8008 /* sll16 */, Mips::SLL16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 8014 /* slli.b */, Mips::SLLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 8021 /* slli.d */, Mips::SLLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 8028 /* slli.h */, Mips::SLLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 8035 /* slli.w */, Mips::SLLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8042 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8042 /* sllv */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8042 /* sllv */, Mips::SLLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8047 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8047 /* slt */, Mips::SLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8047 /* slt */, Mips::SLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8047 /* slt */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 8047 /* slt */, Mips::SLTi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 8051 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16 }, },
  { 8051 /* slti */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8051 /* slti */, Mips::SLTi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8051 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 8056 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16 }, },
  { 8056 /* sltiu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8056 /* sltiu */, Mips::SLTiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8056 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__SImm161_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_SImm16, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 8062 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8062 /* sltu */, Mips::SLTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8062 /* sltu */, Mips::SLTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8062 /* sltu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 8062 /* sltu */, Mips::SLTiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 8067 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8067 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8071 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantSImm10_01_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantSImm10_0 }, },
  { 8071 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantSImm10_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantSImm10_0 }, },
  { 8076 /* splat.b */, Mips::SPLAT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 8084 /* splat.d */, Mips::SPLAT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 8092 /* splat.h */, Mips::SPLAT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 8100 /* splat.w */, Mips::SPLAT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 8108 /* splati.b */, Mips::SPLATI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_ }, },
  { 8117 /* splati.d */, Mips::SPLATI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm1_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm1_0, MCK__93_ }, },
  { 8126 /* splati.h */, Mips::SPLATI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_ }, },
  { 8135 /* splati.w */, Mips::SPLATI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_ }, },
  { 8144 /* sqrt.d */, Mips::FSQRT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8144 /* sqrt.d */, Mips::SQRT_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8144 /* sqrt.d */, Mips::FSQRT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8151 /* sqrt.s */, Mips::FSQRT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8151 /* sqrt.s */, Mips::FSQRT_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8151 /* sqrt.s */, Mips::SQRT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8158 /* sra */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8158 /* sra */, Mips::SRAV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8158 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8158 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8158 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8158 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_ConstantUImm5_0 }, },
  { 8158 /* sra */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8158 /* sra */, Mips::SRAV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8158 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8158 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8162 /* sra.b */, Mips::SRA_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8168 /* sra.d */, Mips::SRA_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8174 /* sra.h */, Mips::SRA_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8180 /* sra.w */, Mips::SRA_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8186 /* srai.b */, Mips::SRAI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 8193 /* srai.d */, Mips::SRAI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 8200 /* srai.h */, Mips::SRAI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 8207 /* srai.w */, Mips::SRAI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8214 /* srar.b */, Mips::SRAR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8221 /* srar.d */, Mips::SRAR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8228 /* srar.h */, Mips::SRAR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8235 /* srar.w */, Mips::SRAR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8242 /* srari.b */, Mips::SRARI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 8250 /* srari.d */, Mips::SRARI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 8258 /* srari.h */, Mips::SRARI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 8266 /* srari.w */, Mips::SRARI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8274 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8274 /* srav */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8274 /* srav */, Mips::SRAV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8279 /* srl */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8279 /* srl */, Mips::SRLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8279 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8279 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8279 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8279 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_ConstantUImm5_0 }, },
  { 8279 /* srl */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8279 /* srl */, Mips::SRLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8279 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8279 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8283 /* srl.b */, Mips::SRL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8289 /* srl.d */, Mips::SRL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8295 /* srl.h */, Mips::SRL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8301 /* srl.w */, Mips::SRL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8307 /* srl16 */, Mips::SRL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 8307 /* srl16 */, Mips::SRL16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 8313 /* srli.b */, Mips::SRLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 8320 /* srli.d */, Mips::SRLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 8327 /* srli.h */, Mips::SRLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 8334 /* srli.w */, Mips::SRLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8341 /* srlr.b */, Mips::SRLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8348 /* srlr.d */, Mips::SRLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8355 /* srlr.h */, Mips::SRLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8362 /* srlr.w */, Mips::SRLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8369 /* srlri.b */, Mips::SRLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 8377 /* srlri.d */, Mips::SRLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 8385 /* srlri.h */, Mips::SRLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 8393 /* srlri.w */, Mips::SRLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8401 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8401 /* srlv */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8401 /* srlv */, Mips::SRLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8406 /* ssnop */, Mips::SSNOP_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 8406 /* ssnop */, Mips::SSNOP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8406 /* ssnop */, Mips::SSNOP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8412 /* st.b */, Mips::ST_B, Convert__MSA128AsmReg1_0__MemOffsetSimm102_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10 }, },
  { 8417 /* st.d */, Mips::ST_D, Convert__MSA128AsmReg1_0__MemOffsetSimm10_32_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10_3 }, },
  { 8422 /* st.h */, Mips::ST_H, Convert__MSA128AsmReg1_0__MemOffsetSimm10_12_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10_1 }, },
  { 8427 /* st.w */, Mips::ST_W, Convert__MSA128AsmReg1_0__MemOffsetSimm10_22_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MemOffsetSimm10_2 }, },
  { 8432 /* sub */, Mips::SUB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8432 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8432 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8432 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8432 /* sub */, Mips::SUB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8432 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8432 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8432 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8436 /* sub.d */, Mips::FSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8436 /* sub.d */, Mips::FSUB_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8436 /* sub.d */, Mips::FSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8442 /* sub.s */, Mips::FSUB_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8442 /* sub.s */, Mips::FSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8448 /* subq.ph */, Mips::SUBQ_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8448 /* subq.ph */, Mips::SUBQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8456 /* subq_s.ph */, Mips::SUBQ_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8456 /* subq_s.ph */, Mips::SUBQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8466 /* subq_s.w */, Mips::SUBQ_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8466 /* subq_s.w */, Mips::SUBQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8475 /* subqh.ph */, Mips::SUBQH_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8475 /* subqh.ph */, Mips::SUBQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8484 /* subqh.w */, Mips::SUBQH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8484 /* subqh.w */, Mips::SUBQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8492 /* subqh_r.ph */, Mips::SUBQH_R_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8492 /* subqh_r.ph */, Mips::SUBQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8503 /* subqh_r.w */, Mips::SUBQH_R_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8503 /* subqh_r.w */, Mips::SUBQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8513 /* subs_s.b */, Mips::SUBS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8522 /* subs_s.d */, Mips::SUBS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8531 /* subs_s.h */, Mips::SUBS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8540 /* subs_s.w */, Mips::SUBS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8549 /* subs_u.b */, Mips::SUBS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8558 /* subs_u.d */, Mips::SUBS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8567 /* subs_u.h */, Mips::SUBS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8576 /* subs_u.w */, Mips::SUBS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8585 /* subsus_u.b */, Mips::SUBSUS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8596 /* subsus_u.d */, Mips::SUBSUS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8607 /* subsus_u.h */, Mips::SUBSUS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8618 /* subsus_u.w */, Mips::SUBSUS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8629 /* subsuu_s.b */, Mips::SUBSUU_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8640 /* subsuu_s.d */, Mips::SUBSUU_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8651 /* subsuu_s.h */, Mips::SUBSUU_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8662 /* subsuu_s.w */, Mips::SUBSUU_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8673 /* subu */, Mips::SUBU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8673 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8673 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8673 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, 0, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8673 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8673 /* subu */, Mips::SUBU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8673 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8673 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8673 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8678 /* subu.ph */, Mips::SUBU_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8678 /* subu.ph */, Mips::SUBU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8686 /* subu.qb */, Mips::SUBU_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8686 /* subu.qb */, Mips::SUBU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8694 /* subu16 */, Mips::SUBU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8694 /* subu16 */, Mips::SUBU16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8701 /* subu_s.ph */, Mips::SUBU_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8701 /* subu_s.ph */, Mips::SUBU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8711 /* subu_s.qb */, Mips::SUBU_S_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8711 /* subu_s.qb */, Mips::SUBU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8721 /* subuh.qb */, Mips::SUBUH_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8721 /* subuh.qb */, Mips::SUBUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8730 /* subuh_r.qb */, Mips::SUBUH_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8730 /* subuh_r.qb */, Mips::SUBUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8741 /* subv.b */, Mips::SUBV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8748 /* subv.d */, Mips::SUBV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8755 /* subv.h */, Mips::SUBV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8762 /* subv.w */, Mips::SUBV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8769 /* subvi.b */, Mips::SUBVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8777 /* subvi.d */, Mips::SUBVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8785 /* subvi.h */, Mips::SUBVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8793 /* subvi.w */, Mips::SUBVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8801 /* suxc1 */, Mips::SUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8801 /* suxc1 */, Mips::SUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8807 /* sw */, Mips::SWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 8807 /* sw */, Mips::SWSP_MMR6, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 8807 /* sw */, Mips::SW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8807 /* sw */, Mips::SW_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8807 /* sw */, Mips::SW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8807 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__SImm161_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_SImm16 }, },
  { 8807 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_1__SImm161_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_SImm16 }, },
  { 8810 /* sw16 */, Mips::SW16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 8810 /* sw16 */, Mips::SW16_MMR6, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 8815 /* swc1 */, Mips::SWC1, Convert__FGR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 8815 /* swc1 */, Mips::SWC1_MM, Convert__FGR32AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_MemOffsetSimm16 }, },
  { 8820 /* swc2 */, Mips::SWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 8820 /* swc2 */, Mips::SWC2_MMR6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 8820 /* swc2 */, Mips::SWC2, Convert__COP2AsmReg1_0__MemOffsetSimm162_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_MemOffsetSimm16 }, },
  { 8825 /* swc3 */, Mips::SWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 8830 /* swe */, Mips::SWE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8830 /* swe */, Mips::SWE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8830 /* swe */, Mips::SWE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8834 /* swl */, Mips::SWL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8834 /* swl */, Mips::SWL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8838 /* swle */, Mips::SWLE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8838 /* swle */, Mips::SWLE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8843 /* swm */, Mips::SWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8847 /* swm16 */, Mips::SWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips|Feature_NotMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 8847 /* swm16 */, Mips::SWM16_MMR6, Convert__RegList161_0__MemOffsetUimm42_1, Feature_HasMicroMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 8853 /* swm32 */, Mips::SWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8859 /* swp */, Mips::SWP_MMR6, Convert__RegPair2_0__MemOffsetSimm122_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_RegPair, MCK_MemOffsetSimm12 }, },
  { 8859 /* swp */, Mips::SWP_MM, Convert__RegPair2_0__MemOffsetSimm122_1, Feature_InMicroMips, { MCK_RegPair, MCK_MemOffsetSimm12 }, },
  { 8863 /* swr */, Mips::SWR, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8863 /* swr */, Mips::SWR_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8867 /* swre */, Mips::SWRE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8867 /* swre */, Mips::SWRE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8872 /* swxc1 */, Mips::SWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8878 /* sync */, Mips::SYNC, Convert__imm_95_0, Feature_HasMips2, {  }, },
  { 8878 /* sync */, Mips::SYNC_MMR6, Convert__imm_95_0, Feature_HasMicroMips32r6, {  }, },
  { 8878 /* sync */, Mips::SYNC, Convert__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_ConstantUImm5_0 }, },
  { 8878 /* sync */, Mips::SYNC_MMR6, Convert__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0 }, },
  { 8878 /* sync */, Mips::SYNC_MM, Convert__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0 }, },
  { 8883 /* synci */, Mips::SYNCI, Convert__MemOffsetSimm162_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_MemOffsetSimm16 }, },
  { 8883 /* synci */, Mips::SYNCI_MMR6, Convert__MemOffsetSimm162_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_MemOffsetSimm16 }, },
  { 8883 /* synci */, Mips::SYNCI_MM, Convert__MemOffsetSimm162_0, Feature_InMicroMips, { MCK_MemOffsetSimm16 }, },
  { 8889 /* synciobdma */, Mips::SYNC, Convert__imm_95_2, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8900 /* syncs */, Mips::SYNC, Convert__imm_95_6, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8906 /* syncw */, Mips::SYNC, Convert__imm_95_4, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8912 /* syncws */, Mips::SYNC, Convert__imm_95_5, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8919 /* syscall */, Mips::SYSCALL, Convert__imm_95_0, Feature_NotInMicroMips, {  }, },
  { 8919 /* syscall */, Mips::SYSCALL_MM, Convert__imm_95_0, Feature_InMicroMips, {  }, },
  { 8919 /* syscall */, Mips::SYSCALL_MM, Convert__ConstantUImm10_01_0, Feature_InMicroMips, { MCK_ConstantUImm10_0 }, },
  { 8919 /* syscall */, Mips::SYSCALL, Convert__ConstantUImm20_01_0, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_ConstantUImm20_0 }, },
  { 8927 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8927 /* teq */, Mips::TEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8927 /* teq */, Mips::TEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 8927 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 8931 /* teqi */, Mips::TEQI, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8931 /* teqi */, Mips::TEQI_MM, Convert__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8936 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8936 /* tge */, Mips::TGE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8936 /* tge */, Mips::TGE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 8936 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 8940 /* tgei */, Mips::TGEI, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8940 /* tgei */, Mips::TGEI_MM, Convert__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8945 /* tgeiu */, Mips::TGEIU, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8945 /* tgeiu */, Mips::TGEIU_MM, Convert__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8951 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8951 /* tgeu */, Mips::TGEU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8951 /* tgeu */, Mips::TGEU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 8951 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 8956 /* tlbinv */, Mips::TLBINV, Convert_NoOperands, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, {  }, },
  { 8956 /* tlbinv */, Mips::TLBINV_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 8963 /* tlbinvf */, Mips::TLBINVF, Convert_NoOperands, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, {  }, },
  { 8963 /* tlbinvf */, Mips::TLBINVF_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 8971 /* tlbp */, Mips::TLBP, Convert_NoOperands, Feature_HasStdEnc|Feature_NotInMicroMips, {  }, },
  { 8971 /* tlbp */, Mips::TLBP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8976 /* tlbr */, Mips::TLBR, Convert_NoOperands, Feature_HasStdEnc|Feature_NotInMicroMips, {  }, },
  { 8976 /* tlbr */, Mips::TLBR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8981 /* tlbwi */, Mips::TLBWI, Convert_NoOperands, Feature_HasStdEnc|Feature_NotInMicroMips, {  }, },
  { 8981 /* tlbwi */, Mips::TLBWI_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8987 /* tlbwr */, Mips::TLBWR, Convert_NoOperands, Feature_HasStdEnc|Feature_NotInMicroMips, {  }, },
  { 8987 /* tlbwr */, Mips::TLBWR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8993 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8993 /* tlt */, Mips::TLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8993 /* tlt */, Mips::TLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 8993 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 8997 /* tlti */, Mips::TLTI, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 8997 /* tlti */, Mips::TLTI_MM, Convert__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 9002 /* tltiu */, Mips::TTLTIU, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 9002 /* tltiu */, Mips::TLTIU_MM, Convert__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 9008 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9008 /* tltu */, Mips::TLTU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9008 /* tltu */, Mips::TLTU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 9008 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 9013 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9013 /* tne */, Mips::TNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9013 /* tne */, Mips::TNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 9013 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm10_01_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 9017 /* tnei */, Mips::TNEI, Convert__GPR32AsmReg1_0__SImm161_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 9017 /* tnei */, Mips::TNEI_MM, Convert__GPR32AsmReg1_0__SImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_SImm16 }, },
  { 9022 /* trunc.l.d */, Mips::TRUNC_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 9022 /* trunc.l.d */, Mips::TRUNC_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 9032 /* trunc.l.s */, Mips::TRUNC_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 9032 /* trunc.l.s */, Mips::TRUNC_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 9042 /* trunc.w.d */, Mips::TRUNC_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 9042 /* trunc.w.d */, Mips::TRUNC_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 9042 /* trunc.w.d */, Mips::TRUNC_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 9042 /* trunc.w.d */, Mips::PseudoTRUNC_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2, Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 9042 /* trunc.w.d */, Mips::PseudoTRUNC_W_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2, Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 9052 /* trunc.w.s */, Mips::TRUNC_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 9052 /* trunc.w.s */, Mips::TRUNC_W_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 9052 /* trunc.w.s */, Mips::TRUNC_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 9052 /* trunc.w.s */, Mips::PseudoTRUNC_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 9062 /* ulh */, Mips::Ulh, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 9066 /* ulhu */, Mips::Ulhu, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 9071 /* ulw */, Mips::Ulw, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 9075 /* ush */, Mips::Ush, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 9079 /* usw */, Mips::Usw, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 9083 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 9083 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 9090 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 9090 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 9095 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 9095 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 9101 /* vshf.b */, Mips::VSHF_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 9108 /* vshf.d */, Mips::VSHF_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 9115 /* vshf.h */, Mips::VSHF_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 9122 /* vshf.w */, Mips::VSHF_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 9129 /* wait */, Mips::WAIT, Convert_NoOperands, Feature_NotInMicroMips, {  }, },
  { 9129 /* wait */, Mips::WAIT_MM, Convert__imm_95_0, Feature_InMicroMips, {  }, },
  { 9129 /* wait */, Mips::WAIT_MMR6, Convert__ConstantUImm10_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm10_0 }, },
  { 9129 /* wait */, Mips::WAIT_MM, Convert__ConstantUImm10_01_0, Feature_InMicroMips, { MCK_ConstantUImm10_0 }, },
  { 9134 /* wrdsp */, Mips::WRDSP, Convert__GPR32AsmReg1_0__imm_95_31, Feature_HasDSP|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 9134 /* wrdsp */, Mips::WRDSP_MM, Convert__GPR32AsmReg1_0__imm_95_31, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 9134 /* wrdsp */, Mips::WRDSP_MM, Convert__GPR32AsmReg1_0__ConstantUImm7_01_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm7_0 }, },
  { 9134 /* wrdsp */, Mips::WRDSP, Convert__GPR32AsmReg1_0__ConstantUImm10_01_1, Feature_HasDSP|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 9140 /* wrpgpr */, Mips::WRPGPR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9147 /* wsbh */, Mips::WSBH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9147 /* wsbh */, Mips::WSBH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9147 /* wsbh */, Mips::WSBH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9152 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 9152 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9152 /* xor */, Mips::XOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9152 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9152 /* xor */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9152 /* xor */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9152 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__SImm32_Relaxed1_1, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 9152 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9152 /* xor */, Mips::XOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9152 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9152 /* xor */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9152 /* xor */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9152 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__SImm32_Relaxed1_2, Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_SImm32_Relaxed }, },
  { 9156 /* xor.v */, Mips::XOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 9162 /* xor16 */, Mips::XOR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 9162 /* xor16 */, Mips::XOR16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 9168 /* xori */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9168 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9168 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__UImm161_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9168 /* xori */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9168 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9168 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__UImm161_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_UImm16 }, },
  { 9173 /* xori.b */, Mips::XORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
};

bool MipsAsmParser::
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

unsigned MipsAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 9) {
    ErrorInfo = 9;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand&)*Operands[0]).getToken();

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
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 8; ++FormalIdx) {
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
    uint64_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[2815] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* abs */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4 /* abs.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 4 /* abs.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 4 /* abs.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 10 /* abs.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 10 /* abs.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 16 /* absq_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 16 /* absq_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 26 /* absq_s.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 26 /* absq_s.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 36 /* absq_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 36 /* absq_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 45 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 45 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 45 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 45 /* add */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 45 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 45 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 45 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 45 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 49 /* add.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 49 /* add.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 49 /* add.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 55 /* add.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 55 /* add.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 61 /* add_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 69 /* add_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 77 /* add_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 85 /* add_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 93 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 93 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 93 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 93 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 98 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 98 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 98 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 98 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 98 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 98 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 104 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 104 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 104 /* addiupc */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 112 /* addiur1sp */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 122 /* addiur2 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 130 /* addius5 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 146 /* addq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 146 /* addq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 154 /* addq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 154 /* addq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 164 /* addq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 164 /* addq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 173 /* addqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 173 /* addqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 182 /* addqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 182 /* addqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 190 /* addqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 190 /* addqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 201 /* addqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 201 /* addqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 211 /* adds_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 220 /* adds_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 229 /* adds_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 238 /* adds_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 247 /* adds_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 256 /* adds_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 265 /* adds_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 274 /* adds_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 283 /* adds_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 292 /* adds_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 301 /* adds_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 310 /* adds_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 319 /* addsc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 319 /* addsc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 325 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 325 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 325 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 325 /* addu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 325 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 325 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 325 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 325 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 330 /* addu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 330 /* addu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 338 /* addu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 338 /* addu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 346 /* addu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMicroMips32r6, 346 /* addu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 353 /* addu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 353 /* addu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 363 /* addu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 363 /* addu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 373 /* adduh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 373 /* adduh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 382 /* adduh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 382 /* adduh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 393 /* addv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 400 /* addv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 407 /* addv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 414 /* addv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 421 /* addvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 429 /* addvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 437 /* addvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 445 /* addvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 453 /* addwc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 453 /* addwc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 459 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 459 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 465 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 465 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 472 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 472 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 472 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 472 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 472 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 472 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 472 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 472 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 472 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 472 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 472 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 472 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 472 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 472 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 476 /* and.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 482 /* and16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 482 /* and16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 488 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 488 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 488 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 488 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 488 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 488 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 493 /* andi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 500 /* andi16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 500 /* andi16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 507 /* append */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 507 /* append */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 514 /* asub_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 523 /* asub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 532 /* asub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 541 /* asub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 550 /* asub_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 559 /* asub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 568 /* asub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 577 /* asub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 586 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 586 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 590 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 590 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 596 /* ave_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 604 /* ave_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 612 /* ave_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 620 /* ave_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 628 /* ave_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 636 /* ave_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 644 /* ave_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 652 /* ave_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 660 /* aver_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 669 /* aver_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 678 /* aver_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 687 /* aver_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 696 /* aver_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 705 /* aver_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 714 /* aver_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 723 /* aver_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 732 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 732 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotInMicroMips, 732 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 732 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 732 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 734 /* b16 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasCnMips, 738 /* baddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 738 /* baddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 744 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 744 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 748 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 748 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 753 /* balign */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 753 /* balign */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 760 /* bbit0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 760 /* bbit0 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 760 /* bbit0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 760 /* bbit0 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 766 /* bbit032 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 766 /* bbit032 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 774 /* bbit1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 774 /* bbit1 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 774 /* bbit1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 774 /* bbit1 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 780 /* bbit132 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 780 /* bbit132 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 788 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 788 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 791 /* bc16 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 796 /* bc1eqz */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 796 /* bc1eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 803 /* bc1eqzc */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 803 /* bc1eqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 811 /* bc1f */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 811 /* bc1f */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 811 /* bc1f */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 816 /* bc1fl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 816 /* bc1fl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 816 /* bc1fl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 822 /* bc1nez */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 822 /* bc1nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 829 /* bc1nezc */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 829 /* bc1nezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 837 /* bc1t */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 837 /* bc1t */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 837 /* bc1t */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 842 /* bc1tl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 842 /* bc1tl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 842 /* bc1tl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 848 /* bc2eqz */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 848 /* bc2eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 855 /* bc2eqzc */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 855 /* bc2eqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 863 /* bc2nez */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 863 /* bc2nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 870 /* bc2nezc */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 870 /* bc2nezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 878 /* bclr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 885 /* bclr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 892 /* bclr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 899 /* bclr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 906 /* bclri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 914 /* bclri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 922 /* bclri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 930 /* bclri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 938 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 938 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 938 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 938 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 938 /* beq */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 938 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 942 /* beqc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 942 /* beqc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 942 /* beqc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 942 /* beqc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 942 /* beqc */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 942 /* beqc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 947 /* beql */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 947 /* beql */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 952 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 952 /* beqz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 952 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 952 /* beqz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 952 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 952 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 957 /* beqz16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 957 /* beqz16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 964 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 964 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 964 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 964 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 972 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 972 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 972 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 972 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 972 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 972 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 972 /* beqzc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 972 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 978 /* beqzc16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 978 /* beqzc16 */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 986 /* beqzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 986 /* beqzl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 992 /* bge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 992 /* bge */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 992 /* bge */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 992 /* bge */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 996 /* bgec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 996 /* bgec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 996 /* bgec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 996 /* bgec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 996 /* bgec */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 996 /* bgec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1001 /* bgel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1001 /* bgel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1001 /* bgel */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1001 /* bgel */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1006 /* bgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1006 /* bgeu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1006 /* bgeu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1006 /* bgeu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1011 /* bgeuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1011 /* bgeuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1011 /* bgeuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1011 /* bgeuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1011 /* bgeuc */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1011 /* bgeuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1017 /* bgeul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1017 /* bgeul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1017 /* bgeul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1017 /* bgeul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1023 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1023 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1023 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1023 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1028 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1028 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1028 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1028 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1035 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1035 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1035 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1035 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1043 /* bgezall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1043 /* bgezall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1051 /* bgezals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1051 /* bgezals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1059 /* bgezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1059 /* bgezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1059 /* bgezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1059 /* bgezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1059 /* bgezc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1059 /* bgezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1065 /* bgezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1065 /* bgezl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1071 /* bgt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1071 /* bgt */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1071 /* bgt */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1071 /* bgt */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1075 /* bgtl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1075 /* bgtl */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1075 /* bgtl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1075 /* bgtl */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1080 /* bgtu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1080 /* bgtu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1080 /* bgtu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1080 /* bgtu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1085 /* bgtul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1085 /* bgtul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1085 /* bgtul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1085 /* bgtul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1091 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1091 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1091 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1091 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1096 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1096 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1096 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1096 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1104 /* bgtzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1104 /* bgtzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1104 /* bgtzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1104 /* bgtzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1104 /* bgtzc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1104 /* bgtzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1110 /* bgtzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1110 /* bgtzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1116 /* binsl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1124 /* binsl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1132 /* binsl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1140 /* binsl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1148 /* binsli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1157 /* binsli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1166 /* binsli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1175 /* binsli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1184 /* binsr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1192 /* binsr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1200 /* binsr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1208 /* binsr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1216 /* binsri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1225 /* binsri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1234 /* binsri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1243 /* binsri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 1252 /* bitrev */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1252 /* bitrev */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1259 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1259 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1267 /* ble */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1267 /* ble */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1267 /* ble */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1267 /* ble */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1271 /* blel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1271 /* blel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1271 /* blel */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1271 /* blel */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1276 /* bleu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1276 /* bleu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1276 /* bleu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1276 /* bleu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1281 /* bleul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1281 /* bleul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1281 /* bleul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1281 /* bleul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1287 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1287 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1287 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1287 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1292 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1292 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1292 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1292 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1300 /* blezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1300 /* blezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1300 /* blezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1300 /* blezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1300 /* blezc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1300 /* blezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1306 /* blezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1306 /* blezl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1312 /* blt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1312 /* blt */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1312 /* blt */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1312 /* blt */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1316 /* bltc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1316 /* bltc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1316 /* bltc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1316 /* bltc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1316 /* bltc */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1316 /* bltc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1321 /* bltl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1321 /* bltl */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1321 /* bltl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1321 /* bltl */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1326 /* bltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1326 /* bltu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1326 /* bltu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1326 /* bltu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1331 /* bltuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1331 /* bltuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1331 /* bltuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1331 /* bltuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1331 /* bltuc */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1331 /* bltuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1337 /* bltul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1337 /* bltul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1337 /* bltul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1337 /* bltul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1343 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1343 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1343 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1343 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1348 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1348 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1348 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1348 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1355 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1355 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1355 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1355 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1363 /* bltzall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1363 /* bltzall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1371 /* bltzals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1371 /* bltzals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1379 /* bltzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1379 /* bltzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1379 /* bltzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1379 /* bltzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1379 /* bltzc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1379 /* bltzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1385 /* bltzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1385 /* bltzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1391 /* bmnz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1398 /* bmnzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1406 /* bmz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1412 /* bmzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1419 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1419 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 1419 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 1419 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1419 /* bne */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1419 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1423 /* bnec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1423 /* bnec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1423 /* bnec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1423 /* bnec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1423 /* bnec */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1423 /* bnec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1428 /* bneg.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1435 /* bneg.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1442 /* bneg.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1449 /* bneg.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1456 /* bnegi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1464 /* bnegi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1472 /* bnegi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1480 /* bnegi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1488 /* bnel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1488 /* bnel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 1493 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1493 /* bnez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1493 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1493 /* bnez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1493 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 1493 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1498 /* bnez16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1498 /* bnez16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1505 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1505 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1505 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1505 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1513 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1513 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 1513 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 1513 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1513 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1513 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1513 /* bnezc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 1513 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 1519 /* bnezc16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 1519 /* bnezc16 */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1527 /* bnezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1527 /* bnezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1533 /* bnvc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1533 /* bnvc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1533 /* bnvc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1533 /* bnvc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1538 /* bnz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1538 /* bnz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1544 /* bnz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1544 /* bnz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1550 /* bnz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1550 /* bnz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1556 /* bnz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1556 /* bnz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1562 /* bnz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1562 /* bnz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1568 /* bovc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 1568 /* bovc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1568 /* bovc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1568 /* bovc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_InMicroMips, 1573 /* bposge32 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasDSP|Feature_NotInMicroMips, 1573 /* bposge32 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasDSPR3|Feature_InMicroMips, 1582 /* bposge32c */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1606 /* bsel.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1613 /* bseli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1621 /* bset.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1628 /* bset.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1635 /* bset.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1642 /* bset.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1649 /* bseti.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1657 /* bseti.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1665 /* bseti.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1673 /* bseti.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1693 /* bz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1693 /* bz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1698 /* bz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1698 /* bz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1703 /* bz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1703 /* bz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1708 /* bz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1708 /* bz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1713 /* bz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1713 /* bz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1718 /* c.eq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1718 /* c.eq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1725 /* c.eq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1732 /* c.f.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1732 /* c.f.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1738 /* c.f.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1744 /* c.le.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1744 /* c.le.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1751 /* c.le.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1758 /* c.lt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1758 /* c.lt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1765 /* c.lt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1772 /* c.nge.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1772 /* c.nge.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1780 /* c.nge.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1788 /* c.ngl.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1788 /* c.ngl.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1796 /* c.ngl.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1804 /* c.ngle.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1804 /* c.ngle.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1813 /* c.ngle.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1822 /* c.ngt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1822 /* c.ngt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1830 /* c.ngt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1838 /* c.ole.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1838 /* c.ole.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1846 /* c.ole.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1854 /* c.olt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1854 /* c.olt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1862 /* c.olt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1870 /* c.seq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1870 /* c.seq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1878 /* c.seq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1886 /* c.sf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1886 /* c.sf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1893 /* c.sf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1900 /* c.ueq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1900 /* c.ueq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1908 /* c.ueq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1916 /* c.ule.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1916 /* c.ule.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1924 /* c.ule.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1932 /* c.ult.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1932 /* c.ult.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1940 /* c.ult.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1948 /* c.un.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1948 /* c.un.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1955 /* c.un.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1962 /* cache */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 1962 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1962 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 1962 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 1968 /* cachee */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1968 /* cachee */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 1968 /* cachee */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 1975 /* ceil.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1975 /* ceil.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 1984 /* ceil.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 1984 /* ceil.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1984 /* ceil.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1984 /* ceil.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1993 /* ceil.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1993 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1993 /* ceil.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1993 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1993 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1993 /* ceil.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 2002 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 2002 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2002 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2011 /* ceq.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2017 /* ceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2023 /* ceq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2029 /* ceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2035 /* ceqi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2042 /* ceqi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2049 /* ceqi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2056 /* ceqi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2063 /* cfc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2063 /* cfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 2063 /* cfc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 2063 /* cfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_InMicroMips, 2068 /* cfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_InMicroMips, 2068 /* cfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2073 /* cfcmsa */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2073 /* cfcmsa */, MCK_MSACtrlAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 2080 /* cins */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 2080 /* cins */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 2080 /* cins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 2080 /* cins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 2085 /* cins32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 2085 /* cins32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2092 /* class.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2092 /* class.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2100 /* class.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2100 /* class.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2108 /* cle_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2116 /* cle_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2124 /* cle_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2132 /* cle_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2140 /* cle_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2148 /* cle_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2156 /* cle_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2164 /* cle_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2172 /* clei_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2181 /* clei_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2190 /* clei_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2199 /* clei_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2208 /* clei_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2217 /* clei_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2226 /* clei_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2235 /* clei_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2244 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2244 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2244 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2244 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2248 /* clt_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2256 /* clt_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2264 /* clt_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2272 /* clt_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2280 /* clt_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2288 /* clt_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2296 /* clt_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2304 /* clt_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2312 /* clti_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2321 /* clti_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2330 /* clti_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2339 /* clti_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2348 /* clti_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2357 /* clti_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2366 /* clti_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2375 /* clti_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2384 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2384 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2384 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2384 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2392 /* cmp.af.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2392 /* cmp.af.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2392 /* cmp.af.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2392 /* cmp.af.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2401 /* cmp.af.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2401 /* cmp.af.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2410 /* cmp.eq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2410 /* cmp.eq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2410 /* cmp.eq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2410 /* cmp.eq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2419 /* cmp.eq.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2419 /* cmp.eq.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2429 /* cmp.eq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2429 /* cmp.eq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2438 /* cmp.le.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2438 /* cmp.le.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2438 /* cmp.le.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2438 /* cmp.le.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2447 /* cmp.le.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2447 /* cmp.le.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2457 /* cmp.le.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2457 /* cmp.le.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2466 /* cmp.lt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2466 /* cmp.lt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2466 /* cmp.lt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2466 /* cmp.lt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2475 /* cmp.lt.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2475 /* cmp.lt.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2485 /* cmp.lt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2485 /* cmp.lt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2494 /* cmp.saf.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2494 /* cmp.saf.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2494 /* cmp.saf.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2494 /* cmp.saf.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2504 /* cmp.saf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2504 /* cmp.saf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2514 /* cmp.seq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2514 /* cmp.seq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2514 /* cmp.seq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2514 /* cmp.seq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2524 /* cmp.seq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2524 /* cmp.seq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2534 /* cmp.sle.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2534 /* cmp.sle.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2534 /* cmp.sle.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2534 /* cmp.sle.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2544 /* cmp.sle.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2544 /* cmp.sle.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2554 /* cmp.slt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2554 /* cmp.slt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2554 /* cmp.slt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2554 /* cmp.slt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2564 /* cmp.slt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2564 /* cmp.slt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2574 /* cmp.sueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2574 /* cmp.sueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2574 /* cmp.sueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2574 /* cmp.sueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2585 /* cmp.sueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2585 /* cmp.sueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2596 /* cmp.sule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2596 /* cmp.sule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2596 /* cmp.sule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2596 /* cmp.sule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2607 /* cmp.sule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2607 /* cmp.sule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2618 /* cmp.sult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2618 /* cmp.sult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2618 /* cmp.sult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2618 /* cmp.sult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2629 /* cmp.sult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2629 /* cmp.sult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2640 /* cmp.sun.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2640 /* cmp.sun.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2640 /* cmp.sun.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2640 /* cmp.sun.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2650 /* cmp.sun.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2650 /* cmp.sun.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2660 /* cmp.ueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2660 /* cmp.ueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2660 /* cmp.ueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2660 /* cmp.ueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2670 /* cmp.ueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2670 /* cmp.ueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2680 /* cmp.ule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2680 /* cmp.ule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2680 /* cmp.ule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2680 /* cmp.ule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2690 /* cmp.ule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2690 /* cmp.ule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2700 /* cmp.ult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2700 /* cmp.ult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2700 /* cmp.ult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2700 /* cmp.ult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2710 /* cmp.ult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2710 /* cmp.ult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2720 /* cmp.un.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2720 /* cmp.un.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2720 /* cmp.un.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2720 /* cmp.un.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2729 /* cmp.un.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2729 /* cmp.un.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 2738 /* cmpgdu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2738 /* cmpgdu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 2751 /* cmpgdu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2751 /* cmpgdu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 2764 /* cmpgdu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2764 /* cmpgdu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2777 /* cmpgu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2777 /* cmpgu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2789 /* cmpgu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2789 /* cmpgu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2801 /* cmpgu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2801 /* cmpgu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2818 /* cmpu.eq.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2818 /* cmpu.eq.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2829 /* cmpu.le.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2829 /* cmpu.le.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 2840 /* cmpu.lt.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2840 /* cmpu.lt.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2851 /* copy_s.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2851 /* copy_s.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2860 /* copy_s.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2860 /* copy_s.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2869 /* copy_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2869 /* copy_s.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2878 /* copy_s.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2878 /* copy_s.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2887 /* copy_u.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2887 /* copy_u.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2896 /* copy_u.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2896 /* copy_u.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2905 /* copy_u.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2905 /* copy_u.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2914 /* ctc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2914 /* ctc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 2914 /* ctc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 2914 /* ctc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_InMicroMips, 2919 /* ctc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_InMicroMips, 2919 /* ctc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2924 /* ctcmsa */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2924 /* ctcmsa */, MCK_MSACtrlAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2931 /* cvt.d.l */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2931 /* cvt.d.l */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.d.s */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2939 /* cvt.d.s */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2939 /* cvt.d.s */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.d.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2947 /* cvt.d.w */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2947 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2947 /* cvt.d.w */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2947 /* cvt.d.w */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2947 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2947 /* cvt.d.w */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2955 /* cvt.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2955 /* cvt.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2963 /* cvt.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2963 /* cvt.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2963 /* cvt.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2963 /* cvt.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2971 /* cvt.s.d */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2971 /* cvt.s.d */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2971 /* cvt.s.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2971 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2971 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2971 /* cvt.s.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2979 /* cvt.s.l */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2979 /* cvt.s.l */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2979 /* cvt.s.l */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2979 /* cvt.s.l */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2987 /* cvt.s.w */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2987 /* cvt.s.w */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2995 /* cvt.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2995 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2995 /* cvt.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2995 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2995 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2995 /* cvt.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 3003 /* cvt.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 3003 /* cvt.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3011 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3011 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3011 /* dadd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3011 /* dadd */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3011 /* dadd */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3011 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3016 /* daddi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3016 /* daddi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3022 /* daddiu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3022 /* daddiu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3022 /* daddiu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3022 /* daddiu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3029 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3029 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3029 /* daddu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips64r6, 3029 /* daddu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3029 /* daddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3029 /* daddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3029 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips64r6, 3029 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3035 /* dahi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3035 /* dahi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3040 /* dalign */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3040 /* dalign */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3047 /* dati */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3047 /* dati */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3052 /* daui */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3052 /* daui */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3057 /* dbitswap */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3057 /* dbitswap */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6|Feature_NotInMicroMips, 3066 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3066 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3066 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6|Feature_NotInMicroMips, 3071 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3071 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3071 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64|Feature_NotMips64r6, 3076 /* ddiv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3076 /* ddiv */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMips64|Feature_NotMips64r6, 3076 /* ddiv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3076 /* ddiv */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3076 /* ddiv */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64|Feature_NotMips64r6, 3081 /* ddivu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3081 /* ddivu */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMips64|Feature_NotMips64r6, 3081 /* ddivu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3081 /* ddivu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3081 /* ddivu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3093 /* dext */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3093 /* dext */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3098 /* dextm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3098 /* dextm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3104 /* dextu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3104 /* dextu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3110 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3110 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 3110 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3113 /* dins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3113 /* dins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3118 /* dinsm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3118 /* dinsm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3124 /* dinsu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3124 /* dinsu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 3130 /* div */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3130 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 3130 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 3130 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3130 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 3130 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 3134 /* div.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 3134 /* div.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 3134 /* div.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 3140 /* div.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 3140 /* div.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3146 /* div_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3154 /* div_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3162 /* div_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3170 /* div_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3178 /* div_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3186 /* div_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3194 /* div_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3202 /* div_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 3210 /* divu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3210 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 3210 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 3210 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3210 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 3210 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3215 /* dla */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3215 /* dla */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3215 /* dla */, MCK_Mem, 2 /* 1 */ },
  { 0, 3219 /* dli */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 3223 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3223 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3223 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotInMicroMips, 3228 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_NotInMicroMips, 3228 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips64r6, 3228 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMicroMips64r6, 3228 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3228 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3228 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3228 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3228 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 3234 /* dmfc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 3234 /* dmfc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3234 /* dmfc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3234 /* dmfc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3240 /* dmfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3240 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3240 /* dmfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 3240 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3240 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3240 /* dmfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3240 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3246 /* dmod */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3246 /* dmod */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3251 /* dmodu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3251 /* dmodu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotInMicroMips, 3257 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_NotInMicroMips, 3257 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3257 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 3257 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3257 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3257 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3257 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3257 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 3263 /* dmtc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 3263 /* dmtc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3263 /* dmtc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3263 /* dmtc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3269 /* dmtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3269 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3269 /* dmtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 3269 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3269 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3269 /* dmtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3269 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3275 /* dmuh */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3275 /* dmuh */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3280 /* dmuhu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3280 /* dmuhu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3286 /* dmul */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3286 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3286 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3286 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3291 /* dmult */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 3297 /* dmultu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 3304 /* dmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3304 /* dmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3310 /* dneg */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips64r6, 3310 /* dneg */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3310 /* dneg */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips64r6, 3310 /* dneg */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3315 /* dnegu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips64r6, 3315 /* dnegu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3315 /* dnegu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips64r6, 3315 /* dnegu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3321 /* dotp_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3330 /* dotp_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3339 /* dotp_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3348 /* dotp_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3357 /* dotp_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3366 /* dotp_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3375 /* dpa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3375 /* dpa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3375 /* dpa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3375 /* dpa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3384 /* dpadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3394 /* dpadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3404 /* dpadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3414 /* dpadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3424 /* dpadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3434 /* dpadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3444 /* dpaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3444 /* dpaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3444 /* dpaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3444 /* dpaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3456 /* dpaq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3456 /* dpaq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3456 /* dpaq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3456 /* dpaq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3468 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3468 /* dpaqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3468 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3468 /* dpaqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3481 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3481 /* dpaqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3481 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3481 /* dpaqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3495 /* dpau.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3495 /* dpau.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3495 /* dpau.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3495 /* dpau.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3506 /* dpau.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3506 /* dpau.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3506 /* dpau.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3506 /* dpau.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3517 /* dpax.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3517 /* dpax.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3517 /* dpax.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3517 /* dpax.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasCnMips, 3527 /* dpop */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3527 /* dpop */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3532 /* dps.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3532 /* dps.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3532 /* dps.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3532 /* dps.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3541 /* dpsq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3541 /* dpsq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3541 /* dpsq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3541 /* dpsq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3553 /* dpsq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3553 /* dpsq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3553 /* dpsq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3553 /* dpsq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3565 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3565 /* dpsqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3565 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3565 /* dpsqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3578 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3578 /* dpsqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3578 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3578 /* dpsqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3592 /* dpsu.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3592 /* dpsu.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3592 /* dpsu.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3592 /* dpsu.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3603 /* dpsu.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3603 /* dpsu.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3603 /* dpsu.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3603 /* dpsu.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3614 /* dpsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3624 /* dpsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3634 /* dpsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3644 /* dpsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3654 /* dpsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3664 /* dpsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3674 /* dpsx.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3674 /* dpsx.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3674 /* dpsx.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3674 /* dpsx.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMips64, 3684 /* drol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3684 /* drol */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3684 /* drol */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 3684 /* drol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3689 /* dror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3689 /* dror */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3689 /* dror */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 3689 /* dror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3694 /* drotr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3694 /* drotr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3694 /* drotr */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3694 /* drotr */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3700 /* drotr32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3700 /* drotr32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3700 /* drotr32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3700 /* drotr32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3708 /* drotrv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3708 /* drotrv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3708 /* drotrv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3708 /* drotrv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3715 /* dsbh */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3715 /* dsbh */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2|Feature_NotInMicroMips, 3720 /* dshd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3720 /* dshd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3725 /* dsll */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3725 /* dsll */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3725 /* dsll */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3725 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3725 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3725 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3730 /* dsll32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3730 /* dsll32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3730 /* dsll32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3730 /* dsll32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3737 /* dsllv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3737 /* dsllv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3737 /* dsllv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3737 /* dsllv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3743 /* dsra */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3743 /* dsra */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3743 /* dsra */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3743 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3743 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3743 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3748 /* dsra32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3748 /* dsra32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3748 /* dsra32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3748 /* dsra32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3755 /* dsrav */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3755 /* dsrav */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3755 /* dsrav */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3755 /* dsrav */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3761 /* dsrl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3761 /* dsrl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3761 /* dsrl */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3761 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3761 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3761 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3766 /* dsrl32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3766 /* dsrl32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3766 /* dsrl32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3766 /* dsrl32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3773 /* dsrlv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3773 /* dsrlv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3773 /* dsrlv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3773 /* dsrlv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3779 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3779 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3779 /* dsub */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3779 /* dsub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3779 /* dsub */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3779 /* dsub */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3779 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3779 /* dsub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3784 /* dsubi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3784 /* dsubi */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3784 /* dsubi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3784 /* dsubi */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3790 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3790 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3790 /* dsubu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3790 /* dsubu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasMicroMips64r6, 3790 /* dsubu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips64r6, 3790 /* dsubu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 3790 /* dsubu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3790 /* dsubu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3790 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotInMicroMips, 3790 /* dsubu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasMicroMips64r6, 3790 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips64r6, 3790 /* dsubu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 3796 /* dvp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3796 /* dvp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3804 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3804 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 3804 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 3819 /* evp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3819 /* evp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3823 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3823 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 3823 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3827 /* extp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3827 /* extp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3827 /* extp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3827 /* extp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3832 /* extpdp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3832 /* extpdp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3832 /* extpdp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3832 /* extpdp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3839 /* extpdpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3839 /* extpdpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3839 /* extpdpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3839 /* extpdpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3847 /* extpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3847 /* extpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3847 /* extpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3847 /* extpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3853 /* extr.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3853 /* extr.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3853 /* extr.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3853 /* extr.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3860 /* extr_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3860 /* extr_r.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3860 /* extr_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3860 /* extr_r.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3869 /* extr_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3869 /* extr_rs.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3869 /* extr_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3869 /* extr_rs.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3879 /* extr_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3879 /* extr_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3879 /* extr_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3879 /* extr_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3888 /* extrv.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3888 /* extrv.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3888 /* extrv.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3888 /* extrv.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3896 /* extrv_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3896 /* extrv_r.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3896 /* extrv_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3896 /* extrv_r.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3906 /* extrv_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3906 /* extrv_rs.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3906 /* extrv_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3906 /* extrv_rs.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3917 /* extrv_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3917 /* extrv_s.h */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3917 /* extrv_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3917 /* extrv_s.h */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasCnMips, 3927 /* exts */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3927 /* exts */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3927 /* exts */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 3927 /* exts */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 3932 /* exts32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3932 /* exts32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3939 /* fadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3946 /* fadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3953 /* fcaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3960 /* fcaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3967 /* fceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3974 /* fceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3981 /* fclass.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3990 /* fclass.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3999 /* fcle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4006 /* fcle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4013 /* fclt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4020 /* fclt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4027 /* fcne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4034 /* fcne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4041 /* fcor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4048 /* fcor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4055 /* fcueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4063 /* fcueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4071 /* fcule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4079 /* fcule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4087 /* fcult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4095 /* fcult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4103 /* fcun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4110 /* fcun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4117 /* fcune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4125 /* fcune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4133 /* fdiv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4140 /* fdiv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4147 /* fexdo.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4155 /* fexdo.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4163 /* fexp2.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4171 /* fexp2.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4179 /* fexupl.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4188 /* fexupl.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4197 /* fexupr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4206 /* fexupr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4215 /* ffint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4225 /* ffint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4235 /* ffint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4245 /* ffint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4255 /* ffql.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4262 /* ffql.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4269 /* ffqr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4276 /* ffqr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4283 /* fill.b */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4283 /* fill.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 4290 /* fill.d */, MCK_GPR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 4290 /* fill.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4297 /* fill.h */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4297 /* fill.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4304 /* fill.w */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4304 /* fill.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4311 /* flog2.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4319 /* flog2.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 4327 /* floor.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4327 /* floor.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 4337 /* floor.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 4337 /* floor.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4337 /* floor.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4337 /* floor.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4347 /* floor.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4347 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4347 /* floor.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4347 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4347 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4347 /* floor.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 4357 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 4357 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4357 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4367 /* fmadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4375 /* fmadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4383 /* fmax.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4390 /* fmax.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4397 /* fmax_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4406 /* fmax_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4415 /* fmin.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4422 /* fmin.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4429 /* fmin_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4438 /* fmin_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4447 /* fmsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4455 /* fmsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4463 /* fmul.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4470 /* fmul.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4477 /* frcp.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4484 /* frcp.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4491 /* frint.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4499 /* frint.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4507 /* frsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4516 /* frsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4525 /* fsaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4532 /* fsaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4539 /* fseq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4546 /* fseq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4553 /* fsle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4560 /* fsle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4567 /* fslt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4574 /* fslt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4581 /* fsne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4588 /* fsne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4595 /* fsor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4602 /* fsor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4609 /* fsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4617 /* fsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4625 /* fsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4632 /* fsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4639 /* fsueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4647 /* fsueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4655 /* fsule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4663 /* fsule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4671 /* fsult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4679 /* fsult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4687 /* fsun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4694 /* fsun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4701 /* fsune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4709 /* fsune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4717 /* ftint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4727 /* ftint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4737 /* ftint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4747 /* ftint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4757 /* ftq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4763 /* ftq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4769 /* ftrunc_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4780 /* ftrunc_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4791 /* ftrunc_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4802 /* ftrunc_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4813 /* hadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4822 /* hadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4831 /* hadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4840 /* hadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4849 /* hadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4858 /* hadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4867 /* hsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4876 /* hsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4885 /* hsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4894 /* hsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4903 /* hsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4912 /* hsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4921 /* ilvev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4929 /* ilvev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4937 /* ilvev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4945 /* ilvev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4953 /* ilvl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4960 /* ilvl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4967 /* ilvl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4974 /* ilvl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4981 /* ilvod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4989 /* ilvod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4997 /* ilvod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5005 /* ilvod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5013 /* ilvr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5020 /* ilvr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5027 /* ilvr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5034 /* ilvr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 5041 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5041 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5041 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5045 /* insert.b */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5045 /* insert.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 5054 /* insert.d */, MCK_GPR64AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 5054 /* insert.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5063 /* insert.h */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5063 /* insert.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5072 /* insert.w */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5072 /* insert.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5081 /* insv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5081 /* insv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5086 /* insve.b */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5094 /* insve.d */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5102 /* insve.h */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5110 /* insve.w */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { 0, 5118 /* j */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5118 /* j */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 5120 /* jal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5120 /* jal */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 5120 /* jal */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 5124 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5124 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 5124 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5124 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5124 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 5124 /* jalr */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips32, 5129 /* jalr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5129 /* jalr.hb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 5137 /* jalrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5137 /* jalrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64r6, 5137 /* jalrc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5137 /* jalrc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 5143 /* jalrc.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5143 /* jalrc.hb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5152 /* jalrs */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5158 /* jalrs16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5171 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 5171 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5176 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5176 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5176 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5176 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 5176 /* jialc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 5176 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5182 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5182 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5182 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5182 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 5182 /* jic */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips64r6, 5182 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 5186 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 5186 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5186 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_NotInMicroMips, 5186 /* jr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64r6, 5186 /* jr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5189 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5189 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5195 /* jr16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_IsGP32bit|Feature_HasMips32r6, 5210 /* jrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5210 /* jrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64r6, 5210 /* jrc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5214 /* jrc16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5231 /* l.d */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5231 /* l.d */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5231 /* l.d */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5231 /* l.d */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasMips2|Feature_IsNotSoftFloat, 5235 /* l.s */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_IsNotSoftFloat, 5235 /* l.s */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { 0, 5239 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5239 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5239 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5242 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5242 /* lb */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc, 5242 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5242 /* lb */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_InMicroMips, 5242 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5242 /* lb */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5245 /* lbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5245 /* lbe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5245 /* lbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5245 /* lbe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5245 /* lbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5245 /* lbe */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5249 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5249 /* lbu */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc, 5249 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5249 /* lbu */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_InMicroMips, 5249 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5249 /* lbu */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_InMicroMips, 5253 /* lbu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5253 /* lbu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5259 /* lbue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5259 /* lbue */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5259 /* lbue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5259 /* lbue */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5259 /* lbue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5259 /* lbue */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5264 /* lbux */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasDSP, 5264 /* lbux */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_NotMips3, 5269 /* ld */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips3, 5269 /* ld */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 5269 /* ld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 5269 /* ld */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5269 /* ld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5269 /* ld */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5272 /* ld.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5272 /* ld.b */, MCK_MemOffsetSimm10, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5277 /* ld.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5277 /* ld.d */, MCK_MemOffsetSimm10_3, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5282 /* ld.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5282 /* ld.h */, MCK_MemOffsetSimm10_1, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5287 /* ld.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5287 /* ld.w */, MCK_MemOffsetSimm10_2, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5292 /* ldc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5292 /* ldc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat|Feature_InMicroMips, 5292 /* ldc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat|Feature_InMicroMips, 5292 /* ldc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5292 /* ldc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5292 /* ldc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5292 /* ldc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5292 /* ldc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 5297 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 5297 /* ldc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5297 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5297 /* ldc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5297 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5297 /* ldc2 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5302 /* ldc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5302 /* ldc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5307 /* ldi.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5313 /* ldi.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5319 /* ldi.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5325 /* ldi.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5331 /* ldl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5331 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5335 /* ldpc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5335 /* ldpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5335 /* ldpc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5335 /* ldpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5340 /* ldr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5340 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5344 /* ldxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5344 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5344 /* ldxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5344 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5350 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5350 /* lh */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_InMicroMips, 5350 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5350 /* lh */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5353 /* lhe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5353 /* lhe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5353 /* lhe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5353 /* lhe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5357 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5357 /* lhu */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_InMicroMips, 5357 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5357 /* lhu */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_InMicroMips, 5361 /* lhu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5361 /* lhu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5367 /* lhue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5367 /* lhue */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5367 /* lhue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5367 /* lhue */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5372 /* lhx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasDSP, 5372 /* lhx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { 0, 5376 /* li */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5379 /* li16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5379 /* li16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips64r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips64r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5384 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5384 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5384 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5387 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5387 /* lld */, MCK_MemOffsetSimm12, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5387 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5387 /* lld */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 5387 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 5387 /* lld */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5391 /* lle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5391 /* lle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5391 /* lle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5391 /* lle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5391 /* lle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5391 /* lle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5395 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5395 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5395 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5399 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5399 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5399 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5403 /* luxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5403 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5403 /* luxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5403 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5409 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5409 /* lw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5409 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5409 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5409 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5409 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5409 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5409 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5409 /* lw */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5409 /* lw */, MCK_MicroMipsMemGP, 2 /* 1 */ },
  { Feature_InMicroMips, 5412 /* lw16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5412 /* lw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5417 /* lwc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5417 /* lwc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 5417 /* lwc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 5417 /* lwc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 5422 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 5422 /* lwc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5422 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5422 /* lwc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5422 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5422 /* lwc2 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5427 /* lwc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5427 /* lwc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5432 /* lwe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5432 /* lwe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5432 /* lwe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5432 /* lwe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5432 /* lwe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5432 /* lwe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5436 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5436 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5436 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5436 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5440 /* lwle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5440 /* lwle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5440 /* lwle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5440 /* lwle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5445 /* lwm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5445 /* lwm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 5449 /* lwm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 5449 /* lwm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5449 /* lwm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 5449 /* lwm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 5455 /* lwm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5455 /* lwm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5461 /* lwp */, MCK_MemOffsetSimm12, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5461 /* lwp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_InMicroMips, 5461 /* lwp */, MCK_MemOffsetSimm12, 2 /* 1 */ },
  { Feature_InMicroMips, 5461 /* lwp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5465 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5465 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5470 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5470 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5470 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5470 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5474 /* lwre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5474 /* lwre */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5474 /* lwre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5474 /* lwre */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, 5479 /* lwu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, 5479 /* lwu */, MCK_MemOffsetSimm12, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5479 /* lwu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5479 /* lwu */, MCK_MemOffsetSimm12, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 5479 /* lwu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 5479 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 5483 /* lwupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 5483 /* lwupc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5489 /* lwx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasDSP, 5489 /* lwx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5493 /* lwxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5493 /* lwxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5499 /* lwxs */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5504 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5504 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5504 /* madd */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5504 /* madd */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5504 /* madd */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5504 /* madd */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5509 /* madd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5509 /* madd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5516 /* madd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5523 /* madd_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5532 /* madd_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5541 /* maddf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5541 /* maddf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5549 /* maddf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5549 /* maddf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5557 /* maddr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5567 /* maddr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5577 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5577 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5577 /* maddu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5577 /* maddu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5577 /* maddu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5577 /* maddu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5583 /* maddv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5591 /* maddv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5599 /* maddv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5607 /* maddv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5615 /* maq_s.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5615 /* maq_s.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5615 /* maq_s.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5615 /* maq_s.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5627 /* maq_s.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5627 /* maq_s.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5627 /* maq_s.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5627 /* maq_s.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5639 /* maq_sa.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5639 /* maq_sa.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5639 /* maq_sa.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5639 /* maq_sa.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5652 /* maq_sa.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5652 /* maq_sa.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5652 /* maq_sa.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5652 /* maq_sa.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5665 /* max.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5665 /* max.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5671 /* max.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5671 /* max.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5677 /* max_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5685 /* max_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5693 /* max_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5701 /* max_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5709 /* max_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5717 /* max_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5725 /* max_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5733 /* max_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5741 /* max_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5749 /* max_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5757 /* max_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5765 /* max_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5773 /* maxa.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5773 /* maxa.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5780 /* maxa.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5780 /* maxa.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5787 /* maxi_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5796 /* maxi_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5805 /* maxi_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5814 /* maxi_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5823 /* maxi_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5832 /* maxi_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5841 /* maxi_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5850 /* maxi_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 5859 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 5859 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5859 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 5859 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, 5859 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, 5859 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5859 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5859 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5864 /* mfc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5864 /* mfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5864 /* mfc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5864 /* mfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5869 /* mfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5869 /* mfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5869 /* mfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 5869 /* mfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5869 /* mfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 5869 /* mfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5874 /* mfhc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 5874 /* mfhc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5874 /* mfhc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5874 /* mfhc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5880 /* mfhc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5880 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_InMicroMips, 5880 /* mfhc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_InMicroMips, 5880 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5880 /* mfhc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5880 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5880 /* mfhc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5880 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5880 /* mfhc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5880 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5886 /* mfhc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5886 /* mfhc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5892 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5892 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5892 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5892 /* mfhi */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5892 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5892 /* mfhi */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5892 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5897 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5897 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5897 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5897 /* mflo */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5897 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5897 /* mflo */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5897 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5902 /* min.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5902 /* min.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5908 /* min.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5908 /* min.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5914 /* min_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5922 /* min_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5930 /* min_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5938 /* min_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5946 /* min_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5954 /* min_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5962 /* min_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5970 /* min_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5978 /* min_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5986 /* min_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5994 /* min_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6002 /* min_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6010 /* mina.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6010 /* mina.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6017 /* mina.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6017 /* mina.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6024 /* mini_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6033 /* mini_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6042 /* mini_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6051 /* mini_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6060 /* mini_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6069 /* mini_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6078 /* mini_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6087 /* mini_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 6096 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6096 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6100 /* mod_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6108 /* mod_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6116 /* mod_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6124 /* mod_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6132 /* mod_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6140 /* mod_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6148 /* mod_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6156 /* mod_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6164 /* modsub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6164 /* modsub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 6171 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6171 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6176 /* mov.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6176 /* mov.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6176 /* mov.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6182 /* mov.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6182 /* mov.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_NotInMicroMips, 6188 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_NotInMicroMips, 6188 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6188 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP64bit|Feature_NotInMicroMips, 6188 /* move */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP64bit|Feature_NotInMicroMips, 6188 /* move */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6193 /* move.v */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 6200 /* move16 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6207 /* movep */, MCK_GPRMM16AsmRegMoveP, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 6207 /* movep */, MCK_MovePRegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6213 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6213 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6213 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 6213 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6218 /* movf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6218 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6218 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6218 /* movf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6225 /* movf.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6225 /* movf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 6232 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6232 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6237 /* movn.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6237 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6237 /* movn.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6237 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6244 /* movn.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6244 /* movn.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6251 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6251 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6251 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 6251 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6256 /* movt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6256 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6256 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6256 /* movt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6263 /* movt.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6263 /* movt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 6270 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6270 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6275 /* movz.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6275 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6275 /* movz.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6275 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6282 /* movz.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6282 /* movz.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6289 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6289 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6289 /* msub */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6289 /* msub */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6289 /* msub */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6289 /* msub */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6294 /* msub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6294 /* msub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6301 /* msub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6308 /* msub_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6317 /* msub_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6326 /* msubf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6326 /* msubf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6334 /* msubf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6334 /* msubf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6342 /* msubr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6352 /* msubr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6362 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6362 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6362 /* msubu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6362 /* msubu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6362 /* msubu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6362 /* msubu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6368 /* msubv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6376 /* msubv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6384 /* msubv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6392 /* msubv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMicroMips32r6, 6400 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 6400 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6400 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 6400 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, 6400 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, 6400 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6400 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6400 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6405 /* mtc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6405 /* mtc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6405 /* mtc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6405 /* mtc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6410 /* mtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6410 /* mtc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6410 /* mtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 6410 /* mtc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6410 /* mtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 6410 /* mtc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 6415 /* mthc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 6415 /* mthc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6415 /* mthc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6415 /* mthc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6421 /* mthc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6421 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_InMicroMips, 6421 /* mthc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_InMicroMips, 6421 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6421 /* mthc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6421 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6421 /* mthc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6421 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6421 /* mthc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6421 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6427 /* mthc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6427 /* mthc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6433 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6433 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6433 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6433 /* mthi */, MCK_HI32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6433 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6433 /* mthi */, MCK_HI32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6438 /* mthlip */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6438 /* mthlip */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6438 /* mthlip */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6438 /* mthlip */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6445 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6445 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6445 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6445 /* mtlo */, MCK_LO32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6445 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6445 /* mtlo */, MCK_LO32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 6450 /* mtm0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6455 /* mtm1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6460 /* mtm2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6465 /* mtp0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6470 /* mtp1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6475 /* mtp2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6480 /* muh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 6480 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6480 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6484 /* muhu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 6484 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6484 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6489 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6489 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6489 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6489 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 6489 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6489 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6489 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6493 /* mul.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6493 /* mul.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6493 /* mul.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6499 /* mul.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6499 /* mul.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6506 /* mul.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6506 /* mul.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6512 /* mul_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6520 /* mul_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6528 /* mul_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6528 /* mul_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6537 /* muleq_s.w.phl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6537 /* muleq_s.w.phl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6551 /* muleq_s.w.phr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6551 /* muleq_s.w.phr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6565 /* muleu_s.ph.qbl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6565 /* muleu_s.ph.qbl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6580 /* muleu_s.ph.qbr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6580 /* muleu_s.ph.qbr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6595 /* mulq_rs.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6595 /* mulq_rs.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6606 /* mulq_rs.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6606 /* mulq_rs.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6616 /* mulq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6616 /* mulq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6626 /* mulq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6626 /* mulq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6635 /* mulr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6644 /* mulr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6653 /* mulsa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6653 /* mulsa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 6653 /* mulsa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 6653 /* mulsa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6664 /* mulsaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6664 /* mulsaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6664 /* mulsaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6664 /* mulsaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6678 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6678 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6678 /* mult */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6678 /* mult */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6678 /* mult */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6678 /* mult */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6683 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6683 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6683 /* multu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6683 /* multu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6683 /* multu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6683 /* multu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6689 /* mulu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 6689 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6689 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6694 /* mulv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6701 /* mulv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6708 /* mulv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6715 /* mulv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6722 /* neg */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6722 /* neg */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6726 /* neg.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6726 /* neg.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6726 /* neg.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6732 /* neg.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6732 /* neg.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6738 /* negu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6738 /* negu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6743 /* nloc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6750 /* nloc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6757 /* nloc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6764 /* nloc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6771 /* nlzc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6778 /* nlzc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6785 /* nlzc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6792 /* nlzc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6799 /* nmadd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6799 /* nmadd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6807 /* nmadd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6815 /* nmsub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6815 /* nmsub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6823 /* nmsub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6835 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6835 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6835 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6835 /* nor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6839 /* nor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6845 /* nori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 6852 /* not */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6852 /* not */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 6852 /* not */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6852 /* not */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 6852 /* not */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 6856 /* not16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 6856 /* not16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6862 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 6862 /* or */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6862 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 6862 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 6862 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6865 /* or.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 6870 /* or16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 6870 /* or16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6875 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6875 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6875 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6875 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6875 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6875 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6879 /* ori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6885 /* packrl.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6885 /* packrl.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6901 /* pckev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6909 /* pckev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6917 /* pckev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6925 /* pckev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6933 /* pckod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6941 /* pckod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6949 /* pckod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6957 /* pckod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6965 /* pcnt.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6972 /* pcnt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6979 /* pcnt.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6986 /* pcnt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6993 /* pick.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6993 /* pick.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7001 /* pick.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7001 /* pick.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7009 /* pop */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7009 /* pop */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7013 /* preceq.w.phl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7013 /* preceq.w.phl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7026 /* preceq.w.phr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7026 /* preceq.w.phr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7039 /* precequ.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7039 /* precequ.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7054 /* precequ.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7054 /* precequ.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7070 /* precequ.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7070 /* precequ.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7085 /* precequ.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7085 /* precequ.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7101 /* preceu.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7101 /* preceu.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7115 /* preceu.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7115 /* preceu.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7130 /* preceu.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7130 /* preceu.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7144 /* preceu.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7144 /* preceu.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7159 /* precr.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7159 /* precr.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7171 /* precr_sra.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7171 /* precr_sra.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7186 /* precr_sra_r.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7186 /* precr_sra_r.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7203 /* precrq.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7203 /* precrq.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7215 /* precrq.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7215 /* precrq.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7228 /* precrq_rs.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7228 /* precrq_rs.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7243 /* precrqu_s.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7243 /* precrqu_s.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7259 /* pref */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 7259 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7259 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7259 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7264 /* prefe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7264 /* prefe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 7264 /* prefe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 7270 /* prefx */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7276 /* prepend */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7276 /* prepend */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7284 /* raddu.w.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7284 /* raddu.w.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7295 /* rddsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7295 /* rddsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, 7301 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, 7301 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7301 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7301 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 7301 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7301 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7301 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7301 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7307 /* rdpgpr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 7314 /* recip.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7314 /* recip.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7322 /* recip.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 7322 /* recip.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7330 /* repl.ph */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7330 /* repl.ph */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7338 /* repl.qb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7338 /* repl.qb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7346 /* replv.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7346 /* replv.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7355 /* replv.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7355 /* replv.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7364 /* rint.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7364 /* rint.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7371 /* rint.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7371 /* rint.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7378 /* rol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7378 /* rol */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7378 /* rol */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7378 /* rol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7382 /* ror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7382 /* ror */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7382 /* ror */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7382 /* ror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 7386 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7386 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7386 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 7386 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7386 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 7391 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7391 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7397 /* round.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7397 /* round.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7407 /* round.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7407 /* round.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7407 /* round.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7407 /* round.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7417 /* round.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7417 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7417 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7417 /* round.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7417 /* round.w.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 7427 /* round.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7427 /* round.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 7437 /* rsqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7437 /* rsqrt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7445 /* rsqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 7445 /* rsqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7453 /* s.d */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7453 /* s.d */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7453 /* s.d */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7453 /* s.d */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasMips2|Feature_IsNotSoftFloat, 7457 /* s.s */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_IsNotSoftFloat, 7457 /* s.s */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7461 /* sat_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7469 /* sat_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7477 /* sat_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7485 /* sat_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7493 /* sat_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7501 /* sat_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7509 /* sat_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7517 /* sat_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7525 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7525 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 7525 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7525 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7525 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7525 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7528 /* sb16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7528 /* sb16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 7528 /* sb16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7528 /* sb16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7533 /* sbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7533 /* sbe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7533 /* sbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7533 /* sbe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 7533 /* sbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7533 /* sbe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips64r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips64r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR32bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsPTR64bit|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7537 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7537 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7537 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7540 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7540 /* scd */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7540 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7540 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 7544 /* sce */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 7544 /* sce */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7544 /* sce */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7544 /* sce */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 7544 /* sce */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7544 /* sce */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_NotMips3, 7548 /* sd */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips3, 7548 /* sd */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 7548 /* sd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotInMicroMips, 7548 /* sd */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 7548 /* sd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 7548 /* sd */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7565 /* sdc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7565 /* sdc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat|Feature_InMicroMips, 7565 /* sdc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat|Feature_InMicroMips, 7565 /* sdc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7565 /* sdc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7565 /* sdc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7565 /* sdc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7565 /* sdc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 7570 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 7570 /* sdc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7570 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7570 /* sdc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7570 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7570 /* sdc2 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7575 /* sdc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7575 /* sdc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7580 /* sdl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7580 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7584 /* sdr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7584 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7588 /* sdxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7588 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 7588 /* sdxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 7588 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasMips32r2|Feature_NotInMicroMips, 7594 /* seb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7594 /* seb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7594 /* seb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7594 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7594 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7594 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_NotInMicroMips, 7598 /* seh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7598 /* seh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7598 /* seh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7598 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7598 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7598 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7602 /* sel.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7602 /* sel.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7608 /* sel.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7608 /* sel.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 7614 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7614 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7614 /* seleqz */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7621 /* seleqz.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7621 /* seleqz.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7630 /* seleqz.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7630 /* seleqz.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6|Feature_NotInMicroMips, 7639 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7639 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7639 /* selnez */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7646 /* selnez.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7646 /* selnez.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7655 /* selnez.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7655 /* selnez.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotCnMips, 7664 /* seq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotCnMips, 7664 /* seq */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7664 /* seq */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_NotCnMips, 7664 /* seq */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotCnMips, 7664 /* seq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7664 /* seq */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7668 /* seqi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7668 /* seqi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 7673 /* sgt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7673 /* sgt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 7673 /* sgt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7673 /* sgt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotInMicroMips, 7677 /* sgtu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7677 /* sgtu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 7677 /* sgtu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7677 /* sgtu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7682 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7682 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 7682 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7682 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7682 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7682 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7685 /* sh16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7685 /* sh16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 7685 /* sh16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7685 /* sh16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7690 /* she */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7690 /* she */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7690 /* she */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7690 /* she */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 7690 /* she */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7690 /* she */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7694 /* shf.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7700 /* shf.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7706 /* shf.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7712 /* shilo */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7712 /* shilo */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7718 /* shilov */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7718 /* shilov */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 7718 /* shilov */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7718 /* shilov */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7725 /* shll.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7725 /* shll.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7733 /* shll.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7733 /* shll.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7741 /* shll_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7741 /* shll_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7751 /* shll_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7751 /* shll_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7760 /* shllv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7760 /* shllv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7769 /* shllv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7769 /* shllv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7778 /* shllv_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7778 /* shllv_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7789 /* shllv_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7789 /* shllv_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7799 /* shra.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7799 /* shra.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7807 /* shra.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7807 /* shra.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7815 /* shra_r.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7815 /* shra_r.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7825 /* shra_r.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7825 /* shra_r.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7835 /* shra_r.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7835 /* shra_r.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7844 /* shrav.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7844 /* shrav.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7853 /* shrav.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7853 /* shrav.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7862 /* shrav_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7862 /* shrav_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7873 /* shrav_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7873 /* shrav_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7884 /* shrav_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7884 /* shrav_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7894 /* shrl.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7894 /* shrl.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7902 /* shrl.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7902 /* shrl.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7910 /* shrlv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7910 /* shrlv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7919 /* shrlv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7919 /* shrlv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7928 /* sld.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7928 /* sld.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7934 /* sld.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7934 /* sld.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7940 /* sld.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7940 /* sld.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7946 /* sld.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7946 /* sld.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7952 /* sldi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7959 /* sldi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7966 /* sldi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7973 /* sldi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7980 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7980 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7980 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7984 /* sll.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7990 /* sll.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7996 /* sll.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8002 /* sll.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 8008 /* sll16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 8008 /* sll16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8014 /* slli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8021 /* slli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8028 /* slli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8035 /* slli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8042 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8042 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8047 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8047 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotInMicroMips, 8047 /* slt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8047 /* slt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8051 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8051 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8056 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8056 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8062 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8062 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotInMicroMips, 8062 /* sltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8062 /* sltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8067 /* sne */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8067 /* sne */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8071 /* snei */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 8071 /* snei */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8076 /* splat.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8076 /* splat.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8084 /* splat.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8084 /* splat.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8092 /* splat.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8092 /* splat.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8100 /* splat.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8100 /* splat.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8108 /* splati.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8117 /* splati.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8126 /* splati.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8135 /* splati.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8144 /* sqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8144 /* sqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8144 /* sqrt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 8151 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 8151 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8151 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8158 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8162 /* sra.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8168 /* sra.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8174 /* sra.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8180 /* sra.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8186 /* srai.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8193 /* srai.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8200 /* srai.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8207 /* srai.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8214 /* srar.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8221 /* srar.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8228 /* srar.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8235 /* srar.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8242 /* srari.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8250 /* srari.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8258 /* srari.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8266 /* srari.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8274 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8274 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotInMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8279 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8283 /* srl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8289 /* srl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8295 /* srl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8301 /* srl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 8307 /* srl16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 8307 /* srl16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8313 /* srli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8320 /* srli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8327 /* srli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8334 /* srli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8341 /* srlr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8348 /* srlr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8355 /* srlr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8362 /* srlr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8369 /* srlri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8377 /* srlri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8385 /* srlri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8393 /* srlri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8401 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8401 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8412 /* st.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8412 /* st.b */, MCK_MemOffsetSimm10, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8417 /* st.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8417 /* st.d */, MCK_MemOffsetSimm10_3, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8422 /* st.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8422 /* st.h */, MCK_MemOffsetSimm10_1, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8427 /* st.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8427 /* st.w */, MCK_MemOffsetSimm10_2, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8432 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8432 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8432 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8432 /* sub */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8432 /* sub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8432 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 8432 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8432 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8432 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8432 /* sub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 8436 /* sub.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8436 /* sub.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 8436 /* sub.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8442 /* sub.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 8442 /* sub.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8448 /* subq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8448 /* subq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8456 /* subq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8456 /* subq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8466 /* subq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8466 /* subq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8475 /* subqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8475 /* subqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8484 /* subqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8484 /* subqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8492 /* subqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8492 /* subqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8503 /* subqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8503 /* subqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8513 /* subs_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8522 /* subs_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8531 /* subs_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8540 /* subs_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8549 /* subs_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8558 /* subs_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8567 /* subs_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8576 /* subs_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8585 /* subsus_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8596 /* subsus_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8607 /* subsus_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8618 /* subsus_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8629 /* subsuu_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8640 /* subsuu_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8651 /* subsuu_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8662 /* subsuu_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8673 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8673 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8673 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8673 /* subu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8673 /* subu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8673 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8673 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8673 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8673 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8673 /* subu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8678 /* subu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8678 /* subu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8686 /* subu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8686 /* subu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 8694 /* subu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMicroMips32r6, 8694 /* subu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8701 /* subu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8701 /* subu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8711 /* subu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8711 /* subu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8721 /* subuh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8721 /* subuh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8730 /* subuh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8730 /* subuh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8741 /* subv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8748 /* subv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8755 /* subv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8762 /* subv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8769 /* subvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8777 /* subvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8785 /* subvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8793 /* subvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8801 /* suxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8801 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8801 /* suxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8801 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 8807 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8807 /* sw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 8807 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 8807 /* sw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8807 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8807 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8807 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8807 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8807 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8807 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8810 /* sw16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 8810 /* sw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 8810 /* sw16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 8810 /* sw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 8815 /* swc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 8815 /* swc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 8815 /* swc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 8815 /* swc1 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 8820 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, 8820 /* swc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8820 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8820 /* swc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8820 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8820 /* swc2 */, MCK_MemOffsetSimm16, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8825 /* swc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8825 /* swc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 8830 /* swe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 8830 /* swe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8830 /* swe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8830 /* swe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 8830 /* swe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8830 /* swe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8834 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8834 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8834 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8834 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8838 /* swle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8838 /* swle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 8838 /* swle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8838 /* swle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 8843 /* swm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8843 /* swm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 8847 /* swm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 8847 /* swm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 8847 /* swm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 8847 /* swm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 8853 /* swm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8853 /* swm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8859 /* swp */, MCK_MemOffsetSimm12, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8859 /* swp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_InMicroMips, 8859 /* swp */, MCK_MemOffsetSimm12, 2 /* 1 */ },
  { Feature_InMicroMips, 8859 /* swp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8863 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8863 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8863 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8863 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8867 /* swre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8867 /* swre */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 8867 /* swre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8867 /* swre */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8872 /* swxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8872 /* swxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 8883 /* synci */, MCK_MemOffsetSimm16, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8883 /* synci */, MCK_MemOffsetSimm16, 1 /* 0 */ },
  { Feature_InMicroMips, 8883 /* synci */, MCK_MemOffsetSimm16, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8927 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8927 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8927 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8927 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8931 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8931 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8936 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8936 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8936 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8936 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8940 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8940 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8945 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8945 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8951 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8951 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8951 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8951 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8993 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8993 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8993 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8993 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8997 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8997 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 9002 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 9002 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 9008 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9008 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9008 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 9008 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 9013 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9013 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9013 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 9013 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 9017 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 9017 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 9022 /* trunc.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 9022 /* trunc.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 9032 /* trunc.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 9032 /* trunc.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 9032 /* trunc.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 9032 /* trunc.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_IsFP64bit|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_IsNotSoftFloat, 9042 /* trunc.w.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 9052 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 9052 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 9052 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 9052 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 9052 /* trunc.w.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { 0, 9062 /* ulh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 9062 /* ulh */, MCK_Mem, 2 /* 1 */ },
  { 0, 9066 /* ulhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 9066 /* ulhu */, MCK_Mem, 2 /* 1 */ },
  { 0, 9071 /* ulw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 9071 /* ulw */, MCK_Mem, 2 /* 1 */ },
  { 0, 9075 /* ush */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 9075 /* ush */, MCK_Mem, 2 /* 1 */ },
  { 0, 9079 /* usw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 9079 /* usw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasCnMips, 9083 /* v3mulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 9083 /* v3mulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 9090 /* vmm0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 9090 /* vmm0 */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 9095 /* vmulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 9095 /* vmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9101 /* vshf.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9108 /* vshf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9115 /* vshf.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9122 /* vshf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_NotInMicroMips, 9134 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 9134 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 9134 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_NotInMicroMips, 9134 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9140 /* wrpgpr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 9147 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9147 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9147 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9152 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 9152 /* xor */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9152 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 9152 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotInMicroMips, 9152 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9156 /* xor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 9162 /* xor16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 9162 /* xor16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9168 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 9168 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 9168 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9168 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 9168 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9168 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9173 /* xori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
};

OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ACC64DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_AFGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_CCRAsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP0AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP2AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP3AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FCCAsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGRH32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegMoveP:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegZero:
    return parseAnyRegister(Operands);
  case MCK_HI32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_HWRegsAsmReg:
    return parseAnyRegister(Operands);
  case MCK_LO32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSA128AsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSACtrlAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MicroMipsMemGP:
    return parseMemOperand(Operands);
  case MCK_MicroMipsMem:
    return parseMemOperand(Operands);
  case MCK_MicroMipsMemSP:
    return parseMemOperand(Operands);
  case MCK_InvNum:
    return parseInvNum(Operands);
  case MCK_JumpTarget:
    return parseJumpTarget(Operands);
  case MCK_MemOffsetSimm10:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm10_1:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm10_2:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm10_3:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm11:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm12:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm16:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm9:
    return parseMemOperand(Operands);
  case MCK_MemOffsetUimm4:
    return parseMemOperand(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  case MCK_MovePRegPair:
    return parseMovePRegPair(Operands);
  case MCK_RegList16:
    return parseRegisterList(Operands);
  case MCK_RegList:
    return parseRegisterList(Operands);
  case MCK_RegPair:
    return parseRegisterPair(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy MipsAsmParser::
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

