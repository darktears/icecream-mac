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
namespace Hexagon {
enum {
  ArchV4 = 0,
  ArchV5 = 1,
  ArchV55 = 2,
  ArchV60 = 3,
  ArchV62 = 4,
  ExtensionHVX = 5,
  ExtensionHVXDbl = 6,
  FeatureLongCalls = 7
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "hvx", "Hexagon HVX instructions", { Hexagon::ExtensionHVX }, { } },
  { "hvx-double", "Hexagon HVX Double instructions", { Hexagon::ExtensionHVXDbl }, { } },
  { "long-calls", "Use constant-extended calls", { Hexagon::FeatureLongCalls }, { } },
  { "v4", "Enable Hexagon V4 architecture", { Hexagon::ArchV4 }, { } },
  { "v5", "Enable Hexagon V5 architecture", { Hexagon::ArchV5 }, { } },
  { "v55", "Enable Hexagon V55 architecture", { Hexagon::ArchV55 }, { } },
  { "v60", "Enable Hexagon V60 architecture", { Hexagon::ArchV60 }, { } },
  { "v62", "Enable Hexagon V62 architecture", { Hexagon::ArchV62 }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "hexagonv4", "Select the hexagonv4 processor", { Hexagon::ArchV4 }, { } },
  { "hexagonv5", "Select the hexagonv5 processor", { Hexagon::ArchV4, Hexagon::ArchV5 }, { } },
  { "hexagonv55", "Select the hexagonv55 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55 }, { } },
  { "hexagonv60", "Select the hexagonv60 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ExtensionHVX }, { } },
  { "hexagonv62", "Select the hexagonv62 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ArchV62, Hexagon::ExtensionHVX }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV4"
namespace HexagonItinerariesV4FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV4FU

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV55FU

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
} // end namespace HexagonItinerariesV60FU

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
} // end namespace HexagonItinerariesV62FU

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1 | HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV4FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV4FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV4FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-18
  { 2, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21
  { 2, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 3, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 3, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 2, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25
  { 3, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27
  { 2, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28
  { 2, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29
  { 4, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30
  { 4, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31
  { 2, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32
  { 3, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 34
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-37
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38-39
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF | HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-41
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 42-44
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45-46
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 47-48
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 49-50
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 51-54
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55-56
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 57-60
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 61-62
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-64
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65-66
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 67-68
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-70
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78-80
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-82
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF | HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83-84
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85-87
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88-89
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90-91
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92-93
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94-97
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98-99
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100-103
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104-105
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106-107
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108-109
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110-111
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112-113
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  2,   1,   1, // 1-3
  1,   1,   1, // 4-6
  1,   1,   1, // 7-9
  1,   1,   1, // 10-12
  2,   1,   1, // 13-15
  1,   1,   1, // 16-18
  2,   1,   1, // 19-21
  1,   1,   1, // 22-24
  1,   1,   1, // 25-27
  3,   1,   1, // 28-30
  2,   1,   1, // 31-33
  3,   1,   1, // 34-36
  3,   1,   1,   1, // 37-40
  1,   1,   1, // 41-43
  2,   1,   1, // 44-46
  2,   1,   1, // 47-49
  1,   1,   1, // 50-52
  3,   1,   1, // 53-55
  3,   1,   1, // 56-58
  2,   1,   1, // 59-61
  2,   1,   1,   1, // 62-65
  2,   1,   1, // 66-68
  2,   1,   1, // 69-71
  2,   1,   1, // 72-74
  2,   1,   1, // 75-77
  2,   1,   1,   1, // 78-81
  2,   1, // 82-83
  1,   1,   1, // 84-86
  2,   1,   1, // 87-89
  2, // 90
  3,   1,   1, // 91-93
  3,   1,   1, // 94-96
  3,   1,   1, // 97-99
  2,   1,   1,   1, // 100-103
  2,   1,   1, // 104-106
  3,   1,   1,   1, // 107-110
  1,   1,   1, // 111-113
  1,   1,   1, // 114-116
  2,   1, // 117-118
  2,   1,   1,   1, // 119-122
  2,   1, // 123-124
  1,   1,   1,   1, // 125-128
  3,   1,   1,   1, // 129-132
  2,   1, // 133-134
  2,   1,   1, // 135-137
  3,   1,   1, // 138-140
  3,   1,   1, // 141-143
  1,   1,   1, // 144-146
  1,   1,   1, // 147-149
  2,   1,   1, // 150-152
  1,   1,   1,   1, // 153-156
  1,   1,   1, // 157-159
  1,   1,   1,   1, // 160-163
  1,   1,   1, // 164-166
  1,   1,   1, // 167-169
  1,   1,   1,   1, // 170-173
  2,   1,   1, // 174-176
  2,   1,   1, // 177-179
  1,   1,   1, // 180-182
  1,   1,   1, // 183-185
  1,   1,   1, // 186-188
  2,   1,   1, // 189-191
  1,   1,   1, // 192-194
  2,   1,   1, // 195-197
  1,   1,   1, // 198-200
  1,   1,   1, // 201-203
  3,   1,   1, // 204-206
  2,   1,   1, // 207-209
  3,   1,   1, // 210-212
  3,   1,   1,   1, // 213-216
  1,   1,   1, // 217-219
  2,   1,   1, // 220-222
  2,   1,   1, // 223-225
  2,   1,   1,   1, // 226-229
  3,   1,   1, // 230-232
  3,   1,   1, // 233-235
  2,   1,   1, // 236-238
  2,   1,   1,   1, // 239-242
  2,   1,   1, // 243-245
  2,   1,   1, // 246-248
  2,   1,   1, // 249-251
  2,   1,   1, // 252-254
  2,   1,   1,   1, // 255-258
  3,   1, // 259-260
  1,   1,   1, // 261-263
  2,   1,   1, // 264-266
  2, // 267
  4,   1,   1, // 268-270
  4,   1,   1, // 271-273
  4,   1,   1, // 274-276
  2,   1,   1,   1, // 277-280
  2,   1,   1, // 281-283
  3,   1,   1,   1, // 284-287
  1,   1,   1, // 288-290
  1,   1,   1, // 291-293
  3,   1, // 294-295
  2,   1,   1,   1, // 296-299
  3,   1, // 300-301
  1,   1,   1,   1, // 302-305
  3,   1,   1,   1, // 306-309
  4,   1, // 310-311
  2,   1,   1, // 312-314
  3,   1,   1, // 315-317
  3,   1,   1, // 318-320
  1,   1,   1, // 321-323
  1,   1,   1,   1, // 324-327
  1,   1,   1, // 328-330
  1,   1,   1,   1, // 331-334
  1,   1,   1,   1, // 335-338
  3,   1,   1, // 339-341
  1,   1,   1,   1, // 342-345
  1,   1,   1, // 346-348
  1,   1,   1,   1, // 349-352
  1,   1,   1, // 353-355
  1,   1,   1, // 356-358
  1,   1,   1,   1, // 359-362
  1,   1,   1,   1, // 363-366
  1,   1,   1,   1, // 367-370
  1,   1,   1,   1, // 371-374
  1,   1,   1,   1, // 375-378
  1,   1,   1,   1, // 379-382
  1,   1,   1,   1, // 383-386
  1,   1,   1,   1,   10, // 387-391
  1,   1,   1,   1, // 392-395
  1,   1,   1,   1, // 396-399
  1,   1,   1,   1, // 400-403
  1,   1,   1,   1, // 404-407
  1,   1,   1,   1, // 408-411
  1,   1,   1,   1, // 412-415
  1,   1,   1,   1, // 416-419
  1,   1,   1,   1, // 420-423
  1,   1,   1,   1, // 424-427
  1,   1,   1,   1, // 428-431
  1,   1,   1,   1, // 432-435
  1,   1,   1,   1, // 436-439
  3,   1,   1, // 440-442
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
 0,  0,  0, // 1-3
 0,  0,  0, // 4-6
 0,  0,  0, // 7-9
 0,  0,  0, // 10-12
 0,  0,  0, // 13-15
 0,  0,  0, // 16-18
 0,  0,  0, // 19-21
 0,  0,  0, // 22-24
 0,  0,  0, // 25-27
 0,  0,  0, // 28-30
 0,  0,  0, // 31-33
 0,  0,  0, // 34-36
 0,  0,  0,  0, // 37-40
 0,  0,  0, // 41-43
 0,  0,  0, // 44-46
 0,  0,  0, // 47-49
 0,  0,  0, // 50-52
 0,  0,  0, // 53-55
 0,  0,  0, // 56-58
 0,  0,  0, // 59-61
 0,  0,  0,  0, // 62-65
 0,  0,  0, // 66-68
 0,  0,  0, // 69-71
 0,  0,  0, // 72-74
 0,  0,  0, // 75-77
 0,  0,  0,  0, // 78-81
 0,  0, // 82-83
 0,  0,  0, // 84-86
 0,  0,  0, // 87-89
 0, // 90
 0,  0,  0, // 91-93
 0,  0,  0, // 94-96
 0,  0,  0, // 97-99
 0,  0,  0,  0, // 100-103
 0,  0,  0, // 104-106
 0,  0,  0,  0, // 107-110
 0,  0,  0, // 111-113
 0,  0,  0, // 114-116
 0,  0, // 117-118
 0,  0,  0,  0, // 119-122
 0,  0, // 123-124
 0,  0,  0,  0, // 125-128
 0,  0,  0,  0, // 129-132
 0,  0, // 133-134
 0,  0,  0, // 135-137
 0,  0,  0, // 138-140
 0,  0,  0, // 141-143
 0,  0,  0, // 144-146
 0,  0,  0, // 147-149
 0,  0,  0, // 150-152
 0,  0,  0,  0, // 153-156
 0,  0,  0, // 157-159
 0,  0,  0,  0, // 160-163
 0,  0,  0, // 164-166
 0,  0,  0, // 167-169
 0,  0,  0,  0, // 170-173
 0,  0,  0, // 174-176
 0,  0,  0, // 177-179
 0,  0,  0, // 180-182
 0,  0,  0, // 183-185
 0,  0,  0, // 186-188
 0,  0,  0, // 189-191
 0,  0,  0, // 192-194
 0,  0,  0, // 195-197
 0,  0,  0, // 198-200
 0,  0,  0, // 201-203
 0,  0,  0, // 204-206
 0,  0,  0, // 207-209
 0,  0,  0, // 210-212
 0,  0,  0,  0, // 213-216
 0,  0,  0, // 217-219
 0,  0,  0, // 220-222
 0,  0,  0, // 223-225
 0,  0,  0,  0, // 226-229
 0,  0,  0, // 230-232
 0,  0,  0, // 233-235
 0,  0,  0, // 236-238
 0,  0,  0,  0, // 239-242
 0,  0,  0, // 243-245
 0,  0,  0, // 246-248
 0,  0,  0, // 249-251
 0,  0,  0, // 252-254
 0,  0,  0,  0, // 255-258
 0,  0, // 259-260
 0,  0,  0, // 261-263
 0,  0,  0, // 264-266
 0, // 267
 0,  0,  0, // 268-270
 0,  0,  0, // 271-273
 0,  0,  0, // 274-276
 0,  0,  0,  0, // 277-280
 0,  0,  0, // 281-283
 0,  0,  0,  0, // 284-287
 0,  0,  0, // 288-290
 0,  0,  0, // 291-293
 0,  0, // 294-295
 0,  0,  0,  0, // 296-299
 0,  0, // 300-301
 0,  0,  0,  0, // 302-305
 0,  0,  0,  0, // 306-309
 0,  0, // 310-311
 0,  0,  0, // 312-314
 0,  0,  0, // 315-317
 0,  0,  0, // 318-320
 0,  0,  0, // 321-323
 0,  0,  0,  0, // 324-327
 0,  0,  0, // 328-330
 0,  0,  0,  0, // 331-334
 0,  0,  0,  0, // 335-338
 0,  0,  0, // 339-341
 0,  0,  0,  0, // 342-345
 0,  0,  0, // 346-348
 0,  0,  0,  0, // 349-352
 0,  0,  0, // 353-355
 0,  0,  0, // 356-358
 0,  0,  0,  0, // 359-362
 0,  0,  0,  0, // 363-366
 0,  0,  0,  0, // 367-370
 0,  0,  0,  0, // 371-374
 0,  0,  0,  0, // 375-378
 0,  0,  0,  0, // 379-382
 0,  0,  0,  0, // 383-386
 0,  0,  0,  0,  0, // 387-391
 0,  0,  0,  0, // 392-395
 0,  0,  0,  0, // 396-399
 0,  0,  0,  0, // 400-403
 0,  0,  0,  0, // 404-407
 0,  0,  0,  0, // 408-411
 0,  0,  0,  0, // 412-415
 0,  0,  0,  0, // 416-419
 0,  0,  0,  0, // 420-423
 0,  0,  0,  0, // 424-427
 0,  0,  0,  0, // 428-431
 0,  0,  0,  0, // 432-435
 0,  0,  0,  0, // 436-439
 0,  0,  0, // 440-442
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV4[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 S_2op_tc_2_SLOT23
  { 1, 1, 2, 0, 0 }, // 2 S_2op_tc_1_SLOT23
  { 1, 2, 3, 0, 0 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 1, 2, 0, 0 }, // 4 ALU64_tc_1_SLOT23
  { 1, 1, 2, 0, 0 }, // 5 ALU64_tc_2_SLOT23
  { 1, 2, 3, 0, 0 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 2, 3, 0, 0 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 2, 3, 0, 0 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 2, 3, 0, 0 }, // 9 PSEUDO
  { 1, 3, 4, 0, 0 }, // 10 CR_tc_3x_SLOT3
  { 1, 1, 2, 0, 0 }, // 11 ALU64_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 12 M_tc_3x_SLOT23
  { 1, 1, 2, 0, 0 }, // 13 M_tc_3x_acc_SLOT23
  { 1, 1, 2, 0, 0 }, // 14 S_3op_tc_1_SLOT23
  { 1, 1, 2, 0, 0 }, // 15 S_3op_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 16 S_3op_tc_2_SLOT23
  { 1, 2, 3, 0, 0 }, // 17 EXTENDER_tc_1_SLOT0123
  { 1, 1, 2, 0, 0 }, // 18 S_3op_tc_3_SLOT23
  { 0, 0, 0, 0, 0 }, // 19 M_tc_3stall_SLOT23
  { 1, 1, 2, 0, 0 }, // 20 M_tc_2_SLOT23
  { 1, 1, 2, 0, 0 }, // 21 CR_tc_2early_SLOT23
  { 1, 1, 2, 0, 0 }, // 22 S_2op_tc_2early_SLOT23
  { 1, 2, 3, 0, 0 }, // 23 ALU32_3op_tc_2early_SLOT0123
  { 1, 2, 3, 0, 0 }, // 24 ALU32_2op_tc_2early_SLOT0123
  { 1, 3, 4, 0, 0 }, // 25 CR_tc_2_SLOT3
  { 1, 1, 2, 0, 0 }, // 26 J_tc_2early_SLOT23
  { 1, 4, 5, 0, 0 }, // 27 LD_tc_ld_SLOT01
  { 1, 5, 6, 0, 0 }, // 28 DUPLEX
  { 1, 6, 7, 0, 0 }, // 29 J_tc_2early_SLOT2
  { 1, 7, 8, 0, 0 }, // 30 J_tc_2early_SLOT0123
  { 1, 1, 2, 0, 0 }, // 31 S_2op_tc_3or4x_SLOT23
  { 1, 1, 2, 0, 0 }, // 32 M_tc_3or4x_SLOT23
  { 1, 1, 2, 0, 0 }, // 33 M_tc_3or4x_acc_SLOT23
  { 1, 1, 2, 0, 0 }, // 34 J_tc_2early_CJUMP_UCJUMP_ARCHDEPSLOT
  { 1, 3, 4, 0, 0 }, // 35 CR_tc_2early_SLOT3
  { 1, 5, 6, 0, 0 }, // 36 NCJ_tc_3or4stall_SLOT0
  { 1, 1, 2, 0, 0 }, // 37 COMPOUND_CJ_ARCHDEPSLOT
  { 1, 1, 2, 0, 0 }, // 38 COMPOUND
  { 1, 4, 5, 0, 0 }, // 39 LD_tc_ld_pi_SLOT01
  { 1, 4, 5, 0, 0 }, // 40 V2LDST_tc_ld_SLOT01
  { 1, 5, 6, 0, 0 }, // 41 LD_tc_ld_SLOT0
  { 1, 5, 6, 0, 0 }, // 42 V4LDST_tc_st_SLOT0
  { 1, 4, 5, 0, 0 }, // 43 V4LDST_tc_ld_SLOT01
  { 1, 5, 6, 0, 0 }, // 44 LD_tc_3or4stall_SLOT0
  { 1, 1, 2, 0, 0 }, // 45 M_tc_2_acc_SLOT23
  { 1, 1, 2, 0, 0 }, // 46 S_3op_tc_3x_SLOT23
  { 1, 1, 2, 0, 0 }, // 47 ALU64_tc_3x_SLOT23
  { 1, 4, 5, 0, 0 }, // 48 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 49 CVI_VM_LD
  { 1, 8, 10, 0, 0 }, // 50 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 51 CVI_VA_DV
  { 0, 0, 0, 0, 0 }, // 52 CVI_VM_ST
  { 1, 5, 6, 0, 0 }, // 53 ST_tc_ld_SLOT0
  { 1, 4, 5, 0, 0 }, // 54 V2LDST_tc_st_SLOT01
  { 1, 4, 5, 0, 0 }, // 55 ST_tc_st_pi_SLOT01
  { 1, 5, 6, 0, 0 }, // 56 V2LDST_tc_st_SLOT0
  { 1, 5, 6, 0, 0 }, // 57 ST_tc_st_pi_SLOT0
  { 1, 5, 6, 0, 0 }, // 58 ST_tc_st_SLOT0
  { 1, 4, 5, 0, 0 }, // 59 V4LDST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 60 CVI_VA
  { 0, 0, 0, 0, 0 }, // 61 CVI_VX
  { 0, 0, 0, 0, 0 }, // 62 CVI_VX_LATE
  { 0, 0, 0, 0, 0 }, // 63 CVI_VP_LONG
  { 0, 0, 0, 0, 0 }, // 64 CVI_VM_VP_LDU
  { 0, 0, 0, 0, 0 }, // 65 CVI_VM_CUR_LD
  { 0, 0, 0, 0, 0 }, // 66 CVI_VM_TMP_LD
  { 0, 0, 0, 0, 0 }, // 67 CVI_VM_STU
  { 0, 0, 0, 0, 0 }, // 68 CVI_VM_NEW_ST
  { 0, 0, 0, 0, 0 }, // 69 CVI_VS
  { 0, 0, 0, 0, 0 }, // 70 CVI_VX_DV
  { 0, 0, 0, 0, 0 }, // 71 CVI_VX_DV_LONG
  { 0, 0, 0, 0, 0 }, // 72 CVI_VP_VS_LONG_EARLY
  { 0, 0, 0, 0, 0 }, // 73 CVI_VP
  { 0, 0, 0, 0, 0 }, // 74 CVI_VP_VS_LONG
  { 0, 0, 0, 0, 0 }, // 75 CVI_HIST
  { 0, 0, 0, 0, 0 }, // 76 CVI_VX_LONG
  { 0, 0, 0, 0, 0 }, // 77 CVI_VINLANESAT
  { 0, 0, 0, 0, 0 }, // 78 CVI_VP_VS
  { 1, 5, 6, 0, 0 }, // 79 ST_tc_3stall_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 10, 11, 1, 4 }, // 1 S_2op_tc_2_SLOT23
  { 1, 10, 11, 4, 7 }, // 2 S_2op_tc_1_SLOT23
  { 1, 11, 12, 7, 10 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 10, 11, 10, 13 }, // 4 ALU64_tc_1_SLOT23
  { 1, 10, 11, 13, 16 }, // 5 ALU64_tc_2_SLOT23
  { 1, 11, 12, 16, 19 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 11, 12, 19, 22 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 11, 12, 22, 25 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 11, 12, 25, 28 }, // 9 PSEUDO
  { 1, 12, 13, 28, 31 }, // 10 CR_tc_3x_SLOT3
  { 1, 10, 11, 31, 34 }, // 11 ALU64_tc_2early_SLOT23
  { 1, 10, 11, 34, 37 }, // 12 M_tc_3x_SLOT23
  { 1, 10, 11, 37, 41 }, // 13 M_tc_3x_acc_SLOT23
  { 1, 10, 11, 41, 44 }, // 14 S_3op_tc_1_SLOT23
  { 1, 10, 11, 44, 47 }, // 15 S_3op_tc_2early_SLOT23
  { 1, 10, 11, 47, 50 }, // 16 S_3op_tc_2_SLOT23
  { 1, 11, 12, 50, 53 }, // 17 EXTENDER_tc_1_SLOT0123
  { 1, 10, 11, 53, 56 }, // 18 S_3op_tc_3_SLOT23
  { 1, 10, 11, 56, 59 }, // 19 M_tc_3stall_SLOT23
  { 1, 10, 11, 59, 62 }, // 20 M_tc_2_SLOT23
  { 1, 10, 11, 62, 66 }, // 21 CR_tc_2early_SLOT23
  { 1, 10, 11, 66, 69 }, // 22 S_2op_tc_2early_SLOT23
  { 1, 11, 12, 69, 72 }, // 23 ALU32_3op_tc_2early_SLOT0123
  { 1, 11, 12, 72, 75 }, // 24 ALU32_2op_tc_2early_SLOT0123
  { 1, 12, 13, 75, 78 }, // 25 CR_tc_2_SLOT3
  { 1, 10, 11, 78, 82 }, // 26 J_tc_2early_SLOT23
  { 1, 13, 14, 82, 84 }, // 27 LD_tc_ld_SLOT01
  { 1, 14, 15, 84, 87 }, // 28 DUPLEX
  { 1, 15, 16, 87, 90 }, // 29 J_tc_2early_SLOT2
  { 1, 16, 17, 90, 91 }, // 30 J_tc_2early_SLOT0123
  { 1, 10, 11, 91, 94 }, // 31 S_2op_tc_3or4x_SLOT23
  { 1, 10, 11, 94, 97 }, // 32 M_tc_3or4x_SLOT23
  { 1, 10, 11, 97, 100 }, // 33 M_tc_3or4x_acc_SLOT23
  { 1, 10, 11, 100, 104 }, // 34 J_tc_2early_CJUMP_UCJUMP_ARCHDEPSLOT
  { 1, 12, 13, 104, 107 }, // 35 CR_tc_2early_SLOT3
  { 1, 14, 15, 107, 111 }, // 36 NCJ_tc_3or4stall_SLOT0
  { 1, 10, 11, 111, 114 }, // 37 COMPOUND_CJ_ARCHDEPSLOT
  { 1, 10, 11, 114, 117 }, // 38 COMPOUND
  { 1, 13, 14, 117, 119 }, // 39 LD_tc_ld_pi_SLOT01
  { 1, 13, 14, 119, 123 }, // 40 V2LDST_tc_ld_SLOT01
  { 1, 14, 15, 123, 125 }, // 41 LD_tc_ld_SLOT0
  { 1, 14, 15, 125, 129 }, // 42 V4LDST_tc_st_SLOT0
  { 1, 13, 14, 129, 133 }, // 43 V4LDST_tc_ld_SLOT01
  { 1, 14, 15, 133, 135 }, // 44 LD_tc_3or4stall_SLOT0
  { 1, 10, 11, 135, 138 }, // 45 M_tc_2_acc_SLOT23
  { 1, 10, 11, 138, 141 }, // 46 S_3op_tc_3x_SLOT23
  { 1, 10, 11, 141, 144 }, // 47 ALU64_tc_3x_SLOT23
  { 1, 13, 14, 144, 147 }, // 48 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 49 CVI_VM_LD
  { 1, 17, 19, 147, 150 }, // 50 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 51 CVI_VA_DV
  { 0, 0, 0, 0, 0 }, // 52 CVI_VM_ST
  { 1, 14, 15, 150, 153 }, // 53 ST_tc_ld_SLOT0
  { 1, 13, 14, 153, 157 }, // 54 V2LDST_tc_st_SLOT01
  { 1, 13, 14, 157, 160 }, // 55 ST_tc_st_pi_SLOT01
  { 1, 14, 15, 160, 164 }, // 56 V2LDST_tc_st_SLOT0
  { 1, 14, 15, 164, 167 }, // 57 ST_tc_st_pi_SLOT0
  { 1, 14, 15, 167, 170 }, // 58 ST_tc_st_SLOT0
  { 1, 13, 14, 170, 174 }, // 59 V4LDST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 60 CVI_VA
  { 0, 0, 0, 0, 0 }, // 61 CVI_VX
  { 0, 0, 0, 0, 0 }, // 62 CVI_VX_LATE
  { 0, 0, 0, 0, 0 }, // 63 CVI_VP_LONG
  { 0, 0, 0, 0, 0 }, // 64 CVI_VM_VP_LDU
  { 0, 0, 0, 0, 0 }, // 65 CVI_VM_CUR_LD
  { 0, 0, 0, 0, 0 }, // 66 CVI_VM_TMP_LD
  { 0, 0, 0, 0, 0 }, // 67 CVI_VM_STU
  { 0, 0, 0, 0, 0 }, // 68 CVI_VM_NEW_ST
  { 0, 0, 0, 0, 0 }, // 69 CVI_VS
  { 0, 0, 0, 0, 0 }, // 70 CVI_VX_DV
  { 0, 0, 0, 0, 0 }, // 71 CVI_VX_DV_LONG
  { 0, 0, 0, 0, 0 }, // 72 CVI_VP_VS_LONG_EARLY
  { 0, 0, 0, 0, 0 }, // 73 CVI_VP
  { 0, 0, 0, 0, 0 }, // 74 CVI_VP_VS_LONG
  { 0, 0, 0, 0, 0 }, // 75 CVI_HIST
  { 0, 0, 0, 0, 0 }, // 76 CVI_VX_LONG
  { 0, 0, 0, 0, 0 }, // 77 CVI_VINLANESAT
  { 0, 0, 0, 0, 0 }, // 78 CVI_VP_VS
  { 1, 14, 15, 174, 177 }, // 79 ST_tc_3stall_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 19, 20, 0, 0 }, // 1 S_2op_tc_2_SLOT23
  { 1, 20, 21, 0, 0 }, // 2 S_2op_tc_1_SLOT23
  { 1, 21, 22, 0, 0 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 20, 21, 0, 0 }, // 4 ALU64_tc_1_SLOT23
  { 1, 19, 20, 0, 0 }, // 5 ALU64_tc_2_SLOT23
  { 1, 21, 22, 0, 0 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 22, 23, 0, 0 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 21, 22, 0, 0 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 21, 22, 0, 0 }, // 9 PSEUDO
  { 1, 23, 24, 0, 0 }, // 10 CR_tc_3x_SLOT3
  { 1, 19, 20, 0, 0 }, // 11 ALU64_tc_2early_SLOT23
  { 1, 24, 25, 0, 0 }, // 12 M_tc_3x_SLOT23
  { 1, 24, 25, 0, 0 }, // 13 M_tc_3x_acc_SLOT23
  { 1, 20, 21, 0, 0 }, // 14 S_3op_tc_1_SLOT23
  { 1, 19, 20, 0, 0 }, // 15 S_3op_tc_2early_SLOT23
  { 1, 19, 20, 0, 0 }, // 16 S_3op_tc_2_SLOT23
  { 1, 21, 22, 0, 0 }, // 17 EXTENDER_tc_1_SLOT0123
  { 1, 24, 25, 0, 0 }, // 18 S_3op_tc_3_SLOT23
  { 1, 24, 25, 0, 0 }, // 19 M_tc_3stall_SLOT23
  { 1, 19, 20, 0, 0 }, // 20 M_tc_2_SLOT23
  { 1, 19, 20, 0, 0 }, // 21 CR_tc_2early_SLOT23
  { 1, 19, 20, 0, 0 }, // 22 S_2op_tc_2early_SLOT23
  { 1, 22, 23, 0, 0 }, // 23 ALU32_3op_tc_2early_SLOT0123
  { 1, 22, 23, 0, 0 }, // 24 ALU32_2op_tc_2early_SLOT0123
  { 1, 25, 26, 0, 0 }, // 25 CR_tc_2_SLOT3
  { 1, 19, 20, 0, 0 }, // 26 J_tc_2early_SLOT23
  { 1, 26, 27, 0, 0 }, // 27 LD_tc_ld_SLOT01
  { 1, 27, 28, 0, 0 }, // 28 DUPLEX
  { 1, 28, 29, 0, 0 }, // 29 J_tc_2early_SLOT2
  { 1, 29, 30, 0, 0 }, // 30 J_tc_2early_SLOT0123
  { 1, 30, 31, 0, 0 }, // 31 S_2op_tc_3or4x_SLOT23
  { 1, 30, 31, 0, 0 }, // 32 M_tc_3or4x_SLOT23
  { 1, 30, 31, 0, 0 }, // 33 M_tc_3or4x_acc_SLOT23
  { 1, 20, 21, 0, 0 }, // 34 J_tc_2early_CJUMP_UCJUMP_ARCHDEPSLOT
  { 1, 25, 26, 0, 0 }, // 35 CR_tc_2early_SLOT3
  { 1, 31, 32, 0, 0 }, // 36 NCJ_tc_3or4stall_SLOT0
  { 1, 20, 21, 0, 0 }, // 37 COMPOUND_CJ_ARCHDEPSLOT
  { 1, 20, 21, 0, 0 }, // 38 COMPOUND
  { 1, 26, 27, 0, 0 }, // 39 LD_tc_ld_pi_SLOT01
  { 1, 32, 33, 0, 0 }, // 40 V2LDST_tc_ld_SLOT01
  { 1, 33, 34, 0, 0 }, // 41 LD_tc_ld_SLOT0
  { 1, 27, 28, 0, 0 }, // 42 V4LDST_tc_st_SLOT0
  { 1, 26, 27, 0, 0 }, // 43 V4LDST_tc_ld_SLOT01
  { 1, 31, 32, 0, 0 }, // 44 LD_tc_3or4stall_SLOT0
  { 1, 19, 20, 0, 0 }, // 45 M_tc_2_acc_SLOT23
  { 1, 24, 25, 0, 0 }, // 46 S_3op_tc_3x_SLOT23
  { 1, 24, 25, 0, 0 }, // 47 ALU64_tc_3x_SLOT23
  { 1, 34, 35, 0, 0 }, // 48 ST_tc_st_SLOT01
  { 1, 35, 38, 0, 0 }, // 49 CVI_VM_LD
  { 1, 38, 40, 0, 0 }, // 50 PSEUDOM
  { 1, 40, 42, 0, 0 }, // 51 CVI_VA_DV
  { 1, 42, 45, 0, 0 }, // 52 CVI_VM_ST
  { 1, 33, 34, 0, 0 }, // 53 ST_tc_ld_SLOT0
  { 1, 34, 35, 0, 0 }, // 54 V2LDST_tc_st_SLOT01
  { 1, 34, 35, 0, 0 }, // 55 ST_tc_st_pi_SLOT01
  { 1, 27, 28, 0, 0 }, // 56 V2LDST_tc_st_SLOT0
  { 1, 27, 28, 0, 0 }, // 57 ST_tc_st_pi_SLOT0
  { 1, 27, 28, 0, 0 }, // 58 ST_tc_st_SLOT0
  { 1, 34, 35, 0, 0 }, // 59 V4LDST_tc_st_SLOT01
  { 1, 45, 47, 0, 0 }, // 60 CVI_VA
  { 1, 47, 49, 0, 0 }, // 61 CVI_VX
  { 1, 47, 49, 0, 0 }, // 62 CVI_VX_LATE
  { 1, 49, 51, 0, 0 }, // 63 CVI_VP_LONG
  { 1, 51, 55, 0, 0 }, // 64 CVI_VM_VP_LDU
  { 1, 35, 38, 0, 0 }, // 65 CVI_VM_CUR_LD
  { 1, 55, 57, 0, 0 }, // 66 CVI_VM_TMP_LD
  { 1, 57, 61, 0, 0 }, // 67 CVI_VM_STU
  { 1, 61, 63, 0, 0 }, // 68 CVI_VM_NEW_ST
  { 1, 63, 65, 0, 0 }, // 69 CVI_VS
  { 1, 65, 67, 0, 0 }, // 70 CVI_VX_DV
  { 1, 65, 67, 0, 0 }, // 71 CVI_VX_DV_LONG
  { 1, 67, 69, 0, 0 }, // 72 CVI_VP_VS_LONG_EARLY
  { 1, 49, 51, 0, 0 }, // 73 CVI_VP
  { 1, 67, 69, 0, 0 }, // 74 CVI_VP_VS_LONG
  { 1, 69, 71, 0, 0 }, // 75 CVI_HIST
  { 1, 47, 49, 0, 0 }, // 76 CVI_VX_LONG
  { 1, 63, 65, 0, 0 }, // 77 CVI_VINLANESAT
  { 1, 67, 69, 0, 0 }, // 78 CVI_VP_VS
  { 1, 33, 34, 0, 0 }, // 79 ST_tc_3stall_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 71, 72, 177, 180 }, // 1 S_2op_tc_2_SLOT23
  { 1, 71, 72, 180, 183 }, // 2 S_2op_tc_1_SLOT23
  { 1, 72, 73, 183, 186 }, // 3 ALU32_3op_tc_1_SLOT0123
  { 1, 71, 72, 186, 189 }, // 4 ALU64_tc_1_SLOT23
  { 1, 71, 72, 189, 192 }, // 5 ALU64_tc_2_SLOT23
  { 1, 72, 73, 192, 195 }, // 6 ALU32_ADDI_tc_1_SLOT0123
  { 1, 72, 73, 195, 198 }, // 7 ALU32_3op_tc_2_SLOT0123
  { 1, 72, 73, 198, 201 }, // 8 ALU32_2op_tc_1_SLOT0123
  { 1, 72, 73, 201, 204 }, // 9 PSEUDO
  { 1, 73, 74, 204, 207 }, // 10 CR_tc_3x_SLOT3
  { 1, 71, 72, 207, 210 }, // 11 ALU64_tc_2early_SLOT23
  { 1, 71, 72, 210, 213 }, // 12 M_tc_3x_SLOT23
  { 1, 71, 72, 213, 217 }, // 13 M_tc_3x_acc_SLOT23
  { 1, 71, 72, 217, 220 }, // 14 S_3op_tc_1_SLOT23
  { 1, 71, 72, 220, 223 }, // 15 S_3op_tc_2early_SLOT23
  { 1, 71, 72, 223, 226 }, // 16 S_3op_tc_2_SLOT23
  { 1, 72, 73, 226, 230 }, // 17 EXTENDER_tc_1_SLOT0123
  { 1, 71, 72, 230, 233 }, // 18 S_3op_tc_3_SLOT23
  { 1, 71, 72, 233, 236 }, // 19 M_tc_3stall_SLOT23
  { 1, 71, 72, 236, 239 }, // 20 M_tc_2_SLOT23
  { 1, 71, 72, 239, 243 }, // 21 CR_tc_2early_SLOT23
  { 1, 71, 72, 243, 246 }, // 22 S_2op_tc_2early_SLOT23
  { 1, 72, 73, 246, 249 }, // 23 ALU32_3op_tc_2early_SLOT0123
  { 1, 72, 73, 249, 252 }, // 24 ALU32_2op_tc_2early_SLOT0123
  { 1, 73, 74, 252, 255 }, // 25 CR_tc_2_SLOT3
  { 1, 71, 72, 255, 259 }, // 26 J_tc_2early_SLOT23
  { 1, 74, 75, 259, 261 }, // 27 LD_tc_ld_SLOT01
  { 1, 75, 76, 261, 264 }, // 28 DUPLEX
  { 1, 76, 77, 264, 267 }, // 29 J_tc_2early_SLOT2
  { 1, 77, 78, 267, 268 }, // 30 J_tc_2early_SLOT0123
  { 1, 71, 72, 268, 271 }, // 31 S_2op_tc_3or4x_SLOT23
  { 1, 71, 72, 271, 274 }, // 32 M_tc_3or4x_SLOT23
  { 1, 71, 72, 274, 277 }, // 33 M_tc_3or4x_acc_SLOT23
  { 1, 72, 73, 277, 281 }, // 34 J_tc_2early_CJUMP_UCJUMP_ARCHDEPSLOT
  { 1, 73, 74, 281, 284 }, // 35 CR_tc_2early_SLOT3
  { 1, 75, 76, 284, 288 }, // 36 NCJ_tc_3or4stall_SLOT0
  { 1, 72, 73, 288, 291 }, // 37 COMPOUND_CJ_ARCHDEPSLOT
  { 1, 71, 72, 291, 294 }, // 38 COMPOUND
  { 1, 74, 75, 294, 296 }, // 39 LD_tc_ld_pi_SLOT01
  { 1, 74, 75, 296, 300 }, // 40 V2LDST_tc_ld_SLOT01
  { 1, 75, 76, 300, 302 }, // 41 LD_tc_ld_SLOT0
  { 1, 75, 76, 302, 306 }, // 42 V4LDST_tc_st_SLOT0
  { 1, 74, 75, 306, 310 }, // 43 V4LDST_tc_ld_SLOT01
  { 1, 75, 76, 310, 312 }, // 44 LD_tc_3or4stall_SLOT0
  { 1, 71, 72, 312, 315 }, // 45 M_tc_2_acc_SLOT23
  { 1, 71, 72, 315, 318 }, // 46 S_3op_tc_3x_SLOT23
  { 1, 71, 72, 318, 321 }, // 47 ALU64_tc_3x_SLOT23
  { 1, 74, 75, 321, 324 }, // 48 ST_tc_st_SLOT01
  { 1, 78, 81, 324, 328 }, // 49 CVI_VM_LD
  { 1, 81, 83, 328, 331 }, // 50 PSEUDOM
  { 1, 83, 85, 331, 335 }, // 51 CVI_VA_DV
  { 1, 85, 88, 335, 339 }, // 52 CVI_VM_ST
  { 1, 75, 76, 339, 342 }, // 53 ST_tc_ld_SLOT0
  { 1, 74, 75, 342, 346 }, // 54 V2LDST_tc_st_SLOT01
  { 1, 74, 75, 346, 349 }, // 55 ST_tc_st_pi_SLOT01
  { 1, 75, 76, 349, 353 }, // 56 V2LDST_tc_st_SLOT0
  { 1, 75, 76, 353, 356 }, // 57 ST_tc_st_pi_SLOT0
  { 1, 75, 76, 356, 359 }, // 58 ST_tc_st_SLOT0
  { 1, 74, 75, 359, 363 }, // 59 V4LDST_tc_st_SLOT01
  { 1, 88, 90, 363, 367 }, // 60 CVI_VA
  { 1, 90, 92, 367, 371 }, // 61 CVI_VX
  { 1, 90, 92, 371, 375 }, // 62 CVI_VX_LATE
  { 1, 92, 94, 375, 379 }, // 63 CVI_VP_LONG
  { 1, 94, 98, 379, 383 }, // 64 CVI_VM_VP_LDU
  { 1, 78, 81, 383, 387 }, // 65 CVI_VM_CUR_LD
  { 1, 98, 100, 387, 392 }, // 66 CVI_VM_TMP_LD
  { 1, 100, 104, 392, 396 }, // 67 CVI_VM_STU
  { 1, 104, 106, 396, 400 }, // 68 CVI_VM_NEW_ST
  { 1, 106, 108, 400, 404 }, // 69 CVI_VS
  { 1, 108, 110, 404, 408 }, // 70 CVI_VX_DV
  { 1, 108, 110, 408, 412 }, // 71 CVI_VX_DV_LONG
  { 1, 110, 112, 412, 416 }, // 72 CVI_VP_VS_LONG_EARLY
  { 1, 92, 94, 416, 420 }, // 73 CVI_VP
  { 1, 110, 112, 420, 424 }, // 74 CVI_VP_VS_LONG
  { 1, 112, 114, 424, 428 }, // 75 CVI_HIST
  { 1, 90, 92, 428, 432 }, // 76 CVI_VX_LONG
  { 1, 88, 90, 432, 436 }, // 77 CVI_VINLANESAT
  { 1, 110, 112, 436, 440 }, // 78 CVI_VP_VS
  { 1, 75, 76, 440, 443 }, // 79 ST_tc_3stall_SLOT0
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

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

static const llvm::MCSchedModel HexagonModelV4 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV4};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55};

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "hexagonv4", (const void *)&HexagonModelV4 },
  { "hexagonv5", (const void *)&HexagonModelV4 },
  { "hexagonv55", (const void *)&HexagonModelV55 },
  { "hexagonv60", (const void *)&HexagonModelV60 },
  { "hexagonv62", (const void *)&HexagonModelV62 }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV4] && HexagonArchVersion < V4) HexagonArchVersion = V4;
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < V5) HexagonArchVersion = V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < V55) HexagonArchVersion = V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < V60) HexagonArchVersion = V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < V62) HexagonArchVersion = V62;
  if (Bits[Hexagon::ExtensionHVX]) UseHVXOps = true;
  if (Bits[Hexagon::ExtensionHVXDbl]) UseHVXDblOps = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 8), makeArrayRef(HexagonSubTypeKV, 5), 
                        HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

