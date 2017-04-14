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
    FENTRY_CALL	= 18,
    PATCHPOINT	= 19,
    LOAD_STACK_GUARD	= 20,
    STATEPOINT	= 21,
    LOCAL_ESCAPE	= 22,
    FAULTING_OP	= 23,
    PATCHABLE_OP	= 24,
    PATCHABLE_FUNCTION_ENTER	= 25,
    PATCHABLE_RET	= 26,
    PATCHABLE_FUNCTION_EXIT	= 27,
    PATCHABLE_TAIL_CALL	= 28,
    G_ADD	= 29,
    G_SUB	= 30,
    G_MUL	= 31,
    G_SDIV	= 32,
    G_UDIV	= 33,
    G_SREM	= 34,
    G_UREM	= 35,
    G_AND	= 36,
    G_OR	= 37,
    G_XOR	= 38,
    G_FRAME_INDEX	= 39,
    G_GLOBAL_VALUE	= 40,
    G_EXTRACT	= 41,
    G_UNMERGE_VALUES	= 42,
    G_INSERT	= 43,
    G_SEQUENCE	= 44,
    G_MERGE_VALUES	= 45,
    G_PTRTOINT	= 46,
    G_INTTOPTR	= 47,
    G_BITCAST	= 48,
    G_LOAD	= 49,
    G_STORE	= 50,
    G_BRCOND	= 51,
    G_BRINDIRECT	= 52,
    G_INTRINSIC	= 53,
    G_INTRINSIC_W_SIDE_EFFECTS	= 54,
    G_ANYEXT	= 55,
    G_TRUNC	= 56,
    G_CONSTANT	= 57,
    G_FCONSTANT	= 58,
    G_VASTART	= 59,
    G_VAARG	= 60,
    G_SEXT	= 61,
    G_ZEXT	= 62,
    G_SHL	= 63,
    G_LSHR	= 64,
    G_ASHR	= 65,
    G_ICMP	= 66,
    G_FCMP	= 67,
    G_SELECT	= 68,
    G_UADDE	= 69,
    G_USUBE	= 70,
    G_SADDO	= 71,
    G_SSUBO	= 72,
    G_UMULO	= 73,
    G_SMULO	= 74,
    G_UMULH	= 75,
    G_SMULH	= 76,
    G_FADD	= 77,
    G_FSUB	= 78,
    G_FMUL	= 79,
    G_FDIV	= 80,
    G_FREM	= 81,
    G_FPOW	= 82,
    G_FNEG	= 83,
    G_FPEXT	= 84,
    G_FPTRUNC	= 85,
    G_FPTOSI	= 86,
    G_FPTOUI	= 87,
    G_SITOFP	= 88,
    G_UITOFP	= 89,
    G_GEP	= 90,
    G_PTR_MASK	= 91,
    G_BR	= 92,
    G_INSERT_VECTOR_ELT	= 93,
    G_EXTRACT_VECTOR_ELT	= 94,
    G_SHUFFLE_VECTOR	= 95,
    ADC16mi	= 96,
    ADC16mm	= 97,
    ADC16mr	= 98,
    ADC16ri	= 99,
    ADC16rm	= 100,
    ADC16rr	= 101,
    ADC8mi	= 102,
    ADC8mm	= 103,
    ADC8mr	= 104,
    ADC8ri	= 105,
    ADC8rm	= 106,
    ADC8rr	= 107,
    ADD16mi	= 108,
    ADD16mm	= 109,
    ADD16mr	= 110,
    ADD16ri	= 111,
    ADD16rm	= 112,
    ADD16rm_POST	= 113,
    ADD16rr	= 114,
    ADD8mi	= 115,
    ADD8mm	= 116,
    ADD8mr	= 117,
    ADD8ri	= 118,
    ADD8rm	= 119,
    ADD8rm_POST	= 120,
    ADD8rr	= 121,
    ADJCALLSTACKDOWN	= 122,
    ADJCALLSTACKUP	= 123,
    AND16mi	= 124,
    AND16mm	= 125,
    AND16mr	= 126,
    AND16ri	= 127,
    AND16rm	= 128,
    AND16rm_POST	= 129,
    AND16rr	= 130,
    AND8mi	= 131,
    AND8mm	= 132,
    AND8mr	= 133,
    AND8ri	= 134,
    AND8rm	= 135,
    AND8rm_POST	= 136,
    AND8rr	= 137,
    BIC16mm	= 138,
    BIC16mr	= 139,
    BIC16rm	= 140,
    BIC16rr	= 141,
    BIC8mm	= 142,
    BIC8mr	= 143,
    BIC8rm	= 144,
    BIC8rr	= 145,
    BIT16mi	= 146,
    BIT16mm	= 147,
    BIT16mr	= 148,
    BIT16ri	= 149,
    BIT16rm	= 150,
    BIT16rr	= 151,
    BIT8mi	= 152,
    BIT8mm	= 153,
    BIT8mr	= 154,
    BIT8ri	= 155,
    BIT8rm	= 156,
    BIT8rr	= 157,
    Bi	= 158,
    Bm	= 159,
    Br	= 160,
    CALLi	= 161,
    CALLm	= 162,
    CALLr	= 163,
    CMP16mi	= 164,
    CMP16mr	= 165,
    CMP16ri	= 166,
    CMP16rm	= 167,
    CMP16rr	= 168,
    CMP8mi	= 169,
    CMP8mr	= 170,
    CMP8ri	= 171,
    CMP8rm	= 172,
    CMP8rr	= 173,
    JCC	= 174,
    JMP	= 175,
    MOV16mi	= 176,
    MOV16mm	= 177,
    MOV16mr	= 178,
    MOV16ri	= 179,
    MOV16rm	= 180,
    MOV16rm_POST	= 181,
    MOV16rr	= 182,
    MOV8mi	= 183,
    MOV8mm	= 184,
    MOV8mr	= 185,
    MOV8ri	= 186,
    MOV8rm	= 187,
    MOV8rm_POST	= 188,
    MOV8rr	= 189,
    MOVZX16rm8	= 190,
    MOVZX16rr8	= 191,
    NOP	= 192,
    OR16mi	= 193,
    OR16mm	= 194,
    OR16mr	= 195,
    OR16ri	= 196,
    OR16rm	= 197,
    OR16rm_POST	= 198,
    OR16rr	= 199,
    OR8mi	= 200,
    OR8mm	= 201,
    OR8mr	= 202,
    OR8ri	= 203,
    OR8rm	= 204,
    OR8rm_POST	= 205,
    OR8rr	= 206,
    POP16r	= 207,
    PUSH16r	= 208,
    RET	= 209,
    RETI	= 210,
    SAR16r1	= 211,
    SAR16r1c	= 212,
    SAR8r1	= 213,
    SAR8r1c	= 214,
    SBC16mi	= 215,
    SBC16mm	= 216,
    SBC16mr	= 217,
    SBC16ri	= 218,
    SBC16rm	= 219,
    SBC16rr	= 220,
    SBC8mi	= 221,
    SBC8mm	= 222,
    SBC8mr	= 223,
    SBC8ri	= 224,
    SBC8rm	= 225,
    SBC8rr	= 226,
    SEXT16r	= 227,
    SHL16r1	= 228,
    SHL8r1	= 229,
    SUB16mi	= 230,
    SUB16mm	= 231,
    SUB16mr	= 232,
    SUB16ri	= 233,
    SUB16rm	= 234,
    SUB16rm_POST	= 235,
    SUB16rr	= 236,
    SUB8mi	= 237,
    SUB8mm	= 238,
    SUB8mr	= 239,
    SUB8ri	= 240,
    SUB8rm	= 241,
    SUB8rm_POST	= 242,
    SUB8rr	= 243,
    SWPB16r	= 244,
    Select16	= 245,
    Select8	= 246,
    Shl16	= 247,
    Shl8	= 248,
    Sra16	= 249,
    Sra8	= 250,
    Srl16	= 251,
    Srl8	= 252,
    XOR16mi	= 253,
    XOR16mm	= 254,
    XOR16mr	= 255,
    XOR16ri	= 256,
    XOR16rm	= 257,
    XOR16rm_POST	= 258,
    XOR16rr	= 259,
    XOR8mi	= 260,
    XOR8mm	= 261,
    XOR8mr	= 262,
    XOR8ri	= 263,
    XOR8rm	= 264,
    XOR8rm_POST	= 265,
    XOR8rr	= 266,
    ZEXT16r	= 267,
    INSTRUCTION_LIST_END = 268
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
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo51[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo52[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

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
  { 18,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #18 = FENTRY_CALL
  { 19,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #19 = PATCHPOINT
  { 20,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #20 = LOAD_STACK_GUARD
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = STATEPOINT
  { 22,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #22 = LOCAL_ESCAPE
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #23 = FAULTING_OP
  { 24,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #24 = PATCHABLE_OP
  { 25,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #25 = PATCHABLE_FUNCTION_ENTER
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = PATCHABLE_RET
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_FUNCTION_EXIT
  { 28,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #28 = PATCHABLE_TAIL_CALL
  { 29,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #29 = G_ADD
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #30 = G_SUB
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_MUL
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_SDIV
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_UDIV
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_SREM
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_UREM
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_AND
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_OR
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #38 = G_XOR
  { 39,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #39 = G_FRAME_INDEX
  { 40,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #40 = G_GLOBAL_VALUE
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_EXTRACT
  { 42,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #42 = G_UNMERGE_VALUES
  { 43,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #43 = G_INSERT
  { 44,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #44 = G_SEQUENCE
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = G_MERGE_VALUES
  { 46,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #46 = G_PTRTOINT
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #47 = G_INTTOPTR
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #48 = G_BITCAST
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_LOAD
  { 50,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = G_STORE
  { 51,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #51 = G_BRCOND
  { 52,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #52 = G_BRINDIRECT
  { 53,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #53 = G_INTRINSIC
  { 54,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #54 = G_INTRINSIC_W_SIDE_EFFECTS
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #55 = G_ANYEXT
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #56 = G_TRUNC
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #57 = G_CONSTANT
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #58 = G_FCONSTANT
  { 59,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #59 = G_VASTART
  { 60,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #60 = G_VAARG
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = G_SEXT
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #62 = G_ZEXT
  { 63,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #63 = G_SHL
  { 64,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #64 = G_LSHR
  { 65,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #65 = G_ASHR
  { 66,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #66 = G_ICMP
  { 67,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #67 = G_FCMP
  { 68,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #68 = G_SELECT
  { 69,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #69 = G_UADDE
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #70 = G_USUBE
  { 71,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #71 = G_SADDO
  { 72,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #72 = G_SSUBO
  { 73,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #73 = G_UMULO
  { 74,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #74 = G_SMULO
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #75 = G_UMULH
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #76 = G_SMULH
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #77 = G_FADD
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #78 = G_FSUB
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #79 = G_FMUL
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #80 = G_FDIV
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #81 = G_FREM
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #82 = G_FPOW
  { 83,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #83 = G_FNEG
  { 84,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #84 = G_FPEXT
  { 85,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #85 = G_FPTRUNC
  { 86,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #86 = G_FPTOSI
  { 87,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #87 = G_FPTOUI
  { 88,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #88 = G_SITOFP
  { 89,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #89 = G_UITOFP
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #90 = G_GEP
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #91 = G_PTR_MASK
  { 92,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #92 = G_BR
  { 93,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #93 = G_INSERT_VECTOR_ELT
  { 94,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #94 = G_EXTRACT_VECTOR_ELT
  { 95,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #95 = G_SHUFFLE_VECTOR
  { 96,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #96 = ADC16mi
  { 97,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #97 = ADC16mm
  { 98,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #98 = ADC16mr
  { 99,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #99 = ADC16ri
  { 100,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #100 = ADC16rm
  { 101,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #101 = ADC16rr
  { 102,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #102 = ADC8mi
  { 103,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #103 = ADC8mm
  { 104,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #104 = ADC8mr
  { 105,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #105 = ADC8ri
  { 106,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #106 = ADC8rm
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #107 = ADC8rr
  { 108,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #108 = ADD16mi
  { 109,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #109 = ADD16mm
  { 110,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #110 = ADD16mr
  { 111,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #111 = ADD16ri
  { 112,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #112 = ADD16rm
  { 113,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #113 = ADD16rm_POST
  { 114,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #114 = ADD16rr
  { 115,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #115 = ADD8mi
  { 116,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #116 = ADD8mm
  { 117,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #117 = ADD8mr
  { 118,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #118 = ADD8ri
  { 119,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #119 = ADD8rm
  { 120,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #120 = ADD8rm_POST
  { 121,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #121 = ADD8rr
  { 122,	1,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #122 = ADJCALLSTACKDOWN
  { 123,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #123 = ADJCALLSTACKUP
  { 124,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #124 = AND16mi
  { 125,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #125 = AND16mm
  { 126,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #126 = AND16mr
  { 127,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #127 = AND16ri
  { 128,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #128 = AND16rm
  { 129,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #129 = AND16rm_POST
  { 130,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #130 = AND16rr
  { 131,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #131 = AND8mi
  { 132,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #132 = AND8mm
  { 133,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #133 = AND8mr
  { 134,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #134 = AND8ri
  { 135,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #135 = AND8rm
  { 136,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #136 = AND8rm_POST
  { 137,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #137 = AND8rr
  { 138,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #138 = BIC16mm
  { 139,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #139 = BIC16mr
  { 140,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #140 = BIC16rm
  { 141,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #141 = BIC16rr
  { 142,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #142 = BIC8mm
  { 143,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #143 = BIC8mr
  { 144,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #144 = BIC8rm
  { 145,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #145 = BIC8rr
  { 146,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #146 = BIT16mi
  { 147,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #147 = BIT16mm
  { 148,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #148 = BIT16mr
  { 149,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #149 = BIT16ri
  { 150,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #150 = BIT16rm
  { 151,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #151 = BIT16rr
  { 152,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #152 = BIT8mi
  { 153,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #153 = BIT8mm
  { 154,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #154 = BIT8mr
  { 155,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #155 = BIT8ri
  { 156,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #156 = BIT8rm
  { 157,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #157 = BIT8rr
  { 158,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #158 = Bi
  { 159,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #159 = Bm
  { 160,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #160 = Br
  { 161,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo3, -1 ,nullptr },  // Inst #161 = CALLi
  { 162,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #162 = CALLm
  { 163,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0x9ULL, ImplicitList2, ImplicitList4, OperandInfo46, -1 ,nullptr },  // Inst #163 = CALLr
  { 164,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #164 = CMP16mi
  { 165,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #165 = CMP16mr
  { 166,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #166 = CMP16ri
  { 167,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #167 = CMP16rm
  { 168,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #168 = CMP16rr
  { 169,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #169 = CMP8mi
  { 170,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #170 = CMP8mr
  { 171,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #171 = CMP8ri
  { 172,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #172 = CMP8rm
  { 173,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #173 = CMP8rr
  { 174,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xbULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #174 = JCC
  { 175,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xbULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #175 = JMP
  { 176,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #176 = MOV16mi
  { 177,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #177 = MOV16mm
  { 178,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #178 = MOV16mr
  { 179,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #179 = MOV16ri
  { 180,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #180 = MOV16rm
  { 181,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #181 = MOV16rm_POST
  { 182,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #182 = MOV16rr
  { 183,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #183 = MOV8mi
  { 184,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #184 = MOV8mm
  { 185,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #185 = MOV8mr
  { 186,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #186 = MOV8ri
  { 187,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #187 = MOV8rm
  { 188,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #188 = MOV8rm_POST
  { 189,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #189 = MOV8rr
  { 190,	3,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #190 = MOVZX16rm8
  { 191,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #191 = MOVZX16rr8
  { 192,	0,	0,	0,	0,	0, 0x4ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #192 = NOP
  { 193,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #193 = OR16mi
  { 194,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #194 = OR16mm
  { 195,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #195 = OR16mr
  { 196,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #196 = OR16ri
  { 197,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #197 = OR16rm
  { 198,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #198 = OR16rm_POST
  { 199,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #199 = OR16rr
  { 200,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #200 = OR8mi
  { 201,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #201 = OR8mm
  { 202,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #202 = OR8mr
  { 203,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #203 = OR8ri
  { 204,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #204 = OR8rm
  { 205,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #205 = OR8rm_POST
  { 206,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #206 = OR8rr
  { 207,	1,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xaULL, ImplicitList2, ImplicitList2, OperandInfo46, -1 ,nullptr },  // Inst #207 = POP16r
  { 208,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x9ULL, ImplicitList2, ImplicitList2, OperandInfo46, -1 ,nullptr },  // Inst #208 = PUSH16r
  { 209,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #209 = RET
  { 210,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #210 = RETI
  { 211,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #211 = SAR16r1
  { 212,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #212 = SAR16r1c
  { 213,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #213 = SAR8r1
  { 214,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #214 = SAR8r1c
  { 215,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #215 = SBC16mi
  { 216,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #216 = SBC16mm
  { 217,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #217 = SBC16mr
  { 218,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #218 = SBC16ri
  { 219,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #219 = SBC16rm
  { 220,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #220 = SBC16rr
  { 221,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #221 = SBC8mi
  { 222,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #222 = SBC8mm
  { 223,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #223 = SBC8mr
  { 224,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #224 = SBC8ri
  { 225,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #225 = SBC8rm
  { 226,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #226 = SBC8rr
  { 227,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #227 = SEXT16r
  { 228,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo50, -1 ,nullptr },  // Inst #228 = SHL16r1
  { 229,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #229 = SHL8r1
  { 230,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #230 = SUB16mi
  { 231,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #231 = SUB16mm
  { 232,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #232 = SUB16mr
  { 233,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #233 = SUB16ri
  { 234,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #234 = SUB16rm
  { 235,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #235 = SUB16rm_POST
  { 236,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #236 = SUB16rr
  { 237,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #237 = SUB8mi
  { 238,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #238 = SUB8mm
  { 239,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #239 = SUB8mr
  { 240,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #240 = SUB8ri
  { 241,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #241 = SUB8rm
  { 242,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #242 = SUB8rm_POST
  { 243,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #243 = SUB8rr
  { 244,	2,	1,	0,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #244 = SWPB16r
  { 245,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #245 = Select16
  { 246,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #246 = Select8
  { 247,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #247 = Shl16
  { 248,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #248 = Shl8
  { 249,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #249 = Sra16
  { 250,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #250 = Sra8
  { 251,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #251 = Srl16
  { 252,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #252 = Srl8
  { 253,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #253 = XOR16mi
  { 254,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #254 = XOR16mm
  { 255,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #255 = XOR16mr
  { 256,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #256 = XOR16ri
  { 257,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #257 = XOR16rm
  { 258,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #258 = XOR16rm_POST
  { 259,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #259 = XOR16rr
  { 260,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #260 = XOR8mi
  { 261,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #261 = XOR8mm
  { 262,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #262 = XOR8mr
  { 263,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #263 = XOR8ri
  { 264,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #264 = XOR8rm
  { 265,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #265 = XOR8rm_POST
  { 266,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #266 = XOR8rr
  { 267,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #267 = ZEXT16r
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
  /* 309 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 316 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 331 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 345 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 359 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 367 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 375 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 383 */ 'P', 'H', 'I', 0,
  /* 387 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 396 */ 'R', 'E', 'T', 'I', 0,
  /* 401 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 410 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 421 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 430 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 439 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 445 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 465 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 477 */ 'K', 'I', 'L', 'L', 0,
  /* 482 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 489 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 495 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 502 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 509 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 516 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 526 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 542 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 559 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 567 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 575 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 583 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 591 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 600 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 606 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 615 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 624 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 631 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 638 */ 'J', 'M', 'P', 0,
  /* 642 */ 'N', 'O', 'P', 0,
  /* 646 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 659 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 671 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 686 */ 'G', '_', 'B', 'R', 0,
  /* 691 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 716 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 723 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 730 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 747 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 753 */ 'G', '_', 'O', 'R', 0,
  /* 758 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 769 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 786 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 801 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 818 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 845 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 855 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 864 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 877 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 891 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 915 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 936 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 956 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 968 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 979 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 990 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1001 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1012 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1022 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1037 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1046 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1056 */ 'S', 'U', 'B', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1069 */ 'A', 'D', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1082 */ 'A', 'N', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1095 */ 'X', 'O', 'R', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1108 */ 'M', 'O', 'V', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1121 */ 'S', 'U', 'B', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1133 */ 'A', 'D', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1145 */ 'A', 'N', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1157 */ 'X', 'O', 'R', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1169 */ 'M', 'O', 'V', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1181 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1189 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1196 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1205 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1212 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1219 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1226 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1233 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1240 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1254 */ 'C', 'O', 'P', 'Y', 0,
  /* 1259 */ 'S', 'A', 'R', '1', '6', 'r', '1', 'c', 0,
  /* 1268 */ 'S', 'A', 'R', '8', 'r', '1', 'c', 0,
  /* 1276 */ 'B', 'i', 0,
  /* 1279 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 1285 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 1293 */ 'S', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 1301 */ 'A', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 1309 */ 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 1317 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 1325 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 1333 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 1341 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 1349 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 1357 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 1364 */ 'S', 'B', 'C', '8', 'm', 'i', 0,
  /* 1371 */ 'A', 'D', 'C', '8', 'm', 'i', 0,
  /* 1378 */ 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 1385 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 1392 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 1399 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 1406 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 1413 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 1420 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 1428 */ 'S', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 1436 */ 'A', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 1444 */ 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 1452 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 1460 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 1468 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 1476 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 1484 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 1492 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 1499 */ 'S', 'B', 'C', '8', 'r', 'i', 0,
  /* 1506 */ 'A', 'D', 'C', '8', 'r', 'i', 0,
  /* 1513 */ 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 1520 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 1527 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 1534 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 1541 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 1548 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 1555 */ 'B', 'm', 0,
  /* 1558 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 1564 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 1572 */ 'S', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 1580 */ 'A', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 1588 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 1596 */ 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 1604 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 1612 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 1620 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 1628 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 1636 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 1643 */ 'S', 'B', 'C', '8', 'm', 'm', 0,
  /* 1650 */ 'A', 'D', 'C', '8', 'm', 'm', 0,
  /* 1657 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 1664 */ 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 1671 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 1678 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 1685 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 1692 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 1699 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 1707 */ 'S', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 1715 */ 'A', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 1723 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 1731 */ 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 1739 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 1747 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 1755 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 1763 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 1771 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 1779 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 1786 */ 'S', 'B', 'C', '8', 'r', 'm', 0,
  /* 1793 */ 'A', 'D', 'C', '8', 'r', 'm', 0,
  /* 1800 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 1807 */ 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 1814 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 1821 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 1828 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 1835 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 1842 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 1849 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 1857 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 1865 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 1872 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1880 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 1888 */ 'B', 'r', 0,
  /* 1891 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 1897 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 1905 */ 'S', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 1913 */ 'A', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 1921 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 1929 */ 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 1937 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 1945 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 1953 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 1961 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 1969 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 1977 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 1984 */ 'S', 'B', 'C', '8', 'm', 'r', 0,
  /* 1991 */ 'A', 'D', 'C', '8', 'm', 'r', 0,
  /* 1998 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 2005 */ 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 2012 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 2019 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 2026 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 2033 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 2040 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 2047 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 2055 */ 'S', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 2063 */ 'A', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 2071 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 2079 */ 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 2087 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 2095 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 2103 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 2111 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 2119 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 2127 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 2134 */ 'S', 'B', 'C', '8', 'r', 'r', 0,
  /* 2141 */ 'A', 'D', 'C', '8', 'r', 'r', 0,
  /* 2148 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 2155 */ 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 2162 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 2169 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 2176 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 2183 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 2190 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    383U, 516U, 526U, 430U, 421U, 477U, 316U, 331U, 
    296U, 345U, 801U, 271U, 222U, 1254U, 243U, 1022U, 
    175U, 591U, 465U, 990U, 197U, 979U, 250U, 659U, 
    646U, 691U, 877U, 891U, 445U, 163U, 109U, 489U, 
    1219U, 1226U, 502U, 509U, 169U, 753U, 747U, 1240U, 
    281U, 845U, 769U, 1037U, 224U, 786U, 1001U, 758U, 
    1046U, 149U, 263U, 188U, 864U, 119U, 818U, 1196U, 
    141U, 968U, 956U, 1012U, 359U, 1189U, 1205U, 439U, 
    723U, 716U, 631U, 624U, 855U, 235U, 214U, 567U, 
    559U, 583U, 575U, 375U, 367U, 156U, 102U, 482U, 
    1212U, 495U, 1233U, 309U, 1181U, 131U, 387U, 401U, 
    606U, 615U, 600U, 410U, 686U, 936U, 915U, 730U, 
    1301U, 1580U, 1913U, 1436U, 1715U, 2063U, 1371U, 1650U, 
    1991U, 1506U, 1793U, 2141U, 1309U, 1596U, 1929U, 1444U, 
    1731U, 1069U, 2079U, 1378U, 1664U, 2005U, 1513U, 1807U, 
    1133U, 2155U, 542U, 671U, 1317U, 1604U, 1937U, 1452U, 
    1739U, 1082U, 2087U, 1385U, 1671U, 2012U, 1520U, 1814U, 
    1145U, 2162U, 1588U, 1921U, 1723U, 2071U, 1657U, 1998U, 
    1800U, 2148U, 1341U, 1620U, 1961U, 1476U, 1763U, 2111U, 
    1406U, 1685U, 2033U, 1541U, 1835U, 2183U, 1276U, 1555U, 
    1888U, 1279U, 1558U, 1891U, 1325U, 1945U, 1460U, 1747U, 
    2095U, 1392U, 2019U, 1527U, 1821U, 2169U, 115U, 638U, 
    1349U, 1628U, 1969U, 1484U, 1771U, 1108U, 2119U, 1413U, 
    1692U, 2040U, 1548U, 1842U, 1169U, 2190U, 72U, 83U, 
    642U, 1334U, 1613U, 1954U, 1469U, 1756U, 1096U, 2104U, 
    1400U, 1679U, 2027U, 1535U, 1829U, 1158U, 2177U, 1865U, 
    1857U, 887U, 396U, 8U, 1259U, 23U, 1268U, 1293U, 
    1572U, 1905U, 1428U, 1707U, 2055U, 1364U, 1643U, 1984U, 
    1499U, 1786U, 2134U, 1872U, 0U, 16U, 1285U, 1564U, 
    1897U, 1420U, 1699U, 1056U, 2047U, 1357U, 1636U, 1977U, 
    1492U, 1779U, 1121U, 2127U, 1849U, 48U, 94U, 36U, 
    62U, 30U, 57U, 42U, 67U, 1333U, 1612U, 1953U, 
    1468U, 1755U, 1095U, 2103U, 1399U, 1678U, 2026U, 1534U, 
    1828U, 1157U, 2176U, 1880U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 268);
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
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 268);
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

