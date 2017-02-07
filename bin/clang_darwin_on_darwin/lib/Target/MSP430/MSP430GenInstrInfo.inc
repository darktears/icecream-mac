/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace MSP430 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    LOCAL_ESCAPE	= 21,
    FAULTING_LOAD_OP	= 22,
    PATCHABLE_OP	= 23,
    PATCHABLE_FUNCTION_ENTER	= 24,
    PATCHABLE_RET	= 25,
    PATCHABLE_FUNCTION_EXIT	= 26,
    PATCHABLE_TAIL_CALL	= 27,
    G_ADD	= 28,
    G_SUB	= 29,
    G_MUL	= 30,
    G_SDIV	= 31,
    G_UDIV	= 32,
    G_SREM	= 33,
    G_UREM	= 34,
    G_AND	= 35,
    G_OR	= 36,
    G_XOR	= 37,
    G_FRAME_INDEX	= 38,
    G_GLOBAL_VALUE	= 39,
    G_EXTRACT	= 40,
    G_INSERT	= 41,
    G_SEQUENCE	= 42,
    G_PTRTOINT	= 43,
    G_INTTOPTR	= 44,
    G_BITCAST	= 45,
    G_LOAD	= 46,
    G_STORE	= 47,
    G_BRCOND	= 48,
    G_INTRINSIC	= 49,
    G_INTRINSIC_W_SIDE_EFFECTS	= 50,
    G_ANYEXT	= 51,
    G_TRUNC	= 52,
    G_CONSTANT	= 53,
    G_FCONSTANT	= 54,
    G_SEXT	= 55,
    G_ZEXT	= 56,
    G_SHL	= 57,
    G_LSHR	= 58,
    G_ASHR	= 59,
    G_ICMP	= 60,
    G_FCMP	= 61,
    G_SELECT	= 62,
    G_UADDE	= 63,
    G_USUBE	= 64,
    G_SADDO	= 65,
    G_SSUBO	= 66,
    G_UMULO	= 67,
    G_SMULO	= 68,
    G_FADD	= 69,
    G_FSUB	= 70,
    G_FMUL	= 71,
    G_FDIV	= 72,
    G_FREM	= 73,
    G_FPEXT	= 74,
    G_FPTRUNC	= 75,
    G_FPTOSI	= 76,
    G_FPTOUI	= 77,
    G_SITOFP	= 78,
    G_UITOFP	= 79,
    G_GEP	= 80,
    G_BR	= 81,
    ADC16mi	= 82,
    ADC16mm	= 83,
    ADC16mr	= 84,
    ADC16ri	= 85,
    ADC16rm	= 86,
    ADC16rr	= 87,
    ADC8mi	= 88,
    ADC8mm	= 89,
    ADC8mr	= 90,
    ADC8ri	= 91,
    ADC8rm	= 92,
    ADC8rr	= 93,
    ADD16mi	= 94,
    ADD16mm	= 95,
    ADD16mr	= 96,
    ADD16ri	= 97,
    ADD16rm	= 98,
    ADD16rm_POST	= 99,
    ADD16rr	= 100,
    ADD8mi	= 101,
    ADD8mm	= 102,
    ADD8mr	= 103,
    ADD8ri	= 104,
    ADD8rm	= 105,
    ADD8rm_POST	= 106,
    ADD8rr	= 107,
    ADJCALLSTACKDOWN	= 108,
    ADJCALLSTACKUP	= 109,
    AND16mi	= 110,
    AND16mm	= 111,
    AND16mr	= 112,
    AND16ri	= 113,
    AND16rm	= 114,
    AND16rm_POST	= 115,
    AND16rr	= 116,
    AND8mi	= 117,
    AND8mm	= 118,
    AND8mr	= 119,
    AND8ri	= 120,
    AND8rm	= 121,
    AND8rm_POST	= 122,
    AND8rr	= 123,
    BIC16mm	= 124,
    BIC16mr	= 125,
    BIC16rm	= 126,
    BIC16rr	= 127,
    BIC8mm	= 128,
    BIC8mr	= 129,
    BIC8rm	= 130,
    BIC8rr	= 131,
    BIT16mi	= 132,
    BIT16mm	= 133,
    BIT16mr	= 134,
    BIT16ri	= 135,
    BIT16rm	= 136,
    BIT16rr	= 137,
    BIT8mi	= 138,
    BIT8mm	= 139,
    BIT8mr	= 140,
    BIT8ri	= 141,
    BIT8rm	= 142,
    BIT8rr	= 143,
    Bi	= 144,
    Bm	= 145,
    Br	= 146,
    CALLi	= 147,
    CALLm	= 148,
    CALLr	= 149,
    CMP16mi	= 150,
    CMP16mr	= 151,
    CMP16ri	= 152,
    CMP16rm	= 153,
    CMP16rr	= 154,
    CMP8mi	= 155,
    CMP8mr	= 156,
    CMP8ri	= 157,
    CMP8rm	= 158,
    CMP8rr	= 159,
    JCC	= 160,
    JMP	= 161,
    MOV16mi	= 162,
    MOV16mm	= 163,
    MOV16mr	= 164,
    MOV16ri	= 165,
    MOV16rm	= 166,
    MOV16rm_POST	= 167,
    MOV16rr	= 168,
    MOV8mi	= 169,
    MOV8mm	= 170,
    MOV8mr	= 171,
    MOV8ri	= 172,
    MOV8rm	= 173,
    MOV8rm_POST	= 174,
    MOV8rr	= 175,
    MOVZX16rm8	= 176,
    MOVZX16rr8	= 177,
    NOP	= 178,
    OR16mi	= 179,
    OR16mm	= 180,
    OR16mr	= 181,
    OR16ri	= 182,
    OR16rm	= 183,
    OR16rm_POST	= 184,
    OR16rr	= 185,
    OR8mi	= 186,
    OR8mm	= 187,
    OR8mr	= 188,
    OR8ri	= 189,
    OR8rm	= 190,
    OR8rm_POST	= 191,
    OR8rr	= 192,
    POP16r	= 193,
    PUSH16r	= 194,
    RET	= 195,
    RETI	= 196,
    SAR16r1	= 197,
    SAR16r1c	= 198,
    SAR8r1	= 199,
    SAR8r1c	= 200,
    SBC16mi	= 201,
    SBC16mm	= 202,
    SBC16mr	= 203,
    SBC16ri	= 204,
    SBC16rm	= 205,
    SBC16rr	= 206,
    SBC8mi	= 207,
    SBC8mm	= 208,
    SBC8mr	= 209,
    SBC8ri	= 210,
    SBC8rm	= 211,
    SBC8rr	= 212,
    SEXT16r	= 213,
    SHL16r1	= 214,
    SHL8r1	= 215,
    SUB16mi	= 216,
    SUB16mm	= 217,
    SUB16mr	= 218,
    SUB16ri	= 219,
    SUB16rm	= 220,
    SUB16rm_POST	= 221,
    SUB16rr	= 222,
    SUB8mi	= 223,
    SUB8mm	= 224,
    SUB8mr	= 225,
    SUB8ri	= 226,
    SUB8rm	= 227,
    SUB8rm_POST	= 228,
    SUB8rr	= 229,
    SWPB16r	= 230,
    Select16	= 231,
    Select8	= 232,
    Shl16	= 233,
    Shl8	= 234,
    Sra16	= 235,
    Sra8	= 236,
    Srl16	= 237,
    Srl8	= 238,
    XOR16mi	= 239,
    XOR16mm	= 240,
    XOR16mr	= 241,
    XOR16ri	= 242,
    XOR16rm	= 243,
    XOR16rm_POST	= 244,
    XOR16rr	= 245,
    XOR8mi	= 246,
    XOR8mm	= 247,
    XOR8mr	= 248,
    XOR8ri	= 249,
    XOR8rm	= 250,
    XOR8rm_POST	= 251,
    XOR8rr	= 252,
    ZEXT16r	= 253,
    INSTRUCTION_LIST_END = 254
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end MSP430 namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR, 0 };
static const MCPhysReg ImplicitList2[] = { MSP430::SP, 0 };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const MCPhysReg ImplicitList4[] = { MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo32[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo33[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo42[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo43[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo45[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = LOCAL_ESCAPE
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #23 = PATCHABLE_OP
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = PATCHABLE_FUNCTION_ENTER
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #25 = PATCHABLE_RET
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #26 = PATCHABLE_FUNCTION_EXIT
  { 27,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #27 = PATCHABLE_TAIL_CALL
  { 28,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #28 = G_ADD
  { 29,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #29 = G_SUB
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #30 = G_MUL
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_SDIV
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_UDIV
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_SREM
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_UREM
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_AND
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_OR
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_XOR
  { 38,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #38 = G_FRAME_INDEX
  { 39,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #39 = G_GLOBAL_VALUE
  { 40,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #40 = G_EXTRACT
  { 41,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_INSERT
  { 42,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #42 = G_SEQUENCE
  { 43,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #43 = G_PTRTOINT
  { 44,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #44 = G_INTTOPTR
  { 45,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = G_BITCAST
  { 46,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #46 = G_LOAD
  { 47,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = G_STORE
  { 48,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #48 = G_BRCOND
  { 49,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #49 = G_INTRINSIC
  { 50,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #50 = G_INTRINSIC_W_SIDE_EFFECTS
  { 51,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #51 = G_ANYEXT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #52 = G_TRUNC
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #53 = G_CONSTANT
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #54 = G_FCONSTANT
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #55 = G_SEXT
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #56 = G_ZEXT
  { 57,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #57 = G_SHL
  { 58,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #58 = G_LSHR
  { 59,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #59 = G_ASHR
  { 60,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #60 = G_ICMP
  { 61,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = G_FCMP
  { 62,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #62 = G_SELECT
  { 63,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #63 = G_UADDE
  { 64,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #64 = G_USUBE
  { 65,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #65 = G_SADDO
  { 66,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #66 = G_SSUBO
  { 67,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #67 = G_UMULO
  { 68,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_SMULO
  { 69,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #69 = G_FADD
  { 70,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #70 = G_FSUB
  { 71,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #71 = G_FMUL
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #72 = G_FDIV
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #73 = G_FREM
  { 74,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #74 = G_FPEXT
  { 75,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #75 = G_FPTRUNC
  { 76,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #76 = G_FPTOSI
  { 77,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #77 = G_FPTOUI
  { 78,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #78 = G_SITOFP
  { 79,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #79 = G_UITOFP
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #80 = G_GEP
  { 81,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #81 = G_BR
  { 82,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #82 = ADC16mi
  { 83,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #83 = ADC16mm
  { 84,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #84 = ADC16mr
  { 85,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #85 = ADC16ri
  { 86,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #86 = ADC16rm
  { 87,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #87 = ADC16rr
  { 88,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #88 = ADC8mi
  { 89,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #89 = ADC8mm
  { 90,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #90 = ADC8mr
  { 91,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #91 = ADC8ri
  { 92,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #92 = ADC8rm
  { 93,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #93 = ADC8rr
  { 94,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #94 = ADD16mi
  { 95,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #95 = ADD16mm
  { 96,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #96 = ADD16mr
  { 97,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #97 = ADD16ri
  { 98,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #98 = ADD16rm
  { 99,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #99 = ADD16rm_POST
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #100 = ADD16rr
  { 101,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #101 = ADD8mi
  { 102,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #102 = ADD8mm
  { 103,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #103 = ADD8mr
  { 104,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #104 = ADD8ri
  { 105,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #105 = ADD8rm
  { 106,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #106 = ADD8rm_POST
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #107 = ADD8rr
  { 108,	1,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #108 = ADJCALLSTACKDOWN
  { 109,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #109 = ADJCALLSTACKUP
  { 110,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #110 = AND16mi
  { 111,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #111 = AND16mm
  { 112,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #112 = AND16mr
  { 113,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #113 = AND16ri
  { 114,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #114 = AND16rm
  { 115,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #115 = AND16rm_POST
  { 116,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #116 = AND16rr
  { 117,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #117 = AND8mi
  { 118,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #118 = AND8mm
  { 119,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #119 = AND8mr
  { 120,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #120 = AND8ri
  { 121,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #121 = AND8rm
  { 122,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #122 = AND8rm_POST
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #123 = AND8rr
  { 124,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #124 = BIC16mm
  { 125,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #125 = BIC16mr
  { 126,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #126 = BIC16rm
  { 127,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #127 = BIC16rr
  { 128,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #128 = BIC8mm
  { 129,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #129 = BIC8mr
  { 130,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #130 = BIC8rm
  { 131,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #131 = BIC8rr
  { 132,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #132 = BIT16mi
  { 133,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #133 = BIT16mm
  { 134,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #134 = BIT16mr
  { 135,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #135 = BIT16ri
  { 136,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #136 = BIT16rm
  { 137,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #137 = BIT16rr
  { 138,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #138 = BIT8mi
  { 139,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #139 = BIT8mm
  { 140,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #140 = BIT8mr
  { 141,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #141 = BIT8ri
  { 142,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #142 = BIT8rm
  { 143,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #143 = BIT8rr
  { 144,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #144 = Bi
  { 145,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #145 = Bm
  { 146,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #146 = Br
  { 147,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo3, -1 ,nullptr },  // Inst #147 = CALLi
  { 148,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo39, -1 ,nullptr },  // Inst #148 = CALLm
  { 149,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0x9ULL, ImplicitList2, ImplicitList4, OperandInfo40, -1 ,nullptr },  // Inst #149 = CALLr
  { 150,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #150 = CMP16mi
  { 151,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #151 = CMP16mr
  { 152,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #152 = CMP16ri
  { 153,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #153 = CMP16rm
  { 154,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #154 = CMP16rr
  { 155,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #155 = CMP8mi
  { 156,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #156 = CMP8mr
  { 157,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #157 = CMP8ri
  { 158,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #158 = CMP8rm
  { 159,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #159 = CMP8rr
  { 160,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xbULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #160 = JCC
  { 161,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xbULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #161 = JMP
  { 162,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #162 = MOV16mi
  { 163,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #163 = MOV16mm
  { 164,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #164 = MOV16mr
  { 165,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #165 = MOV16ri
  { 166,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #166 = MOV16rm
  { 167,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #167 = MOV16rm_POST
  { 168,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #168 = MOV16rr
  { 169,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #169 = MOV8mi
  { 170,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #170 = MOV8mm
  { 171,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #171 = MOV8mr
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #172 = MOV8ri
  { 173,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #173 = MOV8rm
  { 174,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #174 = MOV8rm_POST
  { 175,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #175 = MOV8rr
  { 176,	3,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #176 = MOVZX16rm8
  { 177,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #177 = MOVZX16rr8
  { 178,	0,	0,	0,	0,	0, 0x4ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #178 = NOP
  { 179,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #179 = OR16mi
  { 180,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #180 = OR16mm
  { 181,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #181 = OR16mr
  { 182,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #182 = OR16ri
  { 183,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #183 = OR16rm
  { 184,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #184 = OR16rm_POST
  { 185,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #185 = OR16rr
  { 186,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #186 = OR8mi
  { 187,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #187 = OR8mm
  { 188,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #188 = OR8mr
  { 189,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #189 = OR8ri
  { 190,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #190 = OR8rm
  { 191,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #191 = OR8rm_POST
  { 192,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #192 = OR8rr
  { 193,	1,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xaULL, ImplicitList2, ImplicitList2, OperandInfo40, -1 ,nullptr },  // Inst #193 = POP16r
  { 194,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x9ULL, ImplicitList2, ImplicitList2, OperandInfo40, -1 ,nullptr },  // Inst #194 = PUSH16r
  { 195,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #195 = RET
  { 196,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #196 = RETI
  { 197,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #197 = SAR16r1
  { 198,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #198 = SAR16r1c
  { 199,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #199 = SAR8r1
  { 200,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #200 = SAR8r1c
  { 201,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #201 = SBC16mi
  { 202,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #202 = SBC16mm
  { 203,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #203 = SBC16mr
  { 204,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #204 = SBC16ri
  { 205,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #205 = SBC16rm
  { 206,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #206 = SBC16rr
  { 207,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #207 = SBC8mi
  { 208,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #208 = SBC8mm
  { 209,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #209 = SBC8mr
  { 210,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #210 = SBC8ri
  { 211,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #211 = SBC8rm
  { 212,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #212 = SBC8rr
  { 213,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #213 = SEXT16r
  { 214,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #214 = SHL16r1
  { 215,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #215 = SHL8r1
  { 216,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #216 = SUB16mi
  { 217,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #217 = SUB16mm
  { 218,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #218 = SUB16mr
  { 219,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #219 = SUB16ri
  { 220,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #220 = SUB16rm
  { 221,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #221 = SUB16rm_POST
  { 222,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #222 = SUB16rr
  { 223,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #223 = SUB8mi
  { 224,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #224 = SUB8mm
  { 225,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #225 = SUB8mr
  { 226,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #226 = SUB8ri
  { 227,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #227 = SUB8rm
  { 228,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #228 = SUB8rm_POST
  { 229,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #229 = SUB8rr
  { 230,	2,	1,	0,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #230 = SWPB16r
  { 231,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #231 = Select16
  { 232,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #232 = Select8
  { 233,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #233 = Shl16
  { 234,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #234 = Shl8
  { 235,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #235 = Sra16
  { 236,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #236 = Sra8
  { 237,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #237 = Srl16
  { 238,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo49, -1 ,nullptr },  // Inst #238 = Srl8
  { 239,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #239 = XOR16mi
  { 240,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #240 = XOR16mm
  { 241,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #241 = XOR16mr
  { 242,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #242 = XOR16ri
  { 243,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #243 = XOR16rm
  { 244,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #244 = XOR16rm_POST
  { 245,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #245 = XOR16rr
  { 246,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #246 = XOR8mi
  { 247,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #247 = XOR8mm
  { 248,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #248 = XOR8mr
  { 249,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #249 = XOR8ri
  { 250,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #250 = XOR8rm
  { 251,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #251 = XOR8rm_POST
  { 252,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #252 = XOR8rr
  { 253,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #253 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'S', 'H', 'L', '1', '6', 'r', '1', 0,
  /* 8 */ 'S', 'A', 'R', '1', '6', 'r', '1', 0,
  /* 16 */ 'S', 'H', 'L', '8', 'r', '1', 0,
  /* 23 */ 'S', 'A', 'R', '8', 'r', '1', 0,
  /* 30 */ 'S', 'r', 'a', '1', '6', 0,
  /* 36 */ 'S', 'h', 'l', '1', '6', 0,
  /* 42 */ 'S', 'r', 'l', '1', '6', 0,
  /* 48 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 57 */ 'S', 'r', 'a', '8', 0,
  /* 62 */ 'S', 'h', 'l', '8', 0,
  /* 67 */ 'S', 'r', 'l', '8', 0,
  /* 72 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 83 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 94 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 102 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 109 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 115 */ 'J', 'C', 'C', 0,
  /* 119 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 131 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 141 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 149 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 156 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 163 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 169 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 175 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 188 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 197 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 214 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 222 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 235 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 243 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 250 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 263 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 271 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 281 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 296 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 309 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 324 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 338 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 352 */ 'P', 'H', 'I', 0,
  /* 356 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 365 */ 'R', 'E', 'T', 'I', 0,
  /* 370 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 379 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 388 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 397 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 403 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 423 */ 'K', 'I', 'L', 'L', 0,
  /* 428 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 435 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 441 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 448 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 455 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 462 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 472 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 488 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 505 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 513 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 521 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 529 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 537 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 546 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 552 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 561 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 570 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 577 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 584 */ 'J', 'M', 'P', 0,
  /* 588 */ 'N', 'O', 'P', 0,
  /* 592 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 609 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 622 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 637 */ 'G', '_', 'B', 'R', 0,
  /* 642 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 667 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 674 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 681 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 687 */ 'G', '_', 'O', 'R', 0,
  /* 692 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 703 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 720 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 747 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 757 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 766 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 780 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 804 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 816 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 827 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 838 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 849 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 860 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 875 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 884 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 894 */ 'S', 'U', 'B', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 907 */ 'A', 'D', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 920 */ 'A', 'N', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 933 */ 'X', 'O', 'R', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 946 */ 'M', 'O', 'V', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 959 */ 'S', 'U', 'B', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 971 */ 'A', 'D', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 983 */ 'A', 'N', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 995 */ 'X', 'O', 'R', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1007 */ 'M', 'O', 'V', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1019 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1027 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1034 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1043 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1050 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1057 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1064 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1071 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1085 */ 'C', 'O', 'P', 'Y', 0,
  /* 1090 */ 'S', 'A', 'R', '1', '6', 'r', '1', 'c', 0,
  /* 1099 */ 'S', 'A', 'R', '8', 'r', '1', 'c', 0,
  /* 1107 */ 'B', 'i', 0,
  /* 1110 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 1116 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 1124 */ 'S', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 1132 */ 'A', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 1140 */ 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 1148 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 1156 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 1164 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 1172 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 1180 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 1188 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 1195 */ 'S', 'B', 'C', '8', 'm', 'i', 0,
  /* 1202 */ 'A', 'D', 'C', '8', 'm', 'i', 0,
  /* 1209 */ 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 1216 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 1223 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 1230 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 1237 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 1244 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 1251 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 1259 */ 'S', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 1267 */ 'A', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 1275 */ 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 1283 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 1291 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 1299 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 1307 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 1315 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 1323 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 1330 */ 'S', 'B', 'C', '8', 'r', 'i', 0,
  /* 1337 */ 'A', 'D', 'C', '8', 'r', 'i', 0,
  /* 1344 */ 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 1351 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 1358 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 1365 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 1372 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 1379 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 1386 */ 'B', 'm', 0,
  /* 1389 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 1395 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 1403 */ 'S', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 1411 */ 'A', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 1419 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 1427 */ 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 1435 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 1443 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 1451 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 1459 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 1467 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 1474 */ 'S', 'B', 'C', '8', 'm', 'm', 0,
  /* 1481 */ 'A', 'D', 'C', '8', 'm', 'm', 0,
  /* 1488 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 1495 */ 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 1502 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 1509 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 1516 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 1523 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 1530 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 1538 */ 'S', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 1546 */ 'A', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 1554 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 1562 */ 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 1570 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 1578 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 1586 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 1594 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 1602 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 1610 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 1617 */ 'S', 'B', 'C', '8', 'r', 'm', 0,
  /* 1624 */ 'A', 'D', 'C', '8', 'r', 'm', 0,
  /* 1631 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 1638 */ 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 1645 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 1652 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 1659 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 1666 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 1673 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 1680 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 1688 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 1696 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 1703 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1711 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1719 */ 'B', 'r', 0,
  /* 1722 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 1728 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 1736 */ 'S', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 1744 */ 'A', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 1752 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 1760 */ 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 1768 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 1776 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 1784 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 1792 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 1800 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 1808 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 1815 */ 'S', 'B', 'C', '8', 'm', 'r', 0,
  /* 1822 */ 'A', 'D', 'C', '8', 'm', 'r', 0,
  /* 1829 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 1836 */ 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 1843 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 1850 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 1857 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 1864 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 1871 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 1878 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 1886 */ 'S', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 1894 */ 'A', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 1902 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 1910 */ 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 1918 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 1926 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 1934 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 1942 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 1950 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 1958 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 1965 */ 'S', 'B', 'C', '8', 'r', 'r', 0,
  /* 1972 */ 'A', 'D', 'C', '8', 'r', 'r', 0,
  /* 1979 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 1986 */ 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 1993 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 2000 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 2007 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 2014 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 2021 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    352U, 462U, 472U, 388U, 379U, 423U, 309U, 324U, 
    296U, 338U, 703U, 271U, 222U, 1085U, 243U, 860U, 
    175U, 537U, 838U, 197U, 827U, 250U, 592U, 609U, 
    642U, 766U, 780U, 403U, 163U, 109U, 435U, 1057U, 
    1064U, 448U, 455U, 169U, 687U, 681U, 1071U, 281U, 
    747U, 875U, 224U, 849U, 692U, 884U, 149U, 263U, 
    188U, 119U, 720U, 1034U, 141U, 816U, 804U, 1027U, 
    1043U, 397U, 674U, 667U, 577U, 570U, 757U, 235U, 
    214U, 513U, 505U, 529U, 521U, 156U, 102U, 428U, 
    1050U, 441U, 1019U, 131U, 356U, 370U, 552U, 561U, 
    546U, 637U, 1132U, 1411U, 1744U, 1267U, 1546U, 1894U, 
    1202U, 1481U, 1822U, 1337U, 1624U, 1972U, 1140U, 1427U, 
    1760U, 1275U, 1562U, 907U, 1910U, 1209U, 1495U, 1836U, 
    1344U, 1638U, 971U, 1986U, 488U, 622U, 1148U, 1435U, 
    1768U, 1283U, 1570U, 920U, 1918U, 1216U, 1502U, 1843U, 
    1351U, 1645U, 983U, 1993U, 1419U, 1752U, 1554U, 1902U, 
    1488U, 1829U, 1631U, 1979U, 1172U, 1451U, 1792U, 1307U, 
    1594U, 1942U, 1237U, 1516U, 1864U, 1372U, 1666U, 2014U, 
    1107U, 1386U, 1719U, 1110U, 1389U, 1722U, 1156U, 1776U, 
    1291U, 1578U, 1926U, 1223U, 1850U, 1358U, 1652U, 2000U, 
    115U, 584U, 1180U, 1459U, 1800U, 1315U, 1602U, 946U, 
    1950U, 1244U, 1523U, 1871U, 1379U, 1673U, 1007U, 2021U, 
    72U, 83U, 588U, 1165U, 1444U, 1785U, 1300U, 1587U, 
    934U, 1935U, 1231U, 1510U, 1858U, 1366U, 1660U, 996U, 
    2008U, 1696U, 1688U, 776U, 365U, 8U, 1090U, 23U, 
    1099U, 1124U, 1403U, 1736U, 1259U, 1538U, 1886U, 1195U, 
    1474U, 1815U, 1330U, 1617U, 1965U, 1703U, 0U, 16U, 
    1116U, 1395U, 1728U, 1251U, 1530U, 894U, 1878U, 1188U, 
    1467U, 1808U, 1323U, 1610U, 959U, 1958U, 1680U, 48U, 
    94U, 36U, 62U, 30U, 57U, 42U, 67U, 1164U, 
    1443U, 1784U, 1299U, 1586U, 933U, 1934U, 1230U, 1509U, 
    1857U, 1365U, 1659U, 995U, 2007U, 1711U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 254);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MSP430GenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 254);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  f32imm = 1,
  f64imm = 2,
  i16imm = 3,
  i1imm = 4,
  i32imm = 5,
  i64imm = 6,
  i8imm = 7,
  jmptarget = 8,
  memdst = 9,
  memsrc = 10,
  type0 = 11,
  type1 = 12,
  type2 = 13,
  type3 = 14,
  type4 = 15,
  type5 = 16,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

