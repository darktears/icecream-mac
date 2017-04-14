/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t RISCVMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(51),	// ADD
    UINT64_C(19),	// ADDI
    UINT64_C(28723),	// AND
    UINT64_C(28691),	// ANDI
    UINT64_C(24627),	// OR
    UINT64_C(24595),	// ORI
    UINT64_C(4147),	// SLL
    UINT64_C(8243),	// SLT
    UINT64_C(8211),	// SLTI
    UINT64_C(12307),	// SLTIU
    UINT64_C(12339),	// SLTU
    UINT64_C(1073762355),	// SRA
    UINT64_C(20531),	// SRL
    UINT64_C(1073741875),	// SUB
    UINT64_C(16435),	// XOR
    UINT64_C(16403),	// XORI
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case RISCV::ADDI:
    case RISCV::ANDI:
    case RISCV::ORI:
    case RISCV::SLTI:
    case RISCV::SLTIU:
    case RISCV::XORI: {
      // op: imm12
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(4095)) << 20;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 15;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 7;
      break;
    }
    case RISCV::ADD:
    case RISCV::AND:
    case RISCV::OR:
    case RISCV::SLL:
    case RISCV::SLT:
    case RISCV::SLTU:
    case RISCV::SRA:
    case RISCV::SRL:
    case RISCV::SUB:
    case RISCV::XOR: {
      // op: rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 20;
      // op: rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 15;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 7;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_None = 0
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG
uint64_t RISCVMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

void RISCVMCCodeEmitter::verifyInstructionPredicates(
    const MCInst &Inst, uint64_t AvailableFeatures) const {
#ifndef NDEBUG
  static uint64_t RequiredFeatures[] = {
    0, // PHI = 0
    0, // INLINEASM = 1
    0, // CFI_INSTRUCTION = 2
    0, // EH_LABEL = 3
    0, // GC_LABEL = 4
    0, // KILL = 5
    0, // EXTRACT_SUBREG = 6
    0, // INSERT_SUBREG = 7
    0, // IMPLICIT_DEF = 8
    0, // SUBREG_TO_REG = 9
    0, // COPY_TO_REGCLASS = 10
    0, // DBG_VALUE = 11
    0, // REG_SEQUENCE = 12
    0, // COPY = 13
    0, // BUNDLE = 14
    0, // LIFETIME_START = 15
    0, // LIFETIME_END = 16
    0, // STACKMAP = 17
    0, // FENTRY_CALL = 18
    0, // PATCHPOINT = 19
    0, // LOAD_STACK_GUARD = 20
    0, // STATEPOINT = 21
    0, // LOCAL_ESCAPE = 22
    0, // FAULTING_OP = 23
    0, // PATCHABLE_OP = 24
    0, // PATCHABLE_FUNCTION_ENTER = 25
    0, // PATCHABLE_RET = 26
    0, // PATCHABLE_FUNCTION_EXIT = 27
    0, // PATCHABLE_TAIL_CALL = 28
    0, // G_ADD = 29
    0, // G_SUB = 30
    0, // G_MUL = 31
    0, // G_SDIV = 32
    0, // G_UDIV = 33
    0, // G_SREM = 34
    0, // G_UREM = 35
    0, // G_AND = 36
    0, // G_OR = 37
    0, // G_XOR = 38
    0, // G_FRAME_INDEX = 39
    0, // G_GLOBAL_VALUE = 40
    0, // G_EXTRACT = 41
    0, // G_UNMERGE_VALUES = 42
    0, // G_INSERT = 43
    0, // G_SEQUENCE = 44
    0, // G_MERGE_VALUES = 45
    0, // G_PTRTOINT = 46
    0, // G_INTTOPTR = 47
    0, // G_BITCAST = 48
    0, // G_LOAD = 49
    0, // G_STORE = 50
    0, // G_BRCOND = 51
    0, // G_BRINDIRECT = 52
    0, // G_INTRINSIC = 53
    0, // G_INTRINSIC_W_SIDE_EFFECTS = 54
    0, // G_ANYEXT = 55
    0, // G_TRUNC = 56
    0, // G_CONSTANT = 57
    0, // G_FCONSTANT = 58
    0, // G_VASTART = 59
    0, // G_VAARG = 60
    0, // G_SEXT = 61
    0, // G_ZEXT = 62
    0, // G_SHL = 63
    0, // G_LSHR = 64
    0, // G_ASHR = 65
    0, // G_ICMP = 66
    0, // G_FCMP = 67
    0, // G_SELECT = 68
    0, // G_UADDE = 69
    0, // G_USUBE = 70
    0, // G_SADDO = 71
    0, // G_SSUBO = 72
    0, // G_UMULO = 73
    0, // G_SMULO = 74
    0, // G_UMULH = 75
    0, // G_SMULH = 76
    0, // G_FADD = 77
    0, // G_FSUB = 78
    0, // G_FMUL = 79
    0, // G_FDIV = 80
    0, // G_FREM = 81
    0, // G_FPOW = 82
    0, // G_FNEG = 83
    0, // G_FPEXT = 84
    0, // G_FPTRUNC = 85
    0, // G_FPTOSI = 86
    0, // G_FPTOUI = 87
    0, // G_SITOFP = 88
    0, // G_UITOFP = 89
    0, // G_GEP = 90
    0, // G_PTR_MASK = 91
    0, // G_BR = 92
    0, // G_INSERT_VECTOR_ELT = 93
    0, // G_EXTRACT_VECTOR_ELT = 94
    0, // G_SHUFFLE_VECTOR = 95
    0, // ADD = 96
    0, // ADDI = 97
    0, // AND = 98
    0, // ANDI = 99
    0, // OR = 100
    0, // ORI = 101
    0, // SLL = 102
    0, // SLT = 103
    0, // SLTI = 104
    0, // SLTIU = 105
    0, // SLTU = 106
    0, // SRA = 107
    0, // SRL = 108
    0, // SUB = 109
    0, // XOR = 110
    0, // XORI = 111
  };

  assert(Inst.getOpcode() < 112);
  uint64_t MissingFeatures =
      (AvailableFeatures & RequiredFeatures[Inst.getOpcode()]) ^
      RequiredFeatures[Inst.getOpcode()];
  if (MissingFeatures) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << MCII.getName(Inst.getOpcode()).str()
        << " instruction but the ";
    for (unsigned i = 0; i < 8 * sizeof(MissingFeatures); ++i)
      if (MissingFeatures & (1ULL << i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str());
  }
#else
// Silence unused variable warning on targets that don't use MCII for other purposes (e.g. BPF).
(void)MCII;
#endif // NDEBUG
}
#endif
