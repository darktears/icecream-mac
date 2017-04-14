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
enum SubtargetFeatureFlag : uint8_t {
  Feature_None = 0
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 15 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 1;	 // "fp"
    case 'p':	 // 1 string to match.
      if (Name[1] != 'c')
        break;
      return 2;	 // "pc"
    case 'r':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 7;	 // "r0"
      case '1':	 // 1 string to match.
        return 8;	 // "r1"
      case '2':	 // 1 string to match.
        return 9;	 // "r2"
      case '3':	 // 1 string to match.
        return 10;	 // "r3"
      case '4':	 // 1 string to match.
        return 11;	 // "r4"
      case '5':	 // 1 string to match.
        return 12;	 // "r5"
      case '6':	 // 1 string to match.
        return 13;	 // "r6"
      case '7':	 // 1 string to match.
        return 14;	 // "r7"
      case '8':	 // 1 string to match.
        return 15;	 // "r8"
      case '9':	 // 1 string to match.
        return 16;	 // "r9"
      case 'v':	 // 1 string to match.
        return 4;	 // "rv"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'p':	 // 1 string to match.
        return 5;	 // "sp"
      case 'w':	 // 1 string to match.
        return 6;	 // "sw"
      }
      break;
    }
    break;
  case 3:	 // 25 strings to match.
    if (Name[0] != 'r')
      break;
    switch (Name[1]) {
    default: break;
    case '1':	 // 10 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 17;	 // "r10"
      case '1':	 // 1 string to match.
        return 18;	 // "r11"
      case '2':	 // 1 string to match.
        return 19;	 // "r12"
      case '3':	 // 1 string to match.
        return 20;	 // "r13"
      case '4':	 // 1 string to match.
        return 21;	 // "r14"
      case '5':	 // 1 string to match.
        return 22;	 // "r15"
      case '6':	 // 1 string to match.
        return 23;	 // "r16"
      case '7':	 // 1 string to match.
        return 24;	 // "r17"
      case '8':	 // 1 string to match.
        return 25;	 // "r18"
      case '9':	 // 1 string to match.
        return 26;	 // "r19"
      }
      break;
    case '2':	 // 10 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 27;	 // "r20"
      case '1':	 // 1 string to match.
        return 28;	 // "r21"
      case '2':	 // 1 string to match.
        return 29;	 // "r22"
      case '3':	 // 1 string to match.
        return 30;	 // "r23"
      case '4':	 // 1 string to match.
        return 31;	 // "r24"
      case '5':	 // 1 string to match.
        return 32;	 // "r25"
      case '6':	 // 1 string to match.
        return 33;	 // "r26"
      case '7':	 // 1 string to match.
        return 34;	 // "r27"
      case '8':	 // 1 string to match.
        return 35;	 // "r28"
      case '9':	 // 1 string to match.
        return 36;	 // "r29"
      }
      break;
    case '3':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 37;	 // "r30"
      case '1':	 // 1 string to match.
        return 38;	 // "r31"
      }
      break;
    case 'c':	 // 1 string to match.
      if (Name[2] != 'a')
        break;
      return 3;	 // "rca"
    case 'r':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        return 39;	 // "rr1"
      case '2':	 // 1 string to match.
        return 40;	 // "rr2"
      }
      break;
    }
    break;
  }
  return 0;
}

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

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addImmOperands,
  CVT_95_Reg,
  CVT_95_addHiImm16Operands,
  CVT_95_addLoImm16Operands,
  CVT_95_addCondCodeOperands,
  CVT_95_addHiImm16AndOperands,
  CVT_95_addLoImm16AndOperands,
  CVT_95_addBrTargetOperands,
  CVT_95_addMemImmOperands,
  CVT_95_addMemRegImmOperands,
  CVT_95_addMemRegRegOperands,
  CVT_95_addMemSplsOperands,
  CVT_regR0,
  CVT_imm_95_0,
  CVT_regR1,
  CVT_95_addLoImm21Operands,
  CVT_95_addImmShiftOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Imm1_0,
  Convert__Imm1_0__Imm1_1,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_2__Reg1_0__HiImm161_1,
  Convert__Reg1_2__Reg1_0__LoImm161_1,
  Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0,
  Convert__Reg1_2__Reg1_0__HiImm16And1_1,
  Convert__Reg1_2__Reg1_0__LoImm16And1_1,
  Convert__Reg1_1__Imm1_0,
  Convert__BrTarget1_1__Imm1_0,
  Convert__Imm1_2__Imm1_0,
  Convert__Reg1_1__Reg1_3__Imm1_0,
  Convert__Reg1_0,
  Convert__BrTarget1_0,
  Convert__Reg1_1__MemImm1_0,
  Convert__Reg1_1__MemRegImm3_0,
  Convert__Reg1_1__MemRegReg3_0,
  Convert_NoOperands,
  Convert__Reg1_1__MemSpls3_0,
  Convert__Reg1_1__Reg1_0,
  Convert__Reg1_1__Reg1_0__regR0__imm_95_0,
  Convert__Reg1_1__regR1__HiImm16And1_0,
  Convert__Reg1_1__regR0__HiImm161_0,
  Convert__Reg1_1__regR1__LoImm16And1_0,
  Convert__Reg1_1__regR0__LoImm161_0,
  Convert__Reg1_1__LoImm211_0,
  Convert__Reg1_3__Reg1_1__Reg1_2__Imm1_0,
  Convert__Reg1_2__Reg1_0__ImmShift1_1,
  Convert__Reg1_0__MemImm1_1,
  Convert__Reg1_0__MemRegImm3_1,
  Convert__Reg1_0__MemRegReg3_1,
  Convert__Reg1_0__MemSpls3_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][9] = {
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__HiImm161_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addHiImm16Operands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__LoImm161_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addLoImm16Operands, 2, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_0__HiImm16And1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addHiImm16AndOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__LoImm16And1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addLoImm16AndOperands, 2, CVT_Done },
  // Convert__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__BrTarget1_1__Imm1_0
  { CVT_95_addBrTargetOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_2__Imm1_0
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_3__Imm1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__BrTarget1_0
  { CVT_95_addBrTargetOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemImm1_0
  { CVT_95_Reg, 2, CVT_95_addMemImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemRegImm3_0
  { CVT_95_Reg, 2, CVT_95_addMemRegImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemRegReg3_0
  { CVT_95_Reg, 2, CVT_95_addMemRegRegOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_1__MemSpls3_0
  { CVT_95_Reg, 2, CVT_95_addMemSplsOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_0__regR0__imm_95_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_regR0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__regR1__HiImm16And1_0
  { CVT_95_Reg, 2, CVT_regR1, 0, CVT_95_addHiImm16AndOperands, 1, CVT_Done },
  // Convert__Reg1_1__regR0__HiImm161_0
  { CVT_95_Reg, 2, CVT_regR0, 0, CVT_95_addHiImm16Operands, 1, CVT_Done },
  // Convert__Reg1_1__regR1__LoImm16And1_0
  { CVT_95_Reg, 2, CVT_regR1, 0, CVT_95_addLoImm16AndOperands, 1, CVT_Done },
  // Convert__Reg1_1__regR0__LoImm161_0
  { CVT_95_Reg, 2, CVT_regR0, 0, CVT_95_addLoImm16Operands, 1, CVT_Done },
  // Convert__Reg1_1__LoImm211_0
  { CVT_95_Reg, 2, CVT_95_addLoImm21Operands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Reg1_2__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_0__ImmShift1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmShiftOperands, 2, CVT_Done },
  // Convert__Reg1_0__MemImm1_1
  { CVT_95_Reg, 1, CVT_95_addMemImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__MemRegImm3_1
  { CVT_95_Reg, 1, CVT_95_addMemRegImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__MemRegReg3_1
  { CVT_95_Reg, 1, CVT_95_addMemRegRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__MemSpls3_1
  { CVT_95_Reg, 1, CVT_95_addMemSplsOperands, 2, CVT_Done },
};

void LanaiAsmParser::
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
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_addImmOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addHiImm16Operands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addHiImm16Operands(Inst, 1);
      break;
    case CVT_95_addLoImm16Operands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addLoImm16Operands(Inst, 1);
      break;
    case CVT_95_addCondCodeOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addCondCodeOperands(Inst, 1);
      break;
    case CVT_95_addHiImm16AndOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addHiImm16AndOperands(Inst, 1);
      break;
    case CVT_95_addLoImm16AndOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addLoImm16AndOperands(Inst, 1);
      break;
    case CVT_95_addBrTargetOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addBrTargetOperands(Inst, 1);
      break;
    case CVT_95_addMemImmOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addMemImmOperands(Inst, 1);
      break;
    case CVT_95_addMemRegImmOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addMemRegImmOperands(Inst, 3);
      break;
    case CVT_95_addMemRegRegOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addMemRegRegOperands(Inst, 3);
      break;
    case CVT_95_addMemSplsOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addMemSplsOperands(Inst, 3);
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::createReg(Lanai::R0));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_regR1:
      Inst.addOperand(MCOperand::createReg(Lanai::R1));
      break;
    case CVT_95_addLoImm21Operands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addLoImm21Operands(Inst, 1);
      break;
    case CVT_95_addImmShiftOperands:
      static_cast<LanaiOperand&>(*Operands[OpIdx]).addImmShiftOperands(Inst, 1);
      break;
    }
  }
}

void LanaiAsmParser::
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
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addHiImm16Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLoImm16Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCondCodeOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHiImm16AndOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLoImm16AndOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBrTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMemImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMemRegImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addMemRegRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addMemSplsOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_regR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regR1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addLoImm21Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmShiftOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
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
  MCK__EXCLAIM_, // '!'
  MCK__PCT_fp, // '%fp'
  MCK__PCT_pc, // '%pc'
  MCK__MINUS_4, // '-4'
  MCK__DOT_r, // '.r'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_add, // 'add'
  MCK_return, // 'return'
  MCK_CCR, // register class 'CCR'
  MCK_Reg1, // derived register class
  MCK_GPR, // register class 'GPR'
  MCK_BrTarget, // user defined class 'BrTargetAsmOperand'
  MCK_CallTarget, // user defined class 'CallTargetAsmOperand'
  MCK_CondCode, // user defined class 'CondCodeOperand'
  MCK_HiImm16And, // user defined class 'HiImm16AndAsmOperand'
  MCK_HiImm16, // user defined class 'HiImm16AsmOperand'
  MCK_Imm10, // user defined class 'Imm10AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ImmShift, // user defined class 'ImmShiftAsmOperand'
  MCK_LoImm16And, // user defined class 'LoImm16AndAsmOperand'
  MCK_LoImm16, // user defined class 'LoImm16AsmOperand'
  MCK_LoImm21, // user defined class 'LoImm21AsmOperand'
  MCK_MemImm, // user defined class 'MemImmAsmOperand'
  MCK_MemRegImm, // user defined class 'MemRegImmAsmOperand'
  MCK_MemRegReg, // user defined class 'MemRegRegAsmOperand'
  MCK_MemSpls, // user defined class 'MemSplsAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case '!':	 // 1 string to match.
      return MCK__EXCLAIM_;	 // "!"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    }
    break;
  case 2:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case '-':	 // 1 string to match.
      if (Name[1] != '4')
        break;
      return MCK__MINUS_4;	 // "-4"
    case '.':	 // 1 string to match.
      if (Name[1] != 'r')
        break;
      return MCK__DOT_r;	 // ".r"
    }
    break;
  case 3:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case '%':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return MCK__PCT_fp;	 // "%fp"
      case 'p':	 // 1 string to match.
        if (Name[2] != 'c')
          break;
        return MCK__PCT_pc;	 // "%pc"
      }
      break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "dd", 2) != 0)
        break;
      return MCK_add;	 // "add"
    }
    break;
  case 6:	 // 1 string to match.
    if (memcmp(Name.data()+0, "return", 6) != 0)
      break;
    return MCK_return;	 // "return"
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

  case MCK_Reg1:
    return B == MCK_GPR;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  LanaiOperand &Operand = (LanaiOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'BrTarget' class
  case MCK_BrTarget:
    if (Operand.isBrTarget())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'CallTarget' class
  case MCK_CallTarget:
    if (Operand.isCallTarget())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'CondCode' class
  case MCK_CondCode:
    if (Operand.isCondCode())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'HiImm16And' class
  case MCK_HiImm16And:
    if (Operand.isHiImm16And())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'HiImm16' class
  case MCK_HiImm16:
    if (Operand.isHiImm16())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Imm10' class
  case MCK_Imm10:
    if (Operand.isImm10())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'Imm' class
  case MCK_Imm:
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'ImmShift' class
  case MCK_ImmShift:
    if (Operand.isImmShift())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'LoImm16And' class
  case MCK_LoImm16And:
    if (Operand.isLoImm16And())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'LoImm16' class
  case MCK_LoImm16:
    if (Operand.isLoImm16())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'LoImm21' class
  case MCK_LoImm21:
    if (Operand.isLoImm21())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MemImm' class
  case MCK_MemImm:
    if (Operand.isMemImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MemRegImm' class
  case MCK_MemRegImm:
    if (Operand.isMemRegImm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MemRegReg' class
  case MCK_MemRegReg:
    if (Operand.isMemRegReg())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'MemSpls' class
  case MCK_MemSpls:
    if (Operand.isMemSpls())
      return MCTargetAsmParser::Match_Success;
    break;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Lanai::R0: OpKind = MCK_GPR; break;
    case Lanai::R1: OpKind = MCK_GPR; break;
    case Lanai::R2: OpKind = MCK_GPR; break;
    case Lanai::R3: OpKind = MCK_GPR; break;
    case Lanai::R4: OpKind = MCK_GPR; break;
    case Lanai::R5: OpKind = MCK_GPR; break;
    case Lanai::R6: OpKind = MCK_GPR; break;
    case Lanai::R7: OpKind = MCK_GPR; break;
    case Lanai::R8: OpKind = MCK_GPR; break;
    case Lanai::R9: OpKind = MCK_GPR; break;
    case Lanai::R10: OpKind = MCK_GPR; break;
    case Lanai::R11: OpKind = MCK_GPR; break;
    case Lanai::R12: OpKind = MCK_GPR; break;
    case Lanai::R13: OpKind = MCK_GPR; break;
    case Lanai::R14: OpKind = MCK_GPR; break;
    case Lanai::R15: OpKind = MCK_GPR; break;
    case Lanai::R16: OpKind = MCK_GPR; break;
    case Lanai::R17: OpKind = MCK_GPR; break;
    case Lanai::R18: OpKind = MCK_GPR; break;
    case Lanai::R19: OpKind = MCK_GPR; break;
    case Lanai::R20: OpKind = MCK_GPR; break;
    case Lanai::R21: OpKind = MCK_GPR; break;
    case Lanai::R22: OpKind = MCK_GPR; break;
    case Lanai::R23: OpKind = MCK_GPR; break;
    case Lanai::R24: OpKind = MCK_GPR; break;
    case Lanai::R25: OpKind = MCK_GPR; break;
    case Lanai::R26: OpKind = MCK_GPR; break;
    case Lanai::R27: OpKind = MCK_GPR; break;
    case Lanai::R28: OpKind = MCK_GPR; break;
    case Lanai::R29: OpKind = MCK_GPR; break;
    case Lanai::R30: OpKind = MCK_GPR; break;
    case Lanai::R31: OpKind = MCK_GPR; break;
    case Lanai::PC: OpKind = MCK_Reg1; break;
    case Lanai::SP: OpKind = MCK_Reg1; break;
    case Lanai::FP: OpKind = MCK_Reg1; break;
    case Lanai::RV: OpKind = MCK_Reg1; break;
    case Lanai::RR1: OpKind = MCK_Reg1; break;
    case Lanai::RR2: OpKind = MCK_Reg1; break;
    case Lanai::RCA: OpKind = MCK_Reg1; break;
    case Lanai::SR: OpKind = MCK_CCR; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t LanaiAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\021#ADJCALLSTACKDOWN\017#ADJCALLSTACKUP\014#ADJDYNALLOC\003add\005add."
    "f\004addc\006addc.f\003and\005and.f\001b\002bt\002ld\004ld.b\004ld.h\005"
    "leadz\005log_0\005log_1\005log_2\005log_3\005log_4\003mov\003nop\002or\004"
    "or.f\004popc\001s\004sel.\002sh\004sh.f\003sha\005sha.f\002st\004st.b\004"
    "st.h\003sub\005sub.f\004subb\006subb.f\006trailz\003uld\005uld.b\005uld"
    ".h\003xor\005xor.f";

namespace {
  struct MatchEntry {
    uint8_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[7];
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
  { 0 /* #ADJCALLSTACKDOWN */, Lanai::ADJCALLSTACKDOWN, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 18 /* #ADJCALLSTACKUP */, Lanai::ADJCALLSTACKUP, Convert__Imm1_0__Imm1_1, 0, { MCK_Imm, MCK_Imm }, },
  { 34 /* #ADJDYNALLOC */, Lanai::ADJDYNALLOC, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, },
  { 47 /* add */, Lanai::ADD_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 47 /* add */, Lanai::ADD_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 47 /* add */, Lanai::ADD_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 51 /* add.f */, Lanai::ADD_F_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 51 /* add.f */, Lanai::ADD_F_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 51 /* add.f */, Lanai::ADD_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 57 /* addc */, Lanai::ADDC_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 57 /* addc */, Lanai::ADDC_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 57 /* addc */, Lanai::ADDC_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 62 /* addc.f */, Lanai::ADDC_F_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 62 /* addc.f */, Lanai::ADDC_F_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 62 /* addc.f */, Lanai::ADDC_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 69 /* and */, Lanai::AND_I_HI, Convert__Reg1_2__Reg1_0__HiImm16And1_1, 0, { MCK_GPR, MCK_HiImm16And, MCK_GPR }, },
  { 69 /* and */, Lanai::AND_I_LO, Convert__Reg1_2__Reg1_0__LoImm16And1_1, 0, { MCK_GPR, MCK_LoImm16And, MCK_GPR }, },
  { 69 /* and */, Lanai::AND_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 73 /* and.f */, Lanai::AND_F_I_HI, Convert__Reg1_2__Reg1_0__HiImm16And1_1, 0, { MCK_GPR, MCK_HiImm16And, MCK_GPR }, },
  { 73 /* and.f */, Lanai::AND_F_I_LO, Convert__Reg1_2__Reg1_0__LoImm16And1_1, 0, { MCK_GPR, MCK_LoImm16And, MCK_GPR }, },
  { 73 /* and.f */, Lanai::AND_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 79 /* b */, Lanai::BRIND_CC, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_GPR }, },
  { 79 /* b */, Lanai::BRCC, Convert__BrTarget1_1__Imm1_0, 0, { MCK_Imm, MCK_BrTarget }, },
  { 79 /* b */, Lanai::BRR, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK__DOT_r, MCK_Imm }, },
  { 79 /* b */, Lanai::BRIND_CCA, Convert__Reg1_1__Reg1_3__Imm1_0, 0, { MCK_Imm, MCK_GPR, MCK_add, MCK_GPR }, },
  { 81 /* bt */, Lanai::JR, Convert__Reg1_0, 0, { MCK_GPR }, },
  { 81 /* bt */, Lanai::BT, Convert__BrTarget1_0, 0, { MCK_BrTarget }, },
  { 84 /* ld */, Lanai::LDADDR, Convert__Reg1_1__MemImm1_0, 0, { MCK_MemImm, MCK_GPR }, },
  { 84 /* ld */, Lanai::LDW_RI, Convert__Reg1_1__MemRegImm3_0, 0, { MCK_MemRegImm, MCK_GPR }, },
  { 84 /* ld */, Lanai::LDW_RR, Convert__Reg1_1__MemRegReg3_0, 0, { MCK_MemRegReg, MCK_GPR }, },
  { 84 /* ld */, Lanai::RET, Convert_NoOperands, 0, { MCK__MINUS_4, MCK__91_, MCK__PCT_fp, MCK__93_, MCK__PCT_pc, MCK__EXCLAIM_, MCK_return }, },
  { 87 /* ld.b */, Lanai::LDBs_RR, Convert__Reg1_1__MemRegReg3_0, 0, { MCK_MemRegReg, MCK_GPR }, },
  { 87 /* ld.b */, Lanai::LDBs_RI, Convert__Reg1_1__MemSpls3_0, 0, { MCK_MemSpls, MCK_GPR }, },
  { 92 /* ld.h */, Lanai::LDHs_RR, Convert__Reg1_1__MemRegReg3_0, 0, { MCK_MemRegReg, MCK_GPR }, },
  { 92 /* ld.h */, Lanai::LDHs_RI, Convert__Reg1_1__MemSpls3_0, 0, { MCK_MemSpls, MCK_GPR }, },
  { 97 /* leadz */, Lanai::LEADZ, Convert__Reg1_1__Reg1_0, 0, { MCK_GPR, MCK_GPR }, },
  { 103 /* log_0 */, Lanai::LOG0, Convert_NoOperands, 0, {  }, },
  { 109 /* log_1 */, Lanai::LOG1, Convert_NoOperands, 0, {  }, },
  { 115 /* log_2 */, Lanai::LOG2, Convert_NoOperands, 0, {  }, },
  { 121 /* log_3 */, Lanai::LOG3, Convert_NoOperands, 0, {  }, },
  { 127 /* log_4 */, Lanai::LOG4, Convert_NoOperands, 0, {  }, },
  { 133 /* mov */, Lanai::ADD_R, Convert__Reg1_1__Reg1_0__regR0__imm_95_0, 0, { MCK_GPR, MCK_GPR }, },
  { 133 /* mov */, Lanai::AND_I_HI, Convert__Reg1_1__regR1__HiImm16And1_0, 0, { MCK_HiImm16And, MCK_GPR }, },
  { 133 /* mov */, Lanai::ADD_I_HI, Convert__Reg1_1__regR0__HiImm161_0, 0, { MCK_HiImm16, MCK_GPR }, },
  { 133 /* mov */, Lanai::AND_I_LO, Convert__Reg1_1__regR1__LoImm16And1_0, 0, { MCK_LoImm16And, MCK_GPR }, },
  { 133 /* mov */, Lanai::ADD_I_LO, Convert__Reg1_1__regR0__LoImm161_0, 0, { MCK_LoImm16, MCK_GPR }, },
  { 133 /* mov */, Lanai::SLI, Convert__Reg1_1__LoImm211_0, 0, { MCK_LoImm21, MCK_GPR }, },
  { 137 /* nop */, Lanai::NOP, Convert_NoOperands, 0, {  }, },
  { 141 /* or */, Lanai::OR_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 141 /* or */, Lanai::OR_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 141 /* or */, Lanai::OR_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 144 /* or.f */, Lanai::OR_F_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 144 /* or.f */, Lanai::OR_F_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 144 /* or.f */, Lanai::OR_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 149 /* popc */, Lanai::POPC, Convert__Reg1_1__Reg1_0, 0, { MCK_GPR, MCK_GPR }, },
  { 154 /* s */, Lanai::SCC, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_GPR }, },
  { 156 /* sel. */, Lanai::SELECT, Convert__Reg1_3__Reg1_1__Reg1_2__Imm1_0, 0, { MCK_Imm, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 161 /* sh */, Lanai::SL_I, Convert__Reg1_2__Reg1_0__ImmShift1_1, 0, { MCK_GPR, MCK_ImmShift, MCK_GPR }, },
  { 161 /* sh */, Lanai::SHL_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 164 /* sh.f */, Lanai::SL_F_I, Convert__Reg1_2__Reg1_0__ImmShift1_1, 0, { MCK_GPR, MCK_ImmShift, MCK_GPR }, },
  { 164 /* sh.f */, Lanai::SHL_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 169 /* sha */, Lanai::SA_I, Convert__Reg1_2__Reg1_0__ImmShift1_1, 0, { MCK_GPR, MCK_ImmShift, MCK_GPR }, },
  { 169 /* sha */, Lanai::SRA_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 173 /* sha.f */, Lanai::SA_F_I, Convert__Reg1_2__Reg1_0__ImmShift1_1, 0, { MCK_GPR, MCK_ImmShift, MCK_GPR }, },
  { 173 /* sha.f */, Lanai::SRA_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 179 /* st */, Lanai::STADDR, Convert__Reg1_0__MemImm1_1, 0, { MCK_GPR, MCK_MemImm }, },
  { 179 /* st */, Lanai::SW_RI, Convert__Reg1_0__MemRegImm3_1, 0, { MCK_GPR, MCK_MemRegImm }, },
  { 179 /* st */, Lanai::SW_RR, Convert__Reg1_0__MemRegReg3_1, 0, { MCK_GPR, MCK_MemRegReg }, },
  { 182 /* st.b */, Lanai::STB_RR, Convert__Reg1_0__MemRegReg3_1, 0, { MCK_GPR, MCK_MemRegReg }, },
  { 182 /* st.b */, Lanai::STB_RI, Convert__Reg1_0__MemSpls3_1, 0, { MCK_GPR, MCK_MemSpls }, },
  { 187 /* st.h */, Lanai::STH_RR, Convert__Reg1_0__MemRegReg3_1, 0, { MCK_GPR, MCK_MemRegReg }, },
  { 187 /* st.h */, Lanai::STH_RI, Convert__Reg1_0__MemSpls3_1, 0, { MCK_GPR, MCK_MemSpls }, },
  { 192 /* sub */, Lanai::SUB_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 192 /* sub */, Lanai::SUB_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 192 /* sub */, Lanai::SUB_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 196 /* sub.f */, Lanai::SUB_F_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 196 /* sub.f */, Lanai::SUB_F_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 196 /* sub.f */, Lanai::SUB_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 202 /* subb */, Lanai::SUBB_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 202 /* subb */, Lanai::SUBB_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 202 /* subb */, Lanai::SUBB_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 207 /* subb.f */, Lanai::SUBB_F_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 207 /* subb.f */, Lanai::SUBB_F_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 207 /* subb.f */, Lanai::SUBB_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 214 /* trailz */, Lanai::TRAILZ, Convert__Reg1_1__Reg1_0, 0, { MCK_GPR, MCK_GPR }, },
  { 221 /* uld */, Lanai::LDW_RI, Convert__Reg1_1__MemRegImm3_0, 0, { MCK_MemRegImm, MCK_GPR }, },
  { 221 /* uld */, Lanai::LDWz_RR, Convert__Reg1_1__MemRegReg3_0, 0, { MCK_MemRegReg, MCK_GPR }, },
  { 225 /* uld.b */, Lanai::LDBz_RR, Convert__Reg1_1__MemRegReg3_0, 0, { MCK_MemRegReg, MCK_GPR }, },
  { 225 /* uld.b */, Lanai::LDBz_RI, Convert__Reg1_1__MemSpls3_0, 0, { MCK_MemSpls, MCK_GPR }, },
  { 231 /* uld.h */, Lanai::LDHz_RR, Convert__Reg1_1__MemRegReg3_0, 0, { MCK_MemRegReg, MCK_GPR }, },
  { 231 /* uld.h */, Lanai::LDHz_RI, Convert__Reg1_1__MemSpls3_0, 0, { MCK_MemSpls, MCK_GPR }, },
  { 237 /* xor */, Lanai::XOR_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 237 /* xor */, Lanai::XOR_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 237 /* xor */, Lanai::XOR_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 241 /* xor.f */, Lanai::XOR_F_I_HI, Convert__Reg1_2__Reg1_0__HiImm161_1, 0, { MCK_GPR, MCK_HiImm16, MCK_GPR }, },
  { 241 /* xor.f */, Lanai::XOR_F_I_LO, Convert__Reg1_2__Reg1_0__LoImm161_1, 0, { MCK_GPR, MCK_LoImm16, MCK_GPR }, },
  { 241 /* xor.f */, Lanai::XOR_F_R, Convert__Reg1_3__Reg1_1__Reg1_2__CondCode1_0, 0, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, },
};

unsigned LanaiAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 8) {
    ErrorInfo = 8;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((LanaiOperand&)*Operands[0]).getToken();

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
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 7; ++FormalIdx) {
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
    uint8_t RequiredFeatures;
    uint8_t Mnemonic;
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

static const OperandMatchEntry OperandMatchTable[20] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 84 /* ld */, MCK_MemImm, 1 /* 0 */ },
  { 0, 84 /* ld */, MCK_MemRegImm, 1 /* 0 */ },
  { 0, 84 /* ld */, MCK_MemRegReg, 1 /* 0 */ },
  { 0, 87 /* ld.b */, MCK_MemRegReg, 1 /* 0 */ },
  { 0, 87 /* ld.b */, MCK_MemSpls, 1 /* 0 */ },
  { 0, 92 /* ld.h */, MCK_MemRegReg, 1 /* 0 */ },
  { 0, 92 /* ld.h */, MCK_MemSpls, 1 /* 0 */ },
  { 0, 179 /* st */, MCK_MemImm, 2 /* 1 */ },
  { 0, 179 /* st */, MCK_MemRegImm, 2 /* 1 */ },
  { 0, 179 /* st */, MCK_MemRegReg, 2 /* 1 */ },
  { 0, 182 /* st.b */, MCK_MemRegReg, 2 /* 1 */ },
  { 0, 182 /* st.b */, MCK_MemSpls, 2 /* 1 */ },
  { 0, 187 /* st.h */, MCK_MemRegReg, 2 /* 1 */ },
  { 0, 187 /* st.h */, MCK_MemSpls, 2 /* 1 */ },
  { 0, 221 /* uld */, MCK_MemRegImm, 1 /* 0 */ },
  { 0, 221 /* uld */, MCK_MemRegReg, 1 /* 0 */ },
  { 0, 225 /* uld.b */, MCK_MemRegReg, 1 /* 0 */ },
  { 0, 225 /* uld.b */, MCK_MemSpls, 1 /* 0 */ },
  { 0, 231 /* uld.h */, MCK_MemRegReg, 1 /* 0 */ },
  { 0, 231 /* uld.h */, MCK_MemSpls, 1 /* 0 */ },
};

OperandMatchResultTy LanaiAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_MemImm:
    return parseMemoryOperand(Operands);
  case MCK_MemRegImm:
    return parseMemoryOperand(Operands);
  case MCK_MemRegReg:
    return parseMemoryOperand(Operands);
  case MCK_MemSpls:
    return parseMemoryOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy LanaiAsmParser::
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

