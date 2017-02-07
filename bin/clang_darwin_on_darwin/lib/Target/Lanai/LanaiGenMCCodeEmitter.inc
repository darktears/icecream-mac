/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t LanaiMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(268632064),	// ADDC_F_I_HI
    UINT64_C(268566528),	// ADDC_F_I_LO
    UINT64_C(3221356800),	// ADDC_F_R
    UINT64_C(268500992),	// ADDC_I_HI
    UINT64_C(268435456),	// ADDC_I_LO
    UINT64_C(3221225728),	// ADDC_R
    UINT64_C(196608),	// ADD_F_I_HI
    UINT64_C(131072),	// ADD_F_I_LO
    UINT64_C(3221356544),	// ADD_F_R
    UINT64_C(65536),	// ADD_I_HI
    UINT64_C(0),	// ADD_I_LO
    UINT64_C(3221225472),	// ADD_R
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(1073938432),	// AND_F_I_HI
    UINT64_C(1073872896),	// AND_F_I_LO
    UINT64_C(3221357568),	// AND_F_R
    UINT64_C(1073807360),	// AND_I_HI
    UINT64_C(1073741824),	// AND_I_LO
    UINT64_C(3221226496),	// AND_R
    UINT64_C(3758096384),	// BRCC
    UINT64_C(3238003968),	// BRIND_CC
    UINT64_C(3238003968),	// BRIND_CCA
    UINT64_C(3774873602),	// BRR
    UINT64_C(3758096384),	// BT
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(3238003968),	// JR
    UINT64_C(4026531840),	// LDADDR
    UINT64_C(4026744832),	// LDBs_RI
    UINT64_C(2684354564),	// LDBs_RR
    UINT64_C(4026748928),	// LDBz_RI
    UINT64_C(2684354565),	// LDBz_RR
    UINT64_C(4026728448),	// LDHs_RI
    UINT64_C(2684354560),	// LDHs_RR
    UINT64_C(4026732544),	// LDHz_RI
    UINT64_C(2684354561),	// LDHz_RR
    UINT64_C(2147483648),	// LDW_RI
    UINT64_C(2684354562),	// LDW_RR
    UINT64_C(2684354563),	// LDWz_RR
    UINT64_C(3489660930),	// LEADZ
    UINT64_C(2),	// LOG0
    UINT64_C(3),	// LOG1
    UINT64_C(4),	// LOG2
    UINT64_C(5),	// LOG3
    UINT64_C(6),	// LOG4
    UINT64_C(65536),	// MOVHI
    UINT64_C(1),	// NOP
    UINT64_C(1342373888),	// OR_F_I_HI
    UINT64_C(1342308352),	// OR_F_I_LO
    UINT64_C(3221357824),	// OR_F_R
    UINT64_C(1342242816),	// OR_I_HI
    UINT64_C(1342177280),	// OR_I_LO
    UINT64_C(3221226752),	// OR_R
    UINT64_C(3489660929),	// POPC
    UINT64_C(2165768188),	// RET
    UINT64_C(1879244800),	// SA_F_I
    UINT64_C(1879113728),	// SA_I
    UINT64_C(3758096386),	// SCC
    UINT64_C(3221227264),	// SELECT
    UINT64_C(537067520),	// SFSUB_F_RI_HI
    UINT64_C(537001984),	// SFSUB_F_RI_LO
    UINT64_C(3221357056),	// SFSUB_F_RR
    UINT64_C(3221358464),	// SHL_F_R
    UINT64_C(3221227392),	// SHL_R
    UINT64_C(4026662912),	// SLI
    UINT64_C(1879179264),	// SL_F_I
    UINT64_C(1879048192),	// SL_I
    UINT64_C(3221358528),	// SRA_F_R
    UINT64_C(3221227456),	// SRA_R
    UINT64_C(3221358464),	// SRL_F_R
    UINT64_C(3221227392),	// SRL_R
    UINT64_C(4026597376),	// STADDR
    UINT64_C(4026753024),	// STB_RI
    UINT64_C(2952790020),	// STB_RR
    UINT64_C(4026736640),	// STH_RI
    UINT64_C(2952790016),	// STH_RR
    UINT64_C(805502976),	// SUBB_F_I_HI
    UINT64_C(805437440),	// SUBB_F_I_LO
    UINT64_C(3221357312),	// SUBB_F_R
    UINT64_C(805371904),	// SUBB_I_HI
    UINT64_C(805306368),	// SUBB_I_LO
    UINT64_C(3221226240),	// SUBB_R
    UINT64_C(537067520),	// SUB_F_I_HI
    UINT64_C(537001984),	// SUB_F_I_LO
    UINT64_C(3221357056),	// SUB_F_R
    UINT64_C(536936448),	// SUB_I_HI
    UINT64_C(536870912),	// SUB_I_LO
    UINT64_C(3221225984),	// SUB_R
    UINT64_C(2415919104),	// SW_RI
    UINT64_C(2952790018),	// SW_RR
    UINT64_C(3489660931),	// TRAILZ
    UINT64_C(1610809344),	// XOR_F_I_HI
    UINT64_C(1610743808),	// XOR_F_I_LO
    UINT64_C(3221358080),	// XOR_F_R
    UINT64_C(1610678272),	// XOR_I_HI
    UINT64_C(1610612736),	// XOR_I_LO
    UINT64_C(3221227008),	// XOR_R
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case Lanai::LOG0:
    case Lanai::LOG1:
    case Lanai::LOG2:
    case Lanai::LOG3:
    case Lanai::LOG4:
    case Lanai::NOP:
    case Lanai::RET: {
      break;
    }
    case Lanai::BRR: {
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= op & UINT64_C(1);
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(65532);
      break;
    }
    case Lanai::STB_RI:
    case Lanai::STH_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 11;
      // op: Q
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 10;
      // op: dst
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(126976)) << 6;
      Value |= op & UINT64_C(1023);
      Value = adjustPqBitsSpls(MI, Value, STI);
      break;
    }
    case Lanai::LDBs_RI:
    case Lanai::LDBz_RI:
    case Lanai::LDHs_RI:
    case Lanai::LDHz_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 11;
      // op: Q
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 10;
      // op: src
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(126976)) << 6;
      Value |= op & UINT64_C(1023);
      Value = adjustPqBitsSpls(MI, Value, STI);
      break;
    }
    case Lanai::SW_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 17;
      // op: Q
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      // op: dst
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= op & UINT64_C(8126464);
      Value |= op & UINT64_C(65535);
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LDW_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 17;
      // op: Q
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      // op: src
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= op & UINT64_C(8126464);
      Value |= op & UINT64_C(65535);
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::STB_RR:
    case Lanai::STH_RR:
    case Lanai::SW_RR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 17;
      // op: Q
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      // op: dst
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1015808)) << 3;
      Value |= (op & UINT64_C(31744)) << 1;
      Value |= (op & UINT64_C(255)) << 3;
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LDBs_RR:
    case Lanai::LDBz_RR:
    case Lanai::LDHs_RR:
    case Lanai::LDHz_RR:
    case Lanai::LDW_RR:
    case Lanai::LDWz_RR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 17;
      // op: Q
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      // op: src
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1015808)) << 3;
      Value |= (op & UINT64_C(31744)) << 1;
      Value |= (op & UINT64_C(255)) << 3;
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LEADZ:
    case Lanai::POPC:
    case Lanai::TRAILZ: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      break;
    }
    case Lanai::ADDC_F_R:
    case Lanai::ADDC_R:
    case Lanai::ADD_F_R:
    case Lanai::ADD_R:
    case Lanai::AND_F_R:
    case Lanai::AND_R:
    case Lanai::OR_F_R:
    case Lanai::OR_R:
    case Lanai::SELECT:
    case Lanai::SHL_F_R:
    case Lanai::SHL_R:
    case Lanai::SRA_F_R:
    case Lanai::SRA_R:
    case Lanai::SRL_F_R:
    case Lanai::SRL_R:
    case Lanai::SUBB_F_R:
    case Lanai::SUBB_R:
    case Lanai::SUB_F_R:
    case Lanai::SUB_R:
    case Lanai::XOR_F_R:
    case Lanai::XOR_R: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 11;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::ADDC_F_I_HI:
    case Lanai::ADDC_F_I_LO:
    case Lanai::ADDC_I_HI:
    case Lanai::ADDC_I_LO:
    case Lanai::ADD_F_I_HI:
    case Lanai::ADD_F_I_LO:
    case Lanai::ADD_I_HI:
    case Lanai::ADD_I_LO:
    case Lanai::AND_F_I_HI:
    case Lanai::AND_F_I_LO:
    case Lanai::AND_I_HI:
    case Lanai::AND_I_LO:
    case Lanai::OR_F_I_HI:
    case Lanai::OR_F_I_LO:
    case Lanai::OR_I_HI:
    case Lanai::OR_I_LO:
    case Lanai::SA_F_I:
    case Lanai::SA_I:
    case Lanai::SL_F_I:
    case Lanai::SL_I:
    case Lanai::SUBB_F_I_HI:
    case Lanai::SUBB_F_I_LO:
    case Lanai::SUBB_I_HI:
    case Lanai::SUBB_I_LO:
    case Lanai::SUB_F_I_HI:
    case Lanai::SUB_F_I_LO:
    case Lanai::SUB_I_HI:
    case Lanai::SUB_I_LO:
    case Lanai::XOR_F_I_HI:
    case Lanai::XOR_F_I_LO:
    case Lanai::XOR_I_HI:
    case Lanai::XOR_I_LO: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(65535);
      break;
    }
    case Lanai::STADDR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= op & UINT64_C(65535);
      break;
    }
    case Lanai::SLI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= op & UINT64_C(65535);
      break;
    }
    case Lanai::MOVHI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(65535);
      break;
    }
    case Lanai::LDADDR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 23;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= op & UINT64_C(65535);
      break;
    }
    case Lanai::BRIND_CC: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::SCC: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= op & UINT64_C(1);
      break;
    }
    case Lanai::SFSUB_F_RR: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 11;
      break;
    }
    case Lanai::BRIND_CCA: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 11;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::SFSUB_F_RI_HI:
    case Lanai::SFSUB_F_RI_LO: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 18;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(65535);
      break;
    }
    case Lanai::JR: {
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(31)) << 11;
      break;
    }
    case Lanai::BT: {
      // op: addr
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      Value |= op & UINT64_C(33554428);
      break;
    }
    case Lanai::BRCC: {
      // op: addr
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      Value |= op & UINT64_C(33554428);
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= op & UINT64_C(1);
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
uint64_t LanaiMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

void LanaiMCCodeEmitter::verifyInstructionPredicates(
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
    0, // PATCHPOINT = 18
    0, // LOAD_STACK_GUARD = 19
    0, // STATEPOINT = 20
    0, // LOCAL_ESCAPE = 21
    0, // FAULTING_LOAD_OP = 22
    0, // PATCHABLE_OP = 23
    0, // PATCHABLE_FUNCTION_ENTER = 24
    0, // PATCHABLE_RET = 25
    0, // PATCHABLE_FUNCTION_EXIT = 26
    0, // PATCHABLE_TAIL_CALL = 27
    0, // G_ADD = 28
    0, // G_SUB = 29
    0, // G_MUL = 30
    0, // G_SDIV = 31
    0, // G_UDIV = 32
    0, // G_SREM = 33
    0, // G_UREM = 34
    0, // G_AND = 35
    0, // G_OR = 36
    0, // G_XOR = 37
    0, // G_FRAME_INDEX = 38
    0, // G_GLOBAL_VALUE = 39
    0, // G_EXTRACT = 40
    0, // G_INSERT = 41
    0, // G_SEQUENCE = 42
    0, // G_PTRTOINT = 43
    0, // G_INTTOPTR = 44
    0, // G_BITCAST = 45
    0, // G_LOAD = 46
    0, // G_STORE = 47
    0, // G_BRCOND = 48
    0, // G_INTRINSIC = 49
    0, // G_INTRINSIC_W_SIDE_EFFECTS = 50
    0, // G_ANYEXT = 51
    0, // G_TRUNC = 52
    0, // G_CONSTANT = 53
    0, // G_FCONSTANT = 54
    0, // G_SEXT = 55
    0, // G_ZEXT = 56
    0, // G_SHL = 57
    0, // G_LSHR = 58
    0, // G_ASHR = 59
    0, // G_ICMP = 60
    0, // G_FCMP = 61
    0, // G_SELECT = 62
    0, // G_UADDE = 63
    0, // G_USUBE = 64
    0, // G_SADDO = 65
    0, // G_SSUBO = 66
    0, // G_UMULO = 67
    0, // G_SMULO = 68
    0, // G_FADD = 69
    0, // G_FSUB = 70
    0, // G_FMUL = 71
    0, // G_FDIV = 72
    0, // G_FREM = 73
    0, // G_FPEXT = 74
    0, // G_FPTRUNC = 75
    0, // G_FPTOSI = 76
    0, // G_FPTOUI = 77
    0, // G_SITOFP = 78
    0, // G_UITOFP = 79
    0, // G_GEP = 80
    0, // G_BR = 81
    0, // ADDC_F_I_HI = 82
    0, // ADDC_F_I_LO = 83
    0, // ADDC_F_R = 84
    0, // ADDC_I_HI = 85
    0, // ADDC_I_LO = 86
    0, // ADDC_R = 87
    0, // ADD_F_I_HI = 88
    0, // ADD_F_I_LO = 89
    0, // ADD_F_R = 90
    0, // ADD_I_HI = 91
    0, // ADD_I_LO = 92
    0, // ADD_R = 93
    0, // ADJCALLSTACKDOWN = 94
    0, // ADJCALLSTACKUP = 95
    0, // ADJDYNALLOC = 96
    0, // AND_F_I_HI = 97
    0, // AND_F_I_LO = 98
    0, // AND_F_R = 99
    0, // AND_I_HI = 100
    0, // AND_I_LO = 101
    0, // AND_R = 102
    0, // BRCC = 103
    0, // BRIND_CC = 104
    0, // BRIND_CCA = 105
    0, // BRR = 106
    0, // BT = 107
    0, // CALL = 108
    0, // CALLR = 109
    0, // JR = 110
    0, // LDADDR = 111
    0, // LDBs_RI = 112
    0, // LDBs_RR = 113
    0, // LDBz_RI = 114
    0, // LDBz_RR = 115
    0, // LDHs_RI = 116
    0, // LDHs_RR = 117
    0, // LDHz_RI = 118
    0, // LDHz_RR = 119
    0, // LDW_RI = 120
    0, // LDW_RR = 121
    0, // LDWz_RR = 122
    0, // LEADZ = 123
    0, // LOG0 = 124
    0, // LOG1 = 125
    0, // LOG2 = 126
    0, // LOG3 = 127
    0, // LOG4 = 128
    0, // MOVHI = 129
    0, // NOP = 130
    0, // OR_F_I_HI = 131
    0, // OR_F_I_LO = 132
    0, // OR_F_R = 133
    0, // OR_I_HI = 134
    0, // OR_I_LO = 135
    0, // OR_R = 136
    0, // POPC = 137
    0, // RET = 138
    0, // SA_F_I = 139
    0, // SA_I = 140
    0, // SCC = 141
    0, // SELECT = 142
    0, // SFSUB_F_RI_HI = 143
    0, // SFSUB_F_RI_LO = 144
    0, // SFSUB_F_RR = 145
    0, // SHL_F_R = 146
    0, // SHL_R = 147
    0, // SLI = 148
    0, // SL_F_I = 149
    0, // SL_I = 150
    0, // SRA_F_R = 151
    0, // SRA_R = 152
    0, // SRL_F_R = 153
    0, // SRL_R = 154
    0, // STADDR = 155
    0, // STB_RI = 156
    0, // STB_RR = 157
    0, // STH_RI = 158
    0, // STH_RR = 159
    0, // SUBB_F_I_HI = 160
    0, // SUBB_F_I_LO = 161
    0, // SUBB_F_R = 162
    0, // SUBB_I_HI = 163
    0, // SUBB_I_LO = 164
    0, // SUBB_R = 165
    0, // SUB_F_I_HI = 166
    0, // SUB_F_I_LO = 167
    0, // SUB_F_R = 168
    0, // SUB_I_HI = 169
    0, // SUB_I_LO = 170
    0, // SUB_R = 171
    0, // SW_RI = 172
    0, // SW_RR = 173
    0, // TRAILZ = 174
    0, // XOR_F_I_HI = 175
    0, // XOR_F_I_LO = 176
    0, // XOR_F_R = 177
    0, // XOR_I_HI = 178
    0, // XOR_I_LO = 179
    0, // XOR_R = 180
  };

  assert(Inst.getOpcode() < 181);
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
