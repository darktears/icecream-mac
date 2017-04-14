/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t BPFMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(504403158265495552),	// ADD_ri
    UINT64_C(1080863910568919040),	// ADD_rr
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(6269010681299730432),	// AND_ri
    UINT64_C(6845471433603153920),	// AND_rr
    UINT64_C(15852670688344145936),	// BSWAP16
    UINT64_C(15852670688344145952),	// BSWAP32
    UINT64_C(15852670688344145984),	// BSWAP64
    UINT64_C(3963167672086036480),	// DIV_ri
    UINT64_C(4539628424389459968),	// DIV_rr
    UINT64_C(1738389456165011456),	// FI_ri
    UINT64_C(9583660007044415488),	// JAL
    UINT64_C(1513209474796486656),	// JEQ_ri
    UINT64_C(2089670227099910144),	// JEQ_rr
    UINT64_C(360287970189639680),	// JMP
    UINT64_C(6124895493223874560),	// JNE_ri
    UINT64_C(6701356245527298048),	// JNE_rr
    UINT64_C(8430738502437568512),	// JSGE_ri
    UINT64_C(9007199254740992000),	// JSGE_rr
    UINT64_C(7277816997830721536),	// JSGT_ri
    UINT64_C(7854277750134145024),	// JSGT_rr
    UINT64_C(3819052484010180608),	// JUGE_ri
    UINT64_C(4395513236313604096),	// JUGE_rr
    UINT64_C(2666130979403333632),	// JUGT_ri
    UINT64_C(3242591731706757120),	// JUGT_rr
    UINT64_C(8142508126285856768),	// LDB
    UINT64_C(8718968878589280256),	// LDD
    UINT64_C(7566047373982433280),	// LDH
    UINT64_C(6989586621679009792),	// LDW
    UINT64_C(3458764513820540928),	// LD_ABS_B
    UINT64_C(2882303761517117440),	// LD_ABS_H
    UINT64_C(2305843009213693952),	// LD_ABS_W
    UINT64_C(5764607523034234880),	// LD_IND_B
    UINT64_C(5188146770730811392),	// LD_IND_H
    UINT64_C(4611686018427387904),	// LD_IND_W
    UINT64_C(1729382256910270464),	// LD_imm64
    UINT64_C(1729382256910270464),	// LD_pseudo
    UINT64_C(13186539708940812288),	// MOV_ri
    UINT64_C(13763000461244235776),	// MOV_rr
    UINT64_C(2810246167479189504),	// MUL_ri
    UINT64_C(3386706919782612992),	// MUL_rr
    UINT64_C(13763000461244235776),	// NOP
    UINT64_C(5116089176692883456),	// OR_ri
    UINT64_C(5692549928996306944),	// OR_rr
    UINT64_C(10736581511651262464),	// RET
    UINT64_C(7421932185906577408),	// SLL_ri
    UINT64_C(7998392938210000896),	// SLL_rr
    UINT64_C(14339461213547659264),	// SRA_ri
    UINT64_C(14915921965851082752),	// SRA_rr
    UINT64_C(8574853690513424384),	// SRL_ri
    UINT64_C(9151314442816847872),	// SRL_rr
    UINT64_C(8286623314361712640),	// STB
    UINT64_C(8863084066665136128),	// STD
    UINT64_C(7710162562058289152),	// STH
    UINT64_C(7133701809754865664),	// STW
    UINT64_C(1657324662872342528),	// SUB_ri
    UINT64_C(2233785415175766016),	// SUB_rr
    UINT64_C(0),
    UINT64_C(14051230837395947520),	// XADD32
    UINT64_C(15780613094306217984),	// XADD64
    UINT64_C(12033618204333965312),	// XOR_ri
    UINT64_C(12610078956637388800),	// XOR_rr
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case BPF::FI_ri:
    case BPF::NOP:
    case BPF::RET: {
      break;
    }
    case BPF::JMP: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::JAL: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::BSWAP16:
    case BPF::BSWAP32:
    case BPF::BSWAP64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      break;
    }
    case BPF::JEQ_ri:
    case BPF::JNE_ri:
    case BPF::JSGE_ri:
    case BPF::JSGT_ri:
    case BPF::JUGE_ri:
    case BPF::JUGT_ri: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::LDB:
    case BPF::LDD:
    case BPF::LDH:
    case BPF::LDW: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(983040)) << 36;
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::LD_imm64:
    case BPF::MOV_ri: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::ADD_ri:
    case BPF::AND_ri:
    case BPF::DIV_ri:
    case BPF::MUL_ri:
    case BPF::OR_ri:
    case BPF::SLL_ri:
    case BPF::SRA_ri:
    case BPF::SRL_ri:
    case BPF::SUB_ri:
    case BPF::XOR_ri: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::LD_pseudo: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      // op: pseudo
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::MOV_rr: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::JEQ_rr:
    case BPF::JNE_rr:
    case BPF::JSGE_rr:
    case BPF::JSGT_rr:
    case BPF::JUGE_rr:
    case BPF::JUGT_rr: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::ADD_rr:
    case BPF::AND_rr:
    case BPF::DIV_rr:
    case BPF::MUL_rr:
    case BPF::OR_rr:
    case BPF::SLL_rr:
    case BPF::SRA_rr:
    case BPF::SRL_rr:
    case BPF::SUB_rr:
    case BPF::XOR_rr: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::XADD32:
    case BPF::XADD64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048575)) << 32;
      break;
    }
    case BPF::LD_ABS_B:
    case BPF::LD_ABS_H:
    case BPF::LD_ABS_W: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::STB:
    case BPF::STD:
    case BPF::STH:
    case BPF::STW: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048575)) << 32;
      break;
    }
    case BPF::LD_IND_B:
    case BPF::LD_IND_H:
    case BPF::LD_IND_W: {
      // op: val
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
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
uint64_t BPFMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

void BPFMCCodeEmitter::verifyInstructionPredicates(
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
    0, // ADD_ri = 96
    0, // ADD_rr = 97
    0, // ADJCALLSTACKDOWN = 98
    0, // ADJCALLSTACKUP = 99
    0, // AND_ri = 100
    0, // AND_rr = 101
    0, // BSWAP16 = 102
    0, // BSWAP32 = 103
    0, // BSWAP64 = 104
    0, // DIV_ri = 105
    0, // DIV_rr = 106
    0, // FI_ri = 107
    0, // JAL = 108
    0, // JEQ_ri = 109
    0, // JEQ_rr = 110
    0, // JMP = 111
    0, // JNE_ri = 112
    0, // JNE_rr = 113
    0, // JSGE_ri = 114
    0, // JSGE_rr = 115
    0, // JSGT_ri = 116
    0, // JSGT_rr = 117
    0, // JUGE_ri = 118
    0, // JUGE_rr = 119
    0, // JUGT_ri = 120
    0, // JUGT_rr = 121
    0, // LDB = 122
    0, // LDD = 123
    0, // LDH = 124
    0, // LDW = 125
    0, // LD_ABS_B = 126
    0, // LD_ABS_H = 127
    0, // LD_ABS_W = 128
    0, // LD_IND_B = 129
    0, // LD_IND_H = 130
    0, // LD_IND_W = 131
    0, // LD_imm64 = 132
    0, // LD_pseudo = 133
    0, // MOV_ri = 134
    0, // MOV_rr = 135
    0, // MUL_ri = 136
    0, // MUL_rr = 137
    0, // NOP = 138
    0, // OR_ri = 139
    0, // OR_rr = 140
    0, // RET = 141
    0, // SLL_ri = 142
    0, // SLL_rr = 143
    0, // SRA_ri = 144
    0, // SRA_rr = 145
    0, // SRL_ri = 146
    0, // SRL_rr = 147
    0, // STB = 148
    0, // STD = 149
    0, // STH = 150
    0, // STW = 151
    0, // SUB_ri = 152
    0, // SUB_rr = 153
    0, // Select = 154
    0, // XADD32 = 155
    0, // XADD64 = 156
    0, // XOR_ri = 157
    0, // XOR_rr = 158
  };

  assert(Inst.getOpcode() < 159);
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
