/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace SystemZ {
enum {
  FeatureDistinctOps = 0,
  FeatureExecutionHint = 1,
  FeatureFPExtension = 2,
  FeatureFastSerialization = 3,
  FeatureHighWord = 4,
  FeatureInterlockedAccess1 = 5,
  FeatureLoadAndTrap = 6,
  FeatureLoadAndZeroRightmostByte = 7,
  FeatureLoadStoreOnCond = 8,
  FeatureLoadStoreOnCond2 = 9,
  FeatureMiscellaneousExtensions = 10,
  FeaturePopulationCount = 11,
  FeatureProcessorAssist = 12,
  FeatureTransactionalExecution = 13,
  FeatureVector = 14
};
} // end namespace SystemZ
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[] = {
  { "distinct-ops", "Assume that the distinct-operands facility is installed", { SystemZ::FeatureDistinctOps }, { } },
  { "execution-hint", "Assume that the execution-hint facility is installed", { SystemZ::FeatureExecutionHint }, { } },
  { "fast-serialization", "Assume that the fast-serialization facility is installed", { SystemZ::FeatureFastSerialization }, { } },
  { "fp-extension", "Assume that the floating-point extension facility is installed", { SystemZ::FeatureFPExtension }, { } },
  { "high-word", "Assume that the high-word facility is installed", { SystemZ::FeatureHighWord }, { } },
  { "interlocked-access1", "Assume that interlocked-access facility 1 is installed", { SystemZ::FeatureInterlockedAccess1 }, { } },
  { "load-and-trap", "Assume that the load-and-trap facility is installed", { SystemZ::FeatureLoadAndTrap }, { } },
  { "load-and-zero-rightmost-byte", "Assume that the load-and-zero-rightmost-byte facility is installed", { SystemZ::FeatureLoadAndZeroRightmostByte }, { } },
  { "load-store-on-cond", "Assume that the load/store-on-condition facility is installed", { SystemZ::FeatureLoadStoreOnCond }, { } },
  { "load-store-on-cond-2", "Assume that the load/store-on-condition facility 2 is installed", { SystemZ::FeatureLoadStoreOnCond2 }, { } },
  { "miscellaneous-extensions", "Assume that the miscellaneous-extensions facility is installed", { SystemZ::FeatureMiscellaneousExtensions }, { } },
  { "population-count", "Assume that the population-count facility is installed", { SystemZ::FeaturePopulationCount }, { } },
  { "processor-assist", "Assume that the processor-assist facility is installed", { SystemZ::FeatureProcessorAssist }, { } },
  { "transactional-execution", "Assume that the transactional-execution facility is installed", { SystemZ::FeatureTransactionalExecution }, { } },
  { "vector", "Assume that the vectory facility is installed", { SystemZ::FeatureVector }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[] = {
  { "arch10", "Select the arch10 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution }, { } },
  { "arch11", "Select the arch11 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureVector }, { } },
  { "arch8", "Select the arch8 processor", { }, { } },
  { "arch9", "Select the arch9 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount }, { } },
  { "generic", "Select the generic processor", { }, { } },
  { "z10", "Select the z10 processor", { }, { } },
  { "z13", "Select the z13 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureVector }, { } },
  { "z196", "Select the z196 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount }, { } },
  { "zEC12", "Select the zEC12 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 2,  1}, // #1
  { 4,  1}, // #2
  { 3,  1}, // #3
  { 2,  1}, // #4
  { 3,  1}, // #5
  { 2,  3}, // #6
  { 3,  1}, // #7
  { 2,  2}, // #8
  { 4,  1}, // #9
  { 2,  2}, // #10
  { 3,  1}, // #11
  { 2,  1}, // #12
  { 3,  3}, // #13
  { 3,  5}, // #14
  { 2,  3}, // #15
  { 3,  2}, // #16
  { 2,  1}, // #17
  { 3,  2}, // #18
  { 1,  4}, // #19
  { 2,  4}, // #20
  { 1,  4}, // #21
  { 2,  3}, // #22
  { 3,  1}, // #23
  { 1,  4}, // #24
  { 2,  5}, // #25
  { 1,  4}, // #26
  { 2,  4}, // #27
  { 3,  1}, // #28
  { 2,  5}, // #29
  { 3,  1}, // #30
  { 2,  6}, // #31
  { 3,  2}, // #32
  { 2,  2}, // #33
  { 3,  2}, // #34
  { 2,  5}, // #35
  { 3,  2}, // #36
  { 2,  2}, // #37
  { 3,  4}, // #38
  { 1,  1}, // #39
  { 1,  2}, // #40
  { 1,  1}, // #41
  { 3,  1}, // #42
  { 1,  4}, // #43
  { 3,  1}, // #44
  { 1,  1}, // #45
  { 2,  1}, // #46
  { 1,  4}, // #47
  { 2,  1}, // #48
  { 1,  2}, // #49
  { 2,  1}, // #50
  { 1,  2}, // #51
  { 2,  2}, // #52
  { 1,  2}, // #53
  { 4,  1}, // #54
  { 1,  1}, // #55
  { 2,  1}, // #56
  { 3,  1}, // #57
  { 1,  3}, // #58
  { 2,  2}, // #59
  { 3,  1}, // #60
  { 1,  2}, // #61
  { 2,  4}, // #62
  { 3,  3}, // #63
  { 1,  2}, // #64
  { 2,  1}, // #65
  { 3,  1}, // #66
  { 1,  2}, // #67
  { 2,  1}, // #68
  { 3,  3}, // #69
  { 1,  2}, // #70
  { 2,  2}, // #71
  { 3,  4}, // #72
  { 6,  1}, // #73
  { 6,  4}, // #74
  { 3,  1}, // #75
  { 6,  1}, // #76
  { 6,  2}, // #77
  { 3,  1}, // #78
  { 6,  4}, // #79
  { 2,  1}, // #80
  { 6,  1}, // #81
  { 2,  1}, // #82
  { 6,  4}, // #83
  { 2,  1}, // #84
  { 6,  2}, // #85
  { 3,  1}, // #86
  { 5, 30}, // #87
  { 5, 60}, // #88
  { 2,  1}, // #89
  { 3,  1}, // #90
  { 6,  1} // #91
}; // SystemZWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 FXU_VBU_LSU_lat1_FXa_FXb
  { 4,  0}, // #2 LSU_Lat4_VecStr
  { 4,  0}, // #3 Lat4_LSU
  { 1,  0}, // #4 FXU_LSU_lat1_EndGroup_GroupAlone_FXa_FXb
  { 1,  0}, // #5 EndGroup_GroupAlone
  { 1,  0}, // #6 FXU_FXb_FXa
  { 4,  0}, // #7 LSU_VecStr
  { 5,  0}, // #8 Lat5_VecMul
  { 1,  0}, // #9 GroupAlone_EndGroup
  { 1,  0}, // #10 FXU
  { 1,  0}, // #11 FXU
  { 1,  0}, // #12 FXU_FXb
  { 4,  0}, // #13 LSU
  { 7,  0}, // #14 Lat7
  { 1,  0}, // #15 GroupAlone
  { 1,  0}, // #16 VBU_FXa
  { 1,  0}, // #17 FXU_FXa
  { 1,  0}, // #18 FXU_FXa_FXb
  { 3,  0}, // #19 Lat3_VecXsPm
  { 1,  0}, // #20 GroupAlone_EndGroup_BeginGroup
  { 1,  0}, // #21 FXU_FXa_FXb
  { 1,  0}, // #22 FXU_FXa_FXb
  { 4,  0}, // #23 LSU
  { 6,  0}, // #24 Lat6
  { 1,  0}, // #25 GroupAlone_BeginGroup_EndGroup
  { 4,  0}, // #26 LSU
  { 4,  0}, // #27 LSU
  { 4,  0}, // #28 LSU
  { 1,  0}, // #29 FXU_FXa
  { 8,  0}, // #30 Lat8_FPU_VecBF
  { 1,  0}, // #31 GroupAlone_FXU_FXa
  { 4,  0}, // #32 LSU
  {30,  0}, // #33 Lat30_VecFPd
  { 1,  0}, // #34 GroupAlone
  { 4,  0}, // #35 LSU
  { 4,  0}, // #36 LSU
  { 4,  0}, // #37 LSU
  { 4,  0}, // #38 LSU
  { 4,  0}, // #39 LSU
  {10,  0}, // #40 Lat10
  { 1,  0}, // #41 GroupAlone
  { 4,  0}, // #42 LSU
  { 4,  0}, // #43 LSU
  { 1,  0}, // #44 FXU_FXb
  { 1,  0}, // #45 FXU_FXb
  { 1,  0}, // #46 FXU_FXb
  {10,  0}, // #47 Lat10
  { 1,  0}, // #48 GroupAlone_FXU_FXb_FXa
  { 1,  0}, // #49 FXU_FXa_FXb
  { 2,  0}, // #50 Lat2
  { 1,  0}, // #51 FXU_GroupAlone_BeginGroup_EndGroup
  { 1,  0}, // #52 FXU
  { 2,  0}, // #53 Lat2
  { 1,  0}, // #54 GroupAlone
  { 4,  0}, // #55 LSU
  { 4,  0}, // #56 LSU
  { 1,  0}, // #57 FXU_FXb_FXa
  { 9,  0}, // #58 Lat9_VecBF2
  { 1,  0}, // #59 GroupAlone_BeginGroup
  { 1,  0}, // #60 FXU_FXa
  { 4,  0}, // #61 LSU
  {10,  0}, // #62 Lat10
  { 1,  0}, // #63 FXU_FXa
  { 6,  0}, // #64 Lat6
  { 1,  0}, // #65 FXU_FXa_GroupAlone
  { 4,  0}, // #66 LSU
  {12,  0}, // #67 Lat12
  { 1,  0}, // #68 FXU_FXa
  { 4,  0}, // #69 LSU
  {15,  0}, // #70 Lat15
  { 1,  0}, // #71 GroupAlone_FXU
  { 1,  0}, // #72 FXU_FXa
  { 5,  0}, // #73 Lat5
  { 1,  0}, // #74 FXU_GroupAlone_FXa
  { 4,  0}, // #75 LSU
  { 9,  0}, // #76 Lat9_FPU2
  { 9,  0}, // #77 FPU2_VecBF2
  { 9,  0}, // #78 FPU2_Lat9_VecBF2
  { 1,  0}, // #79 FXU_GroupAlone
  { 1,  0}, // #80 FXU
  { 1,  0}, // #81 FXU
  { 1,  0}, // #82 FXU_FXa_FXb
  {30,  0}, // #83 Lat30
  { 1,  0}, // #84 GroupAlone
  { 9,  0}, // #85 FPU2
  { 9,  0}, // #86 FPU2
  { 4,  0}, // #87 LSU
  { 1,  0}, // #88 FXU
  { 1,  0}, // #89 FXU
  { 1,  0}, // #90 FXU
  {30,  0}, // #91 Lat30
  { 1,  0}, // #92 GroupAlone
  { 9,  0}, // #93 FPU2
  { 9,  0}, // #94 FPU2
  { 1,  0}, // #95 FXU
  { 1,  0}, // #96 FXU
  { 1,  0}, // #97 FXU
  { 1,  0}, // #98 FXU
  { 1,  0}, // #99 FXU
  {30,  0}, // #100 Lat30
  { 1,  0}, // #101 GroupAlone
  { 9,  0}, // #102 FPU2
  { 9,  0}, // #103 FPU2
  { 4,  0}, // #104 LSU
  { 1,  0}, // #105 FXU
  { 1,  0}, // #106 FXU
  { 1,  0}, // #107 FXU
  { 1,  0}, // #108 FXU
  {30,  0}, // #109 Lat30
  { 1,  0}, // #110 GroupAlone
  { 1,  0}, // #111 FXU_FXb
  { 4,  0}, // #112 LSU
  { 4,  0}, // #113 LSU
  { 9,  0}, // #114 Lat9
  { 1,  0}, // #115 GroupAlone_BeginGroup
  { 1,  0}, // #116 FXU_FXa
  { 1,  0}, // #117 FXU_FXa
  { 1,  0}, // #118 FXU_FXb
  { 1,  0}, // #119 FXU_FXb
  { 1,  0}, // #120 FXU_FXa
  { 4,  0}, // #121 LSU
  {10,  0}, // #122 Lat10
  { 1,  0}, // #123 GroupAlone
  { 1,  0}, // #124 FXU
  { 1,  0}, // #125 FXU
  { 1,  0}, // #126 FXU
  { 1,  0}, // #127 FXU
  { 1,  0}, // #128 FXU
  { 1,  0}, // #129 FXU
  { 4,  0}, // #130 LSU
  { 4,  0}, // #131 LSU
  {12,  0}, // #132 Lat12
  { 1,  0}, // #133 GroupAlone
  { 4,  0}, // #134 LSU
  { 4,  0}, // #135 LSU
  { 5,  0}, // #136 Lat5
  { 1,  0}, // #137 GroupAlone
  { 1,  0}, // #138 FXU
  { 1,  0}, // #139 FXU
  { 4,  0}, // #140 LSU
  { 4,  0}, // #141 LSU
  { 6,  0}, // #142 Lat6
  { 1,  0}, // #143 GroupAlone
  { 4,  0}, // #144 LSU
  { 1,  0}, // #145 FXU_FXa
  { 5,  0}, // #146 Lat5
  { 1,  0}, // #147 GroupAlone_BeginGroup_FXa
  { 1,  0}, // #148 FXU_FXa
  { 1,  0}, // #149 FXU_FXb
  { 4,  0}, // #150 LSU
  { 8,  0}, // #151 Lat8
  { 1,  0}, // #152 GroupAlone
  { 4,  0}, // #153 LSU
  { 4,  0}, // #154 LSU
  { 1,  0}, // #155 FXU_FXb
  { 1,  0}, // #156 FXU_FXb
  { 1,  0}, // #157 FXU_FXb
  { 1,  0}, // #158 FXU_FXb
  { 1,  0}, // #159 FXU_FXb
  {15,  0}, // #160 Lat15
  { 1,  0}, // #161 GroupAlone
  { 1,  0}, // #162 FXU
  { 7,  0}, // #163 Lat7
  { 1,  0}, // #164 GroupAlone
  { 1,  0}, // #165 FXU_FXa
  { 5,  0}, // #166 Lat5
  { 4,  0}, // #167 LSU
  { 4,  0}, // #168 LSU
  { 4,  0}, // #169 LSU
  { 4,  0}, // #170 LSU
  { 4,  0}, // #171 LSU
  { 1,  0}, // #172 FXU
  { 1,  0}, // #173 FXU
  {20,  0}, // #174 Lat20
  { 1,  0}, // #175 GroupAlone
  { 8,  0}, // #176 FPU_VecDF
  { 8,  0}, // #177 FPU_VecDF
  {20,  0}, // #178 Lat20
  { 8,  0}, // #179 FPU_VecBF
  { 4,  0}, // #180 LSU
  {12,  0}, // #181 Lat12
  { 9,  0}, // #182 FPU2
  { 9,  0}, // #183 FPU2
  { 4,  0}, // #184 LSU
  {15,  0}, // #185 Lat15
  { 1,  0}, // #186 GroupAlone
  { 9,  0}, // #187 FPU2
  { 9,  0}, // #188 FPU2
  {10,  0}, // #189 Lat10
  { 1,  0}, // #190 GroupAlone
  { 1,  0}, // #191 FXU_FXb
  { 8,  0}, // #192 FPU_VecBF
  { 9,  0}, // #193 Lat9
  { 1,  0}, // #194 GroupAlone_BeginGroup
  { 1,  0}, // #195 FXU
  { 9,  0}, // #196 FPU2_VecDF2
  { 9,  0}, // #197 FPU2_VecDF2
  {11,  0}, // #198 Lat11
  { 1,  0}, // #199 GroupAlone
  { 1,  0}, // #200 FXU
  { 8,  0}, // #201 FPU
  {12,  0}, // #202 Lat12
  { 1,  0}, // #203 GroupAlone
  { 1,  0}, // #204 FXU_FXb
  { 8,  0}, // #205 FPU_VecDF
  { 8,  0}, // #206 FPU_VecDF
  {20,  0}, // #207 Lat20
  { 1,  0}, // #208 GroupAlone_BeginGroup
  { 1,  0}, // #209 FXU_FXb
  { 8,  0}, // #210 FPU_VecBF
  {11,  0}, // #211 Lat11
  { 1,  0}, // #212 GroupAlone_BeginGroup
  { 8,  0}, // #213 FPU
  { 4,  0}, // #214 LSU
  {30,  0}, // #215 Lat30
  { 8,  0}, // #216 FPU
  {30,  0}, // #217 Lat30
  { 9,  0}, // #218 FPU2
  { 9,  0}, // #219 FPU2
  {30,  0}, // #220 Lat30
  { 1,  0}, // #221 GroupAlone
  { 9,  0}, // #222 FPU2
  { 9,  0}, // #223 FPU2
  {15,  0}, // #224 Lat15
  { 1,  0}, // #225 GroupAlone
  { 9,  0}, // #226 FPU2_VecDF2
  { 9,  0}, // #227 FPU2_VecDF2
  {20,  0}, // #228 Lat20
  { 1,  0}, // #229 GroupAlone
  { 8,  0}, // #230 FPU_VecBF
  { 4,  0}, // #231 LSU
  {12,  0}, // #232 Lat12
  { 1,  0}, // #233 GroupAlone
  { 8,  0}, // #234 FPU
  { 8,  0}, // #235 FPU
  {30,  0}, // #236 Lat30
  { 8,  0}, // #237 FPU
  { 4,  0}, // #238 LSU
  {15,  0}, // #239 Lat15
  { 4,  0}, // #240 LSU
  { 3,  0}, // #241 Lat3
  { 1,  0}, // #242 GroupAlone
  { 1,  0}, // #243 FXa
  { 1,  0}, // #244 FXa
  { 1,  0}, // #245 FXb
  { 1,  0}, // #246 FXb
  { 4,  0}, // #247 Lat4
  { 1,  0}, // #248 GroupAlone
  { 1,  0}, // #249 FXb
  { 4,  0}, // #250 LSU
  { 4,  0}, // #251 LSU
  { 4,  0}, // #252 LSU
  { 8,  0}, // #253 Lat8
  { 1,  0}, // #254 GroupAlone
  { 4,  0}, // #255 LSU
  { 1,  0}, // #256 FXa
  {30,  0}, // #257 Lat30
  { 1,  0}, // #258 GroupAlone
  { 2,  0}, // #259 FXa2
  { 2,  0}, // #260 FXa2
  {20,  0}, // #261 Lat20
  { 1,  0}, // #262 GroupAlone
  { 2,  0}, // #263 FXa2
  { 2,  0}, // #264 FXa2
  {30,  0}, // #265 Lat30
  { 1,  0}, // #266 GroupAlone
  { 2,  0}, // #267 FXa2
  { 2,  0}, // #268 FXa2
  { 4,  0}, // #269 LSU
  {30,  0}, // #270 Lat30
  { 1,  0}, // #271 GroupAlone
  { 1,  0}, // #272 FXa
  { 1,  0}, // #273 FXa
  { 1,  0}, // #274 FXb
  { 1,  0}, // #275 FXb
  { 4,  0}, // #276 LSU
  { 1,  0}, // #277 FXb
  { 1,  0}, // #278 FXb
  { 4,  0}, // #279 LSU
  { 4,  0}, // #280 LSU
  {20,  0}, // #281 Lat20
  { 1,  0}, // #282 GroupAlone
  { 1,  0}, // #283 FXa
  { 1,  0}, // #284 FXa
  { 1,  0}, // #285 FXb
  { 5,  0}, // #286 Lat5
  { 1,  0}, // #287 GroupAlone
  { 4,  0}, // #288 LSU
  { 4,  0}, // #289 LSU
  { 4,  0}, // #290 LSU
  { 1,  0}, // #291 FXa
  { 1,  0}, // #292 FXa
  { 1,  0}, // #293 FXb
  { 9,  0}, // #294 Lat9
  { 1,  0}, // #295 GroupAlone
  { 4,  0}, // #296 LSU
  { 4,  0}, // #297 LSU
  { 4,  0}, // #298 LSU
  { 4,  0}, // #299 LSU
  { 1,  0}, // #300 FXa
  { 1,  0}, // #301 FXa
  { 1,  0}, // #302 FXb
  { 1,  0}, // #303 FXb
  {11,  0}, // #304 Lat11
  { 1,  0}, // #305 GroupAlone
  { 3,  0}, // #306 VecXsPm
  { 4,  0}, // #307 Lat4
  { 3,  0}, // #308 VecXsPm
  { 4,  0}, // #309 LSU
  { 7,  0}, // #310 Lat7
  { 9,  0}, // #311 VecBF2
  { 9,  0}, // #312 VecBF2
  { 4,  0}, // #313 LSU
  {12,  0}, // #314 Lat12
  { 1,  0}, // #315 GroupAlone
  { 1,  0}, // #316 FXb
  { 9,  0}, // #317 VecDF2
  { 9,  0}, // #318 VecDF2
  {12,  0}, // #319 Lat12
  { 1,  0}, // #320 GroupAlone
  {30,  0}, // #321 VecFPd
  { 4,  0}, // #322 LSU
  {30,  0}, // #323 VecFPd
  {30,  0}, // #324 VecFPd
  { 1,  0}, // #325 GroupAlone
  { 3,  0}, // #326 VecXsPm
  { 4,  0}, // #327 LSU
  { 8,  0}, // #328 Lat8
  { 4,  0}, // #329 LSU
  { 3,  0}, // #330 VecXsPm
  { 9,  0}, // #331 Lat9
  { 4,  0}, // #332 LSU
  { 9,  0}, // #333 VecDF2
  { 9,  0}, // #334 VecDF2
  {15,  0}, // #335 Lat15
  { 1,  0}, // #336 GroupAlone
  { 1,  0}, // #337 FXb
  { 4,  0}, // #338 LSU
  { 3,  0}, // #339 VecXsPm
  {11,  0}, // #340 Lat11
  { 1,  0}, // #341 BeginGroup
  { 4,  0}, // #342 LSU
  { 4,  0}, // #343 LSU
  { 1,  0}, // #344 FXb
  { 1,  0}, // #345 FXb
  { 1,  0}, // #346 FXb
  { 1,  0}, // #347 FXb
  { 1,  0}, // #348 FXb
  {20,  0}, // #349 Lat20
  { 1,  0}, // #350 GroupAlone
  { 1,  0}, // #351 FXb
  { 1,  0}, // #352 FXb
  { 4,  0}, // #353 LSU
  {12,  0}, // #354 Lat12
  { 1,  0}, // #355 BeginGroup
  { 3,  0}, // #356 VecXsPm
  { 3,  0}, // #357 VecXsPm
  { 8,  0}, // #358 Lat8
  { 4,  0}, // #359 LSU
  { 1,  0}, // #360 FXU
  { 1,  0}, // #361 FXU
  { 6,  0}, // #362 Lat6
  { 1,  0}, // #363 GroupAlone
  { 1,  0}, // #364 FXU
  { 4,  0}, // #365 LSU
  { 1,  0}, // #366 FXU
  { 6,  0}, // #367 Lat6
  { 1,  0}, // #368 GroupAlone
  { 1,  0}, // #369 FXU
  { 1,  0}, // #370 FXU
  { 4,  0}, // #371 LSU
  { 6,  0}, // #372 Lat6
  { 2,  0}, // #373 Lat2
  { 1,  0} // #374 GroupAlone
}; // SystemZWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SystemZReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc ZEC12ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, false,  2, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false,  2, 1,  1, 1,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, false,  3, 1,  2, 2,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, false,  3, 1,  2, 2,  0, 0}, // #5
  {DBGFIELD("BRCT_BRCTG")         1, false, true,  1, 1,  4, 2,  0, 0}, // #6
  {DBGFIELD("BRCTH")              2, true, true,  4, 2,  6, 4,  0, 0}, // #7
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true,  4, 2,  6, 4,  0, 0}, // #8
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true,  6, 2, 10, 6,  0, 0}, // #9
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #10
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true,  4, 2,  6, 4,  0, 0}, // #11
  {DBGFIELD("CondTrap_Trap")      1, false, false,  2, 1,  1, 1,  0, 0}, // #12
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 2, false, false,  4, 2,  6, 3,  0, 0}, // #16
  {DBGFIELD("BRAS")               3, true, true,  8, 2, 16, 5,  0, 0}, // #17
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 10, 2, 21, 5,  0, 0}, // #18
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 10, 2, 21, 5,  0, 0}, // #19
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 10, 2, 21, 5,  0, 0}, // #20
  {DBGFIELD("Return")             1, false, true,  3, 1,  4, 2,  0, 0}, // #21
  {DBGFIELD("CondReturn")         1, false, false,  3, 1,  1, 1,  0, 0}, // #22
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #23
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 0, false, false,  0, 0,  0, 0,  0, 0}, // #27
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #28
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false,  4, 2,  6, 3,  0, 0}, // #31
  {DBGFIELD("MVI_MVIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVC")                4, true, true, 12, 2, 26, 6,  0, 0}, // #33
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 1,  0, 0}, // #34
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("SUBREG_TO_REG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 0, false, false,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1,  2, 1,  0, 0}, // #40
  {DBGFIELD("L128")               1, false, false,  3, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #42
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LHI_LHIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LR_LRMux")           1, false, false,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LZRF_LZRG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #47
  {DBGFIELD("LAT_LFHAT_LGAT")     2, false, false,  4, 2,  6, 3,  0, 0}, // #48
  {DBGFIELD("LT_LTG")             2, false, false,  4, 2,  6, 3,  0, 0}, // #49
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #50
  {DBGFIELD("STG_STGRL")          2, false, false,  4, 2,  6, 3,  0, 0}, // #51
  {DBGFIELD("ST128")              2, false, false,  4, 2,  6, 3,  0, 0}, // #52
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("MVST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #54
  {DBGFIELD("LOCRMux")            0, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #60
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 1,  0, 0}, // #61
  {DBGFIELD("LTGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #62
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LB_LBH_LBMux")       2, false, false,  4, 2,  6, 3,  0, 0}, // #64
  {DBGFIELD("LH_LHY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #65
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false,  4, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LGB_LGF_LGH")        2, false, false,  4, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LGFRL_LGHRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LLCR_LLCRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #69
  {DBGFIELD("LLHR_LLHRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #70
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLC_LLCMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #72
  {DBGFIELD("LLH_LLHMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #73
  {DBGFIELD("LLCH_LLHH")          2, false, false,  4, 2,  6, 3,  0, 0}, // #74
  {DBGFIELD("LLHRL")              1, false, false,  3, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1,  2, 1,  0, 0}, // #76
  {DBGFIELD("LLZRGF")             0, false, false,  0, 0,  0, 0,  0, 0}, // #77
  {DBGFIELD("LLGFAT_LLGTAT")      2, false, false,  4, 2,  6, 3,  0, 0}, // #78
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #79
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 14, 1, 35, 7,  0, 0}, // #81
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 15, 2, 42, 7,  0, 0}, // #82
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #83
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false,  4, 2,  6, 3,  0, 0}, // #84
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false,  4, 2,  6, 3,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 1,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 1,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        2, true, true,  8, 1, 17, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("LCGFR")              2, true, true,  8, 1, 51, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #93
  {DBGFIELD("IC32_IC32Y")         2, false, false,  4, 2,  6, 3,  0, 0}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("IIHF_IIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #97
  {DBGFIELD("IIHH_IIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #98
  {DBGFIELD("IIHL_IIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #99
  {DBGFIELD("IILF_IILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #100
  {DBGFIELD("IILH_IILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IILL_IILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("A_AY")               2, false, false,  4, 2,  6, 3,  0, 0}, // #103
  {DBGFIELD("AH_AHY")             2, false, false,  4, 2, 22, 3,  0, 0}, // #104
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("AFI_AFIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("AG")                 2, false, false,  4, 2,  6, 3,  0, 0}, // #107
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 1,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           2, false, false,  4, 2,  6, 3,  0, 0}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #120
  {DBGFIELD("AGSI_ASI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #121
  {DBGFIELD("ALC_ALCG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #122
  {DBGFIELD("ALCGR_ALCR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #123
  {DBGFIELD("AGF")                2, false, false,  4, 2, 22, 3,  0, 0}, // #124
  {DBGFIELD("AGFR")               1, false, false,  1, 1, 49, 2,  0, 0}, // #125
  {DBGFIELD("S_SG_SY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #126
  {DBGFIELD("SH_SHY")             2, false, false,  4, 2, 22, 3,  0, 0}, // #127
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #128
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #129
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false,  4, 2,  6, 3,  0, 0}, // #130
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #131
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #133
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #134
  {DBGFIELD("SLB_SLBG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #135
  {DBGFIELD("SLBGR_SLBR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #136
  {DBGFIELD("SGF")                2, false, false,  4, 2, 22, 3,  0, 0}, // #137
  {DBGFIELD("SGFR")               1, false, false,  1, 1, 49, 2,  0, 0}, // #138
  {DBGFIELD("N_NG_NY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #139
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("NI_NIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #142
  {DBGFIELD("NIHF_NIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("NIHH_NIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #144
  {DBGFIELD("NIHL_NIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #145
  {DBGFIELD("NILF_NILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #146
  {DBGFIELD("NILH_NILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #147
  {DBGFIELD("NILL_NILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #148
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #149
  {DBGFIELD("NC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #150
  {DBGFIELD("O_OG_OY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #151
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("OI_OIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #153
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("OIHF_OIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("OIHH_OIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("OIHL_OIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("OILF_OILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("OILH_OILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("OILL_OILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #160
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("OC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #162
  {DBGFIELD("X_XG_XY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #163
  {DBGFIELD("XI_XIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #164
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #166
  {DBGFIELD("XIHF_XIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("XILF_XILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("XC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #170
  {DBGFIELD("MS_MSGF_MSY")        2, false, false,  4, 2, 60, 3,  0, 0}, // #171
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 63, 2,  0, 0}, // #172
  {DBGFIELD("MSG")                2, false, false,  4, 2, 65, 3,  0, 0}, // #173
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 29, 2,  0, 0}, // #174
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 63, 2,  0, 0}, // #175
  {DBGFIELD("MLG")                2, true, true,  4, 2, 68, 4,  0, 0}, // #176
  {DBGFIELD("MLGR")               1, true, true,  1, 1, 57, 3,  0, 0}, // #177
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 72, 2,  0, 0}, // #178
  {DBGFIELD("MHI")                1, false, false,  1, 1, 72, 2,  0, 0}, // #179
  {DBGFIELD("MH_MHY")             2, false, false,  4, 2, 74, 3,  0, 0}, // #180
  {DBGFIELD("DSGFR_DSGR")         6, true, true, 19, 2, 77, 8,  0, 0}, // #181
  {DBGFIELD("DSG_DSGF")           6, true, true, 21, 3, 85, 8,  0, 0}, // #182
  {DBGFIELD("DLR")                7, true, true, 24, 2, 93, 9,  0, 0}, // #183
  {DBGFIELD("DLGR")               7, true, true, 24, 2, 93, 9,  0, 0}, // #184
  {DBGFIELD("DL_DLG")             7, true, true, 26, 3, 102, 9,  0, 0}, // #185
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #186
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #187
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #188
  {DBGFIELD("SLA_SLAK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #189
  {DBGFIELD("RLL_RLLG")           2, false, false,  4, 2, 22, 3,  0, 0}, // #190
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false,  1, 1,  1, 1,  0, 0}, // #191
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #192
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #193
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, true,  8, 1, 17, 4,  0, 0}, // #195
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #196
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #197
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #198
  {DBGFIELD("CGHSI_CGRL")         2, false, false,  4, 2,  6, 3,  0, 0}, // #199
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 1,  0, 0}, // #200
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #201
  {DBGFIELD("CHF_CHSI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #202
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #203
  {DBGFIELD("CLFI_CLFIMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #204
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false,  4, 2,  6, 3,  0, 0}, // #205
  {DBGFIELD("CLGF_CLGFRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #206
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("CLGRL")              2, false, false,  4, 2,  6, 3,  0, 0}, // #209
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false,  4, 2,  6, 3,  0, 0}, // #210
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 1,  0, 0}, // #211
  {DBGFIELD("CLI_CLIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #212
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("CLRL")               2, false, false,  4, 2,  6, 3,  0, 0}, // #214
  {DBGFIELD("CH_CHRL_CHY")        2, false, false,  4, 2, 22, 3,  0, 0}, // #215
  {DBGFIELD("CGH_CGHRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #216
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 21, 5,  0, 0}, // #217
  {DBGFIELD("CGF_CGFRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #218
  {DBGFIELD("CGFR")               1, false, false,  1, 1, 49, 2,  0, 0}, // #219
  {DBGFIELD("CLC")                3, true, true, 17, 2, 111, 5,  0, 0}, // #220
  {DBGFIELD("CLST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #221
  {DBGFIELD("TM_TMY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #222
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("TMHH_TMHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #224
  {DBGFIELD("TMHL_TMHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #225
  {DBGFIELD("TMLH_TMLH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("TMLL_TMLL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #227
  {DBGFIELD("PFD_PFDRL")          1, false, false,  3, 1,  2, 1,  0, 0}, // #228
  {DBGFIELD("BPP")                1, false, false,  3, 1,  2, 1,  0, 0}, // #229
  {DBGFIELD("BPRP")               1, false, false,  3, 1,  2, 1,  0, 0}, // #230
  {DBGFIELD("NIAI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #231
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  3, 2,  0, 0}, // #232
  {DBGFIELD("LAA_LAAG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #233
  {DBGFIELD("LAAL_LAALG")         2, false, false,  4, 2,  6, 3,  0, 0}, // #234
  {DBGFIELD("LAN_LANG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #235
  {DBGFIELD("LAO_LAOG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #236
  {DBGFIELD("LAX_LAXG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #237
  {DBGFIELD("TS")                 2, false, true,  4, 2,  6, 4,  0, 0}, // #238
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 21, 5,  0, 0}, // #239
  {DBGFIELD("CDS_CDSY")           6, true, true, 29, 2, 116, 8,  0, 0}, // #240
  {DBGFIELD("CDSG")               8, true, true, 31, 2, 124, 10,  0, 0}, // #241
  {DBGFIELD("CSST")               1, true, true,  1, 1, 82, 3,  0, 0}, // #242
  {DBGFIELD("PLO")                1, true, true,  3, 1, 32, 3,  0, 0}, // #243
  {DBGFIELD("LPQ")                2, true, true, 16, 1, 134, 4,  0, 0}, // #244
  {DBGFIELD("STPQ")               4, true, true, 33, 2, 138, 6,  0, 0}, // #245
  {DBGFIELD("LPD_LPDG")           2, true, true, 16, 1, 134, 4,  0, 0}, // #246
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1,  2, 1,  0, 0}, // #247
  {DBGFIELD("LAE_LAEY")           2, true, true,  4, 2, 144, 4,  0, 0}, // #248
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  3, 1, 32, 3,  0, 0}, // #249
  {DBGFIELD("IPM")                1, false, true,  1, 1, 18, 3,  0, 0}, // #250
  {DBGFIELD("SPM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #251
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2, 148, 5,  0, 0}, // #252
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 1,  0, 0}, // #253
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  3, 2,  0, 0}, // #254
  {DBGFIELD("BSM")                2, true, true,  4, 2,  6, 4,  0, 0}, // #255
  {DBGFIELD("BASSM")              3, true, true, 10, 2, 21, 5,  0, 0}, // #256
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 7, true, true, 35, 2, 153, 9,  0, 0}, // #257
  {DBGFIELD("TEND")               1, true, true,  3, 1,  3, 2,  0, 0}, // #258
  {DBGFIELD("TABORT")             1, true, true,  3, 1,  3, 2,  0, 0}, // #259
  {DBGFIELD("ETND")               1, false, false,  1, 1,  1, 1,  0, 0}, // #260
  {DBGFIELD("NTSTG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #261
  {DBGFIELD("PPA")                1, false, false,  1, 1,  1, 1,  0, 0}, // #262
  {DBGFIELD("FLOGR")              1, true, true,  1, 1, 162, 3,  0, 0}, // #263
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 18, 2,  0, 0}, // #264
  {DBGFIELD("AEXT128_64")         1, false, false,  1, 1,  1, 1,  0, 0}, // #265
  {DBGFIELD("ZEXT128_32_ZEXT128_64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #266
  {DBGFIELD("SRST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #267
  {DBGFIELD("MVCK")               1, true, true,  3, 1, 150, 3,  0, 0}, // #268
  {DBGFIELD("ECTG")               2, false, false,  4, 2, 165, 3,  0, 0}, // #269
  {DBGFIELD("EX_EXRL")            1, true, true,  3, 1,  3, 2,  0, 0}, // #270
  {DBGFIELD("PR")                 1, false, false,  1, 1, 82, 2,  0, 0}, // #271
  {DBGFIELD("STCK_STCKF")         3, true, true, 17, 2, 111, 5,  0, 0}, // #272
  {DBGFIELD("STCKE")              6, true, true, 37, 2, 168, 8,  0, 0}, // #273
  {DBGFIELD("STFLE")              2, false, false,  4, 2,  6, 3,  0, 0}, // #274
  {DBGFIELD("SVC")                1, false, false,  1, 1, 82, 2,  0, 0}, // #275
  {DBGFIELD("STRAG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #276
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #277
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #278
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #279
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #280
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 1,  0, 0}, // #281
  {DBGFIELD("LZXR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #282
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 1,  0, 0}, // #283
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #284
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 18, 2,  0, 0}, // #285
  {DBGFIELD("LXR")                2, true, true,  8, 1, 48, 4,  0, 0}, // #286
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 39, 1, 30, 1,  0, 0}, // #287
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #288
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #289
  {DBGFIELD("LTXBR")              2, true, true, 19, 1, 76, 4,  0, 0}, // #290
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 19, 1, 76, 4,  0, 0}, // #291
  {DBGFIELD("CPSDRdd_CPSDRds")    2, true, true,  8, 1, 71, 4,  0, 0}, // #292
  {DBGFIELD("CPSDRsd_CPSDRss")    2, true, true,  8, 1, 71, 4,  0, 0}, // #293
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1,  2, 1,  0, 0}, // #294
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1,  2, 1,  0, 0}, // #295
  {DBGFIELD("LX")                 1, false, false,  3, 1,  2, 1,  0, 0}, // #296
  {DBGFIELD("STD_STDY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #297
  {DBGFIELD("STE_STEY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #298
  {DBGFIELD("STX")                2, false, false,  4, 2,  6, 3,  0, 0}, // #299
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #300
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 40, 1, 176, 3,  0, 0}, // #301
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 40, 1, 176, 3,  0, 0}, // #302
  {DBGFIELD("LDEB")               2, false, false, 41, 2, 179, 3,  0, 0}, // #303
  {DBGFIELD("LDEBR")              1, false, false, 39, 1, 30, 1,  0, 0}, // #304
  {DBGFIELD("LXDB_LXEB")          3, true, true, 43, 2, 182, 5,  0, 0}, // #305
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 19, 1, 187, 4,  0, 0}, // #306
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, true, 45, 2, 191, 4,  0, 0}, // #307
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, true, 45, 2, 191, 4,  0, 0}, // #308
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 47, 2, 195, 5,  0, 0}, // #309
  {DBGFIELD("CELFBR_CELGBR")      2, true, true, 45, 2, 191, 4,  0, 0}, // #310
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, true, 45, 2, 191, 4,  0, 0}, // #311
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 47, 2, 195, 5,  0, 0}, // #312
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, true, 45, 2, 200, 4,  0, 0}, // #313
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, true, 45, 2, 200, 4,  0, 0}, // #314
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 49, 2, 204, 5,  0, 0}, // #315
  {DBGFIELD("CLFEBR")             2, true, true, 45, 2, 209, 4,  0, 0}, // #316
  {DBGFIELD("CLFDBR")             2, true, true, 45, 2, 209, 4,  0, 0}, // #317
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, true, 45, 2, 209, 4,  0, 0}, // #318
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 49, 2, 204, 5,  0, 0}, // #319
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #320
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #321
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #322
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #323
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #324
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 19, 1, 76, 4,  0, 0}, // #325
  {DBGFIELD("SQDB_SQEB")          2, false, false, 41, 2, 213, 3,  0, 0}, // #326
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 39, 1, 216, 2,  0, 0}, // #327
  {DBGFIELD("SQXBR")              2, true, true, 19, 1, 218, 4,  0, 0}, // #328
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #329
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #330
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 19, 1, 222, 4,  0, 0}, // #331
  {DBGFIELD("ADB_AEB")            2, false, false, 41, 2, 179, 3,  0, 0}, // #332
  {DBGFIELD("ADBR_AEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #333
  {DBGFIELD("AXBR")               2, true, true, 19, 1, 226, 4,  0, 0}, // #334
  {DBGFIELD("SDB_SEB")            2, false, false, 41, 2, 179, 3,  0, 0}, // #335
  {DBGFIELD("SDBR_SEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #336
  {DBGFIELD("SXBR")               2, true, true, 19, 1, 226, 4,  0, 0}, // #337
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 41, 2, 179, 3,  0, 0}, // #338
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 39, 1, 30, 1,  0, 0}, // #339
  {DBGFIELD("MXDB")               3, true, true, 43, 2, 182, 5,  0, 0}, // #340
  {DBGFIELD("MXDBR")              2, true, true, 19, 1, 187, 4,  0, 0}, // #341
  {DBGFIELD("MXBR")               2, true, true, 19, 1, 218, 4,  0, 0}, // #342
  {DBGFIELD("MAEB_MSEB")          2, true, true, 41, 2, 230, 4,  0, 0}, // #343
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #344
  {DBGFIELD("MADB_MSDB")          2, true, true, 41, 2, 230, 4,  0, 0}, // #345
  {DBGFIELD("MADBR_MSDBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #346
  {DBGFIELD("DDB_DEB")            2, false, false, 41, 2, 213, 3,  0, 0}, // #347
  {DBGFIELD("DDBR_DEBR")          1, false, false, 39, 1, 216, 2,  0, 0}, // #348
  {DBGFIELD("DXBR")               2, true, true, 19, 1, 218, 4,  0, 0}, // #349
  {DBGFIELD("CDB_CEB")            2, false, false, 41, 2, 179, 3,  0, 0}, // #350
  {DBGFIELD("CDBR_CEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #351
  {DBGFIELD("CXBR")               2, false, false, 40, 1, 234, 3,  0, 0}, // #352
  {DBGFIELD("TCDB_TCEB")          2, false, false, 41, 2, 237, 3,  0, 0}, // #353
  {DBGFIELD("TCXB")               3, true, true, 43, 2, 182, 5,  0, 0}, // #354
  {DBGFIELD("EFPC")               2, true, true,  4, 2,  1, 4,  0, 0}, // #355
  {DBGFIELD("STFPC")              1, true, true,  3, 1, 240, 3,  0, 0}, // #356
  {DBGFIELD("SFPC")               1, true, true,  3, 1, 240, 3,  0, 0}, // #357
  {DBGFIELD("LFPC")               2, true, true, 16, 1, 140, 4,  0, 0}, // #358
  {DBGFIELD("SFASR")              1, true, true,  1, 1, 82, 3,  0, 0}, // #359
  {DBGFIELD("LFAS")               2, true, true,  4, 2, 31, 4,  0, 0}, // #360
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true,  1, 1, 49, 3,  0, 0}, // #361
  {DBGFIELD("VLR_VLR32_VLR64")    0, false, false,  0, 0,  0, 0,  0, 0}, // #362
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #363
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #364
  {DBGFIELD("VLVGP_VLVGP32")      0, false, false,  0, 0,  0, 0,  0, 0}, // #365
  {DBGFIELD("VZERO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #366
  {DBGFIELD("VONE")               0, false, false,  0, 0,  0, 0,  0, 0}, // #367
  {DBGFIELD("VGBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #368
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #369
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #370
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #371
  {DBGFIELD("VL_VLBB_VLL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #372
  {DBGFIELD("VL32_VL64")          0, false, false,  0, 0,  0, 0,  0, 0}, // #373
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #374
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #375
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #376
  {DBGFIELD("VGEF_VGEG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #377
  {DBGFIELD("VLM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #378
  {DBGFIELD("VST_VST32_VST64_VSTL") 0, false, false,  0, 0,  0, 0,  0, 0}, // #379
  {DBGFIELD("VSTEF_VSTEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #380
  {DBGFIELD("VSTEB_VSTEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #381
  {DBGFIELD("VSTM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #382
  {DBGFIELD("VSCEF_VSCEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #383
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #384
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #385
  {DBGFIELD("VPERM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #386
  {DBGFIELD("VPDI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #387
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #388
  {DBGFIELD("VSEL")               0, false, false,  0, 0,  0, 0,  0, 0}, // #389
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #390
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #391
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #392
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #393
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #394
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #395
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #396
  {DBGFIELD("VUPL_VUPLB_VUPLF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #397
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #398
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #399
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #400
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #401
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #402
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #403
  {DBGFIELD("VN_VNC_VNO")         0, false, false,  0, 0,  0, 0,  0, 0}, // #404
  {DBGFIELD("VO")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #405
  {DBGFIELD("VCKSM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #406
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #407
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #408
  {DBGFIELD("VX")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #409
  {DBGFIELD("VGFM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #410
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #411
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #412
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #413
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #414
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #415
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #416
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #417
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #418
  {DBGFIELD("VMAL_VMALB_VMALF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #419
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #420
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #421
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #422
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #423
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #424
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #425
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #426
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #427
  {DBGFIELD("VML_VMLB_VMLF")      0, false, false,  0, 0,  0, 0,  0, 0}, // #428
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #429
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #430
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #431
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #432
  {DBGFIELD("VPOPCT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #433
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #434
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #435
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #436
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #437
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #438
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #439
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #440
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #441
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #442
  {DBGFIELD("VSL_VSLDB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #443
  {DBGFIELD("VSLB")               0, false, false,  0, 0,  0, 0,  0, 0}, // #444
  {DBGFIELD("VSRA_VSRL")          0, false, false,  0, 0,  0, 0,  0, 0}, // #445
  {DBGFIELD("VSRAB_VSRLB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #446
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #447
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #448
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #449
  {DBGFIELD("VSUM_VSUMB_VSUMH")   0, false, false,  0, 0,  0, 0,  0, 0}, // #450
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #451
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 0, false, false,  0, 0,  0, 0,  0, 0}, // #452
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #453
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #454
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #455
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #456
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #457
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #458
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #459
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #460
  {DBGFIELD("VTM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #461
  {DBGFIELD("VCDG_VCDGB_VCDLG_VCDLGB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #462
  {DBGFIELD("WCDGB_WCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #463
  {DBGFIELD("VCGD_VCLGD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #464
  {DBGFIELD("VFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #465
  {DBGFIELD("WFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #466
  {DBGFIELD("VCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #467
  {DBGFIELD("WCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #468
  {DBGFIELD("VFA_VFI_VFM_VFS")    0, false, false,  0, 0,  0, 0,  0, 0}, // #469
  {DBGFIELD("VFIDB_VFMDB_VFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #470
  {DBGFIELD("WFIDB_WFMDB_WFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #471
  {DBGFIELD("VCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #472
  {DBGFIELD("WCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #473
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #474
  {DBGFIELD("WFLCDB_WFLNDB_WFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #475
  {DBGFIELD("VFMA_VFMS")          0, false, false,  0, 0,  0, 0,  0, 0}, // #476
  {DBGFIELD("VFMADB_VFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #477
  {DBGFIELD("WFMADB_WFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #478
  {DBGFIELD("VFPSO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #479
  {DBGFIELD("VFPSODB_WFPSODB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #480
  {DBGFIELD("VFTCI_VFTCIDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #481
  {DBGFIELD("WFTCIDB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #482
  {DBGFIELD("VLDE_VLED")          0, false, false,  0, 0,  0, 0,  0, 0}, // #483
  {DBGFIELD("VLDEB_VLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #484
  {DBGFIELD("WLDEB_WLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #485
  {DBGFIELD("VFD")                0, false, false,  0, 0,  0, 0,  0, 0}, // #486
  {DBGFIELD("VFDDB_WFDDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #487
  {DBGFIELD("VFSQ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #488
  {DBGFIELD("VFSQDB_WFSQDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #489
  {DBGFIELD("VFCE_VFCH_VFCHE")    0, false, false,  0, 0,  0, 0,  0, 0}, // #490
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #491
  {DBGFIELD("WFC_WFK")            0, false, false,  0, 0,  0, 0,  0, 0}, // #492
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #493
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #494
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #495
  {DBGFIELD("WFCDB_WFKDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #496
  {DBGFIELD("LEFR")               0, false, false,  0, 0,  0, 0,  0, 0}, // #497
  {DBGFIELD("LFER")               0, false, false,  0, 0,  0, 0,  0, 0}, // #498
  {DBGFIELD("VFAE_VFAEB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #499
  {DBGFIELD("VFAEBS")             0, false, false,  0, 0,  0, 0,  0, 0}, // #500
  {DBGFIELD("VFAEF_VFAEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #501
  {DBGFIELD("VFAEFS_VFAEHS")      0, false, false,  0, 0,  0, 0,  0, 0}, // #502
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #503
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #504
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #505
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #506
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #507
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #508
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #509
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #510
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #511
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #512
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #513
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #514
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  3, 1,  2, 1,  0, 0}, // #515
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false,  1, 1, 49, 2,  0, 0}, // #516
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, false,  4, 2, 22, 3,  0, 0}, // #517
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, false,  4, 2,  6, 3,  0, 0}, // #518
  {DBGFIELD("ASI")                2, false, false,  4, 2,  6, 3,  0, 0}, // #519
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 1,  0, 0}, // #520
  {DBGFIELD("STCK")               3, true, true, 17, 2, 111, 5,  0, 0} // #521
}; // ZEC12ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z13ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false, 39, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, false,  2, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false,  2, 1,  1, 1,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #5
  {DBGFIELD("BRCT_BRCTG")         1, false, true, 39, 1,  4, 2,  0, 0}, // #6
  {DBGFIELD("BRCTH")              2, true, true, 45, 2, 48, 4,  0, 0}, // #7
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true, 45, 2, 48, 4,  0, 0}, // #8
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true, 51, 2, 243, 6,  0, 0}, // #9
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #10
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true,  8, 1, 48, 4,  0, 0}, // #11
  {DBGFIELD("CondTrap_Trap")      1, false, false,  2, 1,  1, 1,  0, 0}, // #12
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 2, false, false,  4, 2,  6, 3,  0, 0}, // #16
  {DBGFIELD("BRAS")               3, true, true, 53, 2, 16, 5,  0, 0}, // #17
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 49, 2, 16, 5,  0, 0}, // #18
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 49, 2, 16, 5,  0, 0}, // #19
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 49, 2, 16, 5,  0, 0}, // #20
  {DBGFIELD("Return")             1, false, true,  1, 1,  4, 2,  0, 0}, // #21
  {DBGFIELD("CondReturn")         1, false, false,  1, 1,  1, 1,  0, 0}, // #22
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false, 39, 1,  1, 1,  0, 0}, // #23
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #27
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #28
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false,  4, 2,  6, 3,  0, 0}, // #31
  {DBGFIELD("MVI_MVIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVC")                4, true, true, 12, 2, 249, 6,  0, 0}, // #33
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false, 39, 1,  1, 1,  0, 0}, // #34
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false, 39, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("INSERT_SUBREG")      1, false, false, 39, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("REG_SEQUENCE")       1, false, false, 39, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("SUBREG_TO_REG")      1, false, false, 39, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 1, false, false,  3, 1,  2, 1,  0, 0}, // #39
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1,  2, 1,  0, 0}, // #40
  {DBGFIELD("L128")               1, false, false,  3, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false, 39, 1,  1, 1,  0, 0}, // #42
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false, 39, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("LGFI_LGHI")          1, false, false, 39, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LHI_LHIMux")         1, false, false, 39, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LR_LRMux")           1, false, false, 39, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LZRF_LZRG")          1, false, false,  3, 1,  2, 1,  0, 0}, // #47
  {DBGFIELD("LAT_LFHAT_LGAT")     2, false, false,  4, 2,  6, 3,  0, 0}, // #48
  {DBGFIELD("LT_LTG")             2, false, false, 41, 2,  6, 3,  0, 0}, // #49
  {DBGFIELD("LTGR_LTR")           1, false, false, 39, 1,  1, 1,  0, 0}, // #50
  {DBGFIELD("STG_STGRL")          2, false, false,  4, 2,  6, 3,  0, 0}, // #51
  {DBGFIELD("ST128")              2, false, false,  4, 2,  6, 3,  0, 0}, // #52
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("MVST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #54
  {DBGFIELD("LOCRMux")            1, false, false, 39, 1, 49, 2,  0, 0}, // #55
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 49, 2,  0, 0}, // #56
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 1, false, false, 39, 1, 49, 2,  0, 0}, // #57
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 2, false, false, 41, 2, 22, 3,  0, 0}, // #58
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 2, false, false,  4, 2,  6, 3,  0, 0}, // #59
  {DBGFIELD("LBR_LGR_LHR")        1, false, false, 39, 1,  1, 1,  0, 0}, // #60
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false, 39, 1,  1, 1,  0, 0}, // #61
  {DBGFIELD("LTGF")               2, false, false, 41, 2,  6, 3,  0, 0}, // #62
  {DBGFIELD("LTGFR")              1, false, false, 39, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LB_LBH_LBMux")       2, false, false, 41, 2,  6, 3,  0, 0}, // #64
  {DBGFIELD("LH_LHY")             2, false, false, 41, 2,  6, 3,  0, 0}, // #65
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false, 41, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LGB_LGF_LGH")        2, false, false, 41, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LGFRL_LGHRL")        2, false, false, 41, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LLCR_LLCRMux")       1, false, false, 39, 1,  1, 1,  0, 0}, // #69
  {DBGFIELD("LLHR_LLHRMux")       1, false, false, 39, 1,  1, 1,  0, 0}, // #70
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false, 39, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLC_LLCMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #72
  {DBGFIELD("LLH_LLHMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #73
  {DBGFIELD("LLCH_LLHH")          2, false, false, 41, 2,  6, 3,  0, 0}, // #74
  {DBGFIELD("LLHRL")              1, false, false,  3, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1,  2, 1,  0, 0}, // #76
  {DBGFIELD("LLZRGF")             1, false, false,  3, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLGFAT_LLGTAT")      2, false, false,  4, 2,  6, 3,  0, 0}, // #78
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #79
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 14, 1, 35, 7,  0, 0}, // #81
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 15, 2, 42, 7,  0, 0}, // #82
  {DBGFIELD("LRVGR_LRVR")         1, false, false, 39, 1,  1, 1,  0, 0}, // #83
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false, 41, 2,  6, 3,  0, 0}, // #84
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false,  4, 2,  6, 3,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false, 39, 1,  1, 1,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false, 39, 1,  1, 1,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false, 39, 1, 49, 2,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        2, true, false, 40, 1, 17, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false, 39, 1, 49, 2,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false, 39, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("LCGFR")              2, true, false, 40, 1, 48, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             2, false, false, 41, 2,  6, 3,  0, 0}, // #93
  {DBGFIELD("IC32_IC32Y")         2, false, false, 41, 2,  6, 3,  0, 0}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false, 41, 2,  6, 3,  0, 0}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false, 39, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("IIHF_IIHF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #97
  {DBGFIELD("IIHH_IIHH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #98
  {DBGFIELD("IIHL_IIHL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #99
  {DBGFIELD("IILF_IILF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #100
  {DBGFIELD("IILH_IILH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IILL_IILL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("A_AY")               2, false, false, 41, 2,  6, 3,  0, 0}, // #103
  {DBGFIELD("AH_AHY")             2, false, false, 41, 2, 22, 3,  0, 0}, // #104
  {DBGFIELD("AIH")                1, false, false, 39, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("AFI_AFIMux")         1, false, false, 39, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("AG")                 2, false, false, 41, 2,  6, 3,  0, 0}, // #107
  {DBGFIELD("AGFI")               1, false, false, 39, 1,  1, 1,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false, 39, 1,  1, 1,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false, 39, 1,  1, 1,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             2, false, false, 41, 2,  6, 3,  0, 0}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false, 39, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           2, false, false, 41, 2,  6, 3,  0, 0}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false, 39, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false, 39, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false, 39, 1,  1, 1,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false, 39, 1,  1, 1,  0, 0}, // #120
  {DBGFIELD("AGSI_ASI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #121
  {DBGFIELD("ALC_ALCG")           2, true, true, 41, 2, 22, 4,  0, 0}, // #122
  {DBGFIELD("ALCGR_ALCR")         1, true, true, 39, 1, 49, 3,  0, 0}, // #123
  {DBGFIELD("AGF")                2, false, false, 41, 2, 22, 3,  0, 0}, // #124
  {DBGFIELD("AGFR")               1, false, false, 39, 1, 49, 2,  0, 0}, // #125
  {DBGFIELD("S_SG_SY")            2, false, false, 41, 2,  6, 3,  0, 0}, // #126
  {DBGFIELD("SH_SHY")             2, false, false, 41, 2, 22, 3,  0, 0}, // #127
  {DBGFIELD("SGR_SGRK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #128
  {DBGFIELD("SLFI")               1, false, false, 39, 1,  1, 1,  0, 0}, // #129
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false, 41, 2,  6, 3,  0, 0}, // #130
  {DBGFIELD("SLGFI_SLGFR")        1, false, false, 39, 1,  1, 1,  0, 0}, // #131
  {DBGFIELD("SLGR_SLGRK")         1, false, false, 39, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("SLR_SLRK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #133
  {DBGFIELD("SR_SRK")             1, false, false, 39, 1,  1, 1,  0, 0}, // #134
  {DBGFIELD("SLB_SLBG")           2, true, true, 41, 2, 22, 4,  0, 0}, // #135
  {DBGFIELD("SLBGR_SLBR")         1, true, true, 39, 1, 49, 3,  0, 0}, // #136
  {DBGFIELD("SGF")                2, false, false, 41, 2, 22, 3,  0, 0}, // #137
  {DBGFIELD("SGFR")               1, false, false, 39, 1, 49, 2,  0, 0}, // #138
  {DBGFIELD("N_NG_NY")            2, false, false, 41, 2,  6, 3,  0, 0}, // #139
  {DBGFIELD("NGR_NGRK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false, 39, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("NI_NIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #142
  {DBGFIELD("NIHF_NIHF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("NIHH_NIHH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #144
  {DBGFIELD("NIHL_NIHL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #145
  {DBGFIELD("NILF_NILF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #146
  {DBGFIELD("NILH_NILH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #147
  {DBGFIELD("NILL_NILL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #148
  {DBGFIELD("NR_NRK")             1, false, false, 39, 1,  1, 1,  0, 0}, // #149
  {DBGFIELD("NC")                 3, true, false, 17, 2, 55, 5,  0, 0}, // #150
  {DBGFIELD("O_OG_OY")            2, false, false, 41, 2,  6, 3,  0, 0}, // #151
  {DBGFIELD("OGR_OGRK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("OI_OIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #153
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false, 39, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("OIHF_OIHF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("OIHH_OIHH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("OIHL_OIHL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("OILF_OILF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("OILH_OILH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("OILL_OILL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #160
  {DBGFIELD("OR_ORK")             1, false, false, 39, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("OC")                 3, true, false, 17, 2, 55, 5,  0, 0}, // #162
  {DBGFIELD("X_XG_XY")            2, false, false, 41, 2,  6, 3,  0, 0}, // #163
  {DBGFIELD("XI_XIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #164
  {DBGFIELD("XIFMux")             1, false, false, 39, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("XGR_XGRK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #166
  {DBGFIELD("XIHF_XIHF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("XILF_XILF64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("XR_XRK")             1, false, false, 39, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("XC")                 3, true, false, 17, 2, 55, 5,  0, 0}, // #170
  {DBGFIELD("MS_MSGF_MSY")        2, false, false, 41, 2, 60, 3,  0, 0}, // #171
  {DBGFIELD("MSFI_MSR")           1, false, false, 39, 1, 63, 2,  0, 0}, // #172
  {DBGFIELD("MSG")                2, false, false, 41, 2, 65, 3,  0, 0}, // #173
  {DBGFIELD("MSGR")               1, false, false, 39, 1, 29, 2,  0, 0}, // #174
  {DBGFIELD("MSGFI_MSGFR")        1, false, false, 39, 1, 63, 2,  0, 0}, // #175
  {DBGFIELD("MLG")                2, true, true, 41, 2, 68, 4,  0, 0}, // #176
  {DBGFIELD("MLGR")               1, true, true, 39, 1, 57, 3,  0, 0}, // #177
  {DBGFIELD("MGHI")               1, false, false, 39, 1, 72, 2,  0, 0}, // #178
  {DBGFIELD("MHI")                1, false, false, 39, 1, 72, 2,  0, 0}, // #179
  {DBGFIELD("MH_MHY")             2, false, false, 41, 2, 74, 3,  0, 0}, // #180
  {DBGFIELD("DSGFR_DSGR")         1, true, true, 39, 1, 82, 3,  0, 0}, // #181
  {DBGFIELD("DSG_DSGF")           2, true, true, 41, 2, 255, 4,  0, 0}, // #182
  {DBGFIELD("DLR")                2, true, true, 19, 1, 259, 4,  0, 0}, // #183
  {DBGFIELD("DLGR")               2, true, true, 19, 1, 263, 4,  0, 0}, // #184
  {DBGFIELD("DL_DLG")             3, true, true, 43, 2, 267, 5,  0, 0}, // #185
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false, 39, 1,  1, 1,  0, 0}, // #186
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false, 39, 1,  1, 1,  0, 0}, // #187
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false, 39, 1,  1, 1,  0, 0}, // #188
  {DBGFIELD("SLA_SLAK")           1, false, false, 39, 1,  1, 1,  0, 0}, // #189
  {DBGFIELD("RLL_RLLG")           2, false, false, 41, 2, 22, 3,  0, 0}, // #190
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false, 39, 1,  1, 1,  0, 0}, // #191
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false, 39, 1,  1, 1,  0, 0}, // #192
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false, 39, 1,  1, 1,  0, 0}, // #193
  {DBGFIELD("RISBMux")            1, false, false, 39, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, false, 40, 1, 17, 4,  0, 0}, // #195
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #196
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #197
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #198
  {DBGFIELD("CGHSI_CGRL")         2, false, false,  4, 2,  6, 3,  0, 0}, // #199
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 1,  0, 0}, // #200
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #201
  {DBGFIELD("CHF_CHSI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #202
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #203
  {DBGFIELD("CLFI_CLFIMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #204
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false,  4, 2,  6, 3,  0, 0}, // #205
  {DBGFIELD("CLGF_CLGFRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #206
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("CLGRL")              2, false, false,  4, 2,  6, 3,  0, 0}, // #209
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false,  4, 2,  6, 3,  0, 0}, // #210
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 1,  0, 0}, // #211
  {DBGFIELD("CLI_CLIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #212
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("CLRL")               2, false, false,  4, 2,  6, 3,  0, 0}, // #214
  {DBGFIELD("CH_CHRL_CHY")        2, false, false,  4, 2, 22, 3,  0, 0}, // #215
  {DBGFIELD("CGH_CGHRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #216
  {DBGFIELD("CHHSI")              3, true, false, 55, 3, 21, 5,  0, 0}, // #217
  {DBGFIELD("CGF_CGFRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #218
  {DBGFIELD("CGFR")               1, false, false,  1, 1, 49, 2,  0, 0}, // #219
  {DBGFIELD("CLC")                3, true, false, 17, 2, 111, 5,  0, 0}, // #220
  {DBGFIELD("CLST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #221
  {DBGFIELD("TM_TMY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #222
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("TMHH_TMHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #224
  {DBGFIELD("TMHL_TMHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #225
  {DBGFIELD("TMLH_TMLH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("TMLL_TMLL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #227
  {DBGFIELD("PFD_PFDRL")          1, false, false,  3, 1,  2, 1,  0, 0}, // #228
  {DBGFIELD("BPP")                1, false, false,  1, 1, 49, 2,  0, 0}, // #229
  {DBGFIELD("BPRP")               1, false, true,  1, 1,  4, 2,  0, 0}, // #230
  {DBGFIELD("NIAI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #231
  {DBGFIELD("Serialize")          1, false, true,  1, 1,  4, 2,  0, 0}, // #232
  {DBGFIELD("LAA_LAAG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #233
  {DBGFIELD("LAAL_LAALG")         2, false, false,  4, 2,  6, 3,  0, 0}, // #234
  {DBGFIELD("LAN_LANG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #235
  {DBGFIELD("LAO_LAOG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #236
  {DBGFIELD("LAX_LAXG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #237
  {DBGFIELD("TS")                 2, false, true,  4, 2,  6, 4,  0, 0}, // #238
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 55, 3, 21, 5,  0, 0}, // #239
  {DBGFIELD("CDS_CDSY")           6, true, true, 58, 3, 116, 8,  0, 0}, // #240
  {DBGFIELD("CDSG")               9, true, true, 61, 3, 272, 11,  0, 0}, // #241
  {DBGFIELD("CSST")               1, true, true, 39, 1, 82, 3,  0, 0}, // #242
  {DBGFIELD("PLO")                1, true, true,  3, 1, 32, 3,  0, 0}, // #243
  {DBGFIELD("LPQ")                2, true, true, 16, 1, 134, 4,  0, 0}, // #244
  {DBGFIELD("STPQ")               3, true, true, 10, 2, 21, 5,  0, 0}, // #245
  {DBGFIELD("LPD_LPDG")           2, true, true, 16, 1, 134, 4,  0, 0}, // #246
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1,  2, 1,  0, 0}, // #247
  {DBGFIELD("LAE_LAEY")           2, true, false, 41, 2, 144, 4,  0, 0}, // #248
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  3, 1, 32, 3,  0, 0}, // #249
  {DBGFIELD("IPM")                1, false, true, 39, 1, 18, 3,  0, 0}, // #250
  {DBGFIELD("SPM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #251
  {DBGFIELD("BAL_BALR")           3, true, true, 49, 2, 283, 5,  0, 0}, // #252
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 1,  0, 0}, // #253
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  1, 1, 49, 3,  0, 0}, // #254
  {DBGFIELD("BSM")                2, true, true, 45, 2, 48, 4,  0, 0}, // #255
  {DBGFIELD("BASSM")              3, true, true, 49, 2, 16, 5,  0, 0}, // #256
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 7, true, true, 35, 2, 153, 9,  0, 0}, // #257
  {DBGFIELD("TEND")               1, true, true,  1, 1,  4, 2,  0, 0}, // #258
  {DBGFIELD("TABORT")             1, true, true,  3, 1,  3, 2,  0, 0}, // #259
  {DBGFIELD("ETND")               1, false, false, 39, 1,  1, 1,  0, 0}, // #260
  {DBGFIELD("NTSTG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #261
  {DBGFIELD("PPA")                1, false, false,  1, 1,  1, 1,  0, 0}, // #262
  {DBGFIELD("FLOGR")              1, true, true, 39, 1, 63, 3,  0, 0}, // #263
  {DBGFIELD("POPCNT")             1, false, false, 39, 1, 18, 2,  0, 0}, // #264
  {DBGFIELD("AEXT128_64")         1, false, false, 39, 1,  1, 1,  0, 0}, // #265
  {DBGFIELD("ZEXT128_32_ZEXT128_64") 1, false, false, 39, 1,  1, 1,  0, 0}, // #266
  {DBGFIELD("SRST")               2, false, false, 41, 2, 31, 3,  0, 0}, // #267
  {DBGFIELD("MVCK")               4, true, true, 64, 3, 147, 6,  0, 0}, // #268
  {DBGFIELD("ECTG")               2, false, false, 41, 2, 165, 3,  0, 0}, // #269
  {DBGFIELD("EX_EXRL")            1, true, true,  1, 1,  4, 2,  0, 0}, // #270
  {DBGFIELD("PR")                 1, false, false,  1, 1, 82, 2,  0, 0}, // #271
  {DBGFIELD("STCK_STCKF")         6, true, true, 67, 3, 288, 8,  0, 0}, // #272
  {DBGFIELD("STCKE")              8, true, true, 70, 3, 296, 10,  0, 0}, // #273
  {DBGFIELD("STFLE")              2, false, false, 41, 2,  6, 3,  0, 0}, // #274
  {DBGFIELD("SVC")                1, false, false,  1, 1, 82, 2,  0, 0}, // #275
  {DBGFIELD("STRAG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #276
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #277
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false, 39, 1,  1, 1,  0, 0}, // #278
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #279
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false, 39, 1,  1, 1,  0, 0}, // #280
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 1,  0, 0}, // #281
  {DBGFIELD("LZXR")               2, true, false,  8, 1, 48, 4,  0, 0}, // #282
  {DBGFIELD("LER")                1, false, false, 73, 1, 19, 1,  0, 0}, // #283
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #284
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 18, 2,  0, 0}, // #285
  {DBGFIELD("LXR")                2, true, true,  8, 1, 48, 4,  0, 0}, // #286
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 73, 1, 306, 2,  0, 0}, // #287
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 73, 1, 306, 2,  0, 0}, // #288
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 73, 1, 306, 2,  0, 0}, // #289
  {DBGFIELD("LTXBR")              2, true, true, 74, 1, 196, 4,  0, 0}, // #290
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 74, 1, 196, 4,  0, 0}, // #291
  {DBGFIELD("CPSDRdd_CPSDRds")    1, false, false, 73, 1, 19, 1,  0, 0}, // #292
  {DBGFIELD("CPSDRsd_CPSDRss")    1, false, false, 73, 1, 19, 1,  0, 0}, // #293
  {DBGFIELD("LE_LEY")             2, false, false, 75, 2, 308, 3,  0, 0}, // #294
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1,  2, 1,  0, 0}, // #295
  {DBGFIELD("LX")                 1, false, false,  3, 1,  2, 1,  0, 0}, // #296
  {DBGFIELD("STD_STDY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #297
  {DBGFIELD("STE_STEY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #298
  {DBGFIELD("STX")                2, false, false,  4, 2,  6, 3,  0, 0}, // #299
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 73, 1, 30, 1,  0, 0}, // #300
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 77, 1, 176, 3,  0, 0}, // #301
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 77, 1, 176, 3,  0, 0}, // #302
  {DBGFIELD("LDEB")               2, false, false, 75, 2, 179, 3,  0, 0}, // #303
  {DBGFIELD("LDEBR")              1, false, false, 73, 1, 30, 1,  0, 0}, // #304
  {DBGFIELD("LXDB_LXEB")          3, true, true, 78, 2, 311, 5,  0, 0}, // #305
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 74, 1, 77, 3,  0, 0}, // #306
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, false, 80, 2, 191, 4,  0, 0}, // #307
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, false, 80, 2, 191, 4,  0, 0}, // #308
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 82, 2, 316, 5,  0, 0}, // #309
  {DBGFIELD("CELFBR_CELGBR")      2, true, false, 80, 2, 191, 4,  0, 0}, // #310
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, false, 80, 2, 191, 4,  0, 0}, // #311
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 82, 2, 316, 5,  0, 0}, // #312
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, false, 80, 2, 209, 4,  0, 0}, // #313
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, false, 80, 2, 209, 4,  0, 0}, // #314
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, false, 84, 2, 204, 5,  0, 0}, // #315
  {DBGFIELD("CLFEBR")             2, true, true, 80, 2, 209, 4,  0, 0}, // #316
  {DBGFIELD("CLFDBR")             2, true, false, 80, 2, 209, 4,  0, 0}, // #317
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, false, 80, 2, 209, 4,  0, 0}, // #318
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, false, 84, 2, 204, 5,  0, 0}, // #319
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 73, 1, 306, 2,  0, 0}, // #320
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 73, 1, 306, 2,  0, 0}, // #321
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #322
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #323
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #324
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 74, 1, 196, 4,  0, 0}, // #325
  {DBGFIELD("SQDB_SQEB")          2, false, false, 86, 2, 321, 2,  0, 0}, // #326
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 87, 1, 33, 1,  0, 0}, // #327
  {DBGFIELD("SQXBR")              2, true, true, 88, 1, 323, 3,  0, 0}, // #328
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 73, 1, 30, 1,  0, 0}, // #329
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 73, 1, 30, 1,  0, 0}, // #330
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 74, 1, 196, 4,  0, 0}, // #331
  {DBGFIELD("ADB_AEB")            2, false, false, 75, 2, 179, 3,  0, 0}, // #332
  {DBGFIELD("ADBR_AEBR")          1, false, false, 73, 1, 30, 1,  0, 0}, // #333
  {DBGFIELD("AXBR")               2, true, true, 74, 1, 196, 4,  0, 0}, // #334
  {DBGFIELD("SDB_SEB")            2, false, false, 75, 2, 179, 3,  0, 0}, // #335
  {DBGFIELD("SDBR_SEBR")          1, false, false, 73, 1, 30, 1,  0, 0}, // #336
  {DBGFIELD("SXBR")               2, true, true, 74, 1, 196, 4,  0, 0}, // #337
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 75, 2, 179, 3,  0, 0}, // #338
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 73, 1, 30, 1,  0, 0}, // #339
  {DBGFIELD("MXDB")               3, true, true, 78, 2, 311, 5,  0, 0}, // #340
  {DBGFIELD("MXDBR")              2, true, true, 74, 1, 77, 3,  0, 0}, // #341
  {DBGFIELD("MXBR")               2, true, true, 74, 1, 226, 4,  0, 0}, // #342
  {DBGFIELD("MAEB_MSEB")          2, true, true, 75, 2, 230, 4,  0, 0}, // #343
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 73, 1, 30, 2,  0, 0}, // #344
  {DBGFIELD("MADB_MSDB")          2, true, true, 75, 2, 230, 4,  0, 0}, // #345
  {DBGFIELD("MADBR_MSDBR")        1, false, false, 73, 1, 30, 1,  0, 0}, // #346
  {DBGFIELD("DDB_DEB")            2, false, false, 86, 2, 321, 2,  0, 0}, // #347
  {DBGFIELD("DDBR_DEBR")          1, false, false, 87, 1, 33, 1,  0, 0}, // #348
  {DBGFIELD("DXBR")               2, true, true, 88, 1, 323, 3,  0, 0}, // #349
  {DBGFIELD("CDB_CEB")            2, false, false, 75, 2, 326, 3,  0, 0}, // #350
  {DBGFIELD("CDBR_CEBR")          1, false, false, 73, 1, 306, 2,  0, 0}, // #351
  {DBGFIELD("CXBR")               2, true, true, 77, 1, 205, 4,  0, 0}, // #352
  {DBGFIELD("TCDB_TCEB")          2, false, false, 75, 2, 329, 3,  0, 0}, // #353
  {DBGFIELD("TCXB")               3, true, true, 78, 2, 332, 5,  0, 0}, // #354
  {DBGFIELD("EFPC")               2, true, true, 41, 2,  1, 4,  0, 0}, // #355
  {DBGFIELD("STFPC")              2, true, true,  4, 2,  6, 4,  0, 0}, // #356
  {DBGFIELD("SFPC")               1, true, true,  3, 1, 240, 3,  0, 0}, // #357
  {DBGFIELD("LFPC")               2, true, true, 16, 1, 140, 4,  0, 0}, // #358
  {DBGFIELD("SFASR")              1, true, true, 39, 1, 82, 3,  0, 0}, // #359
  {DBGFIELD("LFAS")               2, true, true, 41, 2, 31, 4,  0, 0}, // #360
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true,  1, 1, 18, 3,  0, 0}, // #361
  {DBGFIELD("VLR_VLR32_VLR64")    1, false, false,  1, 1,  1, 1,  0, 0}, // #362
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 1, false, false,  1, 1,  1, 2,  0, 0}, // #363
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #364
  {DBGFIELD("VLVGP_VLVGP32")      1, false, false,  1, 1, 49, 2,  0, 0}, // #365
  {DBGFIELD("VZERO")              1, false, false, 73, 1, 19, 1,  0, 0}, // #366
  {DBGFIELD("VONE")               1, false, false, 73, 1, 19, 1,  0, 0}, // #367
  {DBGFIELD("VGBM")               1, false, false, 73, 1, 19, 1,  0, 0}, // #368
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #369
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #370
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #371
  {DBGFIELD("VL_VLBB_VLL")        1, false, false,  3, 1,  2, 1,  0, 0}, // #372
  {DBGFIELD("VL32_VL64")          1, false, false,  3, 1,  2, 1,  0, 0}, // #373
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 1, false, false,  3, 1,  2, 1,  0, 0}, // #374
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 1, false, false,  3, 1,  2, 1,  0, 0}, // #375
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 2, false, false, 75, 2, 308, 3,  0, 0}, // #376
  {DBGFIELD("VGEF_VGEG")          3, true, false, 89, 3, 337, 5,  0, 0}, // #377
  {DBGFIELD("VLM")                5, true, true, 14, 1, 35, 7,  0, 0}, // #378
  {DBGFIELD("VST_VST32_VST64_VSTL") 2, false, false,  4, 2, 149, 3,  0, 0}, // #379
  {DBGFIELD("VSTEF_VSTEG")        2, false, false,  4, 2, 149, 3,  0, 0}, // #380
  {DBGFIELD("VSTEB_VSTEH")        3, true, false, 89, 3, 337, 5,  0, 0}, // #381
  {DBGFIELD("VSTM")               7, true, true, 35, 2, 342, 9,  0, 0}, // #382
  {DBGFIELD("VSCEF_VSCEG")        3, true, false, 10, 2, 351, 5,  0, 0}, // #383
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #384
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #385
  {DBGFIELD("VPERM")              1, false, false, 73, 1, 19, 1,  0, 0}, // #386
  {DBGFIELD("VPDI")               1, false, false, 73, 1, 19, 1,  0, 0}, // #387
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #388
  {DBGFIELD("VSEL")               1, false, false, 73, 1, 19, 1,  0, 0}, // #389
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #390
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #391
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 1, false, false, 73, 1, 306, 2,  0, 0}, // #392
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #393
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 1, false, false, 73, 1, 306, 2,  0, 0}, // #394
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #395
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #396
  {DBGFIELD("VUPL_VUPLB_VUPLF")   1, false, false, 73, 1, 19, 1,  0, 0}, // #397
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 1, false, false, 73, 1, 19, 1,  0, 0}, // #398
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #399
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 1, false, false, 73, 1, 19, 1,  0, 0}, // #400
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 1, false, false, 73, 1, 19, 1,  0, 0}, // #401
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #402
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #403
  {DBGFIELD("VN_VNC_VNO")         1, false, false, 73, 1, 19, 1,  0, 0}, // #404
  {DBGFIELD("VO")                 1, false, false, 73, 1, 19, 1,  0, 0}, // #405
  {DBGFIELD("VCKSM")              1, false, false, 73, 1,  8, 1,  0, 0}, // #406
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #407
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #408
  {DBGFIELD("VX")                 1, false, false, 73, 1, 19, 1,  0, 0}, // #409
  {DBGFIELD("VGFM")               1, false, false, 73, 1,  8, 1,  0, 0}, // #410
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #411
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #412
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #413
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #414
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #415
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #416
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #417
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #418
  {DBGFIELD("VMAL_VMALB_VMALF")   1, false, false, 73, 1,  8, 1,  0, 0}, // #419
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #420
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 1, false, false, 73, 1,  8, 1,  0, 0}, // #421
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #422
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #423
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #424
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #425
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #426
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #427
  {DBGFIELD("VML_VMLB_VMLF")      1, false, false, 73, 1,  8, 1,  0, 0}, // #428
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #429
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 1, false, false, 73, 1,  8, 1,  0, 0}, // #430
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #431
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #432
  {DBGFIELD("VPOPCT")             1, false, false, 73, 1, 19, 1,  0, 0}, // #433
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #434
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #435
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #436
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #437
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #438
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #439
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #440
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #441
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #442
  {DBGFIELD("VSL_VSLDB")          1, false, false, 73, 1, 19, 1,  0, 0}, // #443
  {DBGFIELD("VSLB")               2, false, false, 77, 1, 356, 3,  0, 0}, // #444
  {DBGFIELD("VSRA_VSRL")          1, false, false, 73, 1, 19, 1,  0, 0}, // #445
  {DBGFIELD("VSRAB_VSRLB")        2, false, false, 77, 1, 356, 3,  0, 0}, // #446
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 1, false, false, 73, 1, 19, 1,  0, 0}, // #447
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 1, false, false, 73, 1, 19, 1,  0, 0}, // #448
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 1, false, false, 73, 1, 19, 1,  0, 0}, // #449
  {DBGFIELD("VSUM_VSUMB_VSUMH")   1, false, false, 73, 1,  8, 1,  0, 0}, // #450
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 1, false, false, 73, 1,  8, 1,  0, 0}, // #451
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 1, false, false, 73, 1,  8, 1,  0, 0}, // #452
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 1, false, false, 73, 1, 306, 2,  0, 0}, // #453
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 1, false, false, 73, 1, 306, 2,  0, 0}, // #454
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #455
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 1, false, false, 73, 1, 306, 2,  0, 0}, // #456
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #457
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 1, false, false, 73, 1, 306, 2,  0, 0}, // #458
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 1, false, false, 73, 1, 19, 1,  0, 0}, // #459
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 1, false, false, 73, 1, 306, 2,  0, 0}, // #460
  {DBGFIELD("VTM")                1, false, false, 73, 1,  7, 2,  0, 0}, // #461
  {DBGFIELD("VCDG_VCDGB_VCDLG_VCDLGB") 1, false, false, 77, 1, 58, 1,  0, 0}, // #462
  {DBGFIELD("WCDGB_WCDLGB")       1, false, false, 73, 1, 30, 1,  0, 0}, // #463
  {DBGFIELD("VCGD_VCLGD")         1, false, false, 77, 1, 58, 1,  0, 0}, // #464
  {DBGFIELD("VFADB")              1, false, false, 77, 1, 58, 1,  0, 0}, // #465
  {DBGFIELD("WFADB")              1, false, false, 73, 1, 30, 1,  0, 0}, // #466
  {DBGFIELD("VCGDB")              1, false, false, 77, 1, 58, 1,  0, 0}, // #467
  {DBGFIELD("WCGDB")              1, false, false, 73, 1, 30, 1,  0, 0}, // #468
  {DBGFIELD("VFA_VFI_VFM_VFS")    1, false, false, 77, 1, 58, 1,  0, 0}, // #469
  {DBGFIELD("VFIDB_VFMDB_VFSDB")  1, false, false, 77, 1, 58, 1,  0, 0}, // #470
  {DBGFIELD("WFIDB_WFMDB_WFSDB")  1, false, false, 73, 1, 30, 1,  0, 0}, // #471
  {DBGFIELD("VCLGDB")             1, false, false, 77, 1, 58, 1,  0, 0}, // #472
  {DBGFIELD("WCLGDB")             1, false, false, 73, 1, 30, 1,  0, 0}, // #473
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB") 1, false, false, 73, 1, 19, 1,  0, 0}, // #474
  {DBGFIELD("WFLCDB_WFLNDB_WFLPDB") 1, false, false, 73, 1, 19, 1,  0, 0}, // #475
  {DBGFIELD("VFMA_VFMS")          1, false, false, 77, 1, 58, 1,  0, 0}, // #476
  {DBGFIELD("VFMADB_VFMSDB")      1, false, false, 77, 1, 58, 1,  0, 0}, // #477
  {DBGFIELD("WFMADB_WFMSDB")      1, false, false, 73, 1, 30, 1,  0, 0}, // #478
  {DBGFIELD("VFPSO")              1, false, false, 73, 1, 19, 1,  0, 0}, // #479
  {DBGFIELD("VFPSODB_WFPSODB")    1, false, false, 73, 1, 19, 1,  0, 0}, // #480
  {DBGFIELD("VFTCI_VFTCIDB")      1, false, false, 73, 1, 306, 2,  0, 0}, // #481
  {DBGFIELD("WFTCIDB")            1, false, false, 73, 1, 306, 2,  0, 0}, // #482
  {DBGFIELD("VLDE_VLED")          1, false, false, 77, 1, 58, 1,  0, 0}, // #483
  {DBGFIELD("VLDEB_VLEDB")        1, false, false, 77, 1, 58, 1,  0, 0}, // #484
  {DBGFIELD("WLDEB_WLEDB")        1, false, false, 73, 1, 30, 1,  0, 0}, // #485
  {DBGFIELD("VFD")                1, false, false, 87, 1, 33, 1,  0, 0}, // #486
  {DBGFIELD("VFDDB_WFDDB")        1, false, false, 87, 1, 33, 1,  0, 0}, // #487
  {DBGFIELD("VFSQ")               1, false, false, 87, 1, 33, 1,  0, 0}, // #488
  {DBGFIELD("VFSQDB_WFSQDB")      1, false, false, 87, 1, 33, 1,  0, 0}, // #489
  {DBGFIELD("VFCE_VFCH_VFCHE")    1, false, false, 73, 1, 19, 1,  0, 0}, // #490
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 1, false, false, 73, 1, 19, 1,  0, 0}, // #491
  {DBGFIELD("WFC_WFK")            1, false, false, 73, 1, 306, 2,  0, 0}, // #492
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 1, false, false, 73, 1, 19, 1,  0, 0}, // #493
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 1, false, false, 73, 1, 306, 2,  0, 0}, // #494
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 1, false, false, 73, 1, 306, 2,  0, 0}, // #495
  {DBGFIELD("WFCDB_WFKDB")        1, false, false, 73, 1, 306, 2,  0, 0}, // #496
  {DBGFIELD("LEFR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #497
  {DBGFIELD("LFER")               1, false, false,  1, 1,  1, 2,  0, 0}, // #498
  {DBGFIELD("VFAE_VFAEB")         1, false, false, 73, 1,  2, 1,  0, 0}, // #499
  {DBGFIELD("VFAEBS")             1, false, false, 73, 1,  7, 2,  0, 0}, // #500
  {DBGFIELD("VFAEF_VFAEH")        1, false, false, 73, 1,  2, 1,  0, 0}, // #501
  {DBGFIELD("VFAEFS_VFAEHS")      1, false, false, 73, 1,  7, 2,  0, 0}, // #502
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 1, false, false, 73, 1,  2, 1,  0, 0}, // #503
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 1, false, false, 73, 1,  7, 2,  0, 0}, // #504
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 1, false, false, 73, 1,  2, 1,  0, 0}, // #505
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 1, false, false, 73, 1,  7, 2,  0, 0}, // #506
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 1, false, false, 73, 1,  2, 1,  0, 0}, // #507
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 1, false, false, 73, 1,  7, 2,  0, 0}, // #508
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 1, false, false, 73, 1,  2, 1,  0, 0}, // #509
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 1, false, false, 73, 1,  7, 2,  0, 0}, // #510
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 1, false, false, 73, 1,  2, 1,  0, 0}, // #511
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 1, false, false, 73, 1,  7, 2,  0, 0}, // #512
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 1, false, false, 73, 1,  2, 1,  0, 0}, // #513
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 1, false, false, 73, 1,  7, 2,  0, 0}, // #514
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  3, 1,  2, 1,  0, 0}, // #515
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 39, 1, 49, 2,  0, 0}, // #516
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, false, 41, 2, 22, 3,  0, 0}, // #517
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, false,  4, 2,  6, 3,  0, 0}, // #518
  {DBGFIELD("ASI")                2, false, false,  4, 2,  6, 3,  0, 0}, // #519
  {DBGFIELD("RISBG_RISBG32")      1, false, false, 39, 1,  1, 1,  0, 0}, // #520
  {DBGFIELD("STCK")               6, true, true, 67, 3, 288, 8,  0, 0} // #521
}; // Z13ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z196ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, true,  3, 1,  3, 2,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, true,  3, 1,  3, 2,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, true,  3, 1,  3, 2,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, true,  3, 1,  3, 2,  0, 0}, // #5
  {DBGFIELD("BRCT_BRCTG")         2, true, true,  4, 2,  6, 4,  0, 0}, // #6
  {DBGFIELD("BRCTH")              2, true, true,  4, 2,  6, 4,  0, 0}, // #7
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true,  4, 2,  6, 4,  0, 0}, // #8
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true,  6, 2, 10, 6,  0, 0}, // #9
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 2, true, true,  4, 2,  6, 4,  0, 0}, // #10
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true,  4, 2,  6, 4,  0, 0}, // #11
  {DBGFIELD("CondTrap_Trap")      1, false, true,  3, 1,  3, 2,  0, 0}, // #12
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false,  1, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #16
  {DBGFIELD("BRAS")               3, true, true, 10, 2, 359, 5,  0, 0}, // #17
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 10, 2, 359, 5,  0, 0}, // #18
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 10, 2, 21, 5,  0, 0}, // #19
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 10, 2, 359, 5,  0, 0}, // #20
  {DBGFIELD("Return")             1, false, true,  3, 1,  4, 2,  0, 0}, // #21
  {DBGFIELD("CondReturn")         1, false, true,  3, 1,  4, 2,  0, 0}, // #22
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #23
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 0, false, false,  0, 0,  0, 0,  0, 0}, // #27
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #28
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false,  4, 2,  6, 3,  0, 0}, // #31
  {DBGFIELD("MVI_MVIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVC")                4, true, true, 12, 2, 26, 6,  0, 0}, // #33
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 1,  0, 0}, // #34
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("SUBREG_TO_REG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 0, false, false,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1,  2, 1,  0, 0}, // #40
  {DBGFIELD("L128")               1, false, false,  3, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #42
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LHI_LHIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LR_LRMux")           1, false, false,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LZRF_LZRG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #47
  {DBGFIELD("LAT_LFHAT_LGAT")     0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("LT_LTG")             2, false, false,  4, 2,  6, 3,  0, 0}, // #49
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #50
  {DBGFIELD("STG_STGRL")          2, false, false,  4, 2,  6, 3,  0, 0}, // #51
  {DBGFIELD("ST128")              2, false, false,  4, 2,  6, 3,  0, 0}, // #52
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("MVST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #54
  {DBGFIELD("LOCRMux")            0, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #60
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 1,  0, 0}, // #61
  {DBGFIELD("LTGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #62
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LB_LBH_LBMux")       2, false, false,  4, 2,  6, 3,  0, 0}, // #64
  {DBGFIELD("LH_LHY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #65
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false,  4, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LGB_LGF_LGH")        2, false, false,  4, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LGFRL_LGHRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LLCR_LLCRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #69
  {DBGFIELD("LLHR_LLHRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #70
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLC_LLCMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #72
  {DBGFIELD("LLH_LLHMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #73
  {DBGFIELD("LLCH_LLHH")          2, false, false,  4, 2,  6, 3,  0, 0}, // #74
  {DBGFIELD("LLHRL")              1, false, false,  3, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1,  2, 1,  0, 0}, // #76
  {DBGFIELD("LLZRGF")             0, false, false,  0, 0,  0, 0,  0, 0}, // #77
  {DBGFIELD("LLGFAT_LLGTAT")      0, false, false,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #79
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 14, 1, 35, 7,  0, 0}, // #81
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 15, 2, 42, 7,  0, 0}, // #82
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #83
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false,  4, 2,  6, 3,  0, 0}, // #84
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false,  4, 2,  6, 3,  0, 0}, // #85
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 1,  0, 0}, // #86
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 1,  0, 0}, // #87
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #88
  {DBGFIELD("LNGFR_LPGFR")        2, true, true,  8, 1, 17, 4,  0, 0}, // #89
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 49, 2,  0, 0}, // #90
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("LCGFR")              2, true, true,  8, 1, 48, 4,  0, 0}, // #92
  {DBGFIELD("IC_ICY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #93
  {DBGFIELD("IC32_IC32Y")         2, false, false,  4, 2,  6, 3,  0, 0}, // #94
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #95
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("IIHF_IIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #97
  {DBGFIELD("IIHH_IIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #98
  {DBGFIELD("IIHL_IIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #99
  {DBGFIELD("IILF_IILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #100
  {DBGFIELD("IILH_IILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IILL_IILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("A_AY")               2, false, false,  4, 2,  6, 3,  0, 0}, // #103
  {DBGFIELD("AH_AHY")             3, true, true, 10, 2, 21, 5,  0, 0}, // #104
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("AFI_AFIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("AG")                 2, false, false,  4, 2,  6, 3,  0, 0}, // #107
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #108
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #109
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #111
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 1,  0, 0}, // #112
  {DBGFIELD("AL_ALY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #113
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("ALG_ALGF")           2, false, false,  4, 2,  6, 3,  0, 0}, // #115
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #118
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #119
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #120
  {DBGFIELD("AGSI_ASI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #121
  {DBGFIELD("ALC_ALCG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #122
  {DBGFIELD("ALCGR_ALCR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #123
  {DBGFIELD("AGF")                3, true, true, 10, 2, 21, 5,  0, 0}, // #124
  {DBGFIELD("AGFR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #125
  {DBGFIELD("S_SG_SY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #126
  {DBGFIELD("SH_SHY")             3, true, true, 10, 2, 21, 5,  0, 0}, // #127
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #128
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #129
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false,  4, 2,  6, 3,  0, 0}, // #130
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #131
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #133
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #134
  {DBGFIELD("SLB_SLBG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #135
  {DBGFIELD("SLBGR_SLBR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #136
  {DBGFIELD("SGF")                3, true, true, 10, 2, 21, 5,  0, 0}, // #137
  {DBGFIELD("SGFR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #138
  {DBGFIELD("N_NG_NY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #139
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #140
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #141
  {DBGFIELD("NI_NIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #142
  {DBGFIELD("NIHF_NIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #143
  {DBGFIELD("NIHH_NIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #144
  {DBGFIELD("NIHL_NIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #145
  {DBGFIELD("NILF_NILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #146
  {DBGFIELD("NILH_NILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #147
  {DBGFIELD("NILL_NILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #148
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #149
  {DBGFIELD("NC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #150
  {DBGFIELD("O_OG_OY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #151
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("OI_OIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #153
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #154
  {DBGFIELD("OIHF_OIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #155
  {DBGFIELD("OIHH_OIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("OIHL_OIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #157
  {DBGFIELD("OILF_OILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("OILH_OILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("OILL_OILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #160
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("OC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #162
  {DBGFIELD("X_XG_XY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #163
  {DBGFIELD("XI_XIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #164
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #166
  {DBGFIELD("XIHF_XIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("XILF_XILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("XC")                 3, true, true, 17, 2, 55, 5,  0, 0}, // #170
  {DBGFIELD("MS_MSGF_MSY")        2, false, false,  4, 2, 60, 3,  0, 0}, // #171
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 63, 2,  0, 0}, // #172
  {DBGFIELD("MSG")                2, false, false,  4, 2, 65, 3,  0, 0}, // #173
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 29, 2,  0, 0}, // #174
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 63, 2,  0, 0}, // #175
  {DBGFIELD("MLG")                2, true, true,  4, 2, 68, 4,  0, 0}, // #176
  {DBGFIELD("MLGR")               1, true, true,  1, 1, 57, 3,  0, 0}, // #177
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 72, 2,  0, 0}, // #178
  {DBGFIELD("MHI")                1, false, false,  1, 1, 72, 2,  0, 0}, // #179
  {DBGFIELD("MH_MHY")             2, false, false,  4, 2, 74, 3,  0, 0}, // #180
  {DBGFIELD("DSGFR_DSGR")         6, true, true, 19, 2, 77, 8,  0, 0}, // #181
  {DBGFIELD("DSG_DSGF")           6, true, true, 21, 3, 85, 8,  0, 0}, // #182
  {DBGFIELD("DLR")                7, true, true, 24, 2, 93, 9,  0, 0}, // #183
  {DBGFIELD("DLGR")               7, true, true, 24, 2, 93, 9,  0, 0}, // #184
  {DBGFIELD("DL_DLG")             7, true, true, 26, 3, 102, 9,  0, 0}, // #185
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #186
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #187
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #188
  {DBGFIELD("SLA_SLAK")           1, false, false,  1, 1, 49, 2,  0, 0}, // #189
  {DBGFIELD("RLL_RLLG")           2, false, false,  4, 2, 22, 3,  0, 0}, // #190
  {DBGFIELD("RISBG_RISBG32_RISBGN") 0, false, false,  0, 0,  0, 0,  0, 0}, // #191
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #192
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #193
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, true,  8, 1, 17, 4,  0, 0}, // #195
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #196
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #197
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #198
  {DBGFIELD("CGHSI_CGRL")         2, false, false,  4, 2,  6, 3,  0, 0}, // #199
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 1,  0, 0}, // #200
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #201
  {DBGFIELD("CHF_CHSI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #202
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #203
  {DBGFIELD("CLFI_CLFIMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #204
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false,  4, 2,  6, 3,  0, 0}, // #205
  {DBGFIELD("CLGF_CLGFRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #206
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("CLGRL")              2, false, false,  4, 2,  6, 3,  0, 0}, // #209
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false,  4, 2,  6, 3,  0, 0}, // #210
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 1,  0, 0}, // #211
  {DBGFIELD("CLI_CLIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #212
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("CLRL")               2, false, false,  4, 2,  6, 3,  0, 0}, // #214
  {DBGFIELD("CH_CHRL_CHY")        3, true, true, 10, 2, 364, 5,  0, 0}, // #215
  {DBGFIELD("CGH_CGHRL")          3, true, true, 10, 2, 364, 5,  0, 0}, // #216
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 364, 5,  0, 0}, // #217
  {DBGFIELD("CGF_CGFRL")          3, true, true, 10, 2, 369, 6,  0, 0}, // #218
  {DBGFIELD("CGFR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #219
  {DBGFIELD("CLC")                3, true, true, 17, 2, 55, 5,  0, 0}, // #220
  {DBGFIELD("CLST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #221
  {DBGFIELD("TM_TMY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #222
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("TMHH_TMHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #224
  {DBGFIELD("TMHL_TMHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #225
  {DBGFIELD("TMLH_TMLH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("TMLL_TMLL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #227
  {DBGFIELD("PFD_PFDRL")          1, true, true,  3, 1,  3, 2,  0, 0}, // #228
  {DBGFIELD("BPP")                0, false, false,  0, 0,  0, 0,  0, 0}, // #229
  {DBGFIELD("BPRP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #230
  {DBGFIELD("NIAI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #231
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  3, 2,  0, 0}, // #232
  {DBGFIELD("LAA_LAAG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #233
  {DBGFIELD("LAAL_LAALG")         2, false, false,  4, 2,  6, 3,  0, 0}, // #234
  {DBGFIELD("LAN_LANG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #235
  {DBGFIELD("LAO_LAOG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #236
  {DBGFIELD("LAX_LAXG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #237
  {DBGFIELD("TS")                 2, false, true,  4, 2,  6, 4,  0, 0}, // #238
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 364, 5,  0, 0}, // #239
  {DBGFIELD("CDS_CDSY")           6, true, true, 29, 2, 116, 8,  0, 0}, // #240
  {DBGFIELD("CDSG")               8, true, true, 31, 2, 124, 10,  0, 0}, // #241
  {DBGFIELD("CSST")               1, true, true,  1, 1, 82, 3,  0, 0}, // #242
  {DBGFIELD("PLO")                1, true, true,  3, 1, 32, 3,  0, 0}, // #243
  {DBGFIELD("LPQ")                2, true, true, 16, 1, 134, 4,  0, 0}, // #244
  {DBGFIELD("STPQ")               4, true, true, 33, 2, 138, 6,  0, 0}, // #245
  {DBGFIELD("LPD_LPDG")           2, true, true, 16, 1, 134, 4,  0, 0}, // #246
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1,  2, 1,  0, 0}, // #247
  {DBGFIELD("LAE_LAEY")           2, true, true,  4, 2, 144, 4,  0, 0}, // #248
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  3, 1, 32, 3,  0, 0}, // #249
  {DBGFIELD("IPM")                1, false, true,  1, 1, 18, 3,  0, 0}, // #250
  {DBGFIELD("SPM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #251
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2, 148, 5,  0, 0}, // #252
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 1,  0, 0}, // #253
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  3, 2,  0, 0}, // #254
  {DBGFIELD("BSM")                2, true, true,  4, 2,  6, 4,  0, 0}, // #255
  {DBGFIELD("BASSM")              3, true, true, 10, 2, 21, 5,  0, 0}, // #256
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 0, false, false,  0, 0,  0, 0,  0, 0}, // #257
  {DBGFIELD("TEND")               0, false, false,  0, 0,  0, 0,  0, 0}, // #258
  {DBGFIELD("TABORT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("ETND")               0, false, false,  0, 0,  0, 0,  0, 0}, // #260
  {DBGFIELD("NTSTG")              0, false, false,  0, 0,  0, 0,  0, 0}, // #261
  {DBGFIELD("PPA")                0, false, false,  0, 0,  0, 0,  0, 0}, // #262
  {DBGFIELD("FLOGR")              1, true, true,  1, 1, 162, 3,  0, 0}, // #263
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 18, 2,  0, 0}, // #264
  {DBGFIELD("AEXT128_64")         1, false, false,  1, 1,  1, 1,  0, 0}, // #265
  {DBGFIELD("ZEXT128_32_ZEXT128_64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #266
  {DBGFIELD("SRST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #267
  {DBGFIELD("MVCK")               1, true, true,  3, 1, 150, 3,  0, 0}, // #268
  {DBGFIELD("ECTG")               2, false, false,  4, 2, 165, 3,  0, 0}, // #269
  {DBGFIELD("EX_EXRL")            1, true, true,  3, 1,  3, 2,  0, 0}, // #270
  {DBGFIELD("PR")                 1, false, false,  1, 1, 82, 2,  0, 0}, // #271
  {DBGFIELD("STCK_STCKF")         2, false, false,  4, 2, 65, 3,  0, 0}, // #272
  {DBGFIELD("STCKE")              2, false, false,  4, 2, 144, 3,  0, 0}, // #273
  {DBGFIELD("STFLE")              2, false, false,  4, 2,  6, 3,  0, 0}, // #274
  {DBGFIELD("SVC")                1, false, false,  1, 1, 82, 2,  0, 0}, // #275
  {DBGFIELD("STRAG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #276
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #277
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #278
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #279
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #280
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 1,  0, 0}, // #281
  {DBGFIELD("LZXR")               2, true, true,  8, 1, 48, 4,  0, 0}, // #282
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 1,  0, 0}, // #283
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #284
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 18, 2,  0, 0}, // #285
  {DBGFIELD("LXR")                2, true, true,  8, 1, 48, 4,  0, 0}, // #286
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 39, 1, 30, 1,  0, 0}, // #287
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #288
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #289
  {DBGFIELD("LTXBR")              2, true, true, 19, 1, 76, 4,  0, 0}, // #290
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 19, 1, 76, 4,  0, 0}, // #291
  {DBGFIELD("CPSDRdd_CPSDRds")    2, true, true,  8, 1, 71, 4,  0, 0}, // #292
  {DBGFIELD("CPSDRsd_CPSDRss")    2, true, true,  8, 1, 71, 4,  0, 0}, // #293
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1,  2, 1,  0, 0}, // #294
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1,  2, 1,  0, 0}, // #295
  {DBGFIELD("LX")                 1, false, false,  3, 1,  2, 1,  0, 0}, // #296
  {DBGFIELD("STD_STDY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #297
  {DBGFIELD("STE_STEY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #298
  {DBGFIELD("STX")                2, false, false,  4, 2,  6, 3,  0, 0}, // #299
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #300
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 40, 1, 176, 3,  0, 0}, // #301
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 40, 1, 176, 3,  0, 0}, // #302
  {DBGFIELD("LDEB")               2, false, false, 41, 2, 179, 3,  0, 0}, // #303
  {DBGFIELD("LDEBR")              1, false, false, 39, 1, 30, 1,  0, 0}, // #304
  {DBGFIELD("LXDB_LXEB")          3, true, true, 43, 2, 182, 5,  0, 0}, // #305
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 19, 1, 187, 4,  0, 0}, // #306
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, true, 45, 2, 191, 4,  0, 0}, // #307
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, true, 45, 2, 191, 4,  0, 0}, // #308
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 47, 2, 195, 5,  0, 0}, // #309
  {DBGFIELD("CELFBR_CELGBR")      2, true, true, 45, 2, 191, 4,  0, 0}, // #310
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, true, 45, 2, 191, 4,  0, 0}, // #311
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 47, 2, 195, 5,  0, 0}, // #312
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, true, 45, 2, 200, 4,  0, 0}, // #313
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, true, 45, 2, 200, 4,  0, 0}, // #314
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 49, 2, 204, 5,  0, 0}, // #315
  {DBGFIELD("CLFEBR")             2, true, true, 45, 2, 209, 4,  0, 0}, // #316
  {DBGFIELD("CLFDBR")             2, true, true, 45, 2, 209, 4,  0, 0}, // #317
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, true, 45, 2, 209, 4,  0, 0}, // #318
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 49, 2, 204, 5,  0, 0}, // #319
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #320
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #321
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #322
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #323
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #324
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 19, 1, 76, 4,  0, 0}, // #325
  {DBGFIELD("SQDB_SQEB")          2, false, false, 41, 2, 213, 3,  0, 0}, // #326
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 39, 1, 216, 2,  0, 0}, // #327
  {DBGFIELD("SQXBR")              2, true, true, 19, 1, 218, 4,  0, 0}, // #328
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #329
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #330
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 19, 1, 222, 4,  0, 0}, // #331
  {DBGFIELD("ADB_AEB")            2, false, false, 41, 2, 179, 3,  0, 0}, // #332
  {DBGFIELD("ADBR_AEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #333
  {DBGFIELD("AXBR")               2, true, true, 19, 1, 226, 4,  0, 0}, // #334
  {DBGFIELD("SDB_SEB")            2, false, false, 41, 2, 179, 3,  0, 0}, // #335
  {DBGFIELD("SDBR_SEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #336
  {DBGFIELD("SXBR")               2, true, true, 19, 1, 226, 4,  0, 0}, // #337
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 41, 2, 179, 3,  0, 0}, // #338
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 39, 1, 30, 1,  0, 0}, // #339
  {DBGFIELD("MXDB")               3, true, true, 43, 2, 182, 5,  0, 0}, // #340
  {DBGFIELD("MXDBR")              2, true, true, 19, 1, 187, 4,  0, 0}, // #341
  {DBGFIELD("MXBR")               2, true, true, 19, 1, 218, 4,  0, 0}, // #342
  {DBGFIELD("MAEB_MSEB")          2, true, true, 41, 2, 230, 4,  0, 0}, // #343
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #344
  {DBGFIELD("MADB_MSDB")          2, true, true, 41, 2, 230, 4,  0, 0}, // #345
  {DBGFIELD("MADBR_MSDBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #346
  {DBGFIELD("DDB_DEB")            2, false, false, 41, 2, 213, 3,  0, 0}, // #347
  {DBGFIELD("DDBR_DEBR")          1, false, false, 39, 1, 216, 2,  0, 0}, // #348
  {DBGFIELD("DXBR")               2, true, true, 19, 1, 218, 4,  0, 0}, // #349
  {DBGFIELD("CDB_CEB")            2, false, false, 41, 2, 179, 3,  0, 0}, // #350
  {DBGFIELD("CDBR_CEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #351
  {DBGFIELD("CXBR")               2, false, false, 40, 1, 234, 3,  0, 0}, // #352
  {DBGFIELD("TCDB_TCEB")          2, false, false, 41, 2, 237, 3,  0, 0}, // #353
  {DBGFIELD("TCXB")               3, true, true, 43, 2, 182, 5,  0, 0}, // #354
  {DBGFIELD("EFPC")               2, true, true,  4, 2,  1, 4,  0, 0}, // #355
  {DBGFIELD("STFPC")              1, true, true,  3, 1, 240, 3,  0, 0}, // #356
  {DBGFIELD("SFPC")               1, true, true,  3, 1, 240, 3,  0, 0}, // #357
  {DBGFIELD("LFPC")               2, true, true, 16, 1, 140, 4,  0, 0}, // #358
  {DBGFIELD("SFASR")              1, true, true,  1, 1, 82, 3,  0, 0}, // #359
  {DBGFIELD("LFAS")               2, true, true,  4, 2, 31, 4,  0, 0}, // #360
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true,  1, 1, 49, 3,  0, 0}, // #361
  {DBGFIELD("VLR_VLR32_VLR64")    0, false, false,  0, 0,  0, 0,  0, 0}, // #362
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #363
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #364
  {DBGFIELD("VLVGP_VLVGP32")      0, false, false,  0, 0,  0, 0,  0, 0}, // #365
  {DBGFIELD("VZERO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #366
  {DBGFIELD("VONE")               0, false, false,  0, 0,  0, 0,  0, 0}, // #367
  {DBGFIELD("VGBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #368
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #369
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #370
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #371
  {DBGFIELD("VL_VLBB_VLL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #372
  {DBGFIELD("VL32_VL64")          0, false, false,  0, 0,  0, 0,  0, 0}, // #373
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #374
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #375
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #376
  {DBGFIELD("VGEF_VGEG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #377
  {DBGFIELD("VLM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #378
  {DBGFIELD("VST_VST32_VST64_VSTL") 0, false, false,  0, 0,  0, 0,  0, 0}, // #379
  {DBGFIELD("VSTEF_VSTEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #380
  {DBGFIELD("VSTEB_VSTEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #381
  {DBGFIELD("VSTM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #382
  {DBGFIELD("VSCEF_VSCEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #383
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #384
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #385
  {DBGFIELD("VPERM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #386
  {DBGFIELD("VPDI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #387
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #388
  {DBGFIELD("VSEL")               0, false, false,  0, 0,  0, 0,  0, 0}, // #389
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #390
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #391
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #392
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #393
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #394
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #395
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #396
  {DBGFIELD("VUPL_VUPLB_VUPLF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #397
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #398
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #399
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #400
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #401
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #402
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #403
  {DBGFIELD("VN_VNC_VNO")         0, false, false,  0, 0,  0, 0,  0, 0}, // #404
  {DBGFIELD("VO")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #405
  {DBGFIELD("VCKSM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #406
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #407
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #408
  {DBGFIELD("VX")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #409
  {DBGFIELD("VGFM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #410
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #411
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #412
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #413
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #414
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #415
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #416
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #417
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #418
  {DBGFIELD("VMAL_VMALB_VMALF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #419
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #420
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #421
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #422
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #423
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #424
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #425
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #426
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #427
  {DBGFIELD("VML_VMLB_VMLF")      0, false, false,  0, 0,  0, 0,  0, 0}, // #428
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #429
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #430
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #431
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #432
  {DBGFIELD("VPOPCT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #433
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #434
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #435
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #436
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #437
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #438
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #439
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #440
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #441
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #442
  {DBGFIELD("VSL_VSLDB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #443
  {DBGFIELD("VSLB")               0, false, false,  0, 0,  0, 0,  0, 0}, // #444
  {DBGFIELD("VSRA_VSRL")          0, false, false,  0, 0,  0, 0,  0, 0}, // #445
  {DBGFIELD("VSRAB_VSRLB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #446
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #447
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #448
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #449
  {DBGFIELD("VSUM_VSUMB_VSUMH")   0, false, false,  0, 0,  0, 0,  0, 0}, // #450
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #451
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 0, false, false,  0, 0,  0, 0,  0, 0}, // #452
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #453
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #454
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #455
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #456
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #457
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #458
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #459
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #460
  {DBGFIELD("VTM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #461
  {DBGFIELD("VCDG_VCDGB_VCDLG_VCDLGB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #462
  {DBGFIELD("WCDGB_WCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #463
  {DBGFIELD("VCGD_VCLGD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #464
  {DBGFIELD("VFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #465
  {DBGFIELD("WFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #466
  {DBGFIELD("VCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #467
  {DBGFIELD("WCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #468
  {DBGFIELD("VFA_VFI_VFM_VFS")    0, false, false,  0, 0,  0, 0,  0, 0}, // #469
  {DBGFIELD("VFIDB_VFMDB_VFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #470
  {DBGFIELD("WFIDB_WFMDB_WFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #471
  {DBGFIELD("VCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #472
  {DBGFIELD("WCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #473
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #474
  {DBGFIELD("WFLCDB_WFLNDB_WFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #475
  {DBGFIELD("VFMA_VFMS")          0, false, false,  0, 0,  0, 0,  0, 0}, // #476
  {DBGFIELD("VFMADB_VFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #477
  {DBGFIELD("WFMADB_WFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #478
  {DBGFIELD("VFPSO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #479
  {DBGFIELD("VFPSODB_WFPSODB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #480
  {DBGFIELD("VFTCI_VFTCIDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #481
  {DBGFIELD("WFTCIDB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #482
  {DBGFIELD("VLDE_VLED")          0, false, false,  0, 0,  0, 0,  0, 0}, // #483
  {DBGFIELD("VLDEB_VLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #484
  {DBGFIELD("WLDEB_WLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #485
  {DBGFIELD("VFD")                0, false, false,  0, 0,  0, 0,  0, 0}, // #486
  {DBGFIELD("VFDDB_WFDDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #487
  {DBGFIELD("VFSQ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #488
  {DBGFIELD("VFSQDB_WFSQDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #489
  {DBGFIELD("VFCE_VFCH_VFCHE")    0, false, false,  0, 0,  0, 0,  0, 0}, // #490
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #491
  {DBGFIELD("WFC_WFK")            0, false, false,  0, 0,  0, 0,  0, 0}, // #492
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #493
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #494
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #495
  {DBGFIELD("WFCDB_WFKDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #496
  {DBGFIELD("LEFR")               0, false, false,  0, 0,  0, 0,  0, 0}, // #497
  {DBGFIELD("LFER")               0, false, false,  0, 0,  0, 0,  0, 0}, // #498
  {DBGFIELD("VFAE_VFAEB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #499
  {DBGFIELD("VFAEBS")             0, false, false,  0, 0,  0, 0,  0, 0}, // #500
  {DBGFIELD("VFAEF_VFAEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #501
  {DBGFIELD("VFAEFS_VFAEHS")      0, false, false,  0, 0,  0, 0,  0, 0}, // #502
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #503
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #504
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #505
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #506
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #507
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #508
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #509
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #510
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #511
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #512
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #513
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #514
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  3, 1,  2, 1,  0, 0}, // #515
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, true,  1, 1, 49, 3,  0, 0}, // #516
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, true,  4, 2, 22, 4,  0, 0}, // #517
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, true,  4, 2,  6, 4,  0, 0}, // #518
  {DBGFIELD("ASI")                2, false, false,  4, 2,  6, 3,  0, 0}, // #519
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 1,  0, 0}, // #520
  {DBGFIELD("STCK")               2, false, false,  4, 2, 68, 3,  0, 0} // #521
}; // Z196ModelSchedClasses

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc ZEC12ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("ZEC12_FPUnit")    1, 0, -1}, // #1
  {DBGFIELD("ZEC12_FXUnit")    2, 0, -1}, // #2
  {DBGFIELD("ZEC12_LSUnit")    2, 0, -1}, // #3
  {DBGFIELD("ZEC12_VBUnit")    1, 0, -1}  // #4
};

static const llvm::MCSchedModel ZEC12Model = {
  5, // IssueWidth
  40, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  1, // Processor ID
  ZEC12ModelProcResources,
  ZEC12ModelSchedClasses,
  5,
  522,
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc Z13ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("Z13_FXaUnit")     2, 0, -1}, // #1
  {DBGFIELD("Z13_FXbUnit")     2, 0, -1}, // #2
  {DBGFIELD("Z13_LSUnit")      2, 0, -1}, // #3
  {DBGFIELD("Z13_VBUnit")      2, 0, -1}, // #4
  {DBGFIELD("Z13_VecFPdUnit")  2, 0, 1}, // #5
  {DBGFIELD("Z13_VecUnit")     2, 0, -1}  // #6
};

static const llvm::MCSchedModel Z13Model = {
  8, // IssueWidth
  60, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  2, // Processor ID
  Z13ModelProcResources,
  Z13ModelSchedClasses,
  7,
  522,
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc Z196ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("Z196_FPUnit")     1, 0, -1}, // #1
  {DBGFIELD("Z196_FXUnit")     2, 0, -1}, // #2
  {DBGFIELD("Z196_LSUnit")     2, 0, -1}  // #3
};

static const llvm::MCSchedModel Z196Model = {
  5, // IssueWidth
  40, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  true, // PostRAScheduler
  true, // CompleteModel
  3, // Processor ID
  Z196ModelProcResources,
  Z196ModelSchedClasses,
  4,
  522,
  nullptr}; // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[] = {
  { "arch10", (const void *)&ZEC12Model },
  { "arch11", (const void *)&Z13Model },
  { "arch8", (const void *)&NoSchedModel },
  { "arch9", (const void *)&Z196Model },
  { "generic", (const void *)&NoSchedModel },
  { "z10", (const void *)&NoSchedModel },
  { "z13", (const void *)&Z13Model },
  { "z196", (const void *)&Z196Model },
  { "zEC12", (const void *)&ZEC12Model }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createSystemZMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, SystemZFeatureKV, SystemZSubTypeKV, 
                      SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                      nullptr, nullptr, nullptr);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SystemZSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[SystemZ::FeatureDistinctOps]) HasDistinctOps = true;
  if (Bits[SystemZ::FeatureExecutionHint]) HasExecutionHint = true;
  if (Bits[SystemZ::FeatureFPExtension]) HasFPExtension = true;
  if (Bits[SystemZ::FeatureFastSerialization]) HasFastSerialization = true;
  if (Bits[SystemZ::FeatureHighWord]) HasHighWord = true;
  if (Bits[SystemZ::FeatureInterlockedAccess1]) HasInterlockedAccess1 = true;
  if (Bits[SystemZ::FeatureLoadAndTrap]) HasLoadAndTrap = true;
  if (Bits[SystemZ::FeatureLoadAndZeroRightmostByte]) HasLoadAndZeroRightmostByte = true;
  if (Bits[SystemZ::FeatureLoadStoreOnCond]) HasLoadStoreOnCond = true;
  if (Bits[SystemZ::FeatureLoadStoreOnCond2]) HasLoadStoreOnCond2 = true;
  if (Bits[SystemZ::FeatureMiscellaneousExtensions]) HasMiscellaneousExtensions = true;
  if (Bits[SystemZ::FeaturePopulationCount]) HasPopulationCount = true;
  if (Bits[SystemZ::FeatureProcessorAssist]) HasProcessorAssist = true;
  if (Bits[SystemZ::FeatureTransactionalExecution]) HasTransactionalExecution = true;
  if (Bits[SystemZ::FeatureVector]) HasVector = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct SystemZGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[];
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[];
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[];
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[];
SystemZGenSubtargetInfo::SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(SystemZFeatureKV, 15), makeArrayRef(SystemZSubTypeKV, 9), 
                        SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned SystemZGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SystemZGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

