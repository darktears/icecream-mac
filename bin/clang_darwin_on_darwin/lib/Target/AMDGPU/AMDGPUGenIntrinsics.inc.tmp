/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// VisualStudio defines setjmp as _setjmp
#if defined(_MSC_VER) && defined(setjmp) && \
                         !defined(setjmp_undefined_for_msvc)
#  pragma push_macro("setjmp")
#  undef setjmp
#  define setjmp_undefined_for_msvc
#endif

// Enum values for Intrinsics.h
#ifdef GET_INTRINSIC_ENUM_VALUES
    AMDGPU_kill,                               // llvm.AMDGPU.kill
    AMDGPU_kilp,                               // llvm.AMDGPU.kilp
    SI_buffer_load_dword,                      // llvm.SI.buffer.load.dword
    SI_load_const,                             // llvm.SI.load.const
    SI_tbuffer_store,                          // llvm.SI.tbuffer.store
    r600_ddx,                                  // llvm.r600.ddx
    r600_ddy,                                  // llvm.r600.ddy
    r600_dot4,                                 // llvm.r600.dot4
    r600_store_stream_output,                  // llvm.r600.store.stream.output
    r600_store_swizzle,                        // llvm.r600.store.swizzle
    r600_tex,                                  // llvm.r600.tex
    r600_texc,                                 // llvm.r600.texc
    r600_txb,                                  // llvm.r600.txb
    r600_txbc,                                 // llvm.r600.txbc
    r600_txf,                                  // llvm.r600.txf
    r600_txl,                                  // llvm.r600.txl
    r600_txlc,                                 // llvm.r600.txlc
    r600_txq                                   // llvm.r600.txq
#endif

// Target mapping
#ifdef GET_INTRINSIC_TARGET_DATA
struct IntrinsicTargetInfo {
  llvm::StringLiteral Name;
  size_t Offset;
  size_t Count;
};
static constexpr IntrinsicTargetInfo TargetInfos[] = {
  {llvm::StringLiteral(""), 0, 0},
  {llvm::StringLiteral("AMDGPU"), 0, 2},
  {llvm::StringLiteral("SI"), 2, 3},
  {llvm::StringLiteral("r600"), 5, 13},
};
#endif

// Intrinsic ID to name table
#ifdef GET_INTRINSIC_NAME_TABLE
  // Note that entry #0 is the invalid intrinsic!
  "llvm.AMDGPU.kill",
  "llvm.AMDGPU.kilp",
  "llvm.SI.buffer.load.dword",
  "llvm.SI.load.const",
  "llvm.SI.tbuffer.store",
  "llvm.r600.ddx",
  "llvm.r600.ddy",
  "llvm.r600.dot4",
  "llvm.r600.store.stream.output",
  "llvm.r600.store.swizzle",
  "llvm.r600.tex",
  "llvm.r600.texc",
  "llvm.r600.txb",
  "llvm.r600.txbc",
  "llvm.r600.txf",
  "llvm.r600.txl",
  "llvm.r600.txlc",
  "llvm.r600.txq",
#endif

// Intrinsic ID to overload bitset
#ifdef GET_INTRINSIC_OVERLOAD_TABLE
static const uint8_t OTable[] = {
  0 | (1<<3) | (1<<4) | (1<<5),
  0,
  0
};

return (OTable[id/8] & (1 << (id%8))) != 0;
#endif

// Global intrinsic function declaration type table.
#ifdef GET_INTRINSIC_GENERATOR_GLOBAL
static const unsigned IIT_Table[] = {
  0x70, 0x0, (1U<<31) | 45, 0x41F7, (1U<<31) | 0, (1U<<31) | 31, (1U<<31) | 31, 
  0x7A7A7, 0x4447A0, 0x447A0, (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 17, 
  (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 17, 0
};

static const unsigned char IIT_LongEncodingTable[] = {
  /* 0 */ 0, 15, 1, 15, 9, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 17 */ 10, 4, 10, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 31 */ 10, 7, 10, 7, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 45 */ 15, 1, 15, 9, 15, 17, 4, 4, 4, 4, 4, 4, 4, 0,
  255
};

#endif

// Add parameter attributes that are not common to all intrinsics.
#ifdef GET_INTRINSIC_ATTRIBUTES
static AttributeList getAttributes(LLVMContext &C, AMDGPUIntrinsic::ID id) {
  static const uint8_t IntrinsicsToAttributesMap[] = {
    1, // llvm.AMDGPU.kill
    1, // llvm.AMDGPU.kilp
    2, // llvm.SI.buffer.load.dword
    3, // llvm.SI.load.const
    1, // llvm.SI.tbuffer.store
    3, // llvm.r600.ddx
    3, // llvm.r600.ddy
    4, // llvm.r600.dot4
    1, // llvm.r600.store.stream.output
    1, // llvm.r600.store.swizzle
    3, // llvm.r600.tex
    3, // llvm.r600.texc
    3, // llvm.r600.txb
    3, // llvm.r600.txbc
    3, // llvm.r600.txf
    3, // llvm.r600.txl
    3, // llvm.r600.txlc
    3, // llvm.r600.txq
  };

  AttributeList AS[1];
  unsigned NumAttrs = 0;
  if (id != 0) {
    switch(IntrinsicsToAttributesMap[id - Intrinsic::num_intrinsics]) {
    default: llvm_unreachable("Invalid attribute number");
    case 1: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind};
      AS[0] = AttributeList::get(C, AttributeList::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    case 2: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::ReadOnly,Attribute::ArgMemOnly};
      AS[0] = AttributeList::get(C, AttributeList::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    case 3: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::ReadNone};
      AS[0] = AttributeList::get(C, AttributeList::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    case 4: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::Speculatable,Attribute::ReadNone};
      AS[0] = AttributeList::get(C, AttributeList::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    }
  }
  return AttributeList::get(C, makeArrayRef(AS, NumAttrs));
}
#endif // GET_INTRINSIC_ATTRIBUTES

// Get the LLVM intrinsic that corresponds to a builtin.
// This is used by the C front-end.  The builtin name is passed
// in as BuiltinName, and a target prefix (e.g. 'ppc') is passed
// in as TargetPrefix.  The result is assigned to 'IntrinsicID'.
#ifdef GET_LLVM_INTRINSIC_FOR_GCC_BUILTIN
static AMDGPUIntrinsic::ID getIntrinsicForGCCBuiltin(const char *TargetPrefixStr, StringRef BuiltinNameStr) {
  return (AMDGPUIntrinsic::ID)Intrinsic::not_intrinsic;
}
#endif

// Get the LLVM intrinsic that corresponds to a builtin.
// This is used by the C front-end.  The builtin name is passed
// in as BuiltinName, and a target prefix (e.g. 'ppc') is passed
// in as TargetPrefix.  The result is assigned to 'IntrinsicID'.
#ifdef GET_LLVM_INTRINSIC_FOR_MS_BUILTIN
static AMDGPUIntrinsic::ID getIntrinsicForMSBuiltin(const char *TargetPrefixStr, StringRef BuiltinNameStr) {
  return (AMDGPUIntrinsic::ID)Intrinsic::not_intrinsic;
}
#endif

#if defined(_MSC_VER) && defined(setjmp_undefined_for_msvc)
// let's return it to _setjmp state
#  pragma pop_macro("setjmp")
#  undef setjmp_undefined_for_msvc
#endif

