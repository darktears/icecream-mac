/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the XCore target                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
void SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/       OPC_SwitchOpcode /*44 cases */, 69|128,1/*197*/, TARGET_VAL(ISD::ADD),// ->202
/*5*/         OPC_Scope, 26, /*->33*/ // 5 children in Scope
/*7*/           OPC_MoveChild0,
/*8*/           OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*11*/          OPC_CheckChild0Integer, 1, 
/*13*/          OPC_RecordChild1, // #0 = $size
/*14*/          OPC_MoveParent,
/*15*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::MKMSK_2r), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (add:i32 (shl:i32 1:i32, GRRegs:i32:$size), -1:i32) - Complexity = 16
                // Dst: (MKMSK_2r:i32 GRRegs:i32:$size)
/*33*/        /*Scope*/ 32, /*->66*/
/*34*/          OPC_RecordChild0, // #0 = $addr
/*35*/          OPC_MoveChild1,
/*36*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*39*/          OPC_RecordChild0, // #1 = $offset
/*40*/          OPC_Scope, 11, /*->53*/ // 2 children in Scope
/*42*/            OPC_CheckChild1Integer, 2, 
/*44*/            OPC_MoveParent,
/*45*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                  // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*53*/          /*Scope*/ 11, /*->65*/
/*54*/            OPC_CheckChild1Integer, 1, 
/*56*/            OPC_MoveParent,
/*57*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16F_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                  // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*65*/          0, /*End of Scope*/
/*66*/        /*Scope*/ 33, /*->100*/
/*67*/          OPC_MoveChild0,
/*68*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*71*/          OPC_RecordChild0, // #0 = $offset
/*72*/          OPC_Scope, 12, /*->86*/ // 2 children in Scope
/*74*/            OPC_CheckChild1Integer, 2, 
/*76*/            OPC_MoveParent,
/*77*/            OPC_RecordChild1, // #1 = $addr
/*78*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr) - Complexity = 11
                  // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*86*/          /*Scope*/ 12, /*->99*/
/*87*/            OPC_CheckChild1Integer, 1, 
/*89*/            OPC_MoveParent,
/*90*/            OPC_RecordChild1, // #1 = $addr
/*91*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16F_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr) - Complexity = 11
                  // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*99*/          0, /*End of Scope*/
/*100*/       /*Scope*/ 14, /*->115*/
/*101*/         OPC_RecordNode, // #0 = $addr
/*102*/         OPC_CheckType, MVT::i32,
/*104*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*107*/         OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWFI), 0,
                    MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRspii:i32:$addr - Complexity = 9
                // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
/*115*/       /*Scope*/ 85, /*->201*/
/*116*/         OPC_RecordChild0, // #0 = $b
/*117*/         OPC_RecordChild1, // #1 = $c
/*118*/         OPC_Scope, 71, /*->191*/ // 2 children in Scope
/*120*/           OPC_MoveChild1,
/*121*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*124*/           OPC_Scope, 13, /*->139*/ // 4 children in Scope
/*126*/             OPC_CheckPredicate, 0, // Predicate_immUs
/*128*/             OPC_MoveParent,
/*129*/             OPC_EmitConvertToTarget, 1,
/*131*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::ADD_2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                    // Dst: (ADD_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*139*/           /*Scope*/ 16, /*->156*/
/*140*/             OPC_CheckPredicate, 1, // Predicate_immUs4
/*142*/             OPC_MoveParent,
/*143*/             OPC_EmitConvertToTarget, 1,
/*145*/             OPC_EmitNodeXForm, 0, 2, // div4_xform
/*148*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                    // Dst: (LDAWF_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*156*/           /*Scope*/ 16, /*->173*/
/*157*/             OPC_CheckPredicate, 2, // Predicate_immUsNeg
/*159*/             OPC_MoveParent,
/*160*/             OPC_EmitConvertToTarget, 1,
/*162*/             OPC_EmitNodeXForm, 1, 2, // neg_xform
/*165*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::SUB_2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUsNeg>>:$src2) - Complexity = 7
                    // Dst: (SUB_2rus:i32 GRRegs:i32:$src1, (neg_xform:i32 (imm:i32)<<P:Predicate_immUsNeg>>:$src2))
/*173*/           /*Scope*/ 16, /*->190*/
/*174*/             OPC_CheckPredicate, 3, // Predicate_immUs4Neg
/*176*/             OPC_MoveParent,
/*177*/             OPC_EmitConvertToTarget, 1,
/*179*/             OPC_EmitNodeXForm, 2, 2, // div4neg_xform
/*182*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUs4Neg>>:$src2) - Complexity = 7
                    // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$src1, (div4neg_xform:i32 (imm:i32)<<P:Predicate_immUs4Neg>>:$src2))
/*190*/           0, /*End of Scope*/
/*191*/         /*Scope*/ 8, /*->200*/
/*192*/           OPC_MorphNodeTo1, TARGET_VAL(XCore::ADD_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (ADD_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*200*/         0, /*End of Scope*/
/*201*/       0, /*End of Scope*/
/*202*/     /*SwitchOpcode*/ 67|128,3/*451*/, TARGET_VAL(ISD::LOAD),// ->657
/*206*/       OPC_RecordMemRef,
/*207*/       OPC_RecordNode, // #0 = 'ld' chained node
/*208*/       OPC_Scope, 23|128,1/*151*/, /*->362*/ // 4 children in Scope
/*211*/         OPC_MoveChild1,
/*212*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*215*/         OPC_Scope, 71, /*->288*/ // 2 children in Scope
/*217*/           OPC_RecordChild0, // #1 = $addr
/*218*/           OPC_MoveChild1,
/*219*/           OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*222*/           OPC_RecordChild0, // #2 = $offset
/*223*/           OPC_Scope, 40, /*->265*/ // 2 children in Scope
/*225*/             OPC_CheckChild1Integer, 1, 
/*227*/             OPC_MoveParent,
/*228*/             OPC_CheckType, MVT::i32,
/*230*/             OPC_MoveParent,
/*231*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*233*/             OPC_CheckType, MVT::i32,
/*235*/             OPC_Scope, 13, /*->250*/ // 2 children in Scope
/*237*/               OPC_CheckPredicate, 5, // Predicate_sextload
/*239*/               OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*241*/               OPC_EmitMergeInputChains1_0,
/*242*/               OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*250*/             /*Scope*/ 13, /*->264*/
/*251*/               OPC_CheckPredicate, 7, // Predicate_extload
/*253*/               OPC_CheckPredicate, 6, // Predicate_extloadi16
/*255*/               OPC_EmitMergeInputChains1_0,
/*256*/               OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*264*/             0, /*End of Scope*/
/*265*/           /*Scope*/ 21, /*->287*/
/*266*/             OPC_CheckChild1Integer, 2, 
/*268*/             OPC_MoveParent,
/*269*/             OPC_CheckType, MVT::i32,
/*271*/             OPC_MoveParent,
/*272*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*274*/             OPC_CheckPredicate, 8, // Predicate_load
/*276*/             OPC_CheckType, MVT::i32,
/*278*/             OPC_EmitMergeInputChains1_0,
/*279*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                    // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*287*/           0, /*End of Scope*/
/*288*/         /*Scope*/ 72, /*->361*/
/*289*/           OPC_MoveChild0,
/*290*/           OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*293*/           OPC_RecordChild0, // #1 = $offset
/*294*/           OPC_Scope, 41, /*->337*/ // 2 children in Scope
/*296*/             OPC_CheckChild1Integer, 1, 
/*298*/             OPC_MoveParent,
/*299*/             OPC_RecordChild1, // #2 = $addr
/*300*/             OPC_CheckType, MVT::i32,
/*302*/             OPC_MoveParent,
/*303*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*305*/             OPC_CheckType, MVT::i32,
/*307*/             OPC_Scope, 13, /*->322*/ // 2 children in Scope
/*309*/               OPC_CheckPredicate, 5, // Predicate_sextload
/*311*/               OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*313*/               OPC_EmitMergeInputChains1_0,
/*314*/               OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 2, 1, 
                      // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*322*/             /*Scope*/ 13, /*->336*/
/*323*/               OPC_CheckPredicate, 7, // Predicate_extload
/*325*/               OPC_CheckPredicate, 6, // Predicate_extloadi16
/*327*/               OPC_EmitMergeInputChains1_0,
/*328*/               OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 2, 1, 
                      // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                      // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*336*/             0, /*End of Scope*/
/*337*/           /*Scope*/ 22, /*->360*/
/*338*/             OPC_CheckChild1Integer, 2, 
/*340*/             OPC_MoveParent,
/*341*/             OPC_RecordChild1, // #2 = $addr
/*342*/             OPC_CheckType, MVT::i32,
/*344*/             OPC_MoveParent,
/*345*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*347*/             OPC_CheckPredicate, 8, // Predicate_load
/*349*/             OPC_CheckType, MVT::i32,
/*351*/             OPC_EmitMergeInputChains1_0,
/*352*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                    // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*360*/           0, /*End of Scope*/
/*361*/         0, /*End of Scope*/
/*362*/       /*Scope*/ 21, /*->384*/
/*363*/         OPC_RecordChild1, // #1 = $addr
/*364*/         OPC_CheckChild1Type, MVT::i32,
/*366*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*368*/         OPC_CheckPredicate, 8, // Predicate_load
/*370*/         OPC_CheckType, MVT::i32,
/*372*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRspii:$addr #2 #3
/*375*/         OPC_EmitMergeInputChains1_0,
/*376*/         OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRspii:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWFI:i32 ADDRspii:i32:$addr)
/*384*/       /*Scope*/ 20|128,1/*148*/, /*->534*/
/*386*/         OPC_MoveChild1,
/*387*/         OPC_SwitchOpcode /*3 cases */, 73, TARGET_VAL(ISD::ADD),// ->464
/*391*/           OPC_RecordChild0, // #1 = $addr
/*392*/           OPC_RecordChild1, // #2 = $offset
/*393*/           OPC_Scope, 30, /*->425*/ // 2 children in Scope
/*395*/             OPC_MoveChild1,
/*396*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*399*/             OPC_CheckPredicate, 1, // Predicate_immUs4
/*401*/             OPC_MoveParent,
/*402*/             OPC_CheckType, MVT::i32,
/*404*/             OPC_MoveParent,
/*405*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*407*/             OPC_CheckPredicate, 8, // Predicate_load
/*409*/             OPC_CheckType, MVT::i32,
/*411*/             OPC_EmitMergeInputChains1_0,
/*412*/             OPC_EmitConvertToTarget, 2,
/*414*/             OPC_EmitNodeXForm, 0, 3, // div4_xform
/*417*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 11
                    // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*425*/           /*Scope*/ 37, /*->463*/
/*426*/             OPC_CheckType, MVT::i32,
/*428*/             OPC_MoveParent,
/*429*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*431*/             OPC_CheckType, MVT::i32,
/*433*/             OPC_Scope, 13, /*->448*/ // 2 children in Scope
/*435*/               OPC_CheckPredicate, 9, // Predicate_zextload
/*437*/               OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*439*/               OPC_EmitMergeInputChains1_0,
/*440*/               OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 7
                      // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*448*/             /*Scope*/ 13, /*->462*/
/*449*/               OPC_CheckPredicate, 7, // Predicate_extload
/*451*/               OPC_CheckPredicate, 10, // Predicate_extloadi8
/*453*/               OPC_EmitMergeInputChains1_0,
/*454*/               OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 7
                      // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*462*/             0, /*End of Scope*/
/*463*/           0, /*End of Scope*/
/*464*/         /*SwitchOpcode*/ 21, TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->488
/*467*/           OPC_RecordChild0, // #1 = $b
/*468*/           OPC_MoveChild0,
/*469*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*472*/           OPC_MoveParent,
/*473*/           OPC_MoveParent,
/*474*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*476*/           OPC_CheckPredicate, 8, // Predicate_load
/*478*/           OPC_CheckType, MVT::i32,
/*480*/           OPC_EmitMergeInputChains1_0,
/*481*/           OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (dprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                  // Dst: (LDWDP_lru6:i32 (tglobaladdr:i32):$b)
/*488*/         /*SwitchOpcode*/ 42, TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->533
/*491*/           OPC_RecordChild0, // #1 = $b
/*492*/           OPC_MoveChild0,
/*493*/           OPC_SwitchOpcode /*2 cases */, 16, TARGET_VAL(ISD::TargetGlobalAddress),// ->513
/*497*/             OPC_MoveParent,
/*498*/             OPC_MoveParent,
/*499*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*501*/             OPC_CheckPredicate, 8, // Predicate_load
/*503*/             OPC_CheckType, MVT::i32,
/*505*/             OPC_EmitMergeInputChains1_0,
/*506*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWCP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:i32 (cprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                    // Dst: (LDWCP_lru6:i32 (tglobaladdr:i32):$b)
/*513*/           /*SwitchOpcode*/ 16, TARGET_VAL(ISD::TargetConstantPool),// ->532
/*516*/             OPC_MoveParent,
/*517*/             OPC_MoveParent,
/*518*/             OPC_CheckPredicate, 4, // Predicate_unindexedload
/*520*/             OPC_CheckPredicate, 8, // Predicate_load
/*522*/             OPC_CheckType, MVT::i32,
/*524*/             OPC_EmitMergeInputChains1_0,
/*525*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWCP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:i32 (cprelwrapper:iPTR (tconstpool:iPTR):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                    // Dst: (LDWCP_lru6:i32 (tconstpool:i32):$b)
/*532*/           0, // EndSwitchOpcode
/*533*/         0, // EndSwitchOpcode
/*534*/       /*Scope*/ 121, /*->656*/
/*535*/         OPC_RecordChild1, // #1 = $addr
/*536*/         OPC_CheckChild1Type, MVT::i32,
/*538*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*540*/         OPC_CheckType, MVT::i32,
/*542*/         OPC_Scope, 14, /*->558*/ // 4 children in Scope
/*544*/           OPC_CheckPredicate, 8, // Predicate_load
/*546*/           OPC_EmitMergeInputChains1_0,
/*547*/           OPC_EmitInteger, MVT::i32, 0, 
/*550*/           OPC_MorphNodeTo1, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 4
                  // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, 0:i32)
/*558*/         /*Scope*/ 23, /*->582*/
/*559*/           OPC_CheckPredicate, 9, // Predicate_zextload
/*561*/           OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*563*/           OPC_EmitMergeInputChains1_0,
/*564*/           OPC_EmitInteger, MVT::i32, 0, 
/*567*/           OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                      MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*574*/           OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 4
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*582*/         /*Scope*/ 23, /*->606*/
/*583*/           OPC_CheckPredicate, 5, // Predicate_sextload
/*585*/           OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*587*/           OPC_EmitMergeInputChains1_0,
/*588*/           OPC_EmitInteger, MVT::i32, 0, 
/*591*/           OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                      MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*598*/           OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 4
                  // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*606*/         /*Scope*/ 48, /*->655*/
/*607*/           OPC_CheckPredicate, 7, // Predicate_extload
/*609*/           OPC_Scope, 21, /*->632*/ // 2 children in Scope
/*611*/             OPC_CheckPredicate, 10, // Predicate_extloadi8
/*613*/             OPC_EmitMergeInputChains1_0,
/*614*/             OPC_EmitInteger, MVT::i32, 0, 
/*617*/             OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*624*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 4
                    // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*632*/           /*Scope*/ 21, /*->654*/
/*633*/             OPC_CheckPredicate, 6, // Predicate_extloadi16
/*635*/             OPC_EmitMergeInputChains1_0,
/*636*/             OPC_EmitInteger, MVT::i32, 0, 
/*639*/             OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*646*/             OPC_MorphNodeTo1, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 4
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*654*/           0, /*End of Scope*/
/*655*/         0, /*End of Scope*/
/*656*/       0, /*End of Scope*/
/*657*/     /*SwitchOpcode*/ 34|128,2/*290*/, TARGET_VAL(ISD::STORE),// ->951
/*661*/       OPC_RecordMemRef,
/*662*/       OPC_RecordNode, // #0 = 'st' chained node
/*663*/       OPC_RecordChild1, // #1 = $val
/*664*/       OPC_CheckChild1Type, MVT::i32,
/*666*/       OPC_Scope, 109, /*->777*/ // 4 children in Scope
/*668*/         OPC_MoveChild2,
/*669*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*672*/         OPC_Scope, 50, /*->724*/ // 2 children in Scope
/*674*/           OPC_RecordChild0, // #2 = $addr
/*675*/           OPC_MoveChild1,
/*676*/           OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*679*/           OPC_RecordChild0, // #3 = $offset
/*680*/           OPC_Scope, 21, /*->703*/ // 2 children in Scope
/*682*/             OPC_CheckChild1Integer, 1, 
/*684*/             OPC_MoveParent,
/*685*/             OPC_CheckType, MVT::i32,
/*687*/             OPC_MoveParent,
/*688*/             OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*690*/             OPC_CheckPredicate, 12, // Predicate_truncstore
/*692*/             OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*694*/             OPC_EmitMergeInputChains1_0,
/*695*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                    // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*703*/           /*Scope*/ 19, /*->723*/
/*704*/             OPC_CheckChild1Integer, 2, 
/*706*/             OPC_MoveParent,
/*707*/             OPC_CheckType, MVT::i32,
/*709*/             OPC_MoveParent,
/*710*/             OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*712*/             OPC_CheckPredicate, 14, // Predicate_store
/*714*/             OPC_EmitMergeInputChains1_0,
/*715*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                    // Dst: (STW_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*723*/           0, /*End of Scope*/
/*724*/         /*Scope*/ 51, /*->776*/
/*725*/           OPC_MoveChild0,
/*726*/           OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*729*/           OPC_RecordChild0, // #2 = $offset
/*730*/           OPC_Scope, 22, /*->754*/ // 2 children in Scope
/*732*/             OPC_CheckChild1Integer, 1, 
/*734*/             OPC_MoveParent,
/*735*/             OPC_RecordChild1, // #3 = $addr
/*736*/             OPC_CheckType, MVT::i32,
/*738*/             OPC_MoveParent,
/*739*/             OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*741*/             OPC_CheckPredicate, 12, // Predicate_truncstore
/*743*/             OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*745*/             OPC_EmitMergeInputChains1_0,
/*746*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 2, 
                    // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                    // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*754*/           /*Scope*/ 20, /*->775*/
/*755*/             OPC_CheckChild1Integer, 2, 
/*757*/             OPC_MoveParent,
/*758*/             OPC_RecordChild1, // #3 = $addr
/*759*/             OPC_CheckType, MVT::i32,
/*761*/             OPC_MoveParent,
/*762*/             OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*764*/             OPC_CheckPredicate, 14, // Predicate_store
/*766*/             OPC_EmitMergeInputChains1_0,
/*767*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 2, 
                    // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                    // Dst: (STW_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*775*/           0, /*End of Scope*/
/*776*/         0, /*End of Scope*/
/*777*/       /*Scope*/ 19, /*->797*/
/*778*/         OPC_RecordChild2, // #2 = $addr
/*779*/         OPC_CheckChild2Type, MVT::i32,
/*781*/         OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*783*/         OPC_CheckPredicate, 14, // Predicate_store
/*785*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRspii:$addr #3 #4
/*788*/         OPC_EmitMergeInputChains1_0,
/*789*/         OPC_MorphNodeTo0, TARGET_VAL(XCore::STWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:i32:$src, ADDRspii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWFI GRRegs:i32:$src, ADDRspii:i32:$addr)
/*797*/       /*Scope*/ 80, /*->878*/
/*798*/         OPC_MoveChild2,
/*799*/         OPC_SwitchOpcode /*2 cases */, 52, TARGET_VAL(ISD::ADD),// ->855
/*803*/           OPC_RecordChild0, // #2 = $addr
/*804*/           OPC_RecordChild1, // #3 = $offset
/*805*/           OPC_Scope, 28, /*->835*/ // 2 children in Scope
/*807*/             OPC_MoveChild1,
/*808*/             OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*811*/             OPC_CheckPredicate, 1, // Predicate_immUs4
/*813*/             OPC_MoveParent,
/*814*/             OPC_CheckType, MVT::i32,
/*816*/             OPC_MoveParent,
/*817*/             OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*819*/             OPC_CheckPredicate, 14, // Predicate_store
/*821*/             OPC_EmitMergeInputChains1_0,
/*822*/             OPC_EmitConvertToTarget, 3,
/*824*/             OPC_EmitNodeXForm, 0, 4, // div4_xform
/*827*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 5, 
                    // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 11
                    // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*835*/           /*Scope*/ 18, /*->854*/
/*836*/             OPC_CheckType, MVT::i32,
/*838*/             OPC_MoveParent,
/*839*/             OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*841*/             OPC_CheckPredicate, 12, // Predicate_truncstore
/*843*/             OPC_CheckPredicate, 15, // Predicate_truncstorei8
/*845*/             OPC_EmitMergeInputChains1_0,
/*846*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 7
                    // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*854*/           0, /*End of Scope*/
/*855*/         /*SwitchOpcode*/ 19, TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->877
/*858*/           OPC_RecordChild0, // #2 = $b
/*859*/           OPC_MoveChild0,
/*860*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*863*/           OPC_MoveParent,
/*864*/           OPC_MoveParent,
/*865*/           OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*867*/           OPC_CheckPredicate, 14, // Predicate_store
/*869*/           OPC_EmitMergeInputChains1_0,
/*870*/           OPC_MorphNodeTo0, TARGET_VAL(XCore::STWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st RRegs:i32:$a, (dprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                  // Dst: (STWDP_lru6 RRegs:i32:$a, (tglobaladdr:i32):$b)
/*877*/         0, // EndSwitchOpcode
/*878*/       /*Scope*/ 71, /*->950*/
/*879*/         OPC_RecordChild2, // #2 = $addr
/*880*/         OPC_CheckChild2Type, MVT::i32,
/*882*/         OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*884*/         OPC_Scope, 14, /*->900*/ // 2 children in Scope
/*886*/           OPC_CheckPredicate, 14, // Predicate_store
/*888*/           OPC_EmitMergeInputChains1_0,
/*889*/           OPC_EmitInteger, MVT::i32, 0, 
/*892*/           OPC_MorphNodeTo0, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 4
                  // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, 0:i32)
/*900*/         /*Scope*/ 48, /*->949*/
/*901*/           OPC_CheckPredicate, 12, // Predicate_truncstore
/*903*/           OPC_Scope, 21, /*->926*/ // 2 children in Scope
/*905*/             OPC_CheckPredicate, 15, // Predicate_truncstorei8
/*907*/             OPC_EmitMergeInputChains1_0,
/*908*/             OPC_EmitInteger, MVT::i32, 0, 
/*911*/             OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*918*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 4, 
                    // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 4
                    // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*926*/           /*Scope*/ 21, /*->948*/
/*927*/             OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*929*/             OPC_EmitMergeInputChains1_0,
/*930*/             OPC_EmitInteger, MVT::i32, 0, 
/*933*/             OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                        MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*940*/             OPC_MorphNodeTo0, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 2, 4, 
                    // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 4
                    // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*948*/           0, /*End of Scope*/
/*949*/         0, /*End of Scope*/
/*950*/       0, /*End of Scope*/
/*951*/     /*SwitchOpcode*/ 81, TARGET_VAL(ISD::SRA),// ->1035
/*954*/       OPC_Scope, 29, /*->985*/ // 2 children in Scope
/*956*/         OPC_MoveChild0,
/*957*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*960*/         OPC_RecordChild0, // #0 = $src
/*961*/         OPC_RecordChild1, // #1 = $imm
/*962*/         OPC_MoveChild1,
/*963*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*966*/         OPC_CheckPredicate, 16, // Predicate_immBpwSubBitp
/*968*/         OPC_MoveParent,
/*969*/         OPC_MoveParent,
/*970*/         OPC_CheckChild1Same, 1,
/*972*/         OPC_EmitConvertToTarget, 1,
/*974*/         OPC_EmitNodeXForm, 3, 2, // bpwsub_xform
/*977*/         OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (sra:i32 (shl:i32 GRRegs:i32:$src, (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm), (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm) - Complexity = 14
                // Dst: (SEXT_rus:i32 GRRegs:i32:$src, (bpwsub_xform:i32 (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm))
/*985*/       /*Scope*/ 48, /*->1034*/
/*986*/         OPC_RecordChild0, // #0 = $src
/*987*/         OPC_Scope, 13, /*->1002*/ // 2 children in Scope
/*989*/           OPC_CheckChild1Integer, 31, 
/*991*/           OPC_EmitInteger, MVT::i32, 32, 
/*994*/           OPC_MorphNodeTo1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GRRegs:i32:$src, 31:i32) - Complexity = 8
                  // Dst: (ASHR_l2rus:i32 GRRegs:i32:$src, 32:i32)
/*1002*/        /*Scope*/ 30, /*->1033*/
/*1003*/          OPC_RecordChild1, // #1 = $c
/*1004*/          OPC_Scope, 17, /*->1023*/ // 2 children in Scope
/*1006*/            OPC_MoveChild1,
/*1007*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1010*/            OPC_CheckPredicate, 17, // Predicate_immBitp
/*1012*/            OPC_MoveParent,
/*1013*/            OPC_EmitConvertToTarget, 1,
/*1015*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (sra:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                    // Dst: (ASHR_l2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*1023*/          /*Scope*/ 8, /*->1032*/
/*1024*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::ASHR_l3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (sra:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                    // Dst: (ASHR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1032*/          0, /*End of Scope*/
/*1033*/        0, /*End of Scope*/
/*1034*/      0, /*End of Scope*/
/*1035*/    /*SwitchOpcode*/ 87|128,4/*599*/, TARGET_VAL(ISD::INTRINSIC_VOID),// ->1638
/*1039*/      OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*1040*/      OPC_Scope, 53, /*->1095*/ // 30 children in Scope
/*1042*/        OPC_CheckChild1Integer, 6|128,48/*6150*/, 
/*1045*/        OPC_RecordChild2, // #1 = $a
/*1046*/        OPC_CheckChild2Type, MVT::i32,
/*1048*/        OPC_RecordChild3, // #2 = $b
/*1049*/        OPC_Scope, 34, /*->1085*/ // 2 children in Scope
/*1051*/          OPC_MoveChild3,
/*1052*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1055*/          OPC_Scope, 13, /*->1070*/ // 2 children in Scope
/*1057*/            OPC_CheckPredicate, 18, // Predicate_immU6
/*1059*/            OPC_MoveParent,
/*1060*/            OPC_EmitMergeInputChains1_0,
/*1061*/            OPC_EmitConvertToTarget, 2,
/*1063*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::SETC_ru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 3, 
                    // Src: (intrinsic_void 6150:iPTR, GRRegs:i32:$a, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 12
                    // Dst: (SETC_ru6 GRRegs:i32:$a, (imm:i32):$b)
/*1070*/          /*Scope*/ 13, /*->1084*/
/*1071*/            OPC_CheckPredicate, 19, // Predicate_immU16
/*1073*/            OPC_MoveParent,
/*1074*/            OPC_EmitMergeInputChains1_0,
/*1075*/            OPC_EmitConvertToTarget, 2,
/*1077*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::SETC_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 3, 
                    // Src: (intrinsic_void 6150:iPTR, GRRegs:i32:$a, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 12
                    // Dst: (SETC_lru6 GRRegs:i32:$a, (imm:i32):$b)
/*1084*/          0, /*End of Scope*/
/*1085*/        /*Scope*/ 8, /*->1094*/
/*1086*/          OPC_EmitMergeInputChains1_0,
/*1087*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::SETC_l2r), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_void 6150:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                  // Dst: (SETC_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1094*/        0, /*End of Scope*/
/*1095*/      /*Scope*/ 36, /*->1132*/
/*1096*/        OPC_CheckChild1Integer, 14|128,48/*6158*/, 
/*1099*/        OPC_RecordChild2, // #1 = $a
/*1100*/        OPC_MoveChild2,
/*1101*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1104*/        OPC_Scope, 12, /*->1118*/ // 2 children in Scope
/*1106*/          OPC_CheckPredicate, 18, // Predicate_immU6
/*1108*/          OPC_MoveParent,
/*1109*/          OPC_EmitMergeInputChains1_0,
/*1110*/          OPC_EmitConvertToTarget, 1,
/*1112*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::SETSR_u6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6158:iPTR, (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 12
                  // Dst: (SETSR_u6 (imm:i32):$a)
/*1118*/        /*Scope*/ 12, /*->1131*/
/*1119*/          OPC_CheckPredicate, 19, // Predicate_immU16
/*1121*/          OPC_MoveParent,
/*1122*/          OPC_EmitMergeInputChains1_0,
/*1123*/          OPC_EmitConvertToTarget, 1,
/*1125*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::SETSR_lu6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6158:iPTR, (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 12
                  // Dst: (SETSR_lu6 (imm:i32):$a)
/*1131*/        0, /*End of Scope*/
/*1132*/      /*Scope*/ 36, /*->1169*/
/*1133*/        OPC_CheckChild1Integer, 104|128,47/*6120*/, 
/*1136*/        OPC_RecordChild2, // #1 = $a
/*1137*/        OPC_MoveChild2,
/*1138*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1141*/        OPC_Scope, 12, /*->1155*/ // 2 children in Scope
/*1143*/          OPC_CheckPredicate, 18, // Predicate_immU6
/*1145*/          OPC_MoveParent,
/*1146*/          OPC_EmitMergeInputChains1_0,
/*1147*/          OPC_EmitConvertToTarget, 1,
/*1149*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRSR_u6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6120:iPTR, (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 12
                  // Dst: (CLRSR_u6 (imm:i32):$a)
/*1155*/        /*Scope*/ 12, /*->1168*/
/*1156*/          OPC_CheckPredicate, 19, // Predicate_immU16
/*1158*/          OPC_MoveParent,
/*1159*/          OPC_EmitMergeInputChains1_0,
/*1160*/          OPC_EmitConvertToTarget, 1,
/*1162*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRSR_lu6), 0|OPFL_Chain,
                      1/*#Ops*/, 2, 
                  // Src: (intrinsic_void 6120:iPTR, (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 12
                  // Dst: (CLRSR_lu6 (imm:i32):$a)
/*1168*/        0, /*End of Scope*/
/*1169*/      /*Scope*/ 36, /*->1206*/
/*1170*/        OPC_CheckChild1Integer, 2|128,48/*6146*/, 
/*1173*/        OPC_RecordChild2, // #1 = $r
/*1174*/        OPC_CheckChild2Type, MVT::i32,
/*1176*/        OPC_RecordChild3, // #2 = $val
/*1177*/        OPC_Scope, 17, /*->1196*/ // 2 children in Scope
/*1179*/          OPC_MoveChild3,
/*1180*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1183*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*1185*/          OPC_MoveParent,
/*1186*/          OPC_EmitMergeInputChains1_0,
/*1187*/          OPC_EmitConvertToTarget, 2,
/*1189*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::OUTCT_rus), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 6146:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                  // Dst: (OUTCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1196*/        /*Scope*/ 8, /*->1205*/
/*1197*/          OPC_EmitMergeInputChains1_0,
/*1198*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::OUTCT_2r), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_void 6146:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                  // Dst: (OUTCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1205*/        0, /*End of Scope*/
/*1206*/      /*Scope*/ 36, /*->1243*/
/*1207*/        OPC_CheckChild1Integer, 101|128,47/*6117*/, 
/*1210*/        OPC_RecordChild2, // #1 = $r
/*1211*/        OPC_CheckChild2Type, MVT::i32,
/*1213*/        OPC_RecordChild3, // #2 = $val
/*1214*/        OPC_Scope, 17, /*->1233*/ // 2 children in Scope
/*1216*/          OPC_MoveChild3,
/*1217*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1220*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*1222*/          OPC_MoveParent,
/*1223*/          OPC_EmitMergeInputChains1_0,
/*1224*/          OPC_EmitConvertToTarget, 2,
/*1226*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::CHKCT_rus), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 6117:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                  // Dst: (CHKCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1233*/        /*Scope*/ 8, /*->1242*/
/*1234*/          OPC_EmitMergeInputChains1_0,
/*1235*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::CHKCT_2r), 0|OPFL_Chain,
                      2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_void 6117:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                  // Dst: (CHKCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1242*/        0, /*End of Scope*/
/*1243*/      /*Scope*/ 15, /*->1259*/
/*1244*/        OPC_CheckChild1Integer, 12|128,48/*6156*/, 
/*1247*/        OPC_RecordChild2, // #1 = $r
/*1248*/        OPC_CheckChild2Type, MVT::i32,
/*1250*/        OPC_RecordChild3, // #2 = $val
/*1251*/        OPC_EmitMergeInputChains1_0,
/*1252*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETPT_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6156:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETPT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1259*/      /*Scope*/ 15, /*->1275*/
/*1260*/        OPC_CheckChild1Integer, 4|128,48/*6148*/, 
/*1263*/        OPC_RecordChild2, // #1 = $r
/*1264*/        OPC_CheckChild2Type, MVT::i32,
/*1266*/        OPC_RecordChild3, // #2 = $val
/*1267*/        OPC_EmitMergeInputChains1_0,
/*1268*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::OUTT_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6148:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (OUTT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1275*/      /*Scope*/ 15, /*->1291*/
/*1276*/        OPC_CheckChild1Integer, 1|128,48/*6145*/, 
/*1279*/        OPC_RecordChild2, // #1 = $r
/*1280*/        OPC_CheckChild2Type, MVT::i32,
/*1282*/        OPC_RecordChild3, // #2 = $val
/*1283*/        OPC_EmitMergeInputChains1_0,
/*1284*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::OUT_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6145:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (OUT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1291*/      /*Scope*/ 15, /*->1307*/
/*1292*/        OPC_CheckChild1Integer, 8|128,48/*6152*/, 
/*1295*/        OPC_RecordChild2, // #1 = $r
/*1296*/        OPC_CheckChild2Type, MVT::i32,
/*1298*/        OPC_RecordChild3, // #2 = $val
/*1299*/        OPC_EmitMergeInputChains1_0,
/*1300*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETD_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6152:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETD_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1307*/      /*Scope*/ 15, /*->1323*/
/*1308*/        OPC_CheckChild1Integer, 11|128,48/*6155*/, 
/*1311*/        OPC_RecordChild2, // #1 = $src1
/*1312*/        OPC_CheckChild2Type, MVT::i32,
/*1314*/        OPC_RecordChild3, // #2 = $src2
/*1315*/        OPC_EmitMergeInputChains1_0,
/*1316*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETPSC_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6155:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SETPSC_2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1323*/      /*Scope*/ 17, /*->1341*/
/*1324*/        OPC_CheckChild1Integer, 124|128,47/*6140*/, 
/*1327*/        OPC_RecordChild2, // #1 = $t
/*1328*/        OPC_CheckChild2Type, MVT::i32,
/*1330*/        OPC_RecordChild3, // #2 = $src
/*1331*/        OPC_CheckChild3Type, MVT::i32,
/*1333*/        OPC_EmitMergeInputChains1_0,
/*1334*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::INITSP_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6140:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
                // Dst: (INITSP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1341*/      /*Scope*/ 17, /*->1359*/
/*1342*/        OPC_CheckChild1Integer, 123|128,47/*6139*/, 
/*1345*/        OPC_RecordChild2, // #1 = $t
/*1346*/        OPC_CheckChild2Type, MVT::i32,
/*1348*/        OPC_RecordChild3, // #2 = $src
/*1349*/        OPC_CheckChild3Type, MVT::i32,
/*1351*/        OPC_EmitMergeInputChains1_0,
/*1352*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::INITPC_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6139:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
                // Dst: (INITPC_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1359*/      /*Scope*/ 17, /*->1377*/
/*1360*/        OPC_CheckChild1Integer, 120|128,47/*6136*/, 
/*1363*/        OPC_RecordChild2, // #1 = $t
/*1364*/        OPC_CheckChild2Type, MVT::i32,
/*1366*/        OPC_RecordChild3, // #2 = $src
/*1367*/        OPC_CheckChild3Type, MVT::i32,
/*1369*/        OPC_EmitMergeInputChains1_0,
/*1370*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::INITCP_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6136:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
                // Dst: (INITCP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1377*/      /*Scope*/ 17, /*->1395*/
/*1378*/        OPC_CheckChild1Integer, 121|128,47/*6137*/, 
/*1381*/        OPC_RecordChild2, // #1 = $t
/*1382*/        OPC_CheckChild2Type, MVT::i32,
/*1384*/        OPC_RecordChild3, // #2 = $src
/*1385*/        OPC_CheckChild3Type, MVT::i32,
/*1387*/        OPC_EmitMergeInputChains1_0,
/*1388*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::INITDP_2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6137:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
                // Dst: (INITDP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1395*/      /*Scope*/ 15, /*->1411*/
/*1396*/        OPC_CheckChild1Integer, 15|128,48/*6159*/, 
/*1399*/        OPC_RecordChild2, // #1 = $r
/*1400*/        OPC_CheckChild2Type, MVT::i32,
/*1402*/        OPC_RecordChild3, // #2 = $val
/*1403*/        OPC_EmitMergeInputChains1_0,
/*1404*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETTW_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6159:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETTW_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1411*/      /*Scope*/ 13, /*->1425*/
/*1412*/        OPC_CheckChild1Integer, 10|128,48/*6154*/, 
/*1415*/        OPC_RecordChild2, // #1 = $src1
/*1416*/        OPC_RecordChild3, // #2 = $src2
/*1417*/        OPC_EmitMergeInputChains1_0,
/*1418*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETPS_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6154:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SETPS_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1425*/      /*Scope*/ 17, /*->1443*/
/*1426*/        OPC_CheckChild1Integer, 122|128,47/*6138*/, 
/*1429*/        OPC_RecordChild2, // #1 = $t
/*1430*/        OPC_CheckChild2Type, MVT::i32,
/*1432*/        OPC_RecordChild3, // #2 = $src
/*1433*/        OPC_CheckChild3Type, MVT::i32,
/*1435*/        OPC_EmitMergeInputChains1_0,
/*1436*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::INITLR_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_void 6138:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
                // Dst: (INITLR_l2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1443*/      /*Scope*/ 17, /*->1461*/
/*1444*/        OPC_CheckChild1Integer, 7|128,48/*6151*/, 
/*1447*/        OPC_RecordChild2, // #1 = $src1
/*1448*/        OPC_CheckChild2Type, MVT::i32,
/*1450*/        OPC_RecordChild3, // #2 = $src2
/*1451*/        OPC_CheckChild3Type, MVT::i32,
/*1453*/        OPC_EmitMergeInputChains1_0,
/*1454*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETCLK_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6151:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SETCLK_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1461*/      /*Scope*/ 17, /*->1479*/
/*1462*/        OPC_CheckChild1Integer, 13|128,48/*6157*/, 
/*1465*/        OPC_RecordChild2, // #1 = $src1
/*1466*/        OPC_CheckChild2Type, MVT::i32,
/*1468*/        OPC_RecordChild3, // #2 = $src2
/*1469*/        OPC_CheckChild3Type, MVT::i32,
/*1471*/        OPC_EmitMergeInputChains1_0,
/*1472*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETRDY_l2r), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 6157:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SETRDY_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1479*/      /*Scope*/ 13, /*->1493*/
/*1480*/        OPC_CheckChild1Integer, 0|128,48/*6144*/, 
/*1483*/        OPC_RecordChild2, // #1 = $a
/*1484*/        OPC_CheckChild2Type, MVT::i32,
/*1486*/        OPC_EmitMergeInputChains1_0,
/*1487*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::MSYNC_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6144:iPTR, GRRegs:i32:$a) - Complexity = 8
                // Dst: (MSYNC_1r GRRegs:i32:$a)
/*1493*/      /*Scope*/ 13, /*->1507*/
/*1494*/        OPC_CheckChild1Integer, 127|128,47/*6143*/, 
/*1497*/        OPC_RecordChild2, // #1 = $a
/*1498*/        OPC_CheckChild2Type, MVT::i32,
/*1500*/        OPC_EmitMergeInputChains1_0,
/*1501*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::MJOIN_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6143:iPTR, GRRegs:i32:$a) - Complexity = 8
                // Dst: (MJOIN_1r GRRegs:i32:$a)
/*1507*/      /*Scope*/ 13, /*->1521*/
/*1508*/        OPC_CheckChild1Integer, 19|128,48/*6163*/, 
/*1511*/        OPC_RecordChild2, // #1 = $a
/*1512*/        OPC_CheckChild2Type, MVT::i32,
/*1514*/        OPC_EmitMergeInputChains1_0,
/*1515*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SYNCR_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6163:iPTR, GRRegs:i32:$a) - Complexity = 8
                // Dst: (SYNCR_1r GRRegs:i32:$a)
/*1521*/      /*Scope*/ 13, /*->1535*/
/*1522*/        OPC_CheckChild1Integer, 110|128,47/*6126*/, 
/*1525*/        OPC_RecordChild2, // #1 = $a
/*1526*/        OPC_CheckChild2Type, MVT::i32,
/*1528*/        OPC_EmitMergeInputChains1_0,
/*1529*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::FREER_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6126:iPTR, GRRegs:i32:$a) - Complexity = 8
                // Dst: (FREER_1r GRRegs:i32:$a)
/*1535*/      /*Scope*/ 19, /*->1555*/
/*1536*/        OPC_CheckChild1Integer, 16|128,48/*6160*/, 
/*1539*/        OPC_RecordChild2, // #1 = $a
/*1540*/        OPC_CheckChild2Type, MVT::i32,
/*1542*/        OPC_RecordChild3, // #2 = physreg input R11
/*1543*/        OPC_CheckChild3Type, MVT::i32,
/*1545*/        OPC_EmitMergeInputChains1_0,
/*1546*/        OPC_EmitCopyToReg, 2, XCore::R11,
/*1549*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6160:iPTR, GRRegs:i32:$a, R11:i32) - Complexity = 8
                // Dst: (SETV_1r GRRegs:i32:$a)
/*1555*/      /*Scope*/ 19, /*->1575*/
/*1556*/        OPC_CheckChild1Integer, 9|128,48/*6153*/, 
/*1559*/        OPC_RecordChild2, // #1 = $a
/*1560*/        OPC_CheckChild2Type, MVT::i32,
/*1562*/        OPC_RecordChild3, // #2 = physreg input R11
/*1563*/        OPC_CheckChild3Type, MVT::i32,
/*1565*/        OPC_EmitMergeInputChains1_0,
/*1566*/        OPC_EmitCopyToReg, 2, XCore::R11,
/*1569*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SETEV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6153:iPTR, GRRegs:i32:$a, R11:i32) - Complexity = 8
                // Dst: (SETEV_1r GRRegs:i32:$a)
/*1575*/      /*Scope*/ 13, /*->1589*/
/*1576*/        OPC_CheckChild1Integer, 107|128,47/*6123*/, 
/*1579*/        OPC_RecordChild2, // #1 = $a
/*1580*/        OPC_CheckChild2Type, MVT::i32,
/*1582*/        OPC_EmitMergeInputChains1_0,
/*1583*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::EDU_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6123:iPTR, GRRegs:i32:$a) - Complexity = 8
                // Dst: (EDU_1r GRRegs:i32:$a)
/*1589*/      /*Scope*/ 13, /*->1603*/
/*1590*/        OPC_CheckChild1Integer, 108|128,47/*6124*/, 
/*1593*/        OPC_RecordChild2, // #1 = $a
/*1594*/        OPC_CheckChild2Type, MVT::i32,
/*1596*/        OPC_EmitMergeInputChains1_0,
/*1597*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::EEU_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6124:iPTR, GRRegs:i32:$a) - Complexity = 8
                // Dst: (EEU_1r GRRegs:i32:$a)
/*1603*/      /*Scope*/ 13, /*->1617*/
/*1604*/        OPC_CheckChild1Integer, 103|128,47/*6119*/, 
/*1607*/        OPC_RecordChild2, // #1 = $a
/*1608*/        OPC_CheckChild2Type, MVT::i32,
/*1610*/        OPC_EmitMergeInputChains1_0,
/*1611*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRPT_1R), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (intrinsic_void 6119:iPTR, GRRegs:i32:$a) - Complexity = 8
                // Dst: (CLRPT_1R GRRegs:i32:$a)
/*1617*/      /*Scope*/ 9, /*->1627*/
/*1618*/        OPC_CheckChild1Integer, 102|128,47/*6118*/, 
/*1621*/        OPC_EmitMergeInputChains1_0,
/*1622*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::CLRE_0R), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 6118:iPTR) - Complexity = 8
                // Dst: (CLRE_0R)
/*1627*/      /*Scope*/ 9, /*->1637*/
/*1628*/        OPC_CheckChild1Integer, 18|128,48/*6162*/, 
/*1631*/        OPC_EmitMergeInputChains1_0,
/*1632*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::SSYNC_0r), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 6162:iPTR) - Complexity = 8
                // Dst: (SSYNC_0r)
/*1637*/      0, /*End of Scope*/
/*1638*/    /*SwitchOpcode*/ 110, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->1751
/*1641*/      OPC_Scope, 34, /*->1677*/ // 5 children in Scope
/*1643*/        OPC_CheckChild0Integer, 17|128,48/*6161*/, 
/*1646*/        OPC_RecordChild1, // #0 = $src1
/*1647*/        OPC_RecordChild2, // #1 = $src2
/*1648*/        OPC_Scope, 17, /*->1667*/ // 2 children in Scope
/*1650*/          OPC_MoveChild2,
/*1651*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1654*/          OPC_CheckPredicate, 17, // Predicate_immBitp
/*1656*/          OPC_MoveParent,
/*1657*/          OPC_EmitConvertToTarget, 1,
/*1659*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (intrinsic_wo_chain:i32 6161:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                  // Dst: (SEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1667*/        /*Scope*/ 8, /*->1676*/
/*1668*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_2r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (intrinsic_wo_chain:i32 6161:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                  // Dst: (SEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1676*/        0, /*End of Scope*/
/*1677*/      /*Scope*/ 34, /*->1712*/
/*1678*/        OPC_CheckChild0Integer, 23|128,48/*6167*/, 
/*1681*/        OPC_RecordChild1, // #0 = $src1
/*1682*/        OPC_RecordChild2, // #1 = $src2
/*1683*/        OPC_Scope, 17, /*->1702*/ // 2 children in Scope
/*1685*/          OPC_MoveChild2,
/*1686*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1689*/          OPC_CheckPredicate, 17, // Predicate_immBitp
/*1691*/          OPC_MoveParent,
/*1692*/          OPC_EmitConvertToTarget, 1,
/*1694*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::ZEXT_rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (intrinsic_wo_chain:i32 6167:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                  // Dst: (ZEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1702*/        /*Scope*/ 8, /*->1711*/
/*1703*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::ZEXT_2r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (intrinsic_wo_chain:i32 6167:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                  // Dst: (ZEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1711*/        0, /*End of Scope*/
/*1712*/      /*Scope*/ 15, /*->1728*/
/*1713*/        OPC_CheckChild0Integer, 105|128,47/*6121*/, 
/*1716*/        OPC_RecordChild1, // #0 = $src1
/*1717*/        OPC_RecordChild2, // #1 = $src2
/*1718*/        OPC_RecordChild3, // #2 = $src3
/*1719*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::CRC_l3r), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (intrinsic_wo_chain:i32 6121:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3) - Complexity = 8
                // Dst: (CRC_l3r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3)
/*1728*/      /*Scope*/ 11, /*->1740*/
/*1729*/        OPC_CheckChild0Integer, 99|128,47/*6115*/, 
/*1732*/        OPC_RecordChild1, // #0 = $src
/*1733*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::BITREV_l2r), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:i32 6115:iPTR, GRRegs:i32:$src) - Complexity = 8
                // Dst: (BITREV_l2r:i32 GRRegs:i32:$src)
/*1740*/      /*Scope*/ 9, /*->1750*/
/*1741*/        OPC_CheckChild0Integer, 113|128,47/*6129*/, 
/*1744*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::GETID_0R), 0,
                    MVT::i32, 0/*#Ops*/, 
                // Src: (intrinsic_wo_chain:i32 6129:iPTR) - Complexity = 8
                // Dst: (GETID_0R:i32)
/*1750*/      0, /*End of Scope*/
/*1751*/    /*SwitchOpcode*/ 105|128,1/*233*/, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->1988
/*1755*/      OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*1756*/      OPC_Scope, 23, /*->1781*/ // 15 children in Scope
/*1758*/        OPC_CheckChild1Integer, 115|128,47/*6131*/, 
/*1761*/        OPC_RecordChild2, // #1 = $type
/*1762*/        OPC_MoveChild2,
/*1763*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1766*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1768*/        OPC_MoveParent,
/*1769*/        OPC_CheckType, MVT::i32,
/*1771*/        OPC_EmitMergeInputChains1_0,
/*1772*/        OPC_EmitConvertToTarget, 1,
/*1774*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::GETR_rus), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 6131:iPTR, (imm:i32)<<P:Predicate_immUs>>:$type) - Complexity = 12
                // Dst: (GETR_rus:i32 (imm:i32):$type)
/*1781*/      /*Scope*/ 14, /*->1796*/
/*1782*/        OPC_CheckChild1Integer, 117|128,47/*6133*/, 
/*1785*/        OPC_RecordChild2, // #1 = $r
/*1786*/        OPC_CheckChild2Type, MVT::i32,
/*1788*/        OPC_EmitMergeInputChains1_0,
/*1789*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::GETTS_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6133:iPTR, GRRegs:i32:$r) - Complexity = 8
                // Dst: (GETTS_2r:i32 GRRegs:i32:$r)
/*1796*/      /*Scope*/ 16, /*->1813*/
/*1797*/        OPC_CheckChild1Integer, 3|128,48/*6147*/, 
/*1800*/        OPC_RecordChild2, // #1 = $r
/*1801*/        OPC_CheckChild2Type, MVT::i32,
/*1803*/        OPC_RecordChild3, // #2 = $src
/*1804*/        OPC_EmitMergeInputChains1_0,
/*1805*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::OUTSHR_2r), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_w_chain:i32 6147:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
                // Dst: (OUTSHR_2r:i32 GRRegs:i32:$src, GRRegs:i32:$r)
/*1813*/      /*Scope*/ 14, /*->1828*/
/*1814*/        OPC_CheckChild1Integer, 119|128,47/*6135*/, 
/*1817*/        OPC_RecordChild2, // #1 = $r
/*1818*/        OPC_CheckChild2Type, MVT::i32,
/*1820*/        OPC_EmitMergeInputChains1_0,
/*1821*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::INCT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6135:iPTR, GRRegs:i32:$r) - Complexity = 8
                // Dst: (INCT_2r:i32 GRRegs:i32:$r)
/*1828*/      /*Scope*/ 14, /*->1843*/
/*1829*/        OPC_CheckChild1Integer, 126|128,47/*6142*/, 
/*1832*/        OPC_RecordChild2, // #1 = $r
/*1833*/        OPC_CheckChild2Type, MVT::i32,
/*1835*/        OPC_EmitMergeInputChains1_0,
/*1836*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::INT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6142:iPTR, GRRegs:i32:$r) - Complexity = 8
                // Dst: (INT_2r:i32 GRRegs:i32:$r)
/*1843*/      /*Scope*/ 14, /*->1858*/
/*1844*/        OPC_CheckChild1Integer, 118|128,47/*6134*/, 
/*1847*/        OPC_RecordChild2, // #1 = $r
/*1848*/        OPC_CheckChild2Type, MVT::i32,
/*1850*/        OPC_EmitMergeInputChains1_0,
/*1851*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::IN_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6134:iPTR, GRRegs:i32:$r) - Complexity = 8
                // Dst: (IN_2r:i32 GRRegs:i32:$r)
/*1858*/      /*Scope*/ 16, /*->1875*/
/*1859*/        OPC_CheckChild1Integer, 125|128,47/*6141*/, 
/*1862*/        OPC_RecordChild2, // #1 = $r
/*1863*/        OPC_CheckChild2Type, MVT::i32,
/*1865*/        OPC_RecordChild3, // #2 = $src
/*1866*/        OPC_EmitMergeInputChains1_0,
/*1867*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::INSHR_2r), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 1, 
                // Src: (intrinsic_w_chain:i32 6141:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
                // Dst: (INSHR_2r:i32 GRRegs:i32:$src, GRRegs:i32:$r)
/*1875*/      /*Scope*/ 14, /*->1890*/
/*1876*/        OPC_CheckChild1Integer, 20|128,48/*6164*/, 
/*1879*/        OPC_RecordChild2, // #1 = $src
/*1880*/        OPC_CheckChild2Type, MVT::i32,
/*1882*/        OPC_EmitMergeInputChains1_0,
/*1883*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::TESTCT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6164:iPTR, GRRegs:i32:$src) - Complexity = 8
                // Dst: (TESTCT_2r:i32 GRRegs:i32:$src)
/*1890*/      /*Scope*/ 14, /*->1905*/
/*1891*/        OPC_CheckChild1Integer, 21|128,48/*6165*/, 
/*1894*/        OPC_RecordChild2, // #1 = $src
/*1895*/        OPC_CheckChild2Type, MVT::i32,
/*1897*/        OPC_EmitMergeInputChains1_0,
/*1898*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::TESTWCT_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6165:iPTR, GRRegs:i32:$src) - Complexity = 8
                // Dst: (TESTWCT_2r:i32 GRRegs:i32:$src)
/*1905*/      /*Scope*/ 16, /*->1922*/
/*1906*/        OPC_CheckChild1Integer, 116|128,47/*6132*/, 
/*1909*/        OPC_RecordChild2, // #1 = $r
/*1910*/        OPC_CheckChild2Type, MVT::i32,
/*1912*/        OPC_CheckType, MVT::i32,
/*1914*/        OPC_EmitMergeInputChains1_0,
/*1915*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::GETST_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6132:iPTR, GRRegs:i32:$r) - Complexity = 8
                // Dst: (GETST_2r:i32 GRRegs:i32:$r)
/*1922*/      /*Scope*/ 14, /*->1937*/
/*1923*/        OPC_CheckChild1Integer, 5|128,48/*6149*/, 
/*1926*/        OPC_RecordChild2, // #1 = $src
/*1927*/        OPC_CheckChild2Type, MVT::i32,
/*1929*/        OPC_EmitMergeInputChains1_0,
/*1930*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::PEEK_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6149:iPTR, GRRegs:i32:$src) - Complexity = 8
                // Dst: (PEEK_2r:i32 GRRegs:i32:$src)
/*1937*/      /*Scope*/ 14, /*->1952*/
/*1938*/        OPC_CheckChild1Integer, 109|128,47/*6125*/, 
/*1941*/        OPC_RecordChild2, // #1 = $src
/*1942*/        OPC_CheckChild2Type, MVT::i32,
/*1944*/        OPC_EmitMergeInputChains1_0,
/*1945*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ENDIN_2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6125:iPTR, GRRegs:i32:$src) - Complexity = 8
                // Dst: (ENDIN_2r:i32 GRRegs:i32:$src)
/*1952*/      /*Scope*/ 12, /*->1965*/
/*1953*/        OPC_CheckChild1Integer, 114|128,47/*6130*/, 
/*1956*/        OPC_RecordChild2, // #1 = $src
/*1957*/        OPC_EmitMergeInputChains1_0,
/*1958*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::GETPS_l2r), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 6130:iPTR, GRRegs:i32:$src) - Complexity = 8
                // Dst: (GETPS_l2r:i32 GRRegs:i32:$src)
/*1965*/      /*Scope*/ 10, /*->1976*/
/*1966*/        OPC_CheckChild1Integer, 111|128,47/*6127*/, 
/*1969*/        OPC_EmitMergeInputChains1_0,
/*1970*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::GETED_0R), 0|OPFL_Chain,
                    MVT::i32, 0/*#Ops*/, 
                // Src: (intrinsic_w_chain:i32 6127:iPTR) - Complexity = 8
                // Dst: (GETED_0R:i32)
/*1976*/      /*Scope*/ 10, /*->1987*/
/*1977*/        OPC_CheckChild1Integer, 112|128,47/*6128*/, 
/*1980*/        OPC_EmitMergeInputChains1_0,
/*1981*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::GETET_0R), 0|OPFL_Chain,
                    MVT::i32, 0/*#Ops*/, 
                // Src: (intrinsic_w_chain:i32 6128:iPTR) - Complexity = 8
                // Dst: (GETET_0R:i32)
/*1987*/      0, /*End of Scope*/
/*1988*/    /*SwitchOpcode*/ 98, TARGET_VAL(ISD::SUB),// ->2089
/*1991*/      OPC_Scope, 32, /*->2025*/ // 3 children in Scope
/*1993*/        OPC_RecordChild0, // #0 = $addr
/*1994*/        OPC_MoveChild1,
/*1995*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*1998*/        OPC_RecordChild0, // #1 = $offset
/*1999*/        OPC_Scope, 11, /*->2012*/ // 2 children in Scope
/*2001*/          OPC_CheckChild1Integer, 2, 
/*2003*/          OPC_MoveParent,
/*2004*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                  // Dst: (LDAWB_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2012*/        /*Scope*/ 11, /*->2024*/
/*2013*/          OPC_CheckChild1Integer, 1, 
/*2015*/          OPC_MoveParent,
/*2016*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16B_l3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                  // Dst: (LDA16B_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2024*/        0, /*End of Scope*/
/*2025*/      /*Scope*/ 10, /*->2036*/
/*2026*/        OPC_CheckChild0Integer, 0, 
/*2028*/        OPC_RecordChild1, // #0 = $b
/*2029*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::NEG), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GRRegs:i32:$b) - Complexity = 8
                // Dst: (NEG:i32 GRRegs:i32:$b)
/*2036*/      /*Scope*/ 51, /*->2088*/
/*2037*/        OPC_RecordChild0, // #0 = $b
/*2038*/        OPC_RecordChild1, // #1 = $c
/*2039*/        OPC_Scope, 37, /*->2078*/ // 2 children in Scope
/*2041*/          OPC_MoveChild1,
/*2042*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2045*/          OPC_Scope, 13, /*->2060*/ // 2 children in Scope
/*2047*/            OPC_CheckPredicate, 0, // Predicate_immUs
/*2049*/            OPC_MoveParent,
/*2050*/            OPC_EmitConvertToTarget, 1,
/*2052*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SUB_2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                    // Dst: (SUB_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*2060*/          /*Scope*/ 16, /*->2077*/
/*2061*/            OPC_CheckPredicate, 1, // Predicate_immUs4
/*2063*/            OPC_MoveParent,
/*2064*/            OPC_EmitConvertToTarget, 1,
/*2066*/            OPC_EmitNodeXForm, 0, 2, // div4_xform
/*2069*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (sub:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                    // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*2077*/          0, /*End of Scope*/
/*2078*/        /*Scope*/ 8, /*->2087*/
/*2079*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SUB_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (SUB_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2087*/        0, /*End of Scope*/
/*2088*/      0, /*End of Scope*/
/*2089*/    /*SwitchOpcode*/ 91, TARGET_VAL(ISD::AND),// ->2183
/*2092*/      OPC_Scope, 26, /*->2120*/ // 3 children in Scope
/*2094*/        OPC_RecordChild0, // #0 = $src1
/*2095*/        OPC_MoveChild1,
/*2096*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2099*/        OPC_RecordChild0, // #1 = $src2
/*2100*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2111*/        OPC_MoveParent,
/*2112*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ANDNOT_2r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GRRegs:i32:$src1, (xor:i32 GRRegs:i32:$src2, -1:i32)) - Complexity = 11
                // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2120*/      /*Scope*/ 26, /*->2147*/
/*2121*/        OPC_MoveChild0,
/*2122*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2125*/        OPC_RecordChild0, // #0 = $src2
/*2126*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2137*/        OPC_MoveParent,
/*2138*/        OPC_RecordChild1, // #1 = $src1
/*2139*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::ANDNOT_2r), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:i32 (xor:i32 GRRegs:i32:$src2, -1:i32), GRRegs:i32:$src1) - Complexity = 11
                // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2147*/      /*Scope*/ 34, /*->2182*/
/*2148*/        OPC_RecordChild0, // #0 = $val
/*2149*/        OPC_RecordChild1, // #1 = $mask
/*2150*/        OPC_Scope, 20, /*->2172*/ // 2 children in Scope
/*2152*/          OPC_MoveChild1,
/*2153*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2156*/          OPC_CheckPredicate, 20, // Predicate_immMskBitp
/*2158*/          OPC_MoveParent,
/*2159*/          OPC_EmitConvertToTarget, 1,
/*2161*/          OPC_EmitNodeXForm, 4, 2, // msksize_xform
/*2164*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::ZEXT_rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GRRegs:i32:$val, (imm:i32)<<P:Predicate_immMskBitp>>:$mask) - Complexity = 7
                  // Dst: (ZEXT_rus:i32 GRRegs:i32:$val, (msksize_xform:i32 (imm:i32)<<P:Predicate_immMskBitp>>:$mask))
/*2172*/        /*Scope*/ 8, /*->2181*/
/*2173*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::AND_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (AND_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2181*/        0, /*End of Scope*/
/*2182*/      0, /*End of Scope*/
/*2183*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::BRIND),// ->2220
/*2186*/      OPC_RecordNode, // #0 = 'brind' chained node
/*2187*/      OPC_Scope, 19, /*->2208*/ // 2 children in Scope
/*2189*/        OPC_MoveChild1,
/*2190*/        OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*2193*/        OPC_RecordNode, // #1 = 'intrinsic_w_chain' chained node
/*2194*/        OPC_CheckFoldableChainNode,
/*2195*/        OPC_CheckChild1Integer, 22|128,48/*6166*/, 
/*2198*/        OPC_MoveParent,
/*2199*/        OPC_EmitMergeInputChains, 2, 0, 1, 
/*2203*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::WAITEU_0R), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (brind (intrinsic_w_chain:iPTR 6166:iPTR)) - Complexity = 11
                // Dst: (WAITEU_0R)
/*2208*/      /*Scope*/ 10, /*->2219*/
/*2209*/        OPC_RecordChild1, // #1 = $a
/*2210*/        OPC_CheckChild1Type, MVT::i32,
/*2212*/        OPC_EmitMergeInputChains1_0,
/*2213*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::BAU_1r), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (brind GRRegs:i32:$a) - Complexity = 3
                // Dst: (BAU_1r GRRegs:i32:$a)
/*2219*/      0, /*End of Scope*/
/*2220*/    /*SwitchOpcode*/ 69|128,2/*325*/, TARGET_VAL(ISD::BRCOND),// ->2549
/*2224*/      OPC_RecordNode, // #0 = 'brcond' chained node
/*2225*/      OPC_Scope, 48|128,2/*304*/, /*->2532*/ // 2 children in Scope
/*2228*/        OPC_MoveChild1,
/*2229*/        OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2232*/        OPC_RecordChild0, // #1 = $lhs
/*2233*/        OPC_Scope, 73, /*->2308*/ // 4 children in Scope
/*2235*/          OPC_CheckChild1Integer, 0, 
/*2237*/          OPC_MoveChild2,
/*2238*/          OPC_Scope, 18, /*->2258*/ // 3 children in Scope
/*2240*/            OPC_CheckCondCode, ISD::SETNE,
/*2242*/            OPC_MoveParent,
/*2243*/            OPC_MoveParent,
/*2244*/            OPC_RecordChild2, // #2 = $dst
/*2245*/            OPC_MoveChild2,
/*2246*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2249*/            OPC_MoveParent,
/*2250*/            OPC_EmitMergeInputChains1_0,
/*2251*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2258*/          /*Scope*/ 18, /*->2277*/
/*2259*/            OPC_CheckCondCode, ISD::SETEQ,
/*2261*/            OPC_MoveParent,
/*2262*/            OPC_MoveParent,
/*2263*/            OPC_RecordChild2, // #2 = $dst
/*2264*/            OPC_MoveChild2,
/*2265*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2268*/            OPC_MoveParent,
/*2269*/            OPC_EmitMergeInputChains1_0,
/*2270*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFF_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2277*/          /*Scope*/ 29, /*->2307*/
/*2278*/            OPC_CheckCondCode, ISD::SETLT,
/*2280*/            OPC_MoveParent,
/*2281*/            OPC_MoveParent,
/*2282*/            OPC_RecordChild2, // #2 = $dst
/*2283*/            OPC_MoveChild2,
/*2284*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2287*/            OPC_MoveParent,
/*2288*/            OPC_EmitMergeInputChains1_0,
/*2289*/            OPC_EmitInteger, MVT::i32, 32, 
/*2292*/            OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2300*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2307*/          0, /*End of Scope*/
/*2308*/        /*Scope*/ 41, /*->2350*/
/*2309*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2320*/          OPC_MoveChild2,
/*2321*/          OPC_CheckCondCode, ISD::SETGT,
/*2323*/          OPC_MoveParent,
/*2324*/          OPC_MoveParent,
/*2325*/          OPC_RecordChild2, // #2 = $dst
/*2326*/          OPC_MoveChild2,
/*2327*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2330*/          OPC_MoveParent,
/*2331*/          OPC_EmitMergeInputChains1_0,
/*2332*/          OPC_EmitInteger, MVT::i32, 32, 
/*2335*/          OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2343*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BRFF_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2350*/        /*Scope*/ 37, /*->2388*/
/*2351*/          OPC_RecordChild1, // #2 = $rhs
/*2352*/          OPC_MoveChild1,
/*2353*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2356*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*2358*/          OPC_MoveParent,
/*2359*/          OPC_MoveChild2,
/*2360*/          OPC_CheckCondCode, ISD::SETNE,
/*2362*/          OPC_MoveParent,
/*2363*/          OPC_MoveParent,
/*2364*/          OPC_RecordChild2, // #3 = $dst
/*2365*/          OPC_MoveChild2,
/*2366*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2369*/          OPC_MoveParent,
/*2370*/          OPC_EmitMergeInputChains1_0,
/*2371*/          OPC_EmitConvertToTarget, 2,
/*2373*/          OPC_EmitNode1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*2381*/          OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      2/*#Ops*/, 5, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 10
                  // Dst: (BRFF_lru6 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), (bb:Other):$dst)
/*2388*/        /*Scope*/ 13|128,1/*141*/, /*->2531*/
/*2390*/          OPC_CheckChild0Type, MVT::i32,
/*2392*/          OPC_RecordChild1, // #2 = $rhs
/*2393*/          OPC_MoveChild2,
/*2394*/          OPC_Scope, 26, /*->2422*/ // 5 children in Scope
/*2396*/            OPC_CheckCondCode, ISD::SETLE,
/*2398*/            OPC_MoveParent,
/*2399*/            OPC_MoveParent,
/*2400*/            OPC_RecordChild2, // #3 = $dst
/*2401*/            OPC_MoveChild2,
/*2402*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2405*/            OPC_MoveParent,
/*2406*/            OPC_EmitMergeInputChains1_0,
/*2407*/            OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2415*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2422*/          /*Scope*/ 26, /*->2449*/
/*2423*/            OPC_CheckCondCode, ISD::SETULE,
/*2425*/            OPC_MoveParent,
/*2426*/            OPC_MoveParent,
/*2427*/            OPC_RecordChild2, // #3 = $dst
/*2428*/            OPC_MoveChild2,
/*2429*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2432*/            OPC_MoveParent,
/*2433*/            OPC_EmitMergeInputChains1_0,
/*2434*/            OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2442*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2449*/          /*Scope*/ 26, /*->2476*/
/*2450*/            OPC_CheckCondCode, ISD::SETGE,
/*2452*/            OPC_MoveParent,
/*2453*/            OPC_MoveParent,
/*2454*/            OPC_RecordChild2, // #3 = $dst
/*2455*/            OPC_MoveChild2,
/*2456*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2459*/            OPC_MoveParent,
/*2460*/            OPC_EmitMergeInputChains1_0,
/*2461*/            OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2469*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2476*/          /*Scope*/ 26, /*->2503*/
/*2477*/            OPC_CheckCondCode, ISD::SETUGE,
/*2479*/            OPC_MoveParent,
/*2480*/            OPC_MoveParent,
/*2481*/            OPC_RecordChild2, // #3 = $dst
/*2482*/            OPC_MoveChild2,
/*2483*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2486*/            OPC_MoveParent,
/*2487*/            OPC_EmitMergeInputChains1_0,
/*2488*/            OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2496*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2503*/          /*Scope*/ 26, /*->2530*/
/*2504*/            OPC_CheckCondCode, ISD::SETNE,
/*2506*/            OPC_MoveParent,
/*2507*/            OPC_MoveParent,
/*2508*/            OPC_RecordChild2, // #3 = $dst
/*2509*/            OPC_MoveChild2,
/*2510*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2513*/            OPC_MoveParent,
/*2514*/            OPC_EmitMergeInputChains1_0,
/*2515*/            OPC_EmitNode1, TARGET_VAL(XCore::EQ_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2523*/            OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 6
                    // Dst: (BRFF_lru6 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2530*/          0, /*End of Scope*/
/*2531*/        0, /*End of Scope*/
/*2532*/      /*Scope*/ 15, /*->2548*/
/*2533*/        OPC_RecordChild1, // #1 = $cond
/*2534*/        OPC_RecordChild2, // #2 = $addr
/*2535*/        OPC_MoveChild2,
/*2536*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2539*/        OPC_MoveParent,
/*2540*/        OPC_EmitMergeInputChains1_0,
/*2541*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (brcond GRRegs:i32:$cond, (bb:Other):$addr) - Complexity = 3
                // Dst: (BRFT_lru6 GRRegs:i32:$cond, (bb:Other):$addr)
/*2548*/      0, /*End of Scope*/
/*2549*/    /*SwitchOpcode*/ 57|128,2/*313*/, TARGET_VAL(ISD::SELECT),// ->2866
/*2553*/      OPC_Scope, 38|128,2/*294*/, /*->2850*/ // 2 children in Scope
/*2556*/        OPC_MoveChild0,
/*2557*/        OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2560*/        OPC_RecordChild0, // #0 = $lhs
/*2561*/        OPC_Scope, 70, /*->2633*/ // 4 children in Scope
/*2563*/          OPC_CheckChild1Integer, 0, 
/*2565*/          OPC_MoveChild2,
/*2566*/          OPC_Scope, 17, /*->2585*/ // 3 children in Scope
/*2568*/            OPC_CheckCondCode, ISD::SETNE,
/*2570*/            OPC_MoveParent,
/*2571*/            OPC_MoveParent,
/*2572*/            OPC_RecordChild1, // #1 = $T
/*2573*/            OPC_RecordChild2, // #2 = $F
/*2574*/            OPC_CheckType, MVT::i32,
/*2576*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$T, GRRegs:i32:$F)
/*2585*/          /*Scope*/ 17, /*->2603*/
/*2586*/            OPC_CheckCondCode, ISD::SETEQ,
/*2588*/            OPC_MoveParent,
/*2589*/            OPC_MoveParent,
/*2590*/            OPC_RecordChild1, // #1 = $T
/*2591*/            OPC_RecordChild2, // #2 = $F
/*2592*/            OPC_CheckType, MVT::i32,
/*2594*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$F, GRRegs:i32:$T)
/*2603*/          /*Scope*/ 28, /*->2632*/
/*2604*/            OPC_CheckCondCode, ISD::SETLT,
/*2606*/            OPC_MoveParent,
/*2607*/            OPC_MoveParent,
/*2608*/            OPC_RecordChild1, // #1 = $T
/*2609*/            OPC_RecordChild2, // #2 = $F
/*2610*/            OPC_CheckType, MVT::i32,
/*2612*/            OPC_EmitInteger, MVT::i32, 32, 
/*2615*/            OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2623*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$T, GRRegs:i32:$F)
/*2632*/          0, /*End of Scope*/
/*2633*/        /*Scope*/ 40, /*->2674*/
/*2634*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2645*/          OPC_MoveChild2,
/*2646*/          OPC_CheckCondCode, ISD::SETGT,
/*2648*/          OPC_MoveParent,
/*2649*/          OPC_MoveParent,
/*2650*/          OPC_RecordChild1, // #1 = $T
/*2651*/          OPC_RecordChild2, // #2 = $F
/*2652*/          OPC_CheckType, MVT::i32,
/*2654*/          OPC_EmitInteger, MVT::i32, 32, 
/*2657*/          OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2665*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                      MVT::i32, 3/*#Ops*/, 4, 2, 1, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                  // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$F, GRRegs:i32:$T)
/*2674*/        /*Scope*/ 36, /*->2711*/
/*2675*/          OPC_RecordChild1, // #1 = $rhs
/*2676*/          OPC_MoveChild1,
/*2677*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2680*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*2682*/          OPC_MoveParent,
/*2683*/          OPC_MoveChild2,
/*2684*/          OPC_CheckCondCode, ISD::SETNE,
/*2686*/          OPC_MoveParent,
/*2687*/          OPC_MoveParent,
/*2688*/          OPC_RecordChild1, // #2 = $T
/*2689*/          OPC_RecordChild2, // #3 = $F
/*2690*/          OPC_CheckType, MVT::i32,
/*2692*/          OPC_EmitConvertToTarget, 1,
/*2694*/          OPC_EmitNode1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*2702*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                      MVT::i32, 3/*#Ops*/, 5, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 10
                  // Dst: (SELECT_CC:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2711*/        /*Scope*/ 8|128,1/*136*/, /*->2849*/
/*2713*/          OPC_CheckChild0Type, MVT::i32,
/*2715*/          OPC_RecordChild1, // #1 = $rhs
/*2716*/          OPC_MoveChild2,
/*2717*/          OPC_Scope, 25, /*->2744*/ // 5 children in Scope
/*2719*/            OPC_CheckCondCode, ISD::SETLE,
/*2721*/            OPC_MoveParent,
/*2722*/            OPC_MoveParent,
/*2723*/            OPC_RecordChild1, // #2 = $T
/*2724*/            OPC_RecordChild2, // #3 = $F
/*2725*/            OPC_CheckType, MVT::i32,
/*2727*/            OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*2735*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                    // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2744*/          /*Scope*/ 25, /*->2770*/
/*2745*/            OPC_CheckCondCode, ISD::SETULE,
/*2747*/            OPC_MoveParent,
/*2748*/            OPC_MoveParent,
/*2749*/            OPC_RecordChild1, // #2 = $T
/*2750*/            OPC_RecordChild2, // #3 = $F
/*2751*/            OPC_CheckType, MVT::i32,
/*2753*/            OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*2761*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                    // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2770*/          /*Scope*/ 25, /*->2796*/
/*2771*/            OPC_CheckCondCode, ISD::SETGE,
/*2773*/            OPC_MoveParent,
/*2774*/            OPC_MoveParent,
/*2775*/            OPC_RecordChild1, // #2 = $T
/*2776*/            OPC_RecordChild2, // #3 = $F
/*2777*/            OPC_CheckType, MVT::i32,
/*2779*/            OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*2787*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                    // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2796*/          /*Scope*/ 25, /*->2822*/
/*2797*/            OPC_CheckCondCode, ISD::SETUGE,
/*2799*/            OPC_MoveParent,
/*2800*/            OPC_MoveParent,
/*2801*/            OPC_RecordChild1, // #2 = $T
/*2802*/            OPC_RecordChild2, // #3 = $F
/*2803*/            OPC_CheckType, MVT::i32,
/*2805*/            OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*2813*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                    // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2822*/          /*Scope*/ 25, /*->2848*/
/*2823*/            OPC_CheckCondCode, ISD::SETNE,
/*2825*/            OPC_MoveParent,
/*2826*/            OPC_MoveParent,
/*2827*/            OPC_RecordChild1, // #2 = $T
/*2828*/            OPC_RecordChild2, // #3 = $F
/*2829*/            OPC_CheckType, MVT::i32,
/*2831*/            OPC_EmitNode1, TARGET_VAL(XCore::EQ_3r), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*2839*/            OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                        MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                    // Dst: (SELECT_CC:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2848*/          0, /*End of Scope*/
/*2849*/        0, /*End of Scope*/
/*2850*/      /*Scope*/ 14, /*->2865*/
/*2851*/        OPC_RecordChild0, // #0 = $cond
/*2852*/        OPC_RecordChild1, // #1 = $T
/*2853*/        OPC_RecordChild2, // #2 = $F
/*2854*/        OPC_CheckType, MVT::i32,
/*2856*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SELECT_CC), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (select:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 3
                // Dst: (SELECT_CC:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
/*2865*/      0, /*End of Scope*/
/*2866*/    /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->2891
/*2869*/      OPC_RecordNode, // #0 = 'callseq_start' chained node
/*2870*/      OPC_RecordChild1, // #1 = $amt
/*2871*/      OPC_MoveChild1,
/*2872*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2875*/      OPC_MoveParent,
/*2876*/      OPC_RecordChild2, // #2 = $amt2
/*2877*/      OPC_MoveChild2,
/*2878*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2881*/      OPC_MoveParent,
/*2882*/      OPC_EmitMergeInputChains1_0,
/*2883*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (callseq_start (timm:i32):$amt, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt, (timm:i32):$amt2)
/*2891*/    /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->2917
/*2894*/      OPC_RecordNode, // #0 = 'callseq_end' chained node
/*2895*/      OPC_CaptureGlueInput,
/*2896*/      OPC_RecordChild1, // #1 = $amt1
/*2897*/      OPC_MoveChild1,
/*2898*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2901*/      OPC_MoveParent,
/*2902*/      OPC_RecordChild2, // #2 = $amt2
/*2903*/      OPC_MoveChild2,
/*2904*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2907*/      OPC_MoveParent,
/*2908*/      OPC_EmitMergeInputChains1_0,
/*2909*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
/*2917*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::FrameIndex),// ->2934
/*2920*/      OPC_RecordNode, // #0 = $addr
/*2921*/      OPC_CheckType, MVT::i32,
/*2923*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*2926*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWFI), 0,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: ADDRspii:i32:$addr - Complexity = 9
              // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
/*2934*/    /*SwitchOpcode*/ 32, TARGET_VAL(ISD::XOR),// ->2969
/*2937*/      OPC_RecordChild0, // #0 = $b
/*2938*/      OPC_Scope, 18, /*->2958*/ // 2 children in Scope
/*2940*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2951*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::NOT), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (xor:i32 GRRegs:i32:$b, -1:i32) - Complexity = 8
                // Dst: (NOT:i32 GRRegs:i32:$b)
/*2958*/      /*Scope*/ 9, /*->2968*/
/*2959*/        OPC_RecordChild1, // #1 = $c
/*2960*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::XOR_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (XOR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2968*/      0, /*End of Scope*/
/*2969*/    /*SwitchOpcode*/ 55, TARGET_VAL(ISD::MUL),// ->3027
/*2972*/      OPC_RecordChild0, // #0 = $src
/*2973*/      OPC_Scope, 10, /*->2985*/ // 4 children in Scope
/*2975*/        OPC_CheckChild1Integer, 3, 
/*2977*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 3:i32) - Complexity = 8
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*2985*/      /*Scope*/ 10, /*->2996*/
/*2986*/        OPC_CheckChild1Integer, 5, 
/*2988*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 5:i32) - Complexity = 8
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*2996*/      /*Scope*/ 19, /*->3016*/
/*2997*/        OPC_CheckChild1Integer, 125|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551613*/, 
/*3008*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, -3:i32) - Complexity = 8
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3016*/      /*Scope*/ 9, /*->3026*/
/*3017*/        OPC_RecordChild1, // #1 = $c
/*3018*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::MUL_l3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (MUL_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3026*/      0, /*End of Scope*/
/*3027*/    /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(ISD::SETCC),// ->3306
/*3031*/      OPC_RecordChild0, // #0 = $lhs
/*3032*/      OPC_Scope, 37, /*->3071*/ // 3 children in Scope
/*3034*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3045*/        OPC_MoveChild2,
/*3046*/        OPC_CheckCondCode, ISD::SETGT,
/*3048*/        OPC_MoveParent,
/*3049*/        OPC_EmitInteger, MVT::i32, 32, 
/*3052*/        OPC_EmitNode1, TARGET_VAL(XCore::ASHR_l2rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3060*/        OPC_EmitInteger, MVT::i32, 0, 
/*3063*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other) - Complexity = 8
                // Dst: (EQ_2rus:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), 0:i32)
/*3071*/      /*Scope*/ 50, /*->3122*/
/*3072*/        OPC_RecordChild1, // #1 = $rhs
/*3073*/        OPC_MoveChild1,
/*3074*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3077*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*3079*/        OPC_MoveParent,
/*3080*/        OPC_MoveChild2,
/*3081*/        OPC_Scope, 13, /*->3096*/ // 2 children in Scope
/*3083*/          OPC_CheckCondCode, ISD::SETEQ,
/*3085*/          OPC_MoveParent,
/*3086*/          OPC_EmitConvertToTarget, 1,
/*3088*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETEQ:Other) - Complexity = 7
                  // Dst: (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs)
/*3096*/        /*Scope*/ 24, /*->3121*/
/*3097*/          OPC_CheckCondCode, ISD::SETNE,
/*3099*/          OPC_MoveParent,
/*3100*/          OPC_EmitConvertToTarget, 1,
/*3102*/          OPC_EmitNode1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3110*/          OPC_EmitInteger, MVT::i32, 0, 
/*3113*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other) - Complexity = 7
                  // Dst: (EQ_2rus:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), 0:i32)
/*3121*/        0, /*End of Scope*/
/*3122*/      /*Scope*/ 53|128,1/*181*/, /*->3305*/
/*3124*/        OPC_CheckChild0Type, MVT::i32,
/*3126*/        OPC_RecordChild1, // #1 = $rhs
/*3127*/        OPC_MoveChild2,
/*3128*/        OPC_Scope, 11, /*->3141*/ // 10 children in Scope
/*3130*/          OPC_CheckCondCode, ISD::SETGT,
/*3132*/          OPC_MoveParent,
/*3133*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGT:Other) - Complexity = 3
                  // Dst: (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3141*/        /*Scope*/ 11, /*->3153*/
/*3142*/          OPC_CheckCondCode, ISD::SETUGT,
/*3144*/          OPC_MoveParent,
/*3145*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                  // Dst: (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3153*/        /*Scope*/ 11, /*->3165*/
/*3154*/          OPC_CheckCondCode, ISD::SETLT,
/*3156*/          OPC_MoveParent,
/*3157*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLT:Other) - Complexity = 3
                  // Dst: (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3165*/        /*Scope*/ 11, /*->3177*/
/*3166*/          OPC_CheckCondCode, ISD::SETULT,
/*3168*/          OPC_MoveParent,
/*3169*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULT:Other) - Complexity = 3
                  // Dst: (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3177*/        /*Scope*/ 11, /*->3189*/
/*3178*/          OPC_CheckCondCode, ISD::SETEQ,
/*3180*/          OPC_MoveParent,
/*3181*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                  // Dst: (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3189*/        /*Scope*/ 22, /*->3212*/
/*3190*/          OPC_CheckCondCode, ISD::SETLE,
/*3192*/          OPC_MoveParent,
/*3193*/          OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3201*/          OPC_EmitInteger, MVT::i32, 0, 
/*3204*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other) - Complexity = 3
                  // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3212*/        /*Scope*/ 22, /*->3235*/
/*3213*/          OPC_CheckCondCode, ISD::SETULE,
/*3215*/          OPC_MoveParent,
/*3216*/          OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3224*/          OPC_EmitInteger, MVT::i32, 0, 
/*3227*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other) - Complexity = 3
                  // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3235*/        /*Scope*/ 22, /*->3258*/
/*3236*/          OPC_CheckCondCode, ISD::SETGE,
/*3238*/          OPC_MoveParent,
/*3239*/          OPC_EmitNode1, TARGET_VAL(XCore::LSS_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3247*/          OPC_EmitInteger, MVT::i32, 0, 
/*3250*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other) - Complexity = 3
                  // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3258*/        /*Scope*/ 22, /*->3281*/
/*3259*/          OPC_CheckCondCode, ISD::SETUGE,
/*3261*/          OPC_MoveParent,
/*3262*/          OPC_EmitNode1, TARGET_VAL(XCore::LSU_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3270*/          OPC_EmitInteger, MVT::i32, 0, 
/*3273*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                  // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3281*/        /*Scope*/ 22, /*->3304*/
/*3282*/          OPC_CheckCondCode, ISD::SETNE,
/*3284*/          OPC_MoveParent,
/*3285*/          OPC_EmitNode1, TARGET_VAL(XCore::EQ_3r), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3293*/          OPC_EmitInteger, MVT::i32, 0, 
/*3296*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::EQ_2rus), 0,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other) - Complexity = 3
                  // Dst: (EQ_2rus:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3304*/        0, /*End of Scope*/
/*3305*/      0, /*End of Scope*/
/*3306*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SHL),// ->3340
/*3309*/      OPC_RecordChild0, // #0 = $b
/*3310*/      OPC_RecordChild1, // #1 = $c
/*3311*/      OPC_Scope, 17, /*->3330*/ // 2 children in Scope
/*3313*/        OPC_MoveChild1,
/*3314*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3317*/        OPC_CheckPredicate, 17, // Predicate_immBitp
/*3319*/        OPC_MoveParent,
/*3320*/        OPC_EmitConvertToTarget, 1,
/*3322*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SHL_2rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                // Dst: (SHL_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3330*/      /*Scope*/ 8, /*->3339*/
/*3331*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SHL_3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (SHL_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3339*/      0, /*End of Scope*/
/*3340*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::SRL),// ->3374
/*3343*/      OPC_RecordChild0, // #0 = $b
/*3344*/      OPC_RecordChild1, // #1 = $c
/*3345*/      OPC_Scope, 17, /*->3364*/ // 2 children in Scope
/*3347*/        OPC_MoveChild1,
/*3348*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3351*/        OPC_CheckPredicate, 17, // Predicate_immBitp
/*3353*/        OPC_MoveParent,
/*3354*/        OPC_EmitConvertToTarget, 1,
/*3356*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SHR_2rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                // Dst: (SHR_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3364*/      /*Scope*/ 8, /*->3373*/
/*3365*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SHR_3r), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (SHR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3373*/      0, /*End of Scope*/
/*3374*/    /*SwitchOpcode*/ 39, TARGET_VAL(XCoreISD::STWSP),// ->3416
/*3377*/      OPC_RecordNode, // #0 = 'XCoreStwsp' chained node
/*3378*/      OPC_RecordChild1, // #1 = $a
/*3379*/      OPC_CheckChild1Type, MVT::i32,
/*3381*/      OPC_RecordChild2, // #2 = $b
/*3382*/      OPC_MoveChild2,
/*3383*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3386*/      OPC_Scope, 13, /*->3401*/ // 2 children in Scope
/*3388*/        OPC_CheckPredicate, 18, // Predicate_immU6
/*3390*/        OPC_MoveParent,
/*3391*/        OPC_EmitMergeInputChains1_0,
/*3392*/        OPC_EmitConvertToTarget, 2,
/*3394*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::STWSP_ru6), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 3, 
                // Src: (XCoreStwsp RRegs:i32:$a, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 7
                // Dst: (STWSP_ru6 RRegs:i32:$a, (imm:i32):$b)
/*3401*/      /*Scope*/ 13, /*->3415*/
/*3402*/        OPC_CheckPredicate, 19, // Predicate_immU16
/*3404*/        OPC_MoveParent,
/*3405*/        OPC_EmitMergeInputChains1_0,
/*3406*/        OPC_EmitConvertToTarget, 2,
/*3408*/        OPC_MorphNodeTo0, TARGET_VAL(XCore::STWSP_lru6), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 3, 
                // Src: (XCoreStwsp RRegs:i32:$a, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 7
                // Dst: (STWSP_lru6 RRegs:i32:$a, (imm:i32):$b)
/*3415*/      0, /*End of Scope*/
/*3416*/    /*SwitchOpcode*/ 40, TARGET_VAL(XCoreISD::LDWSP),// ->3459
/*3419*/      OPC_RecordNode, // #0 = 'XCoreLdwsp' chained node
/*3420*/      OPC_RecordChild1, // #1 = $b
/*3421*/      OPC_MoveChild1,
/*3422*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3425*/      OPC_Scope, 15, /*->3442*/ // 2 children in Scope
/*3427*/        OPC_CheckPredicate, 18, // Predicate_immU6
/*3429*/        OPC_MoveParent,
/*3430*/        OPC_CheckType, MVT::i32,
/*3432*/        OPC_EmitMergeInputChains1_0,
/*3433*/        OPC_EmitConvertToTarget, 1,
/*3435*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWSP_ru6), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreLdwsp:i32 (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 7
                // Dst: (LDWSP_ru6:i32 (imm:i32):$b)
/*3442*/      /*Scope*/ 15, /*->3458*/
/*3443*/        OPC_CheckPredicate, 19, // Predicate_immU16
/*3445*/        OPC_MoveParent,
/*3446*/        OPC_CheckType, MVT::i32,
/*3448*/        OPC_EmitMergeInputChains1_0,
/*3449*/        OPC_EmitConvertToTarget, 1,
/*3451*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDWSP_lru6), 0|OPFL_Chain,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreLdwsp:i32 (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 7
                // Dst: (LDWSP_lru6:i32 (imm:i32):$b)
/*3458*/      0, /*End of Scope*/
/*3459*/    /*SwitchOpcode*/ 39, TARGET_VAL(XCoreISD::RETSP),// ->3501
/*3462*/      OPC_RecordNode, // #0 = 'XCoreRetsp' chained node
/*3463*/      OPC_CaptureGlueInput,
/*3464*/      OPC_RecordChild1, // #1 = $a
/*3465*/      OPC_MoveChild1,
/*3466*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3469*/      OPC_CheckType, MVT::i32,
/*3471*/      OPC_Scope, 13, /*->3486*/ // 2 children in Scope
/*3473*/        OPC_CheckPredicate, 18, // Predicate_immU6
/*3475*/        OPC_MoveParent,
/*3476*/        OPC_EmitMergeInputChains1_0,
/*3477*/        OPC_EmitConvertToTarget, 1,
/*3479*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::RETSP_u6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 7
                // Dst: (RETSP_u6:i32 (imm:i32):$a)
/*3486*/      /*Scope*/ 13, /*->3500*/
/*3487*/        OPC_CheckPredicate, 19, // Predicate_immU16
/*3489*/        OPC_MoveParent,
/*3490*/        OPC_EmitMergeInputChains1_0,
/*3491*/        OPC_EmitConvertToTarget, 1,
/*3493*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::RETSP_lu6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 7
                // Dst: (RETSP_lu6:i32 (imm:i32):$a)
/*3500*/      0, /*End of Scope*/
/*3501*/    /*SwitchOpcode*/ 15, TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->3519
/*3504*/      OPC_RecordChild0, // #0 = $b
/*3505*/      OPC_MoveChild0,
/*3506*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*3509*/      OPC_MoveParent,
/*3510*/      OPC_CheckType, MVT::i32,
/*3512*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (dprelwrapper:i32 (tglobaladdr:i32):$b) - Complexity = 6
              // Dst: (LDAWDP_lru6:i32 (tglobaladdr:i32):$b)
/*3519*/    /*SwitchOpcode*/ 30, TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->3552
/*3522*/      OPC_RecordChild0, // #0 = $a
/*3523*/      OPC_MoveChild0,
/*3524*/      OPC_SwitchOpcode /*2 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->3538
/*3528*/        OPC_MoveParent,
/*3529*/        OPC_CheckType, MVT::i32,
/*3531*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (cprelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
                // Dst: (LDAWCP_lu6:i32 (tglobaladdr:i32):$a)
/*3538*/      /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->3551
/*3541*/        OPC_MoveParent,
/*3542*/        OPC_CheckType, MVT::i32,
/*3544*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (cprelwrapper:i32 (tconstpool:i32):$b) - Complexity = 6
                // Dst: (LDAWCP_lu6:i32 (tconstpool:i32):$b)
/*3551*/      0, // EndSwitchOpcode
/*3552*/    /*SwitchOpcode*/ 41, TARGET_VAL(XCoreISD::PCRelativeWrapper),// ->3596
/*3555*/      OPC_RecordChild0, // #0 = $a
/*3556*/      OPC_MoveChild0,
/*3557*/      OPC_SwitchOpcode /*2 cases */, 21, TARGET_VAL(ISD::TargetGlobalAddress),// ->3582
/*3561*/        OPC_MoveParent,
/*3562*/        OPC_CheckType, MVT::i32,
/*3564*/        OPC_Scope, 7, /*->3573*/ // 2 children in Scope
/*3566*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAPF_lu10), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
                  // Dst: (LDAPF_lu10:i32 (tglobaladdr:i32):$a)
/*3573*/        /*Scope*/ 7, /*->3581*/
/*3574*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAPB_lu10), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
                  // Dst: (LDAPB_lu10:i32 (tglobaladdr:i32):$a)
/*3581*/        0, /*End of Scope*/
/*3582*/      /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->3595
/*3585*/        OPC_MoveParent,
/*3586*/        OPC_CheckType, MVT::i32,
/*3588*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDAPF_lu10_ba), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (pcrelwrapper:i32 (tblockaddress:i32):$a) - Complexity = 6
                // Dst: (LDAPF_lu10_ba:i32 (tblockaddress:i32):$a)
/*3595*/      0, // EndSwitchOpcode
/*3596*/    /*SwitchOpcode*/ 44, TARGET_VAL(XCoreISD::BL),// ->3643
/*3599*/      OPC_RecordNode, // #0 = 'XCoreBranchLink' chained node
/*3600*/      OPC_CaptureGlueInput,
/*3601*/      OPC_RecordChild1, // #1 = $a
/*3602*/      OPC_Scope, 27, /*->3631*/ // 2 children in Scope
/*3604*/        OPC_MoveChild1,
/*3605*/        OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->3618
/*3609*/          OPC_MoveParent,
/*3610*/          OPC_EmitMergeInputChains1_0,
/*3611*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (XCoreBranchLink (tglobaladdr:iPTR):$a) - Complexity = 6
                  // Dst: (BLRF_lu10:i32 (tglobaladdr:i32):$a)
/*3618*/        /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->3630
/*3621*/          OPC_MoveParent,
/*3622*/          OPC_EmitMergeInputChains1_0,
/*3623*/          OPC_MorphNodeTo1, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (XCoreBranchLink (texternalsym:iPTR):$addr) - Complexity = 6
                  // Dst: (BLRF_lu10:i32 (texternalsym:i32):$addr)
/*3630*/        0, // EndSwitchOpcode
/*3631*/      /*Scope*/ 10, /*->3642*/
/*3632*/        OPC_CheckChild1Type, MVT::i32,
/*3634*/        OPC_EmitMergeInputChains1_0,
/*3635*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::BLA_1r), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink GRRegs:i32:$a) - Complexity = 3
                // Dst: (BLA_1r:i32 GRRegs:i32:$a)
/*3642*/      0, /*End of Scope*/
/*3643*/    /*SwitchOpcode*/ 16, TARGET_VAL(XCoreISD::BR_JT),// ->3662
/*3646*/      OPC_RecordNode, // #0 = 'XCoreBR_JT' chained node
/*3647*/      OPC_RecordChild1, // #1 = $t
/*3648*/      OPC_MoveChild1,
/*3649*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3652*/      OPC_MoveParent,
/*3653*/      OPC_RecordChild2, // #2 = $i
/*3654*/      OPC_EmitMergeInputChains1_0,
/*3655*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::BR_JT), 0|OPFL_Chain,
                  2/*#Ops*/, 1, 2, 
              // Src: (XCoreBR_JT (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
              // Dst: (BR_JT (tjumptable:i32):$t, GRRegs:i32:$i)
/*3662*/    /*SwitchOpcode*/ 16, TARGET_VAL(XCoreISD::BR_JT32),// ->3681
/*3665*/      OPC_RecordNode, // #0 = 'XCoreBR_JT32' chained node
/*3666*/      OPC_RecordChild1, // #1 = $t
/*3667*/      OPC_MoveChild1,
/*3668*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3671*/      OPC_MoveParent,
/*3672*/      OPC_RecordChild2, // #2 = $i
/*3673*/      OPC_EmitMergeInputChains1_0,
/*3674*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::BR_JT32), 0|OPFL_Chain,
                  2/*#Ops*/, 1, 2, 
              // Src: (XCoreBR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
              // Dst: (BR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i)
/*3681*/    /*SwitchOpcode*/ 27, TARGET_VAL(ISD::Constant),// ->3711
/*3684*/      OPC_RecordNode, // #0 = $b
/*3685*/      OPC_Scope, 11, /*->3698*/ // 2 children in Scope
/*3687*/        OPC_CheckPredicate, 18, // Predicate_immU6
/*3689*/        OPC_EmitConvertToTarget, 0,
/*3691*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDC_ru6), 0,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immU6>>:$b - Complexity = 4
                // Dst: (LDC_ru6:i32 (imm:i32):$b)
/*3698*/      /*Scope*/ 11, /*->3710*/
/*3699*/        OPC_CheckPredicate, 19, // Predicate_immU16
/*3701*/        OPC_EmitConvertToTarget, 0,
/*3703*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::LDC_lru6), 0,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immU16>>:$b - Complexity = 4
                // Dst: (LDC_lru6:i32 (imm:i32):$b)
/*3710*/      0, /*End of Scope*/
/*3711*/    /*SwitchOpcode*/ 6, TARGET_VAL(XCoreISD::FRAME_TO_ARGS_OFFSET),// ->3720
/*3714*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::FRAME_TO_ARGS_OFFSET), 0,
                  MVT::i32, 0/*#Ops*/, 
              // Src: (frametoargsoffset:i32) - Complexity = 3
              // Dst: (FRAME_TO_ARGS_OFFSET:i32)
/*3720*/    /*SwitchOpcode*/ 14, TARGET_VAL(XCoreISD::EH_RETURN),// ->3737
/*3723*/      OPC_RecordNode, // #0 = 'XCoreEhRet' chained node
/*3724*/      OPC_CaptureGlueInput,
/*3725*/      OPC_RecordChild1, // #1 = $s
/*3726*/      OPC_CheckChild1Type, MVT::i32,
/*3728*/      OPC_RecordChild2, // #2 = $handler
/*3729*/      OPC_EmitMergeInputChains1_0,
/*3730*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::EH_RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 2, 
              // Src: (XCoreEhRet GRRegs:i32:$s, GRRegs:i32:$handler) - Complexity = 3
              // Dst: (EH_RETURN GRRegs:i32:$s, GRRegs:i32:$handler)
/*3737*/    /*SwitchOpcode*/ 7, TARGET_VAL(XCoreISD::MEMBARRIER),// ->3747
/*3740*/      OPC_RecordNode, // #0 = 'XCoreMemBarrier' chained node
/*3741*/      OPC_EmitMergeInputChains1_0,
/*3742*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::Int_MemBarrier), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (XCoreMemBarrier) - Complexity = 3
              // Dst: (Int_MemBarrier)
/*3747*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::OR),// ->3760
/*3750*/      OPC_RecordChild0, // #0 = $b
/*3751*/      OPC_RecordChild1, // #1 = $c
/*3752*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::OR_3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (OR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3760*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::SDIV),// ->3773
/*3763*/      OPC_RecordChild0, // #0 = $b
/*3764*/      OPC_RecordChild1, // #1 = $c
/*3765*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::DIVS_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (DIVS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3773*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::UDIV),// ->3786
/*3776*/      OPC_RecordChild0, // #0 = $b
/*3777*/      OPC_RecordChild1, // #1 = $c
/*3778*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::DIVU_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (DIVU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3786*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::SREM),// ->3799
/*3789*/      OPC_RecordChild0, // #0 = $b
/*3790*/      OPC_RecordChild1, // #1 = $c
/*3791*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::REMS_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (REMS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3799*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::UREM),// ->3812
/*3802*/      OPC_RecordChild0, // #0 = $b
/*3803*/      OPC_RecordChild1, // #1 = $c
/*3804*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::REMU_l3r), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (urem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (REMU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3812*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::BSWAP),// ->3823
/*3815*/      OPC_RecordChild0, // #0 = $src
/*3816*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::BYTEREV_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bswap:i32 GRRegs:i32:$src) - Complexity = 3
              // Dst: (BYTEREV_l2r:i32 GRRegs:i32:$src)
/*3823*/    /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTLZ),// ->3834
/*3826*/      OPC_RecordChild0, // #0 = $src
/*3827*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::CLZ_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GRRegs:i32:$src) - Complexity = 3
              // Dst: (CLZ_l2r:i32 GRRegs:i32:$src)
/*3834*/    /*SwitchOpcode*/ 49, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3886
/*3837*/      OPC_RecordChild0, // #0 = $b
/*3838*/      OPC_MoveChild1,
/*3839*/      OPC_Scope, 14, /*->3855*/ // 3 children in Scope
/*3841*/        OPC_CheckValueType, MVT::i1,
/*3843*/        OPC_MoveParent,
/*3844*/        OPC_EmitInteger, MVT::i32, 1, 
/*3847*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sext_inreg:i32 GRRegs:i32:$b, i1:Other) - Complexity = 3
                // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 1:i32)
/*3855*/      /*Scope*/ 14, /*->3870*/
/*3856*/        OPC_CheckValueType, MVT::i8,
/*3858*/        OPC_MoveParent,
/*3859*/        OPC_EmitInteger, MVT::i32, 8, 
/*3862*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sext_inreg:i32 GRRegs:i32:$b, i8:Other) - Complexity = 3
                // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 8:i32)
/*3870*/      /*Scope*/ 14, /*->3885*/
/*3871*/        OPC_CheckValueType, MVT::i16,
/*3873*/        OPC_MoveParent,
/*3874*/        OPC_EmitInteger, MVT::i32, 16, 
/*3877*/        OPC_MorphNodeTo1, TARGET_VAL(XCore::SEXT_rus), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sext_inreg:i32 GRRegs:i32:$b, i16:Other) - Complexity = 3
                // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 16:i32)
/*3885*/      0, /*End of Scope*/
/*3886*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->3903
/*3889*/      OPC_RecordNode, // #0 = 'br' chained node
/*3890*/      OPC_RecordChild1, // #1 = $addr
/*3891*/      OPC_MoveChild1,
/*3892*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3895*/      OPC_MoveParent,
/*3896*/      OPC_EmitMergeInputChains1_0,
/*3897*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::BRFU_lu6), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$addr) - Complexity = 3
              // Dst: (BRFU_lu6 (bb:Other):$addr)
/*3903*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::CTTZ),// ->3921
/*3906*/      OPC_RecordChild0, // #0 = $src
/*3907*/      OPC_EmitNode1, TARGET_VAL(XCore::BITREV_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*3914*/      OPC_MorphNodeTo1, TARGET_VAL(XCore::CLZ_l2r), 0,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (cttz:i32 GRRegs:i32:$src) - Complexity = 3
              // Dst: (CLZ_l2r:i32 (BITREV_l2r:i32 GRRegs:i32:$src))
/*3921*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::TRAP),// ->3942
/*3924*/      OPC_RecordNode, // #0 = 'trap' chained node
/*3925*/      OPC_EmitMergeInputChains1_0,
/*3926*/      OPC_EmitInteger, MVT::i32, 0, 
/*3929*/      OPC_EmitNode1, TARGET_VAL(XCore::LDC_ru6), 0,
                  MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3936*/      OPC_MorphNodeTo0, TARGET_VAL(XCore::ECALLF_1r), 0|OPFL_Chain,
                  1/*#Ops*/, 2, 
              // Src: (trap) - Complexity = 3
              // Dst: (ECALLF_1r (LDC_ru6:i32 0:i32))
/*3942*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 3944 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 65
  // #OPC_RecordNode                     = 22
  // #OPC_RecordChild                    = 201
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 4
  // #OPC_MoveChild                      = 78
  // #OPC_MoveParent                     = 153
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 1
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 97
  // #OPC_CheckOpcode                    = 60
  // #OPC_SwitchOpcode                   = 7
  // #OPC_CheckType                      = 46
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 57
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 80
  // #OPC_CheckCondCode                  = 33
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 4
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 1
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 36
  // #OPC_EmitMergeInputChains           = 110
  // #OPC_EmitCopyToReg                  = 2
  // #OPC_EmitNode                       = 31
  // #OPC_EmitNodeXForm                  = 8
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 197

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_immUs
    auto *N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() <= 11;

  }
  case 1: { 
    // Predicate_immUs4
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

  }
  case 2: { 
    // Predicate_immUsNeg
    auto *N = cast<ConstantSDNode>(Node);

  return -((uint32_t)N->getZExtValue()) <= 11;

  }
  case 3: { 
    // Predicate_immUs4Neg
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

  }
  case 4: { 
    // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 5: { 
    // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { 
    // Predicate_sextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { 
    // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { 
    // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { 
    // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 10: { 
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 11: { 
    // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 12: { 
    // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 13: { 
    // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { 
    // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { 
    // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 16: { 
    // Predicate_immBpwSubBitp
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 24 && value <= 31)
          || value == 16
          || value == 8
          || value == 0;

  }
  case 17: { 
    // Predicate_immBitp
    auto *N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

  }
  case 18: { 
    // Predicate_immU6
    auto *N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 6);

  }
  case 19: { 
    // Predicate_immU16
    auto *N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 16);

  }
  case 20: { 
    // Predicate_immMskBitp
    auto *N = cast<ConstantSDNode>(Node);
 return immMskBitp(N); 
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
    Result.resize(NextRes+2);
  return SelectADDRspii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // div4_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4, SDLoc(N));

  }
  case 1: {  // neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value, SDLoc(N));

  }
  case 2: {  // div4neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4, SDLoc(N));

  }
  case 3: {  // bpwsub_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32-imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(32 - value, SDLoc(N));

  }
  case 4: {  // msksize_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - countLeadingZeros((uint32_t)N->getZExtValue()),
                   SDLoc(N));

  }
  }
}

