/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Lanai target                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/       OPC_SwitchOpcode /*33 cases */, 1|128,2/*257*/, TARGET_VAL(ISD::LOAD),// ->262
/*5*/         OPC_RecordMemRef,
/*6*/         OPC_RecordNode, // #0 = 'ld' chained node
/*7*/         OPC_RecordChild1, // #1 = $src
/*8*/         OPC_CheckChild1Type, MVT::i32,
/*10*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/        OPC_CheckType, MVT::i32,
/*14*/        OPC_Scope, 32, /*->48*/ // 9 children in Scope
/*16*/          OPC_CheckPredicate, 1, // Predicate_load
/*18*/          OPC_Scope, 13, /*->33*/ // 2 children in Scope
/*20*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRi:$src #2 #3 #4
/*23*/            OPC_EmitMergeInputChains1_0,
/*24*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RI:i32 ADDRri:i32:$src)
/*33*/          /*Scope*/ 13, /*->47*/
/*34*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*37*/            OPC_EmitMergeInputChains1_0,
/*38*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RR:i32 ADDRrr:i32:$src)
/*47*/          0, /*End of Scope*/
/*48*/        /*Scope*/ 52, /*->101*/
/*49*/          OPC_CheckPredicate, 2, // Predicate_zextload
/*51*/          OPC_Scope, 15, /*->68*/ // 3 children in Scope
/*53*/            OPC_CheckPredicate, 3, // Predicate_zextloadi32
/*55*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*58*/            OPC_EmitMergeInputChains1_0,
/*59*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDWz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LDWz_RR:i32 ADDRrr:i32:$src)
/*68*/          /*Scope*/ 15, /*->84*/
/*69*/            OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*71*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*74*/            OPC_EmitMergeInputChains1_0,
/*75*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LDHz_RR:i32 ADDRrr:i32:$src)
/*84*/          /*Scope*/ 15, /*->100*/
/*85*/            OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*87*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*90*/            OPC_EmitMergeInputChains1_0,
/*91*/            OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LDBz_RR:i32 ADDRrr:i32:$src)
/*100*/         0, /*End of Scope*/
/*101*/       /*Scope*/ 36, /*->138*/
/*102*/         OPC_CheckPredicate, 6, // Predicate_sextload
/*104*/         OPC_Scope, 15, /*->121*/ // 2 children in Scope
/*106*/           OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*108*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*111*/           OPC_EmitMergeInputChains1_0,
/*112*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LDHs_RR:i32 ADDRrr:i32:$src)
/*121*/         /*Scope*/ 15, /*->137*/
/*122*/           OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*124*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*127*/           OPC_EmitMergeInputChains1_0,
/*128*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LDBs_RR:i32 ADDRrr:i32:$src)
/*137*/         0, /*End of Scope*/
/*138*/       /*Scope*/ 17, /*->156*/
/*139*/         OPC_CheckPredicate, 2, // Predicate_zextload
/*141*/         OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*143*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*146*/         OPC_EmitMergeInputChains1_0,
/*147*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LDHz_RI:i32 ADDRspls:i32:$src)
/*156*/       /*Scope*/ 17, /*->174*/
/*157*/         OPC_CheckPredicate, 6, // Predicate_sextload
/*159*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*161*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*164*/         OPC_EmitMergeInputChains1_0,
/*165*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LDHs_RI:i32 ADDRspls:i32:$src)
/*174*/       /*Scope*/ 17, /*->192*/
/*175*/         OPC_CheckPredicate, 2, // Predicate_zextload
/*177*/         OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*179*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*182*/         OPC_EmitMergeInputChains1_0,
/*183*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LDBz_RI:i32 ADDRspls:i32:$src)
/*192*/       /*Scope*/ 17, /*->210*/
/*193*/         OPC_CheckPredicate, 6, // Predicate_sextload
/*195*/         OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*197*/         OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*200*/         OPC_EmitMergeInputChains1_0,
/*201*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LDBs_RI:i32 ADDRspls:i32:$src)
/*210*/       /*Scope*/ 36, /*->247*/
/*211*/         OPC_CheckPredicate, 7, // Predicate_extload
/*213*/         OPC_Scope, 15, /*->230*/ // 2 children in Scope
/*215*/           OPC_CheckPredicate, 5, // Predicate_extloadi8
/*217*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*220*/           OPC_EmitMergeInputChains1_0,
/*221*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LDBz_RI:i32 ADDRspls:i32:$src)
/*230*/         /*Scope*/ 15, /*->246*/
/*231*/           OPC_CheckPredicate, 4, // Predicate_extloadi16
/*233*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*236*/           OPC_EmitMergeInputChains1_0,
/*237*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 ADDRspls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LDHz_RI:i32 ADDRspls:i32:$src)
/*246*/         0, /*End of Scope*/
/*247*/       /*Scope*/ 13, /*->261*/
/*248*/         OPC_CheckPredicate, 1, // Predicate_load
/*250*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrSls:$src #2
/*253*/         OPC_EmitMergeInputChains1_0,
/*254*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 ADDRsls:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                // Dst: (LDADDR:i32 ADDRsls:i32:$src)
/*261*/       0, /*End of Scope*/
/*262*/     /*SwitchOpcode*/ 0|128,1/*128*/, TARGET_VAL(ISD::STORE),// ->394
/*266*/       OPC_RecordMemRef,
/*267*/       OPC_RecordNode, // #0 = 'st' chained node
/*268*/       OPC_RecordChild1, // #1 = $Rd
/*269*/       OPC_CheckChild1Type, MVT::i32,
/*271*/       OPC_RecordChild2, // #2 = $dst
/*272*/       OPC_CheckChild2Type, MVT::i32,
/*274*/       OPC_CheckPredicate, 8, // Predicate_unindexedstore
/*276*/       OPC_Scope, 32, /*->310*/ // 3 children in Scope
/*278*/         OPC_CheckPredicate, 9, // Predicate_store
/*280*/         OPC_Scope, 13, /*->295*/ // 2 children in Scope
/*282*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*285*/           OPC_EmitMergeInputChains1_0,
/*286*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRrr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RR GPR:i32:$Rd, ADDRrr:i32:$dst)
/*295*/         /*Scope*/ 13, /*->309*/
/*296*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRi:$dst #3 #4 #5
/*299*/           OPC_EmitMergeInputChains1_0,
/*300*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRri:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RI GPR:i32:$Rd, ADDRri:i32:$dst)
/*309*/         0, /*End of Scope*/
/*310*/       /*Scope*/ 68, /*->379*/
/*311*/         OPC_CheckPredicate, 10, // Predicate_truncstore
/*313*/         OPC_Scope, 15, /*->330*/ // 4 children in Scope
/*315*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*317*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*320*/           OPC_EmitMergeInputChains1_0,
/*321*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRrr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RR GPR:i32:$Rd, ADDRrr:i32:$dst)
/*330*/         /*Scope*/ 15, /*->346*/
/*331*/           OPC_CheckPredicate, 12, // Predicate_truncstorei8
/*333*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*336*/           OPC_EmitMergeInputChains1_0,
/*337*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRrr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RR GPR:i32:$Rd, ADDRrr:i32:$dst)
/*346*/         /*Scope*/ 15, /*->362*/
/*347*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*349*/           OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*352*/           OPC_EmitMergeInputChains1_0,
/*353*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRspls:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RI GPR:i32:$Rd, ADDRspls:i32:$dst)
/*362*/         /*Scope*/ 15, /*->378*/
/*363*/           OPC_CheckPredicate, 12, // Predicate_truncstorei8
/*365*/           OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*368*/           OPC_EmitMergeInputChains1_0,
/*369*/           OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:i32:$Rd, ADDRspls:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RI GPR:i32:$Rd, ADDRspls:i32:$dst)
/*378*/         0, /*End of Scope*/
/*379*/       /*Scope*/ 13, /*->393*/
/*380*/         OPC_CheckPredicate, 9, // Predicate_store
/*382*/         OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrSls:$dst #3
/*385*/         OPC_EmitMergeInputChains1_0,
/*386*/         OPC_MorphNodeTo0, TARGET_VAL(Lanai::STADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#Ops*/, 1, 3, 
                // Src: (st GPR:i32:$Rd, ADDRsls:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                // Dst: (STADDR GPR:i32:$Rd, ADDRsls:i32:$dst)
/*393*/       0, /*End of Scope*/
/*394*/     /*SwitchOpcode*/ 7|128,1/*135*/, TARGET_VAL(ISD::AND),// ->533
/*398*/       OPC_Scope, 23, /*->423*/ // 2 children in Scope
/*400*/         OPC_MoveChild0,
/*401*/         OPC_CheckOpcode, TARGET_VAL(LanaiISD::SETCC),
/*404*/         OPC_CaptureGlueInput,
/*405*/         OPC_RecordChild0, // #0 = $DDDI
/*406*/         OPC_MoveChild0,
/*407*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*410*/         OPC_MoveParent,
/*411*/         OPC_MoveParent,
/*412*/         OPC_CheckChild1Integer, 1, 
/*414*/         OPC_EmitConvertToTarget, 0,
/*416*/         OPC_MorphNodeTo1, TARGET_VAL(Lanai::SCC), 0|OPFL_GlueInput,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (and:i32 (LanaiSetCC:i32 (imm:i32):$DDDI), 1:i32) - Complexity = 14
                // Dst: (SCC:i32 (imm:i32):$DDDI)
/*423*/       /*Scope*/ 108, /*->532*/
/*424*/         OPC_RecordChild0, // #0 = $Rs1
/*425*/         OPC_RecordChild1, // #1 = $imm16
/*426*/         OPC_Scope, 76, /*->504*/ // 2 children in Scope
/*428*/           OPC_MoveChild1,
/*429*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*432*/           OPC_Scope, 16, /*->450*/ // 4 children in Scope
/*434*/             OPC_CheckPredicate, 13, // Predicate_i32lo16and
/*436*/             OPC_MoveParent,
/*437*/             OPC_EmitConvertToTarget, 1,
/*439*/             OPC_EmitNodeXForm, 0, 2, // LO16
/*442*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (AND_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*450*/           /*Scope*/ 16, /*->467*/
/*451*/             OPC_CheckPredicate, 14, // Predicate_i32hi16and
/*453*/             OPC_MoveParent,
/*454*/             OPC_EmitConvertToTarget, 1,
/*456*/             OPC_EmitNodeXForm, 1, 2, // HI16
/*459*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (AND_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*467*/           /*Scope*/ 17, /*->485*/
/*468*/             OPC_CheckPredicate, 13, // Predicate_i32lo16and
/*470*/             OPC_MoveParent,
/*471*/             OPC_EmitConvertToTarget, 1,
/*473*/             OPC_EmitNodeXForm, 0, 2, // LO16
/*476*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_LO), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (AND_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*485*/           /*Scope*/ 17, /*->503*/
/*486*/             OPC_CheckPredicate, 14, // Predicate_i32hi16and
/*488*/             OPC_MoveParent,
/*489*/             OPC_EmitConvertToTarget, 1,
/*491*/             OPC_EmitNodeXForm, 1, 2, // HI16
/*494*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_HI), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (AND_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*503*/           0, /*End of Scope*/
/*504*/         /*Scope*/ 26, /*->531*/
/*505*/           OPC_EmitInteger, MVT::i32, 0, 
/*508*/           OPC_Scope, 9, /*->519*/ // 2 children in Scope
/*510*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_R), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (and:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                    // Dst: (AND_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*519*/           /*Scope*/ 10, /*->530*/
/*520*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_R), 0,
                        MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (and:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                    // Dst: (AND_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*530*/           0, /*End of Scope*/
/*531*/         0, /*End of Scope*/
/*532*/       0, /*End of Scope*/
/*533*/     /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->559
/*536*/       OPC_RecordNode, // #0 = 'CallSeqEnd' chained node
/*537*/       OPC_CaptureGlueInput,
/*538*/       OPC_RecordChild1, // #1 = $amt1
/*539*/       OPC_MoveChild1,
/*540*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*543*/       OPC_MoveParent,
/*544*/       OPC_RecordChild2, // #2 = $amt2
/*545*/       OPC_MoveChild2,
/*546*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*549*/       OPC_MoveParent,
/*550*/       OPC_EmitMergeInputChains1_0,
/*551*/       OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (CallSeqEnd (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
/*559*/     /*SwitchOpcode*/ 94|128,2/*350*/, TARGET_VAL(ISD::OR),// ->913
/*563*/       OPC_Scope, 30|128,1/*158*/, /*->724*/ // 3 children in Scope
/*566*/         OPC_RecordChild0, // #0 = $hi
/*567*/         OPC_MoveChild1,
/*568*/         OPC_SwitchOpcode /*2 cases */, 69, TARGET_VAL(LanaiISD::LO),// ->641
/*572*/           OPC_RecordChild0, // #1 = $lo
/*573*/           OPC_MoveChild0,
/*574*/           OPC_SwitchOpcode /*5 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->588
/*578*/             OPC_MoveParent,
/*579*/             OPC_MoveParent,
/*580*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tglobaladdr:i32):$lo)
/*588*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->601
/*591*/             OPC_MoveParent,
/*592*/             OPC_MoveParent,
/*593*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (texternalsym:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (texternalsym:i32):$lo)
/*601*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->614
/*604*/             OPC_MoveParent,
/*605*/             OPC_MoveParent,
/*606*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tblockaddress:i32):$lo)
/*614*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->627
/*617*/             OPC_MoveParent,
/*618*/             OPC_MoveParent,
/*619*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tjumptable:i32):$lo)
/*627*/           /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->640
/*630*/             OPC_MoveParent,
/*631*/             OPC_MoveParent,
/*632*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:i32 GPR:i32:$hi, (LanaiLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tconstpool:i32):$lo)
/*640*/           0, // EndSwitchOpcode
/*641*/         /*SwitchOpcode*/ 79, TARGET_VAL(LanaiISD::SMALL),// ->723
/*644*/           OPC_RecordChild0, // #1 = $small
/*645*/           OPC_MoveChild0,
/*646*/           OPC_SwitchOpcode /*5 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->662
/*650*/             OPC_MoveParent,
/*651*/             OPC_MoveParent,
/*652*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*655*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tglobaladdr:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tglobaladdr:i32):$small)
/*662*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->677
/*665*/             OPC_MoveParent,
/*666*/             OPC_MoveParent,
/*667*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*670*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (texternalsym:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (texternalsym:i32):$small)
/*677*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->692
/*680*/             OPC_MoveParent,
/*681*/             OPC_MoveParent,
/*682*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*685*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tblockaddress:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tblockaddress:i32):$small)
/*692*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetJumpTable),// ->707
/*695*/             OPC_MoveParent,
/*696*/             OPC_MoveParent,
/*697*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*700*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tjumptable:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tjumptable:i32):$small)
/*707*/           /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetConstantPool),// ->722
/*710*/             OPC_MoveParent,
/*711*/             OPC_MoveParent,
/*712*/             OPC_EmitCopyToReg, 0, Lanai::R0,
/*715*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:i32 R0:i32, (LanaiSmall:i32 (tconstpool:i32):$small)) - Complexity = 9
                    // Dst: (SLI:i32 (tconstpool:i32):$small)
/*722*/           0, // EndSwitchOpcode
/*723*/         0, // EndSwitchOpcode
/*724*/       /*Scope*/ 78, /*->803*/
/*725*/         OPC_MoveChild0,
/*726*/         OPC_CheckOpcode, TARGET_VAL(LanaiISD::LO),
/*729*/         OPC_RecordChild0, // #0 = $lo
/*730*/         OPC_MoveChild0,
/*731*/         OPC_SwitchOpcode /*5 cases */, 11, TARGET_VAL(ISD::TargetGlobalAddress),// ->746
/*735*/           OPC_MoveParent,
/*736*/           OPC_MoveParent,
/*737*/           OPC_RecordChild1, // #1 = $hi
/*738*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tglobaladdr:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tglobaladdr:i32):$lo)
/*746*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetExternalSymbol),// ->760
/*749*/           OPC_MoveParent,
/*750*/           OPC_MoveParent,
/*751*/           OPC_RecordChild1, // #1 = $hi
/*752*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (texternalsym:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (texternalsym:i32):$lo)
/*760*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetBlockAddress),// ->774
/*763*/           OPC_MoveParent,
/*764*/           OPC_MoveParent,
/*765*/           OPC_RecordChild1, // #1 = $hi
/*766*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tblockaddress:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tblockaddress:i32):$lo)
/*774*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetJumpTable),// ->788
/*777*/           OPC_MoveParent,
/*778*/           OPC_MoveParent,
/*779*/           OPC_RecordChild1, // #1 = $hi
/*780*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tjumptable:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tjumptable:i32):$lo)
/*788*/         /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetConstantPool),// ->802
/*791*/           OPC_MoveParent,
/*792*/           OPC_MoveParent,
/*793*/           OPC_RecordChild1, // #1 = $hi
/*794*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (LanaiLo:i32 (tconstpool:i32):$lo), GPR:i32:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:i32 GPR:i32:$hi, (tconstpool:i32):$lo)
/*802*/         0, // EndSwitchOpcode
/*803*/       /*Scope*/ 108, /*->912*/
/*804*/         OPC_RecordChild0, // #0 = $Rs1
/*805*/         OPC_RecordChild1, // #1 = $imm16
/*806*/         OPC_Scope, 76, /*->884*/ // 2 children in Scope
/*808*/           OPC_MoveChild1,
/*809*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*812*/           OPC_Scope, 16, /*->830*/ // 4 children in Scope
/*814*/             OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*816*/             OPC_MoveParent,
/*817*/             OPC_EmitConvertToTarget, 1,
/*819*/             OPC_EmitNodeXForm, 0, 2, // LO16
/*822*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*830*/           /*Scope*/ 16, /*->847*/
/*831*/             OPC_CheckPredicate, 16, // Predicate_i32hi16
/*833*/             OPC_MoveParent,
/*834*/             OPC_EmitConvertToTarget, 1,
/*836*/             OPC_EmitNodeXForm, 1, 2, // HI16
/*839*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_HI), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*847*/           /*Scope*/ 17, /*->865*/
/*848*/             OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*850*/             OPC_MoveParent,
/*851*/             OPC_EmitConvertToTarget, 1,
/*853*/             OPC_EmitNodeXForm, 0, 2, // LO16
/*856*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_LO), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*865*/           /*Scope*/ 17, /*->883*/
/*866*/             OPC_CheckPredicate, 16, // Predicate_i32hi16
/*868*/             OPC_MoveParent,
/*869*/             OPC_EmitConvertToTarget, 1,
/*871*/             OPC_EmitNodeXForm, 1, 2, // HI16
/*874*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_HI), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*883*/           0, /*End of Scope*/
/*884*/         /*Scope*/ 26, /*->911*/
/*885*/           OPC_EmitInteger, MVT::i32, 0, 
/*888*/           OPC_Scope, 9, /*->899*/ // 2 children in Scope
/*890*/             OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_R), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                    // Dst: (OR_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*899*/           /*Scope*/ 10, /*->910*/
/*900*/             OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_R), 0,
                        MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                    // Dst: (OR_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*910*/           0, /*End of Scope*/
/*911*/         0, /*End of Scope*/
/*912*/       0, /*End of Scope*/
/*913*/     /*SwitchOpcode*/ 108, TARGET_VAL(ISD::XOR),// ->1024
/*916*/       OPC_RecordChild0, // #0 = $Rs1
/*917*/       OPC_RecordChild1, // #1 = $imm16
/*918*/       OPC_Scope, 76, /*->996*/ // 2 children in Scope
/*920*/         OPC_MoveChild1,
/*921*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*924*/         OPC_Scope, 16, /*->942*/ // 4 children in Scope
/*926*/           OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*928*/           OPC_MoveParent,
/*929*/           OPC_EmitConvertToTarget, 1,
/*931*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*934*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*942*/         /*Scope*/ 16, /*->959*/
/*943*/           OPC_CheckPredicate, 16, // Predicate_i32hi16
/*945*/           OPC_MoveParent,
/*946*/           OPC_EmitConvertToTarget, 1,
/*948*/           OPC_EmitNodeXForm, 1, 2, // HI16
/*951*/           OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*959*/         /*Scope*/ 17, /*->977*/
/*960*/           OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*962*/           OPC_MoveParent,
/*963*/           OPC_EmitConvertToTarget, 1,
/*965*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*968*/           OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_LO), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*977*/         /*Scope*/ 17, /*->995*/
/*978*/           OPC_CheckPredicate, 16, // Predicate_i32hi16
/*980*/           OPC_MoveParent,
/*981*/           OPC_EmitConvertToTarget, 1,
/*983*/           OPC_EmitNodeXForm, 1, 2, // HI16
/*986*/           OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_HI), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*995*/         0, /*End of Scope*/
/*996*/       /*Scope*/ 26, /*->1023*/
/*997*/         OPC_EmitInteger, MVT::i32, 0, 
/*1000*/        OPC_Scope, 9, /*->1011*/ // 2 children in Scope
/*1002*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_R), 0,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (XOR_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1011*/        /*Scope*/ 10, /*->1022*/
/*1012*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_R), 0,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (XOR_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1022*/        0, /*End of Scope*/
/*1023*/      0, /*End of Scope*/
/*1024*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADD),// ->1100
/*1027*/      OPC_RecordChild0, // #0 = $Rs1
/*1028*/      OPC_RecordChild1, // #1 = $imm
/*1029*/      OPC_Scope, 55, /*->1086*/ // 2 children in Scope
/*1031*/        OPC_MoveChild1,
/*1032*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1035*/        OPC_Scope, 16, /*->1053*/ // 3 children in Scope
/*1037*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1039*/          OPC_MoveParent,
/*1040*/          OPC_EmitConvertToTarget, 1,
/*1042*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1045*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1053*/        /*Scope*/ 16, /*->1070*/
/*1054*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1056*/          OPC_MoveParent,
/*1057*/          OPC_EmitConvertToTarget, 1,
/*1059*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1062*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1070*/        /*Scope*/ 14, /*->1085*/
/*1071*/          OPC_CheckPredicate, 17, // Predicate_i32neg16
/*1073*/          OPC_MoveParent,
/*1074*/          OPC_EmitNodeXForm, 2, 1, // NEG
/*1077*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1085*/        0, /*End of Scope*/
/*1086*/      /*Scope*/ 12, /*->1099*/
/*1087*/        OPC_EmitInteger, MVT::i32, 0, 
/*1090*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (add:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (ADD_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1099*/      0, /*End of Scope*/
/*1100*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUB),// ->1176
/*1103*/      OPC_RecordChild0, // #0 = $Rs1
/*1104*/      OPC_RecordChild1, // #1 = $imm
/*1105*/      OPC_Scope, 55, /*->1162*/ // 2 children in Scope
/*1107*/        OPC_MoveChild1,
/*1108*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1111*/        OPC_Scope, 16, /*->1129*/ // 3 children in Scope
/*1113*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1115*/          OPC_MoveParent,
/*1116*/          OPC_EmitConvertToTarget, 1,
/*1118*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1121*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1129*/        /*Scope*/ 16, /*->1146*/
/*1130*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1132*/          OPC_MoveParent,
/*1133*/          OPC_EmitConvertToTarget, 1,
/*1135*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1138*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1146*/        /*Scope*/ 14, /*->1161*/
/*1147*/          OPC_CheckPredicate, 17, // Predicate_i32neg16
/*1149*/          OPC_MoveParent,
/*1150*/          OPC_EmitNodeXForm, 2, 1, // NEG
/*1153*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1161*/        0, /*End of Scope*/
/*1162*/      /*Scope*/ 12, /*->1175*/
/*1163*/        OPC_EmitInteger, MVT::i32, 0, 
/*1166*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (sub:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SUB_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1175*/      0, /*End of Scope*/
/*1176*/    /*SwitchOpcode*/ 61, TARGET_VAL(ISD::ADDC),// ->1240
/*1179*/      OPC_RecordChild0, // #0 = $Rs1
/*1180*/      OPC_RecordChild1, // #1 = $imm
/*1181*/      OPC_Scope, 42, /*->1225*/ // 2 children in Scope
/*1183*/        OPC_MoveChild1,
/*1184*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1187*/        OPC_Scope, 17, /*->1206*/ // 2 children in Scope
/*1189*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1191*/          OPC_MoveParent,
/*1192*/          OPC_EmitConvertToTarget, 1,
/*1194*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1197*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1206*/        /*Scope*/ 17, /*->1224*/
/*1207*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1209*/          OPC_MoveParent,
/*1210*/          OPC_EmitConvertToTarget, 1,
/*1212*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1215*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1224*/        0, /*End of Scope*/
/*1225*/      /*Scope*/ 13, /*->1239*/
/*1226*/        OPC_EmitInteger, MVT::i32, 0, 
/*1229*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (addc:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (ADD_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1239*/      0, /*End of Scope*/
/*1240*/    /*SwitchOpcode*/ 61, TARGET_VAL(ISD::SUBC),// ->1304
/*1243*/      OPC_RecordChild0, // #0 = $Rs1
/*1244*/      OPC_RecordChild1, // #1 = $imm
/*1245*/      OPC_Scope, 42, /*->1289*/ // 2 children in Scope
/*1247*/        OPC_MoveChild1,
/*1248*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1251*/        OPC_Scope, 17, /*->1270*/ // 2 children in Scope
/*1253*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1255*/          OPC_MoveParent,
/*1256*/          OPC_EmitConvertToTarget, 1,
/*1258*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1261*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1270*/        /*Scope*/ 17, /*->1288*/
/*1271*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1273*/          OPC_MoveParent,
/*1274*/          OPC_EmitConvertToTarget, 1,
/*1276*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1279*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1288*/        0, /*End of Scope*/
/*1289*/      /*Scope*/ 13, /*->1303*/
/*1290*/        OPC_EmitInteger, MVT::i32, 0, 
/*1293*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (subc:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SUB_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1303*/      0, /*End of Scope*/
/*1304*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADDE),// ->1380
/*1307*/      OPC_CaptureGlueInput,
/*1308*/      OPC_RecordChild0, // #0 = $Rs1
/*1309*/      OPC_RecordChild1, // #1 = $imm
/*1310*/      OPC_Scope, 40, /*->1352*/ // 2 children in Scope
/*1312*/        OPC_MoveChild1,
/*1313*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1316*/        OPC_Scope, 16, /*->1334*/ // 2 children in Scope
/*1318*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1320*/          OPC_MoveParent,
/*1321*/          OPC_EmitConvertToTarget, 1,
/*1323*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1326*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1334*/        /*Scope*/ 16, /*->1351*/
/*1335*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1337*/          OPC_MoveParent,
/*1338*/          OPC_EmitConvertToTarget, 1,
/*1340*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1343*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1351*/        0, /*End of Scope*/
/*1352*/      /*Scope*/ 26, /*->1379*/
/*1353*/        OPC_EmitInteger, MVT::i32, 0, 
/*1356*/        OPC_Scope, 9, /*->1367*/ // 2 children in Scope
/*1358*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (ADDC_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1367*/        /*Scope*/ 10, /*->1378*/
/*1368*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADDC_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (ADDC_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1378*/        0, /*End of Scope*/
/*1379*/      0, /*End of Scope*/
/*1380*/    /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUBE),// ->1456
/*1383*/      OPC_CaptureGlueInput,
/*1384*/      OPC_RecordChild0, // #0 = $Rs1
/*1385*/      OPC_RecordChild1, // #1 = $imm
/*1386*/      OPC_Scope, 40, /*->1428*/ // 2 children in Scope
/*1388*/        OPC_MoveChild1,
/*1389*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1392*/        OPC_Scope, 16, /*->1410*/ // 2 children in Scope
/*1394*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1396*/          OPC_MoveParent,
/*1397*/          OPC_EmitConvertToTarget, 1,
/*1399*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1402*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1410*/        /*Scope*/ 16, /*->1427*/
/*1411*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1413*/          OPC_MoveParent,
/*1414*/          OPC_EmitConvertToTarget, 1,
/*1416*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1419*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1427*/        0, /*End of Scope*/
/*1428*/      /*Scope*/ 26, /*->1455*/
/*1429*/        OPC_EmitInteger, MVT::i32, 0, 
/*1432*/        OPC_Scope, 9, /*->1443*/ // 2 children in Scope
/*1434*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (SUBB_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1443*/        /*Scope*/ 10, /*->1454*/
/*1444*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                  // Dst: (SUBB_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1454*/        0, /*End of Scope*/
/*1455*/      0, /*End of Scope*/
/*1456*/    /*SwitchOpcode*/ 65, TARGET_VAL(LanaiISD::SUBBF),// ->1524
/*1459*/      OPC_CaptureGlueInput,
/*1460*/      OPC_RecordChild0, // #0 = $Rs1
/*1461*/      OPC_Scope, 43, /*->1506*/ // 2 children in Scope
/*1463*/        OPC_RecordChild1, // #1 = $imm
/*1464*/        OPC_MoveChild1,
/*1465*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1468*/        OPC_Scope, 17, /*->1487*/ // 2 children in Scope
/*1470*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1472*/          OPC_MoveParent,
/*1473*/          OPC_EmitConvertToTarget, 1,
/*1475*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1478*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_LO:i32:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16z>>:$imm))
/*1487*/        /*Scope*/ 17, /*->1505*/
/*1488*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1490*/          OPC_MoveParent,
/*1491*/          OPC_EmitConvertToTarget, 1,
/*1493*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1496*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_HI:i32:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16>>:$imm))
/*1505*/        0, /*End of Scope*/
/*1506*/      /*Scope*/ 16, /*->1523*/
/*1507*/        OPC_CheckChild0Type, MVT::i32,
/*1509*/        OPC_RecordChild1, // #1 = $Rs2
/*1510*/        OPC_EmitInteger, MVT::i32, 0, 
/*1513*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (LanaiSubbF GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SUBB_F_R:i32:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1523*/      0, /*End of Scope*/
/*1524*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::SHL),// ->1562
/*1527*/      OPC_RecordChild0, // #0 = $Rs1
/*1528*/      OPC_RecordChild1, // #1 = $imm16
/*1529*/      OPC_Scope, 17, /*->1548*/ // 2 children in Scope
/*1531*/        OPC_MoveChild1,
/*1532*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1535*/        OPC_CheckPredicate, 18, // Predicate_immShift
/*1537*/        OPC_MoveParent,
/*1538*/        OPC_EmitConvertToTarget, 1,
/*1540*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_immShift>>:$imm16) - Complexity = 7
                // Dst: (SL_I:i32 GPR:i32:$Rs1, (imm:i32):$imm16)
/*1548*/      /*Scope*/ 12, /*->1561*/
/*1549*/        OPC_EmitInteger, MVT::i32, 0, 
/*1552*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SHL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (shl:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SHL_R:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1561*/      0, /*End of Scope*/
/*1562*/    /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRL),// ->1616
/*1565*/      OPC_RecordChild0, // #0 = $Rs1
/*1566*/      OPC_RecordChild1, // #1 = $imm
/*1567*/      OPC_Scope, 18, /*->1587*/ // 2 children in Scope
/*1569*/        OPC_MoveChild1,
/*1570*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1573*/        OPC_CheckPredicate, 18, // Predicate_immShift
/*1575*/        OPC_MoveParent,
/*1576*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*1579*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SL_I:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1587*/      /*Scope*/ 27, /*->1615*/
/*1588*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1591*/        OPC_EmitInteger, MVT::i32, 0, 
/*1594*/        OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1603*/        OPC_EmitInteger, MVT::i32, 0, 
/*1606*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (srl:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SRL_R:i32 GPR:i32:$Rs1, (SUB_R:i32 R0:i32, GPR:i32:$Rs2))
/*1615*/      0, /*End of Scope*/
/*1616*/    /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRA),// ->1670
/*1619*/      OPC_RecordChild0, // #0 = $Rs1
/*1620*/      OPC_RecordChild1, // #1 = $imm
/*1621*/      OPC_Scope, 18, /*->1641*/ // 2 children in Scope
/*1623*/        OPC_MoveChild1,
/*1624*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1627*/        OPC_CheckPredicate, 18, // Predicate_immShift
/*1629*/        OPC_MoveParent,
/*1630*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*1633*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SA_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPR:i32:$Rs1, (imm:i32)<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SA_I:i32 GPR:i32:$Rs1, (NEG:i32 ?:i32:$imm))
/*1641*/      /*Scope*/ 27, /*->1669*/
/*1642*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1645*/        OPC_EmitInteger, MVT::i32, 0, 
/*1648*/        OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1657*/        OPC_EmitInteger, MVT::i32, 0, 
/*1660*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRA_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (sra:i32 GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SRA_R:i32 GPR:i32:$Rs1, (SUB_R:i32 R0:i32, GPR:i32:$Rs2))
/*1669*/      0, /*End of Scope*/
/*1670*/    /*SwitchOpcode*/ 57, TARGET_VAL(LanaiISD::SET_FLAG),// ->1730
/*1673*/      OPC_RecordChild0, // #0 = $Rs1
/*1674*/      OPC_Scope, 41, /*->1717*/ // 2 children in Scope
/*1676*/        OPC_RecordChild1, // #1 = $imm16
/*1677*/        OPC_MoveChild1,
/*1678*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1681*/        OPC_Scope, 16, /*->1699*/ // 2 children in Scope
/*1683*/          OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*1685*/          OPC_MoveParent,
/*1686*/          OPC_EmitConvertToTarget, 1,
/*1688*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*1691*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_LO), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_LO:i32 GPR:i32:$Rs1, (LO16:i32 (imm:i32):$imm16))
/*1699*/        /*Scope*/ 16, /*->1716*/
/*1700*/          OPC_CheckPredicate, 16, // Predicate_i32hi16
/*1702*/          OPC_MoveParent,
/*1703*/          OPC_EmitConvertToTarget, 1,
/*1705*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*1708*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_HI), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:i32:$Rs1, (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_HI:i32 GPR:i32:$Rs1, (HI16:i32 (imm:i32):$imm16))
/*1716*/        0, /*End of Scope*/
/*1717*/      /*Scope*/ 11, /*->1729*/
/*1718*/        OPC_CheckChild0Type, MVT::i32,
/*1720*/        OPC_RecordChild1, // #1 = $Rs2
/*1721*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RR), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (LanaiSetFlag GPR:i32:$Rs1, GPR:i32:$Rs2) - Complexity = 3
                // Dst: (SFSUB_F_RR:i32 GPR:i32:$Rs1, GPR:i32:$Rs2)
/*1729*/      0, /*End of Scope*/
/*1730*/    /*SwitchOpcode*/ 24, TARGET_VAL(LanaiISD::BR_CC),// ->1757
/*1733*/      OPC_RecordNode, // #0 = 'LanaiBrCC' chained node
/*1734*/      OPC_CaptureGlueInput,
/*1735*/      OPC_RecordChild1, // #1 = $addr
/*1736*/      OPC_MoveChild1,
/*1737*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1740*/      OPC_MoveParent,
/*1741*/      OPC_RecordChild2, // #2 = $DDDI
/*1742*/      OPC_MoveChild2,
/*1743*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1746*/      OPC_MoveParent,
/*1747*/      OPC_EmitMergeInputChains1_0,
/*1748*/      OPC_EmitConvertToTarget, 2,
/*1750*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::BRCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (LanaiBrCC (bb:Other):$addr, (imm:i32):$DDDI) - Complexity = 6
              // Dst: (BRCC (bb:Other):$addr, (imm:i32):$DDDI)
/*1757*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::CALLSEQ_START),// ->1775
/*1760*/      OPC_RecordNode, // #0 = 'CallSeqStart' chained node
/*1761*/      OPC_RecordChild1, // #1 = $amt
/*1762*/      OPC_MoveChild1,
/*1763*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1766*/      OPC_MoveParent,
/*1767*/      OPC_EmitMergeInputChains1_0,
/*1768*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (CallSeqStart (timm:i32):$amt) - Complexity = 6
              // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
/*1775*/    /*SwitchOpcode*/ 16, TARGET_VAL(LanaiISD::SETCC),// ->1794
/*1778*/      OPC_CaptureGlueInput,
/*1779*/      OPC_RecordChild0, // #0 = $DDDI
/*1780*/      OPC_MoveChild0,
/*1781*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1784*/      OPC_MoveParent,
/*1785*/      OPC_EmitConvertToTarget, 0,
/*1787*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SCC), 0|OPFL_GlueInput,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (LanaiSetCC:i32 (imm:i32):$DDDI) - Complexity = 6
              // Dst: (SCC:i32 (imm:i32):$DDDI)
/*1794*/    /*SwitchOpcode*/ 22, TARGET_VAL(LanaiISD::SELECT_CC),// ->1819
/*1797*/      OPC_CaptureGlueInput,
/*1798*/      OPC_RecordChild0, // #0 = $Rs1
/*1799*/      OPC_RecordChild1, // #1 = $Rs2
/*1800*/      OPC_RecordChild2, // #2 = $DDDI
/*1801*/      OPC_MoveChild2,
/*1802*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1805*/      OPC_MoveParent,
/*1806*/      OPC_CheckType, MVT::i32,
/*1808*/      OPC_EmitConvertToTarget, 2,
/*1810*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SELECT), 0|OPFL_GlueInput,
                  MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (LanaiSelectCC:i32 GPR:i32:$Rs1, GPR:i32:$Rs2, (imm:i32):$DDDI) - Complexity = 6
              // Dst: (SELECT:i32 GPR:i32:$Rs1, GPR:i32:$Rs2, (imm:i32):$DDDI)
/*1819*/    /*SwitchOpcode*/ 42, TARGET_VAL(LanaiISD::CALL),// ->1864
/*1822*/      OPC_RecordNode, // #0 = 'Call' chained node
/*1823*/      OPC_CaptureGlueInput,
/*1824*/      OPC_RecordChild1, // #1 = $dst
/*1825*/      OPC_Scope, 27, /*->1854*/ // 2 children in Scope
/*1827*/        OPC_MoveChild1,
/*1828*/        OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->1841
/*1832*/          OPC_MoveParent,
/*1833*/          OPC_EmitMergeInputChains1_0,
/*1834*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALL:i32 (tglobaladdr:i32):$dst)
/*1841*/        /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->1853
/*1844*/          OPC_MoveParent,
/*1845*/          OPC_EmitMergeInputChains1_0,
/*1846*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (CALL:i32 (texternalsym:i32):$dst)
/*1853*/        0, // EndSwitchOpcode
/*1854*/      /*Scope*/ 8, /*->1863*/
/*1855*/        OPC_EmitMergeInputChains1_0,
/*1856*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (Call GPR:i32:$Rs1) - Complexity = 3
                // Dst: (CALLR:i32 GPR:i32:$Rs1)
/*1863*/      0, /*End of Scope*/
/*1864*/    /*SwitchOpcode*/ 59, TARGET_VAL(LanaiISD::HI),// ->1926
/*1867*/      OPC_RecordChild0, // #0 = $dst
/*1868*/      OPC_MoveChild0,
/*1869*/      OPC_SwitchOpcode /*5 cases */, 8, TARGET_VAL(ISD::TargetGlobalAddress),// ->1881
/*1873*/        OPC_MoveParent,
/*1874*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tglobaladdr:i32):$dst)
/*1881*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetExternalSymbol),// ->1892
/*1884*/        OPC_MoveParent,
/*1885*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (texternalsym:i32):$dst)
/*1892*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetBlockAddress),// ->1903
/*1895*/        OPC_MoveParent,
/*1896*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tblockaddress:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tblockaddress:i32):$dst)
/*1903*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetJumpTable),// ->1914
/*1906*/        OPC_MoveParent,
/*1907*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tjumptable:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tjumptable:i32):$dst)
/*1914*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetConstantPool),// ->1925
/*1917*/        OPC_MoveParent,
/*1918*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:i32 (tconstpool:i32):$dst) - Complexity = 6
                // Dst: (MOVHI:i32 (tconstpool:i32):$dst)
/*1925*/      0, // EndSwitchOpcode
/*1926*/    /*SwitchOpcode*/ 79, TARGET_VAL(LanaiISD::LO),// ->2008
/*1929*/      OPC_RecordChild0, // #0 = $dst
/*1930*/      OPC_MoveChild0,
/*1931*/      OPC_SwitchOpcode /*5 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->1947
/*1935*/        OPC_MoveParent,
/*1936*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1939*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tglobaladdr:i32):$dst)
/*1947*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->1962
/*1950*/        OPC_MoveParent,
/*1951*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1954*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (texternalsym:i32):$dst)
/*1962*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->1977
/*1965*/        OPC_MoveParent,
/*1966*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1969*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tblockaddress:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tblockaddress:i32):$dst)
/*1977*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetJumpTable),// ->1992
/*1980*/        OPC_MoveParent,
/*1981*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1984*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tjumptable:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tjumptable:i32):$dst)
/*1992*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetConstantPool),// ->2007
/*1995*/        OPC_MoveParent,
/*1996*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*1999*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:i32 (tconstpool:i32):$dst) - Complexity = 6
                // Dst: (OR_I_LO:i32 R0:i32, (tconstpool:i32):$dst)
/*2007*/      0, // EndSwitchOpcode
/*2008*/    /*SwitchOpcode*/ 59, TARGET_VAL(LanaiISD::SMALL),// ->2070
/*2011*/      OPC_RecordChild0, // #0 = $dst
/*2012*/      OPC_MoveChild0,
/*2013*/      OPC_SwitchOpcode /*5 cases */, 8, TARGET_VAL(ISD::TargetGlobalAddress),// ->2025
/*2017*/        OPC_MoveParent,
/*2018*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tglobaladdr:i32):$dst)
/*2025*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetExternalSymbol),// ->2036
/*2028*/        OPC_MoveParent,
/*2029*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (texternalsym:i32):$dst)
/*2036*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetBlockAddress),// ->2047
/*2039*/        OPC_MoveParent,
/*2040*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tblockaddress:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tblockaddress:i32):$dst)
/*2047*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetJumpTable),// ->2058
/*2050*/        OPC_MoveParent,
/*2051*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tjumptable:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tjumptable:i32):$dst)
/*2058*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetConstantPool),// ->2069
/*2061*/        OPC_MoveParent,
/*2062*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:i32 (tconstpool:i32):$dst) - Complexity = 6
                // Dst: (SLI:i32 (tconstpool:i32):$dst)
/*2069*/      0, // EndSwitchOpcode
/*2070*/    /*SwitchOpcode*/ 113, TARGET_VAL(ISD::Constant),// ->2186
/*2073*/      OPC_RecordNode, // #0 = $imm
/*2074*/      OPC_Scope, 18, /*->2094*/ // 6 children in Scope
/*2076*/        OPC_CheckPredicate, 13, // Predicate_i32lo16and
/*2078*/        OPC_EmitRegister, MVT::i32, Lanai::R1,
/*2081*/        OPC_EmitConvertToTarget, 0,
/*2083*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*2086*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:i32)<<P:Predicate_i32lo16and>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (AND_I_LO:i32 R1:i32, (LO16:i32 (imm:i32)<<P:Predicate_i32lo16and>>:$imm))
/*2094*/      /*Scope*/ 18, /*->2113*/
/*2095*/        OPC_CheckPredicate, 14, // Predicate_i32hi16and
/*2097*/        OPC_EmitRegister, MVT::i32, Lanai::R1,
/*2100*/        OPC_EmitConvertToTarget, 0,
/*2102*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*2105*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:i32)<<P:Predicate_i32hi16and>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (AND_I_HI:i32 R1:i32, (HI16:i32 (imm:i32)<<P:Predicate_i32hi16and>>:$imm))
/*2113*/      /*Scope*/ 14, /*->2128*/
/*2114*/        OPC_CheckPredicate, 16, // Predicate_i32hi16
/*2116*/        OPC_EmitConvertToTarget, 0,
/*2118*/        OPC_EmitNodeXForm, 1, 1, // HI16
/*2121*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_i32hi16>><<X:HI16>>:$imm16 - Complexity = 4
                // Dst: (MOVHI:i32 (HI16:i32 (imm:i32):$imm16))
/*2128*/      /*Scope*/ 14, /*->2143*/
/*2129*/        OPC_CheckPredicate, 19, // Predicate_i32lo21
/*2131*/        OPC_EmitConvertToTarget, 0,
/*2133*/        OPC_EmitNodeXForm, 3, 1, // LO21
/*2136*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_i32lo21>><<X:LO21>>:$imm - Complexity = 4
                // Dst: (SLI:i32 (LO21:i32 (imm:i32):$imm))
/*2143*/      /*Scope*/ 15, /*->2159*/
/*2144*/        OPC_CheckPredicate, 15, // Predicate_i32lo16z
/*2146*/        OPC_EmitRegister, MVT::i32, Lanai::R0,
/*2149*/        OPC_EmitConvertToTarget, 0,
/*2151*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_i32lo16z>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (OR_I_LO:i32 R0:i32, (imm:i32):$imm)
/*2159*/      /*Scope*/ 25, /*->2185*/
/*2160*/        OPC_EmitConvertToTarget, 0,
/*2162*/        OPC_EmitNodeXForm, 1, 1, // HI16
/*2165*/        OPC_EmitNode1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*2172*/        OPC_EmitConvertToTarget, 0,
/*2174*/        OPC_EmitNodeXForm, 0, 4, // LO16
/*2177*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OR_I_LO:i32 (MOVHI:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*2185*/      0, /*End of Scope*/
/*2186*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->2203
/*2189*/      OPC_RecordNode, // #0 = 'br' chained node
/*2190*/      OPC_RecordChild1, // #1 = $addr
/*2191*/      OPC_MoveChild1,
/*2192*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2195*/      OPC_MoveParent,
/*2196*/      OPC_EmitMergeInputChains1_0,
/*2197*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::BT), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$addr) - Complexity = 3
              // Dst: (BT (bb:Other):$addr)
/*2203*/    /*SwitchOpcode*/ 11, TARGET_VAL(ISD::BRIND),// ->2217
/*2206*/      OPC_RecordNode, // #0 = 'brind' chained node
/*2207*/      OPC_RecordChild1, // #1 = $Rs2
/*2208*/      OPC_CheckChild1Type, MVT::i32,
/*2210*/      OPC_EmitMergeInputChains1_0,
/*2211*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::JR), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (brind GPR:i32:$Rs2) - Complexity = 3
              // Dst: (JR GPR:i32:$Rs2)
/*2217*/    /*SwitchOpcode*/ 8, TARGET_VAL(LanaiISD::RET_FLAG),// ->2228
/*2220*/      OPC_RecordNode, // #0 = 'RetFlag' chained node
/*2221*/      OPC_CaptureGlueInput,
/*2222*/      OPC_EmitMergeInputChains1_0,
/*2223*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (RetFlag) - Complexity = 3
              // Dst: (RET)
/*2228*/    /*SwitchOpcode*/ 9, TARGET_VAL(LanaiISD::ADJDYNALLOC),// ->2240
/*2231*/      OPC_RecordChild0, // #0 = $src
/*2232*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADJDYNALLOC), 0,
                  MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (LanaiAdjDynAlloc:i32 GPR:i32:$src) - Complexity = 3
              // Dst: (ADJDYNALLOC:i32:i32 GPR:i32:$src)
/*2240*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTPOP),// ->2251
/*2243*/      OPC_RecordChild0, // #0 = $Rs1
/*2244*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::POPC), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 GPR:i32:$Rs1) - Complexity = 3
              // Dst: (POPC:i32 GPR:i32:$Rs1)
/*2251*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTLZ),// ->2262
/*2254*/      OPC_RecordChild0, // #0 = $Rs1
/*2255*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LEADZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPR:i32:$Rs1) - Complexity = 3
              // Dst: (LEADZ:i32 GPR:i32:$Rs1)
/*2262*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTTZ),// ->2273
/*2265*/      OPC_RecordChild0, // #0 = $Rs1
/*2266*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::TRAILZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (cttz:i32 GPR:i32:$Rs1) - Complexity = 3
              // Dst: (TRAILZ:i32 GPR:i32:$Rs1)
/*2273*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 2275 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 42
  // #OPC_RecordNode                     = 10
  // #OPC_RecordChild                    = 62
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 10
  // #OPC_MoveChild                      = 33
  // #OPC_MoveParent                     = 90
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 0
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 67
  // #OPC_CheckOpcode                    = 25
  // #OPC_SwitchOpcode                   = 9
  // #OPC_CheckType                      = 2
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 6
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 1
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 21
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 15
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 10
  // #OPC_EmitConvertToTarget            = 40
  // #OPC_EmitMergeInputChains           = 30
  // #OPC_EmitCopyToReg                  = 5
  // #OPC_EmitNode                       = 3
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 125

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
  return nullptr;
}
bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { 
    // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 2: { 
    // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 3: { 
    // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 4: { 
    // Predicate_zextloadi16
    // Predicate_sextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { 
    // Predicate_zextloadi8
    // Predicate_sextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { 
    // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 7: { 
    // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { 
    // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 9: { 
    // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 10: { 
    // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 11: { 
    // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { 
    // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { 
    // Predicate_i32lo16and
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has the rightmost 16
    // bits set and the leftmost 16 bits 1's.
    return (N->getZExtValue() >= 0xFFFF0000UL);
  }
  case 14: { 
    // Predicate_i32hi16and
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has the leftmost 16
    // bits set and the rightmost 16 bits 1's.
    return ((N->getZExtValue() & 0xFFFFUL) == 0xFFFFUL);
  }
  case 15: { 
    // Predicate_i32lo16z
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo16 predicate - true if the 32-bit immediate has only rightmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFFUL) == N->getZExtValue());
  }
  case 16: { 
    // Predicate_i32hi16
    auto *N = cast<ConstantSDNode>(Node);

    // i32hi16 predicate - true if the 32-bit immediate has only leftmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFF0000UL) == N->getZExtValue());
  }
  case 17: { 
    // Predicate_i32neg16
    auto *N = cast<ConstantSDNode>(Node);

    // i32neg16 predicate - true if the 32-bit immediate is negative and can
    // be represented by a 16 bit integer.
    int Imm = N->getSExtValue();
    return (Imm < 0) && (isInt<16>(Imm));
  }
  case 18: { 
    // Predicate_immShift
    auto *N = cast<ConstantSDNode>(Node);

    int Imm = N->getSExtValue();
    return Imm >= -31 && Imm <= 31;
  }
  case 19: { 
    // Predicate_i32lo21
    auto *N = cast<ConstantSDNode>(Node);

    // i32lo21 predicate - true if the 32-bit immediate has only rightmost 21
    // bits set.
    return ((N->getZExtValue() & 0x1FFFFFUL) == N->getZExtValue());
  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                         SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) override {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+3);
    return selectAddrRi(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+3);
    return selectAddrRr(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+3);
    return selectAddrSpls(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 3:
    Result.resize(NextRes+1);
    return selectAddrSls(N, Result[NextRes+0].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0xffff,
                                   SDLoc(N), MVT::i32);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() >> 16, SDLoc(N),
                                   MVT::i32);

  }
  case 2: {  // NEG
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(-N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 3: {  // LO21
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0x1fffff,
                                   SDLoc(N), MVT::i32);

  }
  }
}

