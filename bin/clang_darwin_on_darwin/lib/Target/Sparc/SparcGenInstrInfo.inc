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

namespace SP {
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
    PATCHABLE_EVENT_CALL	= 29,
    G_ADD	= 30,
    G_SUB	= 31,
    G_MUL	= 32,
    G_SDIV	= 33,
    G_UDIV	= 34,
    G_SREM	= 35,
    G_UREM	= 36,
    G_AND	= 37,
    G_OR	= 38,
    G_XOR	= 39,
    G_FRAME_INDEX	= 40,
    G_GLOBAL_VALUE	= 41,
    G_EXTRACT	= 42,
    G_UNMERGE_VALUES	= 43,
    G_INSERT	= 44,
    G_SEQUENCE	= 45,
    G_MERGE_VALUES	= 46,
    G_PTRTOINT	= 47,
    G_INTTOPTR	= 48,
    G_BITCAST	= 49,
    G_LOAD	= 50,
    G_STORE	= 51,
    G_BRCOND	= 52,
    G_BRINDIRECT	= 53,
    G_INTRINSIC	= 54,
    G_INTRINSIC_W_SIDE_EFFECTS	= 55,
    G_ANYEXT	= 56,
    G_TRUNC	= 57,
    G_CONSTANT	= 58,
    G_FCONSTANT	= 59,
    G_VASTART	= 60,
    G_VAARG	= 61,
    G_SEXT	= 62,
    G_ZEXT	= 63,
    G_SHL	= 64,
    G_LSHR	= 65,
    G_ASHR	= 66,
    G_ICMP	= 67,
    G_FCMP	= 68,
    G_SELECT	= 69,
    G_UADDE	= 70,
    G_USUBE	= 71,
    G_SADDO	= 72,
    G_SSUBO	= 73,
    G_UMULO	= 74,
    G_SMULO	= 75,
    G_UMULH	= 76,
    G_SMULH	= 77,
    G_FADD	= 78,
    G_FSUB	= 79,
    G_FMUL	= 80,
    G_FDIV	= 81,
    G_FREM	= 82,
    G_FPOW	= 83,
    G_FNEG	= 84,
    G_FPEXT	= 85,
    G_FPTRUNC	= 86,
    G_FPTOSI	= 87,
    G_FPTOUI	= 88,
    G_SITOFP	= 89,
    G_UITOFP	= 90,
    G_GEP	= 91,
    G_PTR_MASK	= 92,
    G_BR	= 93,
    G_INSERT_VECTOR_ELT	= 94,
    G_EXTRACT_VECTOR_ELT	= 95,
    G_SHUFFLE_VECTOR	= 96,
    ADDCCri	= 97,
    ADDCCrr	= 98,
    ADDCri	= 99,
    ADDCrr	= 100,
    ADDEri	= 101,
    ADDErr	= 102,
    ADDXC	= 103,
    ADDXCCC	= 104,
    ADDXri	= 105,
    ADDXrr	= 106,
    ADDri	= 107,
    ADDrr	= 108,
    ADJCALLSTACKDOWN	= 109,
    ADJCALLSTACKUP	= 110,
    ALIGNADDR	= 111,
    ALIGNADDRL	= 112,
    ANDCCri	= 113,
    ANDCCrr	= 114,
    ANDNCCri	= 115,
    ANDNCCrr	= 116,
    ANDNri	= 117,
    ANDNrr	= 118,
    ANDXNrr	= 119,
    ANDXri	= 120,
    ANDXrr	= 121,
    ANDri	= 122,
    ANDrr	= 123,
    ARRAY16	= 124,
    ARRAY32	= 125,
    ARRAY8	= 126,
    BA	= 127,
    BCOND	= 128,
    BCONDA	= 129,
    BINDri	= 130,
    BINDrr	= 131,
    BMASK	= 132,
    BPFCC	= 133,
    BPFCCA	= 134,
    BPFCCANT	= 135,
    BPFCCNT	= 136,
    BPGEZapn	= 137,
    BPGEZapt	= 138,
    BPGEZnapn	= 139,
    BPGEZnapt	= 140,
    BPGZapn	= 141,
    BPGZapt	= 142,
    BPGZnapn	= 143,
    BPGZnapt	= 144,
    BPICC	= 145,
    BPICCA	= 146,
    BPICCANT	= 147,
    BPICCNT	= 148,
    BPLEZapn	= 149,
    BPLEZapt	= 150,
    BPLEZnapn	= 151,
    BPLEZnapt	= 152,
    BPLZapn	= 153,
    BPLZapt	= 154,
    BPLZnapn	= 155,
    BPLZnapt	= 156,
    BPNZapn	= 157,
    BPNZapt	= 158,
    BPNZnapn	= 159,
    BPNZnapt	= 160,
    BPXCC	= 161,
    BPXCCA	= 162,
    BPXCCANT	= 163,
    BPXCCNT	= 164,
    BPZapn	= 165,
    BPZapt	= 166,
    BPZnapn	= 167,
    BPZnapt	= 168,
    BSHUFFLE	= 169,
    CALL	= 170,
    CALLri	= 171,
    CALLrr	= 172,
    CASAasi10	= 173,
    CASArr	= 174,
    CASXrr	= 175,
    CASrr	= 176,
    CBCOND	= 177,
    CBCONDA	= 178,
    CMASK16	= 179,
    CMASK32	= 180,
    CMASK8	= 181,
    CMPri	= 182,
    CMPrr	= 183,
    EDGE16	= 184,
    EDGE16L	= 185,
    EDGE16LN	= 186,
    EDGE16N	= 187,
    EDGE32	= 188,
    EDGE32L	= 189,
    EDGE32LN	= 190,
    EDGE32N	= 191,
    EDGE8	= 192,
    EDGE8L	= 193,
    EDGE8LN	= 194,
    EDGE8N	= 195,
    EH_SJLJ_LONGJMP32ri	= 196,
    EH_SJLJ_LONGJMP32rr	= 197,
    EH_SJLJ_SETJMP32ri	= 198,
    EH_SJLJ_SETJMP32rr	= 199,
    FABSD	= 200,
    FABSQ	= 201,
    FABSS	= 202,
    FADDD	= 203,
    FADDQ	= 204,
    FADDS	= 205,
    FALIGNADATA	= 206,
    FAND	= 207,
    FANDNOT1	= 208,
    FANDNOT1S	= 209,
    FANDNOT2	= 210,
    FANDNOT2S	= 211,
    FANDS	= 212,
    FBCOND	= 213,
    FBCONDA	= 214,
    FCHKSM16	= 215,
    FCMPD	= 216,
    FCMPEQ16	= 217,
    FCMPEQ32	= 218,
    FCMPGT16	= 219,
    FCMPGT32	= 220,
    FCMPLE16	= 221,
    FCMPLE32	= 222,
    FCMPNE16	= 223,
    FCMPNE32	= 224,
    FCMPQ	= 225,
    FCMPS	= 226,
    FDIVD	= 227,
    FDIVQ	= 228,
    FDIVS	= 229,
    FDMULQ	= 230,
    FDTOI	= 231,
    FDTOQ	= 232,
    FDTOS	= 233,
    FDTOX	= 234,
    FEXPAND	= 235,
    FHADDD	= 236,
    FHADDS	= 237,
    FHSUBD	= 238,
    FHSUBS	= 239,
    FITOD	= 240,
    FITOQ	= 241,
    FITOS	= 242,
    FLCMPD	= 243,
    FLCMPS	= 244,
    FLUSH	= 245,
    FLUSHW	= 246,
    FLUSHri	= 247,
    FLUSHrr	= 248,
    FMEAN16	= 249,
    FMOVD	= 250,
    FMOVD_FCC	= 251,
    FMOVD_ICC	= 252,
    FMOVD_XCC	= 253,
    FMOVQ	= 254,
    FMOVQ_FCC	= 255,
    FMOVQ_ICC	= 256,
    FMOVQ_XCC	= 257,
    FMOVRGEZD	= 258,
    FMOVRGEZQ	= 259,
    FMOVRGEZS	= 260,
    FMOVRGZD	= 261,
    FMOVRGZQ	= 262,
    FMOVRGZS	= 263,
    FMOVRLEZD	= 264,
    FMOVRLEZQ	= 265,
    FMOVRLEZS	= 266,
    FMOVRLZD	= 267,
    FMOVRLZQ	= 268,
    FMOVRLZS	= 269,
    FMOVRNZD	= 270,
    FMOVRNZQ	= 271,
    FMOVRNZS	= 272,
    FMOVRZD	= 273,
    FMOVRZQ	= 274,
    FMOVRZS	= 275,
    FMOVS	= 276,
    FMOVS_FCC	= 277,
    FMOVS_ICC	= 278,
    FMOVS_XCC	= 279,
    FMUL8SUX16	= 280,
    FMUL8ULX16	= 281,
    FMUL8X16	= 282,
    FMUL8X16AL	= 283,
    FMUL8X16AU	= 284,
    FMULD	= 285,
    FMULD8SUX16	= 286,
    FMULD8ULX16	= 287,
    FMULQ	= 288,
    FMULS	= 289,
    FNADDD	= 290,
    FNADDS	= 291,
    FNAND	= 292,
    FNANDS	= 293,
    FNEGD	= 294,
    FNEGQ	= 295,
    FNEGS	= 296,
    FNHADDD	= 297,
    FNHADDS	= 298,
    FNMULD	= 299,
    FNMULS	= 300,
    FNOR	= 301,
    FNORS	= 302,
    FNOT1	= 303,
    FNOT1S	= 304,
    FNOT2	= 305,
    FNOT2S	= 306,
    FNSMULD	= 307,
    FONE	= 308,
    FONES	= 309,
    FOR	= 310,
    FORNOT1	= 311,
    FORNOT1S	= 312,
    FORNOT2	= 313,
    FORNOT2S	= 314,
    FORS	= 315,
    FPACK16	= 316,
    FPACK32	= 317,
    FPACKFIX	= 318,
    FPADD16	= 319,
    FPADD16S	= 320,
    FPADD32	= 321,
    FPADD32S	= 322,
    FPADD64	= 323,
    FPMERGE	= 324,
    FPSUB16	= 325,
    FPSUB16S	= 326,
    FPSUB32	= 327,
    FPSUB32S	= 328,
    FQTOD	= 329,
    FQTOI	= 330,
    FQTOS	= 331,
    FQTOX	= 332,
    FSLAS16	= 333,
    FSLAS32	= 334,
    FSLL16	= 335,
    FSLL32	= 336,
    FSMULD	= 337,
    FSQRTD	= 338,
    FSQRTQ	= 339,
    FSQRTS	= 340,
    FSRA16	= 341,
    FSRA32	= 342,
    FSRC1	= 343,
    FSRC1S	= 344,
    FSRC2	= 345,
    FSRC2S	= 346,
    FSRL16	= 347,
    FSRL32	= 348,
    FSTOD	= 349,
    FSTOI	= 350,
    FSTOQ	= 351,
    FSTOX	= 352,
    FSUBD	= 353,
    FSUBQ	= 354,
    FSUBS	= 355,
    FXNOR	= 356,
    FXNORS	= 357,
    FXOR	= 358,
    FXORS	= 359,
    FXTOD	= 360,
    FXTOQ	= 361,
    FXTOS	= 362,
    FZERO	= 363,
    FZEROS	= 364,
    GETPCX	= 365,
    JMPLri	= 366,
    JMPLrr	= 367,
    LDArr	= 368,
    LDCSRri	= 369,
    LDCSRrr	= 370,
    LDCri	= 371,
    LDCrr	= 372,
    LDDArr	= 373,
    LDDCri	= 374,
    LDDCrr	= 375,
    LDDFArr	= 376,
    LDDFri	= 377,
    LDDFrr	= 378,
    LDDri	= 379,
    LDDrr	= 380,
    LDFArr	= 381,
    LDFSRri	= 382,
    LDFSRrr	= 383,
    LDFri	= 384,
    LDFrr	= 385,
    LDQFArr	= 386,
    LDQFri	= 387,
    LDQFrr	= 388,
    LDSBArr	= 389,
    LDSBri	= 390,
    LDSBrr	= 391,
    LDSHArr	= 392,
    LDSHri	= 393,
    LDSHrr	= 394,
    LDSTUBArr	= 395,
    LDSTUBri	= 396,
    LDSTUBrr	= 397,
    LDSWri	= 398,
    LDSWrr	= 399,
    LDUBArr	= 400,
    LDUBri	= 401,
    LDUBrr	= 402,
    LDUHArr	= 403,
    LDUHri	= 404,
    LDUHrr	= 405,
    LDXFSRri	= 406,
    LDXFSRrr	= 407,
    LDXri	= 408,
    LDXrr	= 409,
    LDri	= 410,
    LDrr	= 411,
    LEAX_ADDri	= 412,
    LEA_ADDri	= 413,
    LZCNT	= 414,
    MEMBARi	= 415,
    MOVDTOX	= 416,
    MOVFCCri	= 417,
    MOVFCCrr	= 418,
    MOVICCri	= 419,
    MOVICCrr	= 420,
    MOVRGEZri	= 421,
    MOVRGEZrr	= 422,
    MOVRGZri	= 423,
    MOVRGZrr	= 424,
    MOVRLEZri	= 425,
    MOVRLEZrr	= 426,
    MOVRLZri	= 427,
    MOVRLZrr	= 428,
    MOVRNZri	= 429,
    MOVRNZrr	= 430,
    MOVRRZri	= 431,
    MOVRRZrr	= 432,
    MOVSTOSW	= 433,
    MOVSTOUW	= 434,
    MOVWTOS	= 435,
    MOVXCCri	= 436,
    MOVXCCrr	= 437,
    MOVXTOD	= 438,
    MULSCCri	= 439,
    MULSCCrr	= 440,
    MULXri	= 441,
    MULXrr	= 442,
    NOP	= 443,
    ORCCri	= 444,
    ORCCrr	= 445,
    ORNCCri	= 446,
    ORNCCrr	= 447,
    ORNri	= 448,
    ORNrr	= 449,
    ORXNrr	= 450,
    ORXri	= 451,
    ORXrr	= 452,
    ORri	= 453,
    ORrr	= 454,
    PDIST	= 455,
    PDISTN	= 456,
    POPCrr	= 457,
    RDASR	= 458,
    RDPR	= 459,
    RDPSR	= 460,
    RDTBR	= 461,
    RDWIM	= 462,
    RESTOREri	= 463,
    RESTORErr	= 464,
    RET	= 465,
    RETL	= 466,
    RETTri	= 467,
    RETTrr	= 468,
    SAVEri	= 469,
    SAVErr	= 470,
    SDIVCCri	= 471,
    SDIVCCrr	= 472,
    SDIVXri	= 473,
    SDIVXrr	= 474,
    SDIVri	= 475,
    SDIVrr	= 476,
    SELECT_CC_DFP_FCC	= 477,
    SELECT_CC_DFP_ICC	= 478,
    SELECT_CC_FP_FCC	= 479,
    SELECT_CC_FP_ICC	= 480,
    SELECT_CC_Int_FCC	= 481,
    SELECT_CC_Int_ICC	= 482,
    SELECT_CC_QFP_FCC	= 483,
    SELECT_CC_QFP_ICC	= 484,
    SET	= 485,
    SETHIXi	= 486,
    SETHIi	= 487,
    SHUTDOWN	= 488,
    SIAM	= 489,
    SLLXri	= 490,
    SLLXrr	= 491,
    SLLri	= 492,
    SLLrr	= 493,
    SMACri	= 494,
    SMACrr	= 495,
    SMULCCri	= 496,
    SMULCCrr	= 497,
    SMULri	= 498,
    SMULrr	= 499,
    SRAXri	= 500,
    SRAXrr	= 501,
    SRAri	= 502,
    SRArr	= 503,
    SRLXri	= 504,
    SRLXrr	= 505,
    SRLri	= 506,
    SRLrr	= 507,
    STArr	= 508,
    STBAR	= 509,
    STBArr	= 510,
    STBri	= 511,
    STBrr	= 512,
    STCSRri	= 513,
    STCSRrr	= 514,
    STCri	= 515,
    STCrr	= 516,
    STDArr	= 517,
    STDCQri	= 518,
    STDCQrr	= 519,
    STDCri	= 520,
    STDCrr	= 521,
    STDFArr	= 522,
    STDFQri	= 523,
    STDFQrr	= 524,
    STDFri	= 525,
    STDFrr	= 526,
    STDri	= 527,
    STDrr	= 528,
    STFArr	= 529,
    STFSRri	= 530,
    STFSRrr	= 531,
    STFri	= 532,
    STFrr	= 533,
    STHArr	= 534,
    STHri	= 535,
    STHrr	= 536,
    STQFArr	= 537,
    STQFri	= 538,
    STQFrr	= 539,
    STXFSRri	= 540,
    STXFSRrr	= 541,
    STXri	= 542,
    STXrr	= 543,
    STri	= 544,
    STrr	= 545,
    SUBCCri	= 546,
    SUBCCrr	= 547,
    SUBCri	= 548,
    SUBCrr	= 549,
    SUBEri	= 550,
    SUBErr	= 551,
    SUBXri	= 552,
    SUBXrr	= 553,
    SUBri	= 554,
    SUBrr	= 555,
    SWAPArr	= 556,
    SWAPri	= 557,
    SWAPrr	= 558,
    TA3	= 559,
    TA5	= 560,
    TADDCCTVri	= 561,
    TADDCCTVrr	= 562,
    TADDCCri	= 563,
    TADDCCrr	= 564,
    TICCri	= 565,
    TICCrr	= 566,
    TLS_ADDXrr	= 567,
    TLS_ADDrr	= 568,
    TLS_CALL	= 569,
    TLS_LDXrr	= 570,
    TLS_LDrr	= 571,
    TRAPri	= 572,
    TRAPrr	= 573,
    TSUBCCTVri	= 574,
    TSUBCCTVrr	= 575,
    TSUBCCri	= 576,
    TSUBCCrr	= 577,
    TXCCri	= 578,
    TXCCrr	= 579,
    UDIVCCri	= 580,
    UDIVCCrr	= 581,
    UDIVXri	= 582,
    UDIVXrr	= 583,
    UDIVri	= 584,
    UDIVrr	= 585,
    UMACri	= 586,
    UMACrr	= 587,
    UMULCCri	= 588,
    UMULCCrr	= 589,
    UMULXHI	= 590,
    UMULri	= 591,
    UMULrr	= 592,
    UNIMP	= 593,
    V9FCMPD	= 594,
    V9FCMPED	= 595,
    V9FCMPEQ	= 596,
    V9FCMPES	= 597,
    V9FCMPQ	= 598,
    V9FCMPS	= 599,
    V9FMOVD_FCC	= 600,
    V9FMOVQ_FCC	= 601,
    V9FMOVS_FCC	= 602,
    V9MOVFCCri	= 603,
    V9MOVFCCrr	= 604,
    WRASRri	= 605,
    WRASRrr	= 606,
    WRPRri	= 607,
    WRPRrr	= 608,
    WRPSRri	= 609,
    WRPSRrr	= 610,
    WRTBRri	= 611,
    WRTBRrr	= 612,
    WRWIMri	= 613,
    WRWIMrr	= 614,
    XMULX	= 615,
    XMULXHI	= 616,
    XNORCCri	= 617,
    XNORCCrr	= 618,
    XNORXrr	= 619,
    XNORri	= 620,
    XNORrr	= 621,
    XORCCri	= 622,
    XORCCrr	= 623,
    XORXri	= 624,
    XORXrr	= 625,
    XORri	= 626,
    XORrr	= 627,
    INSTRUCTION_LIST_END = 628
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end Sched namespace
} // end SP namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::ICC, 0 };
static const MCPhysReg ImplicitList2[] = { SP::O6, 0 };
static const MCPhysReg ImplicitList3[] = { SP::WIM, 0 };
static const MCPhysReg ImplicitList4[] = { SP::FCC0, 0 };
static const MCPhysReg ImplicitList5[] = { SP::O7, 0 };
static const MCPhysReg ImplicitList6[] = { SP::CPSR, 0 };
static const MCPhysReg ImplicitList7[] = { SP::FSR, 0 };
static const MCPhysReg ImplicitList8[] = { SP::Y, SP::ICC, 0 };
static const MCPhysReg ImplicitList9[] = { SP::PSR, 0 };
static const MCPhysReg ImplicitList10[] = { SP::TBR, 0 };
static const MCPhysReg ImplicitList11[] = { SP::Y, 0 };
static const MCPhysReg ImplicitList12[] = { SP::Y, SP::ASR18, 0 };
static const MCPhysReg ImplicitList13[] = { SP::CPQ, 0 };
static const MCPhysReg ImplicitList14[] = { SP::FQ, 0 };

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
static const MCOperandInfo OperandInfo27[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo37[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo39[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo61[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo62[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo123[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo124[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo125[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
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
  { 29,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #29 = PATCHABLE_EVENT_CALL
  { 30,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #30 = G_ADD
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_SUB
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_MUL
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_SDIV
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_UDIV
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_SREM
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_UREM
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_AND
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #38 = G_OR
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #39 = G_XOR
  { 40,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #40 = G_FRAME_INDEX
  { 41,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #41 = G_GLOBAL_VALUE
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #42 = G_EXTRACT
  { 43,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #43 = G_UNMERGE_VALUES
  { 44,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #44 = G_INSERT
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = G_SEQUENCE
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #46 = G_MERGE_VALUES
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #47 = G_PTRTOINT
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #48 = G_INTTOPTR
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_BITCAST
  { 50,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = G_LOAD
  { 51,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #51 = G_STORE
  { 52,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #52 = G_BRCOND
  { 53,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #53 = G_BRINDIRECT
  { 54,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #54 = G_INTRINSIC
  { 55,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #55 = G_INTRINSIC_W_SIDE_EFFECTS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #56 = G_ANYEXT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #57 = G_TRUNC
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #58 = G_CONSTANT
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #59 = G_FCONSTANT
  { 60,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #60 = G_VASTART
  { 61,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #61 = G_VAARG
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #62 = G_SEXT
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #63 = G_ZEXT
  { 64,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #64 = G_SHL
  { 65,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #65 = G_LSHR
  { 66,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #66 = G_ASHR
  { 67,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #67 = G_ICMP
  { 68,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_FCMP
  { 69,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #69 = G_SELECT
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #70 = G_UADDE
  { 71,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #71 = G_USUBE
  { 72,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #72 = G_SADDO
  { 73,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #73 = G_SSUBO
  { 74,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #74 = G_UMULO
  { 75,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #75 = G_SMULO
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #76 = G_UMULH
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #77 = G_SMULH
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #78 = G_FADD
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #79 = G_FSUB
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #80 = G_FMUL
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #81 = G_FDIV
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #82 = G_FREM
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #83 = G_FPOW
  { 84,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #84 = G_FNEG
  { 85,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #85 = G_FPEXT
  { 86,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #86 = G_FPTRUNC
  { 87,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #87 = G_FPTOSI
  { 88,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #88 = G_FPTOUI
  { 89,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #89 = G_SITOFP
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #90 = G_UITOFP
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #91 = G_GEP
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #92 = G_PTR_MASK
  { 93,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #93 = G_BR
  { 94,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #94 = G_INSERT_VECTOR_ELT
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #95 = G_EXTRACT_VECTOR_ELT
  { 96,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #96 = G_SHUFFLE_VECTOR
  { 97,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #97 = ADDCCri
  { 98,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #98 = ADDCCrr
  { 99,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #99 = ADDCri
  { 100,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #100 = ADDCrr
  { 101,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #101 = ADDEri
  { 102,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #102 = ADDErr
  { 103,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #103 = ADDXC
  { 104,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo29, -1 ,nullptr },  // Inst #104 = ADDXCCC
  { 105,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #105 = ADDXri
  { 106,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #106 = ADDXrr
  { 107,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #107 = ADDri
  { 108,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #108 = ADDrr
  { 109,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #109 = ADJCALLSTACKDOWN
  { 110,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #110 = ADJCALLSTACKUP
  { 111,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #111 = ALIGNADDR
  { 112,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #112 = ALIGNADDRL
  { 113,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #113 = ANDCCri
  { 114,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #114 = ANDCCrr
  { 115,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #115 = ANDNCCri
  { 116,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #116 = ANDNCCrr
  { 117,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #117 = ANDNri
  { 118,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #118 = ANDNrr
  { 119,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #119 = ANDXNrr
  { 120,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #120 = ANDXri
  { 121,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #121 = ANDXrr
  { 122,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #122 = ANDri
  { 123,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #123 = ANDrr
  { 124,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #124 = ARRAY16
  { 125,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #125 = ARRAY32
  { 126,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #126 = ARRAY8
  { 127,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #127 = BA
  { 128,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #128 = BCOND
  { 129,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #129 = BCONDA
  { 130,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #130 = BINDri
  { 131,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #131 = BINDrr
  { 132,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #132 = BMASK
  { 133,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #133 = BPFCC
  { 134,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #134 = BPFCCA
  { 135,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #135 = BPFCCANT
  { 136,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #136 = BPFCCNT
  { 137,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #137 = BPGEZapn
  { 138,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #138 = BPGEZapt
  { 139,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #139 = BPGEZnapn
  { 140,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #140 = BPGEZnapt
  { 141,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #141 = BPGZapn
  { 142,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #142 = BPGZapt
  { 143,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #143 = BPGZnapn
  { 144,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #144 = BPGZnapt
  { 145,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #145 = BPICC
  { 146,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #146 = BPICCA
  { 147,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #147 = BPICCANT
  { 148,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #148 = BPICCNT
  { 149,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #149 = BPLEZapn
  { 150,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #150 = BPLEZapt
  { 151,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #151 = BPLEZnapn
  { 152,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #152 = BPLEZnapt
  { 153,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #153 = BPLZapn
  { 154,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #154 = BPLZapt
  { 155,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #155 = BPLZnapn
  { 156,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #156 = BPLZnapt
  { 157,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #157 = BPNZapn
  { 158,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #158 = BPNZapt
  { 159,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #159 = BPNZnapn
  { 160,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #160 = BPNZnapt
  { 161,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #161 = BPXCC
  { 162,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #162 = BPXCCA
  { 163,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #163 = BPXCCANT
  { 164,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #164 = BPXCCNT
  { 165,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #165 = BPZapn
  { 166,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #166 = BPZapt
  { 167,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #167 = BPZnapn
  { 168,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #168 = BPZnapt
  { 169,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #169 = BSHUFFLE
  { 170,	1,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #170 = CALL
  { 171,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #171 = CALLri
  { 172,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #172 = CALLrr
  { 173,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #173 = CASAasi10
  { 174,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #174 = CASArr
  { 175,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #175 = CASXrr
  { 176,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #176 = CASrr
  { 177,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #177 = CBCOND
  { 178,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #178 = CBCONDA
  { 179,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #179 = CMASK16
  { 180,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #180 = CMASK32
  { 181,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #181 = CMASK8
  { 182,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #182 = CMPri
  { 183,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #183 = CMPrr
  { 184,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #184 = EDGE16
  { 185,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #185 = EDGE16L
  { 186,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #186 = EDGE16LN
  { 187,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #187 = EDGE16N
  { 188,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #188 = EDGE32
  { 189,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #189 = EDGE32L
  { 190,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #190 = EDGE32LN
  { 191,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #191 = EDGE32N
  { 192,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #192 = EDGE8
  { 193,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #193 = EDGE8L
  { 194,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #194 = EDGE8LN
  { 195,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #195 = EDGE8N
  { 196,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #196 = EH_SJLJ_LONGJMP32ri
  { 197,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #197 = EH_SJLJ_LONGJMP32rr
  { 198,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo42, -1 ,nullptr },  // Inst #198 = EH_SJLJ_SETJMP32ri
  { 199,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #199 = EH_SJLJ_SETJMP32rr
  { 200,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #200 = FABSD
  { 201,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #201 = FABSQ
  { 202,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #202 = FABSS
  { 203,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #203 = FADDD
  { 204,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #204 = FADDQ
  { 205,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #205 = FADDS
  { 206,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #206 = FALIGNADATA
  { 207,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #207 = FAND
  { 208,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #208 = FANDNOT1
  { 209,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #209 = FANDNOT1S
  { 210,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #210 = FANDNOT2
  { 211,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #211 = FANDNOT2S
  { 212,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #212 = FANDS
  { 213,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #213 = FBCOND
  { 214,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #214 = FBCONDA
  { 215,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #215 = FCHKSM16
  { 216,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo44, -1 ,nullptr },  // Inst #216 = FCMPD
  { 217,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #217 = FCMPEQ16
  { 218,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #218 = FCMPEQ32
  { 219,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #219 = FCMPGT16
  { 220,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #220 = FCMPGT32
  { 221,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #221 = FCMPLE16
  { 222,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #222 = FCMPLE32
  { 223,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #223 = FCMPNE16
  { 224,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #224 = FCMPNE32
  { 225,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #225 = FCMPQ
  { 226,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo46, -1 ,nullptr },  // Inst #226 = FCMPS
  { 227,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #227 = FDIVD
  { 228,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #228 = FDIVQ
  { 229,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #229 = FDIVS
  { 230,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #230 = FDMULQ
  { 231,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #231 = FDTOI
  { 232,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #232 = FDTOQ
  { 233,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #233 = FDTOS
  { 234,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #234 = FDTOX
  { 235,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #235 = FEXPAND
  { 236,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #236 = FHADDD
  { 237,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #237 = FHADDS
  { 238,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #238 = FHSUBD
  { 239,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #239 = FHSUBS
  { 240,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #240 = FITOD
  { 241,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #241 = FITOQ
  { 242,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #242 = FITOS
  { 243,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #243 = FLCMPD
  { 244,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #244 = FLCMPS
  { 245,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #245 = FLUSH
  { 246,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #246 = FLUSHW
  { 247,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #247 = FLUSHri
  { 248,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #248 = FLUSHrr
  { 249,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #249 = FMEAN16
  { 250,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #250 = FMOVD
  { 251,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #251 = FMOVD_FCC
  { 252,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #252 = FMOVD_ICC
  { 253,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #253 = FMOVD_XCC
  { 254,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #254 = FMOVQ
  { 255,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #255 = FMOVQ_FCC
  { 256,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #256 = FMOVQ_ICC
  { 257,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #257 = FMOVQ_XCC
  { 258,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #258 = FMOVRGEZD
  { 259,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #259 = FMOVRGEZQ
  { 260,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #260 = FMOVRGEZS
  { 261,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #261 = FMOVRGZD
  { 262,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #262 = FMOVRGZQ
  { 263,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #263 = FMOVRGZS
  { 264,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #264 = FMOVRLEZD
  { 265,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #265 = FMOVRLEZQ
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #266 = FMOVRLEZS
  { 267,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #267 = FMOVRLZD
  { 268,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #268 = FMOVRLZQ
  { 269,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #269 = FMOVRLZS
  { 270,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #270 = FMOVRNZD
  { 271,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #271 = FMOVRNZQ
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #272 = FMOVRNZS
  { 273,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #273 = FMOVRZD
  { 274,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #274 = FMOVRZQ
  { 275,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #275 = FMOVRZS
  { 276,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #276 = FMOVS
  { 277,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #277 = FMOVS_FCC
  { 278,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #278 = FMOVS_ICC
  { 279,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #279 = FMOVS_XCC
  { 280,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #280 = FMUL8SUX16
  { 281,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #281 = FMUL8ULX16
  { 282,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #282 = FMUL8X16
  { 283,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #283 = FMUL8X16AL
  { 284,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #284 = FMUL8X16AU
  { 285,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #285 = FMULD
  { 286,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #286 = FMULD8SUX16
  { 287,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #287 = FMULD8ULX16
  { 288,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #288 = FMULQ
  { 289,	3,	1,	4,	9,	0, 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #289 = FMULS
  { 290,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #290 = FNADDD
  { 291,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #291 = FNADDS
  { 292,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #292 = FNAND
  { 293,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #293 = FNANDS
  { 294,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #294 = FNEGD
  { 295,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #295 = FNEGQ
  { 296,	2,	1,	4,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #296 = FNEGS
  { 297,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #297 = FNHADDD
  { 298,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #298 = FNHADDS
  { 299,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #299 = FNMULD
  { 300,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #300 = FNMULS
  { 301,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #301 = FNOR
  { 302,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #302 = FNORS
  { 303,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #303 = FNOT1
  { 304,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #304 = FNOT1S
  { 305,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #305 = FNOT2
  { 306,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #306 = FNOT2S
  { 307,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #307 = FNSMULD
  { 308,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #308 = FONE
  { 309,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #309 = FONES
  { 310,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #310 = FOR
  { 311,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #311 = FORNOT1
  { 312,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #312 = FORNOT1S
  { 313,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #313 = FORNOT2
  { 314,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #314 = FORNOT2S
  { 315,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #315 = FORS
  { 316,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #316 = FPACK16
  { 317,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #317 = FPACK32
  { 318,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #318 = FPACKFIX
  { 319,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #319 = FPADD16
  { 320,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #320 = FPADD16S
  { 321,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #321 = FPADD32
  { 322,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #322 = FPADD32S
  { 323,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #323 = FPADD64
  { 324,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #324 = FPMERGE
  { 325,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #325 = FPSUB16
  { 326,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #326 = FPSUB16S
  { 327,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #327 = FPSUB32
  { 328,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #328 = FPSUB32S
  { 329,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #329 = FQTOD
  { 330,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #330 = FQTOI
  { 331,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #331 = FQTOS
  { 332,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #332 = FQTOX
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #333 = FSLAS16
  { 334,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #334 = FSLAS32
  { 335,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #335 = FSLL16
  { 336,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #336 = FSLL32
  { 337,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #337 = FSMULD
  { 338,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #338 = FSQRTD
  { 339,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #339 = FSQRTQ
  { 340,	2,	1,	4,	12,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #340 = FSQRTS
  { 341,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #341 = FSRA16
  { 342,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #342 = FSRA32
  { 343,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #343 = FSRC1
  { 344,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #344 = FSRC1S
  { 345,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #345 = FSRC2
  { 346,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #346 = FSRC2S
  { 347,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #347 = FSRL16
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #348 = FSRL32
  { 349,	2,	1,	4,	13,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #349 = FSTOD
  { 350,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #350 = FSTOI
  { 351,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #351 = FSTOQ
  { 352,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #352 = FSTOX
  { 353,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #353 = FSUBD
  { 354,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #354 = FSUBQ
  { 355,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #355 = FSUBS
  { 356,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #356 = FXNOR
  { 357,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #357 = FXNORS
  { 358,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #358 = FXOR
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #359 = FXORS
  { 360,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #360 = FXTOD
  { 361,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #361 = FXTOQ
  { 362,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #362 = FXTOS
  { 363,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #363 = FZERO
  { 364,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #364 = FZEROS
  { 365,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #365 = GETPCX
  { 366,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #366 = JMPLri
  { 367,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #367 = JMPLrr
  { 368,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #368 = LDArr
  { 369,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo31, -1 ,nullptr },  // Inst #369 = LDCSRri
  { 370,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo32, -1 ,nullptr },  // Inst #370 = LDCSRrr
  { 371,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #371 = LDCri
  { 372,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #372 = LDCrr
  { 373,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #373 = LDDArr
  { 374,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #374 = LDDCri
  { 375,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #375 = LDDCrr
  { 376,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #376 = LDDFArr
  { 377,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #377 = LDDFri
  { 378,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #378 = LDDFrr
  { 379,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #379 = LDDri
  { 380,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #380 = LDDrr
  { 381,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #381 = LDFArr
  { 382,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo31, -1 ,nullptr },  // Inst #382 = LDFSRri
  { 383,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32, -1 ,nullptr },  // Inst #383 = LDFSRrr
  { 384,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #384 = LDFri
  { 385,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #385 = LDFrr
  { 386,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #386 = LDQFArr
  { 387,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #387 = LDQFri
  { 388,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #388 = LDQFrr
  { 389,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #389 = LDSBArr
  { 390,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #390 = LDSBri
  { 391,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #391 = LDSBrr
  { 392,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #392 = LDSHArr
  { 393,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #393 = LDSHri
  { 394,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #394 = LDSHrr
  { 395,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #395 = LDSTUBArr
  { 396,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #396 = LDSTUBri
  { 397,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #397 = LDSTUBrr
  { 398,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #398 = LDSWri
  { 399,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #399 = LDSWrr
  { 400,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #400 = LDUBArr
  { 401,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #401 = LDUBri
  { 402,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #402 = LDUBrr
  { 403,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #403 = LDUHArr
  { 404,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #404 = LDUHri
  { 405,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #405 = LDUHrr
  { 406,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo31, -1 ,nullptr },  // Inst #406 = LDXFSRri
  { 407,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32, -1 ,nullptr },  // Inst #407 = LDXFSRrr
  { 408,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #408 = LDXri
  { 409,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #409 = LDXrr
  { 410,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #410 = LDri
  { 411,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #411 = LDrr
  { 412,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #412 = LEAX_ADDri
  { 413,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #413 = LEA_ADDri
  { 414,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #414 = LZCNT
  { 415,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #415 = MEMBARi
  { 416,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #416 = MOVDTOX
  { 417,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #417 = MOVFCCri
  { 418,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #418 = MOVFCCrr
  { 419,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #419 = MOVICCri
  { 420,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #420 = MOVICCrr
  { 421,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #421 = MOVRGEZri
  { 422,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #422 = MOVRGEZrr
  { 423,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #423 = MOVRGZri
  { 424,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #424 = MOVRGZrr
  { 425,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #425 = MOVRLEZri
  { 426,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #426 = MOVRLEZrr
  { 427,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #427 = MOVRLZri
  { 428,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #428 = MOVRLZrr
  { 429,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #429 = MOVRNZri
  { 430,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #430 = MOVRNZrr
  { 431,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #431 = MOVRRZri
  { 432,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #432 = MOVRRZrr
  { 433,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #433 = MOVSTOSW
  { 434,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #434 = MOVSTOUW
  { 435,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #435 = MOVWTOS
  { 436,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #436 = MOVXCCri
  { 437,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #437 = MOVXCCrr
  { 438,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #438 = MOVXTOD
  { 439,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, ImplicitList8, OperandInfo27, -1 ,nullptr },  // Inst #439 = MULSCCri
  { 440,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, ImplicitList8, OperandInfo28, -1 ,nullptr },  // Inst #440 = MULSCCrr
  { 441,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #441 = MULXri
  { 442,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #442 = MULXrr
  { 443,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #443 = NOP
  { 444,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #444 = ORCCri
  { 445,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #445 = ORCCrr
  { 446,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #446 = ORNCCri
  { 447,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #447 = ORNCCrr
  { 448,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #448 = ORNri
  { 449,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #449 = ORNrr
  { 450,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #450 = ORXNrr
  { 451,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #451 = ORXri
  { 452,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #452 = ORXrr
  { 453,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #453 = ORri
  { 454,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #454 = ORrr
  { 455,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #455 = PDIST
  { 456,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #456 = PDISTN
  { 457,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #457 = POPCrr
  { 458,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #458 = RDASR
  { 459,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #459 = RDPR
  { 460,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #460 = RDPSR
  { 461,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #461 = RDTBR
  { 462,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #462 = RDWIM
  { 463,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #463 = RESTOREri
  { 464,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #464 = RESTORErr
  { 465,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #465 = RET
  { 466,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #466 = RETL
  { 467,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #467 = RETTri
  { 468,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #468 = RETTrr
  { 469,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #469 = SAVEri
  { 470,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #470 = SAVErr
  { 471,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList8, OperandInfo27, -1 ,nullptr },  // Inst #471 = SDIVCCri
  { 472,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList8, OperandInfo28, -1 ,nullptr },  // Inst #472 = SDIVCCrr
  { 473,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #473 = SDIVXri
  { 474,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #474 = SDIVXrr
  { 475,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo27, -1 ,nullptr },  // Inst #475 = SDIVri
  { 476,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo28, -1 ,nullptr },  // Inst #476 = SDIVrr
  { 477,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #477 = SELECT_CC_DFP_FCC
  { 478,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #478 = SELECT_CC_DFP_ICC
  { 479,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #479 = SELECT_CC_FP_FCC
  { 480,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #480 = SELECT_CC_FP_ICC
  { 481,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #481 = SELECT_CC_Int_FCC
  { 482,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #482 = SELECT_CC_Int_ICC
  { 483,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #483 = SELECT_CC_QFP_FCC
  { 484,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #484 = SELECT_CC_QFP_ICC
  { 485,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #485 = SET
  { 486,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #486 = SETHIXi
  { 487,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #487 = SETHIi
  { 488,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #488 = SHUTDOWN
  { 489,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #489 = SIAM
  { 490,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #490 = SLLXri
  { 491,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #491 = SLLXrr
  { 492,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #492 = SLLri
  { 493,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #493 = SLLrr
  { 494,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo99, -1 ,nullptr },  // Inst #494 = SMACri
  { 495,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo100, -1 ,nullptr },  // Inst #495 = SMACrr
  { 496,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo27, -1 ,nullptr },  // Inst #496 = SMULCCri
  { 497,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo28, -1 ,nullptr },  // Inst #497 = SMULCCrr
  { 498,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo27, -1 ,nullptr },  // Inst #498 = SMULri
  { 499,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo28, -1 ,nullptr },  // Inst #499 = SMULrr
  { 500,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #500 = SRAXri
  { 501,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #501 = SRAXrr
  { 502,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #502 = SRAri
  { 503,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #503 = SRArr
  { 504,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #504 = SRLXri
  { 505,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #505 = SRLXrr
  { 506,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #506 = SRLri
  { 507,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #507 = SRLrr
  { 508,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #508 = STArr
  { 509,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #509 = STBAR
  { 510,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #510 = STBArr
  { 511,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #511 = STBri
  { 512,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #512 = STBrr
  { 513,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo31, -1 ,nullptr },  // Inst #513 = STCSRri
  { 514,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo32, -1 ,nullptr },  // Inst #514 = STCSRrr
  { 515,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #515 = STCri
  { 516,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #516 = STCrr
  { 517,	4,	0,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #517 = STDArr
  { 518,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo31, -1 ,nullptr },  // Inst #518 = STDCQri
  { 519,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo32, -1 ,nullptr },  // Inst #519 = STDCQrr
  { 520,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #520 = STDCri
  { 521,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #521 = STDCrr
  { 522,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #522 = STDFArr
  { 523,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo31, -1 ,nullptr },  // Inst #523 = STDFQri
  { 524,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo32, -1 ,nullptr },  // Inst #524 = STDFQrr
  { 525,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #525 = STDFri
  { 526,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #526 = STDFrr
  { 527,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #527 = STDri
  { 528,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #528 = STDrr
  { 529,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #529 = STFArr
  { 530,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo31, -1 ,nullptr },  // Inst #530 = STFSRri
  { 531,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32, -1 ,nullptr },  // Inst #531 = STFSRrr
  { 532,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #532 = STFri
  { 533,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #533 = STFrr
  { 534,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #534 = STHArr
  { 535,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #535 = STHri
  { 536,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #536 = STHrr
  { 537,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #537 = STQFArr
  { 538,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #538 = STQFri
  { 539,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #539 = STQFrr
  { 540,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo31, -1 ,nullptr },  // Inst #540 = STXFSRri
  { 541,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo32, -1 ,nullptr },  // Inst #541 = STXFSRrr
  { 542,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #542 = STXri
  { 543,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #543 = STXrr
  { 544,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #544 = STri
  { 545,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #545 = STrr
  { 546,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #546 = SUBCCri
  { 547,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #547 = SUBCCrr
  { 548,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #548 = SUBCri
  { 549,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #549 = SUBCrr
  { 550,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #550 = SUBEri
  { 551,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #551 = SUBErr
  { 552,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #552 = SUBXri
  { 553,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #553 = SUBXrr
  { 554,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #554 = SUBri
  { 555,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #555 = SUBrr
  { 556,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #556 = SWAPArr
  { 557,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #557 = SWAPri
  { 558,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #558 = SWAPrr
  { 559,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #559 = TA3
  { 560,	0,	0,	4,	1,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #560 = TA5
  { 561,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #561 = TADDCCTVri
  { 562,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #562 = TADDCCTVrr
  { 563,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #563 = TADDCCri
  { 564,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #564 = TADDCCrr
  { 565,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #565 = TICCri
  { 566,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #566 = TICCrr
  { 567,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #567 = TLS_ADDXrr
  { 568,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #568 = TLS_ADDrr
  { 569,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #569 = TLS_CALL
  { 570,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #570 = TLS_LDXrr
  { 571,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #571 = TLS_LDrr
  { 572,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #572 = TRAPri
  { 573,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #573 = TRAPrr
  { 574,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #574 = TSUBCCTVri
  { 575,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #575 = TSUBCCTVrr
  { 576,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #576 = TSUBCCri
  { 577,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #577 = TSUBCCrr
  { 578,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #578 = TXCCri
  { 579,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #579 = TXCCrr
  { 580,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList8, OperandInfo27, -1 ,nullptr },  // Inst #580 = UDIVCCri
  { 581,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList8, OperandInfo28, -1 ,nullptr },  // Inst #581 = UDIVCCrr
  { 582,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #582 = UDIVXri
  { 583,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #583 = UDIVXrr
  { 584,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo27, -1 ,nullptr },  // Inst #584 = UDIVri
  { 585,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo28, -1 ,nullptr },  // Inst #585 = UDIVrr
  { 586,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo99, -1 ,nullptr },  // Inst #586 = UMACri
  { 587,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo100, -1 ,nullptr },  // Inst #587 = UMACrr
  { 588,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo27, -1 ,nullptr },  // Inst #588 = UMULCCri
  { 589,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo28, -1 ,nullptr },  // Inst #589 = UMULCCrr
  { 590,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #590 = UMULXHI
  { 591,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo27, -1 ,nullptr },  // Inst #591 = UMULri
  { 592,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo28, -1 ,nullptr },  // Inst #592 = UMULrr
  { 593,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #593 = UNIMP
  { 594,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #594 = V9FCMPD
  { 595,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #595 = V9FCMPED
  { 596,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #596 = V9FCMPEQ
  { 597,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #597 = V9FCMPES
  { 598,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #598 = V9FCMPQ
  { 599,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #599 = V9FCMPS
  { 600,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #600 = V9FMOVD_FCC
  { 601,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #601 = V9FMOVQ_FCC
  { 602,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #602 = V9FMOVS_FCC
  { 603,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #603 = V9MOVFCCri
  { 604,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #604 = V9MOVFCCrr
  { 605,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #605 = WRASRri
  { 606,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #606 = WRASRrr
  { 607,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #607 = WRPRri
  { 608,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #608 = WRPRrr
  { 609,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo40, -1 ,nullptr },  // Inst #609 = WRPSRri
  { 610,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo41, -1 ,nullptr },  // Inst #610 = WRPSRrr
  { 611,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo40, -1 ,nullptr },  // Inst #611 = WRTBRri
  { 612,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo41, -1 ,nullptr },  // Inst #612 = WRTBRrr
  { 613,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo40, -1 ,nullptr },  // Inst #613 = WRWIMri
  { 614,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo41, -1 ,nullptr },  // Inst #614 = WRWIMrr
  { 615,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #615 = XMULX
  { 616,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #616 = XMULXHI
  { 617,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #617 = XNORCCri
  { 618,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #618 = XNORCCrr
  { 619,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #619 = XNORXrr
  { 620,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #620 = XNORri
  { 621,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #621 = XNORrr
  { 622,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #622 = XORCCri
  { 623,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo28, -1 ,nullptr },  // Inst #623 = XORCCrr
  { 624,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #624 = XORXri
  { 625,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #625 = XORXrr
  { 626,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #626 = XORri
  { 627,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #627 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'C', 'A', 'S', 'A', 'a', 's', 'i', '1', '0', 0,
  /* 10 */ 'F', 'S', 'R', 'C', '1', 0,
  /* 16 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 0,
  /* 25 */ 'F', 'N', 'O', 'T', '1', 0,
  /* 31 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 0,
  /* 39 */ 'F', 'S', 'R', 'A', '3', '2', 0,
  /* 46 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 0,
  /* 54 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 0,
  /* 62 */ 'E', 'D', 'G', 'E', '3', '2', 0,
  /* 69 */ 'F', 'C', 'M', 'P', 'L', 'E', '3', '2', 0,
  /* 78 */ 'F', 'C', 'M', 'P', 'N', 'E', '3', '2', 0,
  /* 87 */ 'F', 'P', 'A', 'C', 'K', '3', '2', 0,
  /* 95 */ 'C', 'M', 'A', 'S', 'K', '3', '2', 0,
  /* 103 */ 'F', 'S', 'L', 'L', '3', '2', 0,
  /* 110 */ 'F', 'S', 'R', 'L', '3', '2', 0,
  /* 117 */ 'F', 'C', 'M', 'P', 'E', 'Q', '3', '2', 0,
  /* 126 */ 'F', 'S', 'L', 'A', 'S', '3', '2', 0,
  /* 134 */ 'F', 'C', 'M', 'P', 'G', 'T', '3', '2', 0,
  /* 143 */ 'A', 'R', 'R', 'A', 'Y', '3', '2', 0,
  /* 151 */ 'F', 'S', 'R', 'C', '2', 0,
  /* 157 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 0,
  /* 166 */ 'F', 'N', 'O', 'T', '2', 0,
  /* 172 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 0,
  /* 180 */ 'T', 'A', '3', 0,
  /* 184 */ 'F', 'P', 'A', 'D', 'D', '6', '4', 0,
  /* 192 */ 'T', 'A', '5', 0,
  /* 196 */ 'F', 'S', 'R', 'A', '1', '6', 0,
  /* 203 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 0,
  /* 211 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 0,
  /* 219 */ 'E', 'D', 'G', 'E', '1', '6', 0,
  /* 226 */ 'F', 'C', 'M', 'P', 'L', 'E', '1', '6', 0,
  /* 235 */ 'F', 'C', 'M', 'P', 'N', 'E', '1', '6', 0,
  /* 244 */ 'F', 'P', 'A', 'C', 'K', '1', '6', 0,
  /* 252 */ 'C', 'M', 'A', 'S', 'K', '1', '6', 0,
  /* 260 */ 'F', 'S', 'L', 'L', '1', '6', 0,
  /* 267 */ 'F', 'S', 'R', 'L', '1', '6', 0,
  /* 274 */ 'F', 'C', 'H', 'K', 'S', 'M', '1', '6', 0,
  /* 283 */ 'F', 'M', 'E', 'A', 'N', '1', '6', 0,
  /* 291 */ 'F', 'C', 'M', 'P', 'E', 'Q', '1', '6', 0,
  /* 300 */ 'F', 'S', 'L', 'A', 'S', '1', '6', 0,
  /* 308 */ 'F', 'C', 'M', 'P', 'G', 'T', '1', '6', 0,
  /* 317 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 0,
  /* 326 */ 'F', 'M', 'U', 'L', 'D', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 338 */ 'F', 'M', 'U', 'L', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 349 */ 'F', 'M', 'U', 'L', 'D', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 361 */ 'F', 'M', 'U', 'L', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 372 */ 'A', 'R', 'R', 'A', 'Y', '1', '6', 0,
  /* 380 */ 'E', 'D', 'G', 'E', '8', 0,
  /* 386 */ 'C', 'M', 'A', 'S', 'K', '8', 0,
  /* 393 */ 'A', 'R', 'R', 'A', 'Y', '8', 0,
  /* 400 */ 'B', 'A', 0,
  /* 403 */ 'B', 'P', 'F', 'C', 'C', 'A', 0,
  /* 410 */ 'B', 'P', 'I', 'C', 'C', 'A', 0,
  /* 417 */ 'B', 'P', 'X', 'C', 'C', 'A', 0,
  /* 424 */ 'C', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 432 */ 'F', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 440 */ 'F', 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'A', 'T', 'A', 0,
  /* 452 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 459 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 465 */ 'A', 'D', 'D', 'X', 'C', 'C', 'C', 0,
  /* 473 */ 'B', 'P', 'F', 'C', 'C', 0,
  /* 479 */ 'V', '9', 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 491 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 509 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 527 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 544 */ 'V', '9', 'F', 'M', 'O', 'V', 'Q', '_', 'F', 'C', 'C', 0,
  /* 556 */ 'V', '9', 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 568 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 586 */ 'B', 'P', 'I', 'C', 'C', 0,
  /* 592 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 602 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 620 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 638 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 655 */ 'F', 'M', 'O', 'V', 'Q', '_', 'I', 'C', 'C', 0,
  /* 665 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 675 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 693 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 699 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 709 */ 'F', 'M', 'O', 'V', 'Q', '_', 'X', 'C', 'C', 0,
  /* 719 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 729 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 741 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 751 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 759 */ 'A', 'D', 'D', 'X', 'C', 0,
  /* 765 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 772 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 778 */ 'F', 'H', 'S', 'U', 'B', 'D', 0,
  /* 785 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 792 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 798 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 804 */ 'F', 'H', 'A', 'D', 'D', 'D', 0,
  /* 811 */ 'F', 'N', 'H', 'A', 'D', 'D', 'D', 0,
  /* 819 */ 'F', 'N', 'A', 'D', 'D', 'D', 0,
  /* 826 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'D', 0,
  /* 835 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 841 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 847 */ 'F', 'N', 'M', 'U', 'L', 'D', 0,
  /* 854 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 861 */ 'F', 'N', 'S', 'M', 'U', 'L', 'D', 0,
  /* 869 */ 'F', 'A', 'N', 'D', 0,
  /* 874 */ 'F', 'N', 'A', 'N', 'D', 0,
  /* 880 */ 'F', 'E', 'X', 'P', 'A', 'N', 'D', 0,
  /* 888 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 894 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 907 */ 'C', 'B', 'C', 'O', 'N', 'D', 0,
  /* 914 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 921 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 930 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 936 */ 'F', 'Q', 'T', 'O', 'D', 0,
  /* 942 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 948 */ 'F', 'X', 'T', 'O', 'D', 0,
  /* 954 */ 'M', 'O', 'V', 'X', 'T', 'O', 'D', 0,
  /* 962 */ 'V', '9', 'F', 'C', 'M', 'P', 'D', 0,
  /* 970 */ 'F', 'L', 'C', 'M', 'P', 'D', 0,
  /* 977 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 994 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1000 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 1007 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 1013 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 1019 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'D', 0,
  /* 1029 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'D', 0,
  /* 1039 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'D', 0,
  /* 1048 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'D', 0,
  /* 1057 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'D', 0,
  /* 1066 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'D', 0,
  /* 1074 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1082 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1095 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1103 */ 'F', 'P', 'M', 'E', 'R', 'G', 'E', 0,
  /* 1111 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1118 */ 'B', 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 1127 */ 'F', 'O', 'N', 'E', 0,
  /* 1132 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1145 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1153 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1163 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1178 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1191 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1198 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1213 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1227 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1241 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1249 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1257 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1265 */ 'F', 'L', 'U', 'S', 'H', 0,
  /* 1271 */ 'P', 'H', 'I', 0,
  /* 1275 */ 'U', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1283 */ 'X', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1291 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 1297 */ 'F', 'Q', 'T', 'O', 'I', 0,
  /* 1303 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 1309 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1318 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1327 */ 'B', 'M', 'A', 'S', 'K', 0,
  /* 1333 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 1344 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 0,
  /* 1352 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 0,
  /* 1360 */ 'E', 'D', 'G', 'E', '8', 'L', 0,
  /* 1367 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'L', 0,
  /* 1378 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1387 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1396 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1402 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1422 */ 'T', 'L', 'S', '_', 'C', 'A', 'L', 'L', 0,
  /* 1431 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1452 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1464 */ 'K', 'I', 'L', 'L', 0,
  /* 1469 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 'L', 0,
  /* 1480 */ 'R', 'E', 'T', 'L', 0,
  /* 1485 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1492 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1498 */ 'S', 'I', 'A', 'M', 0,
  /* 1503 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1510 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1517 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1524 */ 'R', 'D', 'W', 'I', 'M', 0,
  /* 1530 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1540 */ 'E', 'D', 'G', 'E', '3', '2', 'N', 0,
  /* 1548 */ 'E', 'D', 'G', 'E', '1', '6', 'N', 0,
  /* 1556 */ 'E', 'D', 'G', 'E', '8', 'N', 0,
  /* 1563 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 'N', 0,
  /* 1572 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 'N', 0,
  /* 1581 */ 'E', 'D', 'G', 'E', '8', 'L', 'N', 0,
  /* 1589 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1605 */ 'P', 'D', 'I', 'S', 'T', 'N', 0,
  /* 1612 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1629 */ 'S', 'H', 'U', 'T', 'D', 'O', 'W', 'N', 0,
  /* 1638 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 1646 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 1654 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 1662 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 1670 */ 'F', 'Z', 'E', 'R', 'O', 0,
  /* 1676 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1685 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 1691 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1700 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 1709 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 1716 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 1723 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 1729 */ 'N', 'O', 'P', 0,
  /* 1733 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 1746 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 1758 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1773 */ 'F', 'S', 'U', 'B', 'Q', 0,
  /* 1779 */ 'F', 'A', 'D', 'D', 'Q', 0,
  /* 1785 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 1794 */ 'F', 'N', 'E', 'G', 'Q', 0,
  /* 1800 */ 'F', 'D', 'M', 'U', 'L', 'Q', 0,
  /* 1807 */ 'F', 'M', 'U', 'L', 'Q', 0,
  /* 1813 */ 'F', 'D', 'T', 'O', 'Q', 0,
  /* 1819 */ 'F', 'I', 'T', 'O', 'Q', 0,
  /* 1825 */ 'F', 'S', 'T', 'O', 'Q', 0,
  /* 1831 */ 'F', 'X', 'T', 'O', 'Q', 0,
  /* 1837 */ 'V', '9', 'F', 'C', 'M', 'P', 'Q', 0,
  /* 1845 */ 'F', 'A', 'B', 'S', 'Q', 0,
  /* 1851 */ 'F', 'S', 'Q', 'R', 'T', 'Q', 0,
  /* 1858 */ 'F', 'D', 'I', 'V', 'Q', 0,
  /* 1864 */ 'F', 'M', 'O', 'V', 'Q', 0,
  /* 1870 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'Q', 0,
  /* 1880 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'Q', 0,
  /* 1890 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'Q', 0,
  /* 1899 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'Q', 0,
  /* 1908 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'Q', 0,
  /* 1917 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'Q', 0,
  /* 1925 */ 'S', 'T', 'B', 'A', 'R', 0,
  /* 1931 */ 'R', 'D', 'T', 'B', 'R', 0,
  /* 1937 */ 'G', '_', 'B', 'R', 0,
  /* 1942 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 0,
  /* 1952 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 1977 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 1984 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 1991 */ 'F', 'O', 'R', 0,
  /* 1995 */ 'F', 'N', 'O', 'R', 0,
  /* 2000 */ 'F', 'X', 'N', 'O', 'R', 0,
  /* 2006 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2023 */ 'F', 'X', 'O', 'R', 0,
  /* 2028 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2034 */ 'G', '_', 'O', 'R', 0,
  /* 2039 */ 'R', 'D', 'P', 'R', 0,
  /* 2044 */ 'R', 'D', 'A', 'S', 'R', 0,
  /* 2050 */ 'R', 'D', 'P', 'S', 'R', 0,
  /* 2056 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2067 */ 'F', 'S', 'R', 'C', '1', 'S', 0,
  /* 2074 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 'S', 0,
  /* 2084 */ 'F', 'N', 'O', 'T', '1', 'S', 0,
  /* 2091 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 'S', 0,
  /* 2100 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 'S', 0,
  /* 2109 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 'S', 0,
  /* 2118 */ 'F', 'S', 'R', 'C', '2', 'S', 0,
  /* 2125 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 'S', 0,
  /* 2135 */ 'F', 'N', 'O', 'T', '2', 'S', 0,
  /* 2142 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 'S', 0,
  /* 2151 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 'S', 0,
  /* 2160 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 'S', 0,
  /* 2169 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 2175 */ 'F', 'H', 'S', 'U', 'B', 'S', 0,
  /* 2182 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 2188 */ 'F', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2195 */ 'F', 'N', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2203 */ 'F', 'N', 'A', 'D', 'D', 'S', 0,
  /* 2210 */ 'F', 'A', 'N', 'D', 'S', 0,
  /* 2216 */ 'F', 'N', 'A', 'N', 'D', 'S', 0,
  /* 2223 */ 'F', 'O', 'N', 'E', 'S', 0,
  /* 2229 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'S', 0,
  /* 2238 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2255 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2270 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 2276 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 2282 */ 'F', 'N', 'M', 'U', 'L', 'S', 0,
  /* 2289 */ 'F', 'Z', 'E', 'R', 'O', 'S', 0,
  /* 2296 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 2302 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 2308 */ 'F', 'Q', 'T', 'O', 'S', 0,
  /* 2314 */ 'M', 'O', 'V', 'W', 'T', 'O', 'S', 0,
  /* 2322 */ 'F', 'X', 'T', 'O', 'S', 0,
  /* 2328 */ 'V', '9', 'F', 'C', 'M', 'P', 'S', 0,
  /* 2336 */ 'F', 'L', 'C', 'M', 'P', 'S', 0,
  /* 2343 */ 'F', 'O', 'R', 'S', 0,
  /* 2348 */ 'F', 'N', 'O', 'R', 'S', 0,
  /* 2354 */ 'F', 'X', 'N', 'O', 'R', 'S', 0,
  /* 2361 */ 'F', 'X', 'O', 'R', 'S', 0,
  /* 2367 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2384 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 2390 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 2417 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 2424 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 2430 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 2436 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'S', 0,
  /* 2446 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'S', 0,
  /* 2456 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'S', 0,
  /* 2465 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'S', 0,
  /* 2474 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'S', 0,
  /* 2483 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'S', 0,
  /* 2491 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 2501 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 2510 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 2523 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 2537 */ 'S', 'E', 'T', 0,
  /* 2541 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 2565 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 2586 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 2606 */ 'B', 'P', 'F', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2615 */ 'B', 'P', 'I', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2624 */ 'B', 'P', 'X', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2633 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 2645 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 2656 */ 'B', 'P', 'F', 'C', 'C', 'N', 'T', 0,
  /* 2664 */ 'B', 'P', 'I', 'C', 'C', 'N', 'T', 0,
  /* 2672 */ 'B', 'P', 'X', 'C', 'C', 'N', 'T', 0,
  /* 2680 */ 'L', 'Z', 'C', 'N', 'T', 0,
  /* 2686 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2697 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2708 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 2719 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 2729 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 2744 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 2753 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 2763 */ 'P', 'D', 'I', 'S', 'T', 0,
  /* 2769 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 2777 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 2784 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 2793 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 2800 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'U', 0,
  /* 2811 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 2818 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 2825 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 2832 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 2839 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 2846 */ 'M', 'O', 'V', 'S', 'T', 'O', 'S', 'W', 0,
  /* 2855 */ 'M', 'O', 'V', 'S', 'T', 'O', 'U', 'W', 0,
  /* 2864 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 2871 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 2885 */ 'F', 'P', 'A', 'C', 'K', 'F', 'I', 'X', 0,
  /* 2894 */ 'X', 'M', 'U', 'L', 'X', 0,
  /* 2900 */ 'F', 'D', 'T', 'O', 'X', 0,
  /* 2906 */ 'M', 'O', 'V', 'D', 'T', 'O', 'X', 0,
  /* 2914 */ 'F', 'Q', 'T', 'O', 'X', 0,
  /* 2920 */ 'F', 'S', 'T', 'O', 'X', 0,
  /* 2926 */ 'C', 'O', 'P', 'Y', 0,
  /* 2931 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 2938 */ 'M', 'E', 'M', 'B', 'A', 'R', 'i', 0,
  /* 2946 */ 'S', 'E', 'T', 'H', 'I', 'X', 'i', 0,
  /* 2954 */ 'E', 'H', '_', 'S', 'J', 'L', 'J', '_', 'L', 'O', 'N', 'G', 'J', 'M', 'P', '3', '2', 'r', 'i', 0,
  /* 2974 */ 'E', 'H', '_', 'S', 'J', 'L', 'J', '_', 'S', 'E', 'T', 'J', 'M', 'P', '3', '2', 'r', 'i', 0,
  /* 2993 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 2999 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 3006 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 3012 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 3019 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 3025 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'i', 0,
  /* 3034 */ 'S', 'M', 'A', 'C', 'r', 'i', 0,
  /* 3041 */ 'U', 'M', 'A', 'C', 'r', 'i', 0,
  /* 3048 */ 'S', 'U', 'B', 'C', 'r', 'i', 0,
  /* 3055 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 3064 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 3073 */ 'A', 'N', 'D', 'C', 'C', 'r', 'i', 0,
  /* 3081 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 3092 */ 'T', 'I', 'C', 'C', 'r', 'i', 0,
  /* 3099 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 3108 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 3117 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 3126 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'i', 0,
  /* 3135 */ 'O', 'R', 'N', 'C', 'C', 'r', 'i', 0,
  /* 3143 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 3152 */ 'X', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 3160 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'i', 0,
  /* 3169 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 3178 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 3187 */ 'T', 'X', 'C', 'C', 'r', 'i', 0,
  /* 3194 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 3203 */ 'A', 'D', 'D', 'C', 'r', 'i', 0,
  /* 3210 */ 'L', 'D', 'D', 'C', 'r', 'i', 0,
  /* 3217 */ 'L', 'D', 'C', 'r', 'i', 0,
  /* 3223 */ 'S', 'T', 'D', 'C', 'r', 'i', 0,
  /* 3230 */ 'S', 'T', 'C', 'r', 'i', 0,
  /* 3236 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 3246 */ 'L', 'E', 'A', 'X', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 3257 */ 'L', 'D', 'D', 'r', 'i', 0,
  /* 3263 */ 'L', 'D', 'r', 'i', 0,
  /* 3268 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 3274 */ 'B', 'I', 'N', 'D', 'r', 'i', 0,
  /* 3281 */ 'S', 'T', 'D', 'r', 'i', 0,
  /* 3287 */ 'S', 'U', 'B', 'E', 'r', 'i', 0,
  /* 3294 */ 'A', 'D', 'D', 'E', 'r', 'i', 0,
  /* 3301 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 3311 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 3318 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 3325 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 3331 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 3338 */ 'L', 'D', 'Q', 'F', 'r', 'i', 0,
  /* 3345 */ 'S', 'T', 'Q', 'F', 'r', 'i', 0,
  /* 3352 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 3358 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 3365 */ 'F', 'L', 'U', 'S', 'H', 'r', 'i', 0,
  /* 3373 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 3379 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 3386 */ 'C', 'A', 'L', 'L', 'r', 'i', 0,
  /* 3393 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 3399 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 3406 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 3412 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 3419 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 3426 */ 'W', 'R', 'W', 'I', 'M', 'r', 'i', 0,
  /* 3434 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 3441 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 3447 */ 'T', 'R', 'A', 'P', 'r', 'i', 0,
  /* 3454 */ 'S', 'W', 'A', 'P', 'r', 'i', 0,
  /* 3461 */ 'C', 'M', 'P', 'r', 'i', 0,
  /* 3467 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'i', 0,
  /* 3475 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'i', 0,
  /* 3483 */ 'W', 'R', 'T', 'B', 'R', 'r', 'i', 0,
  /* 3491 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 3498 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 3504 */ 'W', 'R', 'P', 'R', 'r', 'i', 0,
  /* 3511 */ 'W', 'R', 'A', 'S', 'R', 'r', 'i', 0,
  /* 3519 */ 'L', 'D', 'C', 'S', 'R', 'r', 'i', 0,
  /* 3527 */ 'S', 'T', 'C', 'S', 'R', 'r', 'i', 0,
  /* 3535 */ 'L', 'D', 'F', 'S', 'R', 'r', 'i', 0,
  /* 3543 */ 'S', 'T', 'F', 'S', 'R', 'r', 'i', 0,
  /* 3551 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 3560 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 3569 */ 'W', 'R', 'P', 'S', 'R', 'r', 'i', 0,
  /* 3577 */ 'S', 'T', 'r', 'i', 0,
  /* 3582 */ 'R', 'E', 'T', 'T', 'r', 'i', 0,
  /* 3589 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 3596 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 3603 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 3614 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 3625 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 3632 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 3639 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 3646 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 3653 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 3659 */ 'A', 'N', 'D', 'X', 'r', 'i', 0,
  /* 3666 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 3673 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 3680 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 3687 */ 'X', 'O', 'R', 'X', 'r', 'i', 0,
  /* 3694 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 3700 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 3708 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 3716 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'i', 0,
  /* 3726 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'i', 0,
  /* 3736 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'i', 0,
  /* 3745 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'i', 0,
  /* 3754 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'i', 0,
  /* 3763 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'i', 0,
  /* 3772 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 3781 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 3790 */ 'B', 'P', 'G', 'Z', 'a', 'p', 'n', 0,
  /* 3798 */ 'B', 'P', 'L', 'Z', 'a', 'p', 'n', 0,
  /* 3806 */ 'B', 'P', 'N', 'Z', 'a', 'p', 'n', 0,
  /* 3814 */ 'B', 'P', 'Z', 'a', 'p', 'n', 0,
  /* 3821 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3831 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3841 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3850 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3859 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3868 */ 'B', 'P', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3876 */ 'E', 'H', '_', 'S', 'J', 'L', 'J', '_', 'L', 'O', 'N', 'G', 'J', 'M', 'P', '3', '2', 'r', 'r', 0,
  /* 3896 */ 'E', 'H', '_', 'S', 'J', 'L', 'J', '_', 'S', 'E', 'T', 'J', 'M', 'P', '3', '2', 'r', 'r', 0,
  /* 3915 */ 'L', 'D', 'S', 'B', 'A', 'r', 'r', 0,
  /* 3923 */ 'S', 'T', 'B', 'A', 'r', 'r', 0,
  /* 3930 */ 'L', 'D', 'U', 'B', 'A', 'r', 'r', 0,
  /* 3938 */ 'L', 'D', 'S', 'T', 'U', 'B', 'A', 'r', 'r', 0,
  /* 3948 */ 'L', 'D', 'D', 'A', 'r', 'r', 0,
  /* 3955 */ 'L', 'D', 'A', 'r', 'r', 0,
  /* 3961 */ 'S', 'T', 'D', 'A', 'r', 'r', 0,
  /* 3968 */ 'L', 'D', 'D', 'F', 'A', 'r', 'r', 0,
  /* 3976 */ 'L', 'D', 'F', 'A', 'r', 'r', 0,
  /* 3983 */ 'S', 'T', 'D', 'F', 'A', 'r', 'r', 0,
  /* 3991 */ 'L', 'D', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 3999 */ 'S', 'T', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 4007 */ 'S', 'T', 'F', 'A', 'r', 'r', 0,
  /* 4014 */ 'L', 'D', 'S', 'H', 'A', 'r', 'r', 0,
  /* 4022 */ 'S', 'T', 'H', 'A', 'r', 'r', 0,
  /* 4029 */ 'L', 'D', 'U', 'H', 'A', 'r', 'r', 0,
  /* 4037 */ 'S', 'W', 'A', 'P', 'A', 'r', 'r', 0,
  /* 4045 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 4051 */ 'C', 'A', 'S', 'A', 'r', 'r', 0,
  /* 4058 */ 'S', 'T', 'A', 'r', 'r', 0,
  /* 4064 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 4071 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 4077 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 4084 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 4090 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'r', 0,
  /* 4099 */ 'S', 'M', 'A', 'C', 'r', 'r', 0,
  /* 4106 */ 'U', 'M', 'A', 'C', 'r', 'r', 0,
  /* 4113 */ 'S', 'U', 'B', 'C', 'r', 'r', 0,
  /* 4120 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 4129 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 4138 */ 'A', 'N', 'D', 'C', 'C', 'r', 'r', 0,
  /* 4146 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 4157 */ 'T', 'I', 'C', 'C', 'r', 'r', 0,
  /* 4164 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 4173 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 4182 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 4191 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'r', 0,
  /* 4200 */ 'O', 'R', 'N', 'C', 'C', 'r', 'r', 0,
  /* 4208 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 4217 */ 'X', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 4225 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'r', 0,
  /* 4234 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 4243 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 4252 */ 'T', 'X', 'C', 'C', 'r', 'r', 0,
  /* 4259 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 4268 */ 'A', 'D', 'D', 'C', 'r', 'r', 0,
  /* 4275 */ 'L', 'D', 'D', 'C', 'r', 'r', 0,
  /* 4282 */ 'L', 'D', 'C', 'r', 'r', 0,
  /* 4288 */ 'S', 'T', 'D', 'C', 'r', 'r', 0,
  /* 4295 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 4302 */ 'S', 'T', 'C', 'r', 'r', 0,
  /* 4308 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'r', 'r', 0,
  /* 4318 */ 'L', 'D', 'D', 'r', 'r', 0,
  /* 4324 */ 'T', 'L', 'S', '_', 'L', 'D', 'r', 'r', 0,
  /* 4333 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 4339 */ 'B', 'I', 'N', 'D', 'r', 'r', 0,
  /* 4346 */ 'S', 'T', 'D', 'r', 'r', 0,
  /* 4352 */ 'S', 'U', 'B', 'E', 'r', 'r', 0,
  /* 4359 */ 'A', 'D', 'D', 'E', 'r', 'r', 0,
  /* 4366 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 4376 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 4383 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 4390 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 4396 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 4403 */ 'L', 'D', 'Q', 'F', 'r', 'r', 0,
  /* 4410 */ 'S', 'T', 'Q', 'F', 'r', 'r', 0,
  /* 4417 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 4423 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 4430 */ 'F', 'L', 'U', 'S', 'H', 'r', 'r', 0,
  /* 4438 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 4444 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 4451 */ 'C', 'A', 'L', 'L', 'r', 'r', 0,
  /* 4458 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 4464 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 4471 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 4477 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 4484 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 4491 */ 'W', 'R', 'W', 'I', 'M', 'r', 'r', 0,
  /* 4499 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 4506 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 4512 */ 'A', 'N', 'D', 'X', 'N', 'r', 'r', 0,
  /* 4520 */ 'O', 'R', 'X', 'N', 'r', 'r', 0,
  /* 4527 */ 'T', 'R', 'A', 'P', 'r', 'r', 0,
  /* 4534 */ 'S', 'W', 'A', 'P', 'r', 'r', 0,
  /* 4541 */ 'C', 'M', 'P', 'r', 'r', 0,
  /* 4547 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'r', 0,
  /* 4555 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'r', 0,
  /* 4563 */ 'W', 'R', 'T', 'B', 'R', 'r', 'r', 0,
  /* 4571 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 4578 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 4584 */ 'W', 'R', 'P', 'R', 'r', 'r', 0,
  /* 4591 */ 'W', 'R', 'A', 'S', 'R', 'r', 'r', 0,
  /* 4599 */ 'L', 'D', 'C', 'S', 'R', 'r', 'r', 0,
  /* 4607 */ 'S', 'T', 'C', 'S', 'R', 'r', 'r', 0,
  /* 4615 */ 'L', 'D', 'F', 'S', 'R', 'r', 'r', 0,
  /* 4623 */ 'S', 'T', 'F', 'S', 'R', 'r', 'r', 0,
  /* 4631 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 4640 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 4649 */ 'W', 'R', 'P', 'S', 'R', 'r', 'r', 0,
  /* 4657 */ 'C', 'A', 'S', 'r', 'r', 0,
  /* 4663 */ 'S', 'T', 'r', 'r', 0,
  /* 4668 */ 'R', 'E', 'T', 'T', 'r', 'r', 0,
  /* 4675 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 4682 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 4689 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 4700 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 4711 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 4718 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 4725 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 4732 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 4743 */ 'T', 'L', 'S', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 4753 */ 'A', 'N', 'D', 'X', 'r', 'r', 0,
  /* 4760 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 4767 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 4774 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 4781 */ 'X', 'N', 'O', 'R', 'X', 'r', 'r', 0,
  /* 4789 */ 'X', 'O', 'R', 'X', 'r', 'r', 0,
  /* 4796 */ 'C', 'A', 'S', 'X', 'r', 'r', 0,
  /* 4803 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 4809 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 4817 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 4825 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'r', 0,
  /* 4835 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'r', 0,
  /* 4845 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'r', 0,
  /* 4854 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'r', 0,
  /* 4863 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'r', 0,
  /* 4872 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'r', 0,
  /* 4881 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 't', 0,
  /* 4890 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 't', 0,
  /* 4899 */ 'B', 'P', 'G', 'Z', 'a', 'p', 't', 0,
  /* 4907 */ 'B', 'P', 'L', 'Z', 'a', 'p', 't', 0,
  /* 4915 */ 'B', 'P', 'N', 'Z', 'a', 'p', 't', 0,
  /* 4923 */ 'B', 'P', 'Z', 'a', 'p', 't', 0,
  /* 4930 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4940 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4950 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4959 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4968 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4977 */ 'B', 'P', 'Z', 'n', 'a', 'p', 't', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    1271U, 1530U, 1589U, 1387U, 1378U, 1464U, 1198U, 1213U, 
    1178U, 1227U, 2367U, 1153U, 1082U, 2926U, 1111U, 2729U, 
    894U, 1676U, 1452U, 2697U, 977U, 2686U, 1132U, 1746U, 
    1733U, 1952U, 2523U, 2541U, 1402U, 1431U, 792U, 459U, 
    1492U, 2818U, 2825U, 1510U, 1517U, 888U, 2034U, 2028U, 
    2871U, 1163U, 2491U, 2238U, 2744U, 1084U, 2255U, 2708U, 
    2056U, 2753U, 765U, 1145U, 921U, 2510U, 729U, 2390U, 
    2784U, 751U, 2645U, 2633U, 2719U, 1241U, 2777U, 2793U, 
    1396U, 1984U, 1977U, 1716U, 1709U, 2501U, 1095U, 1074U, 
    1646U, 1638U, 1662U, 1654U, 1257U, 1249U, 785U, 452U, 
    1485U, 2811U, 1503U, 2839U, 1191U, 2769U, 741U, 1309U, 
    1318U, 1691U, 1700U, 1685U, 1333U, 1937U, 2586U, 2565U, 
    2006U, 3065U, 4130U, 3203U, 4268U, 3294U, 4359U, 759U, 
    465U, 3646U, 4736U, 3240U, 4312U, 1612U, 1758U, 1942U, 
    1469U, 3073U, 4138U, 3126U, 4191U, 3434U, 4499U, 4512U, 
    3659U, 4753U, 3268U, 4333U, 372U, 143U, 393U, 400U, 
    908U, 425U, 3274U, 4339U, 1327U, 473U, 403U, 2606U, 
    2656U, 3772U, 4881U, 3821U, 4930U, 3790U, 4899U, 3841U, 
    4950U, 586U, 410U, 2615U, 2664U, 3781U, 4890U, 3831U, 
    4940U, 3798U, 4907U, 3850U, 4959U, 3806U, 4915U, 3859U, 
    4968U, 693U, 417U, 2624U, 2672U, 3814U, 4923U, 3868U, 
    4977U, 1118U, 1417U, 3386U, 4451U, 0U, 4051U, 4796U, 
    4657U, 907U, 424U, 252U, 95U, 386U, 3461U, 4541U, 
    219U, 1352U, 1572U, 1548U, 62U, 1344U, 1563U, 1540U, 
    380U, 1360U, 1581U, 1556U, 2954U, 3876U, 2974U, 3896U, 
    994U, 1845U, 2384U, 798U, 1779U, 2182U, 440U, 869U, 
    16U, 2074U, 157U, 2125U, 2210U, 914U, 432U, 274U, 
    964U, 291U, 117U, 308U, 134U, 226U, 69U, 235U, 
    78U, 1839U, 2330U, 1007U, 1858U, 2424U, 1800U, 1291U, 
    1813U, 2296U, 2900U, 880U, 804U, 2188U, 778U, 2175U, 
    930U, 1819U, 2302U, 970U, 2336U, 1265U, 2832U, 3365U, 
    4430U, 283U, 1013U, 481U, 592U, 699U, 1864U, 546U, 
    655U, 709U, 1019U, 1870U, 2436U, 1039U, 1890U, 2456U, 
    1029U, 1880U, 2446U, 1048U, 1899U, 2465U, 1057U, 1908U, 
    2474U, 1066U, 1917U, 2483U, 2430U, 558U, 665U, 719U, 
    361U, 338U, 317U, 1367U, 2800U, 841U, 349U, 326U, 
    1807U, 2276U, 819U, 2203U, 874U, 2216U, 835U, 1794U, 
    2270U, 811U, 2195U, 847U, 2282U, 1995U, 2348U, 25U, 
    2084U, 166U, 2135U, 861U, 1127U, 2223U, 1991U, 31U, 
    2091U, 172U, 2142U, 2343U, 244U, 87U, 2885U, 211U, 
    2160U, 54U, 2109U, 184U, 1103U, 203U, 2151U, 46U, 
    2100U, 936U, 1297U, 2308U, 2914U, 300U, 126U, 260U, 
    103U, 854U, 1000U, 1851U, 2417U, 196U, 39U, 10U, 
    2067U, 151U, 2118U, 267U, 110U, 942U, 1303U, 1825U, 
    2920U, 772U, 1773U, 2169U, 2000U, 2354U, 2023U, 2361U, 
    948U, 1831U, 2322U, 1670U, 2289U, 2864U, 3399U, 4464U, 
    3955U, 3519U, 4599U, 3217U, 4282U, 3948U, 3210U, 4275U, 
    3968U, 3318U, 4383U, 3257U, 4318U, 3976U, 3535U, 4615U, 
    3325U, 4390U, 3991U, 3338U, 4403U, 3915U, 2999U, 4064U, 
    4014U, 3358U, 4423U, 3938U, 3025U, 4090U, 3625U, 4711U, 
    3930U, 3012U, 4077U, 4029U, 3379U, 4444U, 3551U, 4631U, 
    3653U, 4747U, 3263U, 4328U, 3246U, 3236U, 2680U, 2938U, 
    2906U, 3083U, 4148U, 3099U, 4164U, 3716U, 4825U, 3736U, 
    4845U, 3726U, 4835U, 3745U, 4854U, 3754U, 4863U, 3763U, 
    4872U, 2846U, 2855U, 2314U, 3194U, 4259U, 954U, 3160U, 
    4225U, 3680U, 4774U, 1729U, 3145U, 4210U, 3135U, 4200U, 
    3441U, 4506U, 4520U, 3688U, 4783U, 3493U, 4573U, 2763U, 
    1605U, 4295U, 2044U, 2039U, 2050U, 1931U, 1524U, 3301U, 
    4366U, 2533U, 1480U, 3582U, 4668U, 3311U, 4376U, 3169U, 
    4234U, 3700U, 4809U, 3589U, 4675U, 491U, 602U, 527U, 
    638U, 568U, 675U, 509U, 620U, 2537U, 2946U, 2931U, 
    1629U, 1498U, 3666U, 4760U, 3393U, 4458U, 3034U, 4099U, 
    3108U, 4173U, 3412U, 4477U, 3632U, 4718U, 2993U, 4045U, 
    3673U, 4767U, 3406U, 4471U, 4058U, 1925U, 3923U, 3006U, 
    4071U, 3527U, 4607U, 3230U, 4302U, 3961U, 3467U, 4547U, 
    3223U, 4288U, 3983U, 3475U, 4555U, 3331U, 4396U, 3281U, 
    4346U, 4007U, 3543U, 4623U, 3352U, 4417U, 4022U, 3373U, 
    4438U, 3999U, 3345U, 4410U, 3560U, 4640U, 3694U, 4803U, 
    3577U, 4663U, 3056U, 4121U, 3048U, 4113U, 3287U, 4352U, 
    3639U, 4725U, 3019U, 4084U, 4037U, 3454U, 4534U, 180U, 
    192U, 3614U, 4700U, 3064U, 4129U, 3092U, 4157U, 4732U, 
    4308U, 1422U, 4743U, 4324U, 3447U, 4527U, 3603U, 4689U, 
    3055U, 4120U, 3187U, 4252U, 3178U, 4243U, 3708U, 4817U, 
    3596U, 4682U, 3041U, 4106U, 3117U, 4182U, 1275U, 3419U, 
    4484U, 1723U, 962U, 826U, 1785U, 2229U, 1837U, 2328U, 
    479U, 544U, 556U, 3081U, 4146U, 3511U, 4591U, 3504U, 
    4584U, 3569U, 4649U, 3483U, 4563U, 3426U, 4491U, 2894U, 
    1283U, 3143U, 4208U, 4781U, 3491U, 4571U, 3152U, 4217U, 
    3687U, 4789U, 3498U, 4578U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 628);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~SparcGenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 628);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  TLSSym = 3,
  bprtarget = 4,
  bprtarget16 = 5,
  brtarget = 6,
  calltarget = 7,
  f32imm = 8,
  f64imm = 9,
  getPCX = 10,
  i16imm = 11,
  i1imm = 12,
  i32imm = 13,
  i64imm = 14,
  i8imm = 15,
  simm13Op = 16,
  type0 = 17,
  type1 = 18,
  type2 = 19,
  type3 = 20,
  type4 = 21,
  type5 = 22,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

