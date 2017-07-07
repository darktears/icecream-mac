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
  FeatureDFPPackedConversion = 0,
  FeatureDFPZonedConversion = 1,
  FeatureDistinctOps = 2,
  FeatureExecutionHint = 3,
  FeatureFPExtension = 4,
  FeatureFastSerialization = 5,
  FeatureHighWord = 6,
  FeatureInterlockedAccess1 = 7,
  FeatureLoadAndTrap = 8,
  FeatureLoadAndZeroRightmostByte = 9,
  FeatureLoadStoreOnCond = 10,
  FeatureLoadStoreOnCond2 = 11,
  FeatureMessageSecurityAssist4 = 12,
  FeatureMessageSecurityAssist5 = 13,
  FeatureMiscellaneousExtensions = 14,
  FeaturePopulationCount = 15,
  FeatureProcessorAssist = 16,
  FeatureTransactionalExecution = 17,
  FeatureVector = 18
};
} // end namespace SystemZ
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[] = {
  { "dfp-packed-conversion", "Assume that the DFP packed-conversion facility is installed", { SystemZ::FeatureDFPPackedConversion }, { } },
  { "dfp-zoned-conversion", "Assume that the DFP zoned-conversion facility is installed", { SystemZ::FeatureDFPZonedConversion }, { } },
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
  { "message-security-assist-extension4", "Assume that the message-security-assist extension facility 4 is installed", { SystemZ::FeatureMessageSecurityAssist4 }, { } },
  { "message-security-assist-extension5", "Assume that the message-security-assist extension facility 5 is installed", { SystemZ::FeatureMessageSecurityAssist5 }, { } },
  { "miscellaneous-extensions", "Assume that the miscellaneous-extensions facility is installed", { SystemZ::FeatureMiscellaneousExtensions }, { } },
  { "population-count", "Assume that the population-count facility is installed", { SystemZ::FeaturePopulationCount }, { } },
  { "processor-assist", "Assume that the processor-assist facility is installed", { SystemZ::FeatureProcessorAssist }, { } },
  { "transactional-execution", "Assume that the transactional-execution facility is installed", { SystemZ::FeatureTransactionalExecution }, { } },
  { "vector", "Assume that the vectory facility is installed", { SystemZ::FeatureVector }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[] = {
  { "arch10", "Select the arch10 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion }, { } },
  { "arch11", "Select the arch11 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureMessageSecurityAssist5, SystemZ::FeatureDFPPackedConversion, SystemZ::FeatureVector }, { } },
  { "arch8", "Select the arch8 processor", { }, { } },
  { "arch9", "Select the arch9 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist4 }, { } },
  { "generic", "Select the generic processor", { }, { } },
  { "z10", "Select the z10 processor", { }, { } },
  { "z13", "Select the z13 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion, SystemZ::FeatureLoadAndZeroRightmostByte, SystemZ::FeatureLoadStoreOnCond2, SystemZ::FeatureMessageSecurityAssist5, SystemZ::FeatureDFPPackedConversion, SystemZ::FeatureVector }, { } },
  { "z196", "Select the z196 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist4 }, { } },
  { "zEC12", "Select the zEC12 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureFastSerialization, SystemZ::FeatureFPExtension, SystemZ::FeatureHighWord, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeaturePopulationCount, SystemZ::FeatureMessageSecurityAssist4, SystemZ::FeatureExecutionHint, SystemZ::FeatureLoadAndTrap, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureProcessorAssist, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureDFPZonedConversion }, { } }
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
  { 3,  1}, // #1
  { 5,  1}, // #2
  { 4,  1}, // #3
  { 3,  1}, // #4
  { 4,  1}, // #5
  { 3,  3}, // #6
  { 4,  1}, // #7
  { 3,  2}, // #8
  { 5,  1}, // #9
  { 3,  2}, // #10
  { 4,  1}, // #11
  { 3,  1}, // #12
  { 4,  3}, // #13
  { 4,  5}, // #14
  { 3,  3}, // #15
  { 4,  2}, // #16
  { 3,  1}, // #17
  { 4,  2}, // #18
  { 2,  4}, // #19
  { 3,  5}, // #20
  { 2,  4}, // #21
  { 3,  4}, // #22
  { 4,  1}, // #23
  { 2,  4}, // #24
  { 3,  3}, // #25
  { 4,  1}, // #26
  { 3,  5}, // #27
  { 4,  1}, // #28
  { 3,  6}, // #29
  { 4,  2}, // #30
  { 3,  2}, // #31
  { 4,  2}, // #32
  { 1,  1}, // #33
  { 3,  1}, // #34
  { 4,  1}, // #35
  { 1,  1}, // #36
  { 3,  2}, // #37
  { 1,  1}, // #38
  { 2,  1}, // #39
  { 3,  2}, // #40
  { 4,  4}, // #41
  { 1,  1}, // #42
  { 2,  1}, // #43
  { 3,  2}, // #44
  { 4,  2}, // #45
  { 1,  1}, // #46
  { 2,  1}, // #47
  { 4,  4}, // #48
  { 1,  1}, // #49
  { 2,  1}, // #50
  { 4,  2}, // #51
  { 3,  5}, // #52
  { 4,  2}, // #53
  { 2,  2}, // #54
  { 2,  1}, // #55
  { 4,  1}, // #56
  { 2,  4}, // #57
  { 4,  1}, // #58
  { 2,  1}, // #59
  { 3,  1}, // #60
  { 2,  4}, // #61
  { 3,  1}, // #62
  { 2,  2}, // #63
  { 3,  1}, // #64
  { 1,  2}, // #65
  { 2,  2}, // #66
  { 1,  2}, // #67
  { 2,  2}, // #68
  { 3,  1}, // #69
  { 1,  2}, // #70
  { 3,  1}, // #71
  { 1,  2}, // #72
  { 2,  2}, // #73
  { 3,  2}, // #74
  { 1,  1}, // #75
  { 2,  1}, // #76
  { 4,  1}, // #77
  { 1,  2}, // #78
  { 2,  2}, // #79
  { 4,  2}, // #80
  { 1,  2}, // #81
  { 3,  1}, // #82
  { 4,  1}, // #83
  { 1,  1}, // #84
  { 4,  1}, // #85
  { 1,  2}, // #86
  { 2,  2}, // #87
  { 4,  1}, // #88
  { 1,  2}, // #89
  { 4,  1}, // #90
  { 1,  2}, // #91
  { 2,  1}, // #92
  { 2,  1}, // #93
  { 3,  3}, // #94
  { 2,  3}, // #95
  { 3,  2}, // #96
  { 1,  4}, // #97
  { 1,  4}, // #98
  { 3,  1}, // #99
  { 1,  1}, // #100
  { 2,  1}, // #101
  { 3,  1}, // #102
  { 1,  3}, // #103
  { 2,  2}, // #104
  { 3,  1}, // #105
  { 1,  2}, // #106
  { 2,  4}, // #107
  { 3,  3}, // #108
  { 2,  1}, // #109
  { 3,  1}, // #110
  { 6,  1}, // #111
  { 2,  2}, // #112
  { 6,  1}, // #113
  { 2,  1}, // #114
  { 3,  2}, // #115
  { 6,  1}, // #116
  { 2,  1}, // #117
  { 3,  2}, // #118
  { 6,  2}, // #119
  { 2,  2}, // #120
  { 3,  3}, // #121
  { 6,  2}, // #122
  { 2,  5}, // #123
  { 3,  2}, // #124
  { 1,  2}, // #125
  { 2,  1}, // #126
  { 3,  1}, // #127
  { 1,  2}, // #128
  { 2,  1}, // #129
  { 3,  3}, // #130
  { 1,  2}, // #131
  { 2,  2}, // #132
  { 3,  4}, // #133
  { 6,  4}, // #134
  { 3,  1}, // #135
  { 6,  4}, // #136
  { 2,  1}, // #137
  { 6,  1}, // #138
  { 2,  1}, // #139
  { 6,  4}, // #140
  { 2,  1}, // #141
  { 6,  2}, // #142
  { 3,  1}, // #143
  { 5, 30}, // #144
  { 5, 60}, // #145
  { 2,  2}, // #146
  { 6,  4}, // #147
  { 3,  2}, // #148
  { 6,  4}, // #149
  { 2,  1}, // #150
  { 3,  1}, // #151
  { 6,  2}, // #152
  { 1,  2}, // #153
  { 3,  2}, // #154
  { 4,  4}, // #155
  { 1,  2}, // #156
  { 3,  2}, // #157
  { 4,  2}, // #158
  { 1,  2}, // #159
  { 4,  4}, // #160
  { 1,  2}, // #161
  { 4,  2}, // #162
  { 1,  4}, // #163
  { 3,  2}, // #164
  { 1,  4}, // #165
  { 4,  1} // #166
}; // SystemZWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 FXU_VBU_LSU_lat1_FXa_FXb_VecDFX
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
  { 1,  0}, // #12 FXU_FXa_FXb
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
  { 8,  0}, // #30 Lat8_FPU_VecBF_VecDF
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
  { 1,  0}, // #42 FXU_FXb_FXa
  {30,  0}, // #43 Lat30
  { 1,  0}, // #44 GroupAlone
  { 4,  0}, // #45 LSU
  { 4,  0}, // #46 LSU
  { 1,  0}, // #47 FXU_FXb
  { 1,  0}, // #48 FXU_FXb
  { 1,  0}, // #49 FXU_FXb
  {10,  0}, // #50 Lat10
  { 1,  0}, // #51 GroupAlone_FXU_FXb_FXa
  { 1,  0}, // #52 FXU_FXa_FXb
  { 2,  0}, // #53 Lat2
  { 1,  0}, // #54 FXU_GroupAlone_BeginGroup_EndGroup
  { 1,  0}, // #55 FXU
  { 2,  0}, // #56 Lat2
  { 1,  0}, // #57 GroupAlone
  { 4,  0}, // #58 LSU
  { 4,  0}, // #59 LSU
  { 1,  0}, // #60 FXU_FXb_FXa
  { 9,  0}, // #61 Lat9_VecBF2
  { 1,  0}, // #62 GroupAlone_BeginGroup
  { 1,  0}, // #63 FXU_FXa
  { 4,  0}, // #64 LSU
  {10,  0}, // #65 Lat10
  { 1,  0}, // #66 FXU_FXa
  { 6,  0}, // #67 Lat6
  { 1,  0}, // #68 FXU_FXa_GroupAlone
  { 4,  0}, // #69 LSU
  {12,  0}, // #70 Lat12
  { 1,  0}, // #71 FXU_FXa
  { 4,  0}, // #72 LSU
  {15,  0}, // #73 Lat15
  { 1,  0}, // #74 GroupAlone_FXU
  { 1,  0}, // #75 FXU_FXa
  { 5,  0}, // #76 Lat5
  { 1,  0}, // #77 FXU_GroupAlone_FXa
  { 4,  0}, // #78 LSU
  { 9,  0}, // #79 Lat9
  { 1,  0}, // #80 FXU_FXa
  { 7,  0}, // #81 Lat7
  { 1,  0}, // #82 GroupAlone
  { 9,  0}, // #83 FPU2_VecBF2_VecDF2
  { 9,  0}, // #84 FPU2_VecBF2_VecDF2
  { 1,  0}, // #85 FXU_GroupAlone
  { 1,  0}, // #86 FXU
  { 1,  0}, // #87 FXU
  { 1,  0}, // #88 FXU
  { 1,  0}, // #89 FXU
  {30,  0}, // #90 Lat30
  { 1,  0}, // #91 GroupAlone
  { 9,  0}, // #92 FPU2
  { 9,  0}, // #93 FPU2
  { 4,  0}, // #94 LSU
  { 1,  0}, // #95 FXU
  { 1,  0}, // #96 FXU
  { 1,  0}, // #97 FXU
  { 1,  0}, // #98 FXU
  {30,  0}, // #99 Lat30
  { 1,  0}, // #100 GroupAlone
  { 9,  0}, // #101 FPU2
  { 9,  0}, // #102 FPU2
  { 1,  0}, // #103 FXU
  { 1,  0}, // #104 FXU
  { 1,  0}, // #105 FXU
  { 1,  0}, // #106 FXU
  {30,  0}, // #107 Lat30
  { 1,  0}, // #108 GroupAlone
  { 9,  0}, // #109 FPU2
  { 9,  0}, // #110 FPU2
  { 4,  0}, // #111 LSU
  { 1,  0}, // #112 FXU
  { 1,  0}, // #113 FXU
  { 1,  0}, // #114 FXU
  {30,  0}, // #115 Lat30
  { 1,  0}, // #116 GroupAlone
  { 1,  0}, // #117 FXU_FXa
  { 1,  0}, // #118 FXU_FXa
  { 1,  0}, // #119 FXU_FXa
  { 1,  0}, // #120 FXU_FXa
  { 8,  0}, // #121 Lat8
  { 1,  0}, // #122 FXU_FXb
  { 4,  0}, // #123 LSU
  { 4,  0}, // #124 LSU
  { 9,  0}, // #125 Lat9
  { 1,  0}, // #126 GroupAlone_BeginGroup
  { 1,  0}, // #127 FXU_FXa
  { 1,  0}, // #128 FXU_FXa
  { 1,  0}, // #129 FXU_FXb
  { 1,  0}, // #130 FXU_FXb
  { 1,  0}, // #131 FXU_FXa
  { 4,  0}, // #132 LSU
  {10,  0}, // #133 Lat10
  { 1,  0}, // #134 GroupAlone
  { 1,  0}, // #135 FXU
  { 1,  0}, // #136 FXU
  { 1,  0}, // #137 FXU
  { 1,  0}, // #138 FXU
  { 1,  0}, // #139 FXU
  { 1,  0}, // #140 FXU
  { 4,  0}, // #141 LSU
  { 4,  0}, // #142 LSU
  {12,  0}, // #143 Lat12
  { 1,  0}, // #144 GroupAlone_VecDFX
  { 4,  0}, // #145 LSU
  { 4,  0}, // #146 LSU
  { 5,  0}, // #147 Lat5
  { 1,  0}, // #148 GroupAlone
  { 1,  0}, // #149 FXU
  { 1,  0}, // #150 FXU
  { 4,  0}, // #151 LSU
  { 4,  0}, // #152 LSU
  { 6,  0}, // #153 Lat6
  { 1,  0}, // #154 GroupAlone
  { 1,  0}, // #155 FXU
  { 2,  0}, // #156 DFU
  { 4,  0}, // #157 LSU
  {30,  0}, // #158 Lat30
  { 1,  0}, // #159 GroupAlone
  { 1,  0}, // #160 FXU
  { 2,  0}, // #161 DFU
  { 1,  0}, // #162 FXU
  {30,  0}, // #163 Lat30
  { 1,  0}, // #164 GroupAlone
  { 1,  0}, // #165 FXU
  { 1,  0}, // #166 FXU
  { 3,  0}, // #167 DFU2_VecXsPm
  { 4,  0}, // #168 LSU_Lat4
  { 4,  0}, // #169 LSU
  { 4,  0}, // #170 LSU
  { 4,  0}, // #171 LSU
  {15,  0}, // #172 Lat15
  { 1,  0}, // #173 GroupAlone
  { 1,  0}, // #174 FXU
  { 1,  0}, // #175 FXU
  { 3,  0}, // #176 DFU2
  { 4,  0}, // #177 LSU
  { 4,  0}, // #178 LSU
  { 4,  0}, // #179 LSU
  { 4,  0}, // #180 LSU
  {30,  0}, // #181 Lat30
  { 1,  0}, // #182 GroupAlone
  { 1,  0}, // #183 FXU
  { 1,  0}, // #184 FXU
  { 3,  0}, // #185 DFU2
  { 4,  0}, // #186 LSU
  { 4,  0}, // #187 LSU
  {15,  0}, // #188 Lat15
  { 1,  0}, // #189 GroupAlone
  { 3,  0}, // #190 DFU2
  { 4,  0}, // #191 LSU
  { 4,  0}, // #192 LSU
  { 4,  0}, // #193 LSU
  { 4,  0}, // #194 LSU
  {11,  0}, // #195 Lat11
  { 1,  0}, // #196 GroupAlone
  { 3,  0}, // #197 DFU2
  { 4,  0}, // #198 LSU
  { 4,  0}, // #199 LSU
  { 3,  0}, // #200 Lat3
  { 1,  0}, // #201 GroupAlone
  { 4,  0}, // #202 LSU
  { 1,  0}, // #203 FXU_FXa
  { 5,  0}, // #204 Lat5
  { 1,  0}, // #205 GroupAlone_BeginGroup_FXa
  { 1,  0}, // #206 FXU_FXa
  { 1,  0}, // #207 FXU_FXb
  { 4,  0}, // #208 LSU
  { 8,  0}, // #209 Lat8
  { 1,  0}, // #210 GroupAlone
  { 4,  0}, // #211 LSU
  { 4,  0}, // #212 LSU
  { 1,  0}, // #213 FXU_FXb
  { 1,  0}, // #214 FXU_FXb
  { 1,  0}, // #215 FXU_FXb
  { 1,  0}, // #216 FXU_FXb
  { 1,  0}, // #217 FXU_FXb
  {15,  0}, // #218 Lat15
  { 1,  0}, // #219 GroupAlone
  { 1,  0}, // #220 FXU_FXa
  { 5,  0}, // #221 Lat5
  { 4,  0}, // #222 LSU
  { 4,  0}, // #223 LSU
  { 4,  0}, // #224 LSU
  { 4,  0}, // #225 LSU
  { 4,  0}, // #226 LSU
  { 1,  0}, // #227 FXU
  { 1,  0}, // #228 FXU
  {20,  0}, // #229 Lat20
  { 1,  0}, // #230 GroupAlone
  { 9,  0}, // #231 FPU2
  { 9,  0}, // #232 FPU2
  { 9,  0}, // #233 Lat9
  { 1,  0}, // #234 GroupAlone
  { 8,  0}, // #235 FPU_VecDF
  { 8,  0}, // #236 FPU_VecDF
  {20,  0}, // #237 Lat20
  { 8,  0}, // #238 FPU_VecBF
  { 4,  0}, // #239 LSU
  {12,  0}, // #240 Lat12
  { 9,  0}, // #241 FPU2
  { 9,  0}, // #242 FPU2
  { 4,  0}, // #243 LSU
  {15,  0}, // #244 Lat15
  { 1,  0}, // #245 GroupAlone
  { 9,  0}, // #246 FPU2
  { 9,  0}, // #247 FPU2
  {10,  0}, // #248 Lat10
  { 1,  0}, // #249 GroupAlone
  { 1,  0}, // #250 FXU_FXb
  { 8,  0}, // #251 FPU_VecBF_VecDF
  { 9,  0}, // #252 Lat9
  { 1,  0}, // #253 GroupAlone_BeginGroup
  { 1,  0}, // #254 FXU
  { 9,  0}, // #255 FPU2_VecDF2
  { 9,  0}, // #256 FPU2_VecDF2
  {11,  0}, // #257 Lat11
  { 1,  0}, // #258 GroupAlone
  { 1,  0}, // #259 FXU_FXb
  { 8,  0}, // #260 FPU_VecDF
  {12,  0}, // #261 Lat12
  { 1,  0}, // #262 GroupAlone_BeginGroup
  { 1,  0}, // #263 FXU_FXb
  { 8,  0}, // #264 FPU_VecDF
  { 8,  0}, // #265 FPU_VecDF
  {20,  0}, // #266 Lat20
  { 1,  0}, // #267 GroupAlone_BeginGroup
  { 1,  0}, // #268 FXU_FXb
  { 8,  0}, // #269 FPU_VecBF_VecDF
  {11,  0}, // #270 Lat11
  { 1,  0}, // #271 GroupAlone_BeginGroup
  { 8,  0}, // #272 FPU
  { 4,  0}, // #273 LSU
  {30,  0}, // #274 Lat30
  { 8,  0}, // #275 FPU_VecDF
  {30,  0}, // #276 Lat30
  { 9,  0}, // #277 FPU2_VecDF2
  { 9,  0}, // #278 FPU2_VecDF2
  {30,  0}, // #279 Lat30
  { 1,  0}, // #280 GroupAlone_FXb
  { 9,  0}, // #281 FPU2_VecDF2
  { 9,  0}, // #282 FPU2_VecDF2
  {15,  0}, // #283 Lat15
  { 1,  0}, // #284 GroupAlone
  { 9,  0}, // #285 FPU2_VecDF2
  { 9,  0}, // #286 FPU2_VecDF2
  {20,  0}, // #287 Lat20
  { 1,  0}, // #288 GroupAlone
  { 8,  0}, // #289 FPU_VecBF
  { 4,  0}, // #290 LSU
  {12,  0}, // #291 Lat12
  { 1,  0}, // #292 GroupAlone_FXb
  { 8,  0}, // #293 FPU_VecDF
  {30,  0}, // #294 Lat30
  { 1,  0}, // #295 GroupAlone_BeginGroup
  { 8,  0}, // #296 FPU
  { 8,  0}, // #297 FPU
  {30,  0}, // #298 Lat30
  { 8,  0}, // #299 FPU
  { 4,  0}, // #300 LSU
  {15,  0}, // #301 Lat15
  { 9,  0}, // #302 FPU2_VecBF2
  { 9,  0}, // #303 FPU2_VecBF2
  { 4,  0}, // #304 LSU
  {12,  0}, // #305 Lat12
  { 1,  0}, // #306 GroupAlone
  { 8,  0}, // #307 FPU
  { 8,  0}, // #308 FPU_VecDF
  {15,  0}, // #309 Lat15
  { 2,  0}, // #310 DFU
  {20,  0}, // #311 Lat20
  { 3,  0}, // #312 DFU2
  { 3,  0}, // #313 DFU2
  {20,  0}, // #314 Lat20
  { 1,  0}, // #315 GroupAlone_FXU
  { 2,  0}, // #316 DFU
  {30,  0}, // #317 Lat30
  { 2,  0}, // #318 DFU_FXa2
  { 2,  0}, // #319 DFU_FXa2
  {30,  0}, // #320 Lat30
  { 1,  0}, // #321 FXU_GroupAlone
  { 2,  0}, // #322 DFU
  {30,  0}, // #323 Lat30
  { 1,  0}, // #324 GroupAlone
  { 1,  0}, // #325 FXU
  { 3,  0}, // #326 DFU2
  { 3,  0}, // #327 DFU2
  {30,  0}, // #328 Lat30
  { 1,  0}, // #329 GroupAlone
  { 1,  0}, // #330 FXU
  { 2,  0}, // #331 DFU
  {11,  0}, // #332 Lat11
  { 1,  0}, // #333 GroupAlone
  { 1,  0}, // #334 FXU
  { 3,  0}, // #335 DFU2
  { 3,  0}, // #336 DFU2
  {11,  0}, // #337 Lat11
  { 1,  0}, // #338 GroupAlone
  { 1,  0}, // #339 FXU
  { 2,  0}, // #340 DFU
  { 2,  0}, // #341 DFU
  {30,  0}, // #342 Lat30
  { 1,  0}, // #343 GroupAlone
  { 1,  0}, // #344 FXU
  { 2,  0}, // #345 DFU
  {12,  0}, // #346 Lat12
  { 1,  0}, // #347 GroupAlone
  { 1,  0}, // #348 FXU
  { 1,  0}, // #349 FXU
  { 3,  0}, // #350 DFU2
  { 3,  0}, // #351 DFU2
  {20,  0}, // #352 Lat20
  { 1,  0}, // #353 GroupAlone
  { 4,  0}, // #354 LSU
  { 3,  0}, // #355 DFU2
  { 7,  0}, // #356 Lat7
  { 1,  0}, // #357 GroupAlone
  { 4,  0}, // #358 LSU
  { 4,  0}, // #359 LSU
  { 3,  0}, // #360 DFU2
  { 3,  0}, // #361 DFU2
  {10,  0}, // #362 Lat10
  { 1,  0}, // #363 GroupAlone
  { 1,  0}, // #364 FXU
  { 4,  0}, // #365 LSU
  { 2,  0}, // #366 DFU
  {11,  0}, // #367 Lat11
  { 1,  0}, // #368 GroupAlone
  { 1,  0}, // #369 FXU
  { 4,  0}, // #370 LSU
  { 2,  0}, // #371 DFU
  { 2,  0}, // #372 DFU
  {15,  0}, // #373 Lat15
  { 1,  0}, // #374 GroupAlone
  { 1,  0}, // #375 FXU
  { 2,  0}, // #376 DFU
  {15,  0}, // #377 Lat15
  { 1,  0}, // #378 GroupAlone
  { 1,  0}, // #379 FXU
  { 2,  0}, // #380 DFU_FXa2
  { 2,  0}, // #381 DFU_FXa2
  {20,  0}, // #382 Lat20
  { 1,  0}, // #383 GroupAlone
  { 4,  0}, // #384 LSU
  { 3,  0}, // #385 DFU2
  { 3,  0}, // #386 DFU2
  {15,  0}, // #387 Lat15
  { 1,  0}, // #388 GroupAlone
  { 1,  0}, // #389 FXU
  { 3,  0}, // #390 DFU2
  { 3,  0}, // #391 DFU2
  {15,  0}, // #392 Lat15
  { 1,  0}, // #393 GroupAlone
  { 2,  0}, // #394 DFU
  { 8,  0}, // #395 Lat8
  { 2,  0}, // #396 DFU
  { 9,  0}, // #397 Lat9
  { 4,  0}, // #398 LSU
  { 2,  0}, // #399 DFU
  {15,  0}, // #400 Lat15
  { 1,  0}, // #401 FXa
  { 1,  0}, // #402 FXa
  { 1,  0}, // #403 FXb
  { 1,  0}, // #404 FXb
  { 4,  0}, // #405 Lat4
  { 1,  0}, // #406 GroupAlone
  { 1,  0}, // #407 FXb
  { 4,  0}, // #408 LSU
  { 4,  0}, // #409 LSU
  { 4,  0}, // #410 LSU
  { 8,  0}, // #411 Lat8
  { 1,  0}, // #412 GroupAlone
  { 2,  0}, // #413 FXa2
  { 2,  0}, // #414 FXa2
  { 4,  0}, // #415 LSU
  {30,  0}, // #416 Lat30
  { 1,  0}, // #417 GroupAlone
  { 4,  0}, // #418 LSU
  { 1,  0}, // #419 FXa
  {30,  0}, // #420 Lat30
  { 1,  0}, // #421 GroupAlone
  { 1,  0}, // #422 FXa
  { 1,  0}, // #423 FXa
  { 1,  0}, // #424 FXb
  { 1,  0}, // #425 FXb
  { 4,  0}, // #426 LSU
  { 1,  0}, // #427 FXb
  { 1,  0}, // #428 FXb
  { 4,  0}, // #429 LSU
  { 4,  0}, // #430 LSU
  {20,  0}, // #431 Lat20
  { 1,  0}, // #432 GroupAlone
  { 1,  0}, // #433 FXb
  { 8,  0}, // #434 VecDF
  { 4,  0}, // #435 LSU
  {30,  0}, // #436 Lat30
  { 1,  0}, // #437 GroupAlone
  { 1,  0}, // #438 FXb
  { 8,  0}, // #439 VecDF
  { 1,  0}, // #440 FXb
  {30,  0}, // #441 Lat30
  { 1,  0}, // #442 GroupAlone
  { 1,  0}, // #443 FXb
  { 1,  0}, // #444 VecDFX
  { 4,  0}, // #445 LSU
  { 4,  0}, // #446 LSU
  { 9,  0}, // #447 Lat9
  { 1,  0}, // #448 GroupAlone
  { 1,  0}, // #449 FXb
  { 2,  0}, // #450 VecDFX2
  { 4,  0}, // #451 LSU
  { 4,  0}, // #452 LSU
  {30,  0}, // #453 Lat30
  { 1,  0}, // #454 GroupAlone
  { 1,  0}, // #455 FXb
  { 1,  0}, // #456 FXb
  { 2,  0}, // #457 VecDFX2
  { 4,  0}, // #458 LSU
  { 4,  0}, // #459 LSU
  { 4,  0}, // #460 LSU
  {15,  0}, // #461 Lat15
  { 1,  0}, // #462 GroupAlone
  { 1,  0}, // #463 FXa
  { 1,  0}, // #464 FXa
  { 1,  0}, // #465 FXb
  { 5,  0}, // #466 Lat5
  { 1,  0}, // #467 GroupAlone
  { 4,  0}, // #468 LSU
  { 4,  0}, // #469 LSU
  { 4,  0}, // #470 LSU
  { 1,  0}, // #471 FXa
  { 1,  0}, // #472 FXa
  { 1,  0}, // #473 FXb
  { 9,  0}, // #474 Lat9
  { 1,  0}, // #475 GroupAlone
  { 4,  0}, // #476 LSU
  { 4,  0}, // #477 LSU
  { 4,  0}, // #478 LSU
  { 4,  0}, // #479 LSU
  { 1,  0}, // #480 FXa
  { 1,  0}, // #481 FXa
  { 1,  0}, // #482 FXb
  { 1,  0}, // #483 FXb
  {11,  0}, // #484 Lat11
  { 1,  0}, // #485 GroupAlone
  { 3,  0}, // #486 VecXsPm
  { 4,  0}, // #487 LSU
  { 7,  0}, // #488 Lat7
  { 1,  0}, // #489 FXb
  { 9,  0}, // #490 VecDF2
  { 9,  0}, // #491 VecDF2
  {12,  0}, // #492 Lat12
  { 1,  0}, // #493 GroupAlone
  {30,  0}, // #494 VecFPd
  { 4,  0}, // #495 LSU
  {30,  0}, // #496 VecFPd
  {30,  0}, // #497 VecFPd_Lat30
  { 1,  0}, // #498 GroupAlone
  { 3,  0}, // #499 VecXsPm
  { 4,  0}, // #500 LSU
  { 8,  0}, // #501 Lat8
  { 4,  0}, // #502 LSU
  { 3,  0}, // #503 VecXsPm
  { 9,  0}, // #504 Lat9
  { 4,  0}, // #505 LSU
  { 9,  0}, // #506 VecDF2
  { 9,  0}, // #507 VecDF2
  {15,  0}, // #508 Lat15
  { 1,  0}, // #509 GroupAlone
  { 1,  0}, // #510 FXb
  { 9,  0}, // #511 VecDF2
  { 9,  0}, // #512 VecDF2
  {30,  0}, // #513 Lat30
  { 1,  0}, // #514 GroupAlone
  { 1,  0}, // #515 FXb
  { 8,  0}, // #516 VecDF
  { 8,  0}, // #517 VecDF
  {30,  0}, // #518 Lat30
  { 1,  0}, // #519 BeginGroup
  { 1,  0}, // #520 FXb
  { 1,  0}, // #521 FXb
  { 9,  0}, // #522 VecDF2
  { 9,  0}, // #523 VecDF2
  {15,  0}, // #524 Lat15
  { 1,  0}, // #525 GroupAlone_BeginGroup_FXb
  { 4,  0}, // #526 LSU
  { 8,  0}, // #527 VecDF
  {11,  0}, // #528 Lat11
  { 1,  0}, // #529 BeginGroup
  { 4,  0}, // #530 LSU
  { 4,  0}, // #531 LSU
  { 9,  0}, // #532 VecDF2
  { 9,  0}, // #533 VecDF2
  {15,  0}, // #534 Lat15
  { 1,  0}, // #535 GroupAlone
  { 1,  0}, // #536 FXb
  { 4,  0}, // #537 LSU
  { 8,  0}, // #538 VecDF
  { 8,  0}, // #539 VecDF
  {15,  0}, // #540 Lat15
  { 1,  0}, // #541 GroupAlone
  { 1,  0}, // #542 FXb
  { 8,  0}, // #543 VecDF
  { 8,  0}, // #544 VecDF
  {15,  0}, // #545 Lat15
  { 1,  0}, // #546 BeginGroup
  { 8,  0}, // #547 VecDF
  { 8,  0}, // #548 VecDF
  {11,  0}, // #549 Lat11
  { 1,  0}, // #550 GroupAlone
  { 1,  0}, // #551 FXb
  { 4,  0}, // #552 LSU
  { 3,  0}, // #553 VecXsPm
  {11,  0}, // #554 Lat11
  { 1,  0}, // #555 BeginGroup
  { 4,  0}, // #556 LSU
  { 4,  0}, // #557 LSU
  { 1,  0}, // #558 FXb
  { 1,  0}, // #559 FXb
  { 1,  0}, // #560 FXb
  { 1,  0}, // #561 FXb
  { 1,  0}, // #562 FXb
  {20,  0}, // #563 Lat20
  { 1,  0}, // #564 GroupAlone
  { 1,  0}, // #565 FXb
  { 1,  0}, // #566 FXb
  { 4,  0}, // #567 LSU
  {12,  0}, // #568 Lat12
  { 1,  0}, // #569 BeginGroup
  { 3,  0}, // #570 VecXsPm
  { 3,  0}, // #571 VecXsPm
  { 8,  0}, // #572 Lat8
  { 4,  0}, // #573 LSU
  { 1,  0}, // #574 FXU
  { 1,  0}, // #575 FXU
  { 6,  0}, // #576 Lat6
  { 1,  0}, // #577 GroupAlone
  { 1,  0}, // #578 FXU
  { 4,  0}, // #579 LSU
  { 1,  0}, // #580 FXU
  { 6,  0}, // #581 Lat6
  { 1,  0}, // #582 GroupAlone
  { 1,  0}, // #583 FXU
  { 1,  0}, // #584 FXU
  { 4,  0}, // #585 LSU
  { 6,  0}, // #586 Lat6
  { 2,  0}, // #587 Lat2
  { 1,  0} // #588 GroupAlone
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
  {DBGFIELD("MVCL_MVCLE_MVCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #34
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("SUBREG_TO_REG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 0, false, false,  0, 0,  0, 0,  0, 0}, // #40
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("L128")               1, false, false,  3, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LHI_LHIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LR_LRMux")           1, false, false,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LZRF_LZRG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("LAT_LFHAT_LGAT")     2, false, false,  4, 2,  6, 3,  0, 0}, // #49
  {DBGFIELD("LT_LTG")             2, false, false,  4, 2,  6, 3,  0, 0}, // #50
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #51
  {DBGFIELD("STG_STGRL")          2, false, false,  4, 2,  6, 3,  0, 0}, // #52
  {DBGFIELD("ST128")              2, false, false,  4, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #54
  {DBGFIELD("MVST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #55
  {DBGFIELD("LOCRMux")            0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #61
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 1,  0, 0}, // #62
  {DBGFIELD("LTGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #63
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 1,  0, 0}, // #64
  {DBGFIELD("LB_LBH_LBMux")       2, false, false,  4, 2,  6, 3,  0, 0}, // #65
  {DBGFIELD("LH_LHY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false,  4, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LGB_LGF_LGH")        2, false, false,  4, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LGFRL_LGHRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #69
  {DBGFIELD("LLCR_LLCRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #70
  {DBGFIELD("LLHR_LLHRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #72
  {DBGFIELD("LLC_LLCMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #73
  {DBGFIELD("LLH_LLHMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #74
  {DBGFIELD("LLCH_LLHH")          2, false, false,  4, 2,  6, 3,  0, 0}, // #75
  {DBGFIELD("LLHRL")              1, false, false,  3, 1,  2, 1,  0, 0}, // #76
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLZRGF")             0, false, false,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("LLGFAT_LLGTAT")      2, false, false,  4, 2,  6, 3,  0, 0}, // #79
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #81
  {DBGFIELD("STCM_STCMH_STCMY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #82
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 14, 1, 35, 7,  0, 0}, // #83
  {DBGFIELD("LMD")                1, true, true,  1, 1, 42, 3,  0, 0}, // #84
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 15, 2, 45, 7,  0, 0}, // #85
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #86
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false,  4, 2,  6, 3,  0, 0}, // #87
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false,  4, 2,  6, 3,  0, 0}, // #88
  {DBGFIELD("MVCIN")              1, true, true,  3, 1, 32, 3,  0, 0}, // #89
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 1,  0, 0}, // #90
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 52, 2,  0, 0}, // #92
  {DBGFIELD("LNGFR_LPGFR")        2, true, true,  8, 1, 17, 4,  0, 0}, // #93
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 52, 2,  0, 0}, // #94
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #95
  {DBGFIELD("LCGFR")              2, true, true,  8, 1, 54, 4,  0, 0}, // #96
  {DBGFIELD("IC_ICY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #97
  {DBGFIELD("IC32_IC32Y")         2, false, false,  4, 2,  6, 3,  0, 0}, // #98
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #99
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #100
  {DBGFIELD("IIHF_IIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIHH_IIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIHL_IIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IILF_IILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #104
  {DBGFIELD("IILH_IILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("IILL_IILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("A_AY")               2, false, false,  4, 2,  6, 3,  0, 0}, // #107
  {DBGFIELD("AH_AHY")             2, false, false,  4, 2, 22, 3,  0, 0}, // #108
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #109
  {DBGFIELD("AFI_AFIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AG")                 2, false, false,  4, 2,  6, 3,  0, 0}, // #111
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #112
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #113
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #115
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("AL_ALY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #117
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 1,  0, 0}, // #118
  {DBGFIELD("ALG_ALGF")           2, false, false,  4, 2,  6, 3,  0, 0}, // #119
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 1,  0, 0}, // #120
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #121
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #122
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #123
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #124
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 2, false, false,  4, 2,  6, 3,  0, 0}, // #125
  {DBGFIELD("ALC_ALCG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #126
  {DBGFIELD("ALCGR_ALCR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #127
  {DBGFIELD("AGF")                2, false, false,  4, 2, 22, 3,  0, 0}, // #128
  {DBGFIELD("AGFR")               1, false, false,  1, 1, 52, 2,  0, 0}, // #129
  {DBGFIELD("S_SG_SY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #130
  {DBGFIELD("SH_SHY")             2, false, false,  4, 2, 22, 3,  0, 0}, // #131
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #133
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false,  4, 2,  6, 3,  0, 0}, // #134
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #135
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #138
  {DBGFIELD("SLB_SLBG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #139
  {DBGFIELD("SLBGR_SLBR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #140
  {DBGFIELD("SGF")                2, false, false,  4, 2, 22, 3,  0, 0}, // #141
  {DBGFIELD("SGFR")               1, false, false,  1, 1, 52, 2,  0, 0}, // #142
  {DBGFIELD("N_NG_NY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #143
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #144
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #145
  {DBGFIELD("NI_NIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #146
  {DBGFIELD("NIHF_NIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #147
  {DBGFIELD("NIHH_NIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #148
  {DBGFIELD("NIHL_NIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #149
  {DBGFIELD("NILF_NILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("NILH_NILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("NILL_NILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("NC")                 3, true, true, 17, 2, 58, 5,  0, 0}, // #154
  {DBGFIELD("O_OG_OY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #155
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("OI_OIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #157
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("OIHF_OIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("OIHH_OIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #160
  {DBGFIELD("OIHL_OIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("OILF_OILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("OILH_OILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #163
  {DBGFIELD("OILL_OILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("OC")                 3, true, true, 17, 2, 58, 5,  0, 0}, // #166
  {DBGFIELD("X_XG_XY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #167
  {DBGFIELD("XI_XIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #168
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #170
  {DBGFIELD("XIHF_XIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #171
  {DBGFIELD("XILF_XILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #172
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #173
  {DBGFIELD("XC")                 3, true, true, 17, 2, 58, 5,  0, 0}, // #174
  {DBGFIELD("MS_MSGF_MSY")        2, false, false,  4, 2, 63, 3,  0, 0}, // #175
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 66, 2,  0, 0}, // #176
  {DBGFIELD("MSG")                2, false, false,  4, 2, 68, 3,  0, 0}, // #177
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 29, 2,  0, 0}, // #178
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 66, 2,  0, 0}, // #179
  {DBGFIELD("MLG")                2, true, true,  4, 2, 71, 4,  0, 0}, // #180
  {DBGFIELD("MLGR")               1, true, true,  1, 1, 60, 3,  0, 0}, // #181
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 75, 2,  0, 0}, // #182
  {DBGFIELD("MHI")                1, false, false,  1, 1, 75, 2,  0, 0}, // #183
  {DBGFIELD("MH_MHY")             2, false, false,  4, 2, 77, 3,  0, 0}, // #184
  {DBGFIELD("MLR_MR")             1, true, true,  1, 1, 80, 3,  0, 0}, // #185
  {DBGFIELD("M_MFY_ML")           2, true, true,  4, 2, 12, 4,  0, 0}, // #186
  {DBGFIELD("DR")                 7, true, true, 19, 2, 83, 9,  0, 0}, // #187
  {DBGFIELD("D")                  7, true, true, 21, 3, 92, 9,  0, 0}, // #188
  {DBGFIELD("DSGFR_DSGR")         6, true, true, 21, 2, 101, 8,  0, 0}, // #189
  {DBGFIELD("DSG_DSGF")           6, true, true, 24, 3, 109, 8,  0, 0}, // #190
  {DBGFIELD("DLR")                7, true, true, 19, 2, 83, 9,  0, 0}, // #191
  {DBGFIELD("DLGR")               7, true, true, 19, 2, 83, 9,  0, 0}, // #192
  {DBGFIELD("DL_DLG")             7, true, true, 21, 3, 92, 9,  0, 0}, // #193
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #195
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #196
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #197
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 4, false, false, 22, 1, 117, 5,  0, 0}, // #198
  {DBGFIELD("RLL_RLLG")           2, false, false,  4, 2, 22, 3,  0, 0}, // #199
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false,  1, 1,  1, 1,  0, 0}, // #200
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #201
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #202
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 1,  0, 0}, // #203
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, true,  8, 1, 17, 4,  0, 0}, // #204
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #205
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #206
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("CGHSI_CGRL")         2, false, false,  4, 2,  6, 3,  0, 0}, // #208
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("CHF_CHSI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #211
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #212
  {DBGFIELD("CLFI_CLFIMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false,  4, 2,  6, 3,  0, 0}, // #214
  {DBGFIELD("CLGF_CLGFRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #215
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #217
  {DBGFIELD("CLGRL")              2, false, false,  4, 2,  6, 3,  0, 0}, // #218
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false,  4, 2,  6, 3,  0, 0}, // #219
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("CLI_CLIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #221
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("CLRL")               2, false, false,  4, 2,  6, 3,  0, 0}, // #223
  {DBGFIELD("CH_CHRL_CHY")        2, false, false,  4, 2, 22, 3,  0, 0}, // #224
  {DBGFIELD("CGH_CGHRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #225
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 21, 5,  0, 0}, // #226
  {DBGFIELD("CGF_CGFRL")          2, false, false,  4, 2, 22, 3,  0, 0}, // #227
  {DBGFIELD("CGFR")               1, false, false,  1, 1, 52, 2,  0, 0}, // #228
  {DBGFIELD("CLC")                3, true, true, 17, 2, 122, 5,  0, 0}, // #229
  {DBGFIELD("CLCL_CLCLE_CLCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #230
  {DBGFIELD("CLST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #231
  {DBGFIELD("TM_TMY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #232
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("TMHH_TMHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #234
  {DBGFIELD("TMHL_TMHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("TMLH_TMLH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #236
  {DBGFIELD("TMLL_TMLL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("CLM_CLMH_CLMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #238
  {DBGFIELD("PFD_PFDRL")          1, false, false,  3, 1,  2, 1,  0, 0}, // #239
  {DBGFIELD("BPP")                1, false, false,  3, 1,  2, 1,  0, 0}, // #240
  {DBGFIELD("BPRP")               1, false, false,  3, 1,  2, 1,  0, 0}, // #241
  {DBGFIELD("NIAI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #242
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  3, 2,  0, 0}, // #243
  {DBGFIELD("LAA_LAAG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #244
  {DBGFIELD("LAAL_LAALG")         2, false, false,  4, 2,  6, 3,  0, 0}, // #245
  {DBGFIELD("LAN_LANG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #246
  {DBGFIELD("LAO_LAOG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #247
  {DBGFIELD("LAX_LAXG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #248
  {DBGFIELD("TS")                 2, false, true,  4, 2,  6, 4,  0, 0}, // #249
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 21, 5,  0, 0}, // #250
  {DBGFIELD("CDS_CDSY")           6, true, true, 27, 2, 127, 8,  0, 0}, // #251
  {DBGFIELD("CDSG")               8, true, true, 29, 2, 135, 10,  0, 0}, // #252
  {DBGFIELD("CSST")               1, true, true,  1, 1, 42, 3,  0, 0}, // #253
  {DBGFIELD("PLO")                1, true, true,  3, 1, 32, 3,  0, 0}, // #254
  {DBGFIELD("LPQ")                2, true, true, 16, 1, 145, 4,  0, 0}, // #255
  {DBGFIELD("STPQ")               4, true, true, 31, 2, 149, 6,  0, 0}, // #256
  {DBGFIELD("LPD_LPDG")           2, true, true, 16, 1, 145, 4,  0, 0}, // #257
  {DBGFIELD("TR_TRE_TRT_TRTE_TRTEOpt_TRTR_TRTRE_TRTREOpt") 1, true, true,  1, 1, 42, 3,  0, 0}, // #258
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 1, true, true,  1, 1, 42, 3,  0, 0}, // #259
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 1, true, true,  1, 1, 42, 3,  0, 0}, // #260
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 1, true, true,  1, 1, 42, 3,  0, 0}, // #261
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 1, true, true,  1, 1, 42, 3,  0, 0}, // #262
  {DBGFIELD("KIMD_KLMD_KMAC_PCC_PPNO") 0, false, false,  0, 0,  0, 0,  0, 0}, // #263
  {DBGFIELD("CVB_CVBG_CVBY")      3, true, true, 33, 3, 155, 5,  0, 0}, // #264
  {DBGFIELD("CVD_CVDG_CVDY")      3, true, true, 36, 2, 160, 5,  0, 0}, // #265
  {DBGFIELD("MVN_MVO_MVZ")        1, true, true,  3, 1, 32, 3,  0, 0}, // #266
  {DBGFIELD("PACK_PKA_PKU")       1, true, true,  3, 1, 32, 3,  0, 0}, // #267
  {DBGFIELD("UNPK_UNPKA_UNPKU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #268
  {DBGFIELD("AP_SP_ZAP")          7, true, true, 38, 4, 165, 9,  0, 0}, // #269
  {DBGFIELD("DP_MP")              7, true, true, 38, 4, 174, 9,  0, 0}, // #270
  {DBGFIELD("SRP")                5, true, true, 42, 4, 183, 7,  0, 0}, // #271
  {DBGFIELD("CP")                 5, true, true, 46, 3, 190, 7,  0, 0}, // #272
  {DBGFIELD("TP")                 3, true, true, 49, 3, 197, 5,  0, 0}, // #273
  {DBGFIELD("ED_EDMK")            1, true, true,  3, 1, 32, 3,  0, 0}, // #274
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1,  2, 1,  0, 0}, // #275
  {DBGFIELD("LAE_LAEY")           2, true, true,  4, 2, 202, 4,  0, 0}, // #276
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  3, 1, 32, 3,  0, 0}, // #277
  {DBGFIELD("IPM")                1, false, true,  1, 1, 18, 3,  0, 0}, // #278
  {DBGFIELD("SPM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #279
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2, 206, 5,  0, 0}, // #280
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 1,  0, 0}, // #281
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  3, 2,  0, 0}, // #282
  {DBGFIELD("BSM")                2, true, true,  4, 2,  6, 4,  0, 0}, // #283
  {DBGFIELD("BASSM")              3, true, true, 10, 2, 21, 5,  0, 0}, // #284
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 7, true, true, 52, 2, 211, 9,  0, 0}, // #285
  {DBGFIELD("TEND")               1, true, true,  3, 1,  3, 2,  0, 0}, // #286
  {DBGFIELD("TABORT")             1, true, true,  3, 1,  3, 2,  0, 0}, // #287
  {DBGFIELD("ETND")               1, false, false,  1, 1,  1, 1,  0, 0}, // #288
  {DBGFIELD("NTSTG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #289
  {DBGFIELD("PPA")                1, false, false,  1, 1,  1, 1,  0, 0}, // #290
  {DBGFIELD("FLOGR")              1, true, true,  1, 1, 80, 3,  0, 0}, // #291
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 18, 2,  0, 0}, // #292
  {DBGFIELD("AEXT128_64")         1, false, false,  1, 1,  1, 1,  0, 0}, // #293
  {DBGFIELD("ZEXT128_32_ZEXT128_64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #294
  {DBGFIELD("SRST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #295
  {DBGFIELD("SRSTU")              1, false, false,  3, 1, 32, 2,  0, 0}, // #296
  {DBGFIELD("CUSE")               1, true, true,  3, 1, 32, 3,  0, 0}, // #297
  {DBGFIELD("CFC")                1, true, true,  3, 1, 32, 3,  0, 0}, // #298
  {DBGFIELD("UPT")                1, true, true,  3, 1, 32, 3,  0, 0}, // #299
  {DBGFIELD("CKSM")               1, true, true,  3, 1, 32, 3,  0, 0}, // #300
  {DBGFIELD("CMPSC")              1, true, true,  3, 1, 32, 3,  0, 0}, // #301
  {DBGFIELD("MVCK")               1, true, true,  3, 1, 208, 3,  0, 0}, // #302
  {DBGFIELD("MC")                 1, false, false,  1, 1,  1, 1,  0, 0}, // #303
  {DBGFIELD("ECAG")               1, false, false,  1, 1, 42, 2,  0, 0}, // #304
  {DBGFIELD("ECTG")               2, false, false,  4, 2, 220, 3,  0, 0}, // #305
  {DBGFIELD("EPSW")               1, false, false,  1, 1, 42, 2,  0, 0}, // #306
  {DBGFIELD("EX_EXRL")            1, true, true,  3, 1,  3, 2,  0, 0}, // #307
  {DBGFIELD("PR")                 1, false, false,  1, 1, 42, 2,  0, 0}, // #308
  {DBGFIELD("STCK_STCKF")         3, true, true, 17, 2, 122, 5,  0, 0}, // #309
  {DBGFIELD("STCKE")              6, true, true, 40, 2, 223, 8,  0, 0}, // #310
  {DBGFIELD("STFLE")              2, false, false,  4, 2,  6, 3,  0, 0}, // #311
  {DBGFIELD("SVC")                1, false, false,  1, 1, 42, 2,  0, 0}, // #312
  {DBGFIELD("STRAG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #313
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #314
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #315
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #316
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #317
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 1,  0, 0}, // #318
  {DBGFIELD("LZXR")               2, true, true,  8, 1, 51, 4,  0, 0}, // #319
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 1,  0, 0}, // #320
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #321
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 18, 2,  0, 0}, // #322
  {DBGFIELD("LXR")                2, true, true,  8, 1, 51, 4,  0, 0}, // #323
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 39, 1, 30, 1,  0, 0}, // #324
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #325
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #326
  {DBGFIELD("LTXBR")              2, true, true, 19, 1, 231, 4,  0, 0}, // #327
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 19, 1, 231, 4,  0, 0}, // #328
  {DBGFIELD("CPSDRdd_CPSDRds")    2, true, true,  8, 1, 74, 4,  0, 0}, // #329
  {DBGFIELD("CPSDRsd_CPSDRss")    2, true, true,  8, 1, 74, 4,  0, 0}, // #330
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1,  2, 1,  0, 0}, // #331
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1,  2, 1,  0, 0}, // #332
  {DBGFIELD("LX")                 1, false, false,  3, 1,  2, 1,  0, 0}, // #333
  {DBGFIELD("STD_STDY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #334
  {DBGFIELD("STE_STEY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #335
  {DBGFIELD("STX")                2, false, false,  4, 2,  6, 3,  0, 0}, // #336
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #337
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 54, 1, 235, 3,  0, 0}, // #338
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 54, 1, 235, 3,  0, 0}, // #339
  {DBGFIELD("LDEB")               2, false, false, 55, 2, 238, 3,  0, 0}, // #340
  {DBGFIELD("LDEBR")              1, false, false, 39, 1, 30, 1,  0, 0}, // #341
  {DBGFIELD("LXDB_LXEB")          3, true, true, 57, 2, 241, 5,  0, 0}, // #342
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 19, 1, 246, 4,  0, 0}, // #343
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, true, 59, 2, 250, 4,  0, 0}, // #344
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, true, 59, 2, 250, 4,  0, 0}, // #345
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 61, 2, 254, 5,  0, 0}, // #346
  {DBGFIELD("CELFBR_CELGBR")      2, true, true, 59, 2, 250, 4,  0, 0}, // #347
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, true, 59, 2, 250, 4,  0, 0}, // #348
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 61, 2, 254, 5,  0, 0}, // #349
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, true, 59, 2, 259, 4,  0, 0}, // #350
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, true, 59, 2, 259, 4,  0, 0}, // #351
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 63, 2, 263, 5,  0, 0}, // #352
  {DBGFIELD("CLFEBR")             2, true, true, 59, 2, 268, 4,  0, 0}, // #353
  {DBGFIELD("CLFDBR")             2, true, true, 59, 2, 268, 4,  0, 0}, // #354
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, true, 59, 2, 268, 4,  0, 0}, // #355
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 63, 2, 263, 5,  0, 0}, // #356
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #357
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #358
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #359
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #360
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #361
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 19, 1, 231, 4,  0, 0}, // #362
  {DBGFIELD("SQDB_SQEB")          2, false, false, 55, 2, 272, 3,  0, 0}, // #363
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 39, 1, 275, 2,  0, 0}, // #364
  {DBGFIELD("SQXBR")              2, true, true, 19, 1, 277, 4,  0, 0}, // #365
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #366
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #367
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 19, 1, 281, 4,  0, 0}, // #368
  {DBGFIELD("ADB_AEB")            2, false, false, 55, 2, 238, 3,  0, 0}, // #369
  {DBGFIELD("ADBR_AEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #370
  {DBGFIELD("AXBR")               2, true, true, 19, 1, 285, 4,  0, 0}, // #371
  {DBGFIELD("SDB_SEB")            2, false, false, 55, 2, 238, 3,  0, 0}, // #372
  {DBGFIELD("SDBR_SEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #373
  {DBGFIELD("SXBR")               2, true, true, 19, 1, 285, 4,  0, 0}, // #374
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 55, 2, 238, 3,  0, 0}, // #375
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 39, 1, 30, 1,  0, 0}, // #376
  {DBGFIELD("MXDB")               3, true, true, 57, 2, 241, 5,  0, 0}, // #377
  {DBGFIELD("MXDBR")              2, true, true, 19, 1, 246, 4,  0, 0}, // #378
  {DBGFIELD("MXBR")               2, true, true, 19, 1, 277, 4,  0, 0}, // #379
  {DBGFIELD("MAEB_MSEB")          2, true, true, 55, 2, 289, 4,  0, 0}, // #380
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #381
  {DBGFIELD("MADB_MSDB")          2, true, true, 55, 2, 289, 4,  0, 0}, // #382
  {DBGFIELD("MADBR_MSDBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #383
  {DBGFIELD("DDB_DEB")            2, false, false, 55, 2, 272, 3,  0, 0}, // #384
  {DBGFIELD("DDBR_DEBR")          1, false, false, 39, 1, 275, 2,  0, 0}, // #385
  {DBGFIELD("DXBR")               2, true, true, 19, 1, 277, 4,  0, 0}, // #386
  {DBGFIELD("DIDBR_DIEBR")        1, true, true, 39, 1, 293, 3,  0, 0}, // #387
  {DBGFIELD("CDB_CEB_KDB_KEB")    2, false, false, 55, 2, 238, 3,  0, 0}, // #388
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 39, 1, 30, 1,  0, 0}, // #389
  {DBGFIELD("CXBR_KXBR")          2, false, false, 54, 1, 296, 3,  0, 0}, // #390
  {DBGFIELD("TCDB_TCEB")          2, false, false, 55, 2, 299, 3,  0, 0}, // #391
  {DBGFIELD("TCXB")               3, true, true, 57, 2, 241, 5,  0, 0}, // #392
  {DBGFIELD("EFPC")               2, true, true,  4, 2,  1, 4,  0, 0}, // #393
  {DBGFIELD("STFPC")              1, true, true,  3, 1, 199, 3,  0, 0}, // #394
  {DBGFIELD("SFPC")               1, true, true,  3, 1, 199, 3,  0, 0}, // #395
  {DBGFIELD("LFPC")               2, true, true, 16, 1, 151, 4,  0, 0}, // #396
  {DBGFIELD("SFASR")              1, true, true,  1, 1, 42, 3,  0, 0}, // #397
  {DBGFIELD("LFAS")               2, true, true,  4, 2, 31, 4,  0, 0}, // #398
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true,  1, 1, 52, 3,  0, 0}, // #399
  {DBGFIELD("LTDR_LTER")          1, false, false, 39, 1, 30, 1,  0, 0}, // #400
  {DBGFIELD("LTXR")               2, true, true, 19, 1, 231, 4,  0, 0}, // #401
  {DBGFIELD("LEDR_LRER")          1, false, false, 39, 1, 30, 1,  0, 0}, // #402
  {DBGFIELD("LEXR")               1, false, false, 39, 1, 30, 1,  0, 0}, // #403
  {DBGFIELD("LDXR_LRDR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #404
  {DBGFIELD("LDE")                1, false, false,  3, 1,  2, 1,  0, 0}, // #405
  {DBGFIELD("LDER")               1, false, false,  1, 1,  1, 1,  0, 0}, // #406
  {DBGFIELD("LXD_LXE")            3, true, true, 57, 2, 241, 5,  0, 0}, // #407
  {DBGFIELD("LXDR_LXER")          2, true, true, 19, 1, 246, 4,  0, 0}, // #408
  {DBGFIELD("CEFR_CEGR")          2, true, true, 59, 2, 250, 4,  0, 0}, // #409
  {DBGFIELD("CDFR_CDGR")          2, true, true, 59, 2, 250, 4,  0, 0}, // #410
  {DBGFIELD("CXFR_CXGR")          3, true, true, 61, 2, 254, 5,  0, 0}, // #411
  {DBGFIELD("CFDR_CFER")          2, true, true, 59, 2, 259, 4,  0, 0}, // #412
  {DBGFIELD("CGDR_CGER")          2, true, true, 59, 2, 259, 4,  0, 0}, // #413
  {DBGFIELD("CFXR_CGXR")          3, true, true, 63, 2, 263, 5,  0, 0}, // #414
  {DBGFIELD("THDER_THDR")         1, false, false, 39, 1, 30, 1,  0, 0}, // #415
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 39, 1, 30, 1,  0, 0}, // #416
  {DBGFIELD("LCDR_LNDR_LPDR")     1, false, false, 39, 1, 30, 1,  0, 0}, // #417
  {DBGFIELD("LCER_LNER_LPER")     1, false, false, 39, 1, 30, 1,  0, 0}, // #418
  {DBGFIELD("LCXR_LNXR_LPXR")     2, true, true, 19, 1, 231, 4,  0, 0}, // #419
  {DBGFIELD("HDR_HER")            1, false, false, 39, 1, 30, 1,  0, 0}, // #420
  {DBGFIELD("SQD_SQE")            2, false, false, 55, 2, 272, 3,  0, 0}, // #421
  {DBGFIELD("SQDR_SQER")          1, false, false, 39, 1, 275, 2,  0, 0}, // #422
  {DBGFIELD("SQXR")               2, true, true, 19, 1, 277, 4,  0, 0}, // #423
  {DBGFIELD("FIER")               1, false, false, 39, 1, 30, 1,  0, 0}, // #424
  {DBGFIELD("FIDR")               1, false, false, 39, 1, 30, 1,  0, 0}, // #425
  {DBGFIELD("FIXR")               2, true, true, 19, 1, 281, 4,  0, 0}, // #426
  {DBGFIELD("AD_AE_AU_AW")        2, false, false, 55, 2, 238, 3,  0, 0}, // #427
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 39, 1, 30, 1,  0, 0}, // #428
  {DBGFIELD("AXR")                2, true, true, 19, 1, 285, 4,  0, 0}, // #429
  {DBGFIELD("SD_SE_SU_SW")        2, false, false, 55, 2, 238, 3,  0, 0}, // #430
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 39, 1, 30, 1,  0, 0}, // #431
  {DBGFIELD("SXR")                2, true, true, 19, 1, 285, 4,  0, 0}, // #432
  {DBGFIELD("MD_MDE_ME_MEE")      2, false, false, 55, 2, 238, 3,  0, 0}, // #433
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 39, 1, 30, 1,  0, 0}, // #434
  {DBGFIELD("MXD")                3, true, true, 57, 2, 241, 5,  0, 0}, // #435
  {DBGFIELD("MXDR")               2, true, true, 19, 1, 246, 4,  0, 0}, // #436
  {DBGFIELD("MXR")                2, true, true, 19, 1, 277, 4,  0, 0}, // #437
  {DBGFIELD("MY_MYH_MYL")         3, true, true, 57, 2, 241, 5,  0, 0}, // #438
  {DBGFIELD("MYHR_MYLR_MYR")      2, true, true, 19, 1, 246, 4,  0, 0}, // #439
  {DBGFIELD("MAE_MSE")            2, true, true, 55, 2, 289, 4,  0, 0}, // #440
  {DBGFIELD("MAER_MSER")          1, true, true, 39, 1, 30, 2,  0, 0}, // #441
  {DBGFIELD("MAD_MSD")            2, true, true, 55, 2, 289, 4,  0, 0}, // #442
  {DBGFIELD("MADR_MSDR")          1, true, true, 39, 1, 30, 2,  0, 0}, // #443
  {DBGFIELD("MAY_MAYH_MAYL")      3, true, true, 57, 2, 302, 5,  0, 0}, // #444
  {DBGFIELD("MAYHR_MAYLR_MAYR")   2, true, true, 19, 1, 83, 3,  0, 0}, // #445
  {DBGFIELD("DD_DE")              2, false, false, 55, 2, 272, 3,  0, 0}, // #446
  {DBGFIELD("DDR_DER")            1, false, false, 39, 1, 275, 2,  0, 0}, // #447
  {DBGFIELD("DXR")                2, true, true, 19, 1, 277, 4,  0, 0}, // #448
  {DBGFIELD("CD_CE")              2, false, false, 55, 2, 238, 3,  0, 0}, // #449
  {DBGFIELD("CDR_CER")            1, false, false, 39, 1, 30, 1,  0, 0}, // #450
  {DBGFIELD("CXR")                2, false, false, 54, 1, 307, 3,  0, 0}, // #451
  {DBGFIELD("LTDTR")              1, false, false, 33, 1, 310, 2,  0, 0}, // #452
  {DBGFIELD("LTXTR")              2, true, true, 65, 2, 312, 4,  0, 0}, // #453
  {DBGFIELD("LEDTR")              1, false, false, 33, 1, 316, 2,  0, 0}, // #454
  {DBGFIELD("LDXTR")              2, false, false, 65, 1, 318, 3,  0, 0}, // #455
  {DBGFIELD("LDETR")              1, false, false, 33, 1, 310, 2,  0, 0}, // #456
  {DBGFIELD("LXDTR")              2, true, true, 65, 2, 312, 4,  0, 0}, // #457
  {DBGFIELD("CDFTR_CDGTR_CDGTRA") 2, true, true, 33, 2, 321, 4,  0, 0}, // #458
  {DBGFIELD("CXFTR_CXGTR_CXGTRA") 3, true, true, 67, 3, 325, 5,  0, 0}, // #459
  {DBGFIELD("CDLFTR_CDLGTR")      2, true, true, 33, 2, 330, 4,  0, 0}, // #460
  {DBGFIELD("CXLFTR_CXLGTR")      3, true, true, 67, 3, 334, 5,  0, 0}, // #461
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, true, 33, 2, 321, 4,  0, 0}, // #462
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, true, 70, 2, 339, 5,  0, 0}, // #463
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, true, 33, 2, 321, 4,  0, 0}, // #464
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, true, 70, 2, 339, 5,  0, 0}, // #465
  {DBGFIELD("CDSTR_CDUTR")        2, true, true, 33, 2, 344, 4,  0, 0}, // #466
  {DBGFIELD("CXSTR_CXUTR")        4, true, true, 72, 3, 348, 6,  0, 0}, // #467
  {DBGFIELD("CSDTR_CUDTR")        2, true, true, 33, 2, 344, 4,  0, 0}, // #468
  {DBGFIELD("CSXTR_CUXTR")        4, true, true, 72, 3, 348, 6,  0, 0}, // #469
  {DBGFIELD("CDZT")               2, true, true, 75, 3, 354, 4,  0, 0}, // #470
  {DBGFIELD("CXZT")               4, true, true, 78, 3, 358, 6,  0, 0}, // #471
  {DBGFIELD("CZDT")               3, true, true, 33, 3, 364, 5,  0, 0}, // #472
  {DBGFIELD("CZXT")               4, true, true, 81, 3, 369, 6,  0, 0}, // #473
  {DBGFIELD("CDPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #474
  {DBGFIELD("CXPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #475
  {DBGFIELD("CPDT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #476
  {DBGFIELD("CPXT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #477
  {DBGFIELD("PFPO")               1, true, true,  3, 1, 32, 3,  0, 0}, // #478
  {DBGFIELD("FIDTR")              1, false, false, 33, 1, 310, 2,  0, 0}, // #479
  {DBGFIELD("FIXTR")              2, true, true, 65, 2, 312, 4,  0, 0}, // #480
  {DBGFIELD("EEDTR")              2, true, true, 33, 2, 375, 4,  0, 0}, // #481
  {DBGFIELD("EEXTR")              2, true, true, 33, 2, 375, 4,  0, 0}, // #482
  {DBGFIELD("ESDTR")              2, true, true, 33, 2, 375, 4,  0, 0}, // #483
  {DBGFIELD("ESXTR")              3, true, true, 70, 2, 379, 5,  0, 0}, // #484
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #485
  {DBGFIELD("AXTR_AXTRA")         2, true, true, 65, 2, 326, 4,  0, 0}, // #486
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #487
  {DBGFIELD("SXTR_SXTRA")         2, true, true, 65, 2, 326, 4,  0, 0}, // #488
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #489
  {DBGFIELD("MXTR_MXTRA")         2, true, true, 65, 2, 326, 4,  0, 0}, // #490
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #491
  {DBGFIELD("DXTR_DXTRA")         2, true, true, 65, 2, 326, 4,  0, 0}, // #492
  {DBGFIELD("QADTR")              1, false, false, 33, 1, 316, 2,  0, 0}, // #493
  {DBGFIELD("QAXTR")              2, true, true, 65, 2, 326, 4,  0, 0}, // #494
  {DBGFIELD("RRDTR")              2, false, false, 33, 2, 315, 3,  0, 0}, // #495
  {DBGFIELD("RRXTR")              3, true, true, 67, 3, 325, 5,  0, 0}, // #496
  {DBGFIELD("SLDT_SRDT")          2, false, false, 84, 2, 365, 3,  0, 0}, // #497
  {DBGFIELD("SLXT_SRXT")          3, true, true, 86, 3, 384, 5,  0, 0}, // #498
  {DBGFIELD("IEDTR")              2, false, false, 33, 2, 330, 3,  0, 0}, // #499
  {DBGFIELD("IEXTR")              3, true, true, 67, 3, 389, 5,  0, 0}, // #500
  {DBGFIELD("CDTR_KDTR")          1, false, false, 33, 1, 331, 2,  0, 0}, // #501
  {DBGFIELD("CXTR_KXTR")          2, true, true, 65, 1, 371, 4,  0, 0}, // #502
  {DBGFIELD("CEDTR")              1, false, false, 33, 1, 394, 2,  0, 0}, // #503
  {DBGFIELD("CEXTR")              1, false, false, 33, 1, 396, 2,  0, 0}, // #504
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 2, false, false, 84, 2, 398, 3,  0, 0}, // #505
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 86, 3, 384, 5,  0, 0}, // #506
  {DBGFIELD("VLR_VLR32_VLR64")    0, false, false,  0, 0,  0, 0,  0, 0}, // #507
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #508
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #509
  {DBGFIELD("VLVGP_VLVGP32")      0, false, false,  0, 0,  0, 0,  0, 0}, // #510
  {DBGFIELD("VZERO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #511
  {DBGFIELD("VONE")               0, false, false,  0, 0,  0, 0,  0, 0}, // #512
  {DBGFIELD("VGBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #513
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #514
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #515
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #516
  {DBGFIELD("VL_VLBB_VLL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #517
  {DBGFIELD("VL32_VL64")          0, false, false,  0, 0,  0, 0,  0, 0}, // #518
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #519
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #520
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #521
  {DBGFIELD("VGEF_VGEG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #522
  {DBGFIELD("VLM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #523
  {DBGFIELD("VST_VST32_VST64_VSTL") 0, false, false,  0, 0,  0, 0,  0, 0}, // #524
  {DBGFIELD("VSTEF_VSTEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #525
  {DBGFIELD("VSTEB_VSTEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #526
  {DBGFIELD("VSTM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("VSCEF_VSCEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("VPERM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #531
  {DBGFIELD("VPDI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #533
  {DBGFIELD("VSEL")               0, false, false,  0, 0,  0, 0,  0, 0}, // #534
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #535
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #539
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #540
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #541
  {DBGFIELD("VUPL_VUPLB_VUPLF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #542
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VN_VNC_VNO")         0, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VO")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VCKSM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #553
  {DBGFIELD("VX")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("VGFM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #555
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #556
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("VMAL_VMALB_VMALF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #564
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #565
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #569
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("VML_VMLB_VMLF")      0, false, false,  0, 0,  0, 0,  0, 0}, // #573
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #576
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #577
  {DBGFIELD("VPOPCT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #578
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #579
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #581
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #582
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #583
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #584
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #585
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("VSL_VSLDB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("VSLB")               0, false, false,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("VSRA_VSRL")          0, false, false,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("VSRAB_VSRLB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("VSUM_VSUMB_VSUMH")   0, false, false,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 0, false, false,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("VTM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("VCDG_VCDGB_VCDLG_VCDLGB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("WCDGB_WCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("VCGD_VCLGD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("VFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("WFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("VCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("WCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("VFA_VFI_VFM_VFS")    0, false, false,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("VFIDB_VFMDB_VFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("WFIDB_WFMDB_WFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("VCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("WCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("WFLCDB_WFLNDB_WFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("VFMA_VFMS")          0, false, false,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("VFMADB_VFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("WFMADB_WFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("VFPSO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("VFPSODB_WFPSODB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("VFTCI_VFTCIDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("WFTCIDB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("VLDE_VLED")          0, false, false,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("VLDEB_VLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("WLDEB_WLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("VFD")                0, false, false,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("VFDDB_WFDDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("VFSQ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("VFSQDB_WFSQDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("VFCE_VFCH_VFCHE")    0, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("WFC_WFK")            0, false, false,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("WFCDB_WFKDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("LEFR")               0, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("LFER")               0, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("VFAE_VFAEB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("VFAEBS")             0, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("VFAEF_VFAEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VFAEFS_VFAEHS")      0, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  3, 1,  2, 1,  0, 0}, // #660
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false,  1, 1, 52, 2,  0, 0}, // #661
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, false,  4, 2, 22, 3,  0, 0}, // #662
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, false,  4, 2,  6, 3,  0, 0}, // #663
  {DBGFIELD("ALSI_ASI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #664
  {DBGFIELD("ALGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #665
  {DBGFIELD("KIMD_KLMD_KMAC_PCC") 1, true, true,  1, 1, 42, 3,  0, 0}, // #666
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 1,  0, 0}, // #667
  {DBGFIELD("STCK")               3, true, true, 17, 2, 122, 5,  0, 0} // #668
}; // ZEC12ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc Z13ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("ADJDYNALLOC")        1, false, false, 33, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("BRC_BRCAsm_BRCL_BRCLAsm_CallBRCL") 1, false, false,  3, 1,  1, 1,  0, 0}, // #2
  {DBGFIELD("CallJG_J_JAsmE_JAsmH_JAsmHE_JAsmL_JAsmLE_JAsmLH_JAsmM_JAsmNE_JAsmNH_JAsmNHE_JAsmNL_JAsmNLE_JAsmNLH_JAsmNM_JAsmNO_JAsmNP_JAsmNZ_JAsmO_JAsmP_JAsmZ_JG_JGAsmE_JGAsmH_JGAsmHE_JGAsmL_JGAsmLE_JGAsmLH_JGAsmM_JGAsmNE_JGAsmNH_JGAsmNHE_JGAsmNL_JGAsmNLE_JGAsmNLH_JGAsmNM_JGAsmNO_JGAsmNP_JGAsmNZ_JGAsmO_JGAsmP_JGAsmZ") 1, false, false,  3, 1,  1, 1,  0, 0}, // #3
  {DBGFIELD("BC_BCAsm_BCR_BCRAsm_CallBCR") 1, false, false, 39, 1,  1, 1,  0, 0}, // #4
  {DBGFIELD("B_BAsmE_BAsmH_BAsmHE_BAsmL_BAsmLE_BAsmLH_BAsmM_BAsmNE_BAsmNH_BAsmNHE_BAsmNL_BAsmNLE_BAsmNLH_BAsmNM_BAsmNO_BAsmNP_BAsmNZ_BAsmO_BAsmP_BAsmZ_BR_BRAsmE_BRAsmH_BRAsmHE_BRAsmL_BRAsmLE_BRAsmLH_BRAsmM_BRAsmNE_BRAsmNH_BRAsmNHE_BRAsmNL_BRAsmNLE_BRAsmNLH_BRAsmNM_BRAsmNO_BRAsmNP_BRAsmNZ_BRAsmO_BRAsmP_BRAsmZ_CallBR") 1, false, false, 39, 1,  1, 1,  0, 0}, // #5
  {DBGFIELD("BRCT_BRCTG")         1, false, true, 33, 1,  4, 2,  0, 0}, // #6
  {DBGFIELD("BRCTH")              2, true, true, 38, 2, 51, 4,  0, 0}, // #7
  {DBGFIELD("BCT_BCTG_BCTGR_BCTR") 2, true, true, 38, 2, 51, 4,  0, 0}, // #8
  {DBGFIELD("BRXH_BRXHG_BRXLE_BRXLG_BXH_BXHG_BXLE_BXLEG") 4, true, true, 65, 2, 401, 6,  0, 0}, // #9
  {DBGFIELD("CGIJ_CGIJAsm_CGIJAsmE_CGIJAsmH_CGIJAsmHE_CGIJAsmL_CGIJAsmLE_CGIJAsmLH_CGIJAsmNE_CGIJAsmNH_CGIJAsmNHE_CGIJAsmNL_CGIJAsmNLE_CGIJAsmNLH_CGRJ_CGRJAsm_CGRJAsmE_CGRJAsmH_CGRJAsmHE_CGRJAsmL_CGRJAsmLE_CGRJAsmLH_CGRJAsmNE_CGRJAsmNH_CGRJAsmNHE_CGRJAsmNL_CGRJAsmNLE_CGRJAsmNLH_CIJ_CIJAsm_CIJAsmE_CIJAsmH_CIJAsmHE_CIJAsmL_CIJAsmLE_CIJAsmLH_CIJAsmNE_CIJAsmNH_CIJAsmNHE_CIJAsmNL_CIJAsmNLE_CIJAsmNLH_CLGIJ_CLGIJAsm_CLGIJAsmE_CLGIJAsmH_CLGIJAsmHE_CLGIJAsmL_CLGIJAsmLE_CLGIJAsmLH_CLGIJAsmNE_CLGIJAsmNH_CLGIJAsmNHE_CLGIJAsmNL_CLGIJAsmNLE_CLGIJAsmNLH_CLGRJ_CLGRJAsm_CLGRJAsmE_CLGRJAsmH_CLGRJAsmHE_CLGRJAsmL_CLGRJAsmLE_CLGRJAsmLH_CLGRJAsmNE_CLGRJAsmNH_CLGRJAsmNHE_CLGRJAsmNL_CLGRJAsmNLE_CLGRJAsmNLH_CLIJ_CLIJAsm_CLIJAsmE_CLIJAsmH_CLIJAsmHE_CLIJAsmL_CLIJAsmLE_CLIJAsmLH_CLIJAsmNE_CLIJAsmNH_CLIJAsmNHE_CLIJAsmNL_CLIJAsmNLE_CLIJAsmNLH_CLRJ_CLRJAsm_CLRJAsmE_CLRJAsmH_CLRJAsmHE_CLRJAsmL_CLRJAsmLE_CLRJAsmLH_CLRJAsmNE_CLRJAsmNH_CLRJAsmNHE_CLRJAsmNL_CLRJAsmNLE_CLRJAsmNLH_CRJ_CRJAsm_CRJAsmE_CRJAsmH_CRJAsmHE_CRJAsmL_CRJAsmLE_CRJAsmLH_CRJAsmNE_CRJAsmNH_CRJAsmNHE_CRJAsmNL_CRJAsmNLE_CRJAsmNLH") 1, false, false, 39, 1,  1, 1,  0, 0}, // #10
  {DBGFIELD("CGIB_CGIBAsm_CGIBAsmE_CGIBAsmH_CGIBAsmHE_CGIBAsmL_CGIBAsmLE_CGIBAsmLH_CGIBAsmNE_CGIBAsmNH_CGIBAsmNHE_CGIBAsmNL_CGIBAsmNLE_CGIBAsmNLH_CGIBCall_CGIBReturn_CGRB_CGRBAsm_CGRBAsmE_CGRBAsmH_CGRBAsmHE_CGRBAsmL_CGRBAsmLE_CGRBAsmLH_CGRBAsmNE_CGRBAsmNH_CGRBAsmNHE_CGRBAsmNL_CGRBAsmNLE_CGRBAsmNLH_CGRBCall_CGRBReturn_CIB_CIBAsm_CIBAsmE_CIBAsmH_CIBAsmHE_CIBAsmL_CIBAsmLE_CIBAsmLH_CIBAsmNE_CIBAsmNH_CIBAsmNHE_CIBAsmNL_CIBAsmNLE_CIBAsmNLH_CIBCall_CIBReturn_CLGIB_CLGIBAsm_CLGIBAsmE_CLGIBAsmH_CLGIBAsmHE_CLGIBAsmL_CLGIBAsmLE_CLGIBAsmLH_CLGIBAsmNE_CLGIBAsmNH_CLGIBAsmNHE_CLGIBAsmNL_CLGIBAsmNLE_CLGIBAsmNLH_CLGIBCall_CLGIBReturn_CLGRB_CLGRBAsm_CLGRBAsmE_CLGRBAsmH_CLGRBAsmHE_CLGRBAsmL_CLGRBAsmLE_CLGRBAsmLH_CLGRBAsmNE_CLGRBAsmNH_CLGRBAsmNHE_CLGRBAsmNL_CLGRBAsmNLE_CLGRBAsmNLH_CLGRBCall_CLGRBReturn_CLIB_CLIBAsm_CLIBAsmE_CLIBAsmH_CLIBAsmHE_CLIBAsmL_CLIBAsmLE_CLIBAsmLH_CLIBAsmNE_CLIBAsmNH_CLIBAsmNHE_CLIBAsmNL_CLIBAsmNLE_CLIBAsmNLH_CLIBCall_CLIBReturn_CLRB_CLRBAsm_CLRBAsmE_CLRBAsmH_CLRBAsmHE_CLRBAsmL_CLRBAsmLE_CLRBAsmLH_CLRBAsmNE_CLRBAsmNH_CLRBAsmNHE_CLRBAsmNL_CLRBAsmNLE_CLRBAsmNLH_CLRBCall_CLRBReturn_CRB_CRBAsm_CRBAsmE_CRBAsmH_CRBAsmHE_CRBAsmL_CRBAsmLE_CRBAsmLH_CRBAsmNE_CRBAsmNH_CRBAsmNHE_CRBAsmNL_CRBAsmNLE_CRBAsmNLH_CRBCall_CRBReturn") 2, true, true, 54, 1, 51, 4,  0, 0}, // #11
  {DBGFIELD("CondTrap_Trap")      1, false, false,  3, 1,  1, 1,  0, 0}, // #12
  {DBGFIELD("CGIT_CGITAsm_CGITAsmE_CGITAsmH_CGITAsmHE_CGITAsmL_CGITAsmLE_CGITAsmLH_CGITAsmNE_CGITAsmNH_CGITAsmNHE_CGITAsmNL_CGITAsmNLE_CGITAsmNLH_CGRT_CGRTAsm_CGRTAsmE_CGRTAsmH_CGRTAsmHE_CGRTAsmL_CGRTAsmLE_CGRTAsmLH_CGRTAsmNE_CGRTAsmNH_CGRTAsmNHE_CGRTAsmNL_CGRTAsmNLE_CGRTAsmNLH_CIT_CITAsm_CITAsmE_CITAsmH_CITAsmHE_CITAsmL_CITAsmLE_CITAsmLH_CITAsmNE_CITAsmNH_CITAsmNHE_CITAsmNL_CITAsmNLE_CITAsmNLH_CRT_CRTAsm_CRTAsmE_CRTAsmH_CRTAsmHE_CRTAsmL_CRTAsmLE_CRTAsmLH_CRTAsmNE_CRTAsmNH_CRTAsmNHE_CRTAsmNL_CRTAsmNLE_CRTAsmNLH") 1, false, false, 39, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("CLGRT_CLGRTAsm_CLGRTAsmE_CLGRTAsmH_CLGRTAsmHE_CLGRTAsmL_CLGRTAsmLE_CLGRTAsmLH_CLGRTAsmNE_CLGRTAsmNH_CLGRTAsmNHE_CLGRTAsmNL_CLGRTAsmNLE_CLGRTAsmNLH_CLRT_CLRTAsm_CLRTAsmE_CLRTAsmH_CLRTAsmHE_CLRTAsmL_CLRTAsmLE_CLRTAsmLH_CLRTAsmNE_CLRTAsmNH_CLRTAsmNHE_CLRTAsmNL_CLRTAsmNLE_CLRTAsmNLH") 1, false, false, 39, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("CLFIT_CLFITAsm_CLFITAsmE_CLFITAsmH_CLFITAsmHE_CLFITAsmL_CLFITAsmLE_CLFITAsmLH_CLFITAsmNE_CLFITAsmNH_CLFITAsmNHE_CLFITAsmNL_CLFITAsmNLE_CLFITAsmNLH_CLGIT_CLGITAsm_CLGITAsmE_CLGITAsmH_CLGITAsmHE_CLGITAsmL_CLGITAsmLE_CLGITAsmLH_CLGITAsmNE_CLGITAsmNH_CLGITAsmNHE_CLGITAsmNL_CLGITAsmNLE_CLGITAsmNLH") 1, false, false, 39, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("CLGT_CLGTAsm_CLGTAsmE_CLGTAsmH_CLGTAsmHE_CLGTAsmL_CLGTAsmLE_CLGTAsmLH_CLGTAsmNE_CLGTAsmNH_CLGTAsmNHE_CLGTAsmNL_CLGTAsmNLE_CLGTAsmNLH_CLT_CLTAsm_CLTAsmE_CLTAsmH_CLTAsmHE_CLTAsmL_CLTAsmLE_CLTAsmLH_CLTAsmNE_CLTAsmNH_CLTAsmNHE_CLTAsmNL_CLTAsmNLE_CLTAsmNLH") 2, false, false, 59, 2,  6, 3,  0, 0}, // #16
  {DBGFIELD("BRAS")               3, true, true, 89, 2, 16, 5,  0, 0}, // #17
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 91, 2, 16, 5,  0, 0}, // #18
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 91, 2, 16, 5,  0, 0}, // #19
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 91, 2, 16, 5,  0, 0}, // #20
  {DBGFIELD("Return")             1, false, true, 39, 1,  4, 2,  0, 0}, // #21
  {DBGFIELD("CondReturn")         1, false, false, 39, 1,  1, 1,  0, 0}, // #22
  {DBGFIELD("Select32_Select32Mux_Select64") 1, false, false, 33, 1,  1, 1,  0, 0}, // #23
  {DBGFIELD("CondStore16_CondStore16Inv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #24
  {DBGFIELD("CondStore16Mux_CondStore16MuxInv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #25
  {DBGFIELD("CondStore32_CondStore32Inv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #26
  {DBGFIELD("CondStore32Mux_CondStore32MuxInv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #27
  {DBGFIELD("CondStore64_CondStore64Inv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #28
  {DBGFIELD("CondStore8_CondStore8Inv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #29
  {DBGFIELD("CondStore8Mux_CondStore8MuxInv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #30
  {DBGFIELD("MVGHI_MVHHI_MVHI")   2, false, false, 59, 2,  6, 3,  0, 0}, // #31
  {DBGFIELD("MVI_MVIY")           2, false, false, 59, 2,  6, 3,  0, 0}, // #32
  {DBGFIELD("MVC")                4, true, true, 93, 2, 407, 6,  0, 0}, // #33
  {DBGFIELD("MVCL_MVCLE_MVCLU")   1, true, true,  1, 1, 32, 3,  0, 0}, // #34
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false, 33, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false, 33, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("INSERT_SUBREG")      1, false, false, 33, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("REG_SEQUENCE")       1, false, false, 33, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("SUBREG_TO_REG")      1, false, false, 33, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 1, false, false,  1, 1,  2, 1,  0, 0}, // #40
  {DBGFIELD("LG_LGRL")            1, false, false,  1, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("L128")               1, false, false,  1, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false, 33, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false, 33, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LGFI_LGHI")          1, false, false, 33, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LHI_LHIMux")         1, false, false, 33, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LR_LRMux")           1, false, false, 33, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LZRF_LZRG")          1, false, false,  1, 1,  2, 1,  0, 0}, // #48
  {DBGFIELD("LAT_LFHAT_LGAT")     2, false, false, 59, 2,  6, 3,  0, 0}, // #49
  {DBGFIELD("LT_LTG")             2, false, false, 33, 2,  6, 3,  0, 0}, // #50
  {DBGFIELD("LTGR_LTR")           1, false, false, 33, 1,  1, 1,  0, 0}, // #51
  {DBGFIELD("STG_STGRL")          2, false, false, 59, 2,  6, 3,  0, 0}, // #52
  {DBGFIELD("ST128")              2, false, false, 59, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false, 59, 2,  6, 3,  0, 0}, // #54
  {DBGFIELD("MVST")               1, true, true,  1, 1, 32, 3,  0, 0}, // #55
  {DBGFIELD("LOCRMux")            1, false, false, 33, 1, 52, 2,  0, 0}, // #56
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 33, 1, 52, 2,  0, 0}, // #57
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 1, false, false, 33, 1, 52, 2,  0, 0}, // #58
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 2, false, false, 33, 2, 22, 3,  0, 0}, // #59
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 2, false, false, 59, 2,  6, 3,  0, 0}, // #60
  {DBGFIELD("LBR_LGR_LHR")        1, false, false, 33, 1,  1, 1,  0, 0}, // #61
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false, 33, 1,  1, 1,  0, 0}, // #62
  {DBGFIELD("LTGF")               2, false, false, 33, 2,  6, 3,  0, 0}, // #63
  {DBGFIELD("LTGFR")              1, false, false, 33, 1,  1, 1,  0, 0}, // #64
  {DBGFIELD("LB_LBH_LBMux")       2, false, false, 33, 2,  6, 3,  0, 0}, // #65
  {DBGFIELD("LH_LHY")             2, false, false, 33, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false, 33, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LGB_LGF_LGH")        2, false, false, 33, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LGFRL_LGHRL")        2, false, false, 33, 2,  6, 3,  0, 0}, // #69
  {DBGFIELD("LLCR_LLCRMux")       1, false, false, 33, 1,  1, 1,  0, 0}, // #70
  {DBGFIELD("LLHR_LLHRMux")       1, false, false, 33, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false, 33, 1,  1, 1,  0, 0}, // #72
  {DBGFIELD("LLC_LLCMux")         1, false, false,  1, 1,  2, 1,  0, 0}, // #73
  {DBGFIELD("LLH_LLHMux")         1, false, false,  1, 1,  2, 1,  0, 0}, // #74
  {DBGFIELD("LLCH_LLHH")          2, false, false, 33, 2,  6, 3,  0, 0}, // #75
  {DBGFIELD("LLHRL")              1, false, false,  1, 1,  2, 1,  0, 0}, // #76
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  1, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLZRGF")             1, false, false,  1, 1,  2, 1,  0, 0}, // #78
  {DBGFIELD("LLGFAT_LLGTAT")      2, false, false, 59, 2,  6, 3,  0, 0}, // #79
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false, 59, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false, 59, 2,  6, 3,  0, 0}, // #81
  {DBGFIELD("STCM_STCMH_STCMY")   2, false, false, 59, 2,  6, 3,  0, 0}, // #82
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 20, 1, 35, 7,  0, 0}, // #83
  {DBGFIELD("LMD")                1, true, true, 39, 1, 42, 3,  0, 0}, // #84
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 95, 2, 45, 7,  0, 0}, // #85
  {DBGFIELD("LRVGR_LRVR")         1, false, false, 33, 1,  1, 1,  0, 0}, // #86
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false, 33, 2,  6, 3,  0, 0}, // #87
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false, 59, 2,  6, 3,  0, 0}, // #88
  {DBGFIELD("MVCIN")              1, true, true,  1, 1, 32, 3,  0, 0}, // #89
  {DBGFIELD("LA_LARL_LAY")        1, false, false, 33, 1,  1, 1,  0, 0}, // #90
  {DBGFIELD("GOT")                1, false, false, 33, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("LPGR_LPR")           1, false, false, 33, 1, 52, 2,  0, 0}, // #92
  {DBGFIELD("LNGFR_LPGFR")        2, true, false, 65, 1, 17, 4,  0, 0}, // #93
  {DBGFIELD("LNGR_LNR")           1, false, false, 33, 1, 52, 2,  0, 0}, // #94
  {DBGFIELD("LCGR_LCR")           1, false, false, 33, 1,  1, 1,  0, 0}, // #95
  {DBGFIELD("LCGFR")              2, true, false, 65, 1, 51, 4,  0, 0}, // #96
  {DBGFIELD("IC_ICY")             2, false, false, 33, 2,  6, 3,  0, 0}, // #97
  {DBGFIELD("IC32_IC32Y")         2, false, false, 33, 2,  6, 3,  0, 0}, // #98
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false, 33, 2,  6, 3,  0, 0}, // #99
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false, 33, 1,  1, 1,  0, 0}, // #100
  {DBGFIELD("IIHF_IIHF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIHH_IIHH64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIHL_IIHL64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IILF_IILF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #104
  {DBGFIELD("IILH_IILH64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("IILL_IILL64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("A_AY")               2, false, false, 33, 2,  6, 3,  0, 0}, // #107
  {DBGFIELD("AH_AHY")             2, false, false, 33, 2, 22, 3,  0, 0}, // #108
  {DBGFIELD("AIH")                1, false, false, 33, 1,  1, 1,  0, 0}, // #109
  {DBGFIELD("AFI_AFIMux")         1, false, false, 33, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AG")                 2, false, false, 33, 2,  6, 3,  0, 0}, // #111
  {DBGFIELD("AGFI")               1, false, false, 33, 1,  1, 1,  0, 0}, // #112
  {DBGFIELD("AGHI_AGHIK")         1, false, false, 33, 1,  1, 1,  0, 0}, // #113
  {DBGFIELD("AGR_AGRK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("AHI_AHIK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #115
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false, 33, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("AL_ALY")             2, false, false, 33, 2,  6, 3,  0, 0}, // #117
  {DBGFIELD("ALFI_ALHSIK")        1, false, false, 33, 1,  1, 1,  0, 0}, // #118
  {DBGFIELD("ALG_ALGF")           2, false, false, 33, 2,  6, 3,  0, 0}, // #119
  {DBGFIELD("ALGHSIK")            1, false, false, 33, 1,  1, 1,  0, 0}, // #120
  {DBGFIELD("ALGFI_ALGFR")        1, false, false, 33, 1,  1, 1,  0, 0}, // #121
  {DBGFIELD("ALGR_ALGRK")         1, false, false, 33, 1,  1, 1,  0, 0}, // #122
  {DBGFIELD("ALR_ALRK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #123
  {DBGFIELD("AR_ARK")             1, false, false, 33, 1,  1, 1,  0, 0}, // #124
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 2, false, false, 59, 2,  6, 3,  0, 0}, // #125
  {DBGFIELD("ALC_ALCG")           2, true, true, 33, 2, 22, 4,  0, 0}, // #126
  {DBGFIELD("ALCGR_ALCR")         1, true, true, 33, 1, 52, 3,  0, 0}, // #127
  {DBGFIELD("AGF")                2, false, false, 33, 2, 22, 3,  0, 0}, // #128
  {DBGFIELD("AGFR")               1, false, false, 33, 1, 52, 2,  0, 0}, // #129
  {DBGFIELD("S_SG_SY")            2, false, false, 33, 2,  6, 3,  0, 0}, // #130
  {DBGFIELD("SH_SHY")             2, false, false, 33, 2, 22, 3,  0, 0}, // #131
  {DBGFIELD("SGR_SGRK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("SLFI")               1, false, false, 33, 1,  1, 1,  0, 0}, // #133
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false, 33, 2,  6, 3,  0, 0}, // #134
  {DBGFIELD("SLGFI_SLGFR")        1, false, false, 33, 1,  1, 1,  0, 0}, // #135
  {DBGFIELD("SLGR_SLGRK")         1, false, false, 33, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("SLR_SLRK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("SR_SRK")             1, false, false, 33, 1,  1, 1,  0, 0}, // #138
  {DBGFIELD("SLB_SLBG")           2, true, true, 33, 2, 22, 4,  0, 0}, // #139
  {DBGFIELD("SLBGR_SLBR")         1, true, true, 33, 1, 52, 3,  0, 0}, // #140
  {DBGFIELD("SGF")                2, false, false, 33, 2, 22, 3,  0, 0}, // #141
  {DBGFIELD("SGFR")               1, false, false, 33, 1, 52, 2,  0, 0}, // #142
  {DBGFIELD("N_NG_NY")            2, false, false, 33, 2,  6, 3,  0, 0}, // #143
  {DBGFIELD("NGR_NGRK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #144
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false, 33, 1,  1, 1,  0, 0}, // #145
  {DBGFIELD("NI_NIY")             2, false, false, 59, 2,  6, 3,  0, 0}, // #146
  {DBGFIELD("NIHF_NIHF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #147
  {DBGFIELD("NIHH_NIHH64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #148
  {DBGFIELD("NIHL_NIHL64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #149
  {DBGFIELD("NILF_NILF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("NILH_NILH64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("NILL_NILL64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("NR_NRK")             1, false, false, 33, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("NC")                 3, true, false, 39, 2, 58, 5,  0, 0}, // #154
  {DBGFIELD("O_OG_OY")            2, false, false, 33, 2,  6, 3,  0, 0}, // #155
  {DBGFIELD("OGR_OGRK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("OI_OIY")             2, false, false, 59, 2,  6, 3,  0, 0}, // #157
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false, 33, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("OIHF_OIHF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("OIHH_OIHH64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #160
  {DBGFIELD("OIHL_OIHL64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("OILF_OILF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("OILH_OILH64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #163
  {DBGFIELD("OILL_OILL64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("OR_ORK")             1, false, false, 33, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("OC")                 3, true, false, 39, 2, 58, 5,  0, 0}, // #166
  {DBGFIELD("X_XG_XY")            2, false, false, 33, 2,  6, 3,  0, 0}, // #167
  {DBGFIELD("XI_XIY")             2, false, false, 59, 2,  6, 3,  0, 0}, // #168
  {DBGFIELD("XIFMux")             1, false, false, 33, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("XGR_XGRK")           1, false, false, 33, 1,  1, 1,  0, 0}, // #170
  {DBGFIELD("XIHF_XIHF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #171
  {DBGFIELD("XILF_XILF64")        1, false, false, 33, 1,  1, 1,  0, 0}, // #172
  {DBGFIELD("XR_XRK")             1, false, false, 33, 1,  1, 1,  0, 0}, // #173
  {DBGFIELD("XC")                 3, true, false, 39, 2, 58, 5,  0, 0}, // #174
  {DBGFIELD("MS_MSGF_MSY")        2, false, false, 33, 2, 63, 3,  0, 0}, // #175
  {DBGFIELD("MSFI_MSR")           1, false, false, 33, 1, 66, 2,  0, 0}, // #176
  {DBGFIELD("MSG")                2, false, false, 33, 2, 68, 3,  0, 0}, // #177
  {DBGFIELD("MSGR")               1, false, false, 33, 1, 29, 2,  0, 0}, // #178
  {DBGFIELD("MSGFI_MSGFR")        1, false, false, 33, 1, 66, 2,  0, 0}, // #179
  {DBGFIELD("MLG")                2, true, true, 33, 2, 71, 4,  0, 0}, // #180
  {DBGFIELD("MLGR")               1, true, true, 33, 1, 60, 3,  0, 0}, // #181
  {DBGFIELD("MGHI")               1, false, false, 33, 1, 75, 2,  0, 0}, // #182
  {DBGFIELD("MHI")                1, false, false, 33, 1, 75, 2,  0, 0}, // #183
  {DBGFIELD("MH_MHY")             2, false, false, 33, 2, 77, 3,  0, 0}, // #184
  {DBGFIELD("MLR_MR")             1, true, true, 33, 1, 80, 3,  0, 0}, // #185
  {DBGFIELD("M_MFY_ML")           2, true, true, 33, 2, 12, 4,  0, 0}, // #186
  {DBGFIELD("DR")                 2, true, true, 97, 1, 380, 4,  0, 0}, // #187
  {DBGFIELD("D")                  3, true, true, 98, 2, 413, 5,  0, 0}, // #188
  {DBGFIELD("DSGFR_DSGR")         1, true, true, 33, 1, 42, 3,  0, 0}, // #189
  {DBGFIELD("DSG_DSGF")           2, true, true, 33, 2, 418, 4,  0, 0}, // #190
  {DBGFIELD("DLR")                2, true, true, 97, 1, 380, 4,  0, 0}, // #191
  {DBGFIELD("DLGR")               2, true, true, 97, 1, 318, 4,  0, 0}, // #192
  {DBGFIELD("DL_DLG")             3, true, true, 98, 2, 413, 5,  0, 0}, // #193
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false, 33, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false, 33, 1,  1, 1,  0, 0}, // #195
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false, 33, 1,  1, 1,  0, 0}, // #196
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false, 33, 1,  1, 1,  0, 0}, // #197
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 4, false, false, 97, 1, 117, 5,  0, 0}, // #198
  {DBGFIELD("RLL_RLLG")           2, false, false, 33, 2, 22, 3,  0, 0}, // #199
  {DBGFIELD("RISBG_RISBG32_RISBGN") 1, false, false, 33, 1,  1, 1,  0, 0}, // #200
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false, 33, 1,  1, 1,  0, 0}, // #201
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false, 33, 1,  1, 1,  0, 0}, // #202
  {DBGFIELD("RISBMux")            1, false, false, 33, 1,  1, 1,  0, 0}, // #203
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, false, 65, 1, 17, 4,  0, 0}, // #204
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false, 59, 2,  6, 3,  0, 0}, // #205
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false, 39, 1,  1, 1,  0, 0}, // #206
  {DBGFIELD("CGFI_CGHI")          1, false, false, 39, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("CGHSI_CGRL")         2, false, false, 59, 2,  6, 3,  0, 0}, // #208
  {DBGFIELD("CGR_CR")             1, false, false, 39, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("CIH")                1, false, false, 39, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("CHF_CHSI")           2, false, false, 59, 2,  6, 3,  0, 0}, // #211
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false, 59, 2,  6, 3,  0, 0}, // #212
  {DBGFIELD("CLFI_CLFIMux")       1, false, false, 39, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false, 59, 2,  6, 3,  0, 0}, // #214
  {DBGFIELD("CLGF_CLGFRL")        2, false, false, 59, 2,  6, 3,  0, 0}, // #215
  {DBGFIELD("CLGFI_CLGFR")        1, false, false, 39, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("CLGR")               1, false, false, 39, 1,  1, 1,  0, 0}, // #217
  {DBGFIELD("CLGRL")              2, false, false, 59, 2,  6, 3,  0, 0}, // #218
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false, 59, 2,  6, 3,  0, 0}, // #219
  {DBGFIELD("CLIH")               1, false, false, 39, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("CLI_CLIY")           2, false, false, 59, 2,  6, 3,  0, 0}, // #221
  {DBGFIELD("CLR")                1, false, false, 39, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("CLRL")               2, false, false, 59, 2,  6, 3,  0, 0}, // #223
  {DBGFIELD("CH_CHRL_CHY")        2, false, false, 59, 2, 22, 3,  0, 0}, // #224
  {DBGFIELD("CGH_CGHRL")          2, false, false, 59, 2, 22, 3,  0, 0}, // #225
  {DBGFIELD("CHHSI")              3, true, false, 100, 3, 21, 5,  0, 0}, // #226
  {DBGFIELD("CGF_CGFRL")          2, false, false, 59, 2, 22, 3,  0, 0}, // #227
  {DBGFIELD("CGFR")               1, false, false, 39, 1, 52, 2,  0, 0}, // #228
  {DBGFIELD("CLC")                3, true, false, 39, 2, 122, 5,  0, 0}, // #229
  {DBGFIELD("CLCL_CLCLE_CLCLU")   1, true, true,  1, 1, 32, 3,  0, 0}, // #230
  {DBGFIELD("CLST")               1, true, true,  1, 1, 32, 3,  0, 0}, // #231
  {DBGFIELD("TM_TMY")             2, false, false, 59, 2,  6, 3,  0, 0}, // #232
  {DBGFIELD("TMHMux_TMLMux")      1, false, false, 39, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("TMHH_TMHH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #234
  {DBGFIELD("TMHL_TMHL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("TMLH_TMLH64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #236
  {DBGFIELD("TMLL_TMLL64")        1, false, false, 39, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("CLM_CLMH_CLMY")      2, false, false, 59, 2,  6, 3,  0, 0}, // #238
  {DBGFIELD("PFD_PFDRL")          1, false, false,  1, 1,  2, 1,  0, 0}, // #239
  {DBGFIELD("BPP")                1, false, false, 39, 1, 52, 2,  0, 0}, // #240
  {DBGFIELD("BPRP")               1, false, true, 39, 1,  4, 2,  0, 0}, // #241
  {DBGFIELD("NIAI")               1, false, false, 39, 1,  1, 1,  0, 0}, // #242
  {DBGFIELD("Serialize")          1, false, true, 39, 1,  4, 2,  0, 0}, // #243
  {DBGFIELD("LAA_LAAG")           2, false, false, 59, 2,  6, 3,  0, 0}, // #244
  {DBGFIELD("LAAL_LAALG")         2, false, false, 59, 2,  6, 3,  0, 0}, // #245
  {DBGFIELD("LAN_LANG")           2, false, false, 59, 2,  6, 3,  0, 0}, // #246
  {DBGFIELD("LAO_LAOG")           2, false, false, 59, 2,  6, 3,  0, 0}, // #247
  {DBGFIELD("LAX_LAXG")           2, false, false, 59, 2,  6, 3,  0, 0}, // #248
  {DBGFIELD("TS")                 2, false, true, 59, 2,  6, 4,  0, 0}, // #249
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 100, 3, 21, 5,  0, 0}, // #250
  {DBGFIELD("CDS_CDSY")           6, true, true, 103, 3, 127, 8,  0, 0}, // #251
  {DBGFIELD("CDSG")               9, true, true, 106, 3, 422, 11,  0, 0}, // #252
  {DBGFIELD("CSST")               1, true, true, 33, 1, 42, 3,  0, 0}, // #253
  {DBGFIELD("PLO")                1, true, true,  1, 1, 32, 3,  0, 0}, // #254
  {DBGFIELD("LPQ")                2, true, true,  8, 1, 145, 4,  0, 0}, // #255
  {DBGFIELD("STPQ")               3, true, true, 63, 2, 21, 5,  0, 0}, // #256
  {DBGFIELD("LPD_LPDG")           2, true, true,  8, 1, 145, 4,  0, 0}, // #257
  {DBGFIELD("TR_TRE_TRT_TRTE_TRTEOpt_TRTR_TRTRE_TRTREOpt") 1, true, true, 33, 1, 42, 3,  0, 0}, // #258
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 1, true, true, 33, 1, 42, 3,  0, 0}, // #259
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 1, true, true, 33, 1, 42, 3,  0, 0}, // #260
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 1, true, true, 33, 1, 42, 3,  0, 0}, // #261
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 1, true, true, 33, 1, 42, 3,  0, 0}, // #262
  {DBGFIELD("KIMD_KLMD_KMAC_PCC_PPNO") 1, true, true, 33, 1, 42, 3,  0, 0}, // #263
  {DBGFIELD("CVB_CVBG_CVBY")      3, true, true, 109, 3, 433, 5,  0, 0}, // #264
  {DBGFIELD("CVD_CVDG_CVDY")      3, true, true, 112, 2, 438, 5,  0, 0}, // #265
  {DBGFIELD("MVN_MVO_MVZ")        1, true, true,  1, 1, 32, 3,  0, 0}, // #266
  {DBGFIELD("PACK_PKA_PKU")       1, true, true,  1, 1, 32, 3,  0, 0}, // #267
  {DBGFIELD("UNPK_UNPKA_UNPKU")   1, true, true,  1, 1, 32, 3,  0, 0}, // #268
  {DBGFIELD("AP_SP_ZAP")          4, true, true, 114, 3, 443, 6,  0, 0}, // #269
  {DBGFIELD("DP_MP")              4, true, true, 117, 3, 449, 6,  0, 0}, // #270
  {DBGFIELD("SRP")                6, true, true, 120, 3, 455, 8,  0, 0}, // #271
  {DBGFIELD("CP")                 3, true, true, 115, 2, 144, 5,  0, 0}, // #272
  {DBGFIELD("TP")                 2, true, true, 110, 2,  1, 4,  0, 0}, // #273
  {DBGFIELD("ED_EDMK")            1, true, true,  1, 1, 32, 3,  0, 0}, // #274
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  1, 1,  2, 1,  0, 0}, // #275
  {DBGFIELD("LAE_LAEY")           2, true, false, 33, 2, 202, 4,  0, 0}, // #276
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  1, 1, 32, 3,  0, 0}, // #277
  {DBGFIELD("IPM")                1, false, true, 33, 1, 18, 3,  0, 0}, // #278
  {DBGFIELD("SPM")                1, false, true,  1, 1,  3, 2,  0, 0}, // #279
  {DBGFIELD("BAL_BALR")           3, true, true, 91, 2, 463, 5,  0, 0}, // #280
  {DBGFIELD("TAM")                1, false, false, 39, 1,  1, 1,  0, 0}, // #281
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true, 39, 1, 52, 3,  0, 0}, // #282
  {DBGFIELD("BSM")                2, true, true, 38, 2, 51, 4,  0, 0}, // #283
  {DBGFIELD("BASSM")              3, true, true, 91, 2, 16, 5,  0, 0}, // #284
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 7, true, true, 123, 2, 211, 9,  0, 0}, // #285
  {DBGFIELD("TEND")               1, true, true, 39, 1,  4, 2,  0, 0}, // #286
  {DBGFIELD("TABORT")             1, true, true,  1, 1,  3, 2,  0, 0}, // #287
  {DBGFIELD("ETND")               1, false, false, 33, 1,  1, 1,  0, 0}, // #288
  {DBGFIELD("NTSTG")              2, false, false, 59, 2,  6, 3,  0, 0}, // #289
  {DBGFIELD("PPA")                1, false, false, 39, 1,  1, 1,  0, 0}, // #290
  {DBGFIELD("FLOGR")              1, true, true, 33, 1, 66, 3,  0, 0}, // #291
  {DBGFIELD("POPCNT")             1, false, false, 33, 1, 18, 2,  0, 0}, // #292
  {DBGFIELD("AEXT128_64")         1, false, false, 33, 1,  1, 1,  0, 0}, // #293
  {DBGFIELD("ZEXT128_32_ZEXT128_64") 1, false, false, 33, 1,  1, 1,  0, 0}, // #294
  {DBGFIELD("SRST")               2, false, false, 33, 2, 31, 3,  0, 0}, // #295
  {DBGFIELD("SRSTU")              1, false, false,  1, 1, 32, 2,  0, 0}, // #296
  {DBGFIELD("CUSE")               1, true, true,  1, 1, 32, 3,  0, 0}, // #297
  {DBGFIELD("CFC")                1, true, true,  1, 1, 32, 3,  0, 0}, // #298
  {DBGFIELD("UPT")                1, true, true,  1, 1, 32, 3,  0, 0}, // #299
  {DBGFIELD("CKSM")               1, true, true,  1, 1, 32, 3,  0, 0}, // #300
  {DBGFIELD("CMPSC")              1, true, true,  1, 1, 32, 3,  0, 0}, // #301
  {DBGFIELD("MVCK")               4, true, true, 125, 3, 205, 6,  0, 0}, // #302
  {DBGFIELD("MC")                 1, false, false, 39, 1,  1, 1,  0, 0}, // #303
  {DBGFIELD("ECAG")               1, false, false, 39, 1, 42, 2,  0, 0}, // #304
  {DBGFIELD("ECTG")               2, false, false, 33, 2, 220, 3,  0, 0}, // #305
  {DBGFIELD("EPSW")               1, false, false, 39, 1, 42, 2,  0, 0}, // #306
  {DBGFIELD("EX_EXRL")            1, true, true, 39, 1,  4, 2,  0, 0}, // #307
  {DBGFIELD("PR")                 1, false, false, 39, 1, 42, 2,  0, 0}, // #308
  {DBGFIELD("STCK_STCKF")         6, true, true, 128, 3, 468, 8,  0, 0}, // #309
  {DBGFIELD("STCKE")              8, true, true, 131, 3, 476, 10,  0, 0}, // #310
  {DBGFIELD("STFLE")              2, false, false, 33, 2,  6, 3,  0, 0}, // #311
  {DBGFIELD("SVC")                1, false, false, 39, 1, 42, 2,  0, 0}, // #312
  {DBGFIELD("STRAG")              2, false, false, 59, 2,  6, 3,  0, 0}, // #313
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #314
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false, 33, 1,  1, 1,  0, 0}, // #315
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #316
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false, 33, 1,  1, 1,  0, 0}, // #317
  {DBGFIELD("LZDR_LZER")          1, false, false, 39, 1,  1, 1,  0, 0}, // #318
  {DBGFIELD("LZXR")               2, true, false, 54, 1, 51, 4,  0, 0}, // #319
  {DBGFIELD("LER")                1, false, false, 111, 1, 19, 1,  0, 0}, // #320
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false, 39, 1,  1, 1,  0, 0}, // #321
  {DBGFIELD("LGDR")               1, false, false, 39, 1, 18, 2,  0, 0}, // #322
  {DBGFIELD("LXR")                2, true, true, 54, 1, 51, 4,  0, 0}, // #323
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 111, 1, 167, 2,  0, 0}, // #324
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 111, 1, 167, 2,  0, 0}, // #325
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 111, 1, 167, 2,  0, 0}, // #326
  {DBGFIELD("LTXBR")              2, true, true, 134, 1, 255, 4,  0, 0}, // #327
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 134, 1, 255, 4,  0, 0}, // #328
  {DBGFIELD("CPSDRdd_CPSDRds")    1, false, false, 111, 1, 19, 1,  0, 0}, // #329
  {DBGFIELD("CPSDRsd_CPSDRss")    1, false, false, 111, 1, 19, 1,  0, 0}, // #330
  {DBGFIELD("LE_LEY")             2, false, false, 110, 2, 486, 3,  0, 0}, // #331
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  1, 1,  2, 1,  0, 0}, // #332
  {DBGFIELD("LX")                 1, false, false,  1, 1,  2, 1,  0, 0}, // #333
  {DBGFIELD("STD_STDY")           2, false, false, 59, 2, 12, 3,  0, 0}, // #334
  {DBGFIELD("STE_STEY")           2, false, false, 59, 2, 12, 3,  0, 0}, // #335
  {DBGFIELD("STX")                2, false, false, 59, 2,  6, 3,  0, 0}, // #336
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 111, 1, 30, 1,  0, 0}, // #337
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 119, 1, 235, 3,  0, 0}, // #338
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 119, 1, 235, 3,  0, 0}, // #339
  {DBGFIELD("LDEB")               2, false, false, 110, 2, 238, 3,  0, 0}, // #340
  {DBGFIELD("LDEBR")              1, false, false, 111, 1, 30, 1,  0, 0}, // #341
  {DBGFIELD("LXDB_LXEB")          3, true, true, 135, 2, 302, 5,  0, 0}, // #342
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 134, 1, 83, 3,  0, 0}, // #343
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, false, 137, 2, 250, 4,  0, 0}, // #344
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, false, 137, 2, 250, 4,  0, 0}, // #345
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 139, 2, 489, 5,  0, 0}, // #346
  {DBGFIELD("CELFBR_CELGBR")      2, true, false, 137, 2, 250, 4,  0, 0}, // #347
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, false, 137, 2, 250, 4,  0, 0}, // #348
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 139, 2, 489, 5,  0, 0}, // #349
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, false, 137, 2, 268, 4,  0, 0}, // #350
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, false, 137, 2, 268, 4,  0, 0}, // #351
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, false, 141, 2, 263, 5,  0, 0}, // #352
  {DBGFIELD("CLFEBR")             2, true, true, 137, 2, 268, 4,  0, 0}, // #353
  {DBGFIELD("CLFDBR")             2, true, false, 137, 2, 268, 4,  0, 0}, // #354
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, false, 137, 2, 268, 4,  0, 0}, // #355
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, false, 141, 2, 263, 5,  0, 0}, // #356
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 111, 1, 167, 2,  0, 0}, // #357
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 111, 1, 167, 2,  0, 0}, // #358
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false, 39, 1,  1, 1,  0, 0}, // #359
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false, 39, 1,  1, 1,  0, 0}, // #360
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false, 39, 1,  1, 1,  0, 0}, // #361
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 134, 1, 255, 4,  0, 0}, // #362
  {DBGFIELD("SQDB_SQEB")          2, false, false, 143, 2, 494, 2,  0, 0}, // #363
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 144, 1, 33, 1,  0, 0}, // #364
  {DBGFIELD("SQXBR")              2, true, true, 145, 1, 496, 3,  0, 0}, // #365
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 111, 1, 30, 1,  0, 0}, // #366
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 111, 1, 30, 1,  0, 0}, // #367
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 134, 1, 255, 4,  0, 0}, // #368
  {DBGFIELD("ADB_AEB")            2, false, false, 110, 2, 238, 3,  0, 0}, // #369
  {DBGFIELD("ADBR_AEBR")          1, false, false, 111, 1, 30, 1,  0, 0}, // #370
  {DBGFIELD("AXBR")               2, true, true, 134, 1, 255, 4,  0, 0}, // #371
  {DBGFIELD("SDB_SEB")            2, false, false, 110, 2, 238, 3,  0, 0}, // #372
  {DBGFIELD("SDBR_SEBR")          1, false, false, 111, 1, 30, 1,  0, 0}, // #373
  {DBGFIELD("SXBR")               2, true, true, 134, 1, 255, 4,  0, 0}, // #374
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 110, 2, 238, 3,  0, 0}, // #375
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 111, 1, 30, 1,  0, 0}, // #376
  {DBGFIELD("MXDB")               3, true, true, 135, 2, 302, 5,  0, 0}, // #377
  {DBGFIELD("MXDBR")              2, true, true, 134, 1, 83, 3,  0, 0}, // #378
  {DBGFIELD("MXBR")               2, true, true, 134, 1, 285, 4,  0, 0}, // #379
  {DBGFIELD("MAEB_MSEB")          2, true, true, 110, 2, 289, 4,  0, 0}, // #380
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 111, 1, 30, 2,  0, 0}, // #381
  {DBGFIELD("MADB_MSDB")          2, true, true, 110, 2, 289, 4,  0, 0}, // #382
  {DBGFIELD("MADBR_MSDBR")        1, false, false, 111, 1, 30, 1,  0, 0}, // #383
  {DBGFIELD("DDB_DEB")            2, false, false, 143, 2, 494, 2,  0, 0}, // #384
  {DBGFIELD("DDBR_DEBR")          1, false, false, 144, 1, 33, 1,  0, 0}, // #385
  {DBGFIELD("DXBR")               2, true, true, 145, 1, 496, 3,  0, 0}, // #386
  {DBGFIELD("DIDBR_DIEBR")        1, true, true, 144, 1, 496, 3,  0, 0}, // #387
  {DBGFIELD("CDB_CEB_KDB_KEB")    2, false, false, 110, 2, 499, 3,  0, 0}, // #388
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 111, 1, 167, 2,  0, 0}, // #389
  {DBGFIELD("CXBR_KXBR")          2, true, true, 119, 1, 264, 4,  0, 0}, // #390
  {DBGFIELD("TCDB_TCEB")          2, false, false, 110, 2, 502, 3,  0, 0}, // #391
  {DBGFIELD("TCXB")               3, true, true, 135, 2, 505, 5,  0, 0}, // #392
  {DBGFIELD("EFPC")               2, true, true, 33, 2,  1, 4,  0, 0}, // #393
  {DBGFIELD("STFPC")              2, true, true, 59, 2,  6, 4,  0, 0}, // #394
  {DBGFIELD("SFPC")               1, true, true,  1, 1, 199, 3,  0, 0}, // #395
  {DBGFIELD("LFPC")               2, true, true,  8, 1, 151, 4,  0, 0}, // #396
  {DBGFIELD("SFASR")              1, true, true, 33, 1, 42, 3,  0, 0}, // #397
  {DBGFIELD("LFAS")               2, true, true, 33, 2, 31, 4,  0, 0}, // #398
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true, 39, 1, 18, 3,  0, 0}, // #399
  {DBGFIELD("LTDR_LTER")          1, false, false, 111, 1, 167, 2,  0, 0}, // #400
  {DBGFIELD("LTXR")               2, true, true, 134, 1, 255, 4,  0, 0}, // #401
  {DBGFIELD("LEDR_LRER")          1, false, false, 111, 1, 30, 1,  0, 0}, // #402
  {DBGFIELD("LEXR")               1, false, false, 111, 1, 30, 1,  0, 0}, // #403
  {DBGFIELD("LDXR_LRDR")          2, false, false, 134, 1, 83, 2,  0, 0}, // #404
  {DBGFIELD("LDE")                1, false, false,  1, 1,  2, 1,  0, 0}, // #405
  {DBGFIELD("LDER")               1, false, false, 39, 1,  1, 1,  0, 0}, // #406
  {DBGFIELD("LXD_LXE")            3, true, true, 135, 2, 302, 5,  0, 0}, // #407
  {DBGFIELD("LXDR_LXER")          2, true, true, 134, 1, 83, 3,  0, 0}, // #408
  {DBGFIELD("CEFR_CEGR")          2, true, false, 137, 2, 250, 4,  0, 0}, // #409
  {DBGFIELD("CDFR_CDGR")          2, true, false, 137, 2, 250, 4,  0, 0}, // #410
  {DBGFIELD("CXFR_CXGR")          3, true, true, 139, 2, 489, 5,  0, 0}, // #411
  {DBGFIELD("CFDR_CFER")          2, true, false, 137, 2, 268, 4,  0, 0}, // #412
  {DBGFIELD("CGDR_CGER")          2, true, false, 137, 2, 268, 4,  0, 0}, // #413
  {DBGFIELD("CFXR_CGXR")          3, true, false, 141, 2, 263, 5,  0, 0}, // #414
  {DBGFIELD("THDER_THDR")         1, false, false, 111, 1, 30, 1,  0, 0}, // #415
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 111, 1, 30, 1,  0, 0}, // #416
  {DBGFIELD("LCDR_LNDR_LPDR")     1, false, false, 111, 1, 167, 2,  0, 0}, // #417
  {DBGFIELD("LCER_LNER_LPER")     1, false, false, 111, 1, 167, 2,  0, 0}, // #418
  {DBGFIELD("LCXR_LNXR_LPXR")     2, true, true, 134, 1, 255, 4,  0, 0}, // #419
  {DBGFIELD("HDR_HER")            1, false, false, 111, 1, 30, 1,  0, 0}, // #420
  {DBGFIELD("SQD_SQE")            2, false, false, 143, 2, 494, 2,  0, 0}, // #421
  {DBGFIELD("SQDR_SQER")          1, false, false, 144, 1, 33, 1,  0, 0}, // #422
  {DBGFIELD("SQXR")               2, true, true, 145, 1, 496, 3,  0, 0}, // #423
  {DBGFIELD("FIER")               1, false, false, 111, 1, 30, 1,  0, 0}, // #424
  {DBGFIELD("FIDR")               1, false, false, 111, 1, 30, 1,  0, 0}, // #425
  {DBGFIELD("FIXR")               2, true, true, 134, 1, 255, 4,  0, 0}, // #426
  {DBGFIELD("AD_AE_AU_AW")        2, false, false, 110, 2, 238, 3,  0, 0}, // #427
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 111, 1, 30, 1,  0, 0}, // #428
  {DBGFIELD("AXR")                2, true, true, 134, 1, 255, 4,  0, 0}, // #429
  {DBGFIELD("SD_SE_SU_SW")        2, false, false, 110, 2, 238, 3,  0, 0}, // #430
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 111, 1, 30, 1,  0, 0}, // #431
  {DBGFIELD("SXR")                2, true, true, 134, 1, 255, 4,  0, 0}, // #432
  {DBGFIELD("MD_MDE_ME_MEE")      2, false, false, 110, 2, 238, 3,  0, 0}, // #433
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 111, 1, 30, 1,  0, 0}, // #434
  {DBGFIELD("MXD")                3, true, true, 135, 2, 302, 5,  0, 0}, // #435
  {DBGFIELD("MXDR")               2, true, true, 134, 1, 83, 3,  0, 0}, // #436
  {DBGFIELD("MXR")                2, true, true, 134, 1, 285, 4,  0, 0}, // #437
  {DBGFIELD("MY_MYH_MYL")         3, true, true, 135, 2, 302, 5,  0, 0}, // #438
  {DBGFIELD("MYHR_MYLR_MYR")      2, true, true, 134, 1, 83, 3,  0, 0}, // #439
  {DBGFIELD("MAE_MSE")            2, true, true, 110, 2, 289, 4,  0, 0}, // #440
  {DBGFIELD("MAER_MSER")          1, true, true, 111, 1, 30, 2,  0, 0}, // #441
  {DBGFIELD("MAD_MSD")            2, true, true, 110, 2, 289, 4,  0, 0}, // #442
  {DBGFIELD("MADR_MSDR")          1, false, false, 111, 1, 30, 1,  0, 0}, // #443
  {DBGFIELD("MAY_MAYH_MAYL")      3, true, true, 135, 2, 302, 5,  0, 0}, // #444
  {DBGFIELD("MAYHR_MAYLR_MAYR")   2, true, true, 134, 1, 83, 3,  0, 0}, // #445
  {DBGFIELD("DD_DE")              2, false, false, 143, 2, 494, 2,  0, 0}, // #446
  {DBGFIELD("DDR_DER")            1, false, false, 144, 1, 33, 1,  0, 0}, // #447
  {DBGFIELD("DXR")                2, true, true, 145, 1, 496, 3,  0, 0}, // #448
  {DBGFIELD("CD_CE")              2, false, false, 110, 2, 499, 3,  0, 0}, // #449
  {DBGFIELD("CDR_CER")            1, false, false, 111, 1, 167, 2,  0, 0}, // #450
  {DBGFIELD("CXR")                2, true, true, 119, 1, 264, 4,  0, 0}, // #451
  {DBGFIELD("LTDTR")              1, false, false, 111, 1, 30, 1,  0, 0}, // #452
  {DBGFIELD("LTXTR")              2, true, true, 134, 1, 255, 4,  0, 0}, // #453
  {DBGFIELD("LEDTR")              1, false, false, 111, 1, 308, 2,  0, 0}, // #454
  {DBGFIELD("LDXTR")              2, false, false, 119, 1, 235, 3,  0, 0}, // #455
  {DBGFIELD("LDETR")              1, false, false, 111, 1, 30, 1,  0, 0}, // #456
  {DBGFIELD("LXDTR")              2, true, true, 134, 1, 255, 4,  0, 0}, // #457
  {DBGFIELD("CDFTR_CDGTR_CDGTRA") 2, true, false, 137, 2, 292, 4,  0, 0}, // #458
  {DBGFIELD("CXFTR_CXGTR_CXGTRA") 3, true, true, 139, 2, 510, 5,  0, 0}, // #459
  {DBGFIELD("CDLFTR_CDLGTR")      2, true, false, 137, 2, 292, 4,  0, 0}, // #460
  {DBGFIELD("CXLFTR_CXLGTR")      3, true, true, 139, 2, 510, 5,  0, 0}, // #461
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, false, 137, 2, 292, 4,  0, 0}, // #462
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, false, 141, 2, 515, 5,  0, 0}, // #463
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, false, 137, 2, 292, 4,  0, 0}, // #464
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, false, 141, 2, 515, 5,  0, 0}, // #465
  {DBGFIELD("CDSTR_CDUTR")        2, true, false, 137, 2, 250, 4,  0, 0}, // #466
  {DBGFIELD("CXSTR_CXUTR")        4, true, true, 146, 2, 520, 6,  0, 0}, // #467
  {DBGFIELD("CSDTR_CUDTR")        2, true, false, 137, 2, 259, 4,  0, 0}, // #468
  {DBGFIELD("CSXTR_CUXTR")        4, true, false, 146, 2, 520, 6,  0, 0}, // #469
  {DBGFIELD("CDZT")               2, true, false, 110, 2, 526, 4,  0, 0}, // #470
  {DBGFIELD("CXZT")               4, true, true, 148, 2, 530, 6,  0, 0}, // #471
  {DBGFIELD("CZDT")               3, true, false, 109, 3, 525, 5,  0, 0}, // #472
  {DBGFIELD("CZXT")               4, true, true, 150, 3, 536, 6,  0, 0}, // #473
  {DBGFIELD("CDPT")               2, true, false, 110, 2, 526, 4,  0, 0}, // #474
  {DBGFIELD("CXPT")               4, true, true, 148, 2, 530, 6,  0, 0}, // #475
  {DBGFIELD("CPDT")               3, true, false, 109, 3, 525, 5,  0, 0}, // #476
  {DBGFIELD("CPXT")               4, true, true, 150, 3, 536, 6,  0, 0}, // #477
  {DBGFIELD("PFPO")               1, true, true,  1, 1, 32, 3,  0, 0}, // #478
  {DBGFIELD("FIDTR")              1, false, false, 111, 1, 30, 1,  0, 0}, // #479
  {DBGFIELD("FIXTR")              2, true, true, 134, 1, 255, 4,  0, 0}, // #480
  {DBGFIELD("EEDTR")              2, true, false, 137, 2, 259, 4,  0, 0}, // #481
  {DBGFIELD("EEXTR")              2, true, false, 137, 2, 259, 4,  0, 0}, // #482
  {DBGFIELD("ESDTR")              2, true, false, 137, 2, 259, 4,  0, 0}, // #483
  {DBGFIELD("ESXTR")              3, true, false, 141, 2, 542, 5,  0, 0}, // #484
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 111, 1, 30, 1,  0, 0}, // #485
  {DBGFIELD("AXTR_AXTRA")         2, true, true, 134, 1, 255, 4,  0, 0}, // #486
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 111, 1, 30, 1,  0, 0}, // #487
  {DBGFIELD("SXTR_SXTRA")         2, true, true, 134, 1, 255, 4,  0, 0}, // #488
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 111, 1, 275, 2,  0, 0}, // #489
  {DBGFIELD("MXTR_MXTRA")         2, true, true, 134, 1, 277, 4,  0, 0}, // #490
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 111, 1, 275, 2,  0, 0}, // #491
  {DBGFIELD("DXTR_DXTRA")         2, true, true, 134, 1, 277, 4,  0, 0}, // #492
  {DBGFIELD("QADTR")              1, false, false, 111, 1, 30, 1,  0, 0}, // #493
  {DBGFIELD("QAXTR")              2, true, true, 134, 1, 255, 4,  0, 0}, // #494
  {DBGFIELD("RRDTR")              2, false, false, 137, 2, 268, 3,  0, 0}, // #495
  {DBGFIELD("RRXTR")              3, true, true, 139, 2, 280, 5,  0, 0}, // #496
  {DBGFIELD("SLDT_SRDT")          2, false, false, 110, 2, 526, 3,  0, 0}, // #497
  {DBGFIELD("SLXT_SRXT")          3, true, true, 135, 2, 505, 5,  0, 0}, // #498
  {DBGFIELD("IEDTR")              2, false, false, 137, 2, 268, 3,  0, 0}, // #499
  {DBGFIELD("IEXTR")              3, true, true, 139, 2, 280, 5,  0, 0}, // #500
  {DBGFIELD("CDTR_KDTR")          1, false, false, 111, 1, 30, 1,  0, 0}, // #501
  {DBGFIELD("CXTR_KXTR")          2, true, true, 119, 1, 547, 4,  0, 0}, // #502
  {DBGFIELD("CEDTR")              1, false, false, 111, 1, 30, 1,  0, 0}, // #503
  {DBGFIELD("CEXTR")              1, false, false, 111, 1, 30, 1,  0, 0}, // #504
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 2, false, false, 110, 2, 526, 3,  0, 0}, // #505
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 135, 2, 505, 5,  0, 0}, // #506
  {DBGFIELD("VLR_VLR32_VLR64")    1, false, false, 39, 1,  1, 1,  0, 0}, // #507
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 1, false, false, 39, 1,  1, 2,  0, 0}, // #508
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 1, false, false, 39, 1,  1, 1,  0, 0}, // #509
  {DBGFIELD("VLVGP_VLVGP32")      1, false, false, 39, 1, 52, 2,  0, 0}, // #510
  {DBGFIELD("VZERO")              1, false, false, 111, 1, 19, 1,  0, 0}, // #511
  {DBGFIELD("VONE")               1, false, false, 111, 1, 19, 1,  0, 0}, // #512
  {DBGFIELD("VGBM")               1, false, false, 111, 1, 19, 1,  0, 0}, // #513
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #514
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #515
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #516
  {DBGFIELD("VL_VLBB_VLL")        1, false, false,  1, 1,  2, 1,  0, 0}, // #517
  {DBGFIELD("VL32_VL64")          1, false, false,  1, 1,  2, 1,  0, 0}, // #518
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 1, false, false,  1, 1,  2, 1,  0, 0}, // #519
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 1, false, false,  1, 1,  2, 1,  0, 0}, // #520
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 2, false, false, 110, 2, 486, 3,  0, 0}, // #521
  {DBGFIELD("VGEF_VGEG")          3, true, false, 109, 3, 551, 5,  0, 0}, // #522
  {DBGFIELD("VLM")                5, true, true, 20, 1, 35, 7,  0, 0}, // #523
  {DBGFIELD("VST_VST32_VST64_VSTL") 2, false, false, 59, 2, 207, 3,  0, 0}, // #524
  {DBGFIELD("VSTEF_VSTEG")        2, false, false, 59, 2, 207, 3,  0, 0}, // #525
  {DBGFIELD("VSTEB_VSTEH")        3, true, false, 109, 3, 551, 5,  0, 0}, // #526
  {DBGFIELD("VSTM")               7, true, true, 123, 2, 556, 9,  0, 0}, // #527
  {DBGFIELD("VSCEF_VSCEG")        3, true, false, 63, 2, 565, 5,  0, 0}, // #528
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #529
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #530
  {DBGFIELD("VPERM")              1, false, false, 111, 1, 19, 1,  0, 0}, // #531
  {DBGFIELD("VPDI")               1, false, false, 111, 1, 19, 1,  0, 0}, // #532
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #533
  {DBGFIELD("VSEL")               1, false, false, 111, 1, 19, 1,  0, 0}, // #534
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #535
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #536
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 1, false, false, 111, 1, 167, 2,  0, 0}, // #537
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #538
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 1, false, false, 111, 1, 167, 2,  0, 0}, // #539
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #540
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #541
  {DBGFIELD("VUPL_VUPLB_VUPLF")   1, false, false, 111, 1, 19, 1,  0, 0}, // #542
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 1, false, false, 111, 1, 19, 1,  0, 0}, // #543
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #544
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 1, false, false, 111, 1, 19, 1,  0, 0}, // #545
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 1, false, false, 111, 1, 19, 1,  0, 0}, // #546
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #547
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #548
  {DBGFIELD("VN_VNC_VNO")         1, false, false, 111, 1, 19, 1,  0, 0}, // #549
  {DBGFIELD("VO")                 1, false, false, 111, 1, 19, 1,  0, 0}, // #550
  {DBGFIELD("VCKSM")              1, false, false, 111, 1,  8, 1,  0, 0}, // #551
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #552
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #553
  {DBGFIELD("VX")                 1, false, false, 111, 1, 19, 1,  0, 0}, // #554
  {DBGFIELD("VGFM")               1, false, false, 111, 1,  8, 1,  0, 0}, // #555
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #556
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #557
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #558
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #559
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #560
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #561
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #562
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #563
  {DBGFIELD("VMAL_VMALB_VMALF")   1, false, false, 111, 1,  8, 1,  0, 0}, // #564
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #565
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 1, false, false, 111, 1,  8, 1,  0, 0}, // #566
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #567
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #568
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #569
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #570
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #571
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #572
  {DBGFIELD("VML_VMLB_VMLF")      1, false, false, 111, 1,  8, 1,  0, 0}, // #573
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #574
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 1, false, false, 111, 1,  8, 1,  0, 0}, // #575
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #576
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #577
  {DBGFIELD("VPOPCT")             1, false, false, 111, 1, 19, 1,  0, 0}, // #578
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #579
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #580
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #581
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #582
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #583
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #584
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #585
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #586
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #587
  {DBGFIELD("VSL_VSLDB")          1, false, false, 111, 1, 19, 1,  0, 0}, // #588
  {DBGFIELD("VSLB")               2, false, false, 119, 1, 570, 3,  0, 0}, // #589
  {DBGFIELD("VSRA_VSRL")          1, false, false, 111, 1, 19, 1,  0, 0}, // #590
  {DBGFIELD("VSRAB_VSRLB")        2, false, false, 119, 1, 570, 3,  0, 0}, // #591
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 1, false, false, 111, 1, 19, 1,  0, 0}, // #592
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 1, false, false, 111, 1, 19, 1,  0, 0}, // #593
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 1, false, false, 111, 1, 19, 1,  0, 0}, // #594
  {DBGFIELD("VSUM_VSUMB_VSUMH")   1, false, false, 111, 1,  8, 1,  0, 0}, // #595
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 1, false, false, 111, 1,  8, 1,  0, 0}, // #596
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 1, false, false, 111, 1,  8, 1,  0, 0}, // #597
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 1, false, false, 111, 1, 167, 2,  0, 0}, // #598
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 1, false, false, 111, 1, 167, 2,  0, 0}, // #599
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #600
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 1, false, false, 111, 1, 167, 2,  0, 0}, // #601
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #602
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 1, false, false, 111, 1, 167, 2,  0, 0}, // #603
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 1, false, false, 111, 1, 19, 1,  0, 0}, // #604
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 1, false, false, 111, 1, 167, 2,  0, 0}, // #605
  {DBGFIELD("VTM")                1, false, false, 111, 1,  7, 2,  0, 0}, // #606
  {DBGFIELD("VCDG_VCDGB_VCDLG_VCDLGB") 1, false, false, 119, 1, 61, 1,  0, 0}, // #607
  {DBGFIELD("WCDGB_WCDLGB")       1, false, false, 111, 1, 30, 1,  0, 0}, // #608
  {DBGFIELD("VCGD_VCLGD")         1, false, false, 119, 1, 61, 1,  0, 0}, // #609
  {DBGFIELD("VFADB")              1, false, false, 119, 1, 61, 1,  0, 0}, // #610
  {DBGFIELD("WFADB")              1, false, false, 111, 1, 30, 1,  0, 0}, // #611
  {DBGFIELD("VCGDB")              1, false, false, 119, 1, 61, 1,  0, 0}, // #612
  {DBGFIELD("WCGDB")              1, false, false, 111, 1, 30, 1,  0, 0}, // #613
  {DBGFIELD("VFA_VFI_VFM_VFS")    1, false, false, 119, 1, 61, 1,  0, 0}, // #614
  {DBGFIELD("VFIDB_VFMDB_VFSDB")  1, false, false, 119, 1, 61, 1,  0, 0}, // #615
  {DBGFIELD("WFIDB_WFMDB_WFSDB")  1, false, false, 111, 1, 30, 1,  0, 0}, // #616
  {DBGFIELD("VCLGDB")             1, false, false, 119, 1, 61, 1,  0, 0}, // #617
  {DBGFIELD("WCLGDB")             1, false, false, 111, 1, 30, 1,  0, 0}, // #618
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB") 1, false, false, 111, 1, 19, 1,  0, 0}, // #619
  {DBGFIELD("WFLCDB_WFLNDB_WFLPDB") 1, false, false, 111, 1, 19, 1,  0, 0}, // #620
  {DBGFIELD("VFMA_VFMS")          1, false, false, 119, 1, 61, 1,  0, 0}, // #621
  {DBGFIELD("VFMADB_VFMSDB")      1, false, false, 119, 1, 61, 1,  0, 0}, // #622
  {DBGFIELD("WFMADB_WFMSDB")      1, false, false, 111, 1, 30, 1,  0, 0}, // #623
  {DBGFIELD("VFPSO")              1, false, false, 111, 1, 19, 1,  0, 0}, // #624
  {DBGFIELD("VFPSODB_WFPSODB")    1, false, false, 111, 1, 19, 1,  0, 0}, // #625
  {DBGFIELD("VFTCI_VFTCIDB")      1, false, false, 111, 1, 167, 2,  0, 0}, // #626
  {DBGFIELD("WFTCIDB")            1, false, false, 111, 1, 167, 2,  0, 0}, // #627
  {DBGFIELD("VLDE_VLED")          1, false, false, 119, 1, 61, 1,  0, 0}, // #628
  {DBGFIELD("VLDEB_VLEDB")        1, false, false, 119, 1, 61, 1,  0, 0}, // #629
  {DBGFIELD("WLDEB_WLEDB")        1, false, false, 111, 1, 30, 1,  0, 0}, // #630
  {DBGFIELD("VFD")                1, false, false, 144, 1, 33, 1,  0, 0}, // #631
  {DBGFIELD("VFDDB_WFDDB")        1, false, false, 144, 1, 33, 1,  0, 0}, // #632
  {DBGFIELD("VFSQ")               1, false, false, 144, 1, 33, 1,  0, 0}, // #633
  {DBGFIELD("VFSQDB_WFSQDB")      1, false, false, 144, 1, 33, 1,  0, 0}, // #634
  {DBGFIELD("VFCE_VFCH_VFCHE")    1, false, false, 111, 1, 19, 1,  0, 0}, // #635
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 1, false, false, 111, 1, 19, 1,  0, 0}, // #636
  {DBGFIELD("WFC_WFK")            1, false, false, 111, 1, 167, 2,  0, 0}, // #637
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 1, false, false, 111, 1, 19, 1,  0, 0}, // #638
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 1, false, false, 111, 1, 167, 2,  0, 0}, // #639
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 1, false, false, 111, 1, 167, 2,  0, 0}, // #640
  {DBGFIELD("WFCDB_WFKDB")        1, false, false, 111, 1, 167, 2,  0, 0}, // #641
  {DBGFIELD("LEFR")               1, false, false, 39, 1,  1, 1,  0, 0}, // #642
  {DBGFIELD("LFER")               1, false, false, 39, 1,  1, 2,  0, 0}, // #643
  {DBGFIELD("VFAE_VFAEB")         1, false, false, 111, 1,  2, 1,  0, 0}, // #644
  {DBGFIELD("VFAEBS")             1, false, false, 111, 1,  7, 2,  0, 0}, // #645
  {DBGFIELD("VFAEF_VFAEH")        1, false, false, 111, 1,  2, 1,  0, 0}, // #646
  {DBGFIELD("VFAEFS_VFAEHS")      1, false, false, 111, 1,  7, 2,  0, 0}, // #647
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 1, false, false, 111, 1,  2, 1,  0, 0}, // #648
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 1, false, false, 111, 1,  7, 2,  0, 0}, // #649
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 1, false, false, 111, 1,  2, 1,  0, 0}, // #650
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 1, false, false, 111, 1,  7, 2,  0, 0}, // #651
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 1, false, false, 111, 1,  2, 1,  0, 0}, // #652
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 1, false, false, 111, 1,  7, 2,  0, 0}, // #653
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 1, false, false, 111, 1,  2, 1,  0, 0}, // #654
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 1, false, false, 111, 1,  7, 2,  0, 0}, // #655
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 1, false, false, 111, 1,  2, 1,  0, 0}, // #656
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 1, false, false, 111, 1,  7, 2,  0, 0}, // #657
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 1, false, false, 111, 1,  2, 1,  0, 0}, // #658
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 1, false, false, 111, 1,  7, 2,  0, 0}, // #659
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  1, 1,  2, 1,  0, 0}, // #660
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, false, 33, 1, 52, 2,  0, 0}, // #661
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, false, 33, 2, 22, 3,  0, 0}, // #662
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, false, 59, 2,  6, 3,  0, 0}, // #663
  {DBGFIELD("ALSI_ASI")           2, false, false, 59, 2,  6, 3,  0, 0}, // #664
  {DBGFIELD("ALGF")               2, false, false, 33, 2,  6, 3,  0, 0}, // #665
  {DBGFIELD("KIMD_KLMD_KMAC_PCC") 1, true, true, 33, 1, 42, 3,  0, 0}, // #666
  {DBGFIELD("RISBG_RISBG32")      1, false, false, 33, 1,  1, 1,  0, 0}, // #667
  {DBGFIELD("STCK")               6, true, true, 128, 3, 468, 8,  0, 0} // #668
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
  {DBGFIELD("BRAS")               3, true, true, 10, 2, 573, 5,  0, 0}, // #17
  {DBGFIELD("BRASL_CallBRASL")    3, true, true, 10, 2, 573, 5,  0, 0}, // #18
  {DBGFIELD("BAS_BASR_CallBASR")  3, true, true, 10, 2, 21, 5,  0, 0}, // #19
  {DBGFIELD("TLS_GDCALL_TLS_LDCALL") 3, true, true, 10, 2, 573, 5,  0, 0}, // #20
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
  {DBGFIELD("MVCL_MVCLE_MVCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #34
  {DBGFIELD("COPY_TO_REGCLASS_COPY") 1, false, false,  1, 1,  1, 1,  0, 0}, // #35
  {DBGFIELD("EXTRACT_SUBREG")     1, false, false,  1, 1,  1, 1,  0, 0}, // #36
  {DBGFIELD("INSERT_SUBREG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #37
  {DBGFIELD("REG_SEQUENCE")       1, false, false,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("SUBREG_TO_REG")      1, false, false,  1, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("L_LCBB_LFH_LMux_LRL_LY") 0, false, false,  0, 0,  0, 0,  0, 0}, // #40
  {DBGFIELD("LG_LGRL")            1, false, false,  3, 1,  2, 1,  0, 0}, // #41
  {DBGFIELD("L128")               1, false, false,  3, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("LLIHF_LLIHH_LLIHL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #43
  {DBGFIELD("LLILF_LLILH_LLILL")  1, false, false,  1, 1,  1, 1,  0, 0}, // #44
  {DBGFIELD("LGFI_LGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #45
  {DBGFIELD("LHI_LHIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LR_LRMux")           1, false, false,  1, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LZRF_LZRG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("LAT_LFHAT_LGAT")     0, false, false,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("LT_LTG")             2, false, false,  4, 2,  6, 3,  0, 0}, // #50
  {DBGFIELD("LTGR_LTR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #51
  {DBGFIELD("STG_STGRL")          2, false, false,  4, 2,  6, 3,  0, 0}, // #52
  {DBGFIELD("ST128")              2, false, false,  4, 2,  6, 3,  0, 0}, // #53
  {DBGFIELD("ST_STFH_STMux_STRL_STY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #54
  {DBGFIELD("MVST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #55
  {DBGFIELD("LOCRMux")            0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("LOCFHR_LOCFHRAsm_LOCFHRAsmE_LOCFHRAsmH_LOCFHRAsmHE_LOCFHRAsmL_LOCFHRAsmLE_LOCFHRAsmLH_LOCFHRAsmM_LOCFHRAsmNE_LOCFHRAsmNH_LOCFHRAsmNHE_LOCFHRAsmNL_LOCFHRAsmNLE_LOCFHRAsmNLH_LOCFHRAsmNM_LOCFHRAsmNO_LOCFHRAsmNP_LOCFHRAsmNZ_LOCFHRAsmO_LOCFHRAsmP_LOCFHRAsmZ_LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("LOCGHI_LOCGHIAsm_LOCGHIAsmE_LOCGHIAsmH_LOCGHIAsmHE_LOCGHIAsmL_LOCGHIAsmLE_LOCGHIAsmLH_LOCGHIAsmM_LOCGHIAsmNE_LOCGHIAsmNH_LOCGHIAsmNHE_LOCGHIAsmNL_LOCGHIAsmNLE_LOCGHIAsmNLH_LOCGHIAsmNM_LOCGHIAsmNO_LOCGHIAsmNP_LOCGHIAsmNZ_LOCGHIAsmO_LOCGHIAsmP_LOCGHIAsmZ_LOCHHI_LOCHHIAsm_LOCHHIAsmE_LOCHHIAsmH_LOCHHIAsmHE_LOCHHIAsmL_LOCHHIAsmLE_LOCHHIAsmLH_LOCHHIAsmM_LOCHHIAsmNE_LOCHHIAsmNH_LOCHHIAsmNHE_LOCHHIAsmNL_LOCHHIAsmNLE_LOCHHIAsmNLH_LOCHHIAsmNM_LOCHHIAsmNO_LOCHHIAsmNP_LOCHHIAsmNZ_LOCHHIAsmO_LOCHHIAsmP_LOCHHIAsmZ_LOCHI_LOCHIAsm_LOCHIAsmE_LOCHIAsmH_LOCHIAsmHE_LOCHIAsmL_LOCHIAsmLE_LOCHIAsmLH_LOCHIAsmM_LOCHIAsmNE_LOCHIAsmNH_LOCHIAsmNHE_LOCHIAsmNL_LOCHIAsmNLE_LOCHIAsmNLH_LOCHIAsmNM_LOCHIAsmNO_LOCHIAsmNP_LOCHIAsmNZ_LOCHIAsmO_LOCHIAsmP_LOCHIAsmZ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCFH_LOCFHAsm_LOCFHAsmE_LOCFHAsmH_LOCFHAsmHE_LOCFHAsmL_LOCFHAsmLE_LOCFHAsmLH_LOCFHAsmM_LOCFHAsmNE_LOCFHAsmNH_LOCFHAsmNHE_LOCFHAsmNL_LOCFHAsmNLE_LOCFHAsmNLH_LOCFHAsmNM_LOCFHAsmNO_LOCFHAsmNP_LOCFHAsmNZ_LOCFHAsmO_LOCFHAsmP_LOCFHAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ_LOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCFH_STOCFHAsm_STOCFHAsmE_STOCFHAsmH_STOCFHAsmHE_STOCFHAsmL_STOCFHAsmLE_STOCFHAsmLH_STOCFHAsmM_STOCFHAsmNE_STOCFHAsmNH_STOCFHAsmNHE_STOCFHAsmNL_STOCFHAsmNLE_STOCFHAsmNLH_STOCFHAsmNM_STOCFHAsmNO_STOCFHAsmNP_STOCFHAsmNZ_STOCFHAsmO_STOCFHAsmP_STOCFHAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ_STOCMux") 0, false, false,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("LBR_LGR_LHR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #61
  {DBGFIELD("LGBR_LGFR_LGHR")     1, false, false,  1, 1,  1, 1,  0, 0}, // #62
  {DBGFIELD("LTGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #63
  {DBGFIELD("LTGFR")              1, false, false,  1, 1,  1, 1,  0, 0}, // #64
  {DBGFIELD("LB_LBH_LBMux")       2, false, false,  4, 2,  6, 3,  0, 0}, // #65
  {DBGFIELD("LH_LHY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #66
  {DBGFIELD("LHH_LHMux_LHRL")     2, false, false,  4, 2,  6, 3,  0, 0}, // #67
  {DBGFIELD("LGB_LGF_LGH")        2, false, false,  4, 2,  6, 3,  0, 0}, // #68
  {DBGFIELD("LGFRL_LGHRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #69
  {DBGFIELD("LLCR_LLCRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #70
  {DBGFIELD("LLHR_LLHRMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #71
  {DBGFIELD("LLGCR_LLGFR_LLGHR_LLGTR") 1, false, false,  1, 1,  1, 1,  0, 0}, // #72
  {DBGFIELD("LLC_LLCMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #73
  {DBGFIELD("LLH_LLHMux")         1, false, false,  3, 1,  2, 1,  0, 0}, // #74
  {DBGFIELD("LLCH_LLHH")          2, false, false,  4, 2,  6, 3,  0, 0}, // #75
  {DBGFIELD("LLHRL")              1, false, false,  3, 1,  2, 1,  0, 0}, // #76
  {DBGFIELD("LLGC_LLGF_LLGFRL_LLGH_LLGHRL_LLGT") 1, false, false,  3, 1,  2, 1,  0, 0}, // #77
  {DBGFIELD("LLZRGF")             0, false, false,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("LLGFAT_LLGTAT")      0, false, false,  0, 0,  0, 0,  0, 0}, // #79
  {DBGFIELD("STC_STCH_STCMux_STCY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #80
  {DBGFIELD("STH_STHH_STHMux_STHRL_STHY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #81
  {DBGFIELD("STCM_STCMH_STCMY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #82
  {DBGFIELD("LM_LMG_LMH_LMY")     5, true, true, 14, 1, 35, 7,  0, 0}, // #83
  {DBGFIELD("LMD")                1, true, true,  3, 1, 32, 3,  0, 0}, // #84
  {DBGFIELD("STM_STMG_STMH_STMY") 5, true, true, 15, 2, 45, 7,  0, 0}, // #85
  {DBGFIELD("LRVGR_LRVR")         1, false, false,  1, 1,  1, 1,  0, 0}, // #86
  {DBGFIELD("LRV_LRVG_LRVH")      2, false, false,  4, 2,  6, 3,  0, 0}, // #87
  {DBGFIELD("STRV_STRVG_STRVH")   2, false, false,  4, 2,  6, 3,  0, 0}, // #88
  {DBGFIELD("MVCIN")              1, true, true,  3, 1, 32, 3,  0, 0}, // #89
  {DBGFIELD("LA_LARL_LAY")        1, false, false,  1, 1,  1, 1,  0, 0}, // #90
  {DBGFIELD("GOT")                1, false, false,  1, 1,  1, 1,  0, 0}, // #91
  {DBGFIELD("LPGR_LPR")           1, false, false,  1, 1, 52, 2,  0, 0}, // #92
  {DBGFIELD("LNGFR_LPGFR")        2, true, true,  8, 1, 17, 4,  0, 0}, // #93
  {DBGFIELD("LNGR_LNR")           1, false, false,  1, 1, 52, 2,  0, 0}, // #94
  {DBGFIELD("LCGR_LCR")           1, false, false,  1, 1,  1, 1,  0, 0}, // #95
  {DBGFIELD("LCGFR")              2, true, true,  8, 1, 51, 4,  0, 0}, // #96
  {DBGFIELD("IC_ICY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #97
  {DBGFIELD("IC32_IC32Y")         2, false, false,  4, 2,  6, 3,  0, 0}, // #98
  {DBGFIELD("ICM_ICMH_ICMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #99
  {DBGFIELD("IIFMux_IIHMux_IILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #100
  {DBGFIELD("IIHF_IIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIHH_IIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("IIHL_IIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #103
  {DBGFIELD("IILF_IILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #104
  {DBGFIELD("IILH_IILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #105
  {DBGFIELD("IILL_IILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #106
  {DBGFIELD("A_AY")               2, false, false,  4, 2,  6, 3,  0, 0}, // #107
  {DBGFIELD("AH_AHY")             3, true, true, 10, 2, 21, 5,  0, 0}, // #108
  {DBGFIELD("AIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #109
  {DBGFIELD("AFI_AFIMux")         1, false, false,  1, 1,  1, 1,  0, 0}, // #110
  {DBGFIELD("AG")                 2, false, false,  4, 2,  6, 3,  0, 0}, // #111
  {DBGFIELD("AGFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #112
  {DBGFIELD("AGHI_AGHIK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #113
  {DBGFIELD("AGR_AGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #114
  {DBGFIELD("AHI_AHIK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #115
  {DBGFIELD("AHIMux_AHIMuxK")     1, false, false,  1, 1,  1, 1,  0, 0}, // #116
  {DBGFIELD("AL_ALY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #117
  {DBGFIELD("ALFI_ALHSIK")        1, false, false,  1, 1,  1, 1,  0, 0}, // #118
  {DBGFIELD("ALG_ALGF")           2, false, false,  4, 2,  6, 3,  0, 0}, // #119
  {DBGFIELD("ALGHSIK")            1, false, false,  1, 1,  1, 1,  0, 0}, // #120
  {DBGFIELD("ALGFI_ALGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #121
  {DBGFIELD("ALGR_ALGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #122
  {DBGFIELD("ALR_ALRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #123
  {DBGFIELD("AR_ARK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #124
  {DBGFIELD("AGSI_ALGSI_ALSI_ASI") 2, false, false,  4, 2,  6, 3,  0, 0}, // #125
  {DBGFIELD("ALC_ALCG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #126
  {DBGFIELD("ALCGR_ALCR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #127
  {DBGFIELD("AGF")                3, true, true, 10, 2, 21, 5,  0, 0}, // #128
  {DBGFIELD("AGFR")               2, true, true,  8, 1, 51, 4,  0, 0}, // #129
  {DBGFIELD("S_SG_SY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #130
  {DBGFIELD("SH_SHY")             3, true, true, 10, 2, 21, 5,  0, 0}, // #131
  {DBGFIELD("SGR_SGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("SLFI")               1, false, false,  1, 1,  1, 1,  0, 0}, // #133
  {DBGFIELD("SL_SLG_SLGF_SLY")    2, false, false,  4, 2,  6, 3,  0, 0}, // #134
  {DBGFIELD("SLGFI_SLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #135
  {DBGFIELD("SLGR_SLGRK")         1, false, false,  1, 1,  1, 1,  0, 0}, // #136
  {DBGFIELD("SLR_SLRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #137
  {DBGFIELD("SR_SRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #138
  {DBGFIELD("SLB_SLBG")           2, true, true,  4, 2, 12, 4,  0, 0}, // #139
  {DBGFIELD("SLBGR_SLBR")         1, true, true,  1, 1, 18, 3,  0, 0}, // #140
  {DBGFIELD("SGF")                3, true, true, 10, 2, 21, 5,  0, 0}, // #141
  {DBGFIELD("SGFR")               2, true, true,  8, 1, 51, 4,  0, 0}, // #142
  {DBGFIELD("N_NG_NY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #143
  {DBGFIELD("NGR_NGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #144
  {DBGFIELD("NIFMux_NIHMux_NILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #145
  {DBGFIELD("NI_NIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #146
  {DBGFIELD("NIHF_NIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #147
  {DBGFIELD("NIHH_NIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #148
  {DBGFIELD("NIHL_NIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #149
  {DBGFIELD("NILF_NILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #150
  {DBGFIELD("NILH_NILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #151
  {DBGFIELD("NILL_NILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("NR_NRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #153
  {DBGFIELD("NC")                 3, true, true, 17, 2, 58, 5,  0, 0}, // #154
  {DBGFIELD("O_OG_OY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #155
  {DBGFIELD("OGR_OGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #156
  {DBGFIELD("OI_OIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #157
  {DBGFIELD("OIFMux_OIHMux_OILMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #158
  {DBGFIELD("OIHF_OIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #159
  {DBGFIELD("OIHH_OIHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #160
  {DBGFIELD("OIHL_OIHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("OILF_OILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("OILH_OILH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #163
  {DBGFIELD("OILL_OILL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("OR_ORK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("OC")                 3, true, true, 17, 2, 58, 5,  0, 0}, // #166
  {DBGFIELD("X_XG_XY")            2, false, false,  4, 2,  6, 3,  0, 0}, // #167
  {DBGFIELD("XI_XIY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #168
  {DBGFIELD("XIFMux")             1, false, false,  1, 1,  1, 1,  0, 0}, // #169
  {DBGFIELD("XGR_XGRK")           1, false, false,  1, 1,  1, 1,  0, 0}, // #170
  {DBGFIELD("XIHF_XIHF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #171
  {DBGFIELD("XILF_XILF64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #172
  {DBGFIELD("XR_XRK")             1, false, false,  1, 1,  1, 1,  0, 0}, // #173
  {DBGFIELD("XC")                 3, true, true, 17, 2, 58, 5,  0, 0}, // #174
  {DBGFIELD("MS_MSGF_MSY")        2, false, false,  4, 2, 63, 3,  0, 0}, // #175
  {DBGFIELD("MSFI_MSR")           1, false, false,  1, 1, 66, 2,  0, 0}, // #176
  {DBGFIELD("MSG")                2, false, false,  4, 2, 68, 3,  0, 0}, // #177
  {DBGFIELD("MSGR")               1, false, false,  1, 1, 29, 2,  0, 0}, // #178
  {DBGFIELD("MSGFI_MSGFR")        1, false, false,  1, 1, 66, 2,  0, 0}, // #179
  {DBGFIELD("MLG")                2, true, true,  4, 2, 71, 4,  0, 0}, // #180
  {DBGFIELD("MLGR")               1, true, true,  1, 1, 60, 3,  0, 0}, // #181
  {DBGFIELD("MGHI")               1, false, false,  1, 1, 75, 2,  0, 0}, // #182
  {DBGFIELD("MHI")                1, false, false,  1, 1, 75, 2,  0, 0}, // #183
  {DBGFIELD("MH_MHY")             2, false, false,  4, 2, 77, 3,  0, 0}, // #184
  {DBGFIELD("MLR_MR")             1, true, true,  1, 1, 80, 3,  0, 0}, // #185
  {DBGFIELD("M_MFY_ML")           2, true, true,  4, 2, 12, 4,  0, 0}, // #186
  {DBGFIELD("DR")                 7, true, true, 19, 2, 83, 9,  0, 0}, // #187
  {DBGFIELD("D")                  7, true, true, 21, 3, 92, 9,  0, 0}, // #188
  {DBGFIELD("DSGFR_DSGR")         6, true, true, 21, 2, 101, 8,  0, 0}, // #189
  {DBGFIELD("DSG_DSGF")           6, true, true, 24, 3, 109, 8,  0, 0}, // #190
  {DBGFIELD("DLR")                7, true, true, 19, 2, 83, 9,  0, 0}, // #191
  {DBGFIELD("DLGR")               7, true, true, 19, 2, 83, 9,  0, 0}, // #192
  {DBGFIELD("DL_DLG")             7, true, true, 21, 3, 92, 9,  0, 0}, // #193
  {DBGFIELD("SLL_SLLG_SLLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("SRL_SRLG_SRLK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #195
  {DBGFIELD("SRA_SRAG_SRAK")      1, false, false,  1, 1,  1, 1,  0, 0}, // #196
  {DBGFIELD("SLA_SLAG_SLAK")      1, false, false,  1, 1, 52, 2,  0, 0}, // #197
  {DBGFIELD("SLDA_SLDL_SRDA_SRDL") 4, false, false, 22, 1, 117, 5,  0, 0}, // #198
  {DBGFIELD("RLL_RLLG")           2, false, false,  4, 2, 22, 3,  0, 0}, // #199
  {DBGFIELD("RISBG_RISBG32_RISBGN") 0, false, false,  0, 0,  0, 0,  0, 0}, // #200
  {DBGFIELD("RISBHG_RISBHH_RISBHL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #201
  {DBGFIELD("RISBLG_RISBLH_RISBLL") 1, false, false,  1, 1,  1, 1,  0, 0}, // #202
  {DBGFIELD("RISBMux")            1, false, false,  1, 1,  1, 1,  0, 0}, // #203
  {DBGFIELD("RNSBG_ROSBG_RXSBG")  2, true, true,  8, 1, 17, 4,  0, 0}, // #204
  {DBGFIELD("C_CG_CMux_CRL_CY")   2, false, false,  4, 2,  6, 3,  0, 0}, // #205
  {DBGFIELD("CFI_CFIMux_CHI_CHIMux") 1, false, false,  1, 1,  1, 1,  0, 0}, // #206
  {DBGFIELD("CGFI_CGHI")          1, false, false,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("CGHSI_CGRL")         2, false, false,  4, 2,  6, 3,  0, 0}, // #208
  {DBGFIELD("CGR_CR")             1, false, false,  1, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("CIH")                1, false, false,  1, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("CHF_CHSI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #211
  {DBGFIELD("CL_CLFHSI_CLMux_CLY") 2, false, false,  4, 2,  6, 3,  0, 0}, // #212
  {DBGFIELD("CLFI_CLFIMux")       1, false, false,  1, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("CLG_CLGHRL_CLGHSI")  2, false, false,  4, 2,  6, 3,  0, 0}, // #214
  {DBGFIELD("CLGF_CLGFRL")        2, false, false,  4, 2,  6, 3,  0, 0}, // #215
  {DBGFIELD("CLGFI_CLGFR")        1, false, false,  1, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("CLGR")               1, false, false,  1, 1,  1, 1,  0, 0}, // #217
  {DBGFIELD("CLGRL")              2, false, false,  4, 2,  6, 3,  0, 0}, // #218
  {DBGFIELD("CLHF_CLHHSI_CLHRL")  2, false, false,  4, 2,  6, 3,  0, 0}, // #219
  {DBGFIELD("CLIH")               1, false, false,  1, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("CLI_CLIY")           2, false, false,  4, 2,  6, 3,  0, 0}, // #221
  {DBGFIELD("CLR")                1, false, false,  1, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("CLRL")               2, false, false,  4, 2,  6, 3,  0, 0}, // #223
  {DBGFIELD("CH_CHRL_CHY")        3, true, true, 10, 2, 578, 5,  0, 0}, // #224
  {DBGFIELD("CGH_CGHRL")          3, true, true, 10, 2, 578, 5,  0, 0}, // #225
  {DBGFIELD("CHHSI")              3, true, true, 10, 2, 578, 5,  0, 0}, // #226
  {DBGFIELD("CGF_CGFRL")          3, true, true, 10, 2, 583, 6,  0, 0}, // #227
  {DBGFIELD("CGFR")               2, true, true,  8, 1, 51, 4,  0, 0}, // #228
  {DBGFIELD("CLC")                3, true, true, 17, 2, 58, 5,  0, 0}, // #229
  {DBGFIELD("CLCL_CLCLE_CLCLU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #230
  {DBGFIELD("CLST")               1, true, true,  3, 1, 32, 3,  0, 0}, // #231
  {DBGFIELD("TM_TMY")             2, false, false,  4, 2,  6, 3,  0, 0}, // #232
  {DBGFIELD("TMHMux_TMLMux")      1, false, false,  1, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("TMHH_TMHH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #234
  {DBGFIELD("TMHL_TMHL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("TMLH_TMLH64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #236
  {DBGFIELD("TMLL_TMLL64")        1, false, false,  1, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("CLM_CLMH_CLMY")      2, false, false,  4, 2,  6, 3,  0, 0}, // #238
  {DBGFIELD("PFD_PFDRL")          1, true, true,  3, 1,  3, 2,  0, 0}, // #239
  {DBGFIELD("BPP")                0, false, false,  0, 0,  0, 0,  0, 0}, // #240
  {DBGFIELD("BPRP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #241
  {DBGFIELD("NIAI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #242
  {DBGFIELD("Serialize")          1, false, true,  3, 1,  3, 2,  0, 0}, // #243
  {DBGFIELD("LAA_LAAG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #244
  {DBGFIELD("LAAL_LAALG")         2, false, false,  4, 2,  6, 3,  0, 0}, // #245
  {DBGFIELD("LAN_LANG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #246
  {DBGFIELD("LAO_LAOG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #247
  {DBGFIELD("LAX_LAXG")           2, false, false,  4, 2,  6, 3,  0, 0}, // #248
  {DBGFIELD("TS")                 2, false, true,  4, 2,  6, 4,  0, 0}, // #249
  {DBGFIELD("CS_CSG_CSY")         3, true, true, 10, 2, 578, 5,  0, 0}, // #250
  {DBGFIELD("CDS_CDSY")           6, true, true, 27, 2, 127, 8,  0, 0}, // #251
  {DBGFIELD("CDSG")               8, true, true, 29, 2, 135, 10,  0, 0}, // #252
  {DBGFIELD("CSST")               1, true, true,  1, 1, 42, 3,  0, 0}, // #253
  {DBGFIELD("PLO")                1, true, true,  3, 1, 32, 3,  0, 0}, // #254
  {DBGFIELD("LPQ")                2, true, true, 16, 1, 145, 4,  0, 0}, // #255
  {DBGFIELD("STPQ")               4, true, true, 31, 2, 149, 6,  0, 0}, // #256
  {DBGFIELD("LPD_LPDG")           2, true, true, 16, 1, 145, 4,  0, 0}, // #257
  {DBGFIELD("TR_TRE_TRT_TRTE_TRTEOpt_TRTR_TRTRE_TRTREOpt") 1, true, true,  1, 1, 42, 3,  0, 0}, // #258
  {DBGFIELD("TROO_TROOOpt_TROT_TROTOpt_TRTO_TRTOOpt_TRTT_TRTTOpt") 1, true, true,  1, 1, 42, 3,  0, 0}, // #259
  {DBGFIELD("CU12_CU12Opt_CU14_CU14Opt_CU21_CU21Opt_CU24_CU24Opt_CU41_CU42") 1, true, true,  1, 1, 42, 3,  0, 0}, // #260
  {DBGFIELD("CUTFU_CUTFUOpt_CUUTF_CUUTFOpt") 1, true, true,  1, 1, 42, 3,  0, 0}, // #261
  {DBGFIELD("KM_KMC_KMCTR_KMF_KMO") 1, true, true,  1, 1, 42, 3,  0, 0}, // #262
  {DBGFIELD("KIMD_KLMD_KMAC_PCC_PPNO") 0, false, false,  0, 0,  0, 0,  0, 0}, // #263
  {DBGFIELD("CVB_CVBG_CVBY")      3, true, true, 33, 3, 155, 5,  0, 0}, // #264
  {DBGFIELD("CVD_CVDG_CVDY")      3, true, true, 36, 2, 160, 5,  0, 0}, // #265
  {DBGFIELD("MVN_MVO_MVZ")        1, true, true,  3, 1, 32, 3,  0, 0}, // #266
  {DBGFIELD("PACK_PKA_PKU")       1, true, true,  3, 1, 32, 3,  0, 0}, // #267
  {DBGFIELD("UNPK_UNPKA_UNPKU")   1, true, true,  3, 1, 32, 3,  0, 0}, // #268
  {DBGFIELD("AP_SP_ZAP")          7, true, true, 153, 3, 165, 9,  0, 0}, // #269
  {DBGFIELD("DP_MP")              7, true, true, 153, 3, 174, 9,  0, 0}, // #270
  {DBGFIELD("SRP")                5, true, true, 156, 3, 183, 7,  0, 0}, // #271
  {DBGFIELD("CP")                 5, true, true, 159, 2, 190, 7,  0, 0}, // #272
  {DBGFIELD("TP")                 3, true, true, 161, 2, 197, 5,  0, 0}, // #273
  {DBGFIELD("ED_EDMK")            1, true, true,  3, 1, 32, 3,  0, 0}, // #274
  {DBGFIELD("CPYA_EAR_SAR")       1, false, false,  3, 1,  2, 1,  0, 0}, // #275
  {DBGFIELD("LAE_LAEY")           2, true, true,  4, 2, 202, 4,  0, 0}, // #276
  {DBGFIELD("LAM_LAMY_STAM_STAMY") 1, true, true,  3, 1, 32, 3,  0, 0}, // #277
  {DBGFIELD("IPM")                1, false, true,  1, 1, 18, 3,  0, 0}, // #278
  {DBGFIELD("SPM")                1, false, true,  3, 1,  3, 2,  0, 0}, // #279
  {DBGFIELD("BAL_BALR")           3, true, true, 10, 2, 206, 5,  0, 0}, // #280
  {DBGFIELD("TAM")                1, false, false,  1, 1,  1, 1,  0, 0}, // #281
  {DBGFIELD("SAM24_SAM31_SAM64")  1, false, true,  3, 1,  3, 2,  0, 0}, // #282
  {DBGFIELD("BSM")                2, true, true,  4, 2,  6, 4,  0, 0}, // #283
  {DBGFIELD("BASSM")              3, true, true, 10, 2, 21, 5,  0, 0}, // #284
  {DBGFIELD("TBEGIN_TBEGINC_TBEGIN_nofloat") 0, false, false,  0, 0,  0, 0,  0, 0}, // #285
  {DBGFIELD("TEND")               0, false, false,  0, 0,  0, 0,  0, 0}, // #286
  {DBGFIELD("TABORT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #287
  {DBGFIELD("ETND")               0, false, false,  0, 0,  0, 0,  0, 0}, // #288
  {DBGFIELD("NTSTG")              0, false, false,  0, 0,  0, 0,  0, 0}, // #289
  {DBGFIELD("PPA")                0, false, false,  0, 0,  0, 0,  0, 0}, // #290
  {DBGFIELD("FLOGR")              1, true, true,  1, 1, 80, 3,  0, 0}, // #291
  {DBGFIELD("POPCNT")             1, false, false,  1, 1, 18, 2,  0, 0}, // #292
  {DBGFIELD("AEXT128_64")         1, false, false,  1, 1,  1, 1,  0, 0}, // #293
  {DBGFIELD("ZEXT128_32_ZEXT128_64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #294
  {DBGFIELD("SRST")               2, false, false,  4, 2, 31, 3,  0, 0}, // #295
  {DBGFIELD("SRSTU")              1, false, false,  3, 1, 32, 2,  0, 0}, // #296
  {DBGFIELD("CUSE")               1, true, true,  3, 1, 32, 3,  0, 0}, // #297
  {DBGFIELD("CFC")                1, true, true,  3, 1, 32, 3,  0, 0}, // #298
  {DBGFIELD("UPT")                1, true, true,  3, 1, 32, 3,  0, 0}, // #299
  {DBGFIELD("CKSM")               1, true, true,  3, 1, 32, 3,  0, 0}, // #300
  {DBGFIELD("CMPSC")              1, true, true,  3, 1, 32, 3,  0, 0}, // #301
  {DBGFIELD("MVCK")               1, true, true,  3, 1, 208, 3,  0, 0}, // #302
  {DBGFIELD("MC")                 1, false, false,  1, 1,  1, 1,  0, 0}, // #303
  {DBGFIELD("ECAG")               1, false, false,  1, 1, 42, 2,  0, 0}, // #304
  {DBGFIELD("ECTG")               2, false, false,  4, 2, 220, 3,  0, 0}, // #305
  {DBGFIELD("EPSW")               1, false, false,  1, 1, 42, 2,  0, 0}, // #306
  {DBGFIELD("EX_EXRL")            1, true, true,  3, 1,  3, 2,  0, 0}, // #307
  {DBGFIELD("PR")                 1, false, false,  1, 1, 42, 2,  0, 0}, // #308
  {DBGFIELD("STCK_STCKF")         2, false, false,  4, 2, 68, 3,  0, 0}, // #309
  {DBGFIELD("STCKE")              2, false, false,  4, 2, 202, 3,  0, 0}, // #310
  {DBGFIELD("STFLE")              2, false, false,  4, 2,  6, 3,  0, 0}, // #311
  {DBGFIELD("SVC")                1, false, false,  1, 1, 42, 2,  0, 0}, // #312
  {DBGFIELD("STRAG")              2, false, false,  4, 2,  6, 3,  0, 0}, // #313
  {DBGFIELD("InsnE_InsnRI_InsnRIE_InsnRIL_InsnRILU_InsnRIS_InsnRR_InsnRRE_InsnRRF_InsnRRS_InsnRS_InsnRSE_InsnRSI_InsnRSY_InsnRX_InsnRXE_InsnRXF_InsnRXY_InsnS_InsnSI_InsnSIL_InsnSIY_InsnSS_InsnSSE_InsnSSF") 0, false, false,  0, 0,  0, 0,  0, 0}, // #314
  {DBGFIELD("SelectF128_SelectF32_SelectF64") 1, false, false,  1, 1,  1, 1,  0, 0}, // #315
  {DBGFIELD("CondStoreF32_CondStoreF32Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #316
  {DBGFIELD("CondStoreF64_CondStoreF64Inv") 1, false, false,  1, 1,  1, 1,  0, 0}, // #317
  {DBGFIELD("LZDR_LZER")          1, false, false,  1, 1,  1, 1,  0, 0}, // #318
  {DBGFIELD("LZXR")               2, true, true,  8, 1, 51, 4,  0, 0}, // #319
  {DBGFIELD("LER")                1, false, false,  1, 1,  1, 1,  0, 0}, // #320
  {DBGFIELD("LDGR_LDR_LDR32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #321
  {DBGFIELD("LGDR")               1, false, false,  1, 1, 18, 2,  0, 0}, // #322
  {DBGFIELD("LXR")                2, true, true,  8, 1, 51, 4,  0, 0}, // #323
  {DBGFIELD("LTDBR_LTEBR")        1, false, false, 39, 1, 30, 1,  0, 0}, // #324
  {DBGFIELD("LTEBRCompare_LTEBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #325
  {DBGFIELD("LTDBRCompare_LTDBRCompare_VecPseudo") 1, false, false, 39, 1, 30, 1,  0, 0}, // #326
  {DBGFIELD("LTXBR")              2, true, true, 19, 1, 231, 4,  0, 0}, // #327
  {DBGFIELD("LTXBRCompare_LTXBRCompare_VecPseudo") 2, true, true, 19, 1, 231, 4,  0, 0}, // #328
  {DBGFIELD("CPSDRdd_CPSDRds")    2, true, true,  8, 1, 74, 4,  0, 0}, // #329
  {DBGFIELD("CPSDRsd_CPSDRss")    2, true, true,  8, 1, 74, 4,  0, 0}, // #330
  {DBGFIELD("LE_LEY")             1, false, false,  3, 1,  2, 1,  0, 0}, // #331
  {DBGFIELD("LD_LDE32_LDY")       1, false, false,  3, 1,  2, 1,  0, 0}, // #332
  {DBGFIELD("LX")                 1, false, false,  3, 1,  2, 1,  0, 0}, // #333
  {DBGFIELD("STD_STDY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #334
  {DBGFIELD("STE_STEY")           2, false, false,  4, 2, 12, 3,  0, 0}, // #335
  {DBGFIELD("STX")                2, false, false,  4, 2,  6, 3,  0, 0}, // #336
  {DBGFIELD("LEDBR_LEDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #337
  {DBGFIELD("LEXBR_LEXBRA")       2, false, false, 54, 1, 235, 3,  0, 0}, // #338
  {DBGFIELD("LDXBR_LDXBRA")       2, false, false, 54, 1, 235, 3,  0, 0}, // #339
  {DBGFIELD("LDEB")               2, false, false, 55, 2, 238, 3,  0, 0}, // #340
  {DBGFIELD("LDEBR")              1, false, false, 39, 1, 30, 1,  0, 0}, // #341
  {DBGFIELD("LXDB_LXEB")          3, true, true, 57, 2, 241, 5,  0, 0}, // #342
  {DBGFIELD("LXDBR_LXEBR")        2, true, true, 19, 1, 246, 4,  0, 0}, // #343
  {DBGFIELD("CEFBR_CEFBRA_CEGBR_CEGBRA") 2, true, true, 59, 2, 250, 4,  0, 0}, // #344
  {DBGFIELD("CDFBR_CDFBRA_CDGBR_CDGBRA") 2, true, true, 59, 2, 250, 4,  0, 0}, // #345
  {DBGFIELD("CXFBR_CXFBRA_CXGBR_CXGBRA") 3, true, true, 61, 2, 254, 5,  0, 0}, // #346
  {DBGFIELD("CELFBR_CELGBR")      2, true, true, 59, 2, 250, 4,  0, 0}, // #347
  {DBGFIELD("CDLFBR_CDLGBR")      2, true, true, 59, 2, 250, 4,  0, 0}, // #348
  {DBGFIELD("CXLFBR_CXLGBR")      3, true, true, 61, 2, 254, 5,  0, 0}, // #349
  {DBGFIELD("CFDBR_CFDBRA_CFEBR_CFEBRA") 2, true, true, 59, 2, 259, 4,  0, 0}, // #350
  {DBGFIELD("CGDBR_CGDBRA_CGEBR_CGEBRA") 2, true, true, 59, 2, 259, 4,  0, 0}, // #351
  {DBGFIELD("CFXBR_CFXBRA_CGXBR_CGXBRA") 3, true, true, 63, 2, 263, 5,  0, 0}, // #352
  {DBGFIELD("CLFEBR")             2, true, true, 59, 2, 268, 4,  0, 0}, // #353
  {DBGFIELD("CLFDBR")             2, true, true, 59, 2, 268, 4,  0, 0}, // #354
  {DBGFIELD("CLGDBR_CLGEBR")      2, true, true, 59, 2, 268, 4,  0, 0}, // #355
  {DBGFIELD("CLFXBR_CLGXBR")      3, true, true, 63, 2, 263, 5,  0, 0}, // #356
  {DBGFIELD("LCDBR_LNDBR_LPDBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #357
  {DBGFIELD("LCEBR_LNEBR_LPEBR")  1, false, false, 39, 1, 30, 1,  0, 0}, // #358
  {DBGFIELD("LCDFR_LCDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #359
  {DBGFIELD("LNDFR_LNDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #360
  {DBGFIELD("LPDFR_LPDFR_32")     1, false, false,  1, 1,  1, 1,  0, 0}, // #361
  {DBGFIELD("LCXBR_LNXBR_LPXBR")  2, true, true, 19, 1, 231, 4,  0, 0}, // #362
  {DBGFIELD("SQDB_SQEB")          2, false, false, 55, 2, 272, 3,  0, 0}, // #363
  {DBGFIELD("SQDBR_SQEBR")        1, false, false, 39, 1, 275, 2,  0, 0}, // #364
  {DBGFIELD("SQXBR")              2, true, true, 19, 1, 277, 4,  0, 0}, // #365
  {DBGFIELD("FIEBR_FIEBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #366
  {DBGFIELD("FIDBR_FIDBRA")       1, false, false, 39, 1, 30, 1,  0, 0}, // #367
  {DBGFIELD("FIXBR_FIXBRA")       2, true, true, 19, 1, 281, 4,  0, 0}, // #368
  {DBGFIELD("ADB_AEB")            2, false, false, 55, 2, 238, 3,  0, 0}, // #369
  {DBGFIELD("ADBR_AEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #370
  {DBGFIELD("AXBR")               2, true, true, 19, 1, 285, 4,  0, 0}, // #371
  {DBGFIELD("SDB_SEB")            2, false, false, 55, 2, 238, 3,  0, 0}, // #372
  {DBGFIELD("SDBR_SEBR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #373
  {DBGFIELD("SXBR")               2, true, true, 19, 1, 285, 4,  0, 0}, // #374
  {DBGFIELD("MDB_MDEB_MEEB")      2, false, false, 55, 2, 238, 3,  0, 0}, // #375
  {DBGFIELD("MDBR_MDEBR_MEEBR")   1, false, false, 39, 1, 30, 1,  0, 0}, // #376
  {DBGFIELD("MXDB")               3, true, true, 57, 2, 241, 5,  0, 0}, // #377
  {DBGFIELD("MXDBR")              2, true, true, 19, 1, 246, 4,  0, 0}, // #378
  {DBGFIELD("MXBR")               2, true, true, 19, 1, 277, 4,  0, 0}, // #379
  {DBGFIELD("MAEB_MSEB")          2, true, true, 55, 2, 289, 4,  0, 0}, // #380
  {DBGFIELD("MAEBR_MSEBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #381
  {DBGFIELD("MADB_MSDB")          2, true, true, 55, 2, 289, 4,  0, 0}, // #382
  {DBGFIELD("MADBR_MSDBR")        1, true, true, 39, 1, 30, 2,  0, 0}, // #383
  {DBGFIELD("DDB_DEB")            2, false, false, 55, 2, 272, 3,  0, 0}, // #384
  {DBGFIELD("DDBR_DEBR")          1, false, false, 39, 1, 275, 2,  0, 0}, // #385
  {DBGFIELD("DXBR")               2, true, true, 19, 1, 277, 4,  0, 0}, // #386
  {DBGFIELD("DIDBR_DIEBR")        1, true, true, 39, 1, 293, 3,  0, 0}, // #387
  {DBGFIELD("CDB_CEB_KDB_KEB")    2, false, false, 55, 2, 238, 3,  0, 0}, // #388
  {DBGFIELD("CDBR_CEBR_KDBR_KEBR") 1, false, false, 39, 1, 30, 1,  0, 0}, // #389
  {DBGFIELD("CXBR_KXBR")          2, false, false, 54, 1, 296, 3,  0, 0}, // #390
  {DBGFIELD("TCDB_TCEB")          2, false, false, 55, 2, 299, 3,  0, 0}, // #391
  {DBGFIELD("TCXB")               3, true, true, 57, 2, 241, 5,  0, 0}, // #392
  {DBGFIELD("EFPC")               2, true, true,  4, 2,  1, 4,  0, 0}, // #393
  {DBGFIELD("STFPC")              1, true, true,  3, 1, 199, 3,  0, 0}, // #394
  {DBGFIELD("SFPC")               1, true, true,  3, 1, 199, 3,  0, 0}, // #395
  {DBGFIELD("LFPC")               2, true, true, 16, 1, 151, 4,  0, 0}, // #396
  {DBGFIELD("SFASR")              1, true, true,  1, 1, 42, 3,  0, 0}, // #397
  {DBGFIELD("LFAS")               2, true, true,  4, 2, 31, 4,  0, 0}, // #398
  {DBGFIELD("SRNM_SRNMB_SRNMT")   1, true, true,  1, 1, 52, 3,  0, 0}, // #399
  {DBGFIELD("LTDR_LTER")          1, false, false, 39, 1, 30, 1,  0, 0}, // #400
  {DBGFIELD("LTXR")               2, true, true, 19, 1, 231, 4,  0, 0}, // #401
  {DBGFIELD("LEDR_LRER")          1, false, false, 39, 1, 30, 1,  0, 0}, // #402
  {DBGFIELD("LEXR")               1, false, false, 39, 1, 30, 1,  0, 0}, // #403
  {DBGFIELD("LDXR_LRDR")          1, false, false, 39, 1, 30, 1,  0, 0}, // #404
  {DBGFIELD("LDE")                1, false, false,  3, 1,  2, 1,  0, 0}, // #405
  {DBGFIELD("LDER")               1, false, false,  1, 1,  1, 1,  0, 0}, // #406
  {DBGFIELD("LXD_LXE")            3, true, true, 57, 2, 241, 5,  0, 0}, // #407
  {DBGFIELD("LXDR_LXER")          2, true, true, 19, 1, 246, 4,  0, 0}, // #408
  {DBGFIELD("CEFR_CEGR")          2, true, true, 59, 2, 250, 4,  0, 0}, // #409
  {DBGFIELD("CDFR_CDGR")          2, true, true, 59, 2, 250, 4,  0, 0}, // #410
  {DBGFIELD("CXFR_CXGR")          3, true, true, 61, 2, 254, 5,  0, 0}, // #411
  {DBGFIELD("CFDR_CFER")          2, true, true, 59, 2, 259, 4,  0, 0}, // #412
  {DBGFIELD("CGDR_CGER")          2, true, true, 59, 2, 259, 4,  0, 0}, // #413
  {DBGFIELD("CFXR_CGXR")          3, true, true, 63, 2, 263, 5,  0, 0}, // #414
  {DBGFIELD("THDER_THDR")         1, false, false, 39, 1, 30, 1,  0, 0}, // #415
  {DBGFIELD("TBDR_TBEDR")         1, false, false, 39, 1, 30, 1,  0, 0}, // #416
  {DBGFIELD("LCDR_LNDR_LPDR")     1, false, false, 39, 1, 30, 1,  0, 0}, // #417
  {DBGFIELD("LCER_LNER_LPER")     1, false, false, 39, 1, 30, 1,  0, 0}, // #418
  {DBGFIELD("LCXR_LNXR_LPXR")     2, true, true, 19, 1, 231, 4,  0, 0}, // #419
  {DBGFIELD("HDR_HER")            1, false, false, 39, 1, 30, 1,  0, 0}, // #420
  {DBGFIELD("SQD_SQE")            2, false, false, 55, 2, 272, 3,  0, 0}, // #421
  {DBGFIELD("SQDR_SQER")          1, false, false, 39, 1, 275, 2,  0, 0}, // #422
  {DBGFIELD("SQXR")               2, true, true, 19, 1, 277, 4,  0, 0}, // #423
  {DBGFIELD("FIER")               1, false, false, 39, 1, 30, 1,  0, 0}, // #424
  {DBGFIELD("FIDR")               1, false, false, 39, 1, 30, 1,  0, 0}, // #425
  {DBGFIELD("FIXR")               2, true, true, 19, 1, 281, 4,  0, 0}, // #426
  {DBGFIELD("AD_AE_AU_AW")        2, false, false, 55, 2, 238, 3,  0, 0}, // #427
  {DBGFIELD("ADR_AER_AUR_AWR")    1, false, false, 39, 1, 30, 1,  0, 0}, // #428
  {DBGFIELD("AXR")                2, true, true, 19, 1, 285, 4,  0, 0}, // #429
  {DBGFIELD("SD_SE_SU_SW")        2, false, false, 55, 2, 238, 3,  0, 0}, // #430
  {DBGFIELD("SDR_SER_SUR_SWR")    1, false, false, 39, 1, 30, 1,  0, 0}, // #431
  {DBGFIELD("SXR")                2, true, true, 19, 1, 285, 4,  0, 0}, // #432
  {DBGFIELD("MD_MDE_ME_MEE")      2, false, false, 55, 2, 238, 3,  0, 0}, // #433
  {DBGFIELD("MDER_MDR_MEER_MER")  1, false, false, 39, 1, 30, 1,  0, 0}, // #434
  {DBGFIELD("MXD")                3, true, true, 57, 2, 241, 5,  0, 0}, // #435
  {DBGFIELD("MXDR")               2, true, true, 19, 1, 246, 4,  0, 0}, // #436
  {DBGFIELD("MXR")                2, true, true, 19, 1, 277, 4,  0, 0}, // #437
  {DBGFIELD("MY_MYH_MYL")         3, true, true, 57, 2, 241, 5,  0, 0}, // #438
  {DBGFIELD("MYHR_MYLR_MYR")      2, true, true, 19, 1, 246, 4,  0, 0}, // #439
  {DBGFIELD("MAE_MSE")            2, true, true, 55, 2, 289, 4,  0, 0}, // #440
  {DBGFIELD("MAER_MSER")          1, true, true, 39, 1, 30, 2,  0, 0}, // #441
  {DBGFIELD("MAD_MSD")            2, true, true, 55, 2, 289, 4,  0, 0}, // #442
  {DBGFIELD("MADR_MSDR")          1, true, true, 39, 1, 30, 2,  0, 0}, // #443
  {DBGFIELD("MAY_MAYH_MAYL")      3, true, true, 57, 2, 302, 5,  0, 0}, // #444
  {DBGFIELD("MAYHR_MAYLR_MAYR")   2, true, true, 19, 1, 83, 3,  0, 0}, // #445
  {DBGFIELD("DD_DE")              2, false, false, 55, 2, 272, 3,  0, 0}, // #446
  {DBGFIELD("DDR_DER")            1, false, false, 39, 1, 275, 2,  0, 0}, // #447
  {DBGFIELD("DXR")                2, true, true, 19, 1, 277, 4,  0, 0}, // #448
  {DBGFIELD("CD_CE")              2, false, false, 55, 2, 238, 3,  0, 0}, // #449
  {DBGFIELD("CDR_CER")            1, false, false, 39, 1, 30, 1,  0, 0}, // #450
  {DBGFIELD("CXR")                2, false, false, 54, 1, 307, 3,  0, 0}, // #451
  {DBGFIELD("LTDTR")              1, false, false, 33, 1, 310, 2,  0, 0}, // #452
  {DBGFIELD("LTXTR")              2, true, true, 97, 1, 312, 4,  0, 0}, // #453
  {DBGFIELD("LEDTR")              1, false, false, 33, 1, 316, 2,  0, 0}, // #454
  {DBGFIELD("LDXTR")              2, false, false, 65, 1, 318, 3,  0, 0}, // #455
  {DBGFIELD("LDETR")              1, false, false, 33, 1, 310, 2,  0, 0}, // #456
  {DBGFIELD("LXDTR")              2, true, true, 97, 1, 312, 4,  0, 0}, // #457
  {DBGFIELD("CDFTR_CDGTR_CDGTRA") 2, true, true, 33, 2, 321, 4,  0, 0}, // #458
  {DBGFIELD("CXFTR_CXGTR_CXGTRA") 3, true, true, 98, 2, 325, 5,  0, 0}, // #459
  {DBGFIELD("CDLFTR_CDLGTR")      2, true, true, 33, 2, 330, 4,  0, 0}, // #460
  {DBGFIELD("CXLFTR_CXLGTR")      3, true, true, 98, 2, 334, 5,  0, 0}, // #461
  {DBGFIELD("CFDTR_CGDTR_CGDTRA") 2, true, true, 33, 2, 321, 4,  0, 0}, // #462
  {DBGFIELD("CFXTR_CGXTR_CGXTRA") 3, true, true, 70, 2, 339, 5,  0, 0}, // #463
  {DBGFIELD("CLFDTR_CLGDTR")      2, true, true, 33, 2, 321, 4,  0, 0}, // #464
  {DBGFIELD("CLFXTR_CLGXTR")      3, true, true, 70, 2, 339, 5,  0, 0}, // #465
  {DBGFIELD("CDSTR_CDUTR")        2, true, true, 33, 2, 344, 4,  0, 0}, // #466
  {DBGFIELD("CXSTR_CXUTR")        4, true, true, 163, 2, 348, 6,  0, 0}, // #467
  {DBGFIELD("CSDTR_CUDTR")        2, true, true, 33, 2, 344, 4,  0, 0}, // #468
  {DBGFIELD("CSXTR_CUXTR")        4, true, true, 163, 2, 348, 6,  0, 0}, // #469
  {DBGFIELD("CDZT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #470
  {DBGFIELD("CXZT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #471
  {DBGFIELD("CZDT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #472
  {DBGFIELD("CZXT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #473
  {DBGFIELD("CDPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #474
  {DBGFIELD("CXPT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #475
  {DBGFIELD("CPDT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #476
  {DBGFIELD("CPXT")               0, false, false,  0, 0,  0, 0,  0, 0}, // #477
  {DBGFIELD("PFPO")               1, true, true,  3, 1, 32, 3,  0, 0}, // #478
  {DBGFIELD("FIDTR")              1, false, false, 33, 1, 310, 2,  0, 0}, // #479
  {DBGFIELD("FIXTR")              2, true, true, 97, 1, 312, 4,  0, 0}, // #480
  {DBGFIELD("EEDTR")              2, true, true, 33, 2, 375, 4,  0, 0}, // #481
  {DBGFIELD("EEXTR")              2, true, true, 33, 2, 375, 4,  0, 0}, // #482
  {DBGFIELD("ESDTR")              2, true, true, 33, 2, 375, 4,  0, 0}, // #483
  {DBGFIELD("ESXTR")              3, true, true, 70, 2, 379, 5,  0, 0}, // #484
  {DBGFIELD("ADTR_ADTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #485
  {DBGFIELD("AXTR_AXTRA")         2, true, true, 97, 1, 326, 4,  0, 0}, // #486
  {DBGFIELD("SDTR_SDTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #487
  {DBGFIELD("SXTR_SXTRA")         2, true, true, 97, 1, 326, 4,  0, 0}, // #488
  {DBGFIELD("MDTR_MDTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #489
  {DBGFIELD("MXTR_MXTRA")         2, true, true, 97, 1, 326, 4,  0, 0}, // #490
  {DBGFIELD("DDTR_DDTRA")         1, false, false, 33, 1, 316, 2,  0, 0}, // #491
  {DBGFIELD("DXTR_DXTRA")         2, true, true, 97, 1, 326, 4,  0, 0}, // #492
  {DBGFIELD("QADTR")              1, false, false, 33, 1, 316, 2,  0, 0}, // #493
  {DBGFIELD("QAXTR")              2, true, true, 97, 1, 326, 4,  0, 0}, // #494
  {DBGFIELD("RRDTR")              2, false, false, 33, 2, 315, 3,  0, 0}, // #495
  {DBGFIELD("RRXTR")              3, true, true, 98, 2, 325, 5,  0, 0}, // #496
  {DBGFIELD("SLDT_SRDT")          2, false, false, 84, 2, 365, 3,  0, 0}, // #497
  {DBGFIELD("SLXT_SRXT")          3, true, true, 165, 2, 384, 5,  0, 0}, // #498
  {DBGFIELD("IEDTR")              2, false, false, 33, 2, 330, 3,  0, 0}, // #499
  {DBGFIELD("IEXTR")              3, true, true, 98, 2, 389, 5,  0, 0}, // #500
  {DBGFIELD("CDTR_KDTR")          1, false, false, 33, 1, 331, 2,  0, 0}, // #501
  {DBGFIELD("CXTR_KXTR")          2, true, true, 65, 1, 371, 4,  0, 0}, // #502
  {DBGFIELD("CEDTR")              1, false, false, 33, 1, 394, 2,  0, 0}, // #503
  {DBGFIELD("CEXTR")              1, false, false, 33, 1, 396, 2,  0, 0}, // #504
  {DBGFIELD("TDCDT_TDCET_TDGDT_TDGET") 2, false, false, 84, 2, 398, 3,  0, 0}, // #505
  {DBGFIELD("TDCXT_TDGXT")        3, true, true, 165, 2, 384, 5,  0, 0}, // #506
  {DBGFIELD("VLR_VLR32_VLR64")    0, false, false,  0, 0,  0, 0,  0, 0}, // #507
  {DBGFIELD("VLGV_VLGVB_VLGVF_VLGVG_VLGVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #508
  {DBGFIELD("VLVG_VLVGB_VLVGF_VLVGG_VLVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #509
  {DBGFIELD("VLVGP_VLVGP32")      0, false, false,  0, 0,  0, 0,  0, 0}, // #510
  {DBGFIELD("VZERO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #511
  {DBGFIELD("VONE")               0, false, false,  0, 0,  0, 0,  0, 0}, // #512
  {DBGFIELD("VGBM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #513
  {DBGFIELD("VGM_VGMB_VGMF_VGMG_VGMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #514
  {DBGFIELD("VREPI_VREPIB_VREPIF_VREPIG_VREPIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #515
  {DBGFIELD("VLEIB_VLEIF_VLEIG_VLEIH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #516
  {DBGFIELD("VL_VLBB_VLL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #517
  {DBGFIELD("VL32_VL64")          0, false, false,  0, 0,  0, 0,  0, 0}, // #518
  {DBGFIELD("VLLEZ_VLLEZB_VLLEZF_VLLEZG_VLLEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #519
  {DBGFIELD("VLREP_VLREPB_VLREPF_VLREPG_VLREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #520
  {DBGFIELD("VLEB_VLEF_VLEG_VLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #521
  {DBGFIELD("VGEF_VGEG")          0, false, false,  0, 0,  0, 0,  0, 0}, // #522
  {DBGFIELD("VLM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #523
  {DBGFIELD("VST_VST32_VST64_VSTL") 0, false, false,  0, 0,  0, 0,  0, 0}, // #524
  {DBGFIELD("VSTEF_VSTEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #525
  {DBGFIELD("VSTEB_VSTEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #526
  {DBGFIELD("VSTM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #527
  {DBGFIELD("VSCEF_VSCEG")        0, false, false,  0, 0,  0, 0,  0, 0}, // #528
  {DBGFIELD("VMRH_VMRHB_VMRHF_VMRHG_VMRHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #529
  {DBGFIELD("VMRL_VMRLB_VMRLF_VMRLG_VMRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #530
  {DBGFIELD("VPERM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #531
  {DBGFIELD("VPDI")               0, false, false,  0, 0,  0, 0,  0, 0}, // #532
  {DBGFIELD("VREP_VREPB_VREPF_VREPG_VREPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #533
  {DBGFIELD("VSEL")               0, false, false,  0, 0,  0, 0,  0, 0}, // #534
  {DBGFIELD("VPK_VPKF_VPKG_VPKH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #535
  {DBGFIELD("VPKS_VPKSF_VPKSG_VPKSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #536
  {DBGFIELD("VPKSFS_VPKSGS_VPKSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #537
  {DBGFIELD("VPKLS_VPKLSF_VPKLSG_VPKLSH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #538
  {DBGFIELD("VPKLSFS_VPKLSGS_VPKLSHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #539
  {DBGFIELD("VSEG_VSEGB_VSEGF_VSEGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #540
  {DBGFIELD("VUPH_VUPHB_VUPHF_VUPHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #541
  {DBGFIELD("VUPL_VUPLB_VUPLF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #542
  {DBGFIELD("VUPLH_VUPLHB_VUPLHF_VUPLHH_VUPLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #543
  {DBGFIELD("VUPLL_VUPLLB_VUPLLF_VUPLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #544
  {DBGFIELD("VA_VAB_VAC_VACQ_VAF_VAG_VAH_VAQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #545
  {DBGFIELD("VACC_VACCB_VACCC_VACCCQ_VACCF_VACCG_VACCH_VACCQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #546
  {DBGFIELD("VAVG_VAVGB_VAVGF_VAVGG_VAVGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #547
  {DBGFIELD("VAVGL_VAVGLB_VAVGLF_VAVGLG_VAVGLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #548
  {DBGFIELD("VN_VNC_VNO")         0, false, false,  0, 0,  0, 0,  0, 0}, // #549
  {DBGFIELD("VO")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #550
  {DBGFIELD("VCKSM")              0, false, false,  0, 0,  0, 0,  0, 0}, // #551
  {DBGFIELD("VCLZ_VCLZB_VCLZF_VCLZG_VCLZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #552
  {DBGFIELD("VCTZ_VCTZB_VCTZF_VCTZG_VCTZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #553
  {DBGFIELD("VX")                 0, false, false,  0, 0,  0, 0,  0, 0}, // #554
  {DBGFIELD("VGFM")               0, false, false,  0, 0,  0, 0,  0, 0}, // #555
  {DBGFIELD("VGFMA_VGFMAB_VGFMAF_VGFMAG_VGFMAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #556
  {DBGFIELD("VGFMB_VGFMF_VGFMG_VGFMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #557
  {DBGFIELD("VLC_VLCB_VLCF_VLCG_VLCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #558
  {DBGFIELD("VLP_VLPB_VLPF_VLPG_VLPH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #559
  {DBGFIELD("VMX_VMXB_VMXF_VMXG_VMXH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #560
  {DBGFIELD("VMXL_VMXLB_VMXLF_VMXLG_VMXLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #561
  {DBGFIELD("VMN_VMNB_VMNF_VMNG_VMNH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #562
  {DBGFIELD("VMNL_VMNLB_VMNLF_VMNLG_VMNLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #563
  {DBGFIELD("VMAL_VMALB_VMALF")   0, false, false,  0, 0,  0, 0,  0, 0}, // #564
  {DBGFIELD("VMALE_VMALEB_VMALEF_VMALEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #565
  {DBGFIELD("VMALH_VMALHB_VMALHF_VMALHH_VMALHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #566
  {DBGFIELD("VMALO_VMALOB_VMALOF_VMALOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #567
  {DBGFIELD("VMAO_VMAOB_VMAOF_VMAOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #568
  {DBGFIELD("VMAE_VMAEB_VMAEF_VMAEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #569
  {DBGFIELD("VMAH_VMAHB_VMAHF_VMAHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #570
  {DBGFIELD("VME_VMEB_VMEF_VMEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #571
  {DBGFIELD("VMH_VMHB_VMHF_VMHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #572
  {DBGFIELD("VML_VMLB_VMLF")      0, false, false,  0, 0,  0, 0,  0, 0}, // #573
  {DBGFIELD("VMLE_VMLEB_VMLEF_VMLEH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #574
  {DBGFIELD("VMLH_VMLHB_VMLHF_VMLHH_VMLHW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #575
  {DBGFIELD("VMLO_VMLOB_VMLOF_VMLOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #576
  {DBGFIELD("VMO_VMOB_VMOF_VMOH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #577
  {DBGFIELD("VPOPCT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #578
  {DBGFIELD("VERLL_VERLLB_VERLLF_VERLLG_VERLLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #579
  {DBGFIELD("VERLLV_VERLLVB_VERLLVF_VERLLVG_VERLLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #580
  {DBGFIELD("VERIM_VERIMB_VERIMF_VERIMG_VERIMH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #581
  {DBGFIELD("VESL_VESLB_VESLF_VESLG_VESLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #582
  {DBGFIELD("VESLV_VESLVB_VESLVF_VESLVG_VESLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #583
  {DBGFIELD("VESRA_VESRAB_VESRAF_VESRAG_VESRAH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #584
  {DBGFIELD("VESRAV_VESRAVB_VESRAVF_VESRAVG_VESRAVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #585
  {DBGFIELD("VESRL_VESRLB_VESRLF_VESRLG_VESRLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #586
  {DBGFIELD("VESRLV_VESRLVB_VESRLVF_VESRLVG_VESRLVH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #587
  {DBGFIELD("VSL_VSLDB")          0, false, false,  0, 0,  0, 0,  0, 0}, // #588
  {DBGFIELD("VSLB")               0, false, false,  0, 0,  0, 0,  0, 0}, // #589
  {DBGFIELD("VSRA_VSRL")          0, false, false,  0, 0,  0, 0,  0, 0}, // #590
  {DBGFIELD("VSRAB_VSRLB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #591
  {DBGFIELD("VSB_VSBCBI_VSBCBIQ_VSBI_VSBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #592
  {DBGFIELD("VSCBI_VSCBIB_VSCBIF_VSCBIG_VSCBIH_VSCBIQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #593
  {DBGFIELD("VS_VSF_VSG_VSH_VSQ") 0, false, false,  0, 0,  0, 0,  0, 0}, // #594
  {DBGFIELD("VSUM_VSUMB_VSUMH")   0, false, false,  0, 0,  0, 0,  0, 0}, // #595
  {DBGFIELD("VSUMG_VSUMGF_VSUMGH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #596
  {DBGFIELD("VSUMQ_VSUMQF_VSUMQG") 0, false, false,  0, 0,  0, 0,  0, 0}, // #597
  {DBGFIELD("VEC_VECB_VECF_VECG_VECH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #598
  {DBGFIELD("VECL_VECLB_VECLF_VECLG_VECLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #599
  {DBGFIELD("VCEQ_VCEQB_VCEQF_VCEQG_VCEQH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #600
  {DBGFIELD("VCEQBS_VCEQFS_VCEQGS_VCEQHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #601
  {DBGFIELD("VCH_VCHB_VCHF_VCHG_VCHH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #602
  {DBGFIELD("VCHBS_VCHFS_VCHGS_VCHHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #603
  {DBGFIELD("VCHL_VCHLB_VCHLF_VCHLG_VCHLH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #604
  {DBGFIELD("VCHLBS_VCHLFS_VCHLGS_VCHLHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #605
  {DBGFIELD("VTM")                0, false, false,  0, 0,  0, 0,  0, 0}, // #606
  {DBGFIELD("VCDG_VCDGB_VCDLG_VCDLGB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #607
  {DBGFIELD("WCDGB_WCDLGB")       0, false, false,  0, 0,  0, 0,  0, 0}, // #608
  {DBGFIELD("VCGD_VCLGD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #609
  {DBGFIELD("VFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #610
  {DBGFIELD("WFADB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #611
  {DBGFIELD("VCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #612
  {DBGFIELD("WCGDB")              0, false, false,  0, 0,  0, 0,  0, 0}, // #613
  {DBGFIELD("VFA_VFI_VFM_VFS")    0, false, false,  0, 0,  0, 0,  0, 0}, // #614
  {DBGFIELD("VFIDB_VFMDB_VFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #615
  {DBGFIELD("WFIDB_WFMDB_WFSDB")  0, false, false,  0, 0,  0, 0,  0, 0}, // #616
  {DBGFIELD("VCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #617
  {DBGFIELD("WCLGDB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #618
  {DBGFIELD("VFLCDB_VFLNDB_VFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #619
  {DBGFIELD("WFLCDB_WFLNDB_WFLPDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #620
  {DBGFIELD("VFMA_VFMS")          0, false, false,  0, 0,  0, 0,  0, 0}, // #621
  {DBGFIELD("VFMADB_VFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #622
  {DBGFIELD("WFMADB_WFMSDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #623
  {DBGFIELD("VFPSO")              0, false, false,  0, 0,  0, 0,  0, 0}, // #624
  {DBGFIELD("VFPSODB_WFPSODB")    0, false, false,  0, 0,  0, 0,  0, 0}, // #625
  {DBGFIELD("VFTCI_VFTCIDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #626
  {DBGFIELD("WFTCIDB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #627
  {DBGFIELD("VLDE_VLED")          0, false, false,  0, 0,  0, 0,  0, 0}, // #628
  {DBGFIELD("VLDEB_VLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #629
  {DBGFIELD("WLDEB_WLEDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #630
  {DBGFIELD("VFD")                0, false, false,  0, 0,  0, 0,  0, 0}, // #631
  {DBGFIELD("VFDDB_WFDDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #632
  {DBGFIELD("VFSQ")               0, false, false,  0, 0,  0, 0,  0, 0}, // #633
  {DBGFIELD("VFSQDB_WFSQDB")      0, false, false,  0, 0,  0, 0,  0, 0}, // #634
  {DBGFIELD("VFCE_VFCH_VFCHE")    0, false, false,  0, 0,  0, 0,  0, 0}, // #635
  {DBGFIELD("VFCEDB_VFCHDB_VFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #636
  {DBGFIELD("WFC_WFK")            0, false, false,  0, 0,  0, 0,  0, 0}, // #637
  {DBGFIELD("WFCEDB_WFCHDB_WFCHEDB") 0, false, false,  0, 0,  0, 0,  0, 0}, // #638
  {DBGFIELD("VFCEDBS_VFCHDBS_VFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #639
  {DBGFIELD("WFCEDBS_WFCHDBS_WFCHEDBS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #640
  {DBGFIELD("WFCDB_WFKDB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #641
  {DBGFIELD("LEFR")               0, false, false,  0, 0,  0, 0,  0, 0}, // #642
  {DBGFIELD("LFER")               0, false, false,  0, 0,  0, 0,  0, 0}, // #643
  {DBGFIELD("VFAE_VFAEB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #644
  {DBGFIELD("VFAEBS")             0, false, false,  0, 0,  0, 0,  0, 0}, // #645
  {DBGFIELD("VFAEF_VFAEH")        0, false, false,  0, 0,  0, 0,  0, 0}, // #646
  {DBGFIELD("VFAEFS_VFAEHS")      0, false, false,  0, 0,  0, 0,  0, 0}, // #647
  {DBGFIELD("VFAEZB_VFAEZF_VFAEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #648
  {DBGFIELD("VFAEZBS_VFAEZFS_VFAEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #649
  {DBGFIELD("VFEE_VFEEB_VFEEF_VFEEH_VFEEZB_VFEEZF_VFEEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #650
  {DBGFIELD("VFEEBS_VFEEFS_VFEEHS_VFEEZBS_VFEEZFS_VFEEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #651
  {DBGFIELD("VFENE_VFENEB_VFENEF_VFENEH_VFENEZB_VFENEZF_VFENEZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #652
  {DBGFIELD("VFENEBS_VFENEFS_VFENEHS_VFENEZBS_VFENEZFS_VFENEZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #653
  {DBGFIELD("VISTR_VISTRB_VISTRF_VISTRH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #654
  {DBGFIELD("VISTRBS_VISTRFS_VISTRHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #655
  {DBGFIELD("VSTRC_VSTRCB_VSTRCF_VSTRCH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #656
  {DBGFIELD("VSTRCBS_VSTRCFS_VSTRCHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #657
  {DBGFIELD("VSTRCZB_VSTRCZF_VSTRCZH") 0, false, false,  0, 0,  0, 0,  0, 0}, // #658
  {DBGFIELD("VSTRCZBS_VSTRCZFS_VSTRCZHS") 0, false, false,  0, 0,  0, 0,  0, 0}, // #659
  {DBGFIELD("L_LFH_LMux_LRL_LY")  1, false, false,  3, 1,  2, 1,  0, 0}, // #660
  {DBGFIELD("LOCGR_LOCGRAsm_LOCGRAsmE_LOCGRAsmH_LOCGRAsmHE_LOCGRAsmL_LOCGRAsmLE_LOCGRAsmLH_LOCGRAsmM_LOCGRAsmNE_LOCGRAsmNH_LOCGRAsmNHE_LOCGRAsmNL_LOCGRAsmNLE_LOCGRAsmNLH_LOCGRAsmNM_LOCGRAsmNO_LOCGRAsmNP_LOCGRAsmNZ_LOCGRAsmO_LOCGRAsmP_LOCGRAsmZ_LOCR_LOCRAsm_LOCRAsmE_LOCRAsmH_LOCRAsmHE_LOCRAsmL_LOCRAsmLE_LOCRAsmLH_LOCRAsmM_LOCRAsmNE_LOCRAsmNH_LOCRAsmNHE_LOCRAsmNL_LOCRAsmNLE_LOCRAsmNLH_LOCRAsmNM_LOCRAsmNO_LOCRAsmNP_LOCRAsmNZ_LOCRAsmO_LOCRAsmP_LOCRAsmZ") 1, false, true,  1, 1, 52, 3,  0, 0}, // #661
  {DBGFIELD("LOC_LOCAsm_LOCAsmE_LOCAsmH_LOCAsmHE_LOCAsmL_LOCAsmLE_LOCAsmLH_LOCAsmM_LOCAsmNE_LOCAsmNH_LOCAsmNHE_LOCAsmNL_LOCAsmNLE_LOCAsmNLH_LOCAsmNM_LOCAsmNO_LOCAsmNP_LOCAsmNZ_LOCAsmO_LOCAsmP_LOCAsmZ_LOCG_LOCGAsm_LOCGAsmE_LOCGAsmH_LOCGAsmHE_LOCGAsmL_LOCGAsmLE_LOCGAsmLH_LOCGAsmM_LOCGAsmNE_LOCGAsmNH_LOCGAsmNHE_LOCGAsmNL_LOCGAsmNLE_LOCGAsmNLH_LOCGAsmNM_LOCGAsmNO_LOCGAsmNP_LOCGAsmNZ_LOCGAsmO_LOCGAsmP_LOCGAsmZ") 2, false, true,  4, 2, 22, 4,  0, 0}, // #662
  {DBGFIELD("STOC_STOCAsm_STOCAsmE_STOCAsmH_STOCAsmHE_STOCAsmL_STOCAsmLE_STOCAsmLH_STOCAsmM_STOCAsmNE_STOCAsmNH_STOCAsmNHE_STOCAsmNL_STOCAsmNLE_STOCAsmNLH_STOCAsmNM_STOCAsmNO_STOCAsmNP_STOCAsmNZ_STOCAsmO_STOCAsmP_STOCAsmZ_STOCG_STOCGAsm_STOCGAsmE_STOCGAsmH_STOCGAsmHE_STOCGAsmL_STOCGAsmLE_STOCGAsmLH_STOCGAsmM_STOCGAsmNE_STOCGAsmNH_STOCGAsmNHE_STOCGAsmNL_STOCGAsmNLE_STOCGAsmNLH_STOCGAsmNM_STOCGAsmNO_STOCGAsmNP_STOCGAsmNZ_STOCGAsmO_STOCGAsmP_STOCGAsmZ") 2, false, true,  4, 2,  6, 4,  0, 0}, // #663
  {DBGFIELD("ALSI_ASI")           2, false, false,  4, 2,  6, 3,  0, 0}, // #664
  {DBGFIELD("ALGF")               2, false, false,  4, 2,  6, 3,  0, 0}, // #665
  {DBGFIELD("KIMD_KLMD_KMAC_PCC") 1, true, true,  1, 1, 42, 3,  0, 0}, // #666
  {DBGFIELD("RISBG_RISBG32")      1, false, false,  1, 1,  1, 1,  0, 0}, // #667
  {DBGFIELD("STCK")               2, false, false,  4, 2, 71, 3,  0, 0} // #668
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
  {DBGFIELD("ZEC12_DFUnit")    1, 0, -1}, // #1
  {DBGFIELD("ZEC12_FPUnit")    1, 0, -1}, // #2
  {DBGFIELD("ZEC12_FXUnit")    2, 0, -1}, // #3
  {DBGFIELD("ZEC12_LSUnit")    2, 0, -1}, // #4
  {DBGFIELD("ZEC12_VBUnit")    1, 0, -1}  // #5
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
  6,
  669,
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
  669,
  nullptr}; // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc Z196ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("Z196_DFUnit")     1, 0, -1}, // #1
  {DBGFIELD("Z196_FPUnit")     1, 0, -1}, // #2
  {DBGFIELD("Z196_FXUnit")     2, 0, -1}, // #3
  {DBGFIELD("Z196_LSUnit")     2, 0, -1}  // #4
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
  5,
  669,
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
  if (Bits[SystemZ::FeatureDFPPackedConversion]) HasDFPPackedConversion = true;
  if (Bits[SystemZ::FeatureDFPZonedConversion]) HasDFPZonedConversion = true;
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
  if (Bits[SystemZ::FeatureMessageSecurityAssist4]) HasMessageSecurityAssist4 = true;
  if (Bits[SystemZ::FeatureMessageSecurityAssist5]) HasMessageSecurityAssist5 = true;
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
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(SystemZFeatureKV, 19), makeArrayRef(SystemZSubTypeKV, 9), 
                        SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned SystemZGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SystemZGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

