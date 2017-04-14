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
  Feature_HasV62T = (1ULL << 4),
  Feature_HasV60T = (1ULL << 3),
  Feature_HasV55T = (1ULL << 1),
  Feature_HasV4T = (1ULL << 0),
  Feature_HasV5T = (1ULL << 2),
  Feature_UseHVXDbl = (1ULL << 6),
  Feature_UseHVX = (1ULL << 5),
  Feature_None = 0
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 36 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case '5':	 // 1 string to match.
        return 18;	 // "c5"
      case '6':	 // 1 string to match.
        return 19;	 // "c6"
      case '7':	 // 1 string to match.
        return 20;	 // "c7"
      case '8':	 // 1 string to match.
        return 21;	 // "c8"
      }
      break;
    case 'g':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 4;	 // "gp"
    case 'm':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 42;	 // "m0"
      case '1':	 // 1 string to match.
        return 43;	 // "m1"
      }
      break;
    case 'p':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 44;	 // "p0"
      case '1':	 // 1 string to match.
        return 45;	 // "p1"
      case '2':	 // 1 string to match.
        return 46;	 // "p2"
      case '3':	 // 1 string to match.
        return 47;	 // "p3"
      case 'c':	 // 1 string to match.
        return 5;	 // "pc"
      }
      break;
    case 'q':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 48;	 // "q0"
      case '1':	 // 1 string to match.
        return 49;	 // "q1"
      case '2':	 // 1 string to match.
        return 50;	 // "q2"
      case '3':	 // 1 string to match.
        return 51;	 // "q3"
      }
      break;
    case 'r':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 52;	 // "r0"
      case '1':	 // 1 string to match.
        return 53;	 // "r1"
      case '2':	 // 1 string to match.
        return 54;	 // "r2"
      case '3':	 // 1 string to match.
        return 55;	 // "r3"
      case '4':	 // 1 string to match.
        return 56;	 // "r4"
      case '5':	 // 1 string to match.
        return 57;	 // "r5"
      case '6':	 // 1 string to match.
        return 58;	 // "r6"
      case '7':	 // 1 string to match.
        return 59;	 // "r7"
      case '8':	 // 1 string to match.
        return 60;	 // "r8"
      case '9':	 // 1 string to match.
        return 61;	 // "r9"
      }
      break;
    case 'v':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 86;	 // "v0"
      case '1':	 // 1 string to match.
        return 87;	 // "v1"
      case '2':	 // 1 string to match.
        return 88;	 // "v2"
      case '3':	 // 1 string to match.
        return 89;	 // "v3"
      case '4':	 // 1 string to match.
        return 90;	 // "v4"
      case '5':	 // 1 string to match.
        return 91;	 // "v5"
      case '6':	 // 1 string to match.
        return 92;	 // "v6"
      case '7':	 // 1 string to match.
        return 93;	 // "v7"
      case '8':	 // 1 string to match.
        return 94;	 // "v8"
      case '9':	 // 1 string to match.
        return 95;	 // "v9"
      }
      break;
    }
    break;
  case 3:	 // 52 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 22;	 // "cs0"
      case '1':	 // 1 string to match.
        return 23;	 // "cs1"
      }
      break;
    case 'l':	 // 2 strings to match.
      if (Name[1] != 'c')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 40;	 // "lc0"
      case '1':	 // 1 string to match.
        return 41;	 // "lc1"
      }
      break;
    case 'r':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 62;	 // "r10"
        case '1':	 // 1 string to match.
          return 63;	 // "r11"
        case '2':	 // 1 string to match.
          return 64;	 // "r12"
        case '3':	 // 1 string to match.
          return 65;	 // "r13"
        case '4':	 // 1 string to match.
          return 66;	 // "r14"
        case '5':	 // 1 string to match.
          return 67;	 // "r15"
        case '6':	 // 1 string to match.
          return 68;	 // "r16"
        case '7':	 // 1 string to match.
          return 69;	 // "r17"
        case '8':	 // 1 string to match.
          return 70;	 // "r18"
        case '9':	 // 1 string to match.
          return 71;	 // "r19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 72;	 // "r20"
        case '1':	 // 1 string to match.
          return 73;	 // "r21"
        case '2':	 // 1 string to match.
          return 74;	 // "r22"
        case '3':	 // 1 string to match.
          return 75;	 // "r23"
        case '4':	 // 1 string to match.
          return 76;	 // "r24"
        case '5':	 // 1 string to match.
          return 77;	 // "r25"
        case '6':	 // 1 string to match.
          return 78;	 // "r26"
        case '7':	 // 1 string to match.
          return 79;	 // "r27"
        case '8':	 // 1 string to match.
          return 80;	 // "r28"
        case '9':	 // 1 string to match.
          return 81;	 // "r29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 82;	 // "r30"
        case '1':	 // 1 string to match.
          return 83;	 // "r31"
        }
        break;
      }
      break;
    case 's':	 // 2 strings to match.
      if (Name[1] != 'a')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 84;	 // "sa0"
      case '1':	 // 1 string to match.
        return 85;	 // "sa1"
      }
      break;
    case 'u':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return 9;	 // "ugp"
      case 's':	 // 1 string to match.
        if (Name[2] != 'r')
          break;
        return 13;	 // "usr"
      }
      break;
    case 'v':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 96;	 // "v10"
        case '1':	 // 1 string to match.
          return 97;	 // "v11"
        case '2':	 // 1 string to match.
          return 98;	 // "v12"
        case '3':	 // 1 string to match.
          return 99;	 // "v13"
        case '4':	 // 1 string to match.
          return 100;	 // "v14"
        case '5':	 // 1 string to match.
          return 101;	 // "v15"
        case '6':	 // 1 string to match.
          return 102;	 // "v16"
        case '7':	 // 1 string to match.
          return 103;	 // "v17"
        case '8':	 // 1 string to match.
          return 104;	 // "v18"
        case '9':	 // 1 string to match.
          return 105;	 // "v19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 106;	 // "v20"
        case '1':	 // 1 string to match.
          return 107;	 // "v21"
        case '2':	 // 1 string to match.
          return 108;	 // "v22"
        case '3':	 // 1 string to match.
          return 109;	 // "v23"
        case '4':	 // 1 string to match.
          return 110;	 // "v24"
        case '5':	 // 1 string to match.
          return 111;	 // "v25"
        case '6':	 // 1 string to match.
          return 112;	 // "v26"
        case '7':	 // 1 string to match.
          return 113;	 // "v27"
        case '8':	 // 1 string to match.
          return 114;	 // "v28"
        case '9':	 // 1 string to match.
          return 115;	 // "v29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 116;	 // "v30"
        case '1':	 // 1 string to match.
          return 117;	 // "v31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 16 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":0", 2) != 0)
          break;
        return 134;	 // "c1:0"
      case '3':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":2", 2) != 0)
          break;
        return 135;	 // "c3:2"
      case '5':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":4", 2) != 0)
          break;
        return 136;	 // "c5:4"
      case '7':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":6", 2) != 0)
          break;
        return 137;	 // "c7:6"
      case '9':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":8", 2) != 0)
          break;
        return 138;	 // "c9:8"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "3:0", 3) != 0)
        break;
      return 141;	 // "p3:0"
    case 'r':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":0", 2) != 0)
          break;
        return 24;	 // "r1:0"
      case '3':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":2", 2) != 0)
          break;
        return 25;	 // "r3:2"
      case '5':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":4", 2) != 0)
          break;
        return 26;	 // "r5:4"
      case '7':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":6", 2) != 0)
          break;
        return 27;	 // "r7:6"
      case '9':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":8", 2) != 0)
          break;
        return 28;	 // "r9:8"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":0", 2) != 0)
          break;
        return 118;	 // "v1:0"
      case '3':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":2", 2) != 0)
          break;
        return 119;	 // "v3:2"
      case '5':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":4", 2) != 0)
          break;
        return 120;	 // "v5:4"
      case '7':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":6", 2) != 0)
          break;
        return 121;	 // "v7:6"
      case '9':	 // 1 string to match.
        if (memcmp(Name.data()+2, ":8", 2) != 0)
          break;
        return 122;	 // "v9:8"
      }
      break;
    }
    break;
  case 6:	 // 28 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 5 strings to match.
        switch (Name[2]) {
        default: break;
        case '1':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":10", 3) != 0)
            break;
          return 139;	 // "c11:10"
        case '3':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":12", 3) != 0)
            break;
          return 1;	 // "c13:12"
        case '5':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":14", 3) != 0)
            break;
          return 10;	 // "c15:14"
        case '7':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":16", 3) != 0)
            break;
          return 140;	 // "c17:16"
        case '9':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":18", 3) != 0)
            break;
          return 6;	 // "c19:18"
        }
        break;
      case '3':	 // 1 string to match.
        if (memcmp(Name.data()+2, "1:30", 4) != 0)
          break;
        return 15;	 // "c31:30"
      }
      break;
    case 'r':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 5 strings to match.
        switch (Name[2]) {
        default: break;
        case '1':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":10", 3) != 0)
            break;
          return 29;	 // "r11:10"
        case '3':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":12", 3) != 0)
            break;
          return 30;	 // "r13:12"
        case '5':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":14", 3) != 0)
            break;
          return 31;	 // "r15:14"
        case '7':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":16", 3) != 0)
            break;
          return 32;	 // "r17:16"
        case '9':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":18", 3) != 0)
            break;
          return 33;	 // "r19:18"
        }
        break;
      case '2':	 // 5 strings to match.
        switch (Name[2]) {
        default: break;
        case '1':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":20", 3) != 0)
            break;
          return 34;	 // "r21:20"
        case '3':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":22", 3) != 0)
            break;
          return 35;	 // "r23:22"
        case '5':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":24", 3) != 0)
            break;
          return 36;	 // "r25:24"
        case '7':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":26", 3) != 0)
            break;
          return 37;	 // "r27:26"
        case '9':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":28", 3) != 0)
            break;
          return 38;	 // "r29:28"
        }
        break;
      case '3':	 // 1 string to match.
        if (memcmp(Name.data()+2, "1:30", 4) != 0)
          break;
        return 39;	 // "r31:30"
      }
      break;
    case 'v':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 5 strings to match.
        switch (Name[2]) {
        default: break;
        case '1':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":10", 3) != 0)
            break;
          return 123;	 // "v11:10"
        case '3':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":12", 3) != 0)
            break;
          return 124;	 // "v13:12"
        case '5':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":14", 3) != 0)
            break;
          return 125;	 // "v15:14"
        case '7':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":16", 3) != 0)
            break;
          return 126;	 // "v17:16"
        case '9':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":18", 3) != 0)
            break;
          return 127;	 // "v19:18"
        }
        break;
      case '2':	 // 5 strings to match.
        switch (Name[2]) {
        default: break;
        case '1':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":20", 3) != 0)
            break;
          return 128;	 // "v21:20"
        case '3':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":22", 3) != 0)
            break;
          return 129;	 // "v23:22"
        case '5':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":24", 3) != 0)
            break;
          return 130;	 // "v25:24"
        case '7':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":26", 3) != 0)
            break;
          return 131;	 // "v27:26"
        case '9':	 // 1 string to match.
          if (memcmp(Name.data()+3, ":28", 3) != 0)
            break;
          return 132;	 // "v29:28"
        }
        break;
      case '3':	 // 1 string to match.
        if (memcmp(Name.data()+2, "1:30", 4) != 0)
          break;
        return 133;	 // "v31:30"
      }
      break;
    }
    break;
  case 7:	 // 1 string to match.
    if (memcmp(Name.data()+0, "usr.ovf", 7) != 0)
      break;
    return 14;	 // "usr.ovf"
  case 8:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ramekey", 7) != 0)
        break;
      return 2;	 // "framekey"
    case 'u':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "timer", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (Name[7] != 'i')
          break;
        return 16;	 // "utimerhi"
      case 'l':	 // 1 string to match.
        if (Name[7] != 'o')
          break;
        return 17;	 // "utimerlo"
      }
      break;
    }
    break;
  case 9:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "upcycle", 7) != 0)
      break;
    switch (Name[7]) {
    default: break;
    case 'h':	 // 1 string to match.
      if (Name[8] != 'i')
        break;
      return 11;	 // "upcyclehi"
    case 'l':	 // 1 string to match.
      if (Name[8] != 'o')
        break;
      return 12;	 // "upcyclelo"
    }
    break;
  case 10:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ramelimit", 9) != 0)
        break;
      return 3;	 // "framelimit"
    case 'p':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ktcount", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (Name[9] != 'i')
          break;
        return 7;	 // "pktcounthi"
      case 'l':	 // 1 string to match.
        if (Name[9] != 'o')
          break;
        return 8;	 // "pktcountlo"
      }
      break;
    }
    break;
  }
  return 0;
}

static unsigned MatchRegisterAltName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 10 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 7 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 84;	 // "c0"
      case '1':	 // 1 string to match.
        return 40;	 // "c1"
      case '2':	 // 1 string to match.
        return 85;	 // "c2"
      case '3':	 // 1 string to match.
        return 41;	 // "c3"
      case '4':	 // 1 string to match.
        return 141;	 // "c4"
      case '5':	 // 1 string to match.
        return 18;	 // "c5"
      case '8':	 // 1 string to match.
        return 13;	 // "c8"
      }
      break;
    case 'f':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 82;	 // "fp"
    case 'l':	 // 1 string to match.
      if (Name[1] != 'r')
        break;
      return 83;	 // "lr"
    case 's':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 81;	 // "sp"
    }
    break;
  case 3:	 // 12 strings to match.
    if (Name[0] != 'c')
      break;
    switch (Name[1]) {
    default: break;
    case '1':	 // 10 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 9;	 // "c10"
      case '1':	 // 1 string to match.
        return 4;	 // "c11"
      case '2':	 // 1 string to match.
        return 22;	 // "c12"
      case '3':	 // 1 string to match.
        return 23;	 // "c13"
      case '4':	 // 1 string to match.
        return 12;	 // "c14"
      case '5':	 // 1 string to match.
        return 11;	 // "c15"
      case '6':	 // 1 string to match.
        return 3;	 // "c16"
      case '7':	 // 1 string to match.
        return 2;	 // "c17"
      case '8':	 // 1 string to match.
        return 8;	 // "c18"
      case '9':	 // 1 string to match.
        return 7;	 // "c19"
      }
      break;
    case '3':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 17;	 // "c30"
      case '1':	 // 1 string to match.
        return 16;	 // "c31"
      }
      break;
    }
    break;
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "m1:0", 4) != 0)
      break;
    return 137;	 // "m1:0"
  case 5:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "s1:0", 4) != 0)
        break;
      return 1;	 // "cs1:0"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "r:fp", 4) != 0)
        break;
      return 39;	 // "lr:fp"
    }
    break;
  case 6:	 // 1 string to match.
    if (memcmp(Name.data()+0, "utimer", 6) != 0)
      break;
    return 15;	 // "utimer"
  case 7:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "lc", 2) != 0)
      break;
    switch (Name[2]) {
    default: break;
    case '0':	 // 1 string to match.
      if (memcmp(Name.data()+3, ":sa0", 4) != 0)
        break;
      return 134;	 // "lc0:sa0"
    case '1':	 // 1 string to match.
      if (memcmp(Name.data()+3, ":sa1", 4) != 0)
        break;
      return 135;	 // "lc1:sa1"
    }
    break;
  case 8:	 // 1 string to match.
    if (memcmp(Name.data()+0, "pktcount", 8) != 0)
      break;
    return 6;	 // "pktcount"
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasV62T: return "";
  case Feature_HasV60T: return "";
  case Feature_HasV55T: return "";
  case Feature_HasV4T: return "";
  case Feature_HasV5T: return "";
  case Feature_UseHVXDbl: return "";
  case Feature_UseHVX: return "";
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
  CVT_95_Reg,
  CVT_95_addSignedImmOperands,
  CVT_95_addImmOperands,
  CVT_regW15,
  CVT_imm_95_0,
  CVT_imm_95__MINUS_1,
  CVT_imm_95_255,
  CVT_95_addn1ConstOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_0__Reg1_2__Reg1_2,
  Convert__Reg1_0__Reg1_2,
  Convert__Reg1_0__s8_0Imm1_3,
  Convert__Reg1_0__u64_0Imm1_3,
  Convert__Reg1_0__regW15__regW15,
  Convert__Reg1_0__s32_0Imm1_3,
  Convert__Reg1_0__Reg1_0__Reg1_0,
  Convert__Reg1_0__Reg1_4,
  Convert__Reg1_0__Tie0__Reg1_4__imm_95_0,
  Convert__Reg1_0__Reg1_4__imm_95_0,
  Convert__Reg1_0__Reg1_2__b30_2Imm1_5,
  Convert__Reg1_0__Tie0__u16_0Imm1_5,
  Convert__Reg1_0__u16_0Imm1_5,
  Convert__Reg1_0__imm_95_0__Reg1_4,
  Convert__Reg1_0__imm_95__MINUS_1__Reg1_4,
  Convert__Reg1_0__Reg1_4__imm_95_255,
  Convert__Reg1_0__Reg1_4__Reg1_5,
  Convert__Reg1_0__Imm1_5,
  Convert__Reg1_0__Tie0__Reg1_4__Reg1_5,
  Convert__Reg1_0__u29_3Imm1_5,
  Convert__Reg1_0__u6_0Imm1_3__b30_2Imm1_6,
  Convert__Reg1_0__Tie0__Reg1_5,
  Convert__Reg1_0__s23_2Imm1_5,
  Convert__Reg1_0__u32_0Imm1_5,
  Convert__Reg1_0__u31_1Imm1_5,
  Convert__Reg1_0__u30_2Imm1_5,
  Convert__Reg1_0__Reg1_1__Reg1_5,
  Convert__Reg1_0__Reg1_5__Reg1_6,
  Convert__Reg1_0__Reg1_4__Reg1_6,
  Convert__Reg1_0__Reg1_4__u6_0Imm1_6,
  Convert__Reg1_0__Reg1_4__u5_0Imm1_6,
  Convert__Reg1_0__Tie0__Reg1_5__Reg1_6,
  Convert__Reg1_0__s32_0Imm1_5__Reg1_6,
  Convert__Reg1_0__Reg1_4__s32_0Imm1_6,
  Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6,
  Convert__Reg1_0__Reg1_4__u4_0Imm1_6,
  Convert__Reg1_0__Reg1_1__Tie0__Reg1_5__Reg1_6,
  Convert__Reg1_0__Reg1_1__Reg1_5__Reg1_6,
  Convert__Reg1_0__u32_0Imm1_6,
  Convert__Reg1_0__s6_0Imm1_5__Reg1_6,
  Convert__Reg1_0__Reg1_4__m32_0Imm1_6,
  Convert__Reg1_0__Reg1_6,
  Convert__Reg1_0__Tie0__Reg1_6,
  Convert__Reg1_0__Reg1_5__u6_0Imm1_7,
  Convert__Reg1_0__Reg1_5__u5_0Imm1_7,
  Convert__Reg1_0__Reg1_6__Reg1_7,
  Convert__Reg1_0__Reg1_7__Reg1_6,
  Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7,
  Convert__Reg1_0__s32_0Imm1_5__s8_0Imm1_7,
  Convert__Reg1_0__s8_0Imm1_5__u32_0Imm1_7,
  Convert__Reg1_0__u10_0Imm1_5,
  Convert__Reg1_0__Tie0__Reg1_4__s32_0Imm1_7,
  Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_7,
  Convert__Reg1_0__Reg1_4__Tie0__u32_0Imm1_7,
  Convert__Reg1_0__Reg1_4__s30_2Imm1_7,
  Convert__Reg1_0__Reg1_4__Tie1__Reg1_7,
  Convert__Reg1_0__Reg1_4__u32_0Imm1_7,
  Convert__Reg1_0__u29_3Imm1_7,
  Convert__Reg1_0__Reg1_4__s29_3Imm1_7,
  Convert__Reg1_0__Tie0__Reg1_4__s31_1Imm1_7,
  Convert__Reg1_0__Reg1_4__Reg1_5__u3_0Imm1_7,
  Convert__Reg1_0__Reg1_4__Reg1_5__u2_0Imm1_7,
  Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7,
  Convert__Reg1_0__Tie0__Reg1_5__Reg1_7,
  Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7,
  Convert__Reg1_0__Tie0__Reg1_5__s32_0Imm1_7,
  Convert__Reg1_0__Tie0__Reg1_5__u32_0Imm1_7,
  Convert__Reg1_0__Reg1_5__u32_0Imm1_7,
  Convert__Reg1_0__Reg1_5__u8_0Imm1_7,
  Convert__Reg1_0__u32_0Imm1_7,
  Convert__Reg1_0__Reg1_4__s32_0Imm1_7,
  Convert__Reg1_0__Reg1_4__s31_1Imm1_7,
  Convert__Reg1_0__u31_1Imm1_7,
  Convert__Reg1_0__u30_2Imm1_7,
  Convert__Reg1_0__Reg1_4__s32_0Imm1_6__Reg1_7,
  Convert__Reg1_0__Reg1_4__Reg1_5__s32_0Imm1_7,
  Convert__Reg1_0__Reg1_4__s4_0Imm1_7,
  Convert__Reg1_0__Tie0__Reg1_6__Reg1_7,
  Convert__Reg1_0__Reg1_7__Reg1_8,
  Convert__Reg1_0__Reg1_6__s32_0Imm1_8,
  Convert__Reg1_0__Reg1_6__s8_0Imm1_8,
  Convert__Reg1_0__Reg1_6__u8_0Imm1_8,
  Convert__Reg1_0__Reg1_6__u32_0Imm1_8,
  Convert__Reg1_0__Reg1_6__u7_0Imm1_8,
  Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u2_0Imm1_8,
  Convert__Reg1_0__Reg1_6__Reg1_4__Reg1_5__Tie1,
  Convert__Reg1_0__Reg1_4__u6_0Imm1_6__u6_0Imm1_8,
  Convert__Reg1_0__Tie0__Reg1_4__u6_0Imm1_6__u6_0Imm1_8,
  Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_0Imm1_8,
  Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8,
  Convert__Reg1_0__Reg1_4__Tie1__s4_3Imm1_8,
  Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_1Imm1_8,
  Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8,
  Convert__Reg1_0__Reg1_4__u5_0Imm1_6__u5_0Imm1_8,
  Convert__Reg1_0__Tie0__Reg1_4__u5_0Imm1_6__u5_0Imm1_8,
  Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8,
  Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8,
  Convert__Reg1_0__Reg1_4__s32_0Imm1_6__s8_0Imm1_8,
  Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__u5_0Imm1_8,
  Convert__Reg1_0__Reg1_4__Tie1__s3_0Imm1_8,
  Convert__Reg1_0__Reg1_7__s32_0Imm1_9,
  Convert__Reg1_0__Reg1_7__u32_0Imm1_9,
  Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_8,
  Convert__Reg1_0__Reg1_4__Reg1_7,
  Convert__Reg1_0__Tie0__Reg1_7,
  Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__Reg1_7,
  Convert__Reg1_0__Reg1_6__s6_0Imm1_9,
  Convert__Reg1_0__Reg1_4__Tie0__Reg1_8,
  Convert__Reg1_0__Reg1_6__s4_0Imm1_9,
  Convert__Reg1_0__Reg1_6__Tie1__Reg1_9,
  Convert__Reg1_0__Reg1_6__Reg1_9,
  Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_9,
  Convert__Reg1_0__Reg1_8__Reg1_9,
  Convert__Reg1_0__Tie0__Reg1_5__Reg1_8,
  Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10,
  Convert__Reg1_0__u32_0Imm1_5__Reg1_8__Reg1_9,
  Convert__Reg1_0__Reg1_4__Reg1_7__s32_0Imm1_9,
  Convert__Reg1_0__Reg1_4__u6_2Imm1_8__Reg1_9,
  Convert__Reg1_0__Reg1_4__Reg1_7__u32_0Imm1_9,
  Convert__Reg1_0__Reg1_4__s32_0Imm1_8__Reg1_9,
  Convert__Reg1_0__Reg1_4__Tie0__s32_0Imm1_9,
  Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__s6_0Imm1_8,
  Convert__Reg1_0__Reg1_6__Tie1__s3_0Imm1_10,
  Convert__Reg1_0__Tie0__Reg1_7__Reg1_10,
  Convert__Reg1_0__Tie0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11,
  Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11,
  Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10,
  Convert__Reg1_0__u32_0Imm1_5__Reg1_8__u6_0Imm1_10,
  Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_11,
  Convert__Reg1_0__Reg1_4__Tie1__Reg1_11,
  Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12,
  Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_0Imm1_8__Reg1_12,
  Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8__Reg1_12,
  Convert__Reg1_0__Reg1_4__Tie1__s4_3Imm1_8__Reg1_12,
  Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_1Imm1_8__Reg1_12,
  Convert__Reg1_0__Reg1_6__Reg1_9__u3_0Imm1_13,
  Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__Reg1_13,
  Convert__Reg1_0__Reg1_6__Reg1_9__u1_0Imm1_13,
  Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8__Reg1_12,
  Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8__Reg1_12,
  Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u3_0Imm1_14,
  Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u1_0Imm1_14,
  Convert__Reg1_0__Reg1_8__Reg1_12,
  Convert__Reg1_0__Reg1_12__Reg1_6__Reg1_9__Tie1,
  Convert__imm_95_0,
  Convert__u11_3Imm1_3,
  Convert_NoOperands,
  Convert__a30_2Imm1_1,
  Convert__Reg1_1,
  Convert__Reg1_2,
  Convert__Reg1_2__imm_95_0,
  Convert__Reg1_2__u11_3Imm1_5,
  Convert__Reg1_3,
  Convert__Reg1_2__a30_2Imm1_5,
  Convert__Reg1_2__Reg1_5,
  Convert__Reg1_2__b30_2Imm1_5,
  Convert__Reg1_3__a30_2Imm1_6,
  Convert__Reg1_3__Reg1_6,
  Convert__Reg1_3__b30_2Imm1_6,
  Convert__Reg1_4__Reg1_2__Reg1_6,
  Convert__Reg1_4__Reg1_2__Reg1_6__imm_95_0,
  Convert__Reg1_5__Reg1_3__Reg1_7,
  Convert__Reg1_5__Reg1_3__Reg1_7__imm_95_0,
  Convert__Reg1_2__b30_2Imm1_7,
  Convert__Reg1_2__Reg1_7,
  Convert__Reg1_4__Reg1_2__s32_0Imm1_7,
  Convert__Reg1_3__b30_2Imm1_8,
  Convert__Reg1_3__Reg1_8,
  Convert__Reg1_5__Reg1_3__s32_0Imm1_8,
  Convert__Reg1_6__Reg1_2__Reg1_8,
  Convert__Reg1_6__Reg1_2__Reg1_8__imm_95_0,
  Convert__Reg1_7__Reg1_3__Reg1_9,
  Convert__Reg1_7__Reg1_3__Reg1_9__imm_95_0,
  Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9,
  Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0,
  Convert__Reg1_4__Reg1_2__Reg1_8,
  Convert__Reg1_2__b30_2Imm1_9,
  Convert__Reg1_2__Reg1_9,
  Convert__Reg1_6__Reg1_2__s32_0Imm1_9,
  Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10,
  Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0,
  Convert__Reg1_5__Reg1_3__Reg1_9,
  Convert__Reg1_3__b30_2Imm1_10,
  Convert__Reg1_3__Reg1_10,
  Convert__Reg1_7__Reg1_3__s32_0Imm1_10,
  Convert__Reg1_2__u32_0Imm1_7__Reg1_10,
  Convert__Reg1_2__Reg1_6__imm_95_0__s32_0Imm1_10,
  Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9,
  Convert__Reg1_4__Reg1_2__u32_0Imm1_9,
  Convert__Reg1_3__u32_0Imm1_8__Reg1_11,
  Convert__Reg1_3__Reg1_7__imm_95_0__s32_0Imm1_11,
  Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10,
  Convert__Reg1_5__Reg1_3__u32_0Imm1_10,
  Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_11,
  Convert__Reg1_4__Reg1_2__Reg1_8__s32_0Imm1_10,
  Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11,
  Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0,
  Convert__Reg1_6__Reg1_2__Reg1_10,
  Convert__Reg1_4__Reg1_2__Tie0__Reg1_9,
  Convert__Reg1_2__b13_2Imm1_11,
  Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_12,
  Convert__Reg1_5__Reg1_3__Reg1_9__s32_0Imm1_11,
  Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12,
  Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0,
  Convert__Reg1_7__Reg1_3__Reg1_11,
  Convert__Reg1_5__Reg1_3__Tie0__Reg1_10,
  Convert__Reg1_2__Reg1_6__u32_0Imm1_9__Reg1_12,
  Convert__Reg1_2__Reg1_6__u29_3Imm1_9__Reg1_12,
  Convert__Reg1_2__Reg1_6__u31_1Imm1_9__Reg1_12,
  Convert__Reg1_2__Reg1_6__u30_2Imm1_9__Reg1_12,
  Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_12,
  Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_12,
  Convert__Reg1_4__Reg1_2__Reg1_8__u29_3Imm1_11,
  Convert__Reg1_4__Reg1_2__Reg1_8__u32_0Imm1_11,
  Convert__Reg1_4__Reg1_2__Reg1_8__u31_1Imm1_11,
  Convert__Reg1_4__Reg1_2__Reg1_8__u30_2Imm1_11,
  Convert__Reg1_4__Reg1_2__Reg1_8__s4_0Imm1_11,
  Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__Reg1_11,
  Convert__Reg1_2__u32_0Imm1_9__Reg1_12,
  Convert__Reg1_2__Reg1_8__imm_95_0__s32_0Imm1_12,
  Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11,
  Convert__Reg1_6__Reg1_2__u32_0Imm1_11,
  Convert__Reg1_3__Reg1_7__u32_0Imm1_10__Reg1_13,
  Convert__Reg1_3__Reg1_7__u29_3Imm1_10__Reg1_13,
  Convert__Reg1_3__Reg1_7__u31_1Imm1_10__Reg1_13,
  Convert__Reg1_3__Reg1_7__u30_2Imm1_10__Reg1_13,
  Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_13,
  Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_13,
  Convert__Reg1_5__Reg1_3__Reg1_9__u29_3Imm1_12,
  Convert__Reg1_5__Reg1_3__Reg1_9__u32_0Imm1_12,
  Convert__Reg1_5__Reg1_3__Reg1_9__u31_1Imm1_12,
  Convert__Reg1_5__Reg1_3__Reg1_9__u30_2Imm1_12,
  Convert__Reg1_5__Reg1_3__Reg1_9__s4_0Imm1_12,
  Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__Reg1_12,
  Convert__Reg1_3__u32_0Imm1_10__Reg1_13,
  Convert__Reg1_3__Reg1_9__imm_95_0__s32_0Imm1_13,
  Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12,
  Convert__Reg1_7__Reg1_3__u32_0Imm1_12,
  Convert__Reg1_2__Reg1_6__u6_0Imm1_9__s32_0Imm1_13,
  Convert__Reg1_6__Reg1_2__Tie0__s4_0Imm1_10__Reg1_13,
  Convert__Reg1_6__Reg1_2__Tie0__s4_3Imm1_10__Reg1_13,
  Convert__Reg1_2__Reg1_6__u6_1Imm1_9__s32_0Imm1_13,
  Convert__Reg1_6__Reg1_2__Tie0__s4_1Imm1_10__Reg1_13,
  Convert__Reg1_2__Reg1_6__u6_2Imm1_9__s32_0Imm1_13,
  Convert__Reg1_6__Reg1_2__Tie0__s4_2Imm1_10__Reg1_13,
  Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_13,
  Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_3Imm1_12,
  Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_0Imm1_12,
  Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_1Imm1_12,
  Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_2Imm1_12,
  Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s3_0Imm1_12,
  Convert__Reg1_6__Reg1_2__Reg1_10__s32_0Imm1_12,
  Convert__Reg1_6__Reg1_2__Tie0__Reg1_11,
  Convert__Reg1_3__Reg1_7__u6_0Imm1_10__s32_0Imm1_14,
  Convert__Reg1_7__Reg1_3__Tie0__s4_0Imm1_11__Reg1_14,
  Convert__Reg1_7__Reg1_3__Tie0__s4_3Imm1_11__Reg1_14,
  Convert__Reg1_3__Reg1_7__u6_1Imm1_10__s32_0Imm1_14,
  Convert__Reg1_7__Reg1_3__Tie0__s4_1Imm1_11__Reg1_14,
  Convert__Reg1_3__Reg1_7__u6_2Imm1_10__s32_0Imm1_14,
  Convert__Reg1_7__Reg1_3__Tie0__s4_2Imm1_11__Reg1_14,
  Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_14,
  Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_3Imm1_13,
  Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_0Imm1_13,
  Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_1Imm1_13,
  Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_2Imm1_13,
  Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s3_0Imm1_13,
  Convert__Reg1_7__Reg1_3__Reg1_11__s32_0Imm1_13,
  Convert__Reg1_7__Reg1_3__Tie0__Reg1_12,
  Convert__Reg1_4__b30_2Imm1_14,
  Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_14,
  Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_14,
  Convert__Reg1_4__Reg1_2__Reg1_10__s4_0Imm1_13,
  Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__Reg1_13,
  Convert__Reg1_2__Reg1_8__u32_0Imm1_11__Reg1_14,
  Convert__Reg1_2__Reg1_8__u29_3Imm1_11__Reg1_14,
  Convert__Reg1_2__Reg1_8__u31_1Imm1_11__Reg1_14,
  Convert__Reg1_2__Reg1_8__u30_2Imm1_11__Reg1_14,
  Convert__Reg1_6__Reg1_2__Reg1_10__u29_3Imm1_13,
  Convert__Reg1_6__Reg1_2__Reg1_10__u32_0Imm1_13,
  Convert__Reg1_6__Reg1_2__Reg1_10__u31_1Imm1_13,
  Convert__Reg1_6__Reg1_2__Reg1_10__u30_2Imm1_13,
  Convert__Reg1_5__b30_2Imm1_15,
  Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_15,
  Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_15,
  Convert__Reg1_5__Reg1_3__Reg1_11__s4_0Imm1_14,
  Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__Reg1_14,
  Convert__Reg1_3__Reg1_9__u32_0Imm1_12__Reg1_15,
  Convert__Reg1_3__Reg1_9__u29_3Imm1_12__Reg1_15,
  Convert__Reg1_3__Reg1_9__u31_1Imm1_12__Reg1_15,
  Convert__Reg1_3__Reg1_9__u30_2Imm1_12__Reg1_15,
  Convert__Reg1_7__Reg1_3__Reg1_11__u29_3Imm1_14,
  Convert__Reg1_7__Reg1_3__Reg1_11__u32_0Imm1_14,
  Convert__Reg1_7__Reg1_3__Reg1_11__u31_1Imm1_14,
  Convert__Reg1_7__Reg1_3__Reg1_11__u30_2Imm1_14,
  Convert__Reg1_6__Reg1_9__b30_2Imm1_15,
  Convert__Reg1_6__Reg1_7__b30_2Imm1_15,
  Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15,
  Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_15,
  Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14,
  Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__s3_0Imm1_14,
  Convert__Reg1_2__Reg1_8__u6_0Imm1_11__s32_0Imm1_15,
  Convert__Reg1_8__Reg1_2__Tie0__s4_0Imm1_12__Reg1_15,
  Convert__Reg1_8__Reg1_2__Tie0__s4_3Imm1_12__Reg1_15,
  Convert__Reg1_2__Reg1_8__u6_1Imm1_11__s32_0Imm1_15,
  Convert__Reg1_8__Reg1_2__Tie0__s4_1Imm1_12__Reg1_15,
  Convert__Reg1_2__Reg1_8__u6_2Imm1_11__s32_0Imm1_15,
  Convert__Reg1_8__Reg1_2__Tie0__s4_2Imm1_12__Reg1_15,
  Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_3Imm1_14,
  Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_0Imm1_14,
  Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_1Imm1_14,
  Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_2Imm1_14,
  Convert__Reg1_7__Reg1_10__b30_2Imm1_16,
  Convert__Reg1_7__Reg1_8__b30_2Imm1_16,
  Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16,
  Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_16,
  Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15,
  Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__s3_0Imm1_15,
  Convert__Reg1_3__Reg1_9__u6_0Imm1_12__s32_0Imm1_16,
  Convert__Reg1_9__Reg1_3__Tie0__s4_0Imm1_13__Reg1_16,
  Convert__Reg1_9__Reg1_3__Tie0__s4_3Imm1_13__Reg1_16,
  Convert__Reg1_3__Reg1_9__u6_1Imm1_12__s32_0Imm1_16,
  Convert__Reg1_9__Reg1_3__Tie0__s4_1Imm1_13__Reg1_16,
  Convert__Reg1_3__Reg1_9__u6_2Imm1_12__s32_0Imm1_16,
  Convert__Reg1_9__Reg1_3__Tie0__s4_2Imm1_13__Reg1_16,
  Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_3Imm1_15,
  Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_0Imm1_15,
  Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_1Imm1_15,
  Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_2Imm1_15,
  Convert__Reg1_6__n1Const1_10__b30_2Imm1_16,
  Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16,
  Convert__Reg1_7__n1Const1_11__b30_2Imm1_17,
  Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17,
  Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17,
  Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16,
  Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18,
  Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17,
  Convert__u26_6Imm1_3,
  Convert__b30_2Imm1_1,
  Convert__Reg1_2__Reg1_3,
  Convert__b30_2Imm1_2__Reg1_3,
  Convert__b30_2Imm1_2__u10_0Imm1_4,
  Convert__Reg1_2__imm_95_0__Reg1_5,
  Convert__u32_0Imm1_3__Reg1_6,
  Convert__Reg1_2__imm_95_0__Reg1_6,
  Convert__Reg1_2__imm_95_0__s32_0Imm1_6,
  Convert__Reg1_2__imm_95_0__u5_0Imm1_7,
  Convert__u32_0Imm1_5__Reg1_8,
  Convert__Reg1_2__s32_0Imm1_5__Reg1_8,
  Convert__Reg1_2__Tie0__Reg1_5__Reg1_8,
  Convert__Reg1_2__u32_0Imm1_5__Reg1_8,
  Convert__Reg1_2__imm_95_0__u5_0Imm1_8,
  Convert__Reg1_2__u32_0Imm1_5__Reg1_9,
  Convert__Reg1_2__u6_0Imm1_5__s32_0Imm1_9,
  Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_9,
  Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_10,
  Convert__Reg1_2__Tie0__Reg1_5__Reg1_10,
  Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11,
  Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_11,
  Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12,
  Convert__Reg1_2__Tie0__Reg1_9__Reg1_13,
  Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_10__Reg1_14,
  Convert__u29_3Imm1_3__Reg1_6,
  Convert__u29_3Imm1_5__Reg1_8,
  Convert__Reg1_2__s29_3Imm1_5__Reg1_8,
  Convert__Reg1_2__Tie0__s4_3Imm1_6__Reg1_9,
  Convert__Reg1_2__Tie0__s4_3Imm1_6__Reg1_10__Reg1_14,
  Convert__Reg1_3__Reg1_2__Reg1_6,
  Convert__u31_1Imm1_3__Reg1_6,
  Convert__u31_1Imm1_5__Reg1_8,
  Convert__Reg1_2__s31_1Imm1_5__Reg1_8,
  Convert__Reg1_2__u31_1Imm1_5__Reg1_9,
  Convert__Reg1_2__u6_1Imm1_5__s32_0Imm1_9,
  Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_9,
  Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_10,
  Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_11,
  Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_10__Reg1_14,
  Convert__u30_2Imm1_3__Reg1_6,
  Convert__u30_2Imm1_5__Reg1_8,
  Convert__Reg1_2__s30_2Imm1_5__Reg1_8,
  Convert__Reg1_2__u30_2Imm1_5__Reg1_9,
  Convert__Reg1_2__u6_2Imm1_5__s32_0Imm1_9,
  Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_9,
  Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_10,
  Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_11,
  Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_10__Reg1_14,
  Convert__Reg1_4__b30_2Imm1_18,
  Convert__Reg1_6__Reg1_7__b30_2Imm1_19,
  Convert__Reg1_4__b30_2Imm1_19,
  Convert__Reg1_6__n1Const1_8__b30_2Imm1_20,
  Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20,
  Convert__Reg1_6__Reg1_7__b30_2Imm1_20,
  Convert__Reg1_6__n1Const1_8__b30_2Imm1_21,
  Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21,
  Convert__b30_2Imm1_4__Reg1_5,
  Convert__b30_2Imm1_4__u10_0Imm1_6,
  Convert__u8_0Imm1_3,
  Convert__Reg1_2__Reg1_3__Tie0__Tie1__Reg1_4,
  Convert__Reg1_2__imm_95_0__Reg1_7,
  Convert__Reg1_2__s4_0Imm1_5__Reg1_8,
  Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_9,
  Convert__Reg1_2__s4_0Imm1_5__Reg1_10,
  Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_11,
  Convert__u1_0Imm1_3,
  Convert__Reg1_2__u1_0Imm1_4,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__Reg1_0__Reg1_2__Reg1_2
  { CVT_95_Reg, 0, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2
  { CVT_95_Reg, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__s8_0Imm1_3
  { CVT_95_Reg, 0, CVT_95_addSignedImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__u64_0Imm1_3
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__regW15__regW15
  { CVT_95_Reg, 0, CVT_regW15, 0, CVT_regW15, 0, CVT_Done },
  // Convert__Reg1_0__s32_0Imm1_3
  { CVT_95_Reg, 0, CVT_95_addSignedImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_0__Reg1_0
  { CVT_95_Reg, 0, CVT_95_Reg, 0, CVT_95_Reg, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_4
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__imm_95_0
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_4__imm_95_0
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__b30_2Imm1_5
  { CVT_95_Reg, 0, CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Tie0__u16_0Imm1_5
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__u16_0Imm1_5
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__imm_95_0__Reg1_4
  { CVT_95_Reg, 0, CVT_imm_95_0, 0, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__imm_95__MINUS_1__Reg1_4
  { CVT_95_Reg, 0, CVT_imm_95__MINUS_1, 0, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_4__imm_95_255
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_imm_95_255, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_5
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__Imm1_5
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__Reg1_5
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__u29_3Imm1_5
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__u6_0Imm1_3__b30_2Imm1_6
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 3, CVT_95_addSignedImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__s23_2Imm1_5
  { CVT_95_Reg, 0, CVT_95_addSignedImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__u32_0Imm1_5
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__u31_1Imm1_5
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__u30_2Imm1_5
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_5
  { CVT_95_Reg, 0, CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_5__Reg1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u6_0Imm1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u5_0Imm1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__Reg1_6
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__s32_0Imm1_5__Reg1_6
  { CVT_95_Reg, 0, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s32_0Imm1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u4_0Imm1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Tie0__Reg1_5__Reg1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_5__Reg1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__u32_0Imm1_6
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__s6_0Imm1_5__Reg1_6
  { CVT_95_Reg, 0, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_4__m32_0Imm1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_6
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_5__u6_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_5__u5_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Reg1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_7__Reg1_6
  { CVT_95_Reg, 0, CVT_95_Reg, 7, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__s32_0Imm1_5__s8_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_addSignedImmOperands, 5, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__s8_0Imm1_5__u32_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_addSignedImmOperands, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__u10_0Imm1_5
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__s32_0Imm1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Tied, 1, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__u32_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s30_2Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__Reg1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u32_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__u29_3Imm1_7
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s29_3Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__s31_1Imm1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_5__u3_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_5__u2_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__Reg1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__s32_0Imm1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__u32_0Imm1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_5__u32_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_5__u8_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 5, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__u32_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s32_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s31_1Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__u31_1Imm1_7
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__u30_2Imm1_7
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s32_0Imm1_6__Reg1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_5__s32_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s4_0Imm1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_6__Reg1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 6, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_7__Reg1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 7, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__s32_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__s8_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__u8_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__u32_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__u7_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u2_0Imm1_8
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Reg1_4__Reg1_5__Tie1
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_Tied, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u6_0Imm1_6__u6_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__u6_0Imm1_6__u6_0Imm1_8
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_3Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_1Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u5_0Imm1_6__u5_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__u5_0Imm1_6__u5_0Imm1_8
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s32_0Imm1_6__s8_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 6, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__u5_0Imm1_8
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s3_0Imm1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_7__s32_0Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 7, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_7__u32_0Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 7, CVT_95_addImmOperands, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 7, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_7
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__Reg1_7
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_6__s6_0Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__Reg1_8
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__s4_0Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Tie1__Reg1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_Tied, 1, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Reg1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 7, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_8__Reg1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 8, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_5__Reg1_8
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 6, CVT_95_addImmOperands, 10, CVT_Done },
  // Convert__Reg1_0__u32_0Imm1_5__Reg1_8__Reg1_9
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_95_Reg, 8, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_7__s32_0Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 7, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u6_2Imm1_8__Reg1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 8, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_7__u32_0Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_Reg, 7, CVT_95_addImmOperands, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__s32_0Imm1_8__Reg1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 8, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__s32_0Imm1_9
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__s6_0Imm1_8
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 6, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Tie1__s3_0Imm1_10
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_Tied, 1, CVT_95_addSignedImmOperands, 10, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_7__Reg1_10
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 7, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 8, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_95_addImmOperands, 8, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_Tied, 0, CVT_95_addImmOperands, 10, CVT_Done },
  // Convert__Reg1_0__u32_0Imm1_5__Reg1_8__u6_0Imm1_10
  { CVT_95_Reg, 0, CVT_95_addImmOperands, 5, CVT_95_Reg, 8, CVT_95_addImmOperands, 10, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_11
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Tied, 1, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__Reg1_11
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_Reg, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_0Imm1_8__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_3Imm1_8__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_1Imm1_8__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Reg1_9__u3_0Imm1_13
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_Reg, 9, CVT_95_addImmOperands, 13, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__Reg1_13
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 7, CVT_95_Reg, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_0__Reg1_6__Reg1_9__u1_0Imm1_13
  { CVT_95_Reg, 0, CVT_95_Reg, 6, CVT_95_Reg, 9, CVT_95_addImmOperands, 13, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 4, CVT_Tied, 1, CVT_95_addSignedImmOperands, 8, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u3_0Imm1_14
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 7, CVT_95_Reg, 10, CVT_95_addImmOperands, 14, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u1_0Imm1_14
  { CVT_95_Reg, 0, CVT_Tied, 0, CVT_95_Reg, 7, CVT_95_Reg, 10, CVT_95_addImmOperands, 14, CVT_Done },
  // Convert__Reg1_0__Reg1_8__Reg1_12
  { CVT_95_Reg, 0, CVT_95_Reg, 8, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_0__Reg1_12__Reg1_6__Reg1_9__Tie1
  { CVT_95_Reg, 0, CVT_95_Reg, 12, CVT_95_Reg, 6, CVT_95_Reg, 9, CVT_Tied, 1, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__u11_3Imm1_3
  { CVT_95_addImmOperands, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__a30_2Imm1_1
  { CVT_95_addSignedImmOperands, 1, CVT_Done },
  // Convert__Reg1_1
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_2
  { CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_2__imm_95_0
  { CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__u11_3Imm1_5
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_3
  { CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_2__a30_2Imm1_5
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_Done },
  // Convert__Reg1_2__Reg1_5
  { CVT_95_Reg, 2, CVT_95_Reg, 5, CVT_Done },
  // Convert__Reg1_2__b30_2Imm1_5
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_Done },
  // Convert__Reg1_3__a30_2Imm1_6
  { CVT_95_Reg, 3, CVT_95_addSignedImmOperands, 6, CVT_Done },
  // Convert__Reg1_3__Reg1_6
  { CVT_95_Reg, 3, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_3__b30_2Imm1_6
  { CVT_95_Reg, 3, CVT_95_addSignedImmOperands, 6, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_6
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_6__imm_95_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_7
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_7__imm_95_0
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__b30_2Imm1_7
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_2__Reg1_7
  { CVT_95_Reg, 2, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_4__Reg1_2__s32_0Imm1_7
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 7, CVT_Done },
  // Convert__Reg1_3__b30_2Imm1_8
  { CVT_95_Reg, 3, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_3__Reg1_8
  { CVT_95_Reg, 3, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_5__Reg1_3__s32_0Imm1_8
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_addSignedImmOperands, 8, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_8
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_8__imm_95_0
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_9
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_9__imm_95_0
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_imm_95_0, 0, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__b30_2Imm1_9
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_2__Reg1_9
  { CVT_95_Reg, 2, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_6__Reg1_2__s32_0Imm1_9
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_imm_95_0, 0, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_3__b30_2Imm1_10
  { CVT_95_Reg, 3, CVT_95_addSignedImmOperands, 10, CVT_Done },
  // Convert__Reg1_3__Reg1_10
  { CVT_95_Reg, 3, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_7__Reg1_3__s32_0Imm1_10
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_addSignedImmOperands, 10, CVT_Done },
  // Convert__Reg1_2__u32_0Imm1_7__Reg1_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 7, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_2__Reg1_6__imm_95_0__s32_0Imm1_10
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_imm_95_0, 0, CVT_95_addSignedImmOperands, 10, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_4__Reg1_2__u32_0Imm1_9
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_addImmOperands, 9, CVT_Done },
  // Convert__Reg1_3__u32_0Imm1_8__Reg1_11
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 8, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_3__Reg1_7__imm_95_0__s32_0Imm1_11
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_imm_95_0, 0, CVT_95_addSignedImmOperands, 11, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_5__Reg1_3__u32_0Imm1_10
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_addImmOperands, 10, CVT_Done },
  // Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_11
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_imm_95_0, 0, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__s32_0Imm1_10
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addSignedImmOperands, 10, CVT_Done },
  // Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_imm_95_0, 0, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Tie0__Reg1_9
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__b13_2Imm1_11
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 11, CVT_Done },
  // Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_12
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_imm_95_0, 0, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__s32_0Imm1_11
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addSignedImmOperands, 11, CVT_Done },
  // Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_imm_95_0, 0, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Tie0__Reg1_10
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_2__Reg1_6__u32_0Imm1_9__Reg1_12
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_2__Reg1_6__u29_3Imm1_9__Reg1_12
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_2__Reg1_6__u31_1Imm1_9__Reg1_12
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_2__Reg1_6__u30_2Imm1_9__Reg1_12
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_12
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addSignedImmOperands, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_12
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_Reg, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__u29_3Imm1_11
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__u32_0Imm1_11
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__u31_1Imm1_11
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__u30_2Imm1_11
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__s4_0Imm1_11
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addSignedImmOperands, 11, CVT_Done },
  // Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__Reg1_11
  { CVT_95_Reg, 4, CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_2__u32_0Imm1_9__Reg1_12
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_2__Reg1_8__imm_95_0__s32_0Imm1_12
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_imm_95_0, 0, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_6__Reg1_2__u32_0Imm1_11
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_3__Reg1_7__u32_0Imm1_10__Reg1_13
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_3__Reg1_7__u29_3Imm1_10__Reg1_13
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_3__Reg1_7__u31_1Imm1_10__Reg1_13
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_3__Reg1_7__u30_2Imm1_10__Reg1_13
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_13
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_13
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_Reg, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__u29_3Imm1_12
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__u32_0Imm1_12
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__u31_1Imm1_12
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__u30_2Imm1_12
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__s4_0Imm1_12
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__Reg1_12
  { CVT_95_Reg, 5, CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_3__u32_0Imm1_10__Reg1_13
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_3__Reg1_9__imm_95_0__s32_0Imm1_13
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_imm_95_0, 0, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_7__Reg1_3__u32_0Imm1_12
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_addImmOperands, 12, CVT_Done },
  // Convert__Reg1_2__Reg1_6__u6_0Imm1_9__s32_0Imm1_13
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 9, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__s4_0Imm1_10__Reg1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__s4_3Imm1_10__Reg1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_2__Reg1_6__u6_1Imm1_9__s32_0Imm1_13
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 9, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__s4_1Imm1_10__Reg1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_2__Reg1_6__u6_2Imm1_9__s32_0Imm1_13
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addImmOperands, 9, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__s4_2Imm1_10__Reg1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_3Imm1_12
  { CVT_95_Reg, 4, CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_0Imm1_12
  { CVT_95_Reg, 4, CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_1Imm1_12
  { CVT_95_Reg, 4, CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_2Imm1_12
  { CVT_95_Reg, 4, CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s3_0Imm1_12
  { CVT_95_Reg, 4, CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__s32_0Imm1_12
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_addSignedImmOperands, 12, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__Reg1_11
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_3__Reg1_7__u6_0Imm1_10__s32_0Imm1_14
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addImmOperands, 10, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__s4_0Imm1_11__Reg1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__s4_3Imm1_11__Reg1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_3__Reg1_7__u6_1Imm1_10__s32_0Imm1_14
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addImmOperands, 10, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__s4_1Imm1_11__Reg1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_3__Reg1_7__u6_2Imm1_10__s32_0Imm1_14
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addImmOperands, 10, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__s4_2Imm1_11__Reg1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_3Imm1_13
  { CVT_95_Reg, 5, CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_0Imm1_13
  { CVT_95_Reg, 5, CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_1Imm1_13
  { CVT_95_Reg, 5, CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_2Imm1_13
  { CVT_95_Reg, 5, CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s3_0Imm1_13
  { CVT_95_Reg, 5, CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__s32_0Imm1_13
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__Reg1_12
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_4__b30_2Imm1_14
  { CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_14
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_addSignedImmOperands, 9, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_14
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_Reg, 9, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_10__s4_0Imm1_13
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_addSignedImmOperands, 13, CVT_Done },
  // Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__Reg1_13
  { CVT_95_Reg, 4, CVT_95_Reg, 10, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_2__Reg1_8__u32_0Imm1_11__Reg1_14
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_2__Reg1_8__u29_3Imm1_11__Reg1_14
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_2__Reg1_8__u31_1Imm1_11__Reg1_14
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_2__Reg1_8__u30_2Imm1_11__Reg1_14
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__u29_3Imm1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_addImmOperands, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__u32_0Imm1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_addImmOperands, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__u31_1Imm1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_addImmOperands, 13, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__u30_2Imm1_13
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_addImmOperands, 13, CVT_Done },
  // Convert__Reg1_5__b30_2Imm1_15
  { CVT_95_Reg, 5, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_15
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_15
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_Reg, 10, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_11__s4_0Imm1_14
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__Reg1_14
  { CVT_95_Reg, 5, CVT_95_Reg, 11, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_3__Reg1_9__u32_0Imm1_12__Reg1_15
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_3__Reg1_9__u29_3Imm1_12__Reg1_15
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_3__Reg1_9__u31_1Imm1_12__Reg1_15
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_3__Reg1_9__u30_2Imm1_12__Reg1_15
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__u29_3Imm1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_addImmOperands, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__u32_0Imm1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_addImmOperands, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__u31_1Imm1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_addImmOperands, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__u30_2Imm1_14
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_addImmOperands, 14, CVT_Done },
  // Convert__Reg1_6__Reg1_9__b30_2Imm1_15
  { CVT_95_Reg, 6, CVT_95_Reg, 9, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_6__Reg1_7__b30_2Imm1_15
  { CVT_95_Reg, 6, CVT_95_Reg, 7, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15
  { CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_95_Reg, 8, CVT_95_addImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_15
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 10, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_Reg, 10, CVT_95_addImmOperands, 14, CVT_Done },
  // Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__s3_0Imm1_14
  { CVT_95_Reg, 4, CVT_95_Reg, 10, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_2__Reg1_8__u6_0Imm1_11__s32_0Imm1_15
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_8__Reg1_2__Tie0__s4_0Imm1_12__Reg1_15
  { CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_8__Reg1_2__Tie0__s4_3Imm1_12__Reg1_15
  { CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_2__Reg1_8__u6_1Imm1_11__s32_0Imm1_15
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_8__Reg1_2__Tie0__s4_1Imm1_12__Reg1_15
  { CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_2__Reg1_8__u6_2Imm1_11__s32_0Imm1_15
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_addImmOperands, 11, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_8__Reg1_2__Tie0__s4_2Imm1_12__Reg1_15
  { CVT_95_Reg, 8, CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 12, CVT_95_Reg, 15, CVT_Done },
  // Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_3Imm1_14
  { CVT_95_Reg, 6, CVT_95_Reg, 10, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_0Imm1_14
  { CVT_95_Reg, 6, CVT_95_Reg, 10, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_1Imm1_14
  { CVT_95_Reg, 6, CVT_95_Reg, 10, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_2Imm1_14
  { CVT_95_Reg, 6, CVT_95_Reg, 10, CVT_95_Reg, 2, CVT_Tied, 1, CVT_95_addSignedImmOperands, 14, CVT_Done },
  // Convert__Reg1_7__Reg1_10__b30_2Imm1_16
  { CVT_95_Reg, 7, CVT_95_Reg, 10, CVT_95_addSignedImmOperands, 16, CVT_Done },
  // Convert__Reg1_7__Reg1_8__b30_2Imm1_16
  { CVT_95_Reg, 7, CVT_95_Reg, 8, CVT_95_addSignedImmOperands, 16, CVT_Done },
  // Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16
  { CVT_95_Reg, 3, CVT_95_Reg, 7, CVT_95_Reg, 9, CVT_95_addImmOperands, 13, CVT_95_Reg, 16, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_16
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 11, CVT_95_Reg, 16, CVT_Done },
  // Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15
  { CVT_95_Reg, 5, CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_Reg, 11, CVT_95_addImmOperands, 15, CVT_Done },
  // Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__s3_0Imm1_15
  { CVT_95_Reg, 5, CVT_95_Reg, 11, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_3__Reg1_9__u6_0Imm1_12__s32_0Imm1_16
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_95_addSignedImmOperands, 16, CVT_Done },
  // Convert__Reg1_9__Reg1_3__Tie0__s4_0Imm1_13__Reg1_16
  { CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 13, CVT_95_Reg, 16, CVT_Done },
  // Convert__Reg1_9__Reg1_3__Tie0__s4_3Imm1_13__Reg1_16
  { CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 13, CVT_95_Reg, 16, CVT_Done },
  // Convert__Reg1_3__Reg1_9__u6_1Imm1_12__s32_0Imm1_16
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_95_addSignedImmOperands, 16, CVT_Done },
  // Convert__Reg1_9__Reg1_3__Tie0__s4_1Imm1_13__Reg1_16
  { CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 13, CVT_95_Reg, 16, CVT_Done },
  // Convert__Reg1_3__Reg1_9__u6_2Imm1_12__s32_0Imm1_16
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_addImmOperands, 12, CVT_95_addSignedImmOperands, 16, CVT_Done },
  // Convert__Reg1_9__Reg1_3__Tie0__s4_2Imm1_13__Reg1_16
  { CVT_95_Reg, 9, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addSignedImmOperands, 13, CVT_95_Reg, 16, CVT_Done },
  // Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_3Imm1_15
  { CVT_95_Reg, 7, CVT_95_Reg, 11, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_0Imm1_15
  { CVT_95_Reg, 7, CVT_95_Reg, 11, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_1Imm1_15
  { CVT_95_Reg, 7, CVT_95_Reg, 11, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_2Imm1_15
  { CVT_95_Reg, 7, CVT_95_Reg, 11, CVT_95_Reg, 3, CVT_Tied, 1, CVT_95_addSignedImmOperands, 15, CVT_Done },
  // Convert__Reg1_6__n1Const1_10__b30_2Imm1_16
  { CVT_95_Reg, 6, CVT_95_addn1ConstOperands, 10, CVT_95_addSignedImmOperands, 16, CVT_Done },
  // Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16
  { CVT_95_Reg, 6, CVT_95_addImmOperands, 10, CVT_95_addSignedImmOperands, 16, CVT_Done },
  // Convert__Reg1_7__n1Const1_11__b30_2Imm1_17
  { CVT_95_Reg, 7, CVT_95_addn1ConstOperands, 11, CVT_95_addSignedImmOperands, 17, CVT_Done },
  // Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17
  { CVT_95_Reg, 7, CVT_95_addImmOperands, 11, CVT_95_addSignedImmOperands, 17, CVT_Done },
  // Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17
  { CVT_95_Reg, 2, CVT_95_Reg, 8, CVT_95_Reg, 10, CVT_95_addImmOperands, 14, CVT_95_Reg, 17, CVT_Done },
  // Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16
  { CVT_95_Reg, 6, CVT_95_Reg, 2, CVT_95_Reg, 10, CVT_95_Reg, 12, CVT_95_addImmOperands, 16, CVT_Done },
  // Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18
  { CVT_95_Reg, 3, CVT_95_Reg, 9, CVT_95_Reg, 11, CVT_95_addImmOperands, 15, CVT_95_Reg, 18, CVT_Done },
  // Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17
  { CVT_95_Reg, 7, CVT_95_Reg, 3, CVT_95_Reg, 11, CVT_95_Reg, 13, CVT_95_addImmOperands, 17, CVT_Done },
  // Convert__u26_6Imm1_3
  { CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__b30_2Imm1_1
  { CVT_95_addSignedImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__b30_2Imm1_2__Reg1_3
  { CVT_95_addSignedImmOperands, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__b30_2Imm1_2__u10_0Imm1_4
  { CVT_95_addSignedImmOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_2__imm_95_0__Reg1_5
  { CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_95_Reg, 5, CVT_Done },
  // Convert__u32_0Imm1_3__Reg1_6
  { CVT_95_addImmOperands, 3, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_2__imm_95_0__Reg1_6
  { CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_95_Reg, 6, CVT_Done },
  // Convert__Reg1_2__imm_95_0__s32_0Imm1_6
  { CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_95_addSignedImmOperands, 6, CVT_Done },
  // Convert__Reg1_2__imm_95_0__u5_0Imm1_7
  { CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 7, CVT_Done },
  // Convert__u32_0Imm1_5__Reg1_8
  { CVT_95_addImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__s32_0Imm1_5__Reg1_8
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_5__Reg1_8
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__u32_0Imm1_5__Reg1_8
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__imm_95_0__u5_0Imm1_8
  { CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Reg1_2__u32_0Imm1_5__Reg1_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__u6_0Imm1_5__s32_0Imm1_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_9
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 10, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_5__Reg1_10
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_Reg, 5, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_addImmOperands, 8, CVT_95_Reg, 11, CVT_Done },
  // Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 9, CVT_95_Reg, 12, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_9__Reg1_13
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_Reg, 9, CVT_95_Reg, 13, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_10__Reg1_14
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 10, CVT_95_Reg, 14, CVT_Done },
  // Convert__u29_3Imm1_3__Reg1_6
  { CVT_95_addImmOperands, 3, CVT_95_Reg, 6, CVT_Done },
  // Convert__u29_3Imm1_5__Reg1_8
  { CVT_95_addImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__s29_3Imm1_5__Reg1_8
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_3Imm1_6__Reg1_9
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_3Imm1_6__Reg1_10__Reg1_14
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 10, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_3__Reg1_2__Reg1_6
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_95_Reg, 6, CVT_Done },
  // Convert__u31_1Imm1_3__Reg1_6
  { CVT_95_addImmOperands, 3, CVT_95_Reg, 6, CVT_Done },
  // Convert__u31_1Imm1_5__Reg1_8
  { CVT_95_addImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__s31_1Imm1_5__Reg1_8
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__u31_1Imm1_5__Reg1_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__u6_1Imm1_5__s32_0Imm1_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_9
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 10, CVT_Done },
  // Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_10__Reg1_14
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 10, CVT_95_Reg, 14, CVT_Done },
  // Convert__u30_2Imm1_3__Reg1_6
  { CVT_95_addImmOperands, 3, CVT_95_Reg, 6, CVT_Done },
  // Convert__u30_2Imm1_5__Reg1_8
  { CVT_95_addImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__s30_2Imm1_5__Reg1_8
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__u30_2Imm1_5__Reg1_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__u6_2Imm1_5__s32_0Imm1_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addSignedImmOperands, 9, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_9
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 10, CVT_Done },
  // Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 11, CVT_Done },
  // Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_10__Reg1_14
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 10, CVT_95_Reg, 14, CVT_Done },
  // Convert__Reg1_4__b30_2Imm1_18
  { CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 18, CVT_Done },
  // Convert__Reg1_6__Reg1_7__b30_2Imm1_19
  { CVT_95_Reg, 6, CVT_95_Reg, 7, CVT_95_addSignedImmOperands, 19, CVT_Done },
  // Convert__Reg1_4__b30_2Imm1_19
  { CVT_95_Reg, 4, CVT_95_addSignedImmOperands, 19, CVT_Done },
  // Convert__Reg1_6__n1Const1_8__b30_2Imm1_20
  { CVT_95_Reg, 6, CVT_95_addn1ConstOperands, 8, CVT_95_addSignedImmOperands, 20, CVT_Done },
  // Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20
  { CVT_95_Reg, 6, CVT_95_addImmOperands, 8, CVT_95_addSignedImmOperands, 20, CVT_Done },
  // Convert__Reg1_6__Reg1_7__b30_2Imm1_20
  { CVT_95_Reg, 6, CVT_95_Reg, 7, CVT_95_addSignedImmOperands, 20, CVT_Done },
  // Convert__Reg1_6__n1Const1_8__b30_2Imm1_21
  { CVT_95_Reg, 6, CVT_95_addn1ConstOperands, 8, CVT_95_addSignedImmOperands, 21, CVT_Done },
  // Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21
  { CVT_95_Reg, 6, CVT_95_addImmOperands, 8, CVT_95_addSignedImmOperands, 21, CVT_Done },
  // Convert__b30_2Imm1_4__Reg1_5
  { CVT_95_addSignedImmOperands, 4, CVT_95_Reg, 5, CVT_Done },
  // Convert__b30_2Imm1_4__u10_0Imm1_6
  { CVT_95_addSignedImmOperands, 4, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__u8_0Imm1_3
  { CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Tie0__Tie1__Reg1_4
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_Tied, 1, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_2__imm_95_0__Reg1_7
  { CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_95_Reg, 7, CVT_Done },
  // Convert__Reg1_2__s4_0Imm1_5__Reg1_8
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 8, CVT_Done },
  // Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_9
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 9, CVT_Done },
  // Convert__Reg1_2__s4_0Imm1_5__Reg1_10
  { CVT_95_Reg, 2, CVT_95_addSignedImmOperands, 5, CVT_95_Reg, 10, CVT_Done },
  // Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_11
  { CVT_95_Reg, 2, CVT_Tied, 0, CVT_95_addSignedImmOperands, 6, CVT_95_Reg, 11, CVT_Done },
  // Convert__u1_0Imm1_3
  { CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_2__u1_0Imm1_4
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_Done },
};

void HexagonAsmParser::
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
      static_cast<HexagonOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(OpIdx));
      break;
    case CVT_95_Reg:
      static_cast<HexagonOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addSignedImmOperands:
      static_cast<HexagonOperand&>(*Operands[OpIdx]).addSignedImmOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<HexagonOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_regW15:
      Inst.addOperand(MCOperand::createReg(Hexagon::W15));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_imm_95__MINUS_1:
      Inst.addOperand(MCOperand::createImm(-1));
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    case CVT_95_addn1ConstOperands:
      static_cast<HexagonOperand&>(*Operands[OpIdx]).addn1ConstOperands(Inst, 1);
      break;
    }
  }
}

void HexagonAsmParser::
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
    case CVT_95_addSignedImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regW15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95__MINUS_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addn1ConstOperands:
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
  MCK__35_, // '#'
  MCK__38_, // '&'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__STAR_, // '*'
  MCK__43_, // '+'
  MCK__MINUS_, // '-'
  MCK__DOT_, // '.'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_16, // '16'
  MCK__COLON_, // ':'
  MCK__59_, // ';'
  MCK__LT_, // '<'
  MCK__61_, // '='
  MCK__GT_, // '>'
  MCK_CONST32, // 'CONST32'
  MCK_CONST64, // 'CONST64'
  MCK_DUPLEX, // 'DUPLEX'
  MCK_I, // 'I'
  MCK__94_, // '^'
  MCK_abs, // 'abs'
  MCK_add, // 'add'
  MCK_addasl, // 'addasl'
  MCK_all8, // 'all8'
  MCK_allocframe, // 'allocframe'
  MCK_and, // 'and'
  MCK_any8, // 'any8'
  MCK_asl, // 'asl'
  MCK_aslh, // 'aslh'
  MCK_asr, // 'asr'
  MCK_asrh, // 'asrh'
  MCK_asrrnd, // 'asrrnd'
  MCK_b, // 'b'
  MCK_barrier, // 'barrier'
  MCK_bitsclr, // 'bitsclr'
  MCK_bitsplit, // 'bitsplit'
  MCK_bitsset, // 'bitsset'
  MCK_boundscheck, // 'boundscheck'
  MCK_brev, // 'brev'
  MCK_brkpt, // 'brkpt'
  MCK_call, // 'call'
  MCK_callr, // 'callr'
  MCK_carry, // 'carry'
  MCK_chop, // 'chop'
  MCK_circ, // 'circ'
  MCK_cl0, // 'cl0'
  MCK_cl1, // 'cl1'
  MCK_clb, // 'clb'
  MCK_clrbit, // 'clrbit'
  MCK_cmp, // 'cmp'
  MCK_cmpb, // 'cmpb'
  MCK_cmph, // 'cmph'
  MCK_cmpy, // 'cmpy'
  MCK_cmpyi, // 'cmpyi'
  MCK_cmpyiwh, // 'cmpyiwh'
  MCK_cmpyr, // 'cmpyr'
  MCK_cmpyrwh, // 'cmpyrwh'
  MCK_combine, // 'combine'
  MCK_convert_95_d2df, // 'convert_d2df'
  MCK_convert_95_d2sf, // 'convert_d2sf'
  MCK_convert_95_df2d, // 'convert_df2d'
  MCK_convert_95_df2sf, // 'convert_df2sf'
  MCK_convert_95_df2ud, // 'convert_df2ud'
  MCK_convert_95_df2uw, // 'convert_df2uw'
  MCK_convert_95_df2w, // 'convert_df2w'
  MCK_convert_95_sf2d, // 'convert_sf2d'
  MCK_convert_95_sf2df, // 'convert_sf2df'
  MCK_convert_95_sf2ud, // 'convert_sf2ud'
  MCK_convert_95_sf2uw, // 'convert_sf2uw'
  MCK_convert_95_sf2w, // 'convert_sf2w'
  MCK_convert_95_ud2df, // 'convert_ud2df'
  MCK_convert_95_ud2sf, // 'convert_ud2sf'
  MCK_convert_95_uw2df, // 'convert_uw2df'
  MCK_convert_95_uw2sf, // 'convert_uw2sf'
  MCK_convert_95_w2df, // 'convert_w2df'
  MCK_convert_95_w2sf, // 'convert_w2sf'
  MCK_crnd, // 'crnd'
  MCK_cround, // 'cround'
  MCK_ct0, // 'ct0'
  MCK_ct1, // 'ct1'
  MCK_cur, // 'cur'
  MCK_dccleana, // 'dccleana'
  MCK_dccleaninva, // 'dccleaninva'
  MCK_dcfetch, // 'dcfetch'
  MCK_dcinva, // 'dcinva'
  MCK_dczeroa, // 'dczeroa'
  MCK_dealloc_95_return, // 'dealloc_return'
  MCK_deallocframe, // 'deallocframe'
  MCK_decbin, // 'decbin'
  MCK_deinterleave, // 'deinterleave'
  MCK_deprecated, // 'deprecated'
  MCK_dfclass, // 'dfclass'
  MCK_dfcmp, // 'dfcmp'
  MCK_dfmake, // 'dfmake'
  MCK_endloop0, // 'endloop0'
  MCK_endloop01, // 'endloop01'
  MCK_endloop1, // 'endloop1'
  MCK_eq, // 'eq'
  MCK_extract, // 'extract'
  MCK_extractu, // 'extractu'
  MCK_fastcorner9, // 'fastcorner9'
  MCK_ge, // 'ge'
  MCK_geu, // 'geu'
  MCK_gt, // 'gt'
  MCK_gtu, // 'gtu'
  MCK_h, // 'h'
  MCK_hi, // 'hi'
  MCK_hintjr, // 'hintjr'
  MCK_icinva, // 'icinva'
  MCK_iconst, // 'iconst'
  MCK_if, // 'if'
  MCK_immext, // 'immext'
  MCK_insert, // 'insert'
  MCK_interleave, // 'interleave'
  MCK_isync, // 'isync'
  MCK_jump, // 'jump'
  MCK_jumpr, // 'jumpr'
  MCK_l, // 'l'
  MCK_l2fetch, // 'l2fetch'
  MCK_lfs, // 'lfs'
  MCK_lib, // 'lib'
  MCK_lo, // 'lo'
  MCK_loop0, // 'loop0'
  MCK_loop1, // 'loop1'
  MCK_lsl, // 'lsl'
  MCK_lsr, // 'lsr'
  MCK_lt, // 'lt'
  MCK_ltu, // 'ltu'
  MCK_mask, // 'mask'
  MCK_max, // 'max'
  MCK_maxu, // 'maxu'
  MCK_memb, // 'memb'
  MCK_memb_95_fifo, // 'memb_fifo'
  MCK_membh, // 'membh'
  MCK_memd, // 'memd'
  MCK_memd_95_locked, // 'memd_locked'
  MCK_memh, // 'memh'
  MCK_memh_95_fifo, // 'memh_fifo'
  MCK_memub, // 'memub'
  MCK_memubh, // 'memubh'
  MCK_memuh, // 'memuh'
  MCK_memw, // 'memw'
  MCK_memw_95_locked, // 'memw_locked'
  MCK_min, // 'min'
  MCK_minu, // 'minu'
  MCK_modwrap, // 'modwrap'
  MCK_mpy, // 'mpy'
  MCK_mpyi, // 'mpyi'
  MCK_mpysu, // 'mpysu'
  MCK_mpyu, // 'mpyu'
  MCK_mpyui, // 'mpyui'
  MCK_mux, // 'mux'
  MCK_neg, // 'neg'
  MCK_new, // 'new'
  MCK_nomatch, // 'nomatch'
  MCK_nop, // 'nop'
  MCK_normamt, // 'normamt'
  MCK_not, // 'not'
  MCK_nt, // 'nt'
  MCK_or, // 'or'
  MCK_packhl, // 'packhl'
  MCK_parity, // 'parity'
  MCK_pause, // 'pause'
  MCK_pmpyw, // 'pmpyw'
  MCK_popcount, // 'popcount'
  MCK_pos, // 'pos'
  MCK_raw, // 'raw'
  MCK_rnd, // 'rnd'
  MCK_rol, // 'rol'
  MCK_round, // 'round'
  MCK_sat, // 'sat'
  MCK_satb, // 'satb'
  MCK_sath, // 'sath'
  MCK_satub, // 'satub'
  MCK_satuh, // 'satuh'
  MCK_scale, // 'scale'
  MCK_setbit, // 'setbit'
  MCK_sfadd, // 'sfadd'
  MCK_sfclass, // 'sfclass'
  MCK_sfcmp, // 'sfcmp'
  MCK_sffixupd, // 'sffixupd'
  MCK_sffixupn, // 'sffixupn'
  MCK_sffixupr, // 'sffixupr'
  MCK_sfinvsqrta, // 'sfinvsqrta'
  MCK_sfmake, // 'sfmake'
  MCK_sfmax, // 'sfmax'
  MCK_sfmin, // 'sfmin'
  MCK_sfmpy, // 'sfmpy'
  MCK_sfrecipa, // 'sfrecipa'
  MCK_sfsub, // 'sfsub'
  MCK_shift, // 'shift'
  MCK_shuffeb, // 'shuffeb'
  MCK_shuffeh, // 'shuffeh'
  MCK_shuffob, // 'shuffob'
  MCK_shuffoh, // 'shuffoh'
  MCK_sp1loop0, // 'sp1loop0'
  MCK_sp2loop0, // 'sp2loop0'
  MCK_sp3loop0, // 'sp3loop0'
  MCK_sub, // 'sub'
  MCK_swiz, // 'swiz'
  MCK_sxtb, // 'sxtb'
  MCK_sxth, // 'sxth'
  MCK_sxtw, // 'sxtw'
  MCK_syncht, // 'syncht'
  MCK_t, // 't'
  MCK_tableidxb, // 'tableidxb'
  MCK_tableidxd, // 'tableidxd'
  MCK_tableidxh, // 'tableidxh'
  MCK_tableidxw, // 'tableidxw'
  MCK_tlbmatch, // 'tlbmatch'
  MCK_tmp, // 'tmp'
  MCK_togglebit, // 'togglebit'
  MCK_trace, // 'trace'
  MCK_trap0, // 'trap0'
  MCK_tstbit, // 'tstbit'
  MCK_ub, // 'ub'
  MCK_uh, // 'uh'
  MCK_uo, // 'uo'
  MCK_uw, // 'uw'
  MCK_vabs, // 'vabs'
  MCK_vabsdiff, // 'vabsdiff'
  MCK_vabsdiffb, // 'vabsdiffb'
  MCK_vabsdiffh, // 'vabsdiffh'
  MCK_vabsdiffub, // 'vabsdiffub'
  MCK_vabsdiffuh, // 'vabsdiffuh'
  MCK_vabsdiffw, // 'vabsdiffw'
  MCK_vabsh, // 'vabsh'
  MCK_vabsw, // 'vabsw'
  MCK_vacsh, // 'vacsh'
  MCK_vadd, // 'vadd'
  MCK_vaddb, // 'vaddb'
  MCK_vaddh, // 'vaddh'
  MCK_vaddhub, // 'vaddhub'
  MCK_vaddub, // 'vaddub'
  MCK_vadduh, // 'vadduh'
  MCK_vaddw, // 'vaddw'
  MCK_valign, // 'valign'
  MCK_valignb, // 'valignb'
  MCK_vand, // 'vand'
  MCK_vasl, // 'vasl'
  MCK_vaslh, // 'vaslh'
  MCK_vaslw, // 'vaslw'
  MCK_vasr, // 'vasr'
  MCK_vasrh, // 'vasrh'
  MCK_vasrhb, // 'vasrhb'
  MCK_vasrhub, // 'vasrhub'
  MCK_vasrw, // 'vasrw'
  MCK_vasrwh, // 'vasrwh'
  MCK_vasrwuh, // 'vasrwuh'
  MCK_vavg, // 'vavg'
  MCK_vavgh, // 'vavgh'
  MCK_vavgub, // 'vavgub'
  MCK_vavguh, // 'vavguh'
  MCK_vavguw, // 'vavguw'
  MCK_vavgw, // 'vavgw'
  MCK_vcl0, // 'vcl0'
  MCK_vcl0h, // 'vcl0h'
  MCK_vcl0w, // 'vcl0w'
  MCK_vclb, // 'vclb'
  MCK_vcmp, // 'vcmp'
  MCK_vcmpb, // 'vcmpb'
  MCK_vcmph, // 'vcmph'
  MCK_vcmpw, // 'vcmpw'
  MCK_vcmpyi, // 'vcmpyi'
  MCK_vcmpyr, // 'vcmpyr'
  MCK_vcnegh, // 'vcnegh'
  MCK_vcombine, // 'vcombine'
  MCK_vconj, // 'vconj'
  MCK_vcrotate, // 'vcrotate'
  MCK_vdeal, // 'vdeal'
  MCK_vdealb, // 'vdealb'
  MCK_vdealb4w, // 'vdealb4w'
  MCK_vdeale, // 'vdeale'
  MCK_vdealh, // 'vdealh'
  MCK_vdelta, // 'vdelta'
  MCK_vdmpy, // 'vdmpy'
  MCK_vdmpybsu, // 'vdmpybsu'
  MCK_vdmpybus, // 'vdmpybus'
  MCK_vdmpyh, // 'vdmpyh'
  MCK_vdmpyhb, // 'vdmpyhb'
  MCK_vdmpyhsu, // 'vdmpyhsu'
  MCK_vdsad, // 'vdsad'
  MCK_vdsaduh, // 'vdsaduh'
  MCK_vextract, // 'vextract'
  MCK_vhist, // 'vhist'
  MCK_vinsert, // 'vinsert'
  MCK_vitpack, // 'vitpack'
  MCK_vlalign, // 'vlalign'
  MCK_vlslh, // 'vlslh'
  MCK_vlslw, // 'vlslw'
  MCK_vlsr, // 'vlsr'
  MCK_vlsrh, // 'vlsrh'
  MCK_vlsrw, // 'vlsrw'
  MCK_vlut16, // 'vlut16'
  MCK_vlut32, // 'vlut32'
  MCK_vmax, // 'vmax'
  MCK_vmaxb, // 'vmaxb'
  MCK_vmaxh, // 'vmaxh'
  MCK_vmaxub, // 'vmaxub'
  MCK_vmaxuh, // 'vmaxuh'
  MCK_vmaxuw, // 'vmaxuw'
  MCK_vmaxw, // 'vmaxw'
  MCK_vmem, // 'vmem'
  MCK_vmemu, // 'vmemu'
  MCK_vmin, // 'vmin'
  MCK_vminb, // 'vminb'
  MCK_vminh, // 'vminh'
  MCK_vminub, // 'vminub'
  MCK_vminuh, // 'vminuh'
  MCK_vminuw, // 'vminuw'
  MCK_vminw, // 'vminw'
  MCK_vmpa, // 'vmpa'
  MCK_vmpabus, // 'vmpabus'
  MCK_vmpabuu, // 'vmpabuu'
  MCK_vmpahb, // 'vmpahb'
  MCK_vmpy, // 'vmpy'
  MCK_vmpyb, // 'vmpyb'
  MCK_vmpybsu, // 'vmpybsu'
  MCK_vmpybu, // 'vmpybu'
  MCK_vmpybus, // 'vmpybus'
  MCK_vmpye, // 'vmpye'
  MCK_vmpyeh, // 'vmpyeh'
  MCK_vmpyewuh, // 'vmpyewuh'
  MCK_vmpyh, // 'vmpyh'
  MCK_vmpyhsu, // 'vmpyhsu'
  MCK_vmpyhus, // 'vmpyhus'
  MCK_vmpyi, // 'vmpyi'
  MCK_vmpyie, // 'vmpyie'
  MCK_vmpyieo, // 'vmpyieo'
  MCK_vmpyiewh, // 'vmpyiewh'
  MCK_vmpyiewuh, // 'vmpyiewuh'
  MCK_vmpyih, // 'vmpyih'
  MCK_vmpyihb, // 'vmpyihb'
  MCK_vmpyio, // 'vmpyio'
  MCK_vmpyiowh, // 'vmpyiowh'
  MCK_vmpyiwb, // 'vmpyiwb'
  MCK_vmpyiwh, // 'vmpyiwh'
  MCK_vmpyo, // 'vmpyo'
  MCK_vmpyowh, // 'vmpyowh'
  MCK_vmpyub, // 'vmpyub'
  MCK_vmpyuh, // 'vmpyuh'
  MCK_vmpyweh, // 'vmpyweh'
  MCK_vmpyweuh, // 'vmpyweuh'
  MCK_vmpywoh, // 'vmpywoh'
  MCK_vmpywouh, // 'vmpywouh'
  MCK_vmux, // 'vmux'
  MCK_vnavg, // 'vnavg'
  MCK_vnavgh, // 'vnavgh'
  MCK_vnavgub, // 'vnavgub'
  MCK_vnavgw, // 'vnavgw'
  MCK_vnormamt, // 'vnormamt'
  MCK_vnormamth, // 'vnormamth'
  MCK_vnormamtw, // 'vnormamtw'
  MCK_vnot, // 'vnot'
  MCK_vor, // 'vor'
  MCK_vpack, // 'vpack'
  MCK_vpacke, // 'vpacke'
  MCK_vpackeb, // 'vpackeb'
  MCK_vpackeh, // 'vpackeh'
  MCK_vpackhb, // 'vpackhb'
  MCK_vpackhub, // 'vpackhub'
  MCK_vpacko, // 'vpacko'
  MCK_vpackob, // 'vpackob'
  MCK_vpackoh, // 'vpackoh'
  MCK_vpackwh, // 'vpackwh'
  MCK_vpackwuh, // 'vpackwuh'
  MCK_vpmpyh, // 'vpmpyh'
  MCK_vpopcount, // 'vpopcount'
  MCK_vpopcounth, // 'vpopcounth'
  MCK_vraddh, // 'vraddh'
  MCK_vraddub, // 'vraddub'
  MCK_vradduh, // 'vradduh'
  MCK_vrcmpyi, // 'vrcmpyi'
  MCK_vrcmpyr, // 'vrcmpyr'
  MCK_vrcmpys, // 'vrcmpys'
  MCK_vrcnegh, // 'vrcnegh'
  MCK_vrcrotate, // 'vrcrotate'
  MCK_vrdelta, // 'vrdelta'
  MCK_vrmaxh, // 'vrmaxh'
  MCK_vrmaxuh, // 'vrmaxuh'
  MCK_vrmaxuw, // 'vrmaxuw'
  MCK_vrmaxw, // 'vrmaxw'
  MCK_vrminh, // 'vrminh'
  MCK_vrminuh, // 'vrminuh'
  MCK_vrminuw, // 'vrminuw'
  MCK_vrminw, // 'vrminw'
  MCK_vrmpy, // 'vrmpy'
  MCK_vrmpyb, // 'vrmpyb'
  MCK_vrmpybsu, // 'vrmpybsu'
  MCK_vrmpybu, // 'vrmpybu'
  MCK_vrmpybus, // 'vrmpybus'
  MCK_vrmpyh, // 'vrmpyh'
  MCK_vrmpyub, // 'vrmpyub'
  MCK_vrmpyweh, // 'vrmpyweh'
  MCK_vrmpywoh, // 'vrmpywoh'
  MCK_vrndwh, // 'vrndwh'
  MCK_vror, // 'vror'
  MCK_vround, // 'vround'
  MCK_vroundhb, // 'vroundhb'
  MCK_vroundhub, // 'vroundhub'
  MCK_vroundwh, // 'vroundwh'
  MCK_vroundwuh, // 'vroundwuh'
  MCK_vrsad, // 'vrsad'
  MCK_vrsadub, // 'vrsadub'
  MCK_vsat, // 'vsat'
  MCK_vsathb, // 'vsathb'
  MCK_vsathub, // 'vsathub'
  MCK_vsatwh, // 'vsatwh'
  MCK_vsatwuh, // 'vsatwuh'
  MCK_vsetq, // 'vsetq'
  MCK_vsetq2, // 'vsetq2'
  MCK_vshuff, // 'vshuff'
  MCK_vshuffb, // 'vshuffb'
  MCK_vshuffe, // 'vshuffe'
  MCK_vshuffeb, // 'vshuffeb'
  MCK_vshuffeh, // 'vshuffeh'
  MCK_vshuffh, // 'vshuffh'
  MCK_vshuffo, // 'vshuffo'
  MCK_vshuffob, // 'vshuffob'
  MCK_vshuffoe, // 'vshuffoe'
  MCK_vshuffoeb, // 'vshuffoeb'
  MCK_vshuffoeh, // 'vshuffoeh'
  MCK_vshuffoh, // 'vshuffoh'
  MCK_vsplat, // 'vsplat'
  MCK_vsplatb, // 'vsplatb'
  MCK_vsplath, // 'vsplath'
  MCK_vspliceb, // 'vspliceb'
  MCK_vsub, // 'vsub'
  MCK_vsubb, // 'vsubb'
  MCK_vsubh, // 'vsubh'
  MCK_vsubub, // 'vsubub'
  MCK_vsubuh, // 'vsubuh'
  MCK_vsubw, // 'vsubw'
  MCK_vswap, // 'vswap'
  MCK_vsxt, // 'vsxt'
  MCK_vsxtb, // 'vsxtb'
  MCK_vsxtbh, // 'vsxtbh'
  MCK_vsxth, // 'vsxth'
  MCK_vsxthw, // 'vsxthw'
  MCK_vtmpy, // 'vtmpy'
  MCK_vtmpyb, // 'vtmpyb'
  MCK_vtmpybus, // 'vtmpybus'
  MCK_vtmpyhb, // 'vtmpyhb'
  MCK_vtrans2x2, // 'vtrans2x2'
  MCK_vtrunehb, // 'vtrunehb'
  MCK_vtrunewh, // 'vtrunewh'
  MCK_vtrunohb, // 'vtrunohb'
  MCK_vtrunowh, // 'vtrunowh'
  MCK_vunpack, // 'vunpack'
  MCK_vunpackb, // 'vunpackb'
  MCK_vunpackh, // 'vunpackh'
  MCK_vunpacko, // 'vunpacko'
  MCK_vunpackob, // 'vunpackob'
  MCK_vunpackoh, // 'vunpackoh'
  MCK_vunpackub, // 'vunpackub'
  MCK_vunpackuh, // 'vunpackuh'
  MCK_vwhist128, // 'vwhist128'
  MCK_vwhist256, // 'vwhist256'
  MCK_vxaddsubh, // 'vxaddsubh'
  MCK_vxaddsubw, // 'vxaddsubw'
  MCK_vxor, // 'vxor'
  MCK_vxsubaddh, // 'vxsubaddh'
  MCK_vxsubaddw, // 'vxsubaddw'
  MCK_vzxt, // 'vzxt'
  MCK_vzxtb, // 'vzxtb'
  MCK_vzxtbh, // 'vzxtbh'
  MCK_vzxth, // 'vzxth'
  MCK_vzxthw, // 'vzxthw'
  MCK_w, // 'w'
  MCK_xor, // 'xor'
  MCK_zxtb, // 'zxtb'
  MCK_zxth, // 'zxth'
  MCK__124_, // '|'
  MCK__126_, // '~'
  MCK_Reg13, // derived register class
  MCK_GP, // register class 'GP'
  MCK_P0, // register class 'P0'
  MCK_P1, // register class 'P1'
  MCK_P3, // register class 'P3'
  MCK_PC, // register class 'PC'
  MCK_UsrBits, // register class 'UsrBits'
  MCK_ModRegs, // register class 'ModRegs'
  MCK_Reg19, // derived register class
  MCK_Reg3, // derived register class
  MCK_PredRegs, // register class 'PredRegs'
  MCK_VecPredRegs, // register class 'VecPredRegs,VecPredRegs128B'
  MCK_Reg16, // derived register class
  MCK_GeneralDoubleLow8Regs, // register class 'GeneralDoubleLow8Regs'
  MCK_IntRegsLow8, // register class 'IntRegsLow8'
  MCK_V62Regs, // register class 'V62Regs'
  MCK_CtrRegs64, // register class 'CtrRegs64'
  MCK_DoubleRegs, // register class 'DoubleRegs'
  MCK_GeneralSubRegs, // register class 'GeneralSubRegs'
  MCK_VecDblRegs, // register class 'VecDblRegs,VecDblRegs128B'
  MCK_CtrRegs, // register class 'CtrRegs'
  MCK_IntRegs, // register class 'IntRegs'
  MCK_VectorRegs, // register class 'VectorRegs,VectorRegs128B'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_a30_2Imm, // user defined class 'a30_2ImmOperand'
  MCK_b13_2Imm, // user defined class 'b13_2ImmOperand'
  MCK_b15_2Imm, // user defined class 'b15_2ImmOperand'
  MCK_b30_2Imm, // user defined class 'b30_2ImmOperand'
  MCK_f32Imm, // user defined class 'f32ImmOperand'
  MCK_f64Imm, // user defined class 'f64ImmOperand'
  MCK_m32_0Imm, // user defined class 'm32_0ImmOperand'
  MCK_n1Const, // user defined class 'n1ConstOperand'
  MCK_s10_0Imm, // user defined class 's10_0ImmOperand'
  MCK_s10_6Imm, // user defined class 's10_6ImmOperand'
  MCK_s23_2Imm, // user defined class 's23_2ImmOperand'
  MCK_s29_3Imm, // user defined class 's29_3ImmOperand'
  MCK_s30_2Imm, // user defined class 's30_2ImmOperand'
  MCK_s31_1Imm, // user defined class 's31_1ImmOperand'
  MCK_s32_0Imm, // user defined class 's32_0ImmOperand'
  MCK_s3_0Imm, // user defined class 's3_0ImmOperand'
  MCK_s4_0Imm, // user defined class 's4_0ImmOperand'
  MCK_s4_1Imm, // user defined class 's4_1ImmOperand'
  MCK_s4_2Imm, // user defined class 's4_2ImmOperand'
  MCK_s4_3Imm, // user defined class 's4_3ImmOperand'
  MCK_s6_0Imm, // user defined class 's6_0ImmOperand'
  MCK_s6_3Imm, // user defined class 's6_3ImmOperand'
  MCK_s8_0Imm, // user defined class 's8_0ImmOperand'
  MCK_s9_0Imm, // user defined class 's9_0ImmOperand'
  MCK_u10_0Imm, // user defined class 'u10_0ImmOperand'
  MCK_u11_3Imm, // user defined class 'u11_3ImmOperand'
  MCK_u16_0Imm, // user defined class 'u16_0ImmOperand'
  MCK_u1_0Imm, // user defined class 'u1_0ImmOperand'
  MCK_u26_6Imm, // user defined class 'u26_6ImmOperand'
  MCK_u29_3Imm, // user defined class 'u29_3ImmOperand'
  MCK_u2_0Imm, // user defined class 'u2_0ImmOperand'
  MCK_u30_2Imm, // user defined class 'u30_2ImmOperand'
  MCK_u31_1Imm, // user defined class 'u31_1ImmOperand'
  MCK_u32_0Imm, // user defined class 'u32_0ImmOperand'
  MCK_u3_0Imm, // user defined class 'u3_0ImmOperand'
  MCK_u3_1Imm, // user defined class 'u3_1ImmOperand'
  MCK_u4_0Imm, // user defined class 'u4_0ImmOperand'
  MCK_u4_2Imm, // user defined class 'u4_2ImmOperand'
  MCK_u5_0Imm, // user defined class 'u5_0ImmOperand'
  MCK_u5_2Imm, // user defined class 'u5_2ImmOperand'
  MCK_u5_3Imm, // user defined class 'u5_3ImmOperand'
  MCK_u64_0Imm, // user defined class 'u64_0ImmOperand'
  MCK_u6_0Imm, // user defined class 'u6_0ImmOperand'
  MCK_u6_1Imm, // user defined class 'u6_1ImmOperand'
  MCK_u6_2Imm, // user defined class 'u6_2ImmOperand'
  MCK_u7_0Imm, // user defined class 'u7_0ImmOperand'
  MCK_u8_0Imm, // user defined class 'u8_0ImmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 25 strings to match.
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
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case ':':	 // 1 string to match.
      return MCK__COLON_;	 // ":"
    case ';':	 // 1 string to match.
      return MCK__59_;	 // ";"
    case '<':	 // 1 string to match.
      return MCK__LT_;	 // "<"
    case '=':	 // 1 string to match.
      return MCK__61_;	 // "="
    case '>':	 // 1 string to match.
      return MCK__GT_;	 // ">"
    case 'I':	 // 1 string to match.
      return MCK_I;	 // "I"
    case '^':	 // 1 string to match.
      return MCK__94_;	 // "^"
    case 'b':	 // 1 string to match.
      return MCK_b;	 // "b"
    case 'h':	 // 1 string to match.
      return MCK_h;	 // "h"
    case 'l':	 // 1 string to match.
      return MCK_l;	 // "l"
    case 't':	 // 1 string to match.
      return MCK_t;	 // "t"
    case 'w':	 // 1 string to match.
      return MCK_w;	 // "w"
    case '|':	 // 1 string to match.
      return MCK__124_;	 // "|"
    case '~':	 // 1 string to match.
      return MCK__126_;	 // "~"
    }
    break;
  case 2:	 // 14 strings to match.
    switch (Name[0]) {
    default: break;
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    case 'e':	 // 1 string to match.
      if (Name[1] != 'q')
        break;
      return MCK_eq;	 // "eq"
    case 'g':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        return MCK_ge;	 // "ge"
      case 't':	 // 1 string to match.
        return MCK_gt;	 // "gt"
      }
      break;
    case 'h':	 // 1 string to match.
      if (Name[1] != 'i')
        break;
      return MCK_hi;	 // "hi"
    case 'i':	 // 1 string to match.
      if (Name[1] != 'f')
        break;
      return MCK_if;	 // "if"
    case 'l':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        return MCK_lo;	 // "lo"
      case 't':	 // 1 string to match.
        return MCK_lt;	 // "lt"
      }
      break;
    case 'n':	 // 1 string to match.
      if (Name[1] != 't')
        break;
      return MCK_nt;	 // "nt"
    case 'o':	 // 1 string to match.
      if (Name[1] != 'r')
        break;
      return MCK_or;	 // "or"
    case 'u':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        return MCK_ub;	 // "ub"
      case 'h':	 // 1 string to match.
        return MCK_uh;	 // "uh"
      case 'o':	 // 1 string to match.
        return MCK_uo;	 // "uo"
      case 'w':	 // 1 string to match.
        return MCK_uw;	 // "uw"
      }
      break;
    }
    break;
  case 3:	 // 36 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return MCK_abs;	 // "abs"
      case 'd':	 // 1 string to match.
        if (Name[2] != 'd')
          break;
        return MCK_add;	 // "add"
      case 'n':	 // 1 string to match.
        if (Name[2] != 'd')
          break;
        return MCK_and;	 // "and"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          return MCK_asl;	 // "asl"
        case 'r':	 // 1 string to match.
          return MCK_asr;	 // "asr"
        }
        break;
      }
      break;
    case 'c':	 // 7 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return MCK_cl0;	 // "cl0"
        case '1':	 // 1 string to match.
          return MCK_cl1;	 // "cl1"
        case 'b':	 // 1 string to match.
          return MCK_clb;	 // "clb"
        }
        break;
      case 'm':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return MCK_cmp;	 // "cmp"
      case 't':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return MCK_ct0;	 // "ct0"
        case '1':	 // 1 string to match.
          return MCK_ct1;	 // "ct1"
        }
        break;
      case 'u':	 // 1 string to match.
        if (Name[2] != 'r')
          break;
        return MCK_cur;	 // "cur"
      }
      break;
    case 'g':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (Name[2] != 'u')
          break;
        return MCK_geu;	 // "geu"
      case 't':	 // 1 string to match.
        if (Name[2] != 'u')
          break;
        return MCK_gtu;	 // "gtu"
      }
      break;
    case 'l':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return MCK_lfs;	 // "lfs"
      case 'i':	 // 1 string to match.
        if (Name[2] != 'b')
          break;
        return MCK_lib;	 // "lib"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          return MCK_lsl;	 // "lsl"
        case 'r':	 // 1 string to match.
          return MCK_lsr;	 // "lsr"
        }
        break;
      case 't':	 // 1 string to match.
        if (Name[2] != 'u')
          break;
        return MCK_ltu;	 // "ltu"
      }
      break;
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Name[2] != 'x')
          break;
        return MCK_max;	 // "max"
      case 'i':	 // 1 string to match.
        if (Name[2] != 'n')
          break;
        return MCK_min;	 // "min"
      case 'p':	 // 1 string to match.
        if (Name[2] != 'y')
          break;
        return MCK_mpy;	 // "mpy"
      case 'u':	 // 1 string to match.
        if (Name[2] != 'x')
          break;
        return MCK_mux;	 // "mux"
      }
      break;
    case 'n':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'g':	 // 1 string to match.
          return MCK_neg;	 // "neg"
        case 'w':	 // 1 string to match.
          return MCK_new;	 // "new"
        }
        break;
      case 'o':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'p':	 // 1 string to match.
          return MCK_nop;	 // "nop"
        case 't':	 // 1 string to match.
          return MCK_not;	 // "not"
        }
        break;
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "os", 2) != 0)
        break;
      return MCK_pos;	 // "pos"
    case 'r':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Name[2] != 'w')
          break;
        return MCK_raw;	 // "raw"
      case 'n':	 // 1 string to match.
        if (Name[2] != 'd')
          break;
        return MCK_rnd;	 // "rnd"
      case 'o':	 // 1 string to match.
        if (Name[2] != 'l')
          break;
        return MCK_rol;	 // "rol"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Name[2] != 't')
          break;
        return MCK_sat;	 // "sat"
      case 'u':	 // 1 string to match.
        if (Name[2] != 'b')
          break;
        return MCK_sub;	 // "sub"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "mp", 2) != 0)
        break;
      return MCK_tmp;	 // "tmp"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "or", 2) != 0)
        break;
      return MCK_vor;	 // "vor"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+1, "or", 2) != 0)
        break;
      return MCK_xor;	 // "xor"
    }
    break;
  case 4:	 // 53 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l8", 2) != 0)
          break;
        return MCK_all8;	 // "all8"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+2, "y8", 2) != 0)
          break;
        return MCK_any8;	 // "any8"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (Name[3] != 'h')
            break;
          return MCK_aslh;	 // "aslh"
        case 'r':	 // 1 string to match.
          if (Name[3] != 'h')
            break;
          return MCK_asrh;	 // "asrh"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rev", 3) != 0)
        break;
      return MCK_brev;	 // "brev"
    case 'c':	 // 7 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ll", 2) != 0)
          break;
        return MCK_call;	 // "call"
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "op", 2) != 0)
          break;
        return MCK_chop;	 // "chop"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rc", 2) != 0)
          break;
        return MCK_circ;	 // "circ"
      case 'm':	 // 3 strings to match.
        if (Name[2] != 'p')
          break;
        switch (Name[3]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_cmpb;	 // "cmpb"
        case 'h':	 // 1 string to match.
          return MCK_cmph;	 // "cmph"
        case 'y':	 // 1 string to match.
          return MCK_cmpy;	 // "cmpy"
        }
        break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "nd", 2) != 0)
          break;
        return MCK_crnd;	 // "crnd"
      }
      break;
    case 'j':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ump", 3) != 0)
        break;
      return MCK_jump;	 // "jump"
    case 'm':	 // 9 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 's':	 // 1 string to match.
          if (Name[3] != 'k')
            break;
          return MCK_mask;	 // "mask"
        case 'x':	 // 1 string to match.
          if (Name[3] != 'u')
            break;
          return MCK_maxu;	 // "maxu"
        }
        break;
      case 'e':	 // 4 strings to match.
        if (Name[2] != 'm')
          break;
        switch (Name[3]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_memb;	 // "memb"
        case 'd':	 // 1 string to match.
          return MCK_memd;	 // "memd"
        case 'h':	 // 1 string to match.
          return MCK_memh;	 // "memh"
        case 'w':	 // 1 string to match.
          return MCK_memw;	 // "memw"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "nu", 2) != 0)
          break;
        return MCK_minu;	 // "minu"
      case 'p':	 // 2 strings to match.
        if (Name[2] != 'y')
          break;
        switch (Name[3]) {
        default: break;
        case 'i':	 // 1 string to match.
          return MCK_mpyi;	 // "mpyi"
        case 'u':	 // 1 string to match.
          return MCK_mpyu;	 // "mpyu"
        }
        break;
      }
      break;
    case 's':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (Name[2] != 't')
          break;
        switch (Name[3]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_satb;	 // "satb"
        case 'h':	 // 1 string to match.
          return MCK_sath;	 // "sath"
        }
        break;
      case 'w':	 // 1 string to match.
        if (memcmp(Name.data()+2, "iz", 2) != 0)
          break;
        return MCK_swiz;	 // "swiz"
      case 'x':	 // 3 strings to match.
        if (Name[2] != 't')
          break;
        switch (Name[3]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_sxtb;	 // "sxtb"
        case 'h':	 // 1 string to match.
          return MCK_sxth;	 // "sxth"
        case 'w':	 // 1 string to match.
          return MCK_sxtw;	 // "sxtw"
        }
        break;
      }
      break;
    case 'v':	 // 23 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (Name[3] != 's')
            break;
          return MCK_vabs;	 // "vabs"
        case 'd':	 // 1 string to match.
          if (Name[3] != 'd')
            break;
          return MCK_vadd;	 // "vadd"
        case 'n':	 // 1 string to match.
          if (Name[3] != 'd')
            break;
          return MCK_vand;	 // "vand"
        case 's':	 // 2 strings to match.
          switch (Name[3]) {
          default: break;
          case 'l':	 // 1 string to match.
            return MCK_vasl;	 // "vasl"
          case 'r':	 // 1 string to match.
            return MCK_vasr;	 // "vasr"
          }
          break;
        case 'v':	 // 1 string to match.
          if (Name[3] != 'g')
            break;
          return MCK_vavg;	 // "vavg"
        }
        break;
      case 'c':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'l':	 // 2 strings to match.
          switch (Name[3]) {
          default: break;
          case '0':	 // 1 string to match.
            return MCK_vcl0;	 // "vcl0"
          case 'b':	 // 1 string to match.
            return MCK_vclb;	 // "vclb"
          }
          break;
        case 'm':	 // 1 string to match.
          if (Name[3] != 'p')
            break;
          return MCK_vcmp;	 // "vcmp"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "sr", 2) != 0)
          break;
        return MCK_vlsr;	 // "vlsr"
      case 'm':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[3] != 'x')
            break;
          return MCK_vmax;	 // "vmax"
        case 'e':	 // 1 string to match.
          if (Name[3] != 'm')
            break;
          return MCK_vmem;	 // "vmem"
        case 'i':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return MCK_vmin;	 // "vmin"
        case 'p':	 // 2 strings to match.
          switch (Name[3]) {
          default: break;
          case 'a':	 // 1 string to match.
            return MCK_vmpa;	 // "vmpa"
          case 'y':	 // 1 string to match.
            return MCK_vmpy;	 // "vmpy"
          }
          break;
        case 'u':	 // 1 string to match.
          if (Name[3] != 'x')
            break;
          return MCK_vmux;	 // "vmux"
        }
        break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ot", 2) != 0)
          break;
        return MCK_vnot;	 // "vnot"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "or", 2) != 0)
          break;
        return MCK_vror;	 // "vror"
      case 's':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[3] != 't')
            break;
          return MCK_vsat;	 // "vsat"
        case 'u':	 // 1 string to match.
          if (Name[3] != 'b')
            break;
          return MCK_vsub;	 // "vsub"
        case 'x':	 // 1 string to match.
          if (Name[3] != 't')
            break;
          return MCK_vsxt;	 // "vsxt"
        }
        break;
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+2, "or", 2) != 0)
          break;
        return MCK_vxor;	 // "vxor"
      case 'z':	 // 1 string to match.
        if (memcmp(Name.data()+2, "xt", 2) != 0)
          break;
        return MCK_vzxt;	 // "vzxt"
      }
      break;
    case 'z':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "xt", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'b':	 // 1 string to match.
        return MCK_zxtb;	 // "zxtb"
      case 'h':	 // 1 string to match.
        return MCK_zxth;	 // "zxth"
      }
      break;
    }
    break;
  case 5:	 // 82 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rkpt", 4) != 0)
        break;
      return MCK_brkpt;	 // "brkpt"
    case 'c':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+3, "lr", 2) != 0)
            break;
          return MCK_callr;	 // "callr"
        case 'r':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ry", 2) != 0)
            break;
          return MCK_carry;	 // "carry"
        }
        break;
      case 'm':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "py", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case 'i':	 // 1 string to match.
          return MCK_cmpyi;	 // "cmpyi"
        case 'r':	 // 1 string to match.
          return MCK_cmpyr;	 // "cmpyr"
        }
        break;
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "fcmp", 4) != 0)
        break;
      return MCK_dfcmp;	 // "dfcmp"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync", 4) != 0)
        break;
      return MCK_isync;	 // "isync"
    case 'j':	 // 1 string to match.
      if (memcmp(Name.data()+1, "umpr", 4) != 0)
        break;
      return MCK_jumpr;	 // "jumpr"
    case 'l':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "oop", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '0':	 // 1 string to match.
        return MCK_loop0;	 // "loop0"
      case '1':	 // 1 string to match.
        return MCK_loop1;	 // "loop1"
      }
      break;
    case 'm':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (Name[2] != 'm')
          break;
        switch (Name[3]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (Name[4] != 'h')
            break;
          return MCK_membh;	 // "membh"
        case 'u':	 // 2 strings to match.
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_memub;	 // "memub"
          case 'h':	 // 1 string to match.
            return MCK_memuh;	 // "memuh"
          }
          break;
        }
        break;
      case 'p':	 // 2 strings to match.
        if (Name[2] != 'y')
          break;
        switch (Name[3]) {
        default: break;
        case 's':	 // 1 string to match.
          if (Name[4] != 'u')
            break;
          return MCK_mpysu;	 // "mpysu"
        case 'u':	 // 1 string to match.
          if (Name[4] != 'i')
            break;
          return MCK_mpyui;	 // "mpyui"
        }
        break;
      }
      break;
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "use", 3) != 0)
          break;
        return MCK_pause;	 // "pause"
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+2, "pyw", 3) != 0)
          break;
        return MCK_pmpyw;	 // "pmpyw"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ound", 4) != 0)
        break;
      return MCK_round;	 // "round"
    case 's':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "tu", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_satub;	 // "satub"
        case 'h':	 // 1 string to match.
          return MCK_satuh;	 // "satuh"
        }
        break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ale", 3) != 0)
          break;
        return MCK_scale;	 // "scale"
      case 'f':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "dd", 2) != 0)
            break;
          return MCK_sfadd;	 // "sfadd"
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mp", 2) != 0)
            break;
          return MCK_sfcmp;	 // "sfcmp"
        case 'm':	 // 3 strings to match.
          switch (Name[3]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[4] != 'x')
              break;
            return MCK_sfmax;	 // "sfmax"
          case 'i':	 // 1 string to match.
            if (Name[4] != 'n')
              break;
            return MCK_sfmin;	 // "sfmin"
          case 'p':	 // 1 string to match.
            if (Name[4] != 'y')
              break;
            return MCK_sfmpy;	 // "sfmpy"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ub", 2) != 0)
            break;
          return MCK_sfsub;	 // "sfsub"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ift", 3) != 0)
          break;
        return MCK_shift;	 // "shift"
      }
      break;
    case 't':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ra", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (Name[4] != 'e')
          break;
        return MCK_trace;	 // "trace"
      case 'p':	 // 1 string to match.
        if (Name[4] != '0')
          break;
        return MCK_trap0;	 // "trap0"
      }
      break;
    case 'v':	 // 52 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 12 strings to match.
        switch (Name[2]) {
        default: break;
        case 'b':	 // 2 strings to match.
          if (Name[3] != 's')
            break;
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            return MCK_vabsh;	 // "vabsh"
          case 'w':	 // 1 string to match.
            return MCK_vabsw;	 // "vabsw"
          }
          break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+3, "sh", 2) != 0)
            break;
          return MCK_vacsh;	 // "vacsh"
        case 'd':	 // 3 strings to match.
          if (Name[3] != 'd')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vaddb;	 // "vaddb"
          case 'h':	 // 1 string to match.
            return MCK_vaddh;	 // "vaddh"
          case 'w':	 // 1 string to match.
            return MCK_vaddw;	 // "vaddw"
          }
          break;
        case 's':	 // 4 strings to match.
          switch (Name[3]) {
          default: break;
          case 'l':	 // 2 strings to match.
            switch (Name[4]) {
            default: break;
            case 'h':	 // 1 string to match.
              return MCK_vaslh;	 // "vaslh"
            case 'w':	 // 1 string to match.
              return MCK_vaslw;	 // "vaslw"
            }
            break;
          case 'r':	 // 2 strings to match.
            switch (Name[4]) {
            default: break;
            case 'h':	 // 1 string to match.
              return MCK_vasrh;	 // "vasrh"
            case 'w':	 // 1 string to match.
              return MCK_vasrw;	 // "vasrw"
            }
            break;
          }
          break;
        case 'v':	 // 2 strings to match.
          if (Name[3] != 'g')
            break;
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            return MCK_vavgh;	 // "vavgh"
          case 'w':	 // 1 string to match.
            return MCK_vavgw;	 // "vavgw"
          }
          break;
        }
        break;
      case 'c':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case 'l':	 // 2 strings to match.
          if (Name[3] != '0')
            break;
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            return MCK_vcl0h;	 // "vcl0h"
          case 'w':	 // 1 string to match.
            return MCK_vcl0w;	 // "vcl0w"
          }
          break;
        case 'm':	 // 3 strings to match.
          if (Name[3] != 'p')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vcmpb;	 // "vcmpb"
          case 'h':	 // 1 string to match.
            return MCK_vcmph;	 // "vcmph"
          case 'w':	 // 1 string to match.
            return MCK_vcmpw;	 // "vcmpw"
          }
          break;
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nj", 2) != 0)
            break;
          return MCK_vconj;	 // "vconj"
        }
        break;
      case 'd':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "al", 2) != 0)
            break;
          return MCK_vdeal;	 // "vdeal"
        case 'm':	 // 1 string to match.
          if (memcmp(Name.data()+3, "py", 2) != 0)
            break;
          return MCK_vdmpy;	 // "vdmpy"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ad", 2) != 0)
            break;
          return MCK_vdsad;	 // "vdsad"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ist", 3) != 0)
          break;
        return MCK_vhist;	 // "vhist"
      case 'l':	 // 4 strings to match.
        if (Name[2] != 's')
          break;
        switch (Name[3]) {
        default: break;
        case 'l':	 // 2 strings to match.
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            return MCK_vlslh;	 // "vlslh"
          case 'w':	 // 1 string to match.
            return MCK_vlslw;	 // "vlslw"
          }
          break;
        case 'r':	 // 2 strings to match.
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            return MCK_vlsrh;	 // "vlsrh"
          case 'w':	 // 1 string to match.
            return MCK_vlsrw;	 // "vlsrw"
          }
          break;
        }
        break;
      case 'm':	 // 12 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 3 strings to match.
          if (Name[3] != 'x')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vmaxb;	 // "vmaxb"
          case 'h':	 // 1 string to match.
            return MCK_vmaxh;	 // "vmaxh"
          case 'w':	 // 1 string to match.
            return MCK_vmaxw;	 // "vmaxw"
          }
          break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mu", 2) != 0)
            break;
          return MCK_vmemu;	 // "vmemu"
        case 'i':	 // 3 strings to match.
          if (Name[3] != 'n')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vminb;	 // "vminb"
          case 'h':	 // 1 string to match.
            return MCK_vminh;	 // "vminh"
          case 'w':	 // 1 string to match.
            return MCK_vminw;	 // "vminw"
          }
          break;
        case 'p':	 // 5 strings to match.
          if (Name[3] != 'y')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vmpyb;	 // "vmpyb"
          case 'e':	 // 1 string to match.
            return MCK_vmpye;	 // "vmpye"
          case 'h':	 // 1 string to match.
            return MCK_vmpyh;	 // "vmpyh"
          case 'i':	 // 1 string to match.
            return MCK_vmpyi;	 // "vmpyi"
          case 'o':	 // 1 string to match.
            return MCK_vmpyo;	 // "vmpyo"
          }
          break;
        }
        break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+2, "avg", 3) != 0)
          break;
        return MCK_vnavg;	 // "vnavg"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ack", 3) != 0)
          break;
        return MCK_vpack;	 // "vpack"
      case 'r':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(Name.data()+3, "py", 2) != 0)
            break;
          return MCK_vrmpy;	 // "vrmpy"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ad", 2) != 0)
            break;
          return MCK_vrsad;	 // "vrsad"
        }
        break;
      case 's':	 // 7 strings to match.
        switch (Name[2]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "tq", 2) != 0)
            break;
          return MCK_vsetq;	 // "vsetq"
        case 'u':	 // 3 strings to match.
          if (Name[3] != 'b')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vsubb;	 // "vsubb"
          case 'h':	 // 1 string to match.
            return MCK_vsubh;	 // "vsubh"
          case 'w':	 // 1 string to match.
            return MCK_vsubw;	 // "vsubw"
          }
          break;
        case 'w':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ap", 2) != 0)
            break;
          return MCK_vswap;	 // "vswap"
        case 'x':	 // 2 strings to match.
          if (Name[3] != 't')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vsxtb;	 // "vsxtb"
          case 'h':	 // 1 string to match.
            return MCK_vsxth;	 // "vsxth"
          }
          break;
        }
        break;
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mpy", 3) != 0)
          break;
        return MCK_vtmpy;	 // "vtmpy"
      case 'z':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "xt", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_vzxtb;	 // "vzxtb"
        case 'h':	 // 1 string to match.
          return MCK_vzxth;	 // "vzxth"
        }
        break;
      }
      break;
    }
    break;
  case 6:	 // 78 strings to match.
    switch (Name[0]) {
    default: break;
    case 'D':	 // 1 string to match.
      if (memcmp(Name.data()+1, "UPLEX", 5) != 0)
        break;
      return MCK_DUPLEX;	 // "DUPLEX"
    case 'a':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "dasl", 4) != 0)
          break;
        return MCK_addasl;	 // "addasl"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rrnd", 4) != 0)
          break;
        return MCK_asrrnd;	 // "asrrnd"
      }
      break;
    case 'c':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rbit", 4) != 0)
          break;
        return MCK_clrbit;	 // "clrbit"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ound", 4) != 0)
          break;
        return MCK_cround;	 // "cround"
      }
      break;
    case 'd':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inva", 4) != 0)
          break;
        return MCK_dcinva;	 // "dcinva"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "cbin", 4) != 0)
          break;
        return MCK_decbin;	 // "decbin"
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+2, "make", 4) != 0)
          break;
        return MCK_dfmake;	 // "dfmake"
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "intjr", 5) != 0)
        break;
      return MCK_hintjr;	 // "hintjr"
    case 'i':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nva", 3) != 0)
            break;
          return MCK_icinva;	 // "icinva"
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nst", 3) != 0)
            break;
          return MCK_iconst;	 // "iconst"
        }
        break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mext", 4) != 0)
          break;
        return MCK_immext;	 // "immext"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+2, "sert", 4) != 0)
          break;
        return MCK_insert;	 // "insert"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "emubh", 5) != 0)
        break;
      return MCK_memubh;	 // "memubh"
    case 'p':	 // 2 strings to match.
      if (Name[1] != 'a')
        break;
      switch (Name[2]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+3, "khl", 3) != 0)
          break;
        return MCK_packhl;	 // "packhl"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ity", 3) != 0)
          break;
        return MCK_parity;	 // "parity"
      }
      break;
    case 's':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tbit", 4) != 0)
          break;
        return MCK_setbit;	 // "setbit"
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+2, "make", 4) != 0)
          break;
        return MCK_sfmake;	 // "sfmake"
      case 'y':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ncht", 4) != 0)
          break;
        return MCK_syncht;	 // "syncht"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "stbit", 5) != 0)
        break;
      return MCK_tstbit;	 // "tstbit"
    case 'v':	 // 58 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 8 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "du", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vaddub;	 // "vaddub"
          case 'h':	 // 1 string to match.
            return MCK_vadduh;	 // "vadduh"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ign", 3) != 0)
            break;
          return MCK_valign;	 // "valign"
        case 's':	 // 2 strings to match.
          if (Name[3] != 'r')
            break;
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            if (Name[5] != 'b')
              break;
            return MCK_vasrhb;	 // "vasrhb"
          case 'w':	 // 1 string to match.
            if (Name[5] != 'h')
              break;
            return MCK_vasrwh;	 // "vasrwh"
          }
          break;
        case 'v':	 // 3 strings to match.
          if (memcmp(Name.data()+3, "gu", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vavgub;	 // "vavgub"
          case 'h':	 // 1 string to match.
            return MCK_vavguh;	 // "vavguh"
          case 'w':	 // 1 string to match.
            return MCK_vavguw;	 // "vavguw"
          }
          break;
        }
        break;
      case 'c':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'm':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "py", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'i':	 // 1 string to match.
            return MCK_vcmpyi;	 // "vcmpyi"
          case 'r':	 // 1 string to match.
            return MCK_vcmpyr;	 // "vcmpyr"
          }
          break;
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "egh", 3) != 0)
            break;
          return MCK_vcnegh;	 // "vcnegh"
        }
        break;
      case 'd':	 // 5 strings to match.
        switch (Name[2]) {
        default: break;
        case 'e':	 // 4 strings to match.
          switch (Name[3]) {
          default: break;
          case 'a':	 // 3 strings to match.
            if (Name[4] != 'l')
              break;
            switch (Name[5]) {
            default: break;
            case 'b':	 // 1 string to match.
              return MCK_vdealb;	 // "vdealb"
            case 'e':	 // 1 string to match.
              return MCK_vdeale;	 // "vdeale"
            case 'h':	 // 1 string to match.
              return MCK_vdealh;	 // "vdealh"
            }
            break;
          case 'l':	 // 1 string to match.
            if (memcmp(Name.data()+4, "ta", 2) != 0)
              break;
            return MCK_vdelta;	 // "vdelta"
          }
          break;
        case 'm':	 // 1 string to match.
          if (memcmp(Name.data()+3, "pyh", 3) != 0)
            break;
          return MCK_vdmpyh;	 // "vdmpyh"
        }
        break;
      case 'l':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "ut", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '1':	 // 1 string to match.
          if (Name[5] != '6')
            break;
          return MCK_vlut16;	 // "vlut16"
        case '3':	 // 1 string to match.
          if (Name[5] != '2')
            break;
          return MCK_vlut32;	 // "vlut32"
        }
        break;
      case 'm':	 // 14 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 3 strings to match.
          if (memcmp(Name.data()+3, "xu", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vmaxub;	 // "vmaxub"
          case 'h':	 // 1 string to match.
            return MCK_vmaxuh;	 // "vmaxuh"
          case 'w':	 // 1 string to match.
            return MCK_vmaxuw;	 // "vmaxuw"
          }
          break;
        case 'i':	 // 3 strings to match.
          if (memcmp(Name.data()+3, "nu", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vminub;	 // "vminub"
          case 'h':	 // 1 string to match.
            return MCK_vminuh;	 // "vminuh"
          case 'w':	 // 1 string to match.
            return MCK_vminuw;	 // "vminuw"
          }
          break;
        case 'p':	 // 8 strings to match.
          switch (Name[3]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Name.data()+4, "hb", 2) != 0)
              break;
            return MCK_vmpahb;	 // "vmpahb"
          case 'y':	 // 7 strings to match.
            switch (Name[4]) {
            default: break;
            case 'b':	 // 1 string to match.
              if (Name[5] != 'u')
                break;
              return MCK_vmpybu;	 // "vmpybu"
            case 'e':	 // 1 string to match.
              if (Name[5] != 'h')
                break;
              return MCK_vmpyeh;	 // "vmpyeh"
            case 'i':	 // 3 strings to match.
              switch (Name[5]) {
              default: break;
              case 'e':	 // 1 string to match.
                return MCK_vmpyie;	 // "vmpyie"
              case 'h':	 // 1 string to match.
                return MCK_vmpyih;	 // "vmpyih"
              case 'o':	 // 1 string to match.
                return MCK_vmpyio;	 // "vmpyio"
              }
              break;
            case 'u':	 // 2 strings to match.
              switch (Name[5]) {
              default: break;
              case 'b':	 // 1 string to match.
                return MCK_vmpyub;	 // "vmpyub"
              case 'h':	 // 1 string to match.
                return MCK_vmpyuh;	 // "vmpyuh"
              }
              break;
            }
            break;
          }
          break;
        }
        break;
      case 'n':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "avg", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'h':	 // 1 string to match.
          return MCK_vnavgh;	 // "vnavgh"
        case 'w':	 // 1 string to match.
          return MCK_vnavgw;	 // "vnavgw"
        }
        break;
      case 'p':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "ck", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'e':	 // 1 string to match.
            return MCK_vpacke;	 // "vpacke"
          case 'o':	 // 1 string to match.
            return MCK_vpacko;	 // "vpacko"
          }
          break;
        case 'm':	 // 1 string to match.
          if (memcmp(Name.data()+3, "pyh", 3) != 0)
            break;
          return MCK_vpmpyh;	 // "vpmpyh"
        }
        break;
      case 'r':	 // 9 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ddh", 3) != 0)
            break;
          return MCK_vraddh;	 // "vraddh"
        case 'm':	 // 6 strings to match.
          switch (Name[3]) {
          default: break;
          case 'a':	 // 2 strings to match.
            if (Name[4] != 'x')
              break;
            switch (Name[5]) {
            default: break;
            case 'h':	 // 1 string to match.
              return MCK_vrmaxh;	 // "vrmaxh"
            case 'w':	 // 1 string to match.
              return MCK_vrmaxw;	 // "vrmaxw"
            }
            break;
          case 'i':	 // 2 strings to match.
            if (Name[4] != 'n')
              break;
            switch (Name[5]) {
            default: break;
            case 'h':	 // 1 string to match.
              return MCK_vrminh;	 // "vrminh"
            case 'w':	 // 1 string to match.
              return MCK_vrminw;	 // "vrminw"
            }
            break;
          case 'p':	 // 2 strings to match.
            if (Name[4] != 'y')
              break;
            switch (Name[5]) {
            default: break;
            case 'b':	 // 1 string to match.
              return MCK_vrmpyb;	 // "vrmpyb"
            case 'h':	 // 1 string to match.
              return MCK_vrmpyh;	 // "vrmpyh"
            }
            break;
          }
          break;
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "dwh", 3) != 0)
            break;
          return MCK_vrndwh;	 // "vrndwh"
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "und", 3) != 0)
            break;
          return MCK_vround;	 // "vround"
        }
        break;
      case 's':	 // 9 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (Name[3] != 't')
            break;
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            if (Name[5] != 'b')
              break;
            return MCK_vsathb;	 // "vsathb"
          case 'w':	 // 1 string to match.
            if (Name[5] != 'h')
              break;
            return MCK_vsatwh;	 // "vsatwh"
          }
          break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "tq2", 3) != 0)
            break;
          return MCK_vsetq2;	 // "vsetq2"
        case 'h':	 // 1 string to match.
          if (memcmp(Name.data()+3, "uff", 3) != 0)
            break;
          return MCK_vshuff;	 // "vshuff"
        case 'p':	 // 1 string to match.
          if (memcmp(Name.data()+3, "lat", 3) != 0)
            break;
          return MCK_vsplat;	 // "vsplat"
        case 'u':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "bu", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vsubub;	 // "vsubub"
          case 'h':	 // 1 string to match.
            return MCK_vsubuh;	 // "vsubuh"
          }
          break;
        case 'x':	 // 2 strings to match.
          if (Name[3] != 't')
            break;
          switch (Name[4]) {
          default: break;
          case 'b':	 // 1 string to match.
            if (Name[5] != 'h')
              break;
            return MCK_vsxtbh;	 // "vsxtbh"
          case 'h':	 // 1 string to match.
            if (Name[5] != 'w')
              break;
            return MCK_vsxthw;	 // "vsxthw"
          }
          break;
        }
        break;
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mpyb", 4) != 0)
          break;
        return MCK_vtmpyb;	 // "vtmpyb"
      case 'z':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "xt", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (Name[5] != 'h')
            break;
          return MCK_vzxtbh;	 // "vzxtbh"
        case 'h':	 // 1 string to match.
          if (Name[5] != 'w')
            break;
          return MCK_vzxthw;	 // "vzxthw"
        }
        break;
      }
      break;
    }
    break;
  case 7:	 // 74 strings to match.
    switch (Name[0]) {
    default: break;
    case 'C':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ONST", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case '3':	 // 1 string to match.
        if (Name[6] != '2')
          break;
        return MCK_CONST32;	 // "CONST32"
      case '6':	 // 1 string to match.
        if (Name[6] != '4')
          break;
        return MCK_CONST64;	 // "CONST64"
      }
      break;
    case 'b':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rrier", 5) != 0)
          break;
        return MCK_barrier;	 // "barrier"
      case 'i':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "ts", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+5, "lr", 2) != 0)
            break;
          return MCK_bitsclr;	 // "bitsclr"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+5, "et", 2) != 0)
            break;
          return MCK_bitsset;	 // "bitsset"
        }
        break;
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'm':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "py", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+5, "wh", 2) != 0)
            break;
          return MCK_cmpyiwh;	 // "cmpyiwh"
        case 'r':	 // 1 string to match.
          if (memcmp(Name.data()+5, "wh", 2) != 0)
            break;
          return MCK_cmpyrwh;	 // "cmpyrwh"
        }
        break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mbine", 5) != 0)
          break;
        return MCK_combine;	 // "combine"
      }
      break;
    case 'd':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'f':	 // 1 string to match.
          if (memcmp(Name.data()+3, "etch", 4) != 0)
            break;
          return MCK_dcfetch;	 // "dcfetch"
        case 'z':	 // 1 string to match.
          if (memcmp(Name.data()+3, "eroa", 4) != 0)
            break;
          return MCK_dczeroa;	 // "dczeroa"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+2, "class", 5) != 0)
          break;
        return MCK_dfclass;	 // "dfclass"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "xtract", 6) != 0)
        break;
      return MCK_extract;	 // "extract"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "2fetch", 6) != 0)
        break;
      return MCK_l2fetch;	 // "l2fetch"
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "odwrap", 6) != 0)
        break;
      return MCK_modwrap;	 // "modwrap"
    case 'n':	 // 2 strings to match.
      if (Name[1] != 'o')
        break;
      switch (Name[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+3, "atch", 4) != 0)
          break;
        return MCK_nomatch;	 // "nomatch"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+3, "mamt", 4) != 0)
          break;
        return MCK_normamt;	 // "normamt"
      }
      break;
    case 's':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+2, "class", 5) != 0)
          break;
        return MCK_sfclass;	 // "sfclass"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "uff", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'e':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_shuffeb;	 // "shuffeb"
          case 'h':	 // 1 string to match.
            return MCK_shuffeh;	 // "shuffeh"
          }
          break;
        case 'o':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_shuffob;	 // "shuffob"
          case 'h':	 // 1 string to match.
            return MCK_shuffoh;	 // "shuffoh"
          }
          break;
        }
        break;
      }
      break;
    case 'v':	 // 53 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 4 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+3, "dhub", 4) != 0)
            break;
          return MCK_vaddhub;	 // "vaddhub"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ignb", 4) != 0)
            break;
          return MCK_valignb;	 // "valignb"
        case 's':	 // 2 strings to match.
          if (Name[3] != 'r')
            break;
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            if (memcmp(Name.data()+5, "ub", 2) != 0)
              break;
            return MCK_vasrhub;	 // "vasrhub"
          case 'w':	 // 1 string to match.
            if (memcmp(Name.data()+5, "uh", 2) != 0)
              break;
            return MCK_vasrwuh;	 // "vasrwuh"
          }
          break;
        }
        break;
      case 'd':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(Name.data()+3, "pyhb", 4) != 0)
            break;
          return MCK_vdmpyhb;	 // "vdmpyhb"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+3, "aduh", 4) != 0)
            break;
          return MCK_vdsaduh;	 // "vdsaduh"
        }
        break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "sert", 4) != 0)
            break;
          return MCK_vinsert;	 // "vinsert"
        case 't':	 // 1 string to match.
          if (memcmp(Name.data()+3, "pack", 4) != 0)
            break;
          return MCK_vitpack;	 // "vitpack"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "align", 5) != 0)
          break;
        return MCK_vlalign;	 // "vlalign"
      case 'm':	 // 13 strings to match.
        if (Name[2] != 'p')
          break;
        switch (Name[3]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (memcmp(Name.data()+4, "bu", 2) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case 's':	 // 1 string to match.
            return MCK_vmpabus;	 // "vmpabus"
          case 'u':	 // 1 string to match.
            return MCK_vmpabuu;	 // "vmpabuu"
          }
          break;
        case 'y':	 // 11 strings to match.
          switch (Name[4]) {
          default: break;
          case 'b':	 // 2 strings to match.
            switch (Name[5]) {
            default: break;
            case 's':	 // 1 string to match.
              if (Name[6] != 'u')
                break;
              return MCK_vmpybsu;	 // "vmpybsu"
            case 'u':	 // 1 string to match.
              if (Name[6] != 's')
                break;
              return MCK_vmpybus;	 // "vmpybus"
            }
            break;
          case 'h':	 // 2 strings to match.
            switch (Name[5]) {
            default: break;
            case 's':	 // 1 string to match.
              if (Name[6] != 'u')
                break;
              return MCK_vmpyhsu;	 // "vmpyhsu"
            case 'u':	 // 1 string to match.
              if (Name[6] != 's')
                break;
              return MCK_vmpyhus;	 // "vmpyhus"
            }
            break;
          case 'i':	 // 4 strings to match.
            switch (Name[5]) {
            default: break;
            case 'e':	 // 1 string to match.
              if (Name[6] != 'o')
                break;
              return MCK_vmpyieo;	 // "vmpyieo"
            case 'h':	 // 1 string to match.
              if (Name[6] != 'b')
                break;
              return MCK_vmpyihb;	 // "vmpyihb"
            case 'w':	 // 2 strings to match.
              switch (Name[6]) {
              default: break;
              case 'b':	 // 1 string to match.
                return MCK_vmpyiwb;	 // "vmpyiwb"
              case 'h':	 // 1 string to match.
                return MCK_vmpyiwh;	 // "vmpyiwh"
              }
              break;
            }
            break;
          case 'o':	 // 1 string to match.
            if (memcmp(Name.data()+5, "wh", 2) != 0)
              break;
            return MCK_vmpyowh;	 // "vmpyowh"
          case 'w':	 // 2 strings to match.
            switch (Name[5]) {
            default: break;
            case 'e':	 // 1 string to match.
              if (Name[6] != 'h')
                break;
              return MCK_vmpyweh;	 // "vmpyweh"
            case 'o':	 // 1 string to match.
              if (Name[6] != 'h')
                break;
              return MCK_vmpywoh;	 // "vmpywoh"
            }
            break;
          }
          break;
        }
        break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+2, "avgub", 5) != 0)
          break;
        return MCK_vnavgub;	 // "vnavgub"
      case 'p':	 // 6 strings to match.
        if (memcmp(Name.data()+2, "ack", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'e':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vpackeb;	 // "vpackeb"
          case 'h':	 // 1 string to match.
            return MCK_vpackeh;	 // "vpackeh"
          }
          break;
        case 'h':	 // 1 string to match.
          if (Name[6] != 'b')
            break;
          return MCK_vpackhb;	 // "vpackhb"
        case 'o':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vpackob;	 // "vpackob"
          case 'h':	 // 1 string to match.
            return MCK_vpackoh;	 // "vpackoh"
          }
          break;
        case 'w':	 // 1 string to match.
          if (Name[6] != 'h')
            break;
          return MCK_vpackwh;	 // "vpackwh"
        }
        break;
      case 'r':	 // 14 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "ddu", 3) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vraddub;	 // "vraddub"
          case 'h':	 // 1 string to match.
            return MCK_vradduh;	 // "vradduh"
          }
          break;
        case 'c':	 // 4 strings to match.
          switch (Name[3]) {
          default: break;
          case 'm':	 // 3 strings to match.
            if (memcmp(Name.data()+4, "py", 2) != 0)
              break;
            switch (Name[6]) {
            default: break;
            case 'i':	 // 1 string to match.
              return MCK_vrcmpyi;	 // "vrcmpyi"
            case 'r':	 // 1 string to match.
              return MCK_vrcmpyr;	 // "vrcmpyr"
            case 's':	 // 1 string to match.
              return MCK_vrcmpys;	 // "vrcmpys"
            }
            break;
          case 'n':	 // 1 string to match.
            if (memcmp(Name.data()+4, "egh", 3) != 0)
              break;
            return MCK_vrcnegh;	 // "vrcnegh"
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+3, "elta", 4) != 0)
            break;
          return MCK_vrdelta;	 // "vrdelta"
        case 'm':	 // 6 strings to match.
          switch (Name[3]) {
          default: break;
          case 'a':	 // 2 strings to match.
            if (memcmp(Name.data()+4, "xu", 2) != 0)
              break;
            switch (Name[6]) {
            default: break;
            case 'h':	 // 1 string to match.
              return MCK_vrmaxuh;	 // "vrmaxuh"
            case 'w':	 // 1 string to match.
              return MCK_vrmaxuw;	 // "vrmaxuw"
            }
            break;
          case 'i':	 // 2 strings to match.
            if (memcmp(Name.data()+4, "nu", 2) != 0)
              break;
            switch (Name[6]) {
            default: break;
            case 'h':	 // 1 string to match.
              return MCK_vrminuh;	 // "vrminuh"
            case 'w':	 // 1 string to match.
              return MCK_vrminuw;	 // "vrminuw"
            }
            break;
          case 'p':	 // 2 strings to match.
            if (Name[4] != 'y')
              break;
            switch (Name[5]) {
            default: break;
            case 'b':	 // 1 string to match.
              if (Name[6] != 'u')
                break;
              return MCK_vrmpybu;	 // "vrmpybu"
            case 'u':	 // 1 string to match.
              if (Name[6] != 'b')
                break;
              return MCK_vrmpyub;	 // "vrmpyub"
            }
            break;
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+3, "adub", 4) != 0)
            break;
          return MCK_vrsadub;	 // "vrsadub"
        }
        break;
      case 's':	 // 8 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (Name[3] != 't')
            break;
          switch (Name[4]) {
          default: break;
          case 'h':	 // 1 string to match.
            if (memcmp(Name.data()+5, "ub", 2) != 0)
              break;
            return MCK_vsathub;	 // "vsathub"
          case 'w':	 // 1 string to match.
            if (memcmp(Name.data()+5, "uh", 2) != 0)
              break;
            return MCK_vsatwuh;	 // "vsatwuh"
          }
          break;
        case 'h':	 // 4 strings to match.
          if (memcmp(Name.data()+3, "uff", 3) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vshuffb;	 // "vshuffb"
          case 'e':	 // 1 string to match.
            return MCK_vshuffe;	 // "vshuffe"
          case 'h':	 // 1 string to match.
            return MCK_vshuffh;	 // "vshuffh"
          case 'o':	 // 1 string to match.
            return MCK_vshuffo;	 // "vshuffo"
          }
          break;
        case 'p':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "lat", 3) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vsplatb;	 // "vsplatb"
          case 'h':	 // 1 string to match.
            return MCK_vsplath;	 // "vsplath"
          }
          break;
        }
        break;
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mpyhb", 5) != 0)
          break;
        return MCK_vtmpyhb;	 // "vtmpyhb"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "npack", 5) != 0)
          break;
        return MCK_vunpack;	 // "vunpack"
      }
      break;
    }
    break;
  case 8:	 // 50 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itsplit", 7) != 0)
        break;
      return MCK_bitsplit;	 // "bitsplit"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ccleana", 7) != 0)
        break;
      return MCK_dccleana;	 // "dccleana"
    case 'e':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'n':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "dloop", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case '0':	 // 1 string to match.
          return MCK_endloop0;	 // "endloop0"
        case '1':	 // 1 string to match.
          return MCK_endloop1;	 // "endloop1"
        }
        break;
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tractu", 6) != 0)
          break;
        return MCK_extractu;	 // "extractu"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "opcount", 7) != 0)
        break;
      return MCK_popcount;	 // "popcount"
    case 's':	 // 7 strings to match.
      switch (Name[1]) {
      default: break;
      case 'f':	 // 4 strings to match.
        switch (Name[2]) {
        default: break;
        case 'f':	 // 3 strings to match.
          if (memcmp(Name.data()+3, "ixup", 4) != 0)
            break;
          switch (Name[7]) {
          default: break;
          case 'd':	 // 1 string to match.
            return MCK_sffixupd;	 // "sffixupd"
          case 'n':	 // 1 string to match.
            return MCK_sffixupn;	 // "sffixupn"
          case 'r':	 // 1 string to match.
            return MCK_sffixupr;	 // "sffixupr"
          }
          break;
        case 'r':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ecipa", 5) != 0)
            break;
          return MCK_sfrecipa;	 // "sfrecipa"
        }
        break;
      case 'p':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '1':	 // 1 string to match.
          if (memcmp(Name.data()+3, "loop0", 5) != 0)
            break;
          return MCK_sp1loop0;	 // "sp1loop0"
        case '2':	 // 1 string to match.
          if (memcmp(Name.data()+3, "loop0", 5) != 0)
            break;
          return MCK_sp2loop0;	 // "sp2loop0"
        case '3':	 // 1 string to match.
          if (memcmp(Name.data()+3, "loop0", 5) != 0)
            break;
          return MCK_sp3loop0;	 // "sp3loop0"
        }
        break;
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "lbmatch", 7) != 0)
        break;
      return MCK_tlbmatch;	 // "tlbmatch"
    case 'v':	 // 36 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "bsdiff", 6) != 0)
          break;
        return MCK_vabsdiff;	 // "vabsdiff"
      case 'c':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mbine", 5) != 0)
            break;
          return MCK_vcombine;	 // "vcombine"
        case 'r':	 // 1 string to match.
          if (memcmp(Name.data()+3, "otate", 5) != 0)
            break;
          return MCK_vcrotate;	 // "vcrotate"
        }
        break;
      case 'd':	 // 4 strings to match.
        switch (Name[2]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "alb4w", 5) != 0)
            break;
          return MCK_vdealb4w;	 // "vdealb4w"
        case 'm':	 // 3 strings to match.
          if (memcmp(Name.data()+3, "py", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'b':	 // 2 strings to match.
            switch (Name[6]) {
            default: break;
            case 's':	 // 1 string to match.
              if (Name[7] != 'u')
                break;
              return MCK_vdmpybsu;	 // "vdmpybsu"
            case 'u':	 // 1 string to match.
              if (Name[7] != 's')
                break;
              return MCK_vdmpybus;	 // "vdmpybus"
            }
            break;
          case 'h':	 // 1 string to match.
            if (memcmp(Name.data()+6, "su", 2) != 0)
              break;
            return MCK_vdmpyhsu;	 // "vdmpyhsu"
          }
          break;
        }
        break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "xtract", 6) != 0)
          break;
        return MCK_vextract;	 // "vextract"
      case 'm':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "py", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+5, "wuh", 3) != 0)
            break;
          return MCK_vmpyewuh;	 // "vmpyewuh"
        case 'i':	 // 2 strings to match.
          switch (Name[5]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+6, "wh", 2) != 0)
              break;
            return MCK_vmpyiewh;	 // "vmpyiewh"
          case 'o':	 // 1 string to match.
            if (memcmp(Name.data()+6, "wh", 2) != 0)
              break;
            return MCK_vmpyiowh;	 // "vmpyiowh"
          }
          break;
        case 'w':	 // 2 strings to match.
          switch (Name[5]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+6, "uh", 2) != 0)
              break;
            return MCK_vmpyweuh;	 // "vmpyweuh"
          case 'o':	 // 1 string to match.
            if (memcmp(Name.data()+6, "uh", 2) != 0)
              break;
            return MCK_vmpywouh;	 // "vmpywouh"
          }
          break;
        }
        break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ormamt", 6) != 0)
          break;
        return MCK_vnormamt;	 // "vnormamt"
      case 'p':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "ack", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'h':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ub", 2) != 0)
            break;
          return MCK_vpackhub;	 // "vpackhub"
        case 'w':	 // 1 string to match.
          if (memcmp(Name.data()+6, "uh", 2) != 0)
            break;
          return MCK_vpackwuh;	 // "vpackwuh"
        }
        break;
      case 'r':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case 'm':	 // 4 strings to match.
          if (memcmp(Name.data()+3, "py", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'b':	 // 2 strings to match.
            switch (Name[6]) {
            default: break;
            case 's':	 // 1 string to match.
              if (Name[7] != 'u')
                break;
              return MCK_vrmpybsu;	 // "vrmpybsu"
            case 'u':	 // 1 string to match.
              if (Name[7] != 's')
                break;
              return MCK_vrmpybus;	 // "vrmpybus"
            }
            break;
          case 'w':	 // 2 strings to match.
            switch (Name[6]) {
            default: break;
            case 'e':	 // 1 string to match.
              if (Name[7] != 'h')
                break;
              return MCK_vrmpyweh;	 // "vrmpyweh"
            case 'o':	 // 1 string to match.
              if (Name[7] != 'h')
                break;
              return MCK_vrmpywoh;	 // "vrmpywoh"
            }
            break;
          }
          break;
        case 'o':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "und", 3) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case 'h':	 // 1 string to match.
            if (Name[7] != 'b')
              break;
            return MCK_vroundhb;	 // "vroundhb"
          case 'w':	 // 1 string to match.
            if (Name[7] != 'h')
              break;
            return MCK_vroundwh;	 // "vroundwh"
          }
          break;
        }
        break;
      case 's':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case 'h':	 // 5 strings to match.
          if (memcmp(Name.data()+3, "uff", 3) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case 'e':	 // 2 strings to match.
            switch (Name[7]) {
            default: break;
            case 'b':	 // 1 string to match.
              return MCK_vshuffeb;	 // "vshuffeb"
            case 'h':	 // 1 string to match.
              return MCK_vshuffeh;	 // "vshuffeh"
            }
            break;
          case 'o':	 // 3 strings to match.
            switch (Name[7]) {
            default: break;
            case 'b':	 // 1 string to match.
              return MCK_vshuffob;	 // "vshuffob"
            case 'e':	 // 1 string to match.
              return MCK_vshuffoe;	 // "vshuffoe"
            case 'h':	 // 1 string to match.
              return MCK_vshuffoh;	 // "vshuffoh"
            }
            break;
          }
          break;
        case 'p':	 // 1 string to match.
          if (memcmp(Name.data()+3, "liceb", 5) != 0)
            break;
          return MCK_vspliceb;	 // "vspliceb"
        }
        break;
      case 't':	 // 5 strings to match.
        switch (Name[2]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(Name.data()+3, "pybus", 5) != 0)
            break;
          return MCK_vtmpybus;	 // "vtmpybus"
        case 'r':	 // 4 strings to match.
          if (memcmp(Name.data()+3, "un", 2) != 0)
            break;
          switch (Name[5]) {
          default: break;
          case 'e':	 // 2 strings to match.
            switch (Name[6]) {
            default: break;
            case 'h':	 // 1 string to match.
              if (Name[7] != 'b')
                break;
              return MCK_vtrunehb;	 // "vtrunehb"
            case 'w':	 // 1 string to match.
              if (Name[7] != 'h')
                break;
              return MCK_vtrunewh;	 // "vtrunewh"
            }
            break;
          case 'o':	 // 2 strings to match.
            switch (Name[6]) {
            default: break;
            case 'h':	 // 1 string to match.
              if (Name[7] != 'b')
                break;
              return MCK_vtrunohb;	 // "vtrunohb"
            case 'w':	 // 1 string to match.
              if (Name[7] != 'h')
                break;
              return MCK_vtrunowh;	 // "vtrunowh"
            }
            break;
          }
          break;
        }
        break;
      case 'u':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "npack", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_vunpackb;	 // "vunpackb"
        case 'h':	 // 1 string to match.
          return MCK_vunpackh;	 // "vunpackh"
        case 'o':	 // 1 string to match.
          return MCK_vunpacko;	 // "vunpacko"
        }
        break;
      }
      break;
    }
    break;
  case 9:	 // 31 strings to match.
    switch (Name[0]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ndloop01", 8) != 0)
        break;
      return MCK_endloop01;	 // "endloop01"
    case 'm':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "em", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+4, "_fifo", 5) != 0)
          break;
        return MCK_memb_95_fifo;	 // "memb_fifo"
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+4, "_fifo", 5) != 0)
          break;
        return MCK_memh_95_fifo;	 // "memh_fifo"
      }
      break;
    case 't':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "bleidx", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_tableidxb;	 // "tableidxb"
        case 'd':	 // 1 string to match.
          return MCK_tableidxd;	 // "tableidxd"
        case 'h':	 // 1 string to match.
          return MCK_tableidxh;	 // "tableidxh"
        case 'w':	 // 1 string to match.
          return MCK_tableidxw;	 // "tableidxw"
        }
        break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "gglebit", 7) != 0)
          break;
        return MCK_togglebit;	 // "togglebit"
      }
      break;
    case 'v':	 // 23 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "bsdiff", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_vabsdiffb;	 // "vabsdiffb"
        case 'h':	 // 1 string to match.
          return MCK_vabsdiffh;	 // "vabsdiffh"
        case 'w':	 // 1 string to match.
          return MCK_vabsdiffw;	 // "vabsdiffw"
        }
        break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+2, "pyiewuh", 7) != 0)
          break;
        return MCK_vmpyiewuh;	 // "vmpyiewuh"
      case 'n':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "ormamt", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'h':	 // 1 string to match.
          return MCK_vnormamth;	 // "vnormamth"
        case 'w':	 // 1 string to match.
          return MCK_vnormamtw;	 // "vnormamtw"
        }
        break;
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+2, "opcount", 7) != 0)
          break;
        return MCK_vpopcount;	 // "vpopcount"
      case 'r':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+3, "rotate", 6) != 0)
            break;
          return MCK_vrcrotate;	 // "vrcrotate"
        case 'o':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "und", 3) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case 'h':	 // 1 string to match.
            if (memcmp(Name.data()+7, "ub", 2) != 0)
              break;
            return MCK_vroundhub;	 // "vroundhub"
          case 'w':	 // 1 string to match.
            if (memcmp(Name.data()+7, "uh", 2) != 0)
              break;
            return MCK_vroundwuh;	 // "vroundwuh"
          }
          break;
        }
        break;
      case 's':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "huffoe", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_vshuffoeb;	 // "vshuffoeb"
        case 'h':	 // 1 string to match.
          return MCK_vshuffoeh;	 // "vshuffoeh"
        }
        break;
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rans2x2", 7) != 0)
          break;
        return MCK_vtrans2x2;	 // "vtrans2x2"
      case 'u':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "npack", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'o':	 // 2 strings to match.
          switch (Name[8]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vunpackob;	 // "vunpackob"
          case 'h':	 // 1 string to match.
            return MCK_vunpackoh;	 // "vunpackoh"
          }
          break;
        case 'u':	 // 2 strings to match.
          switch (Name[8]) {
          default: break;
          case 'b':	 // 1 string to match.
            return MCK_vunpackub;	 // "vunpackub"
          case 'h':	 // 1 string to match.
            return MCK_vunpackuh;	 // "vunpackuh"
          }
          break;
        }
        break;
      case 'w':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "hist", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '1':	 // 1 string to match.
          if (memcmp(Name.data()+7, "28", 2) != 0)
            break;
          return MCK_vwhist128;	 // "vwhist128"
        case '2':	 // 1 string to match.
          if (memcmp(Name.data()+7, "56", 2) != 0)
            break;
          return MCK_vwhist256;	 // "vwhist256"
        }
        break;
      case 'x':	 // 4 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "ddsub", 5) != 0)
            break;
          switch (Name[8]) {
          default: break;
          case 'h':	 // 1 string to match.
            return MCK_vxaddsubh;	 // "vxaddsubh"
          case 'w':	 // 1 string to match.
            return MCK_vxaddsubw;	 // "vxaddsubw"
          }
          break;
        case 's':	 // 2 strings to match.
          if (memcmp(Name.data()+3, "ubadd", 5) != 0)
            break;
          switch (Name[8]) {
          default: break;
          case 'h':	 // 1 string to match.
            return MCK_vxsubaddh;	 // "vxsubaddh"
          case 'w':	 // 1 string to match.
            return MCK_vxsubaddw;	 // "vxsubaddw"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 10:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "llocframe", 9) != 0)
        break;
      return MCK_allocframe;	 // "allocframe"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "eprecated", 9) != 0)
        break;
      return MCK_deprecated;	 // "deprecated"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "nterleave", 9) != 0)
        break;
      return MCK_interleave;	 // "interleave"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "finvsqrta", 9) != 0)
        break;
      return MCK_sfinvsqrta;	 // "sfinvsqrta"
    case 'v':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "bsdiffu", 7) != 0)
          break;
        switch (Name[9]) {
        default: break;
        case 'b':	 // 1 string to match.
          return MCK_vabsdiffub;	 // "vabsdiffub"
        case 'h':	 // 1 string to match.
          return MCK_vabsdiffuh;	 // "vabsdiffuh"
        }
        break;
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+2, "opcounth", 8) != 0)
          break;
        return MCK_vpopcounth;	 // "vpopcounth"
      }
      break;
    }
    break;
  case 11:	 // 5 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "oundscheck", 10) != 0)
        break;
      return MCK_boundscheck;	 // "boundscheck"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ccleaninva", 10) != 0)
        break;
      return MCK_dccleaninva;	 // "dccleaninva"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "astcorner9", 10) != 0)
        break;
      return MCK_fastcorner9;	 // "fastcorner9"
    case 'm':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "em", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+4, "_locked", 7) != 0)
          break;
        return MCK_memd_95_locked;	 // "memd_locked"
      case 'w':	 // 1 string to match.
        if (memcmp(Name.data()+4, "_locked", 7) != 0)
          break;
        return MCK_memw_95_locked;	 // "memw_locked"
      }
      break;
    }
    break;
  case 12:	 // 10 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        switch (Name[9]) {
        default: break;
        case '2':	 // 2 strings to match.
          switch (Name[10]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[11] != 'f')
              break;
            return MCK_convert_95_d2df;	 // "convert_d2df"
          case 's':	 // 1 string to match.
            if (Name[11] != 'f')
              break;
            return MCK_convert_95_d2sf;	 // "convert_d2sf"
          }
          break;
        case 'f':	 // 2 strings to match.
          if (Name[10] != '2')
            break;
          switch (Name[11]) {
          default: break;
          case 'd':	 // 1 string to match.
            return MCK_convert_95_df2d;	 // "convert_df2d"
          case 'w':	 // 1 string to match.
            return MCK_convert_95_df2w;	 // "convert_df2w"
          }
          break;
        }
        break;
      case 's':	 // 2 strings to match.
        if (memcmp(Name.data()+9, "f2", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case 'd':	 // 1 string to match.
          return MCK_convert_95_sf2d;	 // "convert_sf2d"
        case 'w':	 // 1 string to match.
          return MCK_convert_95_sf2w;	 // "convert_sf2w"
        }
        break;
      case 'w':	 // 2 strings to match.
        if (Name[9] != '2')
          break;
        switch (Name[10]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[11] != 'f')
            break;
          return MCK_convert_95_w2df;	 // "convert_w2df"
        case 's':	 // 1 string to match.
          if (Name[11] != 'f')
            break;
          return MCK_convert_95_w2sf;	 // "convert_w2sf"
        }
        break;
      }
      break;
    case 'd':	 // 2 strings to match.
      if (Name[1] != 'e')
        break;
      switch (Name[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+3, "llocframe", 9) != 0)
          break;
        return MCK_deallocframe;	 // "deallocframe"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+3, "nterleave", 9) != 0)
          break;
        return MCK_deinterleave;	 // "deinterleave"
      }
      break;
    }
    break;
  case 13:	 // 10 strings to match.
    if (memcmp(Name.data()+0, "convert_", 8) != 0)
      break;
    switch (Name[8]) {
    default: break;
    case 'd':	 // 3 strings to match.
      if (memcmp(Name.data()+9, "f2", 2) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 's':	 // 1 string to match.
        if (Name[12] != 'f')
          break;
        return MCK_convert_95_df2sf;	 // "convert_df2sf"
      case 'u':	 // 2 strings to match.
        switch (Name[12]) {
        default: break;
        case 'd':	 // 1 string to match.
          return MCK_convert_95_df2ud;	 // "convert_df2ud"
        case 'w':	 // 1 string to match.
          return MCK_convert_95_df2uw;	 // "convert_df2uw"
        }
        break;
      }
      break;
    case 's':	 // 3 strings to match.
      if (memcmp(Name.data()+9, "f2", 2) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (Name[12] != 'f')
          break;
        return MCK_convert_95_sf2df;	 // "convert_sf2df"
      case 'u':	 // 2 strings to match.
        switch (Name[12]) {
        default: break;
        case 'd':	 // 1 string to match.
          return MCK_convert_95_sf2ud;	 // "convert_sf2ud"
        case 'w':	 // 1 string to match.
          return MCK_convert_95_sf2uw;	 // "convert_sf2uw"
        }
        break;
      }
      break;
    case 'u':	 // 4 strings to match.
      switch (Name[9]) {
      default: break;
      case 'd':	 // 2 strings to match.
        if (Name[10] != '2')
          break;
        switch (Name[11]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[12] != 'f')
            break;
          return MCK_convert_95_ud2df;	 // "convert_ud2df"
        case 's':	 // 1 string to match.
          if (Name[12] != 'f')
            break;
          return MCK_convert_95_ud2sf;	 // "convert_ud2sf"
        }
        break;
      case 'w':	 // 2 strings to match.
        if (Name[10] != '2')
          break;
        switch (Name[11]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[12] != 'f')
            break;
          return MCK_convert_95_uw2df;	 // "convert_uw2df"
        case 's':	 // 1 string to match.
          if (Name[12] != 'f')
            break;
          return MCK_convert_95_uw2sf;	 // "convert_uw2sf"
        }
        break;
      }
      break;
    }
    break;
  case 14:	 // 1 string to match.
    if (memcmp(Name.data()+0, "dealloc_return", 14) != 0)
      break;
    return MCK_dealloc_95_return;	 // "dealloc_return"
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

  case MCK_Reg13:
    return B == MCK_CtrRegs;

  case MCK_GP:
    return B == MCK_CtrRegs;

  case MCK_P0:
    return B == MCK_PredRegs;

  case MCK_P1:
    return B == MCK_PredRegs;

  case MCK_P3:
    return B == MCK_PredRegs;

  case MCK_PC:
    return B == MCK_CtrRegs;

  case MCK_ModRegs:
    return B == MCK_CtrRegs;

  case MCK_Reg19:
    switch (B) {
    default: return false;
    case MCK_V62Regs: return true;
    case MCK_CtrRegs64: return true;
    }

  case MCK_Reg3:
    switch (B) {
    default: return false;
    case MCK_GeneralDoubleLow8Regs: return true;
    case MCK_DoubleRegs: return true;
    }

  case MCK_Reg16:
    switch (B) {
    default: return false;
    case MCK_V62Regs: return true;
    case MCK_CtrRegs: return true;
    }

  case MCK_GeneralDoubleLow8Regs:
    return B == MCK_DoubleRegs;

  case MCK_IntRegsLow8:
    switch (B) {
    default: return false;
    case MCK_GeneralSubRegs: return true;
    case MCK_IntRegs: return true;
    }

  case MCK_GeneralSubRegs:
    return B == MCK_IntRegs;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  HexagonOperand &Operand = (HexagonOperand&)GOp;
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
  // 'a30_2Imm' class
  case MCK_a30_2Imm:
    if (Operand.isa30_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'b13_2Imm' class
  case MCK_b13_2Imm:
    if (Operand.isb13_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'b15_2Imm' class
  case MCK_b15_2Imm:
    if (Operand.isb15_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'b30_2Imm' class
  case MCK_b30_2Imm:
    if (Operand.isb30_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'f32Imm' class
  case MCK_f32Imm:
    if (Operand.isf32Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'f64Imm' class
  case MCK_f64Imm:
    if (Operand.isf64Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'm32_0Imm' class
  case MCK_m32_0Imm:
    if (Operand.ism32_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'n1Const' class
  case MCK_n1Const:
    if (Operand.isn1Const())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's10_0Imm' class
  case MCK_s10_0Imm:
    if (Operand.iss10_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's10_6Imm' class
  case MCK_s10_6Imm:
    if (Operand.iss10_6Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's23_2Imm' class
  case MCK_s23_2Imm:
    if (Operand.iss23_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's29_3Imm' class
  case MCK_s29_3Imm:
    if (Operand.iss29_3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's30_2Imm' class
  case MCK_s30_2Imm:
    if (Operand.iss30_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's31_1Imm' class
  case MCK_s31_1Imm:
    if (Operand.iss31_1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's32_0Imm' class
  case MCK_s32_0Imm:
    if (Operand.iss32_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's3_0Imm' class
  case MCK_s3_0Imm:
    if (Operand.iss3_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's4_0Imm' class
  case MCK_s4_0Imm:
    if (Operand.iss4_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's4_1Imm' class
  case MCK_s4_1Imm:
    if (Operand.iss4_1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's4_2Imm' class
  case MCK_s4_2Imm:
    if (Operand.iss4_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's4_3Imm' class
  case MCK_s4_3Imm:
    if (Operand.iss4_3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's6_0Imm' class
  case MCK_s6_0Imm:
    if (Operand.iss6_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's6_3Imm' class
  case MCK_s6_3Imm:
    if (Operand.iss6_3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's8_0Imm' class
  case MCK_s8_0Imm:
    if (Operand.iss8_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 's9_0Imm' class
  case MCK_s9_0Imm:
    if (Operand.iss9_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u10_0Imm' class
  case MCK_u10_0Imm:
    if (Operand.isu10_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u11_3Imm' class
  case MCK_u11_3Imm:
    if (Operand.isu11_3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u16_0Imm' class
  case MCK_u16_0Imm:
    if (Operand.isu16_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u1_0Imm' class
  case MCK_u1_0Imm:
    if (Operand.isu1_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u26_6Imm' class
  case MCK_u26_6Imm:
    if (Operand.isu26_6Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u29_3Imm' class
  case MCK_u29_3Imm:
    if (Operand.isu29_3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u2_0Imm' class
  case MCK_u2_0Imm:
    if (Operand.isu2_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u30_2Imm' class
  case MCK_u30_2Imm:
    if (Operand.isu30_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u31_1Imm' class
  case MCK_u31_1Imm:
    if (Operand.isu31_1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u32_0Imm' class
  case MCK_u32_0Imm:
    if (Operand.isu32_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u3_0Imm' class
  case MCK_u3_0Imm:
    if (Operand.isu3_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u3_1Imm' class
  case MCK_u3_1Imm:
    if (Operand.isu3_1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u4_0Imm' class
  case MCK_u4_0Imm:
    if (Operand.isu4_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u4_2Imm' class
  case MCK_u4_2Imm:
    if (Operand.isu4_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u5_0Imm' class
  case MCK_u5_0Imm:
    if (Operand.isu5_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u5_2Imm' class
  case MCK_u5_2Imm:
    if (Operand.isu5_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u5_3Imm' class
  case MCK_u5_3Imm:
    if (Operand.isu5_3Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u64_0Imm' class
  case MCK_u64_0Imm:
    if (Operand.isu64_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u6_0Imm' class
  case MCK_u6_0Imm:
    if (Operand.isu6_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u6_1Imm' class
  case MCK_u6_1Imm:
    if (Operand.isu6_1Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u6_2Imm' class
  case MCK_u6_2Imm:
    if (Operand.isu6_2Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u7_0Imm' class
  case MCK_u7_0Imm:
    if (Operand.isu7_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  // 'u8_0Imm' class
  case MCK_u8_0Imm:
    if (Operand.isu8_0Imm())
      return MCTargetAsmParser::Match_Success;
    break;
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Hexagon::R0: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R1: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R2: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R3: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R4: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R5: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R6: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R7: OpKind = MCK_IntRegsLow8; break;
    case Hexagon::R8: OpKind = MCK_IntRegs; break;
    case Hexagon::R9: OpKind = MCK_IntRegs; break;
    case Hexagon::R10: OpKind = MCK_IntRegs; break;
    case Hexagon::R11: OpKind = MCK_IntRegs; break;
    case Hexagon::R12: OpKind = MCK_IntRegs; break;
    case Hexagon::R13: OpKind = MCK_IntRegs; break;
    case Hexagon::R14: OpKind = MCK_IntRegs; break;
    case Hexagon::R15: OpKind = MCK_IntRegs; break;
    case Hexagon::R16: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R17: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R18: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R19: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R20: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R21: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R22: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R23: OpKind = MCK_GeneralSubRegs; break;
    case Hexagon::R24: OpKind = MCK_IntRegs; break;
    case Hexagon::R25: OpKind = MCK_IntRegs; break;
    case Hexagon::R26: OpKind = MCK_IntRegs; break;
    case Hexagon::R27: OpKind = MCK_IntRegs; break;
    case Hexagon::R28: OpKind = MCK_IntRegs; break;
    case Hexagon::R29: OpKind = MCK_IntRegs; break;
    case Hexagon::R30: OpKind = MCK_IntRegs; break;
    case Hexagon::R31: OpKind = MCK_IntRegs; break;
    case Hexagon::D0: OpKind = MCK_Reg3; break;
    case Hexagon::D1: OpKind = MCK_Reg3; break;
    case Hexagon::D2: OpKind = MCK_Reg3; break;
    case Hexagon::D3: OpKind = MCK_Reg3; break;
    case Hexagon::D4: OpKind = MCK_DoubleRegs; break;
    case Hexagon::D5: OpKind = MCK_DoubleRegs; break;
    case Hexagon::D6: OpKind = MCK_DoubleRegs; break;
    case Hexagon::D7: OpKind = MCK_DoubleRegs; break;
    case Hexagon::D8: OpKind = MCK_GeneralDoubleLow8Regs; break;
    case Hexagon::D9: OpKind = MCK_GeneralDoubleLow8Regs; break;
    case Hexagon::D10: OpKind = MCK_GeneralDoubleLow8Regs; break;
    case Hexagon::D11: OpKind = MCK_GeneralDoubleLow8Regs; break;
    case Hexagon::D12: OpKind = MCK_DoubleRegs; break;
    case Hexagon::D13: OpKind = MCK_DoubleRegs; break;
    case Hexagon::D14: OpKind = MCK_DoubleRegs; break;
    case Hexagon::D15: OpKind = MCK_DoubleRegs; break;
    case Hexagon::P0: OpKind = MCK_P0; break;
    case Hexagon::P1: OpKind = MCK_P1; break;
    case Hexagon::P2: OpKind = MCK_PredRegs; break;
    case Hexagon::P3: OpKind = MCK_P3; break;
    case Hexagon::M0: OpKind = MCK_ModRegs; break;
    case Hexagon::M1: OpKind = MCK_ModRegs; break;
    case Hexagon::USR_OVF: OpKind = MCK_UsrBits; break;
    case Hexagon::USR: OpKind = MCK_Reg13; break;
    case Hexagon::SA0: OpKind = MCK_CtrRegs; break;
    case Hexagon::LC0: OpKind = MCK_CtrRegs; break;
    case Hexagon::SA1: OpKind = MCK_CtrRegs; break;
    case Hexagon::LC1: OpKind = MCK_CtrRegs; break;
    case Hexagon::P3_0: OpKind = MCK_CtrRegs; break;
    case Hexagon::C5: OpKind = MCK_CtrRegs; break;
    case Hexagon::C6: OpKind = MCK_CtrRegs; break;
    case Hexagon::C7: OpKind = MCK_CtrRegs; break;
    case Hexagon::C8: OpKind = MCK_CtrRegs; break;
    case Hexagon::PC: OpKind = MCK_PC; break;
    case Hexagon::UGP: OpKind = MCK_CtrRegs; break;
    case Hexagon::GP: OpKind = MCK_GP; break;
    case Hexagon::CS0: OpKind = MCK_CtrRegs; break;
    case Hexagon::CS1: OpKind = MCK_CtrRegs; break;
    case Hexagon::UPCYCLELO: OpKind = MCK_CtrRegs; break;
    case Hexagon::UPCYCLEHI: OpKind = MCK_CtrRegs; break;
    case Hexagon::FRAMELIMIT: OpKind = MCK_Reg16; break;
    case Hexagon::FRAMEKEY: OpKind = MCK_Reg16; break;
    case Hexagon::PKTCOUNTLO: OpKind = MCK_Reg16; break;
    case Hexagon::PKTCOUNTHI: OpKind = MCK_Reg16; break;
    case Hexagon::UTIMERLO: OpKind = MCK_Reg16; break;
    case Hexagon::UTIMERHI: OpKind = MCK_Reg16; break;
    case Hexagon::C1_0: OpKind = MCK_CtrRegs64; break;
    case Hexagon::C3_2: OpKind = MCK_CtrRegs64; break;
    case Hexagon::C5_4: OpKind = MCK_CtrRegs64; break;
    case Hexagon::C7_6: OpKind = MCK_CtrRegs64; break;
    case Hexagon::C9_8: OpKind = MCK_CtrRegs64; break;
    case Hexagon::C11_10: OpKind = MCK_CtrRegs64; break;
    case Hexagon::CS: OpKind = MCK_CtrRegs64; break;
    case Hexagon::UPCYCLE: OpKind = MCK_CtrRegs64; break;
    case Hexagon::C17_16: OpKind = MCK_Reg19; break;
    case Hexagon::PKTCOUNT: OpKind = MCK_Reg19; break;
    case Hexagon::UTIMER: OpKind = MCK_Reg19; break;
    case Hexagon::V0: OpKind = MCK_VectorRegs; break;
    case Hexagon::V1: OpKind = MCK_VectorRegs; break;
    case Hexagon::V2: OpKind = MCK_VectorRegs; break;
    case Hexagon::V3: OpKind = MCK_VectorRegs; break;
    case Hexagon::V4: OpKind = MCK_VectorRegs; break;
    case Hexagon::V5: OpKind = MCK_VectorRegs; break;
    case Hexagon::V6: OpKind = MCK_VectorRegs; break;
    case Hexagon::V7: OpKind = MCK_VectorRegs; break;
    case Hexagon::V8: OpKind = MCK_VectorRegs; break;
    case Hexagon::V9: OpKind = MCK_VectorRegs; break;
    case Hexagon::V10: OpKind = MCK_VectorRegs; break;
    case Hexagon::V11: OpKind = MCK_VectorRegs; break;
    case Hexagon::V12: OpKind = MCK_VectorRegs; break;
    case Hexagon::V13: OpKind = MCK_VectorRegs; break;
    case Hexagon::V14: OpKind = MCK_VectorRegs; break;
    case Hexagon::V15: OpKind = MCK_VectorRegs; break;
    case Hexagon::V16: OpKind = MCK_VectorRegs; break;
    case Hexagon::V17: OpKind = MCK_VectorRegs; break;
    case Hexagon::V18: OpKind = MCK_VectorRegs; break;
    case Hexagon::V19: OpKind = MCK_VectorRegs; break;
    case Hexagon::V20: OpKind = MCK_VectorRegs; break;
    case Hexagon::V21: OpKind = MCK_VectorRegs; break;
    case Hexagon::V22: OpKind = MCK_VectorRegs; break;
    case Hexagon::V23: OpKind = MCK_VectorRegs; break;
    case Hexagon::V24: OpKind = MCK_VectorRegs; break;
    case Hexagon::V25: OpKind = MCK_VectorRegs; break;
    case Hexagon::V26: OpKind = MCK_VectorRegs; break;
    case Hexagon::V27: OpKind = MCK_VectorRegs; break;
    case Hexagon::V28: OpKind = MCK_VectorRegs; break;
    case Hexagon::V29: OpKind = MCK_VectorRegs; break;
    case Hexagon::V30: OpKind = MCK_VectorRegs; break;
    case Hexagon::V31: OpKind = MCK_VectorRegs; break;
    case Hexagon::W0: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W1: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W2: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W3: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W4: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W5: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W6: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W7: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W8: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W9: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W10: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W11: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W12: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W13: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W14: OpKind = MCK_VecDblRegs; break;
    case Hexagon::W15: OpKind = MCK_VecDblRegs; break;
    case Hexagon::Q0: OpKind = MCK_VecPredRegs; break;
    case Hexagon::Q1: OpKind = MCK_VecPredRegs; break;
    case Hexagon::Q2: OpKind = MCK_VecPredRegs; break;
    case Hexagon::Q3: OpKind = MCK_VecPredRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t HexagonAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[Hexagon::ArchV62]))
    Features |= Feature_HasV62T;
  if ((FB[Hexagon::ArchV60]))
    Features |= Feature_HasV60T;
  if ((FB[Hexagon::ArchV55]))
    Features |= Feature_HasV55T;
  if ((FB[Hexagon::ArchV4]))
    Features |= Feature_HasV4T;
  if ((FB[Hexagon::ArchV5]))
    Features |= Feature_HasV5T;
  if ((FB[Hexagon::ExtensionHVXDbl]))
    Features |= Feature_UseHVXDbl;
  if ((FB[Hexagon::ExtensionHVX]))
    Features |= Feature_UseHVX;
  return Features;
}

static const char *const MnemonicTable =
    "\000\006DUPLEX\nallocframe\007barrier\005brkpt\004call\005callr\010dccl"
    "eana\013dccleaninva\007dcfetch\006dcinva\007dczeroa\016dealloc_return\014"
    "deallocframe\010endloop0\tendloop01\010endloop1\006hintjr\006icinva\002"
    "if\006immext\005isync\004jump\005jumpr\007l2fetch\005loop0\005loop1\004"
    "memb\004memd\013memd_locked\004memh\004memw\013memw_locked\003nop\002p0"
    "\002p1\002p3\005pause\006syncht\005trace\005trap0\005vdeal\005vhist\004"
    "vmem\005vmemu\006vshuff\tvtrans2x2\tvwhist128\tvwhist256";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint16_t Classes[24];
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
  { 0 /*  */, Hexagon::C2_or, Convert__Reg1_0__Reg1_2__Reg1_2, 0, { MCK_PredRegs, MCK__61_, MCK_PredRegs }, },
  { 0 /*  */, Hexagon::C2_tfrrp, Convert__Reg1_0__Reg1_2, 0, { MCK_PredRegs, MCK__61_, MCK_IntRegs }, },
  { 0 /*  */, Hexagon::A4_tfrpcp, Convert__Reg1_0__Reg1_2, 0, { MCK_CtrRegs64, MCK__61_, MCK_DoubleRegs }, },
  { 0 /*  */, Hexagon::A4_tfrcpp, Convert__Reg1_0__Reg1_2, 0, { MCK_DoubleRegs, MCK__61_, MCK_CtrRegs64 }, },
  { 0 /*  */, Hexagon::A2_tfrp, Convert__Reg1_0__Reg1_2, 0, { MCK_DoubleRegs, MCK__61_, MCK_DoubleRegs }, },
  { 0 /*  */, Hexagon::V6_vassignp, Convert__Reg1_0__Reg1_2, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_VecDblRegs }, },
  { 0 /*  */, Hexagon::A2_tfrrcr, Convert__Reg1_0__Reg1_2, 0, { MCK_CtrRegs, MCK__61_, MCK_IntRegs }, },
  { 0 /*  */, Hexagon::C2_tfrpr, Convert__Reg1_0__Reg1_2, 0, { MCK_IntRegs, MCK__61_, MCK_PredRegs }, },
  { 0 /*  */, Hexagon::A2_tfrcrr, Convert__Reg1_0__Reg1_2, 0, { MCK_IntRegs, MCK__61_, MCK_CtrRegs }, },
  { 0 /*  */, Hexagon::A2_tfr, Convert__Reg1_0__Reg1_2, 0, { MCK_IntRegs, MCK__61_, MCK_IntRegs }, },
  { 0 /*  */, Hexagon::V6_vassign, Convert__Reg1_0__Reg1_2, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_VectorRegs }, },
  { 0 /*  */, Hexagon::A2_tfrpi, Convert__Reg1_0__s8_0Imm1_3, 0, { MCK_DoubleRegs, MCK__61_, MCK__35_, MCK_s8_0Imm }, },
  { 0 /*  */, Hexagon::TFRI64_V4, Convert__Reg1_0__u64_0Imm1_3, 0, { MCK_DoubleRegs, MCK__61_, MCK__35_, MCK_u64_0Imm }, },
  { 0 /*  */, Hexagon::V6_vsubw_dv, Convert__Reg1_0__regW15__regW15, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK__35_, MCK_0 }, },
  { 0 /*  */, Hexagon::V6_vsubw_dv, Convert__Reg1_0__regW15__regW15, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK__35_, MCK_0 }, },
  { 0 /*  */, Hexagon::A2_tfrsi, Convert__Reg1_0__s32_0Imm1_3, 0, { MCK_IntRegs, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 0 /*  */, Hexagon::V6_vxor, Convert__Reg1_0__Reg1_0__Reg1_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK__35_, MCK_0 }, },
  { 0 /*  */, Hexagon::V6_vxor, Convert__Reg1_0__Reg1_0__Reg1_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK__35_, MCK_0 }, },
  { 0 /*  */, Hexagon::C2_all8, Convert__Reg1_0__Reg1_4, 0, { MCK_PredRegs, MCK__61_, MCK_all8, MCK__40_, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_any8, Convert__Reg1_0__Reg1_4, 0, { MCK_PredRegs, MCK__61_, MCK_any8, MCK__40_, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_not, Convert__Reg1_0__Reg1_4, 0, { MCK_PredRegs, MCK__61_, MCK_not, MCK__40_, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_not, Convert__Reg1_0__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_not, MCK__40_, MCK_VecPredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_scalar2, Convert__Reg1_0__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vsetq, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_scalar2v2, Convert__Reg1_0__Reg1_4, Feature_HasV62T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vsetq2, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_absp, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_abs, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_brevp, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_brev, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_d2df, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_d2df, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_df2d, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_df2d, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_df2ud, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_df2ud, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_sf2d, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_sf2d, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_sf2df, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_sf2df, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_sf2ud, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_sf2ud, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_ud2df, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_ud2df, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_uw2df, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_uw2df, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_w2df, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_w2df, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_deinterleave, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_deinterleave, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_interleave, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_interleave, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_mask, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_mask, MCK__40_, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignb_io, Convert__Reg1_0__Tie0__Reg1_4__imm_95_0, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw4_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrd_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadd_locked, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd_95_locked, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignh_io, Convert__Reg1_0__Tie0__Reg1_4__imm_95_0, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw4_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_negp, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_neg, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_notp, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_not, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_sxtw, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_sxtw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vabsh, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vabsh, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vabsw, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vabsw, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsathb_nopack, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsathb, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsathub_nopack, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsathub, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsatwh_nopack, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsatwh, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsatwuh_nopack, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsatwuh, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_vsplatrbp, Convert__Reg1_0__Reg1_4, Feature_HasV62T, { MCK_DoubleRegs, MCK__61_, MCK_vsplatb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsplatrh, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsplath, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsxtbh, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsxtbh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsxthw, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsxthw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vzxtbh, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vzxtbh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vzxthw, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vzxthw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::J4_jumpsetr, Convert__Reg1_0__Reg1_2__b30_2Imm1_5, 0, { MCK_GeneralSubRegs, MCK__61_, MCK_GeneralSubRegs, MCK__59_, MCK_jump, MCK_b30_2Imm }, },
  { 0 /*  */, Hexagon::V6_vsb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsxtb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsxtb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsxth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsxth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackub, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackub, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackub, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackub, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackuh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackuh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackuh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vunpackuh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vzb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vzxtb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vzb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vzxtb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vzh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vzxth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vzh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vzxth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_tfrih, Convert__Reg1_0__Tie0__u16_0Imm1_5, 0, { MCK_IntRegs, MCK__DOT_, MCK_h, MCK__61_, MCK__35_, MCK_u16_0Imm }, },
  { 0 /*  */, Hexagon::HI, Convert__Reg1_0__u16_0Imm1_5, 0, { MCK_IntRegs, MCK__DOT_, MCK_h, MCK__61_, MCK__35_, MCK_u16_0Imm }, },
  { 0 /*  */, Hexagon::A2_tfril, Convert__Reg1_0__Tie0__u16_0Imm1_5, 0, { MCK_IntRegs, MCK__DOT_, MCK_l, MCK__61_, MCK__35_, MCK_u16_0Imm }, },
  { 0 /*  */, Hexagon::LO, Convert__Reg1_0__u16_0Imm1_5, 0, { MCK_IntRegs, MCK__DOT_, MCK_l, MCK__61_, MCK__35_, MCK_u16_0Imm }, },
  { 0 /*  */, Hexagon::A2_abs, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_abs, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_aslh, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_aslh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_asrh, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_asrh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_brev, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_brev, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_cl0p, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_cl0, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_cl0, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_cl0, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_cl1p, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_cl1, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_cl1, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_cl1, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_clbp, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_clb, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_clb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_clb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_d2sf, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_d2sf, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_df2sf, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_df2sf, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_df2uw, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_df2uw, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_df2w, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_df2w, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_sf2uw, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_sf2uw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_sf2w, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_sf2w, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_ud2sf, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_ud2sf, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_uw2sf, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_uw2sf, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_w2sf, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_w2sf, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_ct0p, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_ct0, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_ct0, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_ct0, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_ct1p, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_ct1, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_ct1, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_ct1, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrb_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw2_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrh_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrub_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw2_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruh_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadri_io, Convert__Reg1_0__Reg1_4__imm_95_0, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadw_locked, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_memw_95_locked, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_subri, Convert__Reg1_0__imm_95_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_neg, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_clbpnorm, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_normamt, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_clbnorm, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_normamt, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_subri, Convert__Reg1_0__imm_95__MINUS_1__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_not, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S5_popcountp, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_popcount, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_sat, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_sat, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_satb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_satb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_sath, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_sath, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_satub, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_satub, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_satuh, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_satuh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sffixupr, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sffixupr, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_swiz, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_swiz, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_sxtb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_sxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_sxth, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_sxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vrndpackwh, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vrndwh, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsathb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vsathb, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_svsathb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vsathb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsathub, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vsathub, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_svsathub, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vsathub, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsatwh, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vsatwh, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsatwuh, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vsatwuh, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsplatrb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vsplatb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vtrunehb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vtrunehb, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vtrunohb, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vtrunohb, MCK__40_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_andir, Convert__Reg1_0__Reg1_4__imm_95_255, 0, { MCK_IntRegs, MCK__61_, MCK_zxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_zxth, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_zxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_hi, Convert__Reg1_0__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_hi, MCK__40_, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_lo, Convert__Reg1_0__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_lo, MCK__40_, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsw, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsw, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsw, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsw, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vcl0h, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vcl0h, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vcl0h, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vcl0h, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vcl0w, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vcl0w, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vcl0w, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vcl0w, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdealb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdealb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdealh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdealh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_ai, Convert__Reg1_0__Reg1_4__imm_95_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_ai, Convert__Reg1_0__Reg1_4__imm_95_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32Ub_ai, Convert__Reg1_0__Reg1_4__imm_95_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32Ub_ai, Convert__Reg1_0__Reg1_4__imm_95_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnormamth, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnormamth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnormamth, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnormamth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnormamtw, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnormamtw, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnormamtw, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnormamtw, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnot, Convert__Reg1_0__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnot, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpopcounth, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpopcounth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpopcounth, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpopcounth, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffb, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffb, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffh, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_lvsplatw, Convert__Reg1_0__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsplat, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_and, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_and, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_bitsclr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_bitsclr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_bitsset, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_bitsset, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_boundscheck, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_boundscheck, MCK__40_, MCK_IntRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_fastcorner9, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_fastcorner9, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_or, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_or, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_tlbmatch, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_tlbmatch, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_tstbit_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_xor, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_xor, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_and, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_and, MCK__40_, MCK_VecPredRegs, MCK_VecPredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_or, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_or, MCK__40_, MCK_VecPredRegs, MCK_VecPredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvrt, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vand, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_xor, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_xor, MCK__40_, MCK_VecPredRegs, MCK_VecPredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::CONST64, Convert__Reg1_0__Imm1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_CONST64, MCK__40_, MCK__35_, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_add, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addsp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_andp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_and, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_p, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_p, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_bitsplit, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_bitsplit, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmpyi_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_cmpyi, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmpyr_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_cmpyr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_combinew, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_cabacdecbin, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_decbin, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_extractp_rp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_extract, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_extractup_rp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_extractu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_insertp_rp, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_insert, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lfsp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_lfs, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_p, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_lsl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_p, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_maxp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_max, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_maxup, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_maxu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::PS_loadrdabs, Convert__Reg1_0__u29_3Imm1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK__35_, MCK_u29_3Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_minp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_min, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_minup, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_minu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_dpmpyss_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_dpmpyuu_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_orp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_or, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_packhl, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_packhl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_pmpyw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_pmpyw, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_shuffeb, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_shuffeb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_shuffeh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_shuffeh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_shuffob, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_shuffob, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_shuffoh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_shuffoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_subp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_sub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M6_vabsdiffb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV62T, { MCK_DoubleRegs, MCK__61_, MCK_vabsdiffb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vabsdiffh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vabsdiffh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M6_vabsdiffub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV62T, { MCK_DoubleRegs, MCK__61_, MCK_vabsdiffub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vabsdiffw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vabsdiffw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vaddub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaddb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vaddh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vaddub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vaddw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_vh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaslh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_vw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaslw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_vh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_vw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vavgh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vavgub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vavguh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavguh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vavguw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavguw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vavgw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vcnegh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vcnegh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vcrotate, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vcrotate, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_vh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vlslh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_vw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vlslw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_vh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vlsrh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_vw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vlsrw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vmaxb, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmaxb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vmaxh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmaxh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vmaxub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmaxub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vmaxuh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmaxuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vmaxuw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmaxuw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vmaxw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmaxw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vminb, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vminb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vminh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vminh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vminub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vminub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vminuh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vminuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vminuw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vminuw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vminw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vminw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vmpybsu, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpybsu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vmpybuu, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpybu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vnavgh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vnavgh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vnavgw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vnavgw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_vpmpyh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vpmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vraddub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vraddub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmpyi_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcmpyi, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmpyr_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcmpyr, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrmaxh, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmaxh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrmaxuh, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmaxuh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrmaxuw, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmaxuw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrmaxw, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmaxw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrminh, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrminh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrminuh, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrminuh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrminuw, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrminuw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vrminw, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrminw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vrmpybsu, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmpybsu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vrmpybuu, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmpybu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrmpy_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmpyh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_vrmpyeh_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_vrmpyoh_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vrsadub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrsadub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vsubub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vsubh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vsubub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vsubw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_vtrunehb_ppp, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV62T, { MCK_DoubleRegs, MCK__61_, MCK_vtrunehb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vtrunewh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vtrunewh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_vtrunohb_ppp, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV62T, { MCK_DoubleRegs, MCK__61_, MCK_vtrunohb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vtrunowh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vtrunowh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_xorp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_xor, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::J4_jumpseti, Convert__Reg1_0__u6_0Imm1_3__b30_2Imm1_6, 0, { MCK_GeneralSubRegs, MCK__61_, MCK__35_, MCK_u6_0Imm, MCK__59_, MCK_jump, MCK_b30_2Imm }, },
  { 0 /*  */, Hexagon::V6_vaddb_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddb, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddb_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddb, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddh_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddh_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddubh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddubh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vadduhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vadduhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddw_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddw_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vcombine, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vcombine, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdsaduh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vdsaduh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdsaduh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vdsaduh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabusv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpabus, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabusv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpabus, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpabus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpabus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabuuv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpabuu, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabuuv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpabuu, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpahb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpahb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpahb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpahb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybusv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybusv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyhus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyhus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyubv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyubv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoeb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vshuffoeb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoeb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vshuffoeb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoeh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vshuffoeh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoeh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vshuffoeh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubb_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubb, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubb_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubb, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubh_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubh_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsububh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsububh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubuhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubuhw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubw_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubw_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vtmpyb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vtmpyb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vtmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vtmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyhb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vtmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyhb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vtmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackob_alt, Convert__Reg1_0__Tie0__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__124_, MCK__61_, MCK_vunpackob, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackoh, Convert__Reg1_0__Tie0__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__124_, MCK__61_, MCK_vunpackoh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackoh, Convert__Reg1_0__Tie0__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__124_, MCK__61_, MCK_vunpackoh, MCK__40_, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::CONST32, Convert__Reg1_0__Imm1_5, 0, { MCK_IntRegs, MCK__61_, MCK_CONST32, MCK__40_, MCK__35_, MCK_Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_add, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_and, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_clrbit_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_clrbit, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cround_rr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_cround, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_extract_rp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_extract, MCK__40_, MCK_IntRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_extractu_rp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_extractu, MCK__40_, MCK_IntRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_iconst, Convert__Reg1_0__s23_2Imm1_5, 0, { MCK_IntRegs, MCK__61_, MCK_iconst, MCK__40_, MCK__35_, MCK_s23_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_insert_rp, Convert__Reg1_0__Tie0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_insert, MCK__40_, MCK_IntRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_lsl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_max, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_max, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_maxu, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_maxu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::PS_loadrbabs, Convert__Reg1_0__u32_0Imm1_5, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::PS_loadrhabs, Convert__Reg1_0__u31_1Imm1_5, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::PS_loadrubabs, Convert__Reg1_0__u32_0Imm1_5, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::PS_loadruhabs, Convert__Reg1_0__u31_1Imm1_5, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::PS_loadriabs, Convert__Reg1_0__u30_2Imm1_5, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK__35_, MCK_u30_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_min, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_min, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_minu, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_minu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_modwrapu, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_modwrap, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_up, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyi, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpysu_up, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpysu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_up, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyi, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpyui, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_or, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_parityp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_parity, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_parity, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_parity, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_round_rr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_round, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_setbit_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_setbit, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfadd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sfadd, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sffixupd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sffixupd, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sffixupn, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sffixupn, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfmax, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sfmax, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfmin, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sfmin, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfmpy, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sfmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfsub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sfsub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_sub, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_togglebit_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_togglebit, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_svaddh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_svw_trun, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_svavgh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_extractw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_IntRegs, MCK__61_, MCK_vextract, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_vitpack, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vitpack, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_svnavgh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vnavgh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vraddh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vraddh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vradduh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vradduh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_svsubh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_xor, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfinvsqrta, Convert__Reg1_0__Reg1_1__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK_PredRegs, MCK__61_, MCK_sfinvsqrta, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsdiffw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandqrt, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vand, MCK__40_, MCK_VecPredRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvqv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vand, MCK__40_, MCK_VecPredRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vand, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vand, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslwv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslwv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaslw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrwv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrwv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavguh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavguh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavguh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavguh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealb4w, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdealb4w, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealb4w, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdealb4w, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdelta, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdelta, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrhv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrwv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrwv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlsrw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmaxw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vminw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyewuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyewuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyewuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyewuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiewuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiewuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyih, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyih, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyih, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyih, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyihb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyihb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyihb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyihb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiowh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiowh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiwb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiwb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiwh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyiwh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnavgh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnavgh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnavgub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnavgub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnavgw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vnavgw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vor, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vor, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackeb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackeb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackeb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackeb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackeh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackeh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackeh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackeh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackob, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackob, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackob, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackob, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackoh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackoh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackoh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackoh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrdelta, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrdelta, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybus, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vror, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vror, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsathub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsathub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsathub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsathub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsatwh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsatwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsatwh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsatwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffeb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffeb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffeb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffeb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufeh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffeh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufeh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffeh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffob, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffob, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffob, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffob, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffoh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vshuffoh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubw, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vxor, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vxor, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_nbitsclr, Convert__Reg1_0__Reg1_5__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_bitsclr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_nbitsset, Convert__Reg1_0__Reg1_5__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_bitsset, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_fastcorner9_not, Convert__Reg1_0__Reg1_5__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_fastcorner9, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_ntstbit_r, Convert__Reg1_0__Reg1_5__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_andn, Convert__Reg1_0__Reg1_4__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK_and, MCK__40_, MCK_PredRegs, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_bitsclri, Convert__Reg1_0__Reg1_4__u6_0Imm1_6, 0, { MCK_PredRegs, MCK__61_, MCK_bitsclr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_dfclass, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_dfclass, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_orn, Convert__Reg1_0__Reg1_4__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK_or, MCK__40_, MCK_PredRegs, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfclass, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_sfclass, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_tstbit_i, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_PredRegs, MCK__61_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_and_n, Convert__Reg1_0__Reg1_4__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_and, MCK__40_, MCK_VecPredRegs, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_pred_or_n, Convert__Reg1_0__Reg1_4__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_or, MCK__40_, MCK_VecPredRegs, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvrt_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vand, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_p_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_p_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_p_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_lsl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_p_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_p_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_p_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmaci_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_cmpyi, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmacr_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_cmpyr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_p_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_lsl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_p_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_dpmpyss_acc_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_dpmpyuu_acc_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vmacbsu, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpybsu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vmacbuu, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpybu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vmac2es, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyeh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vmac2, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vraddub_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vraddub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmaci_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcmpyi, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmacr_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcmpyr, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vrcnegh, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcnegh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vrmacbsu, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrmpybsu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M5_vrmacbuu, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrmpybu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrmac_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrmpyh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_vrmpyeh_acc_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_vrmpyoh_acc_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vrsadub_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrsadub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_p_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_p_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_p_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_lsl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_p_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_dpmpyss_nac_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_dpmpyuu_nac_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_andnp, Convert__Reg1_0__Reg1_4__Reg1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_and, MCK__40_, MCK_DoubleRegs, MCK__126_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_p, Convert__Reg1_0__Reg1_4__u6_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_p, Convert__Reg1_0__Reg1_4__u6_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_p_rnd_goodsyntax, Convert__Reg1_0__Reg1_4__u6_0Imm1_6, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_asrrnd, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_bitspliti, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_bitsplit, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_combineir, Convert__Reg1_0__s32_0Imm1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK__35_, MCK_s32_0Imm, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_combineri, Convert__Reg1_0__Reg1_4__s32_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_df2d_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_df2d, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::F2_conv_df2ud_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_df2ud, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::F2_conv_sf2d_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_sf2d, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::F2_conv_sf2ud_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_convert_95_sf2ud, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::S2_lsr_i_p, Convert__Reg1_0__Reg1_4__u6_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_ornp, Convert__Reg1_0__Reg1_4__Reg1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_or, MCK__40_, MCK_DoubleRegs, MCK__126_, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_p, Convert__Reg1_0__Reg1_4__u6_0Imm1_6, Feature_HasV60T, { MCK_DoubleRegs, MCK__61_, MCK_rol, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vabshsat, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vabsh, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vabswsat, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vabsw, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_valignrb, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_valignb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_vh, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaslh, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_vw, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaslw, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_vh, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_vw, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vconj, Convert__Reg1_0__Reg1_4, 0, { MCK_DoubleRegs, MCK__61_, MCK_vconj, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_lsr_i_vh, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vlsrh, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_vw, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vlsrw, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_vmux, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmux, MCK__40_, MCK_PredRegs, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmpyi_s0c, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcmpyi, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__STAR_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmpyr_s0c, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcmpyr, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__STAR_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vsplicerb, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__61_, MCK_vspliceb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK_PredRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_p_xor, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_p_xor, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_p_xor, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_lsl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_p_xor, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_pmpyw_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_pmpyw, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_vpmpyh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_vpmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_xor_xacc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_xor, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_p_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_p_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_p_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_lsl, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_p_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A5_ACS, Convert__Reg1_0__Reg1_1__Tie0__Reg1_5__Reg1_6, Feature_HasV55T, { MCK_DoubleRegs, MCK_PredRegs, MCK__61_, MCK_vacsh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A6_vminub_RdP, Convert__Reg1_0__Reg1_1__Reg1_5__Reg1_6, Feature_HasV62T, { MCK_DoubleRegs, MCK_PredRegs, MCK__61_, MCK_vminub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_dv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_dv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_dv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_dv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdsaduh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vdsaduh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdsaduh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vdsaduh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpabus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpabus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpahb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpahb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpahb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpahb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybusv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybusv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyhus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyhus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyub_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyub_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyubv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyubv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuhv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuhv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vtmpyb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vtmpyb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vtmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vtmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyhb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vtmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyhb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vtmpyhb, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealvdd, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vdeal, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffvdd, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vshuff, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vswap, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vswap, MCK__40_, MCK_VecPredRegs, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_and_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_r_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_r_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_r_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_lsl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_r_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_and_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_and_xor, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_acci, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_r_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_r_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_r_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_lsl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_r_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_maci, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sffma, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV5T, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_sfmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_subacc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_nacci, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_r_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_r_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_r_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_lsl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_r_nac, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sffms, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV5T, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_sfmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_abssat, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_abs, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::C4_addipc, Convert__Reg1_0__u32_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_PC, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addi, Convert__Reg1_0__Reg1_4__s32_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_andir, Convert__Reg1_0__Reg1_4__s32_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_andn, Convert__Reg1_0__Reg1_4__Reg1_6, 0, { MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK__126_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_r, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_r, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_r_rnd_goodsyntax, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_asrrnd, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_clrbit_i, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_clrbit, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_conv_df2uw_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_df2uw, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::F2_conv_df2w_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_df2w, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::F2_conv_sf2uw_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_sf2uw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::F2_conv_sf2w_chop, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_convert_95_sf2w, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_chop }, },
  { 0 /*  */, Hexagon::A4_cround_ri, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_cround, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_lsli, Convert__Reg1_0__s6_0Imm1_5__Reg1_6, 0, { MCK_IntRegs, MCK__61_, MCK_lsl, MCK__40_, MCK__35_, MCK_s6_0Imm, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_r, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpysmi, Convert__Reg1_0__Reg1_4__m32_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK__35_, MCK_m32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_mux, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__61_, MCK_mux, MCK__40_, MCK_PredRegs, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_negsat, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_neg, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_orir, Convert__Reg1_0__Reg1_4__s32_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_orn, Convert__Reg1_0__Reg1_4__Reg1_6, 0, { MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK__126_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_r, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, Feature_HasV60T, { MCK_IntRegs, MCK__61_, MCK_rol, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_roundsat, Convert__Reg1_0__Reg1_4, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_round, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A4_round_ri, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_round, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_setbit_i, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_setbit, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_subri, Convert__Reg1_0__s32_0Imm1_5__Reg1_6, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK__35_, MCK_s32_0Imm, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_togglebit_i, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_togglebit, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_svw_trun, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_vasrw, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vrndpackwhs, Convert__Reg1_0__Reg1_4, 0, { MCK_IntRegs, MCK__61_, MCK_vrndwh, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_xor_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__94_, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_xor_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__94_, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_xor_xacc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__94_, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_or_and, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_r_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_r_r_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsl_r_r_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_lsl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_r_r_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_or_or, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_or_xor, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfrecipa, Convert__Reg1_0__Reg1_1__Reg1_5__Reg1_6, Feature_HasV5T, { MCK_IntRegs, MCK_PredRegs, MCK__61_, MCK_sfrecipa, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslw_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vaslw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslw_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vaslw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrw_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vasrw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrw_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vasrw, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyhb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiewh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiewh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewuh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiewuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewuh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiewuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyih_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyih, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyih_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyih, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyihb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyihb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyihb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyihb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiwb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwb_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiwb, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiwh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwh_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyiwh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpyb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybus_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyub_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyub_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubv_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_lvsplatb, Convert__Reg1_0__Reg1_6, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vsplat, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_lvsplath, Convert__Reg1_0__Reg1_6, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsplat, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vinsertwr, Convert__Reg1_0__Tie0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vinsert, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsh_sat, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsh, MCK__40_, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vabsh_sat, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsh, MCK__40_, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vabsw_sat, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsw, MCK__40_, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vabsw_sat, Convert__Reg1_0__Reg1_4, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vabsw, MCK__40_, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_valignb, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_valign, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandnqrt, Convert__Reg1_0__Reg1_5__Reg1_6, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vand, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvnqv, Convert__Reg1_0__Reg1_5__Reg1_6, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vand, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrwhsat, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_VectorRegs, MCK__61_, MCK_vasrwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlalignb, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlalign, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_ai, Convert__Reg1_0__Reg1_4__imm_95_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_ai, Convert__Reg1_0__Reg1_4__imm_95_0, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vmux, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmux, MCK__40_, MCK_VecPredRegs, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandqrt_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__124_, MCK__61_, MCK_vand, MCK__40_, MCK_VecPredRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_nbitsclri, Convert__Reg1_0__Reg1_5__u6_0Imm1_7, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_bitsclr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_ntstbit_i, Convert__Reg1_0__Reg1_5__u5_0Imm1_7, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpeqp, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpeq, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgtp, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgt, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgtup, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgtu, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgt, Convert__Reg1_0__Reg1_7__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_lt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgtu, Convert__Reg1_0__Reg1_7__Reg1_6, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_ltu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpbeq, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmpb, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpbgt, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmpb, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpbgtu, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmpb, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpheq, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmph, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmphgt, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmph, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmphgtu, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_cmph, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_dfcmpeq, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_dfcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_dfcmpge, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_dfcmp, MCK__DOT_, MCK_ge, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_dfcmpgt, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_dfcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_dfcmpuo, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_dfcmp, MCK__DOT_, MCK_uo, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfcmpeq, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_sfcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfcmpge, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_sfcmp, MCK__DOT_, MCK_ge, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfcmpgt, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_sfcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sfcmpuo, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_PredRegs, MCK__61_, MCK_sfcmp, MCK__DOT_, MCK_uo, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmpbeq, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpb, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpbgt, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpb, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmpbgtu, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpb, MCK__DOT_, MCK_gtu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmpheq, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmph, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmphgt, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmph, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmphgtu, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmph, MCK__DOT_, MCK_gtu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmpweq, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpw, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmpwgt, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpw, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vcmpwgtu, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpw, MCK__DOT_, MCK_gtu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_p_and, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_p_and, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_p_and, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_p_and, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, Feature_HasV60T, { MCK_DoubleRegs, MCK__38_, MCK__61_, MCK_rol, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_p_acc, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_p_acc, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_p_acc, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_p_acc, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, Feature_HasV60T, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_rol, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmaci_s0c, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcmpyi, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__STAR_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_vrcmacr_s0c, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcmpyr, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__STAR_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_p_nac, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_p_nac, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_p_nac, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_p_nac, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, Feature_HasV60T, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_rol, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addpsat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_add, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_cmpys_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_combineii, Convert__Reg1_0__s32_0Imm1_5__s8_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK__35_, MCK_s32_0Imm, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::TFRI64_V2_ext, Convert__Reg1_0__s32_0Imm1_5__s8_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK__35_, MCK_s32_0Imm, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_combineii, Convert__Reg1_0__s8_0Imm1_5__u32_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK__35_, MCK_s8_0Imm, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_dfimm_n, Convert__Reg1_0__u10_0Imm1_5, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_dfmake, MCK__40_, MCK__35_, MCK_u10_0Imm, MCK__41_, MCK__COLON_, MCK_neg }, },
  { 0 /*  */, Hexagon::F2_dfimm_p, Convert__Reg1_0__u10_0Imm1_5, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_dfmake, MCK__40_, MCK__35_, MCK_u10_0Imm, MCK__41_, MCK__COLON_, MCK_pos }, },
  { 0 /*  */, Hexagon::L2_loadalignb_io, Convert__Reg1_0__Tie0__Reg1_4__s32_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignb_pr, Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadalignb_ap, Convert__Reg1_0__Reg1_4__Tie0__u32_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw4_io, Convert__Reg1_0__Reg1_4__s30_2Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s30_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw4_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbsw4_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrdgp, Convert__Reg1_0__u29_3Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrd_io, Convert__Reg1_0__Reg1_4__s29_3Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s29_3Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrd_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrd_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignh_io, Convert__Reg1_0__Tie0__Reg1_4__s31_1Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignh_pr, Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadalignh_ap, Convert__Reg1_0__Reg1_4__Tie0__u32_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw4_io, Convert__Reg1_0__Reg1_4__s30_2Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s30_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw4_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbzw4_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::dep_S2_packhl, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_packhl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_deprecated }, },
  { 0 /*  */, Hexagon::A2_vaddhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vaddubs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vadduhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vaddws, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_valignib, Convert__Reg1_0__Reg1_4__Reg1_5__u3_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_valignb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vavghcr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_crnd }, },
  { 0 /*  */, Hexagon::A2_vavghr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::A2_vavgubr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::A2_vavguhr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavguh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::A2_vavguwr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavguw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::A2_vavgwcr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_crnd }, },
  { 0 /*  */, Hexagon::A2_vavgwr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vavgw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_vcmpy_s0_sat_i, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vcmpyi, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vcmpy_s0_sat_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vcmpyr, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vdmpys_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vdmpy, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M5_vdmpybsu, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_vdmpybsu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2es_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyeh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2s_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2su_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyhsu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyl_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyul_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyh_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyuh_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vrcrotate, Convert__Reg1_0__Reg1_4__Reg1_5__u2_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcrotate, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_vspliceib, Convert__Reg1_0__Reg1_4__Reg1_5__u3_0Imm1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_vspliceb, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_vsubhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vsububs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vsubuhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vsubws, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vxaddsubh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vxaddsubh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vxaddsubw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vxaddsubw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vxsubaddh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vxsubaddh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vxsubaddw, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vxsubaddw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_asl_i_p_xacc, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_p_xacc, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_p_xacc, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, Feature_HasV60T, { MCK_DoubleRegs, MCK__94_, MCK__61_, MCK_rol, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_p_or, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_asl, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_p_or, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_p_or, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, 0, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_lsr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_p_or, Convert__Reg1_0__Tie0__Reg1_5__u6_0Imm1_7, Feature_HasV60T, { MCK_DoubleRegs, MCK__124_, MCK__61_, MCK_rol, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddubsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddubsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddwsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddwsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vrmpybusi, Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusi, Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubi, Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubi, Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrsadubi, Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vrsadub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrsadubi, Convert__Reg1_0__Reg1_4__Reg1_5__u1_0Imm1_7, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vrsadub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsububsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsububsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubuhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubuhsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubwsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubwsat_dv, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VecDblRegs, MCK_VecDblRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_and_andn, Convert__Reg1_0__Tie0__Reg1_5__Reg1_7, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK__126_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_r_and, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_r_and, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_r_and, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_r_and, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, Feature_HasV60T, { MCK_IntRegs, MCK__38_, MCK__61_, MCK_rol, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_accii, Convert__Reg1_0__Tie0__Reg1_5__s32_0Imm1_7, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_r_acc, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_r_acc, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_r_acc, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_macsip, Convert__Reg1_0__Tie0__Reg1_5__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_r_acc, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, Feature_HasV60T, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_rol, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_naccii, Convert__Reg1_0__Tie0__Reg1_5__s32_0Imm1_7, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_r_nac, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_r_nac, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_r_nac, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_macsin, Convert__Reg1_0__Tie0__Reg1_5__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_r_nac, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, Feature_HasV60T, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_rol, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_extractw, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_UseHVX, { MCK_IntRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vextract, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_extractw, Convert__Reg1_0__Reg1_6__Reg1_7, Feature_UseHVX, { MCK_IntRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vextract, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpysip, Convert__Reg1_0__Reg1_5__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK__43_, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpysin, Convert__Reg1_0__Reg1_5__u8_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK__MINUS_, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addsat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_addasl_rrri, Convert__Reg1_0__Reg1_4__Reg1_5__u3_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_addasl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_r_r_sat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_asr_r_r_sat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A4_rcmpeq, Convert__Reg1_0__Reg1_6__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrbgp, Convert__Reg1_0__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrb_io, Convert__Reg1_0__Reg1_4__s32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrb_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrb_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw2_io, Convert__Reg1_0__Reg1_4__s31_1Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw2_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbsw2_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrhgp, Convert__Reg1_0__u31_1Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrh_io, Convert__Reg1_0__Reg1_4__s31_1Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrh_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrh_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrubgp, Convert__Reg1_0__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrub_io, Convert__Reg1_0__Reg1_4__s32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrub_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrub_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw2_io, Convert__Reg1_0__Reg1_4__s31_1Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw2_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbzw2_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruhgp, Convert__Reg1_0__u31_1Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruh_io, Convert__Reg1_0__Reg1_4__s31_1Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruh_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadruh_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrigp, Convert__Reg1_0__u30_2Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadri_io, Convert__Reg1_0__Reg1_4__s30_2Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s30_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadri_pr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadri_ap, Convert__Reg1_0__Reg1_4__u32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_dpmpyss_rnd_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::C2_muxri, Convert__Reg1_0__Reg1_4__s32_0Imm1_6__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mux, MCK__40_, MCK_PredRegs, MCK__35_, MCK_s32_0Imm, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_muxir, Convert__Reg1_0__Reg1_4__Reg1_5__s32_0Imm1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mux, MCK__40_, MCK_PredRegs, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_round_rr_sat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_round, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::F2_sfimm_n, Convert__Reg1_0__u10_0Imm1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sfmake, MCK__40_, MCK__35_, MCK_u10_0Imm, MCK__41_, MCK__COLON_, MCK_neg }, },
  { 0 /*  */, Hexagon::F2_sfimm_p, Convert__Reg1_0__u10_0Imm1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_sfmake, MCK__40_, MCK__35_, MCK_u10_0Imm, MCK__41_, MCK__COLON_, MCK_pos }, },
  { 0 /*  */, Hexagon::A2_subsat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_svaddhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A5_vaddhubs, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_vaddhub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_svadduhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_svavghs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::A2_svsubhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_svsubuhs, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_xor_andn, Convert__Reg1_0__Tie0__Reg1_5__Reg1_7, 0, { MCK_IntRegs, MCK__94_, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK__126_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_r_xacc, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__94_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_r_xacc, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__94_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_r_xacc, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, Feature_HasV60T, { MCK_IntRegs, MCK__94_, MCK__61_, MCK_rol, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_or_andi, Convert__Reg1_0__Tie0__Reg1_5__s32_0Imm1_7, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_or_andn, Convert__Reg1_0__Tie0__Reg1_5__Reg1_7, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK__126_, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_r_or, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asr_i_r_or, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_lsr_i_r_or, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_or_ori, Convert__Reg1_0__Tie0__Reg1_5__s32_0Imm1_7, 0, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S6_rol_i_r_or, Convert__Reg1_0__Tie0__Reg1_5__u5_0Imm1_7, Feature_HasV60T, { MCK_IntRegs, MCK__124_, MCK__61_, MCK_rol, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddubsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddubsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vadduh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddwsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddwsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vaddw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_valignbi, Convert__Reg1_0__Reg1_4__Reg1_5__u3_0Imm1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_valign, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavghrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vavghrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vavgubrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vavgubrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vavguhrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavguh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vavguhrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavguh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vavgwrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vavgwrnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vavgw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vdmpyhisat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhisat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhvsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhvsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsusat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsusat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vlalignbi, Convert__Reg1_0__Reg1_4__Reg1_5__u3_0Imm1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vlalign, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_ai, Convert__Reg1_0__Reg1_4__s4_0Imm1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_ppu, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32Ub_ai, Convert__Reg1_0__Reg1_4__s4_0Imm1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32Ub_ppu, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackhb_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackhb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vpackhb_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackhb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vpackhub_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackhub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vpackhub_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackhub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vpackwh_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vpackwh_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vpackwuh_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackwuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vpackwuh_sat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vpackwuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundhb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundhb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundhb, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundhb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundhub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundhub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundhub, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundhub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundwh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundwh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundwuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundwuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundwuh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vroundwuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsububsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsububsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubuhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubuhsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubwsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubwsat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vsubw, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vandnqrt_acc, Convert__Reg1_0__Tie0__Reg1_6__Reg1_7, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__124_, MCK__61_, MCK_vand, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_cmpneq, Convert__Reg1_0__Reg1_7__Reg1_8, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_cmplte, Convert__Reg1_0__Reg1_7__Reg1_8, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_cmplteu, Convert__Reg1_0__Reg1_7__Reg1_8, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpeqi, Convert__Reg1_0__Reg1_6__s32_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgei, Convert__Reg1_0__Reg1_6__s8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_ge, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgeui, Convert__Reg1_0__Reg1_6__u8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_geu, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgti, Convert__Reg1_0__Reg1_6__s32_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_cmpgtui, Convert__Reg1_0__Reg1_6__u32_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpbeqi, Convert__Reg1_0__Reg1_6__u8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmpb, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpbgti, Convert__Reg1_0__Reg1_6__s8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmpb, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpbgtui, Convert__Reg1_0__Reg1_6__u32_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmpb, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmpheqi, Convert__Reg1_0__Reg1_6__s32_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmph, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmphgti, Convert__Reg1_0__Reg1_6__s32_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmph, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_cmphgtui, Convert__Reg1_0__Reg1_6__u32_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_cmph, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpbeqi, Convert__Reg1_0__Reg1_6__u8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpb, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpbgti, Convert__Reg1_0__Reg1_6__s8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpb, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpbgtui, Convert__Reg1_0__Reg1_6__u7_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpb, MCK__DOT_, MCK_gtu, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u7_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpheqi, Convert__Reg1_0__Reg1_6__s8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmph, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmphgti, Convert__Reg1_0__Reg1_6__s8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmph, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmphgtui, Convert__Reg1_0__Reg1_6__u7_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmph, MCK__DOT_, MCK_gtu, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u7_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpweqi, Convert__Reg1_0__Reg1_6__s8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpw, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpwgti, Convert__Reg1_0__Reg1_6__s8_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpw, MCK__DOT_, MCK_gt, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpwgtui, Convert__Reg1_0__Reg1_6__u7_0Imm1_8, 0, { MCK_PredRegs, MCK__61_, MCK_vcmpw, MCK__DOT_, MCK_gtu, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u7_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmacs_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vcmac_s0_sat_i, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vcmpyi, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vcmac_s0_sat_r, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vcmpyr, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vdmacs_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M5_vdmacbsu, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV5T, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vdmpybsu, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmac2es_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyeh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmac2s_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmac2su_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyhsu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmacls_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmaculs_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmachs_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmacuhs_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vrcrotate_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u2_0Imm1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcrotate, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cnacs_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A4_addp_c, Convert__Reg1_0__Reg1_6__Reg1_4__Reg1_5__Tie1, 0, { MCK_DoubleRegs, MCK__61_, MCK_add, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK_PredRegs, MCK__41_, MCK__COLON_, MCK_carry }, },
  { 0 /*  */, Hexagon::S2_asr_i_p_rnd, Convert__Reg1_0__Reg1_4__u6_0Imm1_6, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_asr, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_cmpysc_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_extractp, Convert__Reg1_0__Reg1_4__u6_0Imm1_6__u6_0Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_extract, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_extractup, Convert__Reg1_0__Reg1_4__u6_0Imm1_6__u6_0Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_extractu, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_insertp, Convert__Reg1_0__Tie0__Reg1_4__u6_0Imm1_6__u6_0Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_insert, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u6_0Imm, MCK__35_, MCK_u6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignb_pi, Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_0Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw4_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrd_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_3Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignh_pi, Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_1Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw4_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_subp_c, Convert__Reg1_0__Reg1_6__Reg1_4__Reg1_5__Tie1, 0, { MCK_DoubleRegs, MCK__61_, MCK_sub, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK_PredRegs, MCK__41_, MCK__COLON_, MCK_carry }, },
  { 0 /*  */, Hexagon::S5_vasrhrnd, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_, MCK__COLON_, MCK_raw }, },
  { 0 /*  */, Hexagon::S5_vasrhrnd_goodsyntax, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, Feature_HasV5T, { MCK_DoubleRegs, MCK__61_, MCK_vasrh, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vmpyhsat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhsat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vrmpybusi_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusi_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vrmpybus, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubi_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubi_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vrmpyub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrsadubi_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vrsadub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrsadubi_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__u1_0Imm1_8, Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vrsadub, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsb, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsxt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackb, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vunpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackub, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vunpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vzb, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vzxt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackuh, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vunpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vzh, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vzxt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsh, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsxt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackh, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vunpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sffma_lib, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV5T, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_sfmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_lib }, },
  { 0 /*  */, Hexagon::F2_sffms_lib, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV5T, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_sfmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_lib }, },
  { 0 /*  */, Hexagon::A4_rcmpneq, Convert__Reg1_0__Reg1_7__Reg1_8, 0, { MCK_IntRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_asl_i_r_sat, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_asr_i_r_rnd, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_asr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::A4_rcmpeqi, Convert__Reg1_0__Reg1_6__s32_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_extract, Convert__Reg1_0__Reg1_4__u5_0Imm1_6__u5_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_extract, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_extractu, Convert__Reg1_0__Reg1_4__u5_0Imm1_6__u5_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_extractu, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_insert, Convert__Reg1_0__Tie0__Reg1_4__u5_0Imm1_6__u5_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_insert, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrb_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw2_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrh_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrub_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw2_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruh_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadri_pi, Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C2_muxii, Convert__Reg1_0__Reg1_4__s32_0Imm1_6__s8_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_mux, MCK__40_, MCK_PredRegs, MCK__35_, MCK_s32_0Imm, MCK__35_, MCK_s8_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_round_ri_sat, Convert__Reg1_0__Reg1_4__u5_0Imm1_6, 0, { MCK_IntRegs, MCK__61_, MCK_round, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S2_tableidxb, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__u5_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxb, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_tableidxd_goodsyntax, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__u5_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxd, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_tableidxh_goodsyntax, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__u5_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxh, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_tableidxw_goodsyntax, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__u5_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxw, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S5_asrhub_rnd_sat, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_vasrhub, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_, MCK__COLON_, MCK_raw }, },
  { 0 /*  */, Hexagon::S5_asrhub_sat, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_vasrhub, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhisat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhisat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhvsat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhvsat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsusat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsusat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdealb, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vdeal, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffb, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vshuff, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsh, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealh, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vdeal, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnormamth, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vnormamt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpopcounth, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vpopcount, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffh, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vshuff, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsh, Convert__Reg1_0__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsh, Convert__Reg1_0__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vcl0h, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vcl0, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsw, Convert__Reg1_0__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsw, Convert__Reg1_0__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vcl0w, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vcl0, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsw, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnormamtw, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vnormamt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrhubsat, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_VectorRegs, MCK__61_, MCK_vasrhub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrwhsat, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_VectorRegs, MCK__61_, MCK_vasrwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrwuhsat, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_VectorRegs, MCK__61_, MCK_vasrwuh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vL32b_pi, Convert__Reg1_0__Reg1_4__Tie1__s3_0Imm1_8, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32Ub_pi, Convert__Reg1_0__Reg1_4__Tie1__s3_0Imm1_8, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_cmpneqi, Convert__Reg1_0__Reg1_7__s32_0Imm1_9, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_cmpltei, Convert__Reg1_0__Reg1_7__s32_0Imm1_9, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_cmplteui, Convert__Reg1_0__Reg1_7__u32_0Imm1_9, 0, { MCK_PredRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_and_and, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_8, 0, { MCK_PredRegs, MCK__61_, MCK_and, MCK__40_, MCK_PredRegs, MCK_and, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_and_or, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_8, 0, { MCK_PredRegs, MCK__61_, MCK_and, MCK__40_, MCK_PredRegs, MCK_or, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_boundscheck_hi, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_boundscheck, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_hi }, },
  { 0 /*  */, Hexagon::A4_boundscheck_lo, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_PredRegs, MCK__61_, MCK_boundscheck, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_lo }, },
  { 0 /*  */, Hexagon::C4_or_and, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_8, 0, { MCK_PredRegs, MCK__61_, MCK_or, MCK__40_, MCK_PredRegs, MCK_and, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_or_or, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_8, 0, { MCK_PredRegs, MCK__61_, MCK_or, MCK__40_, MCK_PredRegs, MCK_or, MCK__40_, MCK_PredRegs, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmacsc_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_cnacsc_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_addsph, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_add, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_hi }, },
  { 0 /*  */, Hexagon::A2_addspl, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_add, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_lo }, },
  { 0 /*  */, Hexagon::L2_loadalignb_pbr, Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw4_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrd_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignh_pbr, Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw4_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mmpyl_rs0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyul_rs0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyh_rs0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyuh_rs0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vnavghcr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vnavgh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_crnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vnavghr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vnavgh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vnavgwcr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vnavgw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_crnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_vnavgwr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vnavgw, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_vrmpyeh_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M4_vrmpyoh_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::V6_vunpackob, Convert__Reg1_0__Tie0__Reg1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__124_, MCK__61_, MCK_vunpacko, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vunpackoh, Convert__Reg1_0__Tie0__Reg1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__124_, MCK__61_, MCK_vunpacko, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyewuh_64, Convert__Reg1_0__Reg1_4__Reg1_7, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__61_, MCK_vmpye, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::F2_sffma_sc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6__Reg1_7, Feature_HasV5T, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_sfmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK_PredRegs, MCK__41_, MCK__COLON_, MCK_scale }, },
  { 0 /*  */, Hexagon::A4_rcmpneqi, Convert__Reg1_0__Reg1_7__s32_0Imm1_9, 0, { MCK_IntRegs, MCK__61_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_clbpaddi, Convert__Reg1_0__Reg1_6__s6_0Imm1_9, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_clb, MCK__40_, MCK_DoubleRegs, MCK__41_, MCK__35_, MCK_s6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_clbaddi, Convert__Reg1_0__Reg1_6__s6_0Imm1_9, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_clb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__35_, MCK_s6_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addh_l16_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addh_l16_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_mpyrr_addr, Convert__Reg1_0__Reg1_4__Tie0__Reg1_8, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::dep_A2_addsat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_deprecated }, },
  { 0 /*  */, Hexagon::M2_cmpyrs_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_combine_hh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_combine_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_combine_lh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_combine_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrb_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw2_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrh_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrub_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw2_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruh_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadri_pbr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_up_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_subh_l16_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_subh_l16_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::dep_A2_subsat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_deprecated }, },
  { 0 /*  */, Hexagon::M2_vdmpyrs_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vdmpy, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2s_s0pack, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vL32b_cur_ai, Convert__Reg1_0__Reg1_6__s4_0Imm1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_cur_ppu, Convert__Reg1_0__Reg1_6__Tie1__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vasl, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_tmp_ai, Convert__Reg1_0__Reg1_6__s4_0Imm1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_tmp_ppu, Convert__Reg1_0__Reg1_6__Tie1__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vlsr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vlsr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vlsr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vasl, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsuisat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_1, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsuisat, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_1, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_ai, Convert__Reg1_0__Reg1_4__s4_0Imm1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_ppu, Convert__Reg1_0__Reg1_4__Tie1__Reg1_7, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::C4_and_andn, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_9, 0, { MCK_PredRegs, MCK__61_, MCK_and, MCK__40_, MCK_PredRegs, MCK_and, MCK__40_, MCK_PredRegs, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_and_orn, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_9, 0, { MCK_PredRegs, MCK__61_, MCK_and, MCK__40_, MCK_PredRegs, MCK_or, MCK__40_, MCK_PredRegs, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::A4_vcmpbeq_any, Convert__Reg1_0__Reg1_8__Reg1_9, 0, { MCK_PredRegs, MCK__61_, MCK_any8, MCK__40_, MCK_vcmpb, MCK__DOT_, MCK_eq, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_or_andn, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_9, 0, { MCK_PredRegs, MCK__61_, MCK_or, MCK__40_, MCK_PredRegs, MCK_and, MCK__40_, MCK_PredRegs, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::C4_or_orn, Convert__Reg1_0__Reg1_4__Reg1_7__Reg1_9, 0, { MCK_PredRegs, MCK__61_, MCK_or, MCK__40_, MCK_PredRegs, MCK_or, MCK__40_, MCK_PredRegs, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mmacls_rs0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmaculs_rs0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmachs_rs0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmacuhs_rs0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_vrmpyeh_acc_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M4_vrmpyoh_acc_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrd_rr, Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_64_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__43_, MCK__61_, MCK_vmpyo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_mpyrr_addi, Convert__Reg1_0__u32_0Imm1_5__Reg1_8__Reg1_9, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_addaddi, Convert__Reg1_0__Reg1_4__Reg1_7__s32_0Imm1_9, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_mpyri_addr_u2, Convert__Reg1_0__Reg1_4__u6_2Imm1_8__Reg1_9, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_mpyi, MCK__40_, MCK__35_, MCK_u6_2Imm, MCK_IntRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_mpyri_addr, Convert__Reg1_0__Reg1_4__Reg1_7__u32_0Imm1_9, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_subaddi, Convert__Reg1_0__Reg1_4__s32_0Imm1_8__Reg1_9, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_sub, MCK__40_, MCK__35_, MCK_s32_0Imm, MCK_IntRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmpyrsc_s0, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::L4_loadrb_rr, Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrh_rr, Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrub_rr, Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadruh_rr, Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadri_rr, Convert__Reg1_0__Reg1_4__Reg1_6__u2_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_or_andix, Convert__Reg1_0__Reg1_4__Tie0__s32_0Imm1_9, 0, { MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_and, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S2_tableidxb, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__s6_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxb, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_s6_0Imm, MCK__41_, MCK__COLON_, MCK_raw }, },
  { 0 /*  */, Hexagon::S2_tableidxd, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__s6_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxd, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_s6_0Imm, MCK__41_, MCK__COLON_, MCK_raw }, },
  { 0 /*  */, Hexagon::S2_tableidxh, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__s6_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxh, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_s6_0Imm, MCK__41_, MCK__COLON_, MCK_raw }, },
  { 0 /*  */, Hexagon::S2_tableidxw, Convert__Reg1_0__Tie0__Reg1_4__u4_0Imm1_6__s6_0Imm1_8, 0, { MCK_IntRegs, MCK__61_, MCK_tableidxw, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u4_0Imm, MCK__35_, MCK_s6_0Imm, MCK__41_, MCK__COLON_, MCK_raw }, },
  { 0 /*  */, Hexagon::S5_asrhub_rnd_sat_goodsyntax, Convert__Reg1_0__Reg1_4__u4_0Imm1_6, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_vasrhub, MCK__40_, MCK_DoubleRegs, MCK__35_, MCK_u4_0Imm, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsuisat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_1, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsuisat_acc, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vdmpyhsu, MCK__40_, MCK_VecDblRegs, MCK_IntRegs, MCK__35_, MCK_1, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vL32b_cur_pi, Convert__Reg1_0__Reg1_6__Tie1__s3_0Imm1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsh_sat, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vL32b_tmp_pi, Convert__Reg1_0__Reg1_6__Tie1__s3_0Imm1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslw_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vasl, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrw_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsw_sat, Convert__Reg1_0__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vabs, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrhbrndsat, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_VectorRegs, MCK__61_, MCK_vasrhb, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrhubrndsat, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_VectorRegs, MCK__61_, MCK_vasrhub, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrwhrndsat, Convert__Reg1_0__Reg1_4__Reg1_5__Reg1_6, 0, { MCK_VectorRegs, MCK__61_, MCK_vasrwh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_pi, Convert__Reg1_0__Reg1_4__Tie1__s3_0Imm1_8, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_shuffeqh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vshuffe, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_shuffeqw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vshuffe, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvrt, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vand, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvrt, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vand, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgth, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmpys_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::L4_loadalignb_ur, Convert__Reg1_0__Tie0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbsw4_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrd_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadalignh_ur, Convert__Reg1_0__Tie0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbzw4_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_vcmpy_s1_sat_i, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vcmpyi, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vcmpy_s1_sat_r, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vcmpyr, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vdmpys_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vdmpy, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2es_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyeh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2s_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2su_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyhsu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyl_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyul_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyh_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyuh_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddb_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoeb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vshuffoe, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubb_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddh_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddubh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabusv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabuuv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabus, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybus, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybusv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoeh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vshuffoe, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubh_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsububh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vtmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpybus, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vtmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyubv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdsaduh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vdsad, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuhv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddw_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddhw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vadduhw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpahb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpauhb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhus, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubw_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubhw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubuhw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyhb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vtmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_addi_asl_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_addi_lsr_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M4_mpyri_addi, Convert__Reg1_0__u32_0Imm1_5__Reg1_8__u6_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_mpyi, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u6_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_addh_l16_sat_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_addh_l16_sat_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_andi_asl_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_andi_lsr_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrb_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbsw2_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrh_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadrub_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadbzw2_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadruh_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::L4_loadri_ur, Convert__Reg1_0__Reg1_4__u2_0Imm1_8__u32_0Imm1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_up_s1_sat, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_ori_asl_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_ori_lsr_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_subi_asl_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_asl, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::S4_subi_lsr_ri, Convert__Reg1_0__u32_0Imm1_5__Tie0__u5_0Imm1_10, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK_lsr, MCK__40_, MCK_IntRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::A2_subh_l16_sat_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_subh_l16_sat_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdealb4w, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vdeale, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vmax, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vmin, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vnavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackeb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vpacke, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackob, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vpacko, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffeb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vshuffe, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshuffob, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vshuffo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_cur_ai, Convert__Reg1_0__Reg1_6__s4_0Imm1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_cur_ppu, Convert__Reg1_0__Reg1_6__Tie1__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vaddh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslhv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vasl, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrhv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrhv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vlsr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmax, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmin, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyihb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyih, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vnavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackeh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vpacke, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackoh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vpacko, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsatwh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsat, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufeh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vshuffe, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vshufoh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vshuffo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_tmp_ai, Convert__Reg1_0__Reg1_6__s4_0Imm1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_tmp_ppu, Convert__Reg1_0__Reg1_6__Tie1__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vabsdiffub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vabsdiff, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandqrt, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vand, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandqrt, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vand, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vmax, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vmin, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsathub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vsat, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vabsdiff, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vabsdiff, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavguh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vmax, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vmin, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsatuwuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vsat, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vabsdiffw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vabsdiff, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaslwv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vasl, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrwv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vavgw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlsrwv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vlsr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmaxw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmax, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vminw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmin, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyewuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpye, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyie, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyieoh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyieo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiowh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyio, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vnavgw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vnavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybus, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubw, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhss, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhss, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_veqb_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtb_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgth_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtub_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuh_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuw_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtw_and, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__38_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvrt_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK__124_, MCK__61_, MCK_vand, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandvrt_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK__124_, MCK__61_, MCK_vand, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtb_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgth_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtub_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuh_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuw_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtw_xor, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__94_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqb_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqh_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_veqw_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtb_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgth_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtub_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuh_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtuw_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vgtw_or, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecPredRegs, MCK__124_, MCK__61_, MCK_vcmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmacs_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vdmacs_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmac2es_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyeh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmac2s_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmac2su_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyhsu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmacls_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmaculs_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmachs_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmacuhs_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_acc_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_cnacs_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_cmpysc_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::L2_loadalignb_pcr, Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw4_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrd_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignh_pcr, Convert__Reg1_0__Reg1_4__Tie0__Tie1__Reg1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw4_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddubh_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_dv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpabus_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybus_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpybusv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyb_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vtmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpybus_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vtmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlutvwh, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vlut16, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyub_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyubv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdsaduh_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__43_, MCK__61_, MCK_vdsad, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuh_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyuhv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddhw_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vadduhw_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_dv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpahb_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpauhb_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpa, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhus_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vtmpyhb_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vtmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_mac_up_s1_sat, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_hh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_hl_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_lh_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_ll_s0, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_nac_up_s1_sat, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::L2_loadrb_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw2_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrh_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrub_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw2_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruh_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadri_pcr, Convert__Reg1_0__Reg1_4__Tie1__Reg1_11, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vlutvvb, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vlut32, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_cur_pi, Convert__Reg1_0__Reg1_6__Tie1__s3_0Imm1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vdmpybus_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyihb_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyih_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrwh, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vL32b_nt_tmp_pi, Convert__Reg1_0__Reg1_6__Tie1__s3_0Imm1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 0 /*  */, Hexagon::V6_vandqrt_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__124_, MCK__61_, MCK_vand, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vandqrt_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__124_, MCK__61_, MCK_vand, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyub_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__43_, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__43_, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vdmpyhb_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwb_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwh_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiwub_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpyi, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewh_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpyie, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyiewuh_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpyie, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybus_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpybusv_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_cmacsc_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_cnacsc_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::L2_loadalignb_pci, Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_0Imm1_8__Reg1_12, 0, { MCK_DoubleRegs, MCK__61_, MCK_memb_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw4_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8__Reg1_12, 0, { MCK_DoubleRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrd_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_3Imm1_8__Reg1_12, 0, { MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadalignh_pci, Convert__Reg1_0__Reg1_4__Tie0__Tie1__s4_1Imm1_8__Reg1_12, 0, { MCK_DoubleRegs, MCK__61_, MCK_memh_95_fifo, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw4_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8__Reg1_12, 0, { MCK_DoubleRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpyd_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mmpyl_rs1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyul_rs1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyh_rs1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmpyuh_rs1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vxaddsubhr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vxaddsubh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK__GT_, MCK__GT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::S4_vxsubaddhr, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vxsubaddh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK__GT_, MCK__GT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddbsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubbsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK_VecDblRegs, MCK__DOT_, MCK_b, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddhsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vlutvwhi, Convert__Reg1_0__Reg1_6__Reg1_9__u3_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vlut16, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubhsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vlutvwh_oracc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__124_, MCK__61_, MCK_vlut16, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddubsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsububsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduhsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubuhsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK_VecDblRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduwsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vrmpyubi, Convert__Reg1_0__Reg1_6__Reg1_9__u1_0Imm1_13, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrsadubi, Convert__Reg1_0__Reg1_6__Reg1_9__u1_0Imm1_13, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vrsad, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubuwsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddwsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vrmpybusi, Convert__Reg1_0__Reg1_6__Reg1_9__u1_0Imm1_13, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vsubwsat_dv, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsub, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_addh_h16_hh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_addh_h16_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_addh_h16_lh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_addh_h16_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::M2_cmpyrs_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_cmpyi_wh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_cmpyiwh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_cmpyr_wh, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_cmpyrwh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::L2_loadrb_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8__Reg1_12, 0, { MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbsw2_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8__Reg1_12, 0, { MCK_IntRegs, MCK__61_, MCK_membh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrh_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8__Reg1_12, 0, { MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadrub_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_0Imm1_8__Reg1_12, 0, { MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadbzw2_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8__Reg1_12, 0, { MCK_IntRegs, MCK__61_, MCK_memubh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadruh_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_1Imm1_8__Reg1_12, 0, { MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::L2_loadri_pci, Convert__Reg1_0__Reg1_4__Tie1__s4_2Imm1_8__Reg1_12, 0, { MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_hh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_hl_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_lh_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_ll_s0, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_hmmpyh_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_hmmpyl_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpyu_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::A2_subh_h16_hh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_subh_h16_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_subh_h16_lh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_subh_h16_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::M2_vdmpyrs_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vdmpy, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vmpy2s_s1pack, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_s1rp, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddbsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vlutvvbi, Convert__Reg1_0__Reg1_6__Reg1_9__u3_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vlut32, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vpackhb_sat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundhb, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vround, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubbsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vlutvvb_oracc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__124_, MCK__61_, MCK_vlut32, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_IntRegsLow8, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddhsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vavghrnd, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vpackwh_sat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundwh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vround, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubhsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddububb_sat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddubsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vavgubrnd, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vpackhub_sat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundhub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vround, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vrounduhub, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vround, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubububb_sat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsububsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduhsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vavguhrnd, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vpackwuh_sat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vpack, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vrounduwuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vround, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vroundwuh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vround, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubuhsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vadduwsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubuwsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddwsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vavgwrnd, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vavg, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::V6_vdmpyhisat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsusat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhvsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vsubwsat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhsrs, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhsrs, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhvsrs, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhvsrs, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_rnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_rnd, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_UseHVX, { MCK_VectorRegs, MCK__61_, MCK_vmpyowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_acc_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_acc_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mmacls_rs1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmaculs_rs1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpyweuh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmachs_rs1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywoh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mmacuhs_rs1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vmpywouh, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyd_nac_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyud_nac_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_DoubleRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::V6_vlutvwh_nm, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vlut16, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_nomatch }, },
  { 0 /*  */, Hexagon::V6_vlutvwh_oracci, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u3_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK__124_, MCK__61_, MCK_vlut16, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrmpyubi_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u1_0Imm1_14, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__43_, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vrsadubi_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u1_0Imm1_14, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_uw, MCK__43_, MCK__61_, MCK_vrsad, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_ub, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vmpyhsat_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vrmpybusi_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u1_0Imm1_14, Feature_HasV60T|Feature_UseHVX, { MCK_VecDblRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vrmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_ub, MCK_IntRegs, MCK__DOT_, MCK_b, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_acc_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_mpyu_nac_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpyu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1 }, },
  { 0 /*  */, Hexagon::M2_cmpyrsc_s1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_cmpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_cmpyi_whc, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_cmpyiwh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M4_cmpyr_whc, Convert__Reg1_0__Reg1_4__Reg1_5, Feature_HasV5T, { MCK_IntRegs, MCK__61_, MCK_cmpyrwh, MCK__40_, MCK_DoubleRegs, MCK_IntRegs, MCK__STAR_, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_sacc_alt, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_shift }, },
  { 0 /*  */, Hexagon::V6_vasrhbsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vlutvvb_nm, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vlut32, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_nomatch }, },
  { 0 /*  */, Hexagon::V6_vlutvvb_oracci, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10__u3_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__124_, MCK__61_, MCK_vlut32, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__35_, MCK_u3_0Imm, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddclbh, Convert__Reg1_0__Reg1_8__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vadd, MCK__40_, MCK_vclb, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vasrwhsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrhubsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrwuhsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhisat_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsat_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsusat_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhvsat_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vaddclbw, Convert__Reg1_0__Reg1_8__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_vclb, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__41_ }, },
  { 0 /*  */, Hexagon::V6_vaddcarry, Convert__Reg1_0__Reg1_12__Reg1_6__Reg1_9__Tie1, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vadd, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VecPredRegs, MCK__41_, MCK__COLON_, MCK_carry }, },
  { 0 /*  */, Hexagon::V6_vsubcarry, Convert__Reg1_0__Reg1_12__Reg1_6__Reg1_9__Tie1, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vsub, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VecPredRegs, MCK__41_, MCK__COLON_, MCK_carry }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpyd_rnd_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_DoubleRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_s1_h, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_hi }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_s1_l, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_DoubleRegs, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_lo }, },
  { 0 /*  */, Hexagon::A2_addh_h16_sat_hh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_addh_h16_sat_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_addh_h16_sat_lh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_addh_h16_sat_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_rnd_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_hmmpyh_rs1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_hmmpyl_rs1, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::A2_subh_h16_sat_hh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_subh_h16_sat_hl, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_subh_h16_sat_lh, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::A2_subh_h16_sat_ll, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK_sat, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_16 }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsuisat, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__35_, MCK_1, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_acc_s1_h, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_hi }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_acc_s1_l, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, 0, { MCK_DoubleRegs, MCK__43_, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_lo }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_acc_sat_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__43_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_hh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_hl_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_lh_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_nac_sat_ll_s1, Convert__Reg1_0__Tie0__Reg1_5__Reg1_8, 0, { MCK_IntRegs, MCK__MINUS_, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_rnd_sacc_alt, Convert__Reg1_0__Tie0__Reg1_5__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__43_, MCK__61_, MCK_vmpyowh, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_shift }, },
  { 0 /*  */, Hexagon::V6_vasrhbrndsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrwhrndsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrhubrndsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_ub, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasruwuhrndsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_VectorRegs, MCK__DOT_, MCK_uw, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vasrwuhrndsat, Convert__Reg1_0__Reg1_6__Reg1_9__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_uh, MCK__61_, MCK_vasr, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_IntRegsLow8, MCK__41_, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vdmpyhsuisat_acc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vdmpy, MCK__40_, MCK_VecDblRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_uh, MCK__35_, MCK_1, MCK__41_, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_hh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_hl_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_lh_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_mpy_sat_rnd_ll_s1, Convert__Reg1_0__Reg1_4__Reg1_7, 0, { MCK_IntRegs, MCK__61_, MCK_mpy, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_l, MCK_IntRegs, MCK__DOT_, MCK_l, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_s1rp_h, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_hi }, },
  { 0 /*  */, Hexagon::M2_vrcmpys_s1rp_l, Convert__Reg1_0__Reg1_4__Reg1_5, 0, { MCK_IntRegs, MCK__61_, MCK_vrcmpys, MCK__40_, MCK_DoubleRegs, MCK_DoubleRegs, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_raw, MCK__COLON_, MCK_lo }, },
  { 0 /*  */, Hexagon::V6_vmpyhss, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhsrs, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_IntRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyhvsrs, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__61_, MCK_vmpy, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_rnd, Convert__Reg1_0__Reg1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__61_, MCK_vmpyo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_sacc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpyo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_shift }, },
  { 0 /*  */, Hexagon::V6_vmpyowh_rnd_sacc, Convert__Reg1_0__Tie0__Reg1_7__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_vmpyo, MCK__40_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__41_, MCK__COLON_, MCK__LT_, MCK__LT_, MCK_1, MCK__COLON_, MCK_rnd, MCK__COLON_, MCK_sat, MCK__COLON_, MCK_shift }, },
  { 1 /* DUPLEX */, Hexagon::DUPLEX_Pseudo, Convert__imm_95_0, 0, { MCK_DUPLEX }, },
  { 8 /* allocframe */, Hexagon::S2_allocframe, Convert__u11_3Imm1_3, 0, { MCK_allocframe, MCK__40_, MCK__35_, MCK_u11_3Imm, MCK__41_ }, },
  { 19 /* barrier */, Hexagon::Y2_barrier, Convert_NoOperands, 0, { MCK_barrier }, },
  { 27 /* brkpt */, Hexagon::Y2_break, Convert_NoOperands, 0, { MCK_brkpt }, },
  { 33 /* call */, Hexagon::J2_call, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4_EXT_PIC, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::RESTORE_DEALLOC_BEFORE_TAILCALL_V4_PIC, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4STK, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4STK_EXT, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4STK_EXT_PIC, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4STK_PIC, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4_EXT, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4_EXT_PIC, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 33 /* call */, Hexagon::SAVE_REGISTERS_CALL_V4_PIC, Convert__a30_2Imm1_1, 0, { MCK_call, MCK_a30_2Imm }, },
  { 38 /* callr */, Hexagon::J2_callr, Convert__Reg1_1, 0, { MCK_callr, MCK_IntRegs }, },
  { 44 /* dccleana */, Hexagon::Y2_dccleana, Convert__Reg1_2, 0, { MCK_dccleana, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 53 /* dccleaninva */, Hexagon::Y2_dccleaninva, Convert__Reg1_2, 0, { MCK_dccleaninva, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 65 /* dcfetch */, Hexagon::Y2_dcfetchbo, Convert__Reg1_2__imm_95_0, 0, { MCK_dcfetch, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 65 /* dcfetch */, Hexagon::Y2_dcfetchbo, Convert__Reg1_2__u11_3Imm1_5, 0, { MCK_dcfetch, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u11_3Imm, MCK__41_ }, },
  { 73 /* dcinva */, Hexagon::Y2_dcinva, Convert__Reg1_2, 0, { MCK_dcinva, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 80 /* dczeroa */, Hexagon::Y2_dczeroa, Convert__Reg1_2, 0, { MCK_dczeroa, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 88 /* dealloc_return */, Hexagon::L4_return, Convert_NoOperands, 0, { MCK_dealloc_95_return }, },
  { 103 /* deallocframe */, Hexagon::L2_deallocframe, Convert_NoOperands, 0, { MCK_deallocframe }, },
  { 116 /* endloop0 */, Hexagon::J2_endloop0, Convert_NoOperands, 0, { MCK_endloop0 }, },
  { 125 /* endloop01 */, Hexagon::J2_endloop01, Convert_NoOperands, 0, { MCK_endloop01 }, },
  { 135 /* endloop1 */, Hexagon::J2_endloop1, Convert_NoOperands, 0, { MCK_endloop1 }, },
  { 144 /* hintjr */, Hexagon::J4_hintjumpr, Convert__Reg1_2, 0, { MCK_hintjr, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 151 /* icinva */, Hexagon::Y2_icinva, Convert__Reg1_2, 0, { MCK_icinva, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_return_t, Convert__Reg1_2, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_dealloc_95_return }, },
  { 158 /* if */, Hexagon::L4_return_f, Convert__Reg1_3, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_dealloc_95_return }, },
  { 158 /* if */, Hexagon::J2_callt, Convert__Reg1_2__a30_2Imm1_5, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_call, MCK_a30_2Imm }, },
  { 158 /* if */, Hexagon::J2_callrt, Convert__Reg1_2__Reg1_5, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_callr, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::J2_jumpt, Convert__Reg1_2__b30_2Imm1_5, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_jump, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprt, Convert__Reg1_2__Reg1_5, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_jumpr, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::J2_callf, Convert__Reg1_3__a30_2Imm1_6, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_call, MCK_a30_2Imm }, },
  { 158 /* if */, Hexagon::J2_callrf, Convert__Reg1_3__Reg1_6, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_callr, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::J2_jumpf, Convert__Reg1_3__b30_2Imm1_6, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_jump, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprf, Convert__Reg1_3__Reg1_6, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_jumpr, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::A2_tfrpt, Convert__Reg1_4__Reg1_2__Reg1_6, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::A2_paddit, Convert__Reg1_4__Reg1_2__Reg1_6__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vcmov, Convert__Reg1_4__Reg1_2__Reg1_6, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::A2_tfrpf, Convert__Reg1_5__Reg1_3__Reg1_7, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::A2_paddif, Convert__Reg1_5__Reg1_3__Reg1_7__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vncmov, Convert__Reg1_5__Reg1_3__Reg1_7, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::J2_jumpt, Convert__Reg1_2__b30_2Imm1_7, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumptpt, Convert__Reg1_2__b30_2Imm1_7, Feature_HasV60T, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprt, Convert__Reg1_2__Reg1_7, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_nt, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::J2_jumprtpt, Convert__Reg1_2__Reg1_7, Feature_HasV60T, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_t, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::C2_cmoveit, Convert__Reg1_4__Reg1_2__s32_0Imm1_7, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::J2_jumpf, Convert__Reg1_3__b30_2Imm1_8, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumpfpt, Convert__Reg1_3__b30_2Imm1_8, Feature_HasV60T, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprf, Convert__Reg1_3__Reg1_8, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_nt, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::J2_jumprfpt, Convert__Reg1_3__Reg1_8, Feature_HasV60T, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_t, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::C2_cmoveif, Convert__Reg1_5__Reg1_3__s32_0Imm1_8, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::L4_return_tnew_pnt, Convert__Reg1_2, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_dealloc_95_return, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::L4_return_tnew_pt, Convert__Reg1_2, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_dealloc_95_return, MCK__COLON_, MCK_t }, },
  { 158 /* if */, Hexagon::A2_tfrptnew, Convert__Reg1_6__Reg1_2__Reg1_8, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::A2_padditnew, Convert__Reg1_6__Reg1_2__Reg1_8__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L4_return_fnew_pnt, Convert__Reg1_3, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_dealloc_95_return, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::L4_return_fnew_pt, Convert__Reg1_3, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_dealloc_95_return, MCK__COLON_, MCK_t }, },
  { 158 /* if */, Hexagon::A2_tfrpfnew, Convert__Reg1_7__Reg1_3__Reg1_9, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::A2_paddifnew, Convert__Reg1_7__Reg1_3__Reg1_9__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerbt_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdt_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerht_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerit_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_pred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_pred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_pred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_pred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdt_io, Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_paslht, Convert__Reg1_4__Reg1_2__Reg1_8, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_aslh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pasrht, Convert__Reg1_4__Reg1_2__Reg1_8, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_asrh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbt_io, Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrht_io, Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubt_io, Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruht_io, Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrit_io, Convert__Reg1_4__Reg1_2__Reg1_8__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxtbt, Convert__Reg1_4__Reg1_2__Reg1_8, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxtht, Convert__Reg1_4__Reg1_2__Reg1_8, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxtbt, Convert__Reg1_4__Reg1_2__Reg1_8, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxtht, Convert__Reg1_4__Reg1_2__Reg1_8, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::J2_jumptnew, Convert__Reg1_2__b30_2Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumptnewpt, Convert__Reg1_2__b30_2Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprtnew, Convert__Reg1_2__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_nt, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::J2_jumprtnewpt, Convert__Reg1_2__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_t, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::C2_cmovenewit, Convert__Reg1_6__Reg1_2__s32_0Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::V6_vS32b_qpred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_qpred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerbf_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdf_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerhf_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerif_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_npred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_npred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_npred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_npred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdf_io, Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_paslhf, Convert__Reg1_5__Reg1_3__Reg1_9, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_aslh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pasrhf, Convert__Reg1_5__Reg1_3__Reg1_9, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_asrh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbf_io, Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhf_io, Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubf_io, Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhf_io, Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrif_io, Convert__Reg1_5__Reg1_3__Reg1_9__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxtbf, Convert__Reg1_5__Reg1_3__Reg1_9, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxthf, Convert__Reg1_5__Reg1_3__Reg1_9, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxtbf, Convert__Reg1_5__Reg1_3__Reg1_9, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxthf, Convert__Reg1_5__Reg1_3__Reg1_9, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::J2_jumpfnew, Convert__Reg1_3__b30_2Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumpfnewpt, Convert__Reg1_3__b30_2Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprfnew, Convert__Reg1_3__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_nt, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::J2_jumprfnewpt, Convert__Reg1_3__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_jumpr, MCK__COLON_, MCK_t, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::C2_cmovenewif, Convert__Reg1_7__Reg1_3__s32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::V6_vS32b_nqpred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nqpred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerbt_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirbt_io, Convert__Reg1_2__Reg1_6__imm_95_0__s32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstorerdt_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerht_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirht_io, Convert__Reg1_2__Reg1_6__imm_95_0__s32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstorerit_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirit_io, Convert__Reg1_2__Reg1_6__imm_95_0__s32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::C2_ccombinewt, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrdt_abs, Convert__Reg1_4__Reg1_2__u32_0Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vccombine, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VecDblRegs, MCK__61_, MCK_vcombine, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_paddt, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pandt, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbt_abs, Convert__Reg1_4__Reg1_2__u32_0Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrht_abs, Convert__Reg1_4__Reg1_2__u32_0Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubt_abs, Convert__Reg1_4__Reg1_2__u32_0Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruht_abs, Convert__Reg1_4__Reg1_2__u32_0Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrit_abs, Convert__Reg1_4__Reg1_2__u32_0Imm1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_port, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_psubt, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pxort, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbf_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirbf_io, Convert__Reg1_3__Reg1_7__imm_95_0__s32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstorerdf_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerhf_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirhf_io, Convert__Reg1_3__Reg1_7__imm_95_0__s32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstorerif_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirif_io, Convert__Reg1_3__Reg1_7__imm_95_0__s32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::C2_ccombinewf, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrdf_abs, Convert__Reg1_5__Reg1_3__u32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vnccombine, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VecDblRegs, MCK__61_, MCK_vcombine, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_paddf, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pandf, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbf_abs, Convert__Reg1_5__Reg1_3__u32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrhf_abs, Convert__Reg1_5__Reg1_3__u32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubf_abs, Convert__Reg1_5__Reg1_3__u32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruhf_abs, Convert__Reg1_5__Reg1_3__u32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrif_abs, Convert__Reg1_5__Reg1_3__u32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_porf, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_psubf, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pxorf, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewt_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerft_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewt_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerinewt_io, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_9, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_pred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_pred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::A2_paddit, Convert__Reg1_4__Reg1_2__Reg1_8__s32_0Imm1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerhtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstoreritnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_paslhtnew, Convert__Reg1_6__Reg1_2__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_aslh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pasrhtnew, Convert__Reg1_6__Reg1_2__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_asrh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadritnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__imm_95_0, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxtbtnew, Convert__Reg1_6__Reg1_2__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxthtnew, Convert__Reg1_6__Reg1_2__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxtbtnew, Convert__Reg1_6__Reg1_2__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxthtnew, Convert__Reg1_6__Reg1_2__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_qpred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_qpred_ai, Convert__Reg1_2__Reg1_6__imm_95_0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vaddbq, Convert__Reg1_4__Reg1_2__Tie0__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vsubbq, Convert__Reg1_4__Reg1_2__Tie0__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vaddhq, Convert__Reg1_4__Reg1_2__Tie0__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vsubhq, Convert__Reg1_4__Reg1_2__Tie0__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vaddwq, Convert__Reg1_4__Reg1_2__Tie0__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vsubwq, Convert__Reg1_4__Reg1_2__Tie0__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::J2_jumprz, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__EXCLAIM_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprzpt, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__EXCLAIM_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprltez, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprltezpt, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprnz, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__61_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprnzpt, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__61_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprgtez, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__GT_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::J2_jumprgtezpt, Convert__Reg1_2__b13_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_IntRegs, MCK__GT_, MCK__61_, MCK__35_, MCK_0, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b13_2Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewf_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerff_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewf_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerinewf_io, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_10, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_npred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_npred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::A2_paddif, Convert__Reg1_5__Reg1_3__Reg1_9__s32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerhfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerifnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_paslhfnew, Convert__Reg1_7__Reg1_3__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_aslh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pasrhfnew, Convert__Reg1_7__Reg1_3__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_asrh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrifnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__imm_95_0, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxtbfnew, Convert__Reg1_7__Reg1_3__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_psxthfnew, Convert__Reg1_7__Reg1_3__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxtbfnew, Convert__Reg1_7__Reg1_3__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxtb, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A4_pzxthfnew, Convert__Reg1_7__Reg1_3__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_zxth, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_nqpred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_nqpred_ai, Convert__Reg1_3__Reg1_7__imm_95_0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vaddbnq, Convert__Reg1_5__Reg1_3__Tie0__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vsubbnq, Convert__Reg1_5__Reg1_3__Tie0__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vaddhnq, Convert__Reg1_5__Reg1_3__Tie0__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vsubhnq, Convert__Reg1_5__Reg1_3__Tie0__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vaddwnq, Convert__Reg1_5__Reg1_3__Tie0__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vsubwnq, Convert__Reg1_5__Reg1_3__Tie0__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewt_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerbt_io, Convert__Reg1_2__Reg1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdt_io, Convert__Reg1_2__Reg1_6__u29_3Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerft_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewt_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerht_io, Convert__Reg1_2__Reg1_6__u31_1Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerinewt_abs, Convert__Reg1_2__u32_0Imm1_7__Reg1_10, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerit_io, Convert__Reg1_2__Reg1_6__u30_2Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_pred_ai, Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_pred_ppu, Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_pred_ai, Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_pred_ppu, Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdt_io, Convert__Reg1_4__Reg1_2__Reg1_8__u29_3Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbt_io, Convert__Reg1_4__Reg1_2__Reg1_8__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrht_io, Convert__Reg1_4__Reg1_2__Reg1_8__u31_1Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubt_io, Convert__Reg1_4__Reg1_2__Reg1_8__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruht_io, Convert__Reg1_4__Reg1_2__Reg1_8__u31_1Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrit_io, Convert__Reg1_4__Reg1_2__Reg1_8__u30_2Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_pred_ai, Convert__Reg1_4__Reg1_2__Reg1_8__s4_0Imm1_11, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_pred_ppu, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__Reg1_11, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbtnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirbtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__s32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstorerdtnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerhtnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirhtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__s32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstoreritnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeiritnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__s32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::C2_ccombinewnewt, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrdtnew_abs, Convert__Reg1_6__Reg1_2__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_paddtnew, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pandtnew, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbtnew_abs, Convert__Reg1_6__Reg1_2__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrhtnew_abs, Convert__Reg1_6__Reg1_2__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubtnew_abs, Convert__Reg1_6__Reg1_2__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruhtnew_abs, Convert__Reg1_6__Reg1_2__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadritnew_abs, Convert__Reg1_6__Reg1_2__u32_0Imm1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_portnew, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_psubtnew, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pxortnew, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_qpred_ai, Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_qpred_ppu, Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewf_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerbf_io, Convert__Reg1_3__Reg1_7__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdf_io, Convert__Reg1_3__Reg1_7__u29_3Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerff_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewf_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerhf_io, Convert__Reg1_3__Reg1_7__u31_1Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerinewf_abs, Convert__Reg1_3__u32_0Imm1_8__Reg1_11, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerif_io, Convert__Reg1_3__Reg1_7__u30_2Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_npred_ai, Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_npred_ppu, Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_npred_ai, Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_npred_ppu, Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdf_io, Convert__Reg1_5__Reg1_3__Reg1_9__u29_3Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbf_io, Convert__Reg1_5__Reg1_3__Reg1_9__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhf_io, Convert__Reg1_5__Reg1_3__Reg1_9__u31_1Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubf_io, Convert__Reg1_5__Reg1_3__Reg1_9__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhf_io, Convert__Reg1_5__Reg1_3__Reg1_9__u31_1Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrif_io, Convert__Reg1_5__Reg1_3__Reg1_9__u30_2Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_npred_ai, Convert__Reg1_5__Reg1_3__Reg1_9__s4_0Imm1_12, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_npred_ppu, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbfnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirbfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__s32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstorerdfnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerhfnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirhfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__s32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S4_pstorerifnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirifnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__s32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::C2_ccombinewnewf, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_combine, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrdfnew_abs, Convert__Reg1_7__Reg1_3__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_paddfnew, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pandfnew, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_and, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbfnew_abs, Convert__Reg1_7__Reg1_3__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrhfnew_abs, Convert__Reg1_7__Reg1_3__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubfnew_abs, Convert__Reg1_7__Reg1_3__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruhfnew_abs, Convert__Reg1_7__Reg1_3__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrifnew_abs, Convert__Reg1_7__Reg1_3__u32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_porfnew, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_or, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_psubfnew, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_sub, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::A2_pxorfnew, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_xor, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nqpred_ai, Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nqpred_ppu, Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::S4_storeirbt_io, Convert__Reg1_2__Reg1_6__u6_0Imm1_9__s32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_0Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbt_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdt_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_3Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_storeirht_io, Convert__Reg1_2__Reg1_6__u6_1Imm1_9__s32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_1Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerht_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_1Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirit_io, Convert__Reg1_2__Reg1_6__u6_2Imm1_9__s32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_2Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerit_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_2Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_pred_pi, Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_pred_pi, Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdt_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_3Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbt_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_0Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrht_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_1Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubt_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_0Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruht_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_1Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrit_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s4_2Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_pred_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s3_0Imm1_12, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerftnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewtnew_io, Convert__Reg1_2__Reg1_8__imm_95_0__Reg1_11, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::A2_padditnew, Convert__Reg1_6__Reg1_2__Reg1_10__s32_0Imm1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_qpred_pi, Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vaddbq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vaddbq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vsubbq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vsubbq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vaddhq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vaddhq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vsubhq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vsubhq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vaddwq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vaddwq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vsubwq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vsubwq, Convert__Reg1_6__Reg1_2__Tie0__Reg1_11, Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::S4_storeirbf_io, Convert__Reg1_3__Reg1_7__u6_0Imm1_10__s32_0Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_0Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbf_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_0Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdf_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_3Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_storeirhf_io, Convert__Reg1_3__Reg1_7__u6_1Imm1_10__s32_0Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_1Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerhf_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_1Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirif_io, Convert__Reg1_3__Reg1_7__u6_2Imm1_10__s32_0Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_2Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerif_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_2Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_npred_pi, Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32Ub_npred_pi, Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdf_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_3Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbf_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_0Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhf_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_1Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubf_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_0Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhf_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_1Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrif_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s4_2Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_npred_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s3_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerffnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewfnew_io, Convert__Reg1_3__Reg1_9__imm_95_0__Reg1_12, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::A2_paddifnew, Convert__Reg1_7__Reg1_3__Reg1_11__s32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_add, MCK__40_, MCK_IntRegs, MCK__35_, MCK_s32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nqpred_pi, Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vaddbnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vaddbnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vsubbnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vsubbnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_b, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_b, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_b }, },
  { 158 /* if */, Hexagon::V6_vaddhnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vaddhnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vsubhnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vsubhnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_h, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_h, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::V6_vaddwnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vaddwnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__43_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vsubwnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::V6_vsubwnq, Convert__Reg1_7__Reg1_3__Tie0__Reg1_12, Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__DOT_, MCK_w, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_w, MCK__MINUS_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_w }, },
  { 158 /* if */, Hexagon::J4_tstbit0_t_jumpnv_nt, Convert__Reg1_4__b30_2Imm1_14, 0, { MCK_if, MCK__40_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_0, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_tstbit0_t_jumpnv_t, Convert__Reg1_4__b30_2Imm1_14, 0, { MCK_if, MCK__40_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_0, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewt_io, Convert__Reg1_2__Reg1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerft_io, Convert__Reg1_2__Reg1_6__u31_1Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewt_io, Convert__Reg1_2__Reg1_6__u31_1Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerinewt_io, Convert__Reg1_2__Reg1_6__u30_2Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_pred_ai, Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_new_pred_ai, Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_pred_ppu, Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_new_pred_ppu, Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_12, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vL32b_cur_pred_ai, Convert__Reg1_4__Reg1_2__Reg1_10__s4_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_cur_pred_ppu, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__Reg1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_tmp_pred_ai, Convert__Reg1_4__Reg1_2__Reg1_10__s4_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_tmp_pred_ppu, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__Reg1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_pred_ai, Convert__Reg1_4__Reg1_2__Reg1_8__s4_0Imm1_11, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_pred_ppu, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__Reg1_11, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewtnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbtnew_io, Convert__Reg1_2__Reg1_8__u32_0Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdtnew_io, Convert__Reg1_2__Reg1_8__u29_3Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerftnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewtnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerhtnew_io, Convert__Reg1_2__Reg1_8__u31_1Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerinewtnew_abs, Convert__Reg1_2__u32_0Imm1_9__Reg1_12, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstoreritnew_io, Convert__Reg1_2__Reg1_8__u30_2Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__u29_3Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__u32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__u31_1Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__u32_0Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhtnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__u31_1Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadritnew_io, Convert__Reg1_6__Reg1_2__Reg1_10__u30_2Imm1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_qpred_ai, Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_qpred_ppu, Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::J4_tstbit0_f_jumpnv_nt, Convert__Reg1_5__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_0, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_tstbit0_f_jumpnv_t, Convert__Reg1_5__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_tstbit, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_0, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewf_io, Convert__Reg1_3__Reg1_7__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerff_io, Convert__Reg1_3__Reg1_7__u31_1Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewf_io, Convert__Reg1_3__Reg1_7__u31_1Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S2_pstorerinewf_io, Convert__Reg1_3__Reg1_7__u30_2Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_npred_ai, Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_new_npred_ai, Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_npred_ppu, Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_new_npred_ppu, Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vL32b_cur_npred_ai, Convert__Reg1_5__Reg1_3__Reg1_11__s4_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_cur_npred_ppu, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__Reg1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_tmp_npred_ai, Convert__Reg1_5__Reg1_3__Reg1_11__s4_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_tmp_npred_ppu, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__Reg1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_npred_ai, Convert__Reg1_5__Reg1_3__Reg1_9__s4_0Imm1_12, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_npred_ppu, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__Reg1_12, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewfnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbfnew_io, Convert__Reg1_3__Reg1_9__u32_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdfnew_io, Convert__Reg1_3__Reg1_9__u29_3Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerffnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewfnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerhfnew_io, Convert__Reg1_3__Reg1_9__u31_1Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerinewfnew_abs, Convert__Reg1_3__u32_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerifnew_io, Convert__Reg1_3__Reg1_9__u30_2Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__u29_3Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__u32_0Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__u31_1Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__u32_0Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhfnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__u31_1Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrifnew_io, Convert__Reg1_7__Reg1_3__Reg1_11__u30_2Imm1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_nqpred_ai, Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_nqpred_ppu, Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::J4_cmpeq_t_jumpnv_nt, Convert__Reg1_6__Reg1_9__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeq_t_jumpnv_t, Convert__Reg1_6__Reg1_9__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgt_t_jumpnv_nt, Convert__Reg1_6__Reg1_9__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgt_t_jumpnv_t, Convert__Reg1_6__Reg1_9__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmplt_t_jumpnv_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmplt_t_jumpnv_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtu_t_jumpnv_nt, Convert__Reg1_6__Reg1_9__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtu_t_jumpnv_t, Convert__Reg1_6__Reg1_9__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpltu_t_jumpnv_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpltu_t_jumpnv_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_15, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewt_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_0Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbt_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdt_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerft_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_1Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewt_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_1Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerht_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerinewt_pi, Convert__Reg1_6__Reg1_2__Tie0__s4_2Imm1_10__Reg1_13, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerit_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_pred_pi, Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_new_pred_pi, Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_13, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::L4_ploadrdt_rr, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbt_rr, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrht_rr, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubt_rr, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruht_rr, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrit_rr, Convert__Reg1_4__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_cur_pred_pi, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__s3_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_tmp_pred_pi, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__s3_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_pred_pi, Convert__Reg1_4__Reg1_8__Reg1_2__Tie1__s3_0Imm1_12, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S4_storeirbtnew_io, Convert__Reg1_2__Reg1_8__u6_0Imm1_11__s32_0Imm1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_0Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbtnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdtnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_3Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_storeirhtnew_io, Convert__Reg1_2__Reg1_8__u6_1Imm1_11__s32_0Imm1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_1Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerhtnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_1Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeiritnew_io, Convert__Reg1_2__Reg1_8__u6_2Imm1_11__s32_0Imm1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_2Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstoreritnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_2Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdtnew_pi, Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_3Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbtnew_pi, Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhtnew_pi, Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_1Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubtnew_pi, Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_0Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhtnew_pi, Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_1Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadritnew_pi, Convert__Reg1_6__Reg1_10__Reg1_2__Tie1__s4_2Imm1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_qpred_pi, Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::J4_cmpeq_f_jumpnv_nt, Convert__Reg1_7__Reg1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeq_f_jumpnv_t, Convert__Reg1_7__Reg1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgt_f_jumpnv_nt, Convert__Reg1_7__Reg1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgt_f_jumpnv_t, Convert__Reg1_7__Reg1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmplt_f_jumpnv_nt, Convert__Reg1_7__Reg1_8__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmplt_f_jumpnv_t, Convert__Reg1_7__Reg1_8__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtu_f_jumpnv_nt, Convert__Reg1_7__Reg1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtu_f_jumpnv_t, Convert__Reg1_7__Reg1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK_IntRegs, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpltu_f_jumpnv_nt, Convert__Reg1_7__Reg1_8__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpltu_f_jumpnv_t, Convert__Reg1_7__Reg1_8__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewf_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_0Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbf_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdf_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerff_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_1Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewf_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_1Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerhf_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerinewf_pi, Convert__Reg1_7__Reg1_3__Tie0__s4_2Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerif_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_npred_pi, Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_16, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::V6_vS32b_new_npred_pi, Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::L4_ploadrdf_rr, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbf_rr, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrhf_rr, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubf_rr, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruhf_rr, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrif_rr, Convert__Reg1_5__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_cur_npred_pi, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__s3_0Imm1_15, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_tmp_npred_pi, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__s3_0Imm1_15, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_npred_pi, Convert__Reg1_5__Reg1_9__Reg1_3__Tie1__s3_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S4_storeirbfnew_io, Convert__Reg1_3__Reg1_9__u6_0Imm1_12__s32_0Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_0Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerbfnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerdfnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_3Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S4_storeirhfnew_io, Convert__Reg1_3__Reg1_9__u6_1Imm1_12__s32_0Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_1Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerhfnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_1Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_storeirifnew_io, Convert__Reg1_3__Reg1_9__u6_2Imm1_12__s32_0Imm1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_2Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 158 /* if */, Hexagon::S2_pstorerifnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_2Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L2_ploadrdfnew_pi, Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_3Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrbfnew_pi, Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrhfnew_pi, Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_1Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrubfnew_pi, Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_0Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadruhfnew_pi, Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_1Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L2_ploadrifnew_pi, Convert__Reg1_7__Reg1_11__Reg1_3__Tie1__s4_2Imm1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_nqpred_pi, Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_16, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_VecPredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 158 /* if */, Hexagon::J4_cmpeqn1_t_jumpnv_nt, Convert__Reg1_6__n1Const1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeqn1_t_jumpnv_t, Convert__Reg1_6__n1Const1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeqi_t_jumpnv_nt, Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeqi_t_jumpnv_t, Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtn1_t_jumpnv_nt, Convert__Reg1_6__n1Const1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtn1_t_jumpnv_t, Convert__Reg1_6__n1Const1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgti_t_jumpnv_nt, Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgti_t_jumpnv_t, Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtui_t_jumpnv_nt, Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtui_t_jumpnv_t, Convert__Reg1_6__u5_0Imm1_10__b30_2Imm1_16, 0, { MCK_if, MCK__40_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_new_pred_ai, Convert__Reg1_2__Reg1_6__s4_0Imm1_9__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_new_pred_ppu, Convert__Reg1_6__Reg1_2__Tie0__Reg1_9__Reg1_14, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_cur_pred_ai, Convert__Reg1_4__Reg1_2__Reg1_10__s4_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_cur_pred_ppu, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__Reg1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_tmp_pred_ai, Convert__Reg1_4__Reg1_2__Reg1_10__s4_0Imm1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_tmp_pred_ppu, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__Reg1_13, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewtnew_io, Convert__Reg1_2__Reg1_8__u32_0Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerftnew_io, Convert__Reg1_2__Reg1_8__u31_1Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewtnew_io, Convert__Reg1_2__Reg1_8__u31_1Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewtnew_io, Convert__Reg1_2__Reg1_8__u30_2Imm1_11__Reg1_14, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::J4_cmpeqn1_f_jumpnv_nt, Convert__Reg1_7__n1Const1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeqn1_f_jumpnv_t, Convert__Reg1_7__n1Const1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeqi_f_jumpnv_nt, Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpeqi_f_jumpnv_t, Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtn1_f_jumpnv_nt, Convert__Reg1_7__n1Const1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtn1_f_jumpnv_t, Convert__Reg1_7__n1Const1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_n1Const, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgti_f_jumpnv_nt, Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgti_f_jumpnv_t, Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtui_f_jumpnv_nt, Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::J4_cmpgtui_f_jumpnv_t, Convert__Reg1_7__u5_0Imm1_11__b30_2Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_IntRegs, MCK__DOT_, MCK_new, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_new_npred_ai, Convert__Reg1_3__Reg1_7__s4_0Imm1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_new_npred_ppu, Convert__Reg1_7__Reg1_3__Tie0__Reg1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_cur_npred_ai, Convert__Reg1_5__Reg1_3__Reg1_11__s4_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_cur_npred_ppu, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__Reg1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_tmp_npred_ai, Convert__Reg1_5__Reg1_3__Reg1_11__s4_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_tmp_npred_ppu, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__Reg1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewfnew_io, Convert__Reg1_3__Reg1_9__u32_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerffnew_io, Convert__Reg1_3__Reg1_9__u31_1Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewfnew_io, Convert__Reg1_3__Reg1_9__u31_1Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewfnew_io, Convert__Reg1_3__Reg1_9__u30_2Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewt_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerft_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewt_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewt_rr, Convert__Reg1_2__Reg1_6__Reg1_8__u2_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_new_pred_pi, Convert__Reg1_6__Reg1_2__Tie0__s3_0Imm1_10__Reg1_15, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_cur_pred_pi, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__s3_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_tmp_pred_pi, Convert__Reg1_4__Reg1_10__Reg1_2__Tie1__s3_0Imm1_14, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewtnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_0Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbtnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdtnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerftnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_1Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewtnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_1Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerhtnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerinewtnew_pi, Convert__Reg1_8__Reg1_2__Tie0__s4_2Imm1_12__Reg1_15, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstoreritnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L4_ploadrdtnew_rr, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbtnew_rr, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrhtnew_rr, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubtnew_rr, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruhtnew_rr, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadritnew_rr, Convert__Reg1_6__Reg1_2__Reg1_10__Reg1_12__u2_0Imm1_16, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewf_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerff_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewf_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewf_rr, Convert__Reg1_3__Reg1_7__Reg1_9__u2_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vS32b_nt_new_npred_pi, Convert__Reg1_7__Reg1_3__Tie0__s3_0Imm1_11__Reg1_16, Feature_HasV60T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_cur_npred_pi, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__s3_0Imm1_15, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_cur, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::V6_vL32b_nt_tmp_npred_pi, Convert__Reg1_5__Reg1_11__Reg1_3__Tie1__s3_0Imm1_15, Feature_HasV62T|Feature_UseHVX, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__41_, MCK_VectorRegs, MCK__DOT_, MCK_tmp, MCK__61_, MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt }, },
  { 158 /* if */, Hexagon::S2_pstorerbnewfnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_0Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbfnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S4_pstorerdfnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerffnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_1Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S2_pstorerhnewfnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_1Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerhfnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::S2_pstorerinewfnew_pi, Convert__Reg1_9__Reg1_3__Tie0__s4_2Imm1_13__Reg1_16, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerifnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 158 /* if */, Hexagon::L4_ploadrdfnew_rr, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_DoubleRegs, MCK__61_, MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrbfnew_rr, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrhfnew_rr, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrubfnew_rr, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memub, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadruhfnew_rr, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memuh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::L4_ploadrifnew_rr, Convert__Reg1_7__Reg1_3__Reg1_11__Reg1_13__u2_0Imm1_17, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_IntRegs, MCK__61_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_ }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewtnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerftnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewtnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewtnew_rr, Convert__Reg1_2__Reg1_8__Reg1_10__u2_0Imm1_14__Reg1_17, 0, { MCK_if, MCK__40_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerbnewfnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerffnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 158 /* if */, Hexagon::S4_pstorerhnewfnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 158 /* if */, Hexagon::S4_pstorerinewfnew_rr, Convert__Reg1_3__Reg1_9__Reg1_11__u2_0Imm1_15__Reg1_18, 0, { MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_PredRegs, MCK__DOT_, MCK_new, MCK__41_, MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 161 /* immext */, Hexagon::A4_ext, Convert__u26_6Imm1_3, 0, { MCK_immext, MCK__40_, MCK__35_, MCK_u26_6Imm, MCK__41_ }, },
  { 168 /* isync */, Hexagon::Y2_isync, Convert_NoOperands, 0, { MCK_isync }, },
  { 174 /* jump */, Hexagon::J2_jump, Convert__b30_2Imm1_1, 0, { MCK_jump, MCK_b30_2Imm }, },
  { 174 /* jump */, Hexagon::RESTORE_DEALLOC_RET_JMP_V4, Convert__b30_2Imm1_1, 0, { MCK_jump, MCK_b30_2Imm }, },
  { 174 /* jump */, Hexagon::RESTORE_DEALLOC_RET_JMP_V4_EXT, Convert__b30_2Imm1_1, 0, { MCK_jump, MCK_b30_2Imm }, },
  { 174 /* jump */, Hexagon::RESTORE_DEALLOC_RET_JMP_V4_EXT_PIC, Convert__b30_2Imm1_1, 0, { MCK_jump, MCK_b30_2Imm }, },
  { 174 /* jump */, Hexagon::RESTORE_DEALLOC_RET_JMP_V4_PIC, Convert__b30_2Imm1_1, 0, { MCK_jump, MCK_b30_2Imm }, },
  { 179 /* jumpr */, Hexagon::J2_jumpr, Convert__Reg1_1, 0, { MCK_jumpr, MCK_IntRegs }, },
  { 185 /* l2fetch */, Hexagon::Y5_l2fetch, Convert__Reg1_2__Reg1_3, Feature_HasV5T, { MCK_l2fetch, MCK__40_, MCK_IntRegs, MCK_DoubleRegs, MCK__41_ }, },
  { 185 /* l2fetch */, Hexagon::Y4_l2fetch, Convert__Reg1_2__Reg1_3, 0, { MCK_l2fetch, MCK__40_, MCK_IntRegs, MCK_IntRegs, MCK__41_ }, },
  { 193 /* loop0 */, Hexagon::J2_loop0r, Convert__b30_2Imm1_2__Reg1_3, 0, { MCK_loop0, MCK__40_, MCK_b30_2Imm, MCK_IntRegs, MCK__41_ }, },
  { 193 /* loop0 */, Hexagon::J2_loop0i, Convert__b30_2Imm1_2__u10_0Imm1_4, 0, { MCK_loop0, MCK__40_, MCK_b30_2Imm, MCK__35_, MCK_u10_0Imm, MCK__41_ }, },
  { 199 /* loop1 */, Hexagon::J2_loop1r, Convert__b30_2Imm1_2__Reg1_3, 0, { MCK_loop1, MCK__40_, MCK_b30_2Imm, MCK_IntRegs, MCK__41_ }, },
  { 199 /* loop1 */, Hexagon::J2_loop1i, Convert__b30_2Imm1_2__u10_0Imm1_4, 0, { MCK_loop1, MCK__40_, MCK_b30_2Imm, MCK__35_, MCK_u10_0Imm, MCK__41_ }, },
  { 205 /* memb */, Hexagon::S2_storerb_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::PS_storerbabs, Convert__u32_0Imm1_3__Reg1_6, 0, { MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_and_memopb_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__38_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_add_memopb_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__43_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_sub_memopb_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__MINUS_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S4_storeirb_io, Convert__Reg1_2__imm_95_0__s32_0Imm1_6, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 205 /* memb */, Hexagon::L4_or_memopb_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__124_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_iadd_memopb_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_7, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__43_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 205 /* memb */, Hexagon::L4_isub_memopb_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_7, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__MINUS_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 205 /* memb */, Hexagon::S2_storerbnew_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::PS_storerbnewabs, Convert__u32_0Imm1_3__Reg1_6, 0, { MCK_memb, MCK__40_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S2_storerbgp, Convert__u32_0Imm1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S2_storerb_io, Convert__Reg1_2__s32_0Imm1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S2_storerb_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S4_storerb_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_iand_memopb_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_clrbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 205 /* memb */, Hexagon::L4_ior_memopb_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_setbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 205 /* memb */, Hexagon::L4_and_memopb_io, Convert__Reg1_2__u32_0Imm1_5__Reg1_9, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__38_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_add_memopb_io, Convert__Reg1_2__u32_0Imm1_5__Reg1_9, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__43_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_sub_memopb_io, Convert__Reg1_2__u32_0Imm1_5__Reg1_9, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__MINUS_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_or_memopb_io, Convert__Reg1_2__u32_0Imm1_5__Reg1_9, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__124_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S4_storeirb_io, Convert__Reg1_2__u6_0Imm1_5__s32_0Imm1_9, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_0Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 205 /* memb */, Hexagon::S2_storerb_pi, Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_9, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S2_storerbnewgp, Convert__u32_0Imm1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S2_storerbnew_io, Convert__Reg1_2__s32_0Imm1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::L4_iadd_memopb_io, Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_10, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__43_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 205 /* memb */, Hexagon::L4_isub_memopb_io, Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_10, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__MINUS_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 205 /* memb */, Hexagon::S2_storerbnew_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S2_storerb_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S4_storerbnew_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S2_storerbnew_pi, Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_9, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S4_storerb_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::L4_iand_memopb_io, Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_11, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_clrbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 205 /* memb */, Hexagon::L4_ior_memopb_io, Convert__Reg1_2__u32_0Imm1_5__u5_0Imm1_11, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_setbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 205 /* memb */, Hexagon::S2_storerbnew_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S4_storerb_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S2_storerb_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S4_storerbnew_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S2_storerb_pci, Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 205 /* memb */, Hexagon::S4_storerbnew_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S2_storerbnew_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 205 /* memb */, Hexagon::S2_storerbnew_pci, Convert__Reg1_2__Tie0__s4_0Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memb, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 210 /* memd */, Hexagon::S2_storerd_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::PS_storerdabs, Convert__u29_3Imm1_3__Reg1_6, 0, { MCK_memd, MCK__40_, MCK__35_, MCK_u29_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S2_storerdgp, Convert__u29_3Imm1_5__Reg1_8, 0, { MCK_memd, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u29_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S2_storerd_io, Convert__Reg1_2__s29_3Imm1_5__Reg1_8, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s29_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S2_storerd_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S4_storerd_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S2_storerd_pi, Convert__Reg1_2__Tie0__s4_3Imm1_6__Reg1_9, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S2_storerd_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S4_storerd_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S4_storerd_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S2_storerd_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 210 /* memd */, Hexagon::S2_storerd_pci, Convert__Reg1_2__Tie0__s4_3Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memd, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_3Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 215 /* memd_locked */, Hexagon::S4_stored_locked, Convert__Reg1_3__Reg1_2__Reg1_6, 0, { MCK_memd_95_locked, MCK__40_, MCK_IntRegs, MCK_PredRegs, MCK__41_, MCK__61_, MCK_DoubleRegs }, },
  { 227 /* memh */, Hexagon::S2_storerh_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::PS_storerhabs, Convert__u31_1Imm1_3__Reg1_6, 0, { MCK_memh, MCK__40_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_and_memoph_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__38_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_add_memoph_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__43_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_sub_memoph_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__MINUS_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S4_storeirh_io, Convert__Reg1_2__imm_95_0__s32_0Imm1_6, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 227 /* memh */, Hexagon::L4_or_memoph_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__124_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_iadd_memoph_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_7, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__43_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 227 /* memh */, Hexagon::L4_isub_memoph_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_7, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__MINUS_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 227 /* memh */, Hexagon::S2_storerf_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnew_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::PS_storerfabs, Convert__u31_1Imm1_3__Reg1_6, 0, { MCK_memh, MCK__40_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::PS_storerhnewabs, Convert__u31_1Imm1_3__Reg1_6, 0, { MCK_memh, MCK__40_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S2_storerhgp, Convert__u31_1Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S2_storerh_io, Convert__Reg1_2__s31_1Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S2_storerh_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S4_storerh_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_iand_memoph_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_clrbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 227 /* memh */, Hexagon::L4_ior_memoph_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_setbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 227 /* memh */, Hexagon::L4_and_memoph_io, Convert__Reg1_2__u31_1Imm1_5__Reg1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__38_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_add_memoph_io, Convert__Reg1_2__u31_1Imm1_5__Reg1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__43_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_sub_memoph_io, Convert__Reg1_2__u31_1Imm1_5__Reg1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__MINUS_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_or_memoph_io, Convert__Reg1_2__u31_1Imm1_5__Reg1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__124_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S4_storeirh_io, Convert__Reg1_2__u6_1Imm1_5__s32_0Imm1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_1Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 227 /* memh */, Hexagon::S2_storerh_pi, Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S2_storerfgp, Convert__u31_1Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnewgp, Convert__u31_1Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S2_storerf_io, Convert__Reg1_2__s31_1Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnew_io, Convert__Reg1_2__s31_1Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s31_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::L4_iadd_memoph_io, Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_10, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__43_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 227 /* memh */, Hexagon::L4_isub_memoph_io, Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_10, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__MINUS_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 227 /* memh */, Hexagon::S2_storerf_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnew_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S2_storerh_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S4_storerf_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S4_storerhnew_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S2_storerf_pi, Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnew_pi, Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_9, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S4_storerh_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::L4_iand_memoph_io, Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_11, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_clrbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 227 /* memh */, Hexagon::L4_ior_memoph_io, Convert__Reg1_2__u31_1Imm1_5__u5_0Imm1_11, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u31_1Imm, MCK__41_, MCK__61_, MCK_setbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 227 /* memh */, Hexagon::S2_storerf_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnew_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S4_storerh_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S2_storerh_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S4_storerf_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S4_storerhnew_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S2_storerh_pci, Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 227 /* memh */, Hexagon::S4_storerf_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S4_storerhnew_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S2_storerf_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnew_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 227 /* memh */, Hexagon::S2_storerf_pci, Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_h }, },
  { 227 /* memh */, Hexagon::S2_storerhnew_pci, Convert__Reg1_2__Tie0__s4_1Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memh, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_1Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storeri_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::PS_storeriabs, Convert__u30_2Imm1_3__Reg1_6, 0, { MCK_memw, MCK__40_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_and_memopw_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__38_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_add_memopw_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__43_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_sub_memopw_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__MINUS_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S4_storeiri_io, Convert__Reg1_2__imm_95_0__s32_0Imm1_6, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 232 /* memw */, Hexagon::L4_or_memopw_io, Convert__Reg1_2__imm_95_0__Reg1_6, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__124_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_iadd_memopw_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_7, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__43_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 232 /* memw */, Hexagon::L4_isub_memopw_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_7, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__MINUS_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 232 /* memw */, Hexagon::S2_storerinew_io, Convert__Reg1_2__imm_95_0__Reg1_5, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::PS_storerinewabs, Convert__u30_2Imm1_3__Reg1_6, 0, { MCK_memw, MCK__40_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storerigp, Convert__u30_2Imm1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S2_storeri_io, Convert__Reg1_2__s30_2Imm1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S2_storeri_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S4_storeri_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_iand_memopw_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_clrbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 232 /* memw */, Hexagon::L4_ior_memopw_io, Convert__Reg1_2__imm_95_0__u5_0Imm1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_setbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 232 /* memw */, Hexagon::L4_and_memopw_io, Convert__Reg1_2__u30_2Imm1_5__Reg1_9, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__38_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_add_memopw_io, Convert__Reg1_2__u30_2Imm1_5__Reg1_9, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__43_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_sub_memopw_io, Convert__Reg1_2__u30_2Imm1_5__Reg1_9, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__MINUS_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_or_memopw_io, Convert__Reg1_2__u30_2Imm1_5__Reg1_9, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__124_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S4_storeiri_io, Convert__Reg1_2__u6_2Imm1_5__s32_0Imm1_9, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u6_2Imm, MCK__41_, MCK__61_, MCK__35_, MCK_s32_0Imm }, },
  { 232 /* memw */, Hexagon::S2_storeri_pi, Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_9, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S2_storerinewgp, Convert__u30_2Imm1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_GP, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storerinew_io, Convert__Reg1_2__s30_2Imm1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s30_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::L4_iadd_memopw_io, Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_10, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__43_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 232 /* memw */, Hexagon::L4_isub_memopw_io, Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_10, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__MINUS_, MCK__61_, MCK__35_, MCK_u5_0Imm }, },
  { 232 /* memw */, Hexagon::S2_storerinew_pr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storeri_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S4_storerinew_ap, Convert__Reg1_2__u32_0Imm1_5__Reg1_8, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__61_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storerinew_pi, Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_9, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S4_storeri_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::L4_iand_memopw_io, Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_11, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_clrbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 232 /* memw */, Hexagon::L4_ior_memopw_io, Convert__Reg1_2__u30_2Imm1_5__u5_0Imm1_11, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_u30_2Imm, MCK__41_, MCK__61_, MCK_setbit, MCK__40_, MCK__35_, MCK_u5_0Imm, MCK__41_ }, },
  { 232 /* memw */, Hexagon::S2_storerinew_pbr, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__COLON_, MCK_brev, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S4_storeri_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S2_storeri_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S4_storerinew_rr, Convert__Reg1_2__Reg1_4__u2_0Imm1_8__Reg1_11, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storeri_pci, Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 232 /* memw */, Hexagon::S4_storerinew_ur, Convert__Reg1_2__u2_0Imm1_6__u32_0Imm1_9__Reg1_12, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__LT_, MCK__LT_, MCK__35_, MCK_u2_0Imm, MCK__43_, MCK__35_, MCK_u32_0Imm, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storerinew_pcr, Convert__Reg1_2__Tie0__Reg1_9__Reg1_13, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_I, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 232 /* memw */, Hexagon::S2_storerinew_pci, Convert__Reg1_2__Tie0__s4_2Imm1_6__Reg1_10__Reg1_14, 0, { MCK_memw, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s4_2Imm, MCK__COLON_, MCK_circ, MCK__40_, MCK_ModRegs, MCK__41_, MCK__41_, MCK__61_, MCK_IntRegs, MCK__DOT_, MCK_new }, },
  { 237 /* memw_locked */, Hexagon::S2_storew_locked, Convert__Reg1_3__Reg1_2__Reg1_6, 0, { MCK_memw_95_locked, MCK__40_, MCK_IntRegs, MCK_PredRegs, MCK__41_, MCK__61_, MCK_IntRegs }, },
  { 249 /* nop */, Hexagon::A2_nop, Convert_NoOperands, 0, { MCK_nop }, },
  { 253 /* p0 */, Hexagon::J4_tstbit0_tp0_jump_nt, Convert__Reg1_4__b30_2Imm1_18, 0, { MCK_P0, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_tstbit0_tp0_jump_t, Convert__Reg1_4__b30_2Imm1_18, 0, { MCK_P0, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeq_tp0_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeq_tp0_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgt_tp0_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgt_tp0_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtu_tp0_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtu_tp0_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_tstbit0_fp0_jump_nt, Convert__Reg1_4__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_tstbit0_fp0_jump_t, Convert__Reg1_4__b30_2Imm1_19, 0, { MCK_P0, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqn1_tp0_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqn1_tp0_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqi_tp0_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqi_tp0_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeq_fp0_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeq_fp0_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtn1_tp0_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtn1_tp0_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgti_tp0_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgti_tp0_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgt_fp0_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgt_fp0_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtui_tp0_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtui_tp0_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtu_fp0_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtu_fp0_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqn1_fp0_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqn1_fp0_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqi_fp0_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpeqi_fp0_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtn1_fp0_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtn1_fp0_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgti_fp0_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgti_fp0_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtui_fp0_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 253 /* p0 */, Hexagon::J4_cmpgtui_fp0_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P0, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P0, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_tstbit0_tp1_jump_nt, Convert__Reg1_4__b30_2Imm1_18, 0, { MCK_P1, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_tstbit0_tp1_jump_t, Convert__Reg1_4__b30_2Imm1_18, 0, { MCK_P1, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeq_tp1_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeq_tp1_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgt_tp1_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgt_tp1_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtu_tp1_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtu_tp1_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_tstbit0_fp1_jump_nt, Convert__Reg1_4__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_tstbit0_fp1_jump_t, Convert__Reg1_4__b30_2Imm1_19, 0, { MCK_P1, MCK__61_, MCK_tstbit, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_0, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqn1_tp1_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqn1_tp1_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqi_tp1_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqi_tp1_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeq_fp1_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeq_fp1_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtn1_tp1_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtn1_tp1_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgti_tp1_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgti_tp1_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgt_fp1_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgt_fp1_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtui_tp1_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtui_tp1_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtu_fp1_jump_nt, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtu_fp1_jump_t, Convert__Reg1_6__Reg1_7__b30_2Imm1_20, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK_GeneralSubRegs, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqn1_fp1_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqn1_fp1_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqi_fp1_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpeqi_fp1_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_eq, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtn1_fp1_jump_nt, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtn1_fp1_jump_t, Convert__Reg1_6__n1Const1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_n1Const, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgti_fp1_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgti_fp1_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gt, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtui_fp1_jump_nt, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_nt, MCK_b30_2Imm }, },
  { 256 /* p1 */, Hexagon::J4_cmpgtui_fp1_jump_t, Convert__Reg1_6__u5_0Imm1_8__b30_2Imm1_21, 0, { MCK_P1, MCK__61_, MCK_cmp, MCK__DOT_, MCK_gtu, MCK__40_, MCK_GeneralSubRegs, MCK__35_, MCK_u5_0Imm, MCK__41_, MCK__59_, MCK_if, MCK__40_, MCK__EXCLAIM_, MCK_P1, MCK__DOT_, MCK_new, MCK__41_, MCK_jump, MCK__COLON_, MCK_t, MCK_b30_2Imm }, },
  { 259 /* p3 */, Hexagon::J2_ploop1sr, Convert__b30_2Imm1_4__Reg1_5, 0, { MCK_P3, MCK__61_, MCK_sp1loop0, MCK__40_, MCK_b30_2Imm, MCK_IntRegs, MCK__41_ }, },
  { 259 /* p3 */, Hexagon::J2_ploop2sr, Convert__b30_2Imm1_4__Reg1_5, 0, { MCK_P3, MCK__61_, MCK_sp2loop0, MCK__40_, MCK_b30_2Imm, MCK_IntRegs, MCK__41_ }, },
  { 259 /* p3 */, Hexagon::J2_ploop3sr, Convert__b30_2Imm1_4__Reg1_5, 0, { MCK_P3, MCK__61_, MCK_sp3loop0, MCK__40_, MCK_b30_2Imm, MCK_IntRegs, MCK__41_ }, },
  { 259 /* p3 */, Hexagon::J2_ploop1si, Convert__b30_2Imm1_4__u10_0Imm1_6, 0, { MCK_P3, MCK__61_, MCK_sp1loop0, MCK__40_, MCK_b30_2Imm, MCK__35_, MCK_u10_0Imm, MCK__41_ }, },
  { 259 /* p3 */, Hexagon::J2_ploop2si, Convert__b30_2Imm1_4__u10_0Imm1_6, 0, { MCK_P3, MCK__61_, MCK_sp2loop0, MCK__40_, MCK_b30_2Imm, MCK__35_, MCK_u10_0Imm, MCK__41_ }, },
  { 259 /* p3 */, Hexagon::J2_ploop3si, Convert__b30_2Imm1_4__u10_0Imm1_6, 0, { MCK_P3, MCK__61_, MCK_sp3loop0, MCK__40_, MCK_b30_2Imm, MCK__35_, MCK_u10_0Imm, MCK__41_ }, },
  { 262 /* pause */, Hexagon::J2_pause, Convert__u8_0Imm1_3, 0, { MCK_pause, MCK__40_, MCK__35_, MCK_u8_0Imm, MCK__41_ }, },
  { 268 /* syncht */, Hexagon::Y2_syncht, Convert_NoOperands, 0, { MCK_syncht }, },
  { 275 /* trace */, Hexagon::Y4_trace, Convert__Reg1_2, 0, { MCK_trace, MCK__40_, MCK_IntRegs, MCK__41_ }, },
  { 281 /* trap0 */, Hexagon::J2_trap0, Convert__u8_0Imm1_3, 0, { MCK_trap0, MCK__40_, MCK__35_, MCK_u8_0Imm, MCK__41_ }, },
  { 287 /* vdeal */, Hexagon::V6_vdeal, Convert__Reg1_2__Reg1_3__Tie0__Tie1__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_vdeal, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 293 /* vhist */, Hexagon::V6_vhist, Convert_NoOperands, Feature_HasV60T|Feature_UseHVX, { MCK_vhist }, },
  { 293 /* vhist */, Hexagon::V6_vhistq, Convert__Reg1_2, Feature_HasV60T|Feature_UseHVX, { MCK_vhist, MCK__40_, MCK_VecPredRegs, MCK__41_ }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_ai, Convert__Reg1_2__imm_95_0__Reg1_5, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_ai, Convert__Reg1_2__imm_95_0__Reg1_5, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_ai, Convert__Reg1_2__imm_95_0__Reg1_7, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_ai, Convert__Reg1_2__imm_95_0__Reg1_7, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_new_ai, Convert__Reg1_2__imm_95_0__Reg1_5, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_new_ai, Convert__Reg1_2__imm_95_0__Reg1_5, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_ai, Convert__Reg1_2__s4_0Imm1_5__Reg1_8, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_ppu, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_new_ai, Convert__Reg1_2__imm_95_0__Reg1_7, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_new_ai, Convert__Reg1_2__imm_95_0__Reg1_7, Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_pi, Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_ai, Convert__Reg1_2__s4_0Imm1_5__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_new_ai, Convert__Reg1_2__s4_0Imm1_5__Reg1_8, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_ppu, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_new_ppu, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_pi, Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_11, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_new_pi, Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_new_ai, Convert__Reg1_2__s4_0Imm1_5__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_new_ppu, Convert__Reg1_2__Tie0__Reg1_5__Reg1_10, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 299 /* vmem */, Hexagon::V6_vS32b_nt_new_pi, Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_11, Feature_HasV60T|Feature_UseHVX, { MCK_vmem, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__COLON_, MCK_nt, MCK__61_, MCK_VectorRegs, MCK__DOT_, MCK_new }, },
  { 304 /* vmemu */, Hexagon::V6_vS32Ub_ai, Convert__Reg1_2__imm_95_0__Reg1_5, Feature_UseHVX, { MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 304 /* vmemu */, Hexagon::V6_vS32Ub_ai, Convert__Reg1_2__imm_95_0__Reg1_5, Feature_UseHVX, { MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 304 /* vmemu */, Hexagon::V6_vS32Ub_ai, Convert__Reg1_2__s4_0Imm1_5__Reg1_8, Feature_HasV60T|Feature_UseHVX, { MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__35_, MCK_s4_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 304 /* vmemu */, Hexagon::V6_vS32Ub_ppu, Convert__Reg1_2__Tie0__Reg1_5__Reg1_8, Feature_HasV60T|Feature_UseHVX, { MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK_ModRegs, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 304 /* vmemu */, Hexagon::V6_vS32Ub_pi, Convert__Reg1_2__Tie0__s3_0Imm1_6__Reg1_9, Feature_HasV60T|Feature_UseHVX, { MCK_vmemu, MCK__40_, MCK_IntRegs, MCK__43_, MCK__43_, MCK__35_, MCK_s3_0Imm, MCK__41_, MCK__61_, MCK_VectorRegs }, },
  { 310 /* vshuff */, Hexagon::V6_vshuff, Convert__Reg1_2__Reg1_3__Tie0__Tie1__Reg1_4, Feature_HasV60T|Feature_UseHVX, { MCK_vshuff, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 317 /* vtrans2x2 */, Hexagon::V6_vshuff, Convert__Reg1_2__Reg1_3__Tie0__Tie1__Reg1_4, Feature_UseHVX, { MCK_vtrans2x2, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 317 /* vtrans2x2 */, Hexagon::V6_vshuff, Convert__Reg1_2__Reg1_3__Tie0__Tie1__Reg1_4, Feature_UseHVX, { MCK_vtrans2x2, MCK__40_, MCK_VectorRegs, MCK_VectorRegs, MCK_IntRegs, MCK__41_ }, },
  { 327 /* vwhist128 */, Hexagon::V6_vwhist128, Convert_NoOperands, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist128 }, },
  { 327 /* vwhist128 */, Hexagon::V6_vwhist128q, Convert__Reg1_2, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist128, MCK__40_, MCK_VecPredRegs, MCK__41_ }, },
  { 327 /* vwhist128 */, Hexagon::V6_vwhist128m, Convert__u1_0Imm1_3, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist128, MCK__40_, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 327 /* vwhist128 */, Hexagon::V6_vwhist128qm, Convert__Reg1_2__u1_0Imm1_4, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist128, MCK__40_, MCK_VecPredRegs, MCK__35_, MCK_u1_0Imm, MCK__41_ }, },
  { 337 /* vwhist256 */, Hexagon::V6_vwhist256, Convert_NoOperands, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist256 }, },
  { 337 /* vwhist256 */, Hexagon::V6_vwhist256_sat, Convert_NoOperands, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist256, MCK__COLON_, MCK_sat }, },
  { 337 /* vwhist256 */, Hexagon::V6_vwhist256q, Convert__Reg1_2, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist256, MCK__40_, MCK_VecPredRegs, MCK__41_ }, },
  { 337 /* vwhist256 */, Hexagon::V6_vwhist256q_sat, Convert__Reg1_2, Feature_HasV62T|Feature_UseHVX, { MCK_vwhist256, MCK__40_, MCK_VecPredRegs, MCK__41_, MCK__COLON_, MCK_sat }, },
};

unsigned HexagonAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 24) {
    ErrorInfo = 24;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic;
  if (Operands[0]->isToken())
    Mnemonic = ((HexagonOperand&)*Operands[0]).getToken();

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
    for (unsigned FormalIdx = SIndex, ActualIdx = SIndex; FormalIdx != 24; ++FormalIdx) {
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

