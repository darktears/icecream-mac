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
    AMDGPU_bfe_i32,                            // llvm.AMDGPU.bfe.i32
    AMDGPU_bfe_u32,                            // llvm.AMDGPU.bfe.u32
    AMDGPU_clamp,                              // llvm.AMDGPU.clamp
    AMDGPU_cube,                               // llvm.AMDGPU.cube
    AMDGPU_flbit_i32,                          // llvm.AMDGPU.flbit.i32
    AMDGPU_kill,                               // llvm.AMDGPU.kill
    AMDGPU_kilp,                               // llvm.AMDGPU.kilp
    AMDGPU_rsq,                                // llvm.AMDGPU.rsq
    SI_buffer_load_dword,                      // llvm.SI.buffer.load.dword
    SI_export,                                 // llvm.SI.export
    SI_fs_constant,                            // llvm.SI.fs.constant
    SI_fs_interp,                              // llvm.SI.fs.interp
    SI_gather4,                                // llvm.SI.gather4
    SI_gather4_b,                              // llvm.SI.gather4.b
    SI_gather4_b_cl,                           // llvm.SI.gather4.b.cl
    SI_gather4_b_cl_o,                         // llvm.SI.gather4.b.cl.o
    SI_gather4_b_o,                            // llvm.SI.gather4.b.o
    SI_gather4_c,                              // llvm.SI.gather4.c
    SI_gather4_c_b,                            // llvm.SI.gather4.c.b
    SI_gather4_c_b_cl,                         // llvm.SI.gather4.c.b.cl
    SI_gather4_c_b_cl_o,                       // llvm.SI.gather4.c.b.cl.o
    SI_gather4_c_b_o,                          // llvm.SI.gather4.c.b.o
    SI_gather4_c_cl,                           // llvm.SI.gather4.c.cl
    SI_gather4_c_cl_o,                         // llvm.SI.gather4.c.cl.o
    SI_gather4_c_l,                            // llvm.SI.gather4.c.l
    SI_gather4_c_l_o,                          // llvm.SI.gather4.c.l.o
    SI_gather4_c_lz,                           // llvm.SI.gather4.c.lz
    SI_gather4_c_lz_o,                         // llvm.SI.gather4.c.lz.o
    SI_gather4_c_o,                            // llvm.SI.gather4.c.o
    SI_gather4_cl,                             // llvm.SI.gather4.cl
    SI_gather4_cl_o,                           // llvm.SI.gather4.cl.o
    SI_gather4_l,                              // llvm.SI.gather4.l
    SI_gather4_l_o,                            // llvm.SI.gather4.l.o
    SI_gather4_lz,                             // llvm.SI.gather4.lz
    SI_gather4_lz_o,                           // llvm.SI.gather4.lz.o
    SI_gather4_o,                              // llvm.SI.gather4.o
    SI_getlod,                                 // llvm.SI.getlod
    SI_getresinfo,                             // llvm.SI.getresinfo
    SI_image_load,                             // llvm.SI.image.load
    SI_image_load_mip,                         // llvm.SI.image.load.mip
    SI_image_sample,                           // llvm.SI.image.sample
    SI_image_sample_b,                         // llvm.SI.image.sample.b
    SI_image_sample_b_cl,                      // llvm.SI.image.sample.b.cl
    SI_image_sample_b_cl_o,                    // llvm.SI.image.sample.b.cl.o
    SI_image_sample_b_o,                       // llvm.SI.image.sample.b.o
    SI_image_sample_c,                         // llvm.SI.image.sample.c
    SI_image_sample_c_b,                       // llvm.SI.image.sample.c.b
    SI_image_sample_c_b_cl,                    // llvm.SI.image.sample.c.b.cl
    SI_image_sample_c_b_cl_o,                  // llvm.SI.image.sample.c.b.cl.o
    SI_image_sample_c_b_o,                     // llvm.SI.image.sample.c.b.o
    SI_image_sample_c_cd,                      // llvm.SI.image.sample.c.cd
    SI_image_sample_c_cd_cl,                   // llvm.SI.image.sample.c.cd.cl
    SI_image_sample_c_cd_cl_o,                 // llvm.SI.image.sample.c.cd.cl.o
    SI_image_sample_c_cd_o,                    // llvm.SI.image.sample.c.cd.o
    SI_image_sample_c_cl,                      // llvm.SI.image.sample.c.cl
    SI_image_sample_c_cl_o,                    // llvm.SI.image.sample.c.cl.o
    SI_image_sample_c_d,                       // llvm.SI.image.sample.c.d
    SI_image_sample_c_d_cl,                    // llvm.SI.image.sample.c.d.cl
    SI_image_sample_c_d_cl_o,                  // llvm.SI.image.sample.c.d.cl.o
    SI_image_sample_c_d_o,                     // llvm.SI.image.sample.c.d.o
    SI_image_sample_c_l,                       // llvm.SI.image.sample.c.l
    SI_image_sample_c_l_o,                     // llvm.SI.image.sample.c.l.o
    SI_image_sample_c_lz,                      // llvm.SI.image.sample.c.lz
    SI_image_sample_c_lz_o,                    // llvm.SI.image.sample.c.lz.o
    SI_image_sample_c_o,                       // llvm.SI.image.sample.c.o
    SI_image_sample_cd,                        // llvm.SI.image.sample.cd
    SI_image_sample_cd_cl,                     // llvm.SI.image.sample.cd.cl
    SI_image_sample_cd_cl_o,                   // llvm.SI.image.sample.cd.cl.o
    SI_image_sample_cd_o,                      // llvm.SI.image.sample.cd.o
    SI_image_sample_cl,                        // llvm.SI.image.sample.cl
    SI_image_sample_cl_o,                      // llvm.SI.image.sample.cl.o
    SI_image_sample_d,                         // llvm.SI.image.sample.d
    SI_image_sample_d_cl,                      // llvm.SI.image.sample.d.cl
    SI_image_sample_d_cl_o,                    // llvm.SI.image.sample.d.cl.o
    SI_image_sample_d_o,                       // llvm.SI.image.sample.d.o
    SI_image_sample_l,                         // llvm.SI.image.sample.l
    SI_image_sample_l_o,                       // llvm.SI.image.sample.l.o
    SI_image_sample_lz,                        // llvm.SI.image.sample.lz
    SI_image_sample_lz_o,                      // llvm.SI.image.sample.lz.o
    SI_image_sample_o,                         // llvm.SI.image.sample.o
    SI_load_const,                             // llvm.SI.load.const
    SI_packf16,                                // llvm.SI.packf16
    SI_sendmsg,                                // llvm.SI.sendmsg
    SI_tbuffer_store,                          // llvm.SI.tbuffer.store
    SI_vs_load_input,                          // llvm.SI.vs.load.input
    amdgcn_break,                              // llvm.amdgcn.break
    amdgcn_else,                               // llvm.amdgcn.else
    amdgcn_else_break,                         // llvm.amdgcn.else.break
    amdgcn_end_cf,                             // llvm.amdgcn.end.cf
    amdgcn_fdiv_fast,                          // llvm.amdgcn.fdiv.fast
    amdgcn_if,                                 // llvm.amdgcn.if
    amdgcn_if_break,                           // llvm.amdgcn.if.break
    amdgcn_loop,                               // llvm.amdgcn.loop
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
  StringRef Name;
  size_t Offset;
  size_t Count;
};
static const IntrinsicTargetInfo TargetInfos[] = {
  {"", 0, 0},
  {"AMDGPU", 0, 8},
  {"SI", 8, 77},
  {"amdgcn", 85, 8},
  {"r600", 93, 13},
};
#endif

// Intrinsic ID to name table
#ifdef GET_INTRINSIC_NAME_TABLE
  // Note that entry #0 is the invalid intrinsic!
  "llvm.AMDGPU.bfe.i32",
  "llvm.AMDGPU.bfe.u32",
  "llvm.AMDGPU.clamp",
  "llvm.AMDGPU.cube",
  "llvm.AMDGPU.flbit.i32",
  "llvm.AMDGPU.kill",
  "llvm.AMDGPU.kilp",
  "llvm.AMDGPU.rsq",
  "llvm.SI.buffer.load.dword",
  "llvm.SI.export",
  "llvm.SI.fs.constant",
  "llvm.SI.fs.interp",
  "llvm.SI.gather4",
  "llvm.SI.gather4.b",
  "llvm.SI.gather4.b.cl",
  "llvm.SI.gather4.b.cl.o",
  "llvm.SI.gather4.b.o",
  "llvm.SI.gather4.c",
  "llvm.SI.gather4.c.b",
  "llvm.SI.gather4.c.b.cl",
  "llvm.SI.gather4.c.b.cl.o",
  "llvm.SI.gather4.c.b.o",
  "llvm.SI.gather4.c.cl",
  "llvm.SI.gather4.c.cl.o",
  "llvm.SI.gather4.c.l",
  "llvm.SI.gather4.c.l.o",
  "llvm.SI.gather4.c.lz",
  "llvm.SI.gather4.c.lz.o",
  "llvm.SI.gather4.c.o",
  "llvm.SI.gather4.cl",
  "llvm.SI.gather4.cl.o",
  "llvm.SI.gather4.l",
  "llvm.SI.gather4.l.o",
  "llvm.SI.gather4.lz",
  "llvm.SI.gather4.lz.o",
  "llvm.SI.gather4.o",
  "llvm.SI.getlod",
  "llvm.SI.getresinfo",
  "llvm.SI.image.load",
  "llvm.SI.image.load.mip",
  "llvm.SI.image.sample",
  "llvm.SI.image.sample.b",
  "llvm.SI.image.sample.b.cl",
  "llvm.SI.image.sample.b.cl.o",
  "llvm.SI.image.sample.b.o",
  "llvm.SI.image.sample.c",
  "llvm.SI.image.sample.c.b",
  "llvm.SI.image.sample.c.b.cl",
  "llvm.SI.image.sample.c.b.cl.o",
  "llvm.SI.image.sample.c.b.o",
  "llvm.SI.image.sample.c.cd",
  "llvm.SI.image.sample.c.cd.cl",
  "llvm.SI.image.sample.c.cd.cl.o",
  "llvm.SI.image.sample.c.cd.o",
  "llvm.SI.image.sample.c.cl",
  "llvm.SI.image.sample.c.cl.o",
  "llvm.SI.image.sample.c.d",
  "llvm.SI.image.sample.c.d.cl",
  "llvm.SI.image.sample.c.d.cl.o",
  "llvm.SI.image.sample.c.d.o",
  "llvm.SI.image.sample.c.l",
  "llvm.SI.image.sample.c.l.o",
  "llvm.SI.image.sample.c.lz",
  "llvm.SI.image.sample.c.lz.o",
  "llvm.SI.image.sample.c.o",
  "llvm.SI.image.sample.cd",
  "llvm.SI.image.sample.cd.cl",
  "llvm.SI.image.sample.cd.cl.o",
  "llvm.SI.image.sample.cd.o",
  "llvm.SI.image.sample.cl",
  "llvm.SI.image.sample.cl.o",
  "llvm.SI.image.sample.d",
  "llvm.SI.image.sample.d.cl",
  "llvm.SI.image.sample.d.cl.o",
  "llvm.SI.image.sample.d.o",
  "llvm.SI.image.sample.l",
  "llvm.SI.image.sample.l.o",
  "llvm.SI.image.sample.lz",
  "llvm.SI.image.sample.lz.o",
  "llvm.SI.image.sample.o",
  "llvm.SI.load.const",
  "llvm.SI.packf16",
  "llvm.SI.sendmsg",
  "llvm.SI.tbuffer.store",
  "llvm.SI.vs.load.input",
  "llvm.amdgcn.break",
  "llvm.amdgcn.else",
  "llvm.amdgcn.else.break",
  "llvm.amdgcn.end.cf",
  "llvm.amdgcn.fdiv.fast",
  "llvm.amdgcn.if",
  "llvm.amdgcn.if.break",
  "llvm.amdgcn.loop",
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
  0 | (1<<3),
  0 | (1<<0) | (1<<1) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<4) | (1<<5),
  0,
  0,
  0
};

return (OTable[id/8] & (1 << (id%8))) != 0;
#endif

// Global intrinsic function declaration type table.
#ifdef GET_INTRINSIC_GENERATOR_GLOBAL
static const unsigned IIT_Table[] = {
  0x4444, 0x4444, 0x2F2F2F2F, 0x7A7A, 0x44, 0x70, 0x0, 
  0x2F2F, (1U<<31) | 77, (1U<<31) | 91, 0x4447, 0x494447, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 62, (1U<<31) | 62, 
  (1U<<31) | 62, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, (1U<<31) | 45, 
  (1U<<31) | 45, 0x41F7, 0x774, 0x440, (1U<<31) | 0, 0x431F7A, 0x55, (1U<<31) | 110, 
  0x555, 0x50, 0x77, (1U<<31) | 102, 0x515, (1U<<31) | 106, (1U<<31) | 31, (1U<<31) | 31, 
  0x7A7A7, 0x4447A0, 0x447A0, (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 17, 
  (1U<<31) | 31, (1U<<31) | 31, (1U<<31) | 17, 0
};

static const unsigned char IIT_LongEncodingTable[] = {
  /* 0 */ 0, 15, 1, 15, 9, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 17 */ 10, 4, 10, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 31 */ 10, 7, 10, 7, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 45 */ 10, 7, 15, 1, 11, 4, 10, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 62 */ 10, 7, 15, 1, 11, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 77 */ 15, 1, 15, 9, 15, 17, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 91 */ 0, 4, 4, 4, 4, 4, 7, 7, 7, 7, 0,
  /* 102 */ 5, 1, 20, 0,
  /* 106 */ 0, 5, 20, 0,
  /* 110 */ 5, 5, 20, 0,
  255
};

#endif

// Add parameter attributes that are not common to all intrinsics.
#ifdef GET_INTRINSIC_ATTRIBUTES
static AttributeSet getAttributes(LLVMContext &C, AMDGPUIntrinsic::ID id) {
  static const uint8_t IntrinsicsToAttributesMap[] = {
    1, // llvm.AMDGPU.bfe.i32
    1, // llvm.AMDGPU.bfe.u32
    1, // llvm.AMDGPU.clamp
    1, // llvm.AMDGPU.cube
    1, // llvm.AMDGPU.flbit.i32
    2, // llvm.AMDGPU.kill
    2, // llvm.AMDGPU.kilp
    1, // llvm.AMDGPU.rsq
    3, // llvm.SI.buffer.load.dword
    2, // llvm.SI.export
    1, // llvm.SI.fs.constant
    1, // llvm.SI.fs.interp
    1, // llvm.SI.gather4
    1, // llvm.SI.gather4.b
    1, // llvm.SI.gather4.b.cl
    1, // llvm.SI.gather4.b.cl.o
    1, // llvm.SI.gather4.b.o
    1, // llvm.SI.gather4.c
    1, // llvm.SI.gather4.c.b
    1, // llvm.SI.gather4.c.b.cl
    1, // llvm.SI.gather4.c.b.cl.o
    1, // llvm.SI.gather4.c.b.o
    1, // llvm.SI.gather4.c.cl
    1, // llvm.SI.gather4.c.cl.o
    1, // llvm.SI.gather4.c.l
    1, // llvm.SI.gather4.c.l.o
    1, // llvm.SI.gather4.c.lz
    1, // llvm.SI.gather4.c.lz.o
    1, // llvm.SI.gather4.c.o
    1, // llvm.SI.gather4.cl
    1, // llvm.SI.gather4.cl.o
    1, // llvm.SI.gather4.l
    1, // llvm.SI.gather4.l.o
    1, // llvm.SI.gather4.lz
    1, // llvm.SI.gather4.lz.o
    1, // llvm.SI.gather4.o
    1, // llvm.SI.getlod
    1, // llvm.SI.getresinfo
    1, // llvm.SI.image.load
    1, // llvm.SI.image.load.mip
    1, // llvm.SI.image.sample
    1, // llvm.SI.image.sample.b
    1, // llvm.SI.image.sample.b.cl
    1, // llvm.SI.image.sample.b.cl.o
    1, // llvm.SI.image.sample.b.o
    1, // llvm.SI.image.sample.c
    1, // llvm.SI.image.sample.c.b
    1, // llvm.SI.image.sample.c.b.cl
    1, // llvm.SI.image.sample.c.b.cl.o
    1, // llvm.SI.image.sample.c.b.o
    1, // llvm.SI.image.sample.c.cd
    1, // llvm.SI.image.sample.c.cd.cl
    1, // llvm.SI.image.sample.c.cd.cl.o
    1, // llvm.SI.image.sample.c.cd.o
    1, // llvm.SI.image.sample.c.cl
    1, // llvm.SI.image.sample.c.cl.o
    1, // llvm.SI.image.sample.c.d
    1, // llvm.SI.image.sample.c.d.cl
    1, // llvm.SI.image.sample.c.d.cl.o
    1, // llvm.SI.image.sample.c.d.o
    1, // llvm.SI.image.sample.c.l
    1, // llvm.SI.image.sample.c.l.o
    1, // llvm.SI.image.sample.c.lz
    1, // llvm.SI.image.sample.c.lz.o
    1, // llvm.SI.image.sample.c.o
    1, // llvm.SI.image.sample.cd
    1, // llvm.SI.image.sample.cd.cl
    1, // llvm.SI.image.sample.cd.cl.o
    1, // llvm.SI.image.sample.cd.o
    1, // llvm.SI.image.sample.cl
    1, // llvm.SI.image.sample.cl.o
    1, // llvm.SI.image.sample.d
    1, // llvm.SI.image.sample.d.cl
    1, // llvm.SI.image.sample.d.cl.o
    1, // llvm.SI.image.sample.d.o
    1, // llvm.SI.image.sample.l
    1, // llvm.SI.image.sample.l.o
    1, // llvm.SI.image.sample.lz
    1, // llvm.SI.image.sample.lz.o
    1, // llvm.SI.image.sample.o
    1, // llvm.SI.load.const
    1, // llvm.SI.packf16
    2, // llvm.SI.sendmsg
    2, // llvm.SI.tbuffer.store
    1, // llvm.SI.vs.load.input
    4, // llvm.amdgcn.break
    5, // llvm.amdgcn.else
    4, // llvm.amdgcn.else.break
    5, // llvm.amdgcn.end.cf
    1, // llvm.amdgcn.fdiv.fast
    5, // llvm.amdgcn.if
    4, // llvm.amdgcn.if.break
    5, // llvm.amdgcn.loop
    1, // llvm.r600.ddx
    1, // llvm.r600.ddy
    1, // llvm.r600.dot4
    2, // llvm.r600.store.stream.output
    2, // llvm.r600.store.swizzle
    1, // llvm.r600.tex
    1, // llvm.r600.texc
    1, // llvm.r600.txb
    1, // llvm.r600.txbc
    1, // llvm.r600.txf
    1, // llvm.r600.txl
    1, // llvm.r600.txlc
    1, // llvm.r600.txq
  };

  AttributeSet AS[1];
  unsigned NumAttrs = 0;
  if (id != 0) {
    switch(IntrinsicsToAttributesMap[id - Intrinsic::num_intrinsics]) {
    default: llvm_unreachable("Invalid attribute number");
    case 2: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind};
      AS[0] = AttributeSet::get(C, AttributeSet::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    case 3: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::ReadOnly,Attribute::ArgMemOnly};
      AS[0] = AttributeSet::get(C, AttributeSet::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    case 1: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::ReadNone};
      AS[0] = AttributeSet::get(C, AttributeSet::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    case 5: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::Convergent};
      AS[0] = AttributeSet::get(C, AttributeSet::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    case 4: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::Convergent,Attribute::ReadNone};
      AS[0] = AttributeSet::get(C, AttributeSet::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    }
  }
  return AttributeSet::get(C, makeArrayRef(AS, NumAttrs));
}
#endif // GET_INTRINSIC_ATTRIBUTES

#if defined(_MSC_VER) && defined(setjmp_undefined_for_msvc)
// let's return it to _setjmp state
#  pragma pop_macro("setjmp")
#  undef setjmp_undefined_for_msvc
#endif

