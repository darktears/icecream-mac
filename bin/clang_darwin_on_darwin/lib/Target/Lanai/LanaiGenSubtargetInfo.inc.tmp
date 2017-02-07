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
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV LanaiSubTypeKV[] = {
  { "generic", "Select the generic processor", { }, { } },
  { "v11", "Select the v11 processor", { }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "LanaiItinerary"
namespace LanaiItineraryFU {
  const unsigned ALU_FU = 1 << 0;
  const unsigned LDST_FU = 1 << 1;
} // end namespace LanaiItineraryFU

extern const llvm::InstrStage LanaiStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, LanaiItineraryFU::ALU_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, LanaiItineraryFU::LDST_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 2, LanaiItineraryFU::LDST_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned LanaiOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned LanaiForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary LanaiItinerary[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 IIC_ALU_WriteALU
  { 1, 1, 2, 0, 0 }, // 2 IIC_ALU
  { 1, 2, 3, 0, 0 }, // 3 IIC_LD_WriteLD
  { 1, 3, 4, 0, 0 }, // 4 IIC_LDSW_WriteLDSW
  { 0, 0, 0, 0, 0 }, // 5 WriteLD
  { 1, 2, 3, 0, 0 }, // 6 IIC_ST_WriteST
  { 1, 3, 4, 0, 0 }, // 7 IIC_STSW_WriteSTSW
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry LanaiWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 1,  1}, // #1
  { 2,  1} // #2
}; // LanaiWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry LanaiWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 WriteALU
  { 2,  0}, // #2 WriteLD_WriteLDSW_WriteST
  { 4,  0} // #3 WriteSTSW
}; // LanaiWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry LanaiReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // LanaiReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc LanaiSchedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_ALU_WriteALU")   1, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("IIC_ALU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #2
  {DBGFIELD("IIC_LD_WriteLD")     1, false, false,  2, 1,  2, 1,  0, 0}, // #3
  {DBGFIELD("IIC_LDSW_WriteLDSW") 1, false, false,  2, 1,  2, 1,  0, 0}, // #4
  {DBGFIELD("WriteLD")            1, false, false,  2, 1,  2, 1,  0, 0}, // #5
  {DBGFIELD("IIC_ST_WriteST")     1, false, false,  2, 1,  2, 1,  0, 0}, // #6
  {DBGFIELD("IIC_STSW_WriteSTSW") 1, false, false,  2, 1,  3, 1,  0, 0} // #7
}; // LanaiSchedModelSchedClasses

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
static const llvm::MCProcResourceDesc LanaiSchedModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("ALU")             1, 0, 0}, // #1
  {DBGFIELD("LdSt")            1, 0, 0}  // #2
};

static const llvm::MCSchedModel LanaiSchedModel = {
  1, // IssueWidth
  0, // MicroOpBufferSize
  0, // LoopMicroOpBufferSize
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  10, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  LanaiSchedModelProcResources,
  LanaiSchedModelSchedClasses,
  3,
  8,
  LanaiItinerary};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV LanaiProcSchedKV[] = {
  { "generic", (const void *)&LanaiSchedModel },
  { "v11", (const void *)&LanaiSchedModel }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createLanaiMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, None, LanaiSubTypeKV, 
                      LanaiProcSchedKV, LanaiWriteProcResTable, LanaiWriteLatencyTable, LanaiReadAdvanceTable, 
                      LanaiStages, LanaiOperandCycles, LanaiForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::LanaiSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct LanaiGenSubtargetInfo : public TargetSubtargetInfo {
  explicit LanaiGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV LanaiFeatureKV[];
extern const llvm::SubtargetFeatureKV LanaiSubTypeKV[];
extern const llvm::SubtargetInfoKV LanaiProcSchedKV[];
extern const llvm::MCWriteProcResEntry LanaiWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry LanaiWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry LanaiReadAdvanceTable[];
extern const llvm::InstrStage LanaiStages[];
extern const unsigned LanaiOperandCycles[];
extern const unsigned LanaiForwardingPaths[];
LanaiGenSubtargetInfo::LanaiGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, None, makeArrayRef(LanaiSubTypeKV, 2), 
                        LanaiProcSchedKV, LanaiWriteProcResTable, LanaiWriteLatencyTable, LanaiReadAdvanceTable, 
                        LanaiStages, LanaiOperandCycles, LanaiForwardingPaths) {}

unsigned LanaiGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // LanaiGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

