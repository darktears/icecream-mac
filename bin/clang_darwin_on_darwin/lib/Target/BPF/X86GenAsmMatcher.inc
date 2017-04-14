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
  case 2:	 // 10 strings to match.
    if (Name[0] != 'r')
      break;
    switch (Name[1]) {
    default: break;
    case '0':	 // 1 string to match.
      return 1;	 // "r0"
    case '1':	 // 1 string to match.
      return 2;	 // "r1"
    case '2':	 // 1 string to match.
      return 3;	 // "r2"
    case '3':	 // 1 string to match.
      return 4;	 // "r3"
    case '4':	 // 1 string to match.
      return 5;	 // "r4"
    case '5':	 // 1 string to match.
      return 6;	 // "r5"
    case '6':	 // 1 string to match.
      return 7;	 // "r6"
    case '7':	 // 1 string to match.
      return 8;	 // "r7"
    case '8':	 // 1 string to match.
      return 9;	 // "r8"
    case '9':	 // 1 string to match.
      return 10;	 // "r9"
    }
    break;
  case 3:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "r1", 2) != 0)
      break;
    switch (Name[2]) {
    default: break;
    case '0':	 // 1 string to match.
      return 11;	 // "r10"
    case '1':	 // 1 string to match.
      return 12;	 // "r11"
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
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_imm_95_0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_0__Reg1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Reg1_3,
  Convert__Reg1_0__Tie0__Imm1_3,
  Convert__Reg1_0__Tie0__Reg1_4,
  Convert__Reg1_0__Tie0__Imm1_4,
  Convert__Reg1_0__Tie0__Reg1_5,
  Convert__Reg1_0__Tie0__Imm1_5,
  Convert__Reg1_0__Reg1_8__Imm1_9,
  Convert__Imm1_2,
  Convert__Imm1_2__Imm1_3,
  Convert__Reg1_3__Reg1_5__Reg1_7__Imm1_6__Reg1_9__Reg1_11,
  Convert__Reg1_10__Reg1_6__Imm1_7,
  Convert__Reg1_1__Tie0,
  Convert__Imm1_1,
  Convert_NoOperands,
  Convert__Reg1_1__Reg1_3__Imm1_5,
  Convert__Reg1_1__Imm1_3__Imm1_5,
  Convert__Reg1_1__Reg1_4__Imm1_6,
  Convert__Reg1_1__Imm1_4__Imm1_6,
  Convert__Reg1_1__Reg1_5__Imm1_7,
  Convert__Reg1_1__Imm1_5__Imm1_7,
  Convert__Reg1_1__Imm1_2__Imm1_3,
  Convert__Reg1_1__Reg1_2__Imm1_3,
  Convert__Reg1_12__Reg1_7__Imm1_8__Tie0,
  Convert__imm_95_0__Reg1_9,
  Convert__imm_95_0__Imm1_9,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__Reg1_0__Reg1_2
  { CVT_95_Reg, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_3
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_3
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_4
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_5
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_8__Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 8, CVT_95_addImmOperands, 9, CVT_Done },
  // Convert__Imm1_2
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_3__Reg1_5__Reg1_7__Imm1_6__Reg1_9__Reg1_11
  { CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_Reg, 7, CVT_95_addImmOperands, 6, CVT_95_Reg, 9, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_10__Reg1_6__Imm1_7
  { CVT_95_Reg, 10, CVT_95_Reg, 6, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_1__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_1__Reg1_3__Imm1_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_1__Imm1_3__Imm1_5
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_1__Reg1_4__Imm1_6
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_1__Imm1_4__Imm1_6
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_1__Reg1_5__Imm1_7
  { CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_1__Imm1_5__Imm1_7
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_1__Imm1_2__Imm1_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Imm1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_12__Reg1_7__Imm1_8__Tie0
  { CVT_95_Reg, 12, CVT_95_Reg, 7, CVT_95_addImmOperands, 8, CVT_Tied, 0, CVT_Done },
  // Convert__imm_95_0__Reg1_9
  { CVT_imm_95_0, 0, CVT_95_Reg, 9, CVT_Done },
  // Convert__imm_95_0__Imm1_9
  { CVT_imm_95_0, 0, CVT_95_addImmOperands, 9, CVT_Done },
};

void BPFAsmParser::
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
      static_cast<BPFOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_Reg:
      static_cast<BPFOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<BPFOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    }
  }
}

void BPFAsmParser::
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
    case CVT_imm_95_0:
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
  MCK__EXCLAIM_, // '!'
  MCK__35_, // '#'
  MCK__38_, // '&'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__STAR_, // '*'
  MCK__43_, // '+'
  MCK__MINUS_, // '-'
  MCK__47_, // '/'
  MCK__COLON_, // ':'
  MCK__LT_, // '<'
  MCK__61_, // '='
  MCK__GT_, // '>'
  MCK__63_, // '?'
  MCK_ADJCALLSTACKDOWN, // 'ADJCALLSTACKDOWN'
  MCK_ADJCALLSTACKUP, // 'ADJCALLSTACKUP'
  MCK_PSEUDO, // 'PSEUDO'
  MCK_Select, // 'Select'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK__94_, // '^'
  MCK_bswap16, // 'bswap16'
  MCK_bswap32, // 'bswap32'
  MCK_bswap64, // 'bswap64'
  MCK_call, // 'call'
  MCK_exit, // 'exit'
  MCK_goto, // 'goto'
  MCK_if, // 'if'
  MCK_ld_95_pseudo, // 'ld_pseudo'
  MCK_lea, // 'lea'
  MCK_ll, // 'll'
  MCK_lock, // 'lock'
  MCK_nop, // 'nop'
  MCK_s, // 's'
  MCK_skb, // 'skb'
  MCK_u16, // 'u16'
  MCK_u32, // 'u32'
  MCK_u64, // 'u64'
  MCK_u8, // 'u8'
  MCK__124_, // '|'
  MCK_R0, // register class 'R0'
  MCK_GPR, // register class 'GPR'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case '!':	 // 1 string to match.
      return MCK__EXCLAIM_;	 // "!"
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '&':	 // 1 string to match.
      return MCK__38_;	 // "&"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '*':	 // 1 string to match.
      return MCK__STAR_;	 // "*"
    case '+':	 // 1 string to match.
      return MCK__43_;	 // "+"
    case '-':	 // 1 string to match.
      return MCK__MINUS_;	 // "-"
    case '/':	 // 1 string to match.
      return MCK__47_;	 // "/"
    case ':':	 // 1 string to match.
      return MCK__COLON_;	 // ":"
    case '<':	 // 1 string to match.
      return MCK__LT_;	 // "<"
    case '=':	 // 1 string to match.
      return MCK__61_;	 // "="
    case '>':	 // 1 string to match.
      return MCK__GT_;	 // ">"
    case '?':	 // 1 string to match.
      return MCK__63_;	 // "?"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case '^':	 // 1 string to match.
      return MCK__94_;	 // "^"
    case 's':	 // 1 string to match.
      return MCK_s;	 // "s"
    case '|':	 // 1 string to match.
      return MCK__124_;	 // "|"
    }
    break;
  case 2:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (Name[1] != 'f')
        break;
      return MCK_if;	 // "if"
    case 'l':	 // 1 string to match.
      if (Name[1] != 'l')
        break;
      return MCK_ll;	 // "ll"
    case 'u':	 // 1 string to match.
      if (Name[1] != '8')
        break;
      return MCK_u8;	 // "u8"
    }
    break;
  case 3:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ea", 2) != 0)
        break;
      return MCK_lea;	 // "lea"
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "op", 2) != 0)
        break;
      return MCK_nop;	 // "nop"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "kb", 2) != 0)
        break;
      return MCK_skb;	 // "skb"
    case 'u':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[2] != '6')
          break;
        return MCK_u16;	 // "u16"
      case '3':	 // 1 string to match.
        if (Name[2] != '2')
          break;
        return MCK_u32;	 // "u32"
      case '6':	 // 1 string to match.
        if (Name[2] != '4')
          break;
        return MCK_u64;	 // "u64"
      }
      break;
    }
    break;
  case 4:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "all", 3) != 0)
        break;
      return MCK_call;	 // "call"
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "xit", 3) != 0)
        break;
      return MCK_exit;	 // "exit"
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "oto", 3) != 0)
        break;
      return MCK_goto;	 // "goto"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ock", 3) != 0)
        break;
      return MCK_lock;	 // "lock"
    }
    break;
  case 6:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case 'P':	 // 1 string to match.
      if (memcmp(Name.data()+1, "SEUDO", 5) != 0)
        break;
      return MCK_PSEUDO;	 // "PSEUDO"
    case 'S':	 // 1 string to match.
      if (memcmp(Name.data()+1, "elect", 5) != 0)
        break;
      return MCK_Select;	 // "Select"
    }
    break;
  case 7:	 // 3 strings to match.
    if (memcmp(Name.data()+0, "bswap", 5) != 0)
      break;
    switch (Name[5]) {
    default: break;
    case '1':	 // 1 string to match.
      if (Name[6] != '6')
        break;
      return MCK_bswap16;	 // "bswap16"
    case '3':	 // 1 string to match.
      if (Name[6] != '2')
        break;
      return MCK_bswap32;	 // "bswap32"
    case '6':	 // 1 string to match.
      if (Name[6] != '4')
        break;
      return MCK_bswap64;	 // "bswap64"
    }
    break;
  case 9:	 // 1 string to match.
    if (memcmp(Name.data()+0, "ld_pseudo", 9) != 0)
      break;
    return MCK_ld_95_pseudo;	 // "ld_pseudo"
  case 14:	 // 1 string to match.
    if (memcmp(Name.data()+0, "ADJCALLSTACKUP", 14) != 0)
      break;
    return MCK_ADJCALLSTACKUP;	 // "ADJCALLSTACKUP"
  case 16:	 // 1 string to match.
    if (memcmp(Name.data()+0, "ADJCALLSTACKDOWN", 16) != 0)
      break;
    return MCK_ADJCALLSTACKDOWN;	 // "ADJCALLSTACKDOWN"
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

  case MCK_R0:
    return B == MCK_GPR;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  BPFOperand &Operand = (BPFOperand&)GOp;
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
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case BPF::R0: OpKind = MCK_R0; break;
    case BPF::R1: OpKind = MCK_GPR; break;
    case BPF::R2: OpKind = MCK_GPR; break;
    case BPF::R3: OpKind = MCK_GPR; break;
    case BPF::R4: OpKind = MCK_GPR; break;
    case BPF::R5: OpKind = MCK_GPR; break;
    case BPF::R6: OpKind = MCK_GPR; break;
    case BPF::R7: OpKind = MCK_GPR; break;
    case BPF::R8: OpKind = MCK_GPR; break;
    case BPF::R9: OpKind = MCK_GPR; break;
    case BPF::R10: OpKind = MCK_GPR; break;
    case BPF::R11: OpKind = MCK_GPR; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t BPFAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\000\001#\001*\007bswap16\007bswap32\007bswap64\004call\004exit\004goto"
    "\002if\tld_pseudo\003lea\004lock\003nop\002r0";

namespace {
  struct MatchEntry {
    uint8_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[13];
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
  { 0 /*  */, BPF::MOV_rr, Convert__Reg1_0__Reg1_2, 0, { MCK_GPR, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::MOV_ri, Convert__Reg1_0__Imm1_2, 0, { MCK_GPR, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::AND_rr, Convert__Reg1_0__Tie0__Reg1_3, 0, { MCK_GPR, MCK__38_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::AND_ri, Convert__Reg1_0__Tie0__Imm1_3, 0, { MCK_GPR, MCK__38_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::MUL_rr, Convert__Reg1_0__Tie0__Reg1_3, 0, { MCK_GPR, MCK__STAR_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::MUL_ri, Convert__Reg1_0__Tie0__Imm1_3, 0, { MCK_GPR, MCK__STAR_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::ADD_rr, Convert__Reg1_0__Tie0__Reg1_3, 0, { MCK_GPR, MCK__43_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::ADD_ri, Convert__Reg1_0__Tie0__Imm1_3, 0, { MCK_GPR, MCK__43_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SUB_rr, Convert__Reg1_0__Tie0__Reg1_3, 0, { MCK_GPR, MCK__MINUS_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SUB_ri, Convert__Reg1_0__Tie0__Imm1_3, 0, { MCK_GPR, MCK__MINUS_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::DIV_rr, Convert__Reg1_0__Tie0__Reg1_3, 0, { MCK_GPR, MCK__47_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::DIV_ri, Convert__Reg1_0__Tie0__Imm1_3, 0, { MCK_GPR, MCK__47_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::LD_imm64, Convert__Reg1_0__Imm1_2, 0, { MCK_GPR, MCK__61_, MCK_Imm, MCK_ll }, },
  { 0 /*  */, BPF::XOR_rr, Convert__Reg1_0__Tie0__Reg1_3, 0, { MCK_GPR, MCK__94_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::XOR_ri, Convert__Reg1_0__Tie0__Imm1_3, 0, { MCK_GPR, MCK__94_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::OR_rr, Convert__Reg1_0__Tie0__Reg1_3, 0, { MCK_GPR, MCK__124_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::OR_ri, Convert__Reg1_0__Tie0__Imm1_3, 0, { MCK_GPR, MCK__124_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SLL_rr, Convert__Reg1_0__Tie0__Reg1_4, 0, { MCK_GPR, MCK__LT_, MCK__LT_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SLL_ri, Convert__Reg1_0__Tie0__Imm1_4, 0, { MCK_GPR, MCK__LT_, MCK__LT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SRL_rr, Convert__Reg1_0__Tie0__Reg1_4, 0, { MCK_GPR, MCK__GT_, MCK__GT_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SRL_ri, Convert__Reg1_0__Tie0__Imm1_4, 0, { MCK_GPR, MCK__GT_, MCK__GT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::SRA_rr, Convert__Reg1_0__Tie0__Reg1_5, 0, { MCK_GPR, MCK_s, MCK__GT_, MCK__GT_, MCK__61_, MCK_GPR }, },
  { 0 /*  */, BPF::SRA_ri, Convert__Reg1_0__Tie0__Imm1_5, 0, { MCK_GPR, MCK_s, MCK__GT_, MCK__GT_, MCK__61_, MCK_Imm }, },
  { 0 /*  */, BPF::LDH, Convert__Reg1_0__Reg1_8__Imm1_9, 0, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDW, Convert__Reg1_0__Reg1_8__Imm1_9, 0, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDD, Convert__Reg1_0__Reg1_8__Imm1_9, 0, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u64, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, BPF::LDB, Convert__Reg1_0__Reg1_8__Imm1_9, 0, { MCK_GPR, MCK__61_, MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_ }, },
  { 1 /* # */, BPF::ADJCALLSTACKDOWN, Convert__Imm1_2, 0, { MCK__35_, MCK_ADJCALLSTACKDOWN, MCK_Imm }, },
  { 1 /* # */, BPF::ADJCALLSTACKUP, Convert__Imm1_2__Imm1_3, 0, { MCK__35_, MCK_ADJCALLSTACKUP, MCK_Imm, MCK_Imm }, },
  { 1 /* # */, BPF::Select, Convert__Reg1_3__Reg1_5__Reg1_7__Imm1_6__Reg1_9__Reg1_11, 0, { MCK__35_, MCK_Select, MCK_PSEUDO, MCK_GPR, MCK__61_, MCK_GPR, MCK_Imm, MCK_GPR, MCK__63_, MCK_GPR, MCK__COLON_, MCK_GPR }, },
  { 3 /* * */, BPF::STH, Convert__Reg1_10__Reg1_6__Imm1_7, 0, { MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 3 /* * */, BPF::STW, Convert__Reg1_10__Reg1_6__Imm1_7, 0, { MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 3 /* * */, BPF::STD, Convert__Reg1_10__Reg1_6__Imm1_7, 0, { MCK__STAR_, MCK__40_, MCK_u64, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 3 /* * */, BPF::STB, Convert__Reg1_10__Reg1_6__Imm1_7, 0, { MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__61_, MCK_GPR }, },
  { 5 /* bswap16 */, BPF::BSWAP16, Convert__Reg1_1__Tie0, 0, { MCK_bswap16, MCK_GPR }, },
  { 13 /* bswap32 */, BPF::BSWAP32, Convert__Reg1_1__Tie0, 0, { MCK_bswap32, MCK_GPR }, },
  { 21 /* bswap64 */, BPF::BSWAP64, Convert__Reg1_1__Tie0, 0, { MCK_bswap64, MCK_GPR }, },
  { 29 /* call */, BPF::JAL, Convert__Imm1_1, 0, { MCK_call, MCK_Imm }, },
  { 34 /* exit */, BPF::RET, Convert_NoOperands, 0, { MCK_exit }, },
  { 39 /* goto */, BPF::JMP, Convert__Imm1_1, 0, { MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JUGT_rr, Convert__Reg1_1__Reg1_3__Imm1_5, 0, { MCK_if, MCK_GPR, MCK__GT_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JUGT_ri, Convert__Reg1_1__Imm1_3__Imm1_5, 0, { MCK_if, MCK_GPR, MCK__GT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JNE_rr, Convert__Reg1_1__Reg1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK__EXCLAIM_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JNE_ri, Convert__Reg1_1__Imm1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK__EXCLAIM_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JEQ_rr, Convert__Reg1_1__Reg1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK__61_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JEQ_ri, Convert__Reg1_1__Imm1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK__61_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JUGE_rr, Convert__Reg1_1__Reg1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK__GT_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JUGE_ri, Convert__Reg1_1__Imm1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK__GT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JSGT_rr, Convert__Reg1_1__Reg1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JSGT_ri, Convert__Reg1_1__Imm1_4__Imm1_6, 0, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JSGE_rr, Convert__Reg1_1__Reg1_5__Imm1_7, 0, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK__61_, MCK_GPR, MCK_goto, MCK_Imm }, },
  { 44 /* if */, BPF::JSGE_ri, Convert__Reg1_1__Imm1_5__Imm1_7, 0, { MCK_if, MCK_GPR, MCK_s, MCK__GT_, MCK__61_, MCK_Imm, MCK_goto, MCK_Imm }, },
  { 47 /* ld_pseudo */, BPF::LD_pseudo, Convert__Reg1_1__Imm1_2__Imm1_3, 0, { MCK_ld_95_pseudo, MCK_GPR, MCK_Imm, MCK_Imm }, },
  { 57 /* lea */, BPF::FI_ri, Convert__Reg1_1__Reg1_2__Imm1_3, 0, { MCK_lea, MCK_GPR, MCK_GPR, MCK_Imm }, },
  { 61 /* lock */, BPF::XADD32, Convert__Reg1_12__Reg1_7__Imm1_8__Tie0, 0, { MCK_lock, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__43_, MCK__61_, MCK_GPR }, },
  { 61 /* lock */, BPF::XADD64, Convert__Reg1_12__Reg1_7__Imm1_8__Tie0, 0, { MCK_lock, MCK__STAR_, MCK__40_, MCK_u64, MCK__STAR_, MCK__41_, MCK__40_, MCK_GPR, MCK_Imm, MCK__41_, MCK__43_, MCK__61_, MCK_GPR }, },
  { 66 /* nop */, BPF::NOP, Convert__Imm1_1, 0, { MCK_nop, MCK_Imm }, },
  { 70 /* r0 */, BPF::LD_IND_H, Convert__imm_95_0__Reg1_9, 0, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_GPR, MCK__93_ }, },
  { 70 /* r0 */, BPF::LD_ABS_H, Convert__imm_95_0__Imm1_9, 0, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u16, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 70 /* r0 */, BPF::LD_IND_W, Convert__imm_95_0__Reg1_9, 0, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_GPR, MCK__93_ }, },
  { 70 /* r0 */, BPF::LD_ABS_W, Convert__imm_95_0__Imm1_9, 0, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u32, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 70 /* r0 */, BPF::LD_IND_B, Convert__imm_95_0__Reg1_9, 0, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_GPR, MCK__93_ }, },
  { 70 /* r0 */, BPF::LD_ABS_B, Convert__imm_95_0__Imm1_9, 0, { MCK_R0, MCK__61_, MCK__STAR_, MCK__40_, MCK_u8, MCK__STAR_, MCK__41_, MCK_skb, MCK__91_, MCK_Imm, MCK__93_ }, },
};

unsigned BPFAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 13) {
    ErrorInfo = 13;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic;
  if (Operands[0]->isToken())
    Mnemonic = ((BPFOperand&)*Operands[0]).getToken();

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
  auto MnemonicRange = std::make_pair(Start, End);
  unsigned SIndex = Mnemonic.empty() ? 0 : 1;
  if (!Mnemonic.empty())
    MnemonicRange = std::equal_range(Start, End, Mnemonic.lower(), LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    bool OperandsValid = true;
    for (unsigned FormalIdx = SIndex, ActualIdx = SIndex; FormalIdx != 13; ++FormalIdx) {
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

#endif // GET_MATCHER_IMPLEMENTATION

