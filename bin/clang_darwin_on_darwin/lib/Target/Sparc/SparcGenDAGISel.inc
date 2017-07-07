/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Sparc target                              *|
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
/*0*/       OPC_SwitchOpcode /*70 cases */, 39|128,4/*551*/, TARGET_VAL(ISD::STORE),// ->556
/*5*/         OPC_RecordMemRef,
/*6*/         OPC_RecordNode, // #0 = 'st' chained node
/*7*/         OPC_Scope, 90, /*->99*/ // 2 children in Scope
/*9*/           OPC_CheckChild1Integer, 0, 
/*11*/          OPC_Scope, 41, /*->54*/ // 2 children in Scope
/*13*/            OPC_CheckChild1Type, MVT::i32,
/*15*/            OPC_RecordChild2, // #1 = $dst
/*16*/            OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*18*/            OPC_CheckPredicate, 1, // Predicate_store
/*20*/            OPC_Scope, 15, /*->37*/ // 2 children in Scope
/*22*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*25*/              OPC_EmitMergeInputChains1_0,
/*26*/              OPC_EmitRegister, MVT::i32, SP::G0,
/*29*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i32, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STrr ADDRrr:iPTR:$dst, G0:i32)
/*37*/            /*Scope*/ 15, /*->53*/
/*38*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*41*/              OPC_EmitMergeInputChains1_0,
/*42*/              OPC_EmitRegister, MVT::i32, SP::G0,
/*45*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i32, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STri ADDRri:iPTR:$dst, G0:i32)
/*53*/            0, /*End of Scope*/
/*54*/          /*Scope*/ 43, /*->98*/
/*55*/            OPC_CheckChild1Type, MVT::i64,
/*57*/            OPC_RecordChild2, // #1 = $dst
/*58*/            OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*60*/            OPC_CheckPredicate, 1, // Predicate_store
/*62*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*64*/            OPC_Scope, 15, /*->81*/ // 2 children in Scope
/*66*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*69*/              OPC_EmitMergeInputChains1_0,
/*70*/              OPC_EmitRegister, MVT::i64, SP::G0,
/*73*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i64, ADDRrr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXrr ADDRrr:iPTR:$dst, G0:i64)
/*81*/            /*Scope*/ 15, /*->97*/
/*82*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*85*/              OPC_EmitMergeInputChains1_0,
/*86*/              OPC_EmitRegister, MVT::i64, SP::G0,
/*89*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:i64, ADDRri:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXri ADDRri:iPTR:$dst, G0:i64)
/*97*/            0, /*End of Scope*/
/*98*/          0, /*End of Scope*/
/*99*/        /*Scope*/ 70|128,3/*454*/, /*->555*/
/*101*/         OPC_RecordChild1, // #1 = $rd
/*102*/         OPC_Scope, 3|128,1/*131*/, /*->236*/ // 6 children in Scope
/*105*/           OPC_CheckChild1Type, MVT::i32,
/*107*/           OPC_RecordChild2, // #2 = $addr
/*108*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*110*/           OPC_Scope, 66, /*->178*/ // 2 children in Scope
/*112*/             OPC_CheckPredicate, 2, // Predicate_truncstore
/*114*/             OPC_Scope, 30, /*->146*/ // 2 children in Scope
/*116*/               OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*118*/               OPC_Scope, 12, /*->132*/ // 2 children in Scope
/*120*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*123*/                 OPC_EmitMergeInputChains1_0,
/*124*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*132*/               /*Scope*/ 12, /*->145*/
/*133*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*136*/                 OPC_EmitMergeInputChains1_0,
/*137*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:iPTR:$addr, i32:i32:$rd)
/*145*/               0, /*End of Scope*/
/*146*/             /*Scope*/ 30, /*->177*/
/*147*/               OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*149*/               OPC_Scope, 12, /*->163*/ // 2 children in Scope
/*151*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*154*/                 OPC_EmitMergeInputChains1_0,
/*155*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*163*/               /*Scope*/ 12, /*->176*/
/*164*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*167*/                 OPC_EmitMergeInputChains1_0,
/*168*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:iPTR:$addr, i32:i32:$rd)
/*176*/               0, /*End of Scope*/
/*177*/             0, /*End of Scope*/
/*178*/           /*Scope*/ 56, /*->235*/
/*179*/             OPC_CheckPredicate, 1, // Predicate_store
/*181*/             OPC_Scope, 12, /*->195*/ // 4 children in Scope
/*183*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*186*/               OPC_EmitMergeInputChains1_0,
/*187*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*195*/             /*Scope*/ 12, /*->208*/
/*196*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*199*/               OPC_EmitMergeInputChains1_0,
/*200*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STri ADDRri:iPTR:$addr, i32:i32:$rd)
/*208*/             /*Scope*/ 12, /*->221*/
/*209*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*212*/               OPC_EmitMergeInputChains1_0,
/*213*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STCrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STCrr ADDRrr:iPTR:$addr, i32:i32:$rd)
/*221*/             /*Scope*/ 12, /*->234*/
/*222*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*225*/               OPC_EmitMergeInputChains1_0,
/*226*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STCri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STCri ADDRri:iPTR:$addr, i32:i32:$rd)
/*234*/             0, /*End of Scope*/
/*235*/           0, /*End of Scope*/
/*236*/         /*Scope*/ 61, /*->298*/
/*237*/           OPC_CheckChild1Type, MVT::v2i32,
/*239*/           OPC_RecordChild2, // #2 = $addr
/*240*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*242*/           OPC_CheckPredicate, 1, // Predicate_store
/*244*/           OPC_Scope, 12, /*->258*/ // 4 children in Scope
/*246*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*249*/             OPC_EmitMergeInputChains1_0,
/*250*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDrr ADDRrr:iPTR:$addr, v2i32:v2i32:$rd)
/*258*/           /*Scope*/ 12, /*->271*/
/*259*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*262*/             OPC_EmitMergeInputChains1_0,
/*263*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDri ADDRri:iPTR:$addr, v2i32:v2i32:$rd)
/*271*/           /*Scope*/ 12, /*->284*/
/*272*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*275*/             OPC_EmitMergeInputChains1_0,
/*276*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDCrr ADDRrr:iPTR:$addr, v2i32:v2i32:$rd)
/*284*/           /*Scope*/ 12, /*->297*/
/*285*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*288*/             OPC_EmitMergeInputChains1_0,
/*289*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDCri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:v2i32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDCri ADDRri:iPTR:$addr, v2i32:v2i32:$rd)
/*297*/           0, /*End of Scope*/
/*298*/         /*Scope*/ 35, /*->334*/
/*299*/           OPC_CheckChild1Type, MVT::f32,
/*301*/           OPC_RecordChild2, // #2 = $addr
/*302*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*304*/           OPC_CheckPredicate, 1, // Predicate_store
/*306*/           OPC_Scope, 12, /*->320*/ // 2 children in Scope
/*308*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*311*/             OPC_EmitMergeInputChains1_0,
/*312*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:f32:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFrr ADDRrr:iPTR:$addr, f32:f32:$rd)
/*320*/           /*Scope*/ 12, /*->333*/
/*321*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*324*/             OPC_EmitMergeInputChains1_0,
/*325*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:f32:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFri ADDRri:iPTR:$addr, f32:f32:$rd)
/*333*/           0, /*End of Scope*/
/*334*/         /*Scope*/ 35, /*->370*/
/*335*/           OPC_CheckChild1Type, MVT::f64,
/*337*/           OPC_RecordChild2, // #2 = $addr
/*338*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*340*/           OPC_CheckPredicate, 1, // Predicate_store
/*342*/           OPC_Scope, 12, /*->356*/ // 2 children in Scope
/*344*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*347*/             OPC_EmitMergeInputChains1_0,
/*348*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:f64:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFrr ADDRrr:iPTR:$addr, f64:f64:$rd)
/*356*/           /*Scope*/ 12, /*->369*/
/*357*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*360*/             OPC_EmitMergeInputChains1_0,
/*361*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:f64:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFri ADDRri:iPTR:$addr, f64:f64:$rd)
/*369*/           0, /*End of Scope*/
/*370*/         /*Scope*/ 37, /*->408*/
/*371*/           OPC_CheckChild1Type, MVT::f128,
/*373*/           OPC_RecordChild2, // #2 = $addr
/*374*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*376*/           OPC_CheckPredicate, 1, // Predicate_store
/*378*/           OPC_CheckPatternPredicate, 1, // (Subtarget->hasHardQuad()) && (Subtarget->isV9())
/*380*/           OPC_Scope, 12, /*->394*/ // 2 children in Scope
/*382*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*385*/             OPC_EmitMergeInputChains1_0,
/*386*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:f128:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFrr ADDRrr:iPTR:$addr, f128:f128:$rd)
/*394*/           /*Scope*/ 12, /*->407*/
/*395*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*398*/             OPC_EmitMergeInputChains1_0,
/*399*/             OPC_MorphNodeTo0, TARGET_VAL(SP::STQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:f128:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFri ADDRri:iPTR:$addr, f128:f128:$rd)
/*407*/           0, /*End of Scope*/
/*408*/         /*Scope*/ 16|128,1/*144*/, /*->554*/
/*410*/           OPC_CheckChild1Type, MVT::i64,
/*412*/           OPC_RecordChild2, // #2 = $addr
/*413*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*415*/           OPC_Scope, 32, /*->449*/ // 2 children in Scope
/*417*/             OPC_CheckPredicate, 1, // Predicate_store
/*419*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*421*/             OPC_Scope, 12, /*->435*/ // 2 children in Scope
/*423*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*426*/               OPC_EmitMergeInputChains1_0,
/*427*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$rd, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXrr ADDRrr:iPTR:$addr, i64:i64:$rd)
/*435*/             /*Scope*/ 12, /*->448*/
/*436*/               OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*439*/               OPC_EmitMergeInputChains1_0,
/*440*/               OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:i64:$rd, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXri ADDRri:iPTR:$addr, i64:i64:$rd)
/*448*/             0, /*End of Scope*/
/*449*/           /*Scope*/ 103, /*->553*/
/*450*/             OPC_CheckPredicate, 2, // Predicate_truncstore
/*452*/             OPC_Scope, 32, /*->486*/ // 3 children in Scope
/*454*/               OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*456*/               OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*458*/               OPC_Scope, 12, /*->472*/ // 2 children in Scope
/*460*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*463*/                 OPC_EmitMergeInputChains1_0,
/*464*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*472*/               /*Scope*/ 12, /*->485*/
/*473*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*476*/                 OPC_EmitMergeInputChains1_0,
/*477*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:iPTR:$addr, ?:i64:$src)
/*485*/               0, /*End of Scope*/
/*486*/             /*Scope*/ 32, /*->519*/
/*487*/               OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*489*/               OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*491*/               OPC_Scope, 12, /*->505*/ // 2 children in Scope
/*493*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*496*/                 OPC_EmitMergeInputChains1_0,
/*497*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*505*/               /*Scope*/ 12, /*->518*/
/*506*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*509*/                 OPC_EmitMergeInputChains1_0,
/*510*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:iPTR:$addr, ?:i64:$src)
/*518*/               0, /*End of Scope*/
/*519*/             /*Scope*/ 32, /*->552*/
/*520*/               OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*522*/               OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*524*/               OPC_Scope, 12, /*->538*/ // 2 children in Scope
/*526*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*529*/                 OPC_EmitMergeInputChains1_0,
/*530*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*538*/               /*Scope*/ 12, /*->551*/
/*539*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*542*/                 OPC_EmitMergeInputChains1_0,
/*543*/                 OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STri ADDRri:iPTR:$addr, ?:i64:$src)
/*551*/               0, /*End of Scope*/
/*552*/             0, /*End of Scope*/
/*553*/           0, /*End of Scope*/
/*554*/         0, /*End of Scope*/
/*555*/       0, /*End of Scope*/
/*556*/     /*SwitchOpcode*/ 39, TARGET_VAL(SPISD::TLS_LD),// ->598
/*559*/       OPC_RecordChild0, // #0 = $addr
/*560*/       OPC_RecordChild1, // #1 = $sym
/*561*/       OPC_MoveChild1,
/*562*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*565*/       OPC_MoveParent,
/*566*/       OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->581
/*569*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*572*/         OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_LDrr), 0,
                    MVT::i32, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:i32 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym) - Complexity = 15
                // Dst: (TLS_LDrr:i32 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym)
/*581*/       /*SwitchType*/ 14, MVT::i64,// ->597
/*583*/         OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*585*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*588*/         OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_LDXrr), 0,
                    MVT::i64, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:i64 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym) - Complexity = 15
                // Dst: (TLS_LDXrr:i64 ADDRrr:iPTR:$addr, (tglobaltlsaddr:iPTR):$sym)
/*597*/       0, // EndSwitchType
/*598*/     /*SwitchOpcode*/ 17|128,3/*401*/, TARGET_VAL(ISD::ADD),// ->1003
/*602*/       OPC_Scope, 125, /*->729*/ // 4 children in Scope
/*604*/         OPC_MoveChild0,
/*605*/         OPC_SwitchOpcode /*2 cases */, 58, TARGET_VAL(SPISD::Hi),// ->667
/*609*/           OPC_RecordChild0, // #0 = $in1
/*610*/           OPC_MoveChild0,
/*611*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*614*/           OPC_MoveParent,
/*615*/           OPC_MoveParent,
/*616*/           OPC_MoveChild1,
/*617*/           OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*620*/           OPC_RecordChild0, // #1 = $in2
/*621*/           OPC_MoveChild0,
/*622*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*625*/           OPC_MoveParent,
/*626*/           OPC_MoveParent,
/*627*/           OPC_Scope, 17, /*->646*/ // 2 children in Scope
/*629*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*631*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*638*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (add:iPTR (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1), (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2)) - Complexity = 15
                    // Dst: (ADDri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*646*/           /*Scope*/ 19, /*->666*/
/*647*/             OPC_CheckType, MVT::i64,
/*649*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*651*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*658*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (add:i64 (SPhi:i64 (tglobaltlsaddr:i64):$in1), (SPlo:i64 (tglobaltlsaddr:i64):$in2)) - Complexity = 15
                    // Dst: (ADDXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*666*/           0, /*End of Scope*/
/*667*/         /*SwitchOpcode*/ 58, TARGET_VAL(SPISD::Lo),// ->728
/*670*/           OPC_RecordChild0, // #0 = $in2
/*671*/           OPC_MoveChild0,
/*672*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*675*/           OPC_MoveParent,
/*676*/           OPC_MoveParent,
/*677*/           OPC_MoveChild1,
/*678*/           OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*681*/           OPC_RecordChild0, // #1 = $in1
/*682*/           OPC_MoveChild0,
/*683*/           OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*686*/           OPC_MoveParent,
/*687*/           OPC_MoveParent,
/*688*/           OPC_Scope, 17, /*->707*/ // 2 children in Scope
/*690*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*692*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*699*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2), (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1)) - Complexity = 15
                    // Dst: (ADDri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*707*/           /*Scope*/ 19, /*->727*/
/*708*/             OPC_CheckType, MVT::i64,
/*710*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*712*/             OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*719*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (add:i64 (SPlo:i64 (tglobaltlsaddr:i64):$in2), (SPhi:i64 (tglobaltlsaddr:i64):$in1)) - Complexity = 15
                    // Dst: (ADDXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*727*/           0, /*End of Scope*/
/*728*/         0, // EndSwitchOpcode
/*729*/       /*Scope*/ 102, /*->832*/
/*730*/         OPC_RecordChild0, // #0 = $r
/*731*/         OPC_MoveChild1,
/*732*/         OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*735*/         OPC_RecordChild0, // #1 = $in
/*736*/         OPC_MoveChild0,
/*737*/         OPC_SwitchOpcode /*3 cases */, 28, TARGET_VAL(ISD::TargetGlobalAddress),// ->769
/*741*/           OPC_MoveParent,
/*742*/           OPC_MoveParent,
/*743*/           OPC_Scope, 10, /*->755*/ // 2 children in Scope
/*745*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*747*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tglobaladdr:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
/*755*/           /*Scope*/ 12, /*->768*/
/*756*/             OPC_CheckType, MVT::i64,
/*758*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*760*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tglobaladdr:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tglobaladdr:i64):$in)
/*768*/           0, /*End of Scope*/
/*769*/         /*SwitchOpcode*/ 28, TARGET_VAL(ISD::TargetConstantPool),// ->800
/*772*/           OPC_MoveParent,
/*773*/           OPC_MoveParent,
/*774*/           OPC_Scope, 10, /*->786*/ // 2 children in Scope
/*776*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*778*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tconstpool:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
/*786*/           /*Scope*/ 12, /*->799*/
/*787*/             OPC_CheckType, MVT::i64,
/*789*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*791*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tconstpool:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tconstpool:i64):$in)
/*799*/           0, /*End of Scope*/
/*800*/         /*SwitchOpcode*/ 28, TARGET_VAL(ISD::TargetBlockAddress),// ->831
/*803*/           OPC_MoveParent,
/*804*/           OPC_MoveParent,
/*805*/           OPC_Scope, 10, /*->817*/ // 2 children in Scope
/*807*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*809*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tblockaddress:iPTR):$in)) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
/*817*/           /*Scope*/ 12, /*->830*/
/*818*/             OPC_CheckType, MVT::i64,
/*820*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*822*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 iPTR:i64:$r, (SPlo:i64 (tblockaddress:i64):$in)) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tblockaddress:i64):$in)
/*830*/           0, /*End of Scope*/
/*831*/         0, // EndSwitchOpcode
/*832*/       /*Scope*/ 104, /*->937*/
/*833*/         OPC_MoveChild0,
/*834*/         OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*837*/         OPC_RecordChild0, // #0 = $in
/*838*/         OPC_MoveChild0,
/*839*/         OPC_SwitchOpcode /*3 cases */, 29, TARGET_VAL(ISD::TargetGlobalAddress),// ->872
/*843*/           OPC_MoveParent,
/*844*/           OPC_MoveParent,
/*845*/           OPC_RecordChild1, // #1 = $r
/*846*/           OPC_Scope, 10, /*->858*/ // 2 children in Scope
/*848*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*850*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tglobaladdr:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
/*858*/           /*Scope*/ 12, /*->871*/
/*859*/             OPC_CheckType, MVT::i64,
/*861*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*863*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tglobaladdr:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tglobaladdr:i64):$in)
/*871*/           0, /*End of Scope*/
/*872*/         /*SwitchOpcode*/ 29, TARGET_VAL(ISD::TargetConstantPool),// ->904
/*875*/           OPC_MoveParent,
/*876*/           OPC_MoveParent,
/*877*/           OPC_RecordChild1, // #1 = $r
/*878*/           OPC_Scope, 10, /*->890*/ // 2 children in Scope
/*880*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*882*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tconstpool:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
/*890*/           /*Scope*/ 12, /*->903*/
/*891*/             OPC_CheckType, MVT::i64,
/*893*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*895*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tconstpool:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tconstpool:i64):$in)
/*903*/           0, /*End of Scope*/
/*904*/         /*SwitchOpcode*/ 29, TARGET_VAL(ISD::TargetBlockAddress),// ->936
/*907*/           OPC_MoveParent,
/*908*/           OPC_MoveParent,
/*909*/           OPC_RecordChild1, // #1 = $r
/*910*/           OPC_Scope, 10, /*->922*/ // 2 children in Scope
/*912*/             OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*914*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:iPTR (SPlo:iPTR (tblockaddress:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                    // Dst: (ADDri:iPTR ?:iPTR:$r, (tblockaddress:i32):$in)
/*922*/           /*Scope*/ 12, /*->935*/
/*923*/             OPC_CheckType, MVT::i64,
/*925*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*927*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (SPlo:i64 (tblockaddress:i64):$in), iPTR:i64:$r) - Complexity = 9
                    // Dst: (ADDXri:i64 ?:i64:$r, (tblockaddress:i64):$in)
/*935*/           0, /*End of Scope*/
/*936*/         0, // EndSwitchOpcode
/*937*/       /*Scope*/ 64, /*->1002*/
/*938*/         OPC_RecordChild0, // #0 = $rs1
/*939*/         OPC_RecordChild1, // #1 = $simm13
/*940*/         OPC_Scope, 35, /*->977*/ // 3 children in Scope
/*942*/           OPC_MoveChild1,
/*943*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*946*/           OPC_CheckPredicate, 6, // Predicate_simm13
/*948*/           OPC_MoveParent,
/*949*/           OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->962
/*952*/             OPC_EmitConvertToTarget, 1,
/*954*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*962*/           /*SwitchType*/ 12, MVT::i64,// ->976
/*964*/             OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*966*/             OPC_EmitConvertToTarget, 1,
/*968*/             OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*976*/           0, // EndSwitchType
/*977*/         /*Scope*/ 10, /*->988*/
/*978*/           OPC_CheckType, MVT::i32,
/*980*/           OPC_MorphNodeTo1, TARGET_VAL(SP::ADDrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ADDrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*988*/         /*Scope*/ 12, /*->1001*/
/*989*/           OPC_CheckType, MVT::i64,
/*991*/           OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*993*/           OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ADDXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*1001*/        0, /*End of Scope*/
/*1002*/      0, /*End of Scope*/
/*1003*/    /*SwitchOpcode*/ 99|128,2/*355*/, TARGET_VAL(ISD::XOR),// ->1362
/*1007*/      OPC_Scope, 65|128,1/*193*/, /*->1203*/ // 4 children in Scope
/*1010*/        OPC_MoveChild0,
/*1011*/        OPC_SwitchOpcode /*3 cases */, 58, TARGET_VAL(SPISD::Hi),// ->1073
/*1015*/          OPC_RecordChild0, // #0 = $in1
/*1016*/          OPC_MoveChild0,
/*1017*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1020*/          OPC_MoveParent,
/*1021*/          OPC_MoveParent,
/*1022*/          OPC_MoveChild1,
/*1023*/          OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*1026*/          OPC_RecordChild0, // #1 = $in2
/*1027*/          OPC_MoveChild0,
/*1028*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1031*/          OPC_MoveParent,
/*1032*/          OPC_MoveParent,
/*1033*/          OPC_Scope, 17, /*->1052*/ // 2 children in Scope
/*1035*/            OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*1037*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*1044*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:iPTR (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1), (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2)) - Complexity = 15
                    // Dst: (XORri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*1052*/          /*Scope*/ 19, /*->1072*/
/*1053*/            OPC_CheckType, MVT::i64,
/*1055*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1057*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*1064*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:i64 (SPhi:i64 (tglobaltlsaddr:i64):$in1), (SPlo:i64 (tglobaltlsaddr:i64):$in2)) - Complexity = 15
                    // Dst: (XORXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*1072*/          0, /*End of Scope*/
/*1073*/        /*SwitchOpcode*/ 58, TARGET_VAL(SPISD::Lo),// ->1134
/*1076*/          OPC_RecordChild0, // #0 = $in2
/*1077*/          OPC_MoveChild0,
/*1078*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1081*/          OPC_MoveParent,
/*1082*/          OPC_MoveParent,
/*1083*/          OPC_MoveChild1,
/*1084*/          OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*1087*/          OPC_RecordChild0, // #1 = $in1
/*1088*/          OPC_MoveChild0,
/*1089*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1092*/          OPC_MoveParent,
/*1093*/          OPC_MoveParent,
/*1094*/          OPC_Scope, 17, /*->1113*/ // 2 children in Scope
/*1096*/            OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*1098*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*1105*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:iPTR (SPlo:iPTR (tglobaltlsaddr:iPTR):$in2), (SPhi:iPTR (tglobaltlsaddr:iPTR):$in1)) - Complexity = 15
                    // Dst: (XORri:iPTR (SETHIi:i32 (tglobaltlsaddr:i32):$in1), (tglobaltlsaddr:i32):$in2)
/*1113*/          /*Scope*/ 19, /*->1133*/
/*1114*/            OPC_CheckType, MVT::i64,
/*1116*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1118*/            OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*1125*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:i64 (SPlo:i64 (tglobaltlsaddr:i64):$in2), (SPhi:i64 (tglobaltlsaddr:i64):$in1)) - Complexity = 15
                    // Dst: (XORXri:i64 (SETHIXi:i64 (tglobaltlsaddr:i64):$in1), (tglobaltlsaddr:i64):$in2)
/*1133*/          0, /*End of Scope*/
/*1134*/        /*SwitchOpcode*/ 65, TARGET_VAL(ISD::XOR),// ->1202
/*1137*/          OPC_RecordChild0, // #0 = $rs1
/*1138*/          OPC_Scope, 37, /*->1177*/ // 2 children in Scope
/*1140*/            OPC_RecordChild1, // #1 = $rs2
/*1141*/            OPC_MoveParent,
/*1142*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1153*/            OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->1164
/*1156*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:i32 (xor:i32 i32:i32:$rs1, i32:i32:$rs2), -1:i32) - Complexity = 11
                      // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1164*/            /*SwitchType*/ 10, MVT::i64,// ->1176
/*1166*/              OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1168*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                          MVT::i64, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:i64 (xor:i64 i64:i64:$b, i64:i64:$c), -1:i64) - Complexity = 11
                      // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1176*/            0, // EndSwitchType
/*1177*/          /*Scope*/ 23, /*->1201*/
/*1178*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1189*/            OPC_MoveParent,
/*1190*/            OPC_RecordChild1, // #1 = $rs2
/*1191*/            OPC_CheckType, MVT::i32,
/*1193*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rs1, -1:i32), i32:i32:$rs2) - Complexity = 11
                    // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1201*/          0, /*End of Scope*/
/*1202*/        0, // EndSwitchOpcode
/*1203*/      /*Scope*/ 28, /*->1232*/
/*1204*/        OPC_RecordChild0, // #0 = $rs2
/*1205*/        OPC_MoveChild1,
/*1206*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1209*/        OPC_RecordChild0, // #1 = $rs1
/*1210*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1221*/        OPC_MoveParent,
/*1222*/        OPC_CheckType, MVT::i32,
/*1224*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (xor:i32 i32:i32:$rs2, (xor:i32 i32:i32:$rs1, -1:i32)) - Complexity = 11
                // Dst: (XNORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1232*/      /*Scope*/ 30, /*->1263*/
/*1233*/        OPC_MoveChild0,
/*1234*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1237*/        OPC_RecordChild0, // #0 = $b
/*1238*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1249*/        OPC_MoveParent,
/*1250*/        OPC_RecordChild1, // #1 = $c
/*1251*/        OPC_CheckType, MVT::i64,
/*1253*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1255*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$c) - Complexity = 11
                // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1263*/      /*Scope*/ 97, /*->1361*/
/*1264*/        OPC_RecordChild0, // #0 = $c
/*1265*/        OPC_Scope, 29, /*->1296*/ // 2 children in Scope
/*1267*/          OPC_MoveChild1,
/*1268*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1271*/          OPC_RecordChild0, // #1 = $b
/*1272*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1283*/          OPC_MoveParent,
/*1284*/          OPC_CheckType, MVT::i64,
/*1286*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1288*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 i64:i64:$c, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                  // Dst: (XNORXrr:i64 i64:i64:$b, i64:i64:$c)
/*1296*/        /*Scope*/ 63, /*->1360*/
/*1297*/          OPC_RecordChild1, // #1 = $simm13
/*1298*/          OPC_Scope, 35, /*->1335*/ // 3 children in Scope
/*1300*/            OPC_MoveChild1,
/*1301*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1304*/            OPC_CheckPredicate, 6, // Predicate_simm13
/*1306*/            OPC_MoveParent,
/*1307*/            OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->1320
/*1310*/              OPC_EmitConvertToTarget, 1,
/*1312*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*1320*/            /*SwitchType*/ 12, MVT::i64,// ->1334
/*1322*/              OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1324*/              OPC_EmitConvertToTarget, 1,
/*1326*/              OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                          MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*1334*/            0, // EndSwitchType
/*1335*/          /*Scope*/ 10, /*->1346*/
/*1336*/            OPC_CheckType, MVT::i32,
/*1338*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                    // Dst: (XORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*1346*/          /*Scope*/ 12, /*->1359*/
/*1347*/            OPC_CheckType, MVT::i64,
/*1349*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1351*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORXrr), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                    // Dst: (XORXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*1359*/          0, /*End of Scope*/
/*1360*/        0, /*End of Scope*/
/*1361*/      0, /*End of Scope*/
/*1362*/    /*SwitchOpcode*/ 39|128,7/*935*/, TARGET_VAL(ISD::LOAD),// ->2301
/*1366*/      OPC_RecordMemRef,
/*1367*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1368*/      OPC_RecordChild1, // #1 = $addr
/*1369*/      OPC_CheckPredicate, 7, // Predicate_unindexedload
/*1371*/      OPC_Scope, 68, /*->1441*/ // 18 children in Scope
/*1373*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*1375*/        OPC_CheckType, MVT::i32,
/*1377*/        OPC_Scope, 30, /*->1409*/ // 2 children in Scope
/*1379*/          OPC_CheckPredicate, 9, // Predicate_sextloadi8
/*1381*/          OPC_Scope, 12, /*->1395*/ // 2 children in Scope
/*1383*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1386*/            OPC_EmitMergeInputChains1_0,
/*1387*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBrr:i32 ADDRrr:iPTR:$addr)
/*1395*/          /*Scope*/ 12, /*->1408*/
/*1396*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1399*/            OPC_EmitMergeInputChains1_0,
/*1400*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBri:i32 ADDRri:iPTR:$addr)
/*1408*/          0, /*End of Scope*/
/*1409*/        /*Scope*/ 30, /*->1440*/
/*1410*/          OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*1412*/          OPC_Scope, 12, /*->1426*/ // 2 children in Scope
/*1414*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1417*/            OPC_EmitMergeInputChains1_0,
/*1418*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHrr:i32 ADDRrr:iPTR:$addr)
/*1426*/          /*Scope*/ 12, /*->1439*/
/*1427*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1430*/            OPC_EmitMergeInputChains1_0,
/*1431*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHri:i32 ADDRri:iPTR:$addr)
/*1439*/          0, /*End of Scope*/
/*1440*/        0, /*End of Scope*/
/*1441*/      /*Scope*/ 68, /*->1510*/
/*1442*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1444*/        OPC_CheckType, MVT::i32,
/*1446*/        OPC_Scope, 30, /*->1478*/ // 2 children in Scope
/*1448*/          OPC_CheckPredicate, 9, // Predicate_zextloadi8
/*1450*/          OPC_Scope, 12, /*->1464*/ // 2 children in Scope
/*1452*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1455*/            OPC_EmitMergeInputChains1_0,
/*1456*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$addr)
/*1464*/          /*Scope*/ 12, /*->1477*/
/*1465*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1468*/            OPC_EmitMergeInputChains1_0,
/*1469*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$addr)
/*1477*/          0, /*End of Scope*/
/*1478*/        /*Scope*/ 30, /*->1509*/
/*1479*/          OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*1481*/          OPC_Scope, 12, /*->1495*/ // 2 children in Scope
/*1483*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1486*/            OPC_EmitMergeInputChains1_0,
/*1487*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$addr)
/*1495*/          /*Scope*/ 12, /*->1508*/
/*1496*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1499*/            OPC_EmitMergeInputChains1_0,
/*1500*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$addr)
/*1508*/          0, /*End of Scope*/
/*1509*/        0, /*End of Scope*/
/*1510*/      /*Scope*/ 58, /*->1569*/
/*1511*/        OPC_CheckPredicate, 12, // Predicate_load
/*1513*/        OPC_CheckType, MVT::i32,
/*1515*/        OPC_Scope, 12, /*->1529*/ // 4 children in Scope
/*1517*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1520*/          OPC_EmitMergeInputChains1_0,
/*1521*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDrr:i32 ADDRrr:iPTR:$addr)
/*1529*/        /*Scope*/ 12, /*->1542*/
/*1530*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1533*/          OPC_EmitMergeInputChains1_0,
/*1534*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDri:i32 ADDRri:iPTR:$addr)
/*1542*/        /*Scope*/ 12, /*->1555*/
/*1543*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1546*/          OPC_EmitMergeInputChains1_0,
/*1547*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDCrr:i32 ADDRrr:iPTR:$addr)
/*1555*/        /*Scope*/ 12, /*->1568*/
/*1556*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1559*/          OPC_EmitMergeInputChains1_0,
/*1560*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDCri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDCri:i32 ADDRri:iPTR:$addr)
/*1568*/        0, /*End of Scope*/
/*1569*/      /*Scope*/ 99, /*->1669*/
/*1570*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1572*/        OPC_CheckType, MVT::i32,
/*1574*/        OPC_Scope, 30, /*->1606*/ // 3 children in Scope
/*1576*/          OPC_CheckPredicate, 14, // Predicate_extloadi1
/*1578*/          OPC_Scope, 12, /*->1592*/ // 2 children in Scope
/*1580*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1583*/            OPC_EmitMergeInputChains1_0,
/*1584*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1592*/          /*Scope*/ 12, /*->1605*/
/*1593*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1596*/            OPC_EmitMergeInputChains1_0,
/*1597*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1605*/          0, /*End of Scope*/
/*1606*/        /*Scope*/ 30, /*->1637*/
/*1607*/          OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1609*/          OPC_Scope, 12, /*->1623*/ // 2 children in Scope
/*1611*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1614*/            OPC_EmitMergeInputChains1_0,
/*1615*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1623*/          /*Scope*/ 12, /*->1636*/
/*1624*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1627*/            OPC_EmitMergeInputChains1_0,
/*1628*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1636*/          0, /*End of Scope*/
/*1637*/        /*Scope*/ 30, /*->1668*/
/*1638*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1640*/          OPC_Scope, 12, /*->1654*/ // 2 children in Scope
/*1642*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1645*/            OPC_EmitMergeInputChains1_0,
/*1646*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*1654*/          /*Scope*/ 12, /*->1667*/
/*1655*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1658*/            OPC_EmitMergeInputChains1_0,
/*1659*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*1667*/          0, /*End of Scope*/
/*1668*/        0, /*End of Scope*/
/*1669*/      /*Scope*/ 34, /*->1704*/
/*1670*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1672*/        OPC_CheckPredicate, 14, // Predicate_zextloadi1
/*1674*/        OPC_CheckType, MVT::i32,
/*1676*/        OPC_Scope, 12, /*->1690*/ // 2 children in Scope
/*1678*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*1681*/          OPC_EmitMergeInputChains1_0,
/*1682*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*1690*/        /*Scope*/ 12, /*->1703*/
/*1691*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*1694*/          OPC_EmitMergeInputChains1_0,
/*1695*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*1703*/        0, /*End of Scope*/
/*1704*/      /*Scope*/ 34, /*->1739*/
/*1705*/        OPC_CheckPredicate, 12, // Predicate_load
/*1707*/        OPC_CheckType, MVT::i64,
/*1709*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1711*/        OPC_Scope, 12, /*->1725*/ // 2 children in Scope
/*1713*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1716*/          OPC_EmitMergeInputChains1_0,
/*1717*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXrr:i64 ADDRrr:iPTR:$addr)
/*1725*/        /*Scope*/ 12, /*->1738*/
/*1726*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1729*/          OPC_EmitMergeInputChains1_0,
/*1730*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXri:i64 ADDRri:iPTR:$addr)
/*1738*/        0, /*End of Scope*/
/*1739*/      /*Scope*/ 36, /*->1776*/
/*1740*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1742*/        OPC_CheckPredicate, 14, // Predicate_zextloadi1
/*1744*/        OPC_CheckType, MVT::i64,
/*1746*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1748*/        OPC_Scope, 12, /*->1762*/ // 2 children in Scope
/*1750*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1753*/          OPC_EmitMergeInputChains1_0,
/*1754*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1762*/        /*Scope*/ 12, /*->1775*/
/*1763*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1766*/          OPC_EmitMergeInputChains1_0,
/*1767*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1775*/        0, /*End of Scope*/
/*1776*/      /*Scope*/ 36, /*->1813*/
/*1777*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1779*/        OPC_CheckPredicate, 14, // Predicate_extloadi1
/*1781*/        OPC_CheckType, MVT::i64,
/*1783*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1785*/        OPC_Scope, 12, /*->1799*/ // 2 children in Scope
/*1787*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1790*/          OPC_EmitMergeInputChains1_0,
/*1791*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1799*/        /*Scope*/ 12, /*->1812*/
/*1800*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1803*/          OPC_EmitMergeInputChains1_0,
/*1804*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1812*/        0, /*End of Scope*/
/*1813*/      /*Scope*/ 36, /*->1850*/
/*1814*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1816*/        OPC_CheckPredicate, 9, // Predicate_zextloadi8
/*1818*/        OPC_CheckType, MVT::i64,
/*1820*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1822*/        OPC_Scope, 12, /*->1836*/ // 2 children in Scope
/*1824*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1827*/          OPC_EmitMergeInputChains1_0,
/*1828*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1836*/        /*Scope*/ 12, /*->1849*/
/*1837*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1840*/          OPC_EmitMergeInputChains1_0,
/*1841*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1849*/        0, /*End of Scope*/
/*1850*/      /*Scope*/ 36, /*->1887*/
/*1851*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1853*/        OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1855*/        OPC_CheckType, MVT::i64,
/*1857*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1859*/        OPC_Scope, 12, /*->1873*/ // 2 children in Scope
/*1861*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*1873*/        /*Scope*/ 12, /*->1886*/
/*1874*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1877*/          OPC_EmitMergeInputChains1_0,
/*1878*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*1886*/        0, /*End of Scope*/
/*1887*/      /*Scope*/ 36, /*->1924*/
/*1888*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*1890*/        OPC_CheckPredicate, 9, // Predicate_sextloadi8
/*1892*/        OPC_CheckType, MVT::i64,
/*1894*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1896*/        OPC_Scope, 12, /*->1910*/ // 2 children in Scope
/*1898*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1901*/          OPC_EmitMergeInputChains1_0,
/*1902*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i64 ADDRrr:iPTR:$addr)
/*1910*/        /*Scope*/ 12, /*->1923*/
/*1911*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1914*/          OPC_EmitMergeInputChains1_0,
/*1915*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i64 ADDRri:iPTR:$addr)
/*1923*/        0, /*End of Scope*/
/*1924*/      /*Scope*/ 36, /*->1961*/
/*1925*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*1927*/        OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*1929*/        OPC_CheckType, MVT::i64,
/*1931*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1933*/        OPC_Scope, 12, /*->1947*/ // 2 children in Scope
/*1935*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1938*/          OPC_EmitMergeInputChains1_0,
/*1939*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1947*/        /*Scope*/ 12, /*->1960*/
/*1948*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1951*/          OPC_EmitMergeInputChains1_0,
/*1952*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1960*/        0, /*End of Scope*/
/*1961*/      /*Scope*/ 36, /*->1998*/
/*1962*/        OPC_CheckPredicate, 13, // Predicate_extload
/*1964*/        OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1966*/        OPC_CheckType, MVT::i64,
/*1968*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*1970*/        OPC_Scope, 12, /*->1984*/ // 2 children in Scope
/*1972*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*1975*/          OPC_EmitMergeInputChains1_0,
/*1976*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*1984*/        /*Scope*/ 12, /*->1997*/
/*1985*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*1988*/          OPC_EmitMergeInputChains1_0,
/*1989*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*1997*/        0, /*End of Scope*/
/*1998*/      /*Scope*/ 36, /*->2035*/
/*1999*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*2001*/        OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*2003*/        OPC_CheckType, MVT::i64,
/*2005*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2007*/        OPC_Scope, 12, /*->2021*/ // 2 children in Scope
/*2009*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2012*/          OPC_EmitMergeInputChains1_0,
/*2013*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i64 ADDRrr:iPTR:$addr)
/*2021*/        /*Scope*/ 12, /*->2034*/
/*2022*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2025*/          OPC_EmitMergeInputChains1_0,
/*2026*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i64 ADDRri:iPTR:$addr)
/*2034*/        0, /*End of Scope*/
/*2035*/      /*Scope*/ 36, /*->2072*/
/*2036*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*2038*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*2040*/        OPC_CheckType, MVT::i64,
/*2042*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2044*/        OPC_Scope, 12, /*->2058*/ // 2 children in Scope
/*2046*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2049*/          OPC_EmitMergeInputChains1_0,
/*2050*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*2058*/        /*Scope*/ 12, /*->2071*/
/*2059*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2062*/          OPC_EmitMergeInputChains1_0,
/*2063*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*2071*/        0, /*End of Scope*/
/*2072*/      /*Scope*/ 36, /*->2109*/
/*2073*/        OPC_CheckPredicate, 13, // Predicate_extload
/*2075*/        OPC_CheckPredicate, 15, // Predicate_extloadi32
/*2077*/        OPC_CheckType, MVT::i64,
/*2079*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2081*/        OPC_Scope, 12, /*->2095*/ // 2 children in Scope
/*2083*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2086*/          OPC_EmitMergeInputChains1_0,
/*2087*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*2095*/        /*Scope*/ 12, /*->2108*/
/*2096*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2099*/          OPC_EmitMergeInputChains1_0,
/*2100*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*2108*/        0, /*End of Scope*/
/*2109*/      /*Scope*/ 36, /*->2146*/
/*2110*/        OPC_CheckPredicate, 8, // Predicate_sextload
/*2112*/        OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*2114*/        OPC_CheckType, MVT::i64,
/*2116*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2118*/        OPC_Scope, 12, /*->2132*/ // 2 children in Scope
/*2120*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2123*/          OPC_EmitMergeInputChains1_0,
/*2124*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWrr:i64 ADDRrr:iPTR:$addr)
/*2132*/        /*Scope*/ 12, /*->2145*/
/*2133*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2136*/          OPC_EmitMergeInputChains1_0,
/*2137*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWri:i64 ADDRri:iPTR:$addr)
/*2145*/        0, /*End of Scope*/
/*2146*/      /*Scope*/ 24|128,1/*152*/, /*->2300*/
/*2148*/        OPC_CheckPredicate, 12, // Predicate_load
/*2150*/        OPC_SwitchType /*4 cases */, 28, MVT::f32,// ->2181
/*2153*/          OPC_Scope, 12, /*->2167*/ // 2 children in Scope
/*2155*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2158*/            OPC_EmitMergeInputChains1_0,
/*2159*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFrr:f32 ADDRrr:iPTR:$addr)
/*2167*/          /*Scope*/ 12, /*->2180*/
/*2168*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2171*/            OPC_EmitMergeInputChains1_0,
/*2172*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFri:f32 ADDRri:iPTR:$addr)
/*2180*/          0, /*End of Scope*/
/*2181*/        /*SwitchType*/ 28, MVT::f64,// ->2211
/*2183*/          OPC_Scope, 12, /*->2197*/ // 2 children in Scope
/*2185*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2188*/            OPC_EmitMergeInputChains1_0,
/*2189*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFrr:f64 ADDRrr:iPTR:$addr)
/*2197*/          /*Scope*/ 12, /*->2210*/
/*2198*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2201*/            OPC_EmitMergeInputChains1_0,
/*2202*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFri:f64 ADDRri:iPTR:$addr)
/*2210*/          0, /*End of Scope*/
/*2211*/        /*SwitchType*/ 30, MVT::f128,// ->2243
/*2213*/          OPC_CheckPatternPredicate, 1, // (Subtarget->hasHardQuad()) && (Subtarget->isV9())
/*2215*/          OPC_Scope, 12, /*->2229*/ // 2 children in Scope
/*2217*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2220*/            OPC_EmitMergeInputChains1_0,
/*2221*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f128 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFrr:f128 ADDRrr:iPTR:$addr)
/*2229*/          /*Scope*/ 12, /*->2242*/
/*2230*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2233*/            OPC_EmitMergeInputChains1_0,
/*2234*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f128 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFri:f128 ADDRri:iPTR:$addr)
/*2242*/          0, /*End of Scope*/
/*2243*/        /*SwitchType*/ 54, MVT::v2i32,// ->2299
/*2245*/          OPC_Scope, 12, /*->2259*/ // 4 children in Scope
/*2247*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2250*/            OPC_EmitMergeInputChains1_0,
/*2251*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDrr:v2i32 ADDRrr:iPTR:$addr)
/*2259*/          /*Scope*/ 12, /*->2272*/
/*2260*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2263*/            OPC_EmitMergeInputChains1_0,
/*2264*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDri:v2i32 ADDRri:iPTR:$addr)
/*2272*/          /*Scope*/ 12, /*->2285*/
/*2273*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*2276*/            OPC_EmitMergeInputChains1_0,
/*2277*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDCrr:v2i32 ADDRrr:iPTR:$addr)
/*2285*/          /*Scope*/ 12, /*->2298*/
/*2286*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*2289*/            OPC_EmitMergeInputChains1_0,
/*2290*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDDCri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDCri:v2i32 ADDRri:iPTR:$addr)
/*2298*/          0, /*End of Scope*/
/*2299*/        0, // EndSwitchType
/*2300*/      0, /*End of Scope*/
/*2301*/    /*SwitchOpcode*/ 38, TARGET_VAL(ISD::ATOMIC_SWAP),// ->2342
/*2304*/      OPC_RecordMemRef,
/*2305*/      OPC_RecordNode, // #0 = 'atomic_swap' chained node
/*2306*/      OPC_RecordChild1, // #1 = $addr
/*2307*/      OPC_RecordChild2, // #2 = $val
/*2308*/      OPC_CheckPredicate, 16, // Predicate_atomic_swap_32
/*2310*/      OPC_CheckType, MVT::i32,
/*2312*/      OPC_Scope, 13, /*->2327*/ // 2 children in Scope
/*2314*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #3 #4
/*2317*/        OPC_EmitMergeInputChains1_0,
/*2318*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SWAPrr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 ADDRrr:iPTR:$addr, i32:i32:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (SWAPrr:i32 ADDRrr:iPTR:$addr, i32:i32:$val)
/*2327*/      /*Scope*/ 13, /*->2341*/
/*2328*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #3 #4
/*2331*/        OPC_EmitMergeInputChains1_0,
/*2332*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SWAPri), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 ADDRri:iPTR:$addr, i32:i32:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (SWAPri:i32 ADDRri:iPTR:$addr, i32:i32:$val)
/*2341*/      0, /*End of Scope*/
/*2342*/    /*SwitchOpcode*/ 8|128,1/*136*/, TARGET_VAL(ISD::ATOMIC_LOAD),// ->2482
/*2346*/      OPC_RecordMemRef,
/*2347*/      OPC_RecordNode, // #0 = 'atomic_load' chained node
/*2348*/      OPC_RecordChild1, // #1 = $src
/*2349*/      OPC_SwitchType /*2 cases */, 95, MVT::i32,// ->2447
/*2352*/        OPC_Scope, 30, /*->2384*/ // 3 children in Scope
/*2354*/          OPC_CheckPredicate, 17, // Predicate_atomic_load_8
/*2356*/          OPC_Scope, 12, /*->2370*/ // 2 children in Scope
/*2358*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2361*/            OPC_EmitMergeInputChains1_0,
/*2362*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_8>> - Complexity = 13
                    // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*2370*/          /*Scope*/ 12, /*->2383*/
/*2371*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2374*/            OPC_EmitMergeInputChains1_0,
/*2375*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_8>> - Complexity = 13
                    // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*2383*/          0, /*End of Scope*/
/*2384*/        /*Scope*/ 30, /*->2415*/
/*2385*/          OPC_CheckPredicate, 18, // Predicate_atomic_load_16
/*2387*/          OPC_Scope, 12, /*->2401*/ // 2 children in Scope
/*2389*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2392*/            OPC_EmitMergeInputChains1_0,
/*2393*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_16>> - Complexity = 13
                    // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*2401*/          /*Scope*/ 12, /*->2414*/
/*2402*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2405*/            OPC_EmitMergeInputChains1_0,
/*2406*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_16>> - Complexity = 13
                    // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*2414*/          0, /*End of Scope*/
/*2415*/        /*Scope*/ 30, /*->2446*/
/*2416*/          OPC_CheckPredicate, 19, // Predicate_atomic_load_32
/*2418*/          OPC_Scope, 12, /*->2432*/ // 2 children in Scope
/*2420*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2423*/            OPC_EmitMergeInputChains1_0,
/*2424*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_32>> - Complexity = 13
                    // Dst: (LDrr:i32 ADDRrr:iPTR:$src)
/*2432*/          /*Scope*/ 12, /*->2445*/
/*2433*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2436*/            OPC_EmitMergeInputChains1_0,
/*2437*/            OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:i32 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_32>> - Complexity = 13
                    // Dst: (LDri:i32 ADDRri:iPTR:$src)
/*2445*/          0, /*End of Scope*/
/*2446*/        0, /*End of Scope*/
/*2447*/      /*SwitchType*/ 32, MVT::i64,// ->2481
/*2449*/        OPC_CheckPredicate, 20, // Predicate_atomic_load_64
/*2451*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2453*/        OPC_Scope, 12, /*->2467*/ // 2 children in Scope
/*2455*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*2458*/          OPC_EmitMergeInputChains1_0,
/*2459*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i64 ADDRrr:iPTR:$src)<<P:Predicate_atomic_load_64>> - Complexity = 13
                  // Dst: (LDXrr:i64 ADDRrr:iPTR:$src)
/*2467*/        /*Scope*/ 12, /*->2480*/
/*2468*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*2471*/          OPC_EmitMergeInputChains1_0,
/*2472*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:i64 ADDRri:iPTR:$src)<<P:Predicate_atomic_load_64>> - Complexity = 13
                  // Dst: (LDXri:i64 ADDRri:iPTR:$src)
/*2480*/        0, /*End of Scope*/
/*2481*/      0, // EndSwitchType
/*2482*/    /*SwitchOpcode*/ 11|128,1/*139*/, TARGET_VAL(ISD::ATOMIC_STORE),// ->2625
/*2486*/      OPC_RecordMemRef,
/*2487*/      OPC_RecordNode, // #0 = 'atomic_store' chained node
/*2488*/      OPC_RecordChild1, // #1 = $dst
/*2489*/      OPC_RecordChild2, // #2 = $val
/*2490*/      OPC_Scope, 97, /*->2589*/ // 2 children in Scope
/*2492*/        OPC_CheckChild2Type, MVT::i32,
/*2494*/        OPC_Scope, 30, /*->2526*/ // 3 children in Scope
/*2496*/          OPC_CheckPredicate, 21, // Predicate_atomic_store_8
/*2498*/          OPC_Scope, 12, /*->2512*/ // 2 children in Scope
/*2500*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2503*/            OPC_EmitMergeInputChains1_0,
/*2504*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:iPTR:$dst, ?:i32:$val)
/*2512*/          /*Scope*/ 12, /*->2525*/
/*2513*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2516*/            OPC_EmitMergeInputChains1_0,
/*2517*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_8>> - Complexity = 13
                    // Dst: (STBri ADDRri:iPTR:$dst, ?:i32:$val)
/*2525*/          0, /*End of Scope*/
/*2526*/        /*Scope*/ 30, /*->2557*/
/*2527*/          OPC_CheckPredicate, 22, // Predicate_atomic_store_16
/*2529*/          OPC_Scope, 12, /*->2543*/ // 2 children in Scope
/*2531*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2534*/            OPC_EmitMergeInputChains1_0,
/*2535*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:iPTR:$dst, ?:i32:$val)
/*2543*/          /*Scope*/ 12, /*->2556*/
/*2544*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2547*/            OPC_EmitMergeInputChains1_0,
/*2548*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_16>> - Complexity = 13
                    // Dst: (STHri ADDRri:iPTR:$dst, ?:i32:$val)
/*2556*/          0, /*End of Scope*/
/*2557*/        /*Scope*/ 30, /*->2588*/
/*2558*/          OPC_CheckPredicate, 16, // Predicate_atomic_store_32
/*2560*/          OPC_Scope, 12, /*->2574*/ // 2 children in Scope
/*2562*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2565*/            OPC_EmitMergeInputChains1_0,
/*2566*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_32>> - Complexity = 13
                    // Dst: (STrr ADDRrr:iPTR:$dst, ?:i32:$val)
/*2574*/          /*Scope*/ 12, /*->2587*/
/*2575*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2578*/            OPC_EmitMergeInputChains1_0,
/*2579*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:iPTR:$dst, i32:i32:$val)<<P:Predicate_atomic_store_32>> - Complexity = 13
                    // Dst: (STri ADDRri:iPTR:$dst, ?:i32:$val)
/*2587*/          0, /*End of Scope*/
/*2588*/        0, /*End of Scope*/
/*2589*/      /*Scope*/ 34, /*->2624*/
/*2590*/        OPC_CheckChild2Type, MVT::i64,
/*2592*/        OPC_CheckPredicate, 23, // Predicate_atomic_store_64
/*2594*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2596*/        OPC_Scope, 12, /*->2610*/ // 2 children in Scope
/*2598*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*2601*/          OPC_EmitMergeInputChains1_0,
/*2602*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRrr:iPTR:$dst, i64:i64:$val)<<P:Predicate_atomic_store_64>> - Complexity = 13
                  // Dst: (STXrr ADDRrr:iPTR:$dst, ?:i64:$val)
/*2610*/        /*Scope*/ 12, /*->2623*/
/*2611*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*2614*/          OPC_EmitMergeInputChains1_0,
/*2615*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRri:iPTR:$dst, i64:i64:$val)<<P:Predicate_atomic_store_64>> - Complexity = 13
                  // Dst: (STXri ADDRri:iPTR:$dst, ?:i64:$val)
/*2623*/        0, /*End of Scope*/
/*2624*/      0, /*End of Scope*/
/*2625*/    /*SwitchOpcode*/ 28, TARGET_VAL(ISD::BRIND),// ->2656
/*2628*/      OPC_RecordNode, // #0 = 'brind' chained node
/*2629*/      OPC_RecordChild1, // #1 = $ptr
/*2630*/      OPC_Scope, 11, /*->2643*/ // 2 children in Scope
/*2632*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*2635*/        OPC_EmitMergeInputChains1_0,
/*2636*/        OPC_MorphNodeTo0, TARGET_VAL(SP::BINDrr), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRrr:iPTR:$ptr) - Complexity = 12
                // Dst: (BINDrr ADDRrr:iPTR:$ptr)
/*2643*/      /*Scope*/ 11, /*->2655*/
/*2644*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*2647*/        OPC_EmitMergeInputChains1_0,
/*2648*/        OPC_MorphNodeTo0, TARGET_VAL(SP::BINDri), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRri:iPTR:$ptr) - Complexity = 12
                // Dst: (BINDri ADDRri:iPTR:$ptr)
/*2655*/      0, /*End of Scope*/
/*2656*/    /*SwitchOpcode*/ 55, TARGET_VAL(SPISD::CALL),// ->2714
/*2659*/      OPC_RecordNode, // #0 = 'call' chained node
/*2660*/      OPC_CaptureGlueInput,
/*2661*/      OPC_RecordChild1, // #1 = $ptr
/*2662*/      OPC_Scope, 11, /*->2675*/ // 3 children in Scope
/*2664*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*2667*/        OPC_EmitMergeInputChains1_0,
/*2668*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CALLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    2/*#Ops*/, 2, 3, 
                // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
                // Dst: (CALLrr ADDRrr:i32:$ptr)
/*2675*/      /*Scope*/ 11, /*->2687*/
/*2676*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*2679*/        OPC_EmitMergeInputChains1_0,
/*2680*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CALLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    2/*#Ops*/, 2, 3, 
                // Src: (call ADDRri:i32:$ptr) - Complexity = 12
                // Dst: (CALLri ADDRri:i32:$ptr)
/*2687*/      /*Scope*/ 25, /*->2713*/
/*2688*/        OPC_MoveChild1,
/*2689*/        OPC_SwitchOpcode /*2 cases */, 8, TARGET_VAL(ISD::TargetGlobalAddress),// ->2701
/*2693*/          OPC_MoveParent,
/*2694*/          OPC_EmitMergeInputChains1_0,
/*2695*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#Ops*/, 1, 
                  // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALL (tglobaladdr:i32):$dst)
/*2701*/        /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetExternalSymbol),// ->2712
/*2704*/          OPC_MoveParent,
/*2705*/          OPC_EmitMergeInputChains1_0,
/*2706*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#Ops*/, 1, 
                  // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (CALL (texternalsym:i32):$dst)
/*2712*/        0, // EndSwitchOpcode
/*2713*/      0, /*End of Scope*/
/*2714*/    /*SwitchOpcode*/ 34, TARGET_VAL(SPISD::EH_SJLJ_SETJMP),// ->2751
/*2717*/      OPC_RecordNode, // #0 = 'SPsjlj_setjmp' chained node
/*2718*/      OPC_RecordChild1, // #1 = $buf
/*2719*/      OPC_CheckType, MVT::i32,
/*2721*/      OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*2723*/      OPC_Scope, 12, /*->2737*/ // 2 children in Scope
/*2725*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$buf #2 #3
/*2728*/        OPC_EmitMergeInputChains1_0,
/*2729*/        OPC_MorphNodeTo1, TARGET_VAL(SP::EH_SJLJ_SETJMP32ri), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_setjmp:i32 ADDRri:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_SETJMP32ri:i32 ADDRri:iPTR:$buf)
/*2737*/      /*Scope*/ 12, /*->2750*/
/*2738*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$buf #2 #3
/*2741*/        OPC_EmitMergeInputChains1_0,
/*2742*/        OPC_MorphNodeTo1, TARGET_VAL(SP::EH_SJLJ_SETJMP32rr), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_setjmp:i32 ADDRrr:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_SETJMP32rr:i32 ADDRrr:iPTR:$buf)
/*2750*/      0, /*End of Scope*/
/*2751*/    /*SwitchOpcode*/ 30, TARGET_VAL(SPISD::EH_SJLJ_LONGJMP),// ->2784
/*2754*/      OPC_RecordNode, // #0 = 'SPsjlj_longjmp' chained node
/*2755*/      OPC_RecordChild1, // #1 = $buf
/*2756*/      OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*2758*/      OPC_Scope, 11, /*->2771*/ // 2 children in Scope
/*2760*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$buf #2 #3
/*2763*/        OPC_EmitMergeInputChains1_0,
/*2764*/        OPC_MorphNodeTo0, TARGET_VAL(SP::EH_SJLJ_LONGJMP32ri), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_longjmp ADDRri:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_LONGJMP32ri ADDRri:iPTR:$buf)
/*2771*/      /*Scope*/ 11, /*->2783*/
/*2772*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$buf #2 #3
/*2775*/        OPC_EmitMergeInputChains1_0,
/*2776*/        OPC_MorphNodeTo0, TARGET_VAL(SP::EH_SJLJ_LONGJMP32rr), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (SPsjlj_longjmp ADDRrr:iPTR:$buf) - Complexity = 12
                // Dst: (EH_SJLJ_LONGJMP32rr ADDRrr:iPTR:$buf)
/*2783*/      0, /*End of Scope*/
/*2784*/    /*SwitchOpcode*/ 48|128,1/*176*/, TARGET_VAL(ISD::AND),// ->2964
/*2788*/      OPC_Scope, 42, /*->2832*/ // 4 children in Scope
/*2790*/        OPC_RecordChild0, // #0 = $rs1
/*2791*/        OPC_MoveChild1,
/*2792*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2795*/        OPC_RecordChild0, // #1 = $rs2
/*2796*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2807*/        OPC_MoveParent,
/*2808*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2819
/*2811*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDNrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rs1, (xor:i32 i32:i32:$rs2, -1:i32)) - Complexity = 11
                  // Dst: (ANDNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2819*/        /*SwitchType*/ 10, MVT::i64,// ->2831
/*2821*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2823*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$b, (xor:i64 i64:i64:$c, -1:i64)) - Complexity = 11
                  // Dst: (ANDXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2831*/        0, // EndSwitchType
/*2832*/      /*Scope*/ 42, /*->2875*/
/*2833*/        OPC_MoveChild0,
/*2834*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2837*/        OPC_RecordChild0, // #0 = $rs2
/*2838*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2849*/        OPC_MoveParent,
/*2850*/        OPC_RecordChild1, // #1 = $rs1
/*2851*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2862
/*2854*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDNrr), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rs2, -1:i32), i32:i32:$rs1) - Complexity = 11
                  // Dst: (ANDNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2862*/        /*SwitchType*/ 10, MVT::i64,// ->2874
/*2864*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2866*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$c, -1:i64), i64:i64:$b) - Complexity = 11
                  // Dst: (ANDXNrr:i64 i64:i64:$b, i64:i64:$c)
/*2874*/        0, // EndSwitchType
/*2875*/      /*Scope*/ 22, /*->2898*/
/*2876*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*2882*/        OPC_RecordChild0, // #0 = $val
/*2883*/        OPC_CheckType, MVT::i64,
/*2885*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2887*/        OPC_EmitInteger, MVT::i32, 0, 
/*2890*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$val, 4294967295:i64) - Complexity = 8
                // Dst: (SRLri:i64 ?:i64:$val, 0:i32)
/*2898*/      /*Scope*/ 64, /*->2963*/
/*2899*/        OPC_RecordChild0, // #0 = $rs1
/*2900*/        OPC_RecordChild1, // #1 = $simm13
/*2901*/        OPC_Scope, 35, /*->2938*/ // 3 children in Scope
/*2903*/          OPC_MoveChild1,
/*2904*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2907*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*2909*/          OPC_MoveParent,
/*2910*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->2923
/*2913*/            OPC_EmitConvertToTarget, 1,
/*2915*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ANDri), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ANDri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*2923*/          /*SwitchType*/ 12, MVT::i64,// ->2937
/*2925*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2927*/            OPC_EmitConvertToTarget, 1,
/*2929*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ANDXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*2937*/          0, // EndSwitchType
/*2938*/        /*Scope*/ 10, /*->2949*/
/*2939*/          OPC_CheckType, MVT::i32,
/*2941*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ANDrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2949*/        /*Scope*/ 12, /*->2962*/
/*2950*/          OPC_CheckType, MVT::i64,
/*2952*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*2954*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ANDXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*2962*/        0, /*End of Scope*/
/*2963*/      0, /*End of Scope*/
/*2964*/    /*SwitchOpcode*/ 25|128,1/*153*/, TARGET_VAL(ISD::OR),// ->3121
/*2968*/      OPC_Scope, 42, /*->3012*/ // 3 children in Scope
/*2970*/        OPC_RecordChild0, // #0 = $rs1
/*2971*/        OPC_MoveChild1,
/*2972*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2975*/        OPC_RecordChild0, // #1 = $rs2
/*2976*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2987*/        OPC_MoveParent,
/*2988*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2999
/*2991*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORNrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$rs1, (xor:i32 i32:i32:$rs2, -1:i32)) - Complexity = 11
                  // Dst: (ORNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*2999*/        /*SwitchType*/ 10, MVT::i64,// ->3011
/*3001*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3003*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 i64:i64:$b, (xor:i64 i64:i64:$c, -1:i64)) - Complexity = 11
                  // Dst: (ORXNrr:i64 i64:i64:$b, i64:i64:$c)
/*3011*/        0, // EndSwitchType
/*3012*/      /*Scope*/ 42, /*->3055*/
/*3013*/        OPC_MoveChild0,
/*3014*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3017*/        OPC_RecordChild0, // #0 = $rs2
/*3018*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3029*/        OPC_MoveParent,
/*3030*/        OPC_RecordChild1, // #1 = $rs1
/*3031*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3042
/*3034*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORNrr), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i32 (xor:i32 i32:i32:$rs2, -1:i32), i32:i32:$rs1) - Complexity = 11
                  // Dst: (ORNrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3042*/        /*SwitchType*/ 10, MVT::i64,// ->3054
/*3044*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3046*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (or:i64 (xor:i64 i64:i64:$c, -1:i64), i64:i64:$b) - Complexity = 11
                  // Dst: (ORXNrr:i64 i64:i64:$b, i64:i64:$c)
/*3054*/        0, // EndSwitchType
/*3055*/      /*Scope*/ 64, /*->3120*/
/*3056*/        OPC_RecordChild0, // #0 = $rs1
/*3057*/        OPC_RecordChild1, // #1 = $simm13
/*3058*/        OPC_Scope, 35, /*->3095*/ // 3 children in Scope
/*3060*/          OPC_MoveChild1,
/*3061*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3064*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3066*/          OPC_MoveParent,
/*3067*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->3080
/*3070*/            OPC_EmitConvertToTarget, 1,
/*3072*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ORri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3080*/          /*SwitchType*/ 12, MVT::i64,// ->3094
/*3082*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3084*/            OPC_EmitConvertToTarget, 1,
/*3086*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ORXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*3094*/          0, // EndSwitchType
/*3095*/        /*Scope*/ 10, /*->3106*/
/*3096*/          OPC_CheckType, MVT::i32,
/*3098*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (ORrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3106*/        /*Scope*/ 12, /*->3119*/
/*3107*/          OPC_CheckType, MVT::i64,
/*3109*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3111*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                  // Dst: (ORXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3119*/        0, /*End of Scope*/
/*3120*/      0, /*End of Scope*/
/*3121*/    /*SwitchOpcode*/ 74|128,1/*202*/, TARGET_VAL(SPISD::SELECT_ICC),// ->3327
/*3125*/      OPC_CaptureGlueInput,
/*3126*/      OPC_RecordChild0, // #0 = $simm11
/*3127*/      OPC_Scope, 51, /*->3180*/ // 2 children in Scope
/*3129*/        OPC_MoveChild0,
/*3130*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3133*/        OPC_CheckPredicate, 24, // Predicate_simm11
/*3135*/        OPC_MoveParent,
/*3136*/        OPC_RecordChild1, // #1 = $f
/*3137*/        OPC_RecordChild2, // #2 = $cond
/*3138*/        OPC_MoveChild2,
/*3139*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3142*/        OPC_MoveParent,
/*3143*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3161
/*3146*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3148*/          OPC_EmitConvertToTarget, 0,
/*3150*/          OPC_EmitConvertToTarget, 2,
/*3152*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVICCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3161*/        /*SwitchType*/ 16, MVT::i64,// ->3179
/*3163*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3165*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3168*/          OPC_EmitConvertToTarget, 2,
/*3170*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVICCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3179*/        0, // EndSwitchType
/*3180*/      /*Scope*/ 16|128,1/*144*/, /*->3326*/
/*3182*/        OPC_RecordChild1, // #1 = $f
/*3183*/        OPC_RecordChild2, // #2 = $cond
/*3184*/        OPC_MoveChild2,
/*3185*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3188*/        OPC_MoveParent,
/*3189*/        OPC_SwitchType /*5 cases */, 28, MVT::i32,// ->3220
/*3192*/          OPC_Scope, 13, /*->3207*/ // 2 children in Scope
/*3194*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3196*/            OPC_EmitConvertToTarget, 2,
/*3198*/            OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (MOVICCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3207*/          /*Scope*/ 11, /*->3219*/
/*3208*/            OPC_EmitConvertToTarget, 2,
/*3210*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_ICC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*3219*/          0, /*End of Scope*/
/*3220*/        /*SwitchType*/ 13, MVT::i64,// ->3235
/*3222*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3224*/          OPC_EmitConvertToTarget, 2,
/*3226*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVICCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3235*/        /*SwitchType*/ 28, MVT::f32,// ->3265
/*3237*/          OPC_Scope, 13, /*->3252*/ // 2 children in Scope
/*3239*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3241*/            OPC_EmitConvertToTarget, 2,
/*3243*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVS_ICC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3252*/          /*Scope*/ 11, /*->3264*/
/*3253*/            OPC_EmitConvertToTarget, 2,
/*3255*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*3264*/          0, /*End of Scope*/
/*3265*/        /*SwitchType*/ 28, MVT::f64,// ->3295
/*3267*/          OPC_Scope, 13, /*->3282*/ // 2 children in Scope
/*3269*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3271*/            OPC_EmitConvertToTarget, 2,
/*3273*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVD_ICC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3282*/          /*Scope*/ 11, /*->3294*/
/*3283*/            OPC_EmitConvertToTarget, 2,
/*3285*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*3294*/          0, /*End of Scope*/
/*3295*/        /*SwitchType*/ 28, MVT::f128,// ->3325
/*3297*/          OPC_Scope, 13, /*->3312*/ // 2 children in Scope
/*3299*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3301*/            OPC_EmitConvertToTarget, 2,
/*3303*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_ICC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVQ_ICC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3312*/          /*Scope*/ 11, /*->3324*/
/*3313*/            OPC_EmitConvertToTarget, 2,
/*3315*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_QFP_ICC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_ICC:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond)
/*3324*/          0, /*End of Scope*/
/*3325*/        0, // EndSwitchType
/*3326*/      0, /*End of Scope*/
/*3327*/    /*SwitchOpcode*/ 74|128,1/*202*/, TARGET_VAL(SPISD::SELECT_FCC),// ->3533
/*3331*/      OPC_CaptureGlueInput,
/*3332*/      OPC_RecordChild0, // #0 = $simm11
/*3333*/      OPC_Scope, 51, /*->3386*/ // 2 children in Scope
/*3335*/        OPC_MoveChild0,
/*3336*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3339*/        OPC_CheckPredicate, 24, // Predicate_simm11
/*3341*/        OPC_MoveParent,
/*3342*/        OPC_RecordChild1, // #1 = $f
/*3343*/        OPC_RecordChild2, // #2 = $cond
/*3344*/        OPC_MoveChild2,
/*3345*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3348*/        OPC_MoveParent,
/*3349*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3367
/*3352*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3354*/          OPC_EmitConvertToTarget, 0,
/*3356*/          OPC_EmitConvertToTarget, 2,
/*3358*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3367*/        /*SwitchType*/ 16, MVT::i64,// ->3385
/*3369*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3371*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3374*/          OPC_EmitConvertToTarget, 2,
/*3376*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3385*/        0, // EndSwitchType
/*3386*/      /*Scope*/ 16|128,1/*144*/, /*->3532*/
/*3388*/        OPC_RecordChild1, // #1 = $f
/*3389*/        OPC_RecordChild2, // #2 = $cond
/*3390*/        OPC_MoveChild2,
/*3391*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3394*/        OPC_MoveParent,
/*3395*/        OPC_SwitchType /*5 cases */, 28, MVT::i32,// ->3426
/*3398*/          OPC_Scope, 13, /*->3413*/ // 2 children in Scope
/*3400*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3402*/            OPC_EmitConvertToTarget, 2,
/*3404*/            OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (MOVFCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3413*/          /*Scope*/ 11, /*->3425*/
/*3414*/            OPC_EmitConvertToTarget, 2,
/*3416*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_FCC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*3425*/          0, /*End of Scope*/
/*3426*/        /*SwitchType*/ 13, MVT::i64,// ->3441
/*3428*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3430*/          OPC_EmitConvertToTarget, 2,
/*3432*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVFCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3441*/        /*SwitchType*/ 28, MVT::f32,// ->3471
/*3443*/          OPC_Scope, 13, /*->3458*/ // 2 children in Scope
/*3445*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3447*/            OPC_EmitConvertToTarget, 2,
/*3449*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVS_FCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3458*/          /*Scope*/ 11, /*->3470*/
/*3459*/            OPC_EmitConvertToTarget, 2,
/*3461*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*3470*/          0, /*End of Scope*/
/*3471*/        /*SwitchType*/ 28, MVT::f64,// ->3501
/*3473*/          OPC_Scope, 13, /*->3488*/ // 2 children in Scope
/*3475*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3477*/            OPC_EmitConvertToTarget, 2,
/*3479*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVD_FCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3488*/          /*Scope*/ 11, /*->3500*/
/*3489*/            OPC_EmitConvertToTarget, 2,
/*3491*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*3500*/          0, /*End of Scope*/
/*3501*/        /*SwitchType*/ 28, MVT::f128,// ->3531
/*3503*/          OPC_Scope, 13, /*->3518*/ // 2 children in Scope
/*3505*/            OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*3507*/            OPC_EmitConvertToTarget, 2,
/*3509*/            OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_FCC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                    // Dst: (FMOVQ_FCC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3518*/          /*Scope*/ 11, /*->3530*/
/*3519*/            OPC_EmitConvertToTarget, 2,
/*3521*/            OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_QFP_FCC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_FCC:f128 f128:f128:$T, f128:f128:$F, (imm:i32):$Cond)
/*3530*/          0, /*End of Scope*/
/*3531*/        0, // EndSwitchType
/*3532*/      0, /*End of Scope*/
/*3533*/    /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(SPISD::SELECT_XCC),// ->3678
/*3537*/      OPC_CaptureGlueInput,
/*3538*/      OPC_RecordChild0, // #0 = $simm11
/*3539*/      OPC_Scope, 51, /*->3592*/ // 2 children in Scope
/*3541*/        OPC_MoveChild0,
/*3542*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3545*/        OPC_CheckPredicate, 24, // Predicate_simm11
/*3547*/        OPC_MoveParent,
/*3548*/        OPC_RecordChild1, // #1 = $f
/*3549*/        OPC_RecordChild2, // #2 = $cond
/*3550*/        OPC_MoveChild2,
/*3551*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3554*/        OPC_MoveParent,
/*3555*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3573
/*3558*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3560*/          OPC_EmitConvertToTarget, 0,
/*3562*/          OPC_EmitConvertToTarget, 2,
/*3564*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:i32 (imm:i32)<<P:Predicate_simm11>>:$simm11, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:i32 (imm:i32):$simm11, i32:i32:$f, (imm:i32):$cond)
/*3573*/        /*SwitchType*/ 16, MVT::i64,// ->3591
/*3575*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3577*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3580*/          OPC_EmitConvertToTarget, 2,
/*3582*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*3591*/        0, // EndSwitchType
/*3592*/      /*Scope*/ 84, /*->3677*/
/*3593*/        OPC_RecordChild1, // #1 = $f
/*3594*/        OPC_RecordChild2, // #2 = $cond
/*3595*/        OPC_MoveChild2,
/*3596*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3599*/        OPC_MoveParent,
/*3600*/        OPC_SwitchType /*5 cases */, 13, MVT::i32,// ->3616
/*3603*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3605*/          OPC_EmitConvertToTarget, 2,
/*3607*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
/*3616*/        /*SwitchType*/ 13, MVT::i64,// ->3631
/*3618*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3620*/          OPC_EmitConvertToTarget, 2,
/*3622*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
/*3631*/        /*SwitchType*/ 13, MVT::f32,// ->3646
/*3633*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3635*/          OPC_EmitConvertToTarget, 2,
/*3637*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_XCC), 0|OPFL_GlueInput,
                      MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVS_XCC:f32 f32:f32:$rs2, f32:f32:$f, (imm:i32):$cond)
/*3646*/        /*SwitchType*/ 13, MVT::f64,// ->3661
/*3648*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3650*/          OPC_EmitConvertToTarget, 2,
/*3652*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_XCC), 0|OPFL_GlueInput,
                      MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVD_XCC:f64 f64:f64:$rs2, f64:f64:$f, (imm:i32):$cond)
/*3661*/        /*SwitchType*/ 13, MVT::f128,// ->3676
/*3663*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3665*/          OPC_EmitConvertToTarget, 2,
/*3667*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_XCC), 0|OPFL_GlueInput,
                      MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond) - Complexity = 6
                  // Dst: (FMOVQ_XCC:f128 f128:f128:$rs2, f128:f128:$f, (imm:i32):$cond)
/*3676*/        0, // EndSwitchType
/*3677*/      0, /*End of Scope*/
/*3678*/    /*SwitchOpcode*/ 21, TARGET_VAL(ISD::CALLSEQ_START),// ->3702
/*3681*/      OPC_RecordNode, // #0 = 'callseq_start' chained node
/*3682*/      OPC_RecordChild1, // #1 = $amt1
/*3683*/      OPC_MoveChild1,
/*3684*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3687*/      OPC_MoveParent,
/*3688*/      OPC_RecordChild2, // #2 = $amt2
/*3689*/      OPC_MoveChild2,
/*3690*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3693*/      OPC_MoveParent,
/*3694*/      OPC_EmitMergeInputChains1_0,
/*3695*/      OPC_MorphNodeTo0, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_start (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt1, (timm:i32):$amt2)
/*3702*/    /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_END),// ->3727
/*3705*/      OPC_RecordNode, // #0 = 'callseq_end' chained node
/*3706*/      OPC_CaptureGlueInput,
/*3707*/      OPC_RecordChild1, // #1 = $amt1
/*3708*/      OPC_MoveChild1,
/*3709*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3712*/      OPC_MoveParent,
/*3713*/      OPC_RecordChild2, // #2 = $amt2
/*3714*/      OPC_MoveChild2,
/*3715*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3718*/      OPC_MoveParent,
/*3719*/      OPC_EmitMergeInputChains1_0,
/*3720*/      OPC_MorphNodeTo0, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
/*3727*/    /*SwitchOpcode*/ 33, TARGET_VAL(ISD::FrameIndex),// ->3763
/*3730*/      OPC_RecordNode, // #0 = $addr
/*3731*/      OPC_CheckType, MVT::iPTR,
/*3733*/      OPC_Scope, 13, /*->3748*/ // 2 children in Scope
/*3735*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*3737*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*3740*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LEA_ADDri), 0,
                    MVT::iPTR, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:iPTR:$addr - Complexity = 9
                // Dst: (LEA_ADDri:iPTR ADDRri:iPTR:$addr)
/*3748*/      /*Scope*/ 13, /*->3762*/
/*3749*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3751*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*3754*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LEAX_ADDri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:iPTR:$addr - Complexity = 9
                // Dst: (LEAX_ADDri:i64 ADDRri:iPTR:$addr)
/*3762*/      0, /*End of Scope*/
/*3763*/    /*SwitchOpcode*/ 22, TARGET_VAL(SPISD::TLS_CALL),// ->3788
/*3766*/      OPC_RecordNode, // #0 = 'tlscall' chained node
/*3767*/      OPC_CaptureGlueInput,
/*3768*/      OPC_RecordChild1, // #1 = $disp
/*3769*/      OPC_MoveChild1,
/*3770*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetExternalSymbol),
/*3773*/      OPC_MoveParent,
/*3774*/      OPC_RecordChild2, // #2 = $sym
/*3775*/      OPC_MoveChild2,
/*3776*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*3779*/      OPC_MoveParent,
/*3780*/      OPC_EmitMergeInputChains1_0,
/*3781*/      OPC_MorphNodeTo0, TARGET_VAL(SP::TLS_CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic2,
                  2/*#Ops*/, 1, 2, 
              // Src: (tlscall (texternalsym:i32):$disp, (tglobaltlsaddr:iPTR):$sym) - Complexity = 9
              // Dst: (TLS_CALL (texternalsym:i32):$disp, (tglobaltlsaddr:iPTR):$sym)
/*3788*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::ATOMIC_FENCE),// ->3826
/*3791*/      OPC_RecordNode, // #0 = 'atomic_fence' chained node
/*3792*/      OPC_MoveChild1,
/*3793*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3796*/      OPC_MoveParent,
/*3797*/      OPC_MoveChild2,
/*3798*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3801*/      OPC_MoveParent,
/*3802*/      OPC_Scope, 8, /*->3812*/ // 2 children in Scope
/*3804*/        OPC_CheckPatternPredicate, 4, // (!Subtarget->isV9())
/*3806*/        OPC_EmitMergeInputChains1_0,
/*3807*/        OPC_MorphNodeTo0, TARGET_VAL(SP::STBAR), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
                // Dst: (STBAR)
/*3812*/      /*Scope*/ 12, /*->3825*/
/*3813*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3815*/        OPC_EmitMergeInputChains1_0,
/*3816*/        OPC_EmitInteger, MVT::i32, 15, 
/*3819*/        OPC_MorphNodeTo0, TARGET_VAL(SP::MEMBARi), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
                // Dst: (MEMBARi 15:i32)
/*3825*/      0, /*End of Scope*/
/*3826*/    /*SwitchOpcode*/ 31, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->3860
/*3829*/      OPC_RecordChild0, // #0 = $Rn
/*3830*/      OPC_Scope, 13, /*->3845*/ // 2 children in Scope
/*3832*/        OPC_CheckChild1Integer, 0, 
/*3834*/        OPC_EmitInteger, MVT::i32, SP::sub_even,
/*3837*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (extractelt:i32 IntPair:v2i32:$Rn, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 IntPair:v2i32:$Rn, sub_even:i32)
/*3845*/      /*Scope*/ 13, /*->3859*/
/*3846*/        OPC_CheckChild1Integer, 1, 
/*3848*/        OPC_EmitInteger, MVT::i32, SP::sub_odd,
/*3851*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (extractelt:i32 IntPair:v2i32:$Rn, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 IntPair:v2i32:$Rn, sub_odd:i32)
/*3859*/      0, /*End of Scope*/
/*3860*/    /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SHL),// ->3935
/*3863*/      OPC_RecordChild0, // #0 = $rs1
/*3864*/      OPC_RecordChild1, // #1 = $simm13
/*3865*/      OPC_Scope, 40, /*->3907*/ // 2 children in Scope
/*3867*/        OPC_MoveChild1,
/*3868*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3871*/        OPC_CheckType, MVT::i32,
/*3873*/        OPC_Scope, 15, /*->3890*/ // 2 children in Scope
/*3875*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3877*/          OPC_MoveParent,
/*3878*/          OPC_CheckType, MVT::i32,
/*3880*/          OPC_EmitConvertToTarget, 1,
/*3882*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SLLri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3890*/        /*Scope*/ 15, /*->3906*/
/*3891*/          OPC_MoveParent,
/*3892*/          OPC_CheckType, MVT::i64,
/*3894*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3896*/          OPC_EmitConvertToTarget, 1,
/*3898*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SLLXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*3906*/        0, /*End of Scope*/
/*3907*/      /*Scope*/ 26, /*->3934*/
/*3908*/        OPC_CheckChild1Type, MVT::i32,
/*3910*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3921
/*3913*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SLLrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3921*/        /*SwitchType*/ 10, MVT::i64,// ->3933
/*3923*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3925*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SLLXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SLLXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*3933*/        0, // EndSwitchType
/*3934*/      0, /*End of Scope*/
/*3935*/    /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SRL),// ->4010
/*3938*/      OPC_RecordChild0, // #0 = $rs1
/*3939*/      OPC_RecordChild1, // #1 = $simm13
/*3940*/      OPC_Scope, 40, /*->3982*/ // 2 children in Scope
/*3942*/        OPC_MoveChild1,
/*3943*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3946*/        OPC_CheckType, MVT::i32,
/*3948*/        OPC_Scope, 15, /*->3965*/ // 2 children in Scope
/*3950*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*3952*/          OPC_MoveParent,
/*3953*/          OPC_CheckType, MVT::i32,
/*3955*/          OPC_EmitConvertToTarget, 1,
/*3957*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRLri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*3965*/        /*Scope*/ 15, /*->3981*/
/*3966*/          OPC_MoveParent,
/*3967*/          OPC_CheckType, MVT::i64,
/*3969*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*3971*/          OPC_EmitConvertToTarget, 1,
/*3973*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SRLXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*3981*/        0, /*End of Scope*/
/*3982*/      /*Scope*/ 26, /*->4009*/
/*3983*/        OPC_CheckChild1Type, MVT::i32,
/*3985*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3996
/*3988*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRLrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*3996*/        /*SwitchType*/ 10, MVT::i64,// ->4008
/*3998*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4000*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRLXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRLXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*4008*/        0, // EndSwitchType
/*4009*/      0, /*End of Scope*/
/*4010*/    /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SRA),// ->4085
/*4013*/      OPC_RecordChild0, // #0 = $rs1
/*4014*/      OPC_RecordChild1, // #1 = $simm13
/*4015*/      OPC_Scope, 40, /*->4057*/ // 2 children in Scope
/*4017*/        OPC_MoveChild1,
/*4018*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4021*/        OPC_CheckType, MVT::i32,
/*4023*/        OPC_Scope, 15, /*->4040*/ // 2 children in Scope
/*4025*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4027*/          OPC_MoveParent,
/*4028*/          OPC_CheckType, MVT::i32,
/*4030*/          OPC_EmitConvertToTarget, 1,
/*4032*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRAri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4040*/        /*Scope*/ 15, /*->4056*/
/*4041*/          OPC_MoveParent,
/*4042*/          OPC_CheckType, MVT::i64,
/*4044*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4046*/          OPC_EmitConvertToTarget, 1,
/*4048*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRAXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i64 i64:i64:$rs1, (imm:i32):$shcnt) - Complexity = 6
                  // Dst: (SRAXri:i64 i64:i64:$rs1, (imm:i32):$shcnt)
/*4056*/        0, /*End of Scope*/
/*4057*/      /*Scope*/ 26, /*->4084*/
/*4058*/        OPC_CheckChild1Type, MVT::i32,
/*4060*/        OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->4071
/*4063*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRArr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRArr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4071*/        /*SwitchType*/ 10, MVT::i64,// ->4083
/*4073*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4075*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SRAXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i64 i64:i64:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (SRAXrr:i64 i64:i64:$rs1, i32:i32:$rs2)
/*4083*/        0, // EndSwitchType
/*4084*/      0, /*End of Scope*/
/*4085*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::ADDC),// ->4123
/*4088*/      OPC_RecordChild0, // #0 = $rs1
/*4089*/      OPC_RecordChild1, // #1 = $simm13
/*4090*/      OPC_Scope, 19, /*->4111*/ // 2 children in Scope
/*4092*/        OPC_MoveChild1,
/*4093*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4096*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4098*/        OPC_MoveParent,
/*4099*/        OPC_CheckType, MVT::i32,
/*4101*/        OPC_EmitConvertToTarget, 1,
/*4103*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDCCri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4111*/      /*Scope*/ 10, /*->4122*/
/*4112*/        OPC_CheckType, MVT::i32,
/*4114*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (ADDCCrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4122*/      0, /*End of Scope*/
/*4123*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ADDE),// ->4162
/*4126*/      OPC_CaptureGlueInput,
/*4127*/      OPC_RecordChild0, // #0 = $rs1
/*4128*/      OPC_RecordChild1, // #1 = $simm13
/*4129*/      OPC_Scope, 19, /*->4150*/ // 2 children in Scope
/*4131*/        OPC_MoveChild1,
/*4132*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4135*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4137*/        OPC_MoveParent,
/*4138*/        OPC_CheckType, MVT::i32,
/*4140*/        OPC_EmitConvertToTarget, 1,
/*4142*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (adde:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDEri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4150*/      /*Scope*/ 10, /*->4161*/
/*4151*/        OPC_CheckType, MVT::i32,
/*4153*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (ADDErr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4161*/      0, /*End of Scope*/
/*4162*/    /*SwitchOpcode*/ 64, TARGET_VAL(ISD::SUB),// ->4229
/*4165*/      OPC_RecordChild0, // #0 = $rs1
/*4166*/      OPC_RecordChild1, // #1 = $simm13
/*4167*/      OPC_Scope, 35, /*->4204*/ // 3 children in Scope
/*4169*/        OPC_MoveChild1,
/*4170*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4173*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4175*/        OPC_MoveParent,
/*4176*/        OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->4189
/*4179*/          OPC_EmitConvertToTarget, 1,
/*4181*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SUBri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4189*/        /*SwitchType*/ 12, MVT::i64,// ->4203
/*4191*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4193*/          OPC_EmitConvertToTarget, 1,
/*4195*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SUBXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4203*/        0, // EndSwitchType
/*4204*/      /*Scope*/ 10, /*->4215*/
/*4205*/        OPC_CheckType, MVT::i32,
/*4207*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBrr), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4215*/      /*Scope*/ 12, /*->4228*/
/*4216*/        OPC_CheckType, MVT::i64,
/*4218*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4220*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (SUBXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4228*/      0, /*End of Scope*/
/*4229*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::SUBE),// ->4268
/*4232*/      OPC_CaptureGlueInput,
/*4233*/      OPC_RecordChild0, // #0 = $rs1
/*4234*/      OPC_RecordChild1, // #1 = $simm13
/*4235*/      OPC_Scope, 19, /*->4256*/ // 2 children in Scope
/*4237*/        OPC_MoveChild1,
/*4238*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4241*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4243*/        OPC_MoveParent,
/*4244*/        OPC_CheckType, MVT::i32,
/*4246*/        OPC_EmitConvertToTarget, 1,
/*4248*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sube:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBEri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4256*/      /*Scope*/ 10, /*->4267*/
/*4257*/        OPC_CheckType, MVT::i32,
/*4259*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBErr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4267*/      0, /*End of Scope*/
/*4268*/    /*SwitchOpcode*/ 35, TARGET_VAL(ISD::SUBC),// ->4306
/*4271*/      OPC_RecordChild0, // #0 = $rs1
/*4272*/      OPC_RecordChild1, // #1 = $simm13
/*4273*/      OPC_Scope, 19, /*->4294*/ // 2 children in Scope
/*4275*/        OPC_MoveChild1,
/*4276*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4279*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4281*/        OPC_MoveParent,
/*4282*/        OPC_CheckType, MVT::i32,
/*4284*/        OPC_EmitConvertToTarget, 1,
/*4286*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (subc:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBCCri:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4294*/      /*Scope*/ 10, /*->4305*/
/*4295*/        OPC_CheckType, MVT::i32,
/*4297*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SUBCCrr:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4305*/      0, /*End of Scope*/
/*4306*/    /*SwitchOpcode*/ 70, TARGET_VAL(SPISD::CMPICC),// ->4379
/*4309*/      OPC_RecordChild0, // #0 = $rs1
/*4310*/      OPC_Scope, 30, /*->4342*/ // 2 children in Scope
/*4312*/        OPC_CheckChild0Type, MVT::i32,
/*4314*/        OPC_RecordChild1, // #1 = $simm13
/*4315*/        OPC_Scope, 16, /*->4333*/ // 2 children in Scope
/*4317*/          OPC_MoveChild1,
/*4318*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4321*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4323*/          OPC_MoveParent,
/*4324*/          OPC_EmitConvertToTarget, 1,
/*4326*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (CMPri i32:i32:$rs1, (imm:i32):$simm13)
/*4333*/        /*Scope*/ 7, /*->4341*/
/*4334*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                  // Dst: (CMPrr i32:i32:$rs1, i32:i32:$rs2)
/*4341*/        0, /*End of Scope*/
/*4342*/      /*Scope*/ 35, /*->4378*/
/*4343*/        OPC_CheckChild0Type, MVT::i64,
/*4345*/        OPC_RecordChild1, // #1 = $b
/*4346*/        OPC_Scope, 19, /*->4367*/ // 2 children in Scope
/*4348*/          OPC_MoveChild1,
/*4349*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4352*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*4354*/          OPC_MoveParent,
/*4355*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4357*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*4360*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (CMPri ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
/*4367*/        /*Scope*/ 9, /*->4377*/
/*4368*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4370*/          OPC_MorphNodeTo0, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i64:i64:$a, i64:i64:$b) - Complexity = 3
                  // Dst: (CMPrr ?:i64:$a, ?:i64:$b)
/*4377*/        0, /*End of Scope*/
/*4378*/      0, /*End of Scope*/
/*4379*/    /*SwitchOpcode*/ 37, TARGET_VAL(ISD::UMUL_LOHI),// ->4419
/*4382*/      OPC_RecordChild0, // #0 = $rs1
/*4383*/      OPC_RecordChild1, // #1 = $simm13
/*4384*/      OPC_Scope, 20, /*->4406*/ // 2 children in Scope
/*4386*/        OPC_MoveChild1,
/*4387*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4390*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4392*/        OPC_MoveParent,
/*4393*/        OPC_CheckType, MVT::i32,
/*4395*/        OPC_EmitConvertToTarget, 1,
/*4397*/        OPC_MorphNodeTo2, TARGET_VAL(SP::UMULri), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (umullohi:i32:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (UMULri:i32:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4406*/      /*Scope*/ 11, /*->4418*/
/*4407*/        OPC_CheckType, MVT::i32,
/*4409*/        OPC_MorphNodeTo2, TARGET_VAL(SP::UMULrr), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (umullohi:i32:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (UMULrr:i32:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4418*/      0, /*End of Scope*/
/*4419*/    /*SwitchOpcode*/ 37, TARGET_VAL(ISD::SMUL_LOHI),// ->4459
/*4422*/      OPC_RecordChild0, // #0 = $rs1
/*4423*/      OPC_RecordChild1, // #1 = $simm13
/*4424*/      OPC_Scope, 20, /*->4446*/ // 2 children in Scope
/*4426*/        OPC_MoveChild1,
/*4427*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4430*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4432*/        OPC_MoveParent,
/*4433*/        OPC_CheckType, MVT::i32,
/*4435*/        OPC_EmitConvertToTarget, 1,
/*4437*/        OPC_MorphNodeTo2, TARGET_VAL(SP::SMULri), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (smullohi:i32:i32 i32:i32:$rs1, (imm:i32)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SMULri:i32:i32 i32:i32:$rs1, (imm:i32):$simm13)
/*4446*/      /*Scope*/ 11, /*->4458*/
/*4447*/        OPC_CheckType, MVT::i32,
/*4449*/        OPC_MorphNodeTo2, TARGET_VAL(SP::SMULrr), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (smullohi:i32:i32 i32:i32:$rs1, i32:i32:$rs2) - Complexity = 3
                // Dst: (SMULrr:i32:i32 i32:i32:$rs1, i32:i32:$rs2)
/*4458*/      0, /*End of Scope*/
/*4459*/    /*SwitchOpcode*/ 19, TARGET_VAL(SPISD::RET_FLAG),// ->4481
/*4462*/      OPC_RecordNode, // #0 = 'retflag' chained node
/*4463*/      OPC_CaptureGlueInput,
/*4464*/      OPC_RecordChild1, // #1 = $val
/*4465*/      OPC_MoveChild1,
/*4466*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4469*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*4471*/      OPC_MoveParent,
/*4472*/      OPC_EmitMergeInputChains1_0,
/*4473*/      OPC_EmitConvertToTarget, 1,
/*4475*/      OPC_MorphNodeTo0, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#Ops*/, 2, 
              // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
              // Dst: (RETL (imm:i32):$val)
/*4481*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::MUL),// ->4523
/*4484*/      OPC_RecordChild0, // #0 = $rs1
/*4485*/      OPC_RecordChild1, // #1 = $simm13
/*4486*/      OPC_Scope, 21, /*->4509*/ // 2 children in Scope
/*4488*/        OPC_MoveChild1,
/*4489*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4492*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4494*/        OPC_MoveParent,
/*4495*/        OPC_CheckType, MVT::i64,
/*4497*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4499*/        OPC_EmitConvertToTarget, 1,
/*4501*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MULXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (MULXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4509*/      /*Scope*/ 12, /*->4522*/
/*4510*/        OPC_CheckType, MVT::i64,
/*4512*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4514*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MULXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (MULXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4522*/      0, /*End of Scope*/
/*4523*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::SDIV),// ->4565
/*4526*/      OPC_RecordChild0, // #0 = $rs1
/*4527*/      OPC_RecordChild1, // #1 = $simm13
/*4528*/      OPC_Scope, 21, /*->4551*/ // 2 children in Scope
/*4530*/        OPC_MoveChild1,
/*4531*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4534*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4536*/        OPC_MoveParent,
/*4537*/        OPC_CheckType, MVT::i64,
/*4539*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4541*/        OPC_EmitConvertToTarget, 1,
/*4543*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SDIVXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sdiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SDIVXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4551*/      /*Scope*/ 12, /*->4564*/
/*4552*/        OPC_CheckType, MVT::i64,
/*4554*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4556*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SDIVXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sdiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (SDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4564*/      0, /*End of Scope*/
/*4565*/    /*SwitchOpcode*/ 39, TARGET_VAL(ISD::UDIV),// ->4607
/*4568*/      OPC_RecordChild0, // #0 = $rs1
/*4569*/      OPC_RecordChild1, // #1 = $simm13
/*4570*/      OPC_Scope, 21, /*->4593*/ // 2 children in Scope
/*4572*/        OPC_MoveChild1,
/*4573*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4576*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*4578*/        OPC_MoveParent,
/*4579*/        OPC_CheckType, MVT::i64,
/*4581*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4583*/        OPC_EmitConvertToTarget, 1,
/*4585*/        OPC_MorphNodeTo1, TARGET_VAL(SP::UDIVXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (udiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (UDIVXri:i64 i64:i64:$rs1, (imm:i64):$simm13)
/*4593*/      /*Scope*/ 12, /*->4606*/
/*4594*/        OPC_CheckType, MVT::i64,
/*4596*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4598*/        OPC_MorphNodeTo1, TARGET_VAL(SP::UDIVXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
                // Dst: (UDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*4606*/      0, /*End of Scope*/
/*4607*/    /*SwitchOpcode*/ 24, TARGET_VAL(SPISD::BRICC),// ->4634
/*4610*/      OPC_RecordNode, // #0 = 'SPbricc' chained node
/*4611*/      OPC_CaptureGlueInput,
/*4612*/      OPC_RecordChild1, // #1 = $imm22
/*4613*/      OPC_MoveChild1,
/*4614*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4617*/      OPC_MoveParent,
/*4618*/      OPC_RecordChild2, // #2 = $cond
/*4619*/      OPC_MoveChild2,
/*4620*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4623*/      OPC_MoveParent,
/*4624*/      OPC_EmitMergeInputChains1_0,
/*4625*/      OPC_EmitConvertToTarget, 2,
/*4627*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (SPbricc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
              // Dst: (BCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4634*/    /*SwitchOpcode*/ 35, TARGET_VAL(SPISD::BRFCC),// ->4672
/*4637*/      OPC_RecordNode, // #0 = 'SPbrfcc' chained node
/*4638*/      OPC_CaptureGlueInput,
/*4639*/      OPC_RecordChild1, // #1 = $imm22
/*4640*/      OPC_MoveChild1,
/*4641*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4644*/      OPC_MoveParent,
/*4645*/      OPC_RecordChild2, // #2 = $cond
/*4646*/      OPC_MoveChild2,
/*4647*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4650*/      OPC_MoveParent,
/*4651*/      OPC_EmitMergeInputChains1_0,
/*4652*/      OPC_EmitConvertToTarget, 2,
/*4654*/      OPC_Scope, 7, /*->4663*/ // 2 children in Scope
/*4656*/        OPC_MorphNodeTo0, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                    2/*#Ops*/, 1, 3, 
                // Src: (SPbrfcc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
                // Dst: (FBCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4663*/      /*Scope*/ 7, /*->4671*/
/*4664*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                    2/*#Ops*/, 1, 3, 
                // Src: (SPbrfcc (bb:Other):$imm22, (imm:i32):$cond) - Complexity = 6
                // Dst: (CBCOND (bb:Other):$imm22, (imm:i32):$cond)
/*4671*/      0, /*End of Scope*/
/*4672*/    /*SwitchOpcode*/ 46, TARGET_VAL(SPISD::TLS_ADD),// ->4721
/*4675*/      OPC_RecordChild0, // #0 = $rs1
/*4676*/      OPC_RecordChild1, // #1 = $rs2
/*4677*/      OPC_Scope, 19, /*->4698*/ // 2 children in Scope
/*4679*/        OPC_CheckChild1Type, MVT::i32,
/*4681*/        OPC_RecordChild2, // #2 = $sym
/*4682*/        OPC_MoveChild2,
/*4683*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*4686*/        OPC_MoveParent,
/*4687*/        OPC_CheckType, MVT::i32,
/*4689*/        OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_ADDrr), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:i32 i32:i32:$rs1, i32:i32:$rs2, (tglobaltlsaddr:iPTR):$sym) - Complexity = 6
                // Dst: (TLS_ADDrr:i32 i32:i32:$rs1, i32:i32:$rs2, (tglobaltlsaddr:iPTR):$sym)
/*4698*/      /*Scope*/ 21, /*->4720*/
/*4699*/        OPC_CheckChild1Type, MVT::i64,
/*4701*/        OPC_RecordChild2, // #2 = $sym
/*4702*/        OPC_MoveChild2,
/*4703*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*4706*/        OPC_MoveParent,
/*4707*/        OPC_CheckType, MVT::i64,
/*4709*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4711*/        OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_ADDXrr), 0,
                    MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:i64 i64:i64:$rs1, i64:i64:$rs2, (tglobaltlsaddr:iPTR):$sym) - Complexity = 6
                // Dst: (TLS_ADDXrr:i64 i64:i64:$rs1, i64:i64:$rs2, (tglobaltlsaddr:iPTR):$sym)
/*4720*/      0, /*End of Scope*/
/*4721*/    /*SwitchOpcode*/ 108, TARGET_VAL(SPISD::Hi),// ->4832
/*4724*/      OPC_RecordChild0, // #0 = $in
/*4725*/      OPC_MoveChild0,
/*4726*/      OPC_SwitchOpcode /*4 cases */, 23, TARGET_VAL(ISD::TargetGlobalAddress),// ->4753
/*4730*/        OPC_MoveParent,
/*4731*/        OPC_Scope, 9, /*->4742*/ // 2 children in Scope
/*4733*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4735*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
/*4742*/        /*Scope*/ 9, /*->4752*/
/*4743*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4745*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
/*4752*/        0, /*End of Scope*/
/*4753*/      /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetConstantPool),// ->4779
/*4756*/        OPC_MoveParent,
/*4757*/        OPC_Scope, 9, /*->4768*/ // 2 children in Scope
/*4759*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4761*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
/*4768*/        /*Scope*/ 9, /*->4778*/
/*4769*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4771*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
/*4778*/        0, /*End of Scope*/
/*4779*/      /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4805
/*4782*/        OPC_MoveParent,
/*4783*/        OPC_Scope, 9, /*->4794*/ // 2 children in Scope
/*4785*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4787*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaltlsaddr:i32):$in)
/*4794*/        /*Scope*/ 9, /*->4804*/
/*4795*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4797*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tglobaltlsaddr:i32):$in)
/*4804*/        0, /*End of Scope*/
/*4805*/      /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetBlockAddress),// ->4831
/*4808*/        OPC_MoveParent,
/*4809*/        OPC_Scope, 9, /*->4820*/ // 2 children in Scope
/*4811*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4813*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
/*4820*/        /*Scope*/ 9, /*->4830*/
/*4821*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4823*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (SETHIi:iPTR (tblockaddress:i32):$in)
/*4830*/        0, /*End of Scope*/
/*4831*/      0, // EndSwitchOpcode
/*4832*/    /*SwitchOpcode*/ 20|128,1/*148*/, TARGET_VAL(SPISD::Lo),// ->4984
/*4836*/      OPC_RecordChild0, // #0 = $in
/*4837*/      OPC_MoveChild0,
/*4838*/      OPC_SwitchOpcode /*4 cases */, 33, TARGET_VAL(ISD::TargetGlobalAddress),// ->4875
/*4842*/        OPC_MoveParent,
/*4843*/        OPC_Scope, 13, /*->4858*/ // 2 children in Scope
/*4845*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4847*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4850*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tglobaladdr:i32):$in)
/*4858*/        /*Scope*/ 15, /*->4874*/
/*4859*/          OPC_CheckType, MVT::i64,
/*4861*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4863*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4866*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tglobaladdr:i64):$in)
/*4874*/        0, /*End of Scope*/
/*4875*/      /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetConstantPool),// ->4911
/*4878*/        OPC_MoveParent,
/*4879*/        OPC_Scope, 13, /*->4894*/ // 2 children in Scope
/*4881*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4883*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4886*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tconstpool:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tconstpool:i32):$in)
/*4894*/        /*Scope*/ 15, /*->4910*/
/*4895*/          OPC_CheckType, MVT::i64,
/*4897*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4899*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4902*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tconstpool:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tconstpool:i64):$in)
/*4910*/        0, /*End of Scope*/
/*4911*/      /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4947
/*4914*/        OPC_MoveParent,
/*4915*/        OPC_Scope, 13, /*->4930*/ // 2 children in Scope
/*4917*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4919*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4922*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tglobaltlsaddr:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tglobaltlsaddr:i32):$in)
/*4930*/        /*Scope*/ 15, /*->4946*/
/*4931*/          OPC_CheckType, MVT::i64,
/*4933*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4935*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4938*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tglobaltlsaddr:i64):$in)
/*4946*/        0, /*End of Scope*/
/*4947*/      /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetBlockAddress),// ->4983
/*4950*/        OPC_MoveParent,
/*4951*/        OPC_Scope, 13, /*->4966*/ // 2 children in Scope
/*4953*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*4955*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*4958*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:iPTR (tblockaddress:iPTR):$in) - Complexity = 6
                  // Dst: (ORri:iPTR G0:i32, (tblockaddress:i32):$in)
/*4966*/        /*Scope*/ 15, /*->4982*/
/*4967*/          OPC_CheckType, MVT::i64,
/*4969*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*4971*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*4974*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:i64 (tblockaddress:i64):$in) - Complexity = 6
                  // Dst: (ORXri:i64 G0:i64, (tblockaddress:i64):$in)
/*4982*/        0, /*End of Scope*/
/*4983*/      0, // EndSwitchOpcode
/*4984*/    /*SwitchOpcode*/ 26, TARGET_VAL(SPISD::BRXCC),// ->5013
/*4987*/      OPC_RecordNode, // #0 = 'SPbrxcc' chained node
/*4988*/      OPC_CaptureGlueInput,
/*4989*/      OPC_RecordChild1, // #1 = $imm19
/*4990*/      OPC_MoveChild1,
/*4991*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4994*/      OPC_MoveParent,
/*4995*/      OPC_RecordChild2, // #2 = $cond
/*4996*/      OPC_MoveChild2,
/*4997*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5000*/      OPC_MoveParent,
/*5001*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5003*/      OPC_EmitMergeInputChains1_0,
/*5004*/      OPC_EmitConvertToTarget, 2,
/*5006*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (SPbrxcc (bb:Other):$imm19, (imm:i32):$cond) - Complexity = 6
              // Dst: (BPXCC (bb:Other):$imm19, (imm:i32):$cond)
/*5013*/    /*SwitchOpcode*/ 111|128,1/*239*/, TARGET_VAL(ISD::Constant),// ->5256
/*5017*/      OPC_RecordNode, // #0 = $imm22
/*5018*/      OPC_Scope, 16, /*->5036*/ // 7 children in Scope
/*5020*/        OPC_CheckPredicate, 25, // Predicate_SETHIimm
/*5022*/        OPC_CheckType, MVT::i32,
/*5024*/        OPC_EmitConvertToTarget, 0,
/*5026*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*5029*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$imm22))
/*5036*/      /*Scope*/ 35, /*->5072*/
/*5037*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*5039*/        OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->5055
/*5042*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*5045*/          OPC_EmitConvertToTarget, 0,
/*5047*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
/*5055*/        /*SwitchType*/ 14, MVT::i64,// ->5071
/*5057*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*5060*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*5063*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i64)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i64 G0:i64, (as_i32imm:i32 ?:i64:$val))
/*5071*/        0, // EndSwitchType
/*5072*/      /*Scope*/ 32, /*->5105*/
/*5073*/        OPC_CheckPredicate, 25, // Predicate_SETHIimm
/*5075*/        OPC_CheckType, MVT::i64,
/*5077*/        OPC_Scope, 10, /*->5089*/ // 2 children in Scope
/*5079*/          OPC_EmitNodeXForm, 1, 0, // HI22
/*5082*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
                  // Dst: (SETHIi:i64 (HI22:i32 ?:i64:$val))
/*5089*/        /*Scope*/ 14, /*->5104*/
/*5090*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5092*/          OPC_EmitConvertToTarget, 0,
/*5094*/          OPC_EmitNodeXForm, 1, 1, // HI22
/*5097*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIXi), 0,
                      MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                  // Dst: (SETHIXi:i64 (HI22:i64 (imm:i64):$imm22))
/*5104*/        0, /*End of Scope*/
/*5105*/      /*Scope*/ 27, /*->5133*/
/*5106*/        OPC_CheckPredicate, 26, // Predicate_uimm32
/*5108*/        OPC_CheckType, MVT::i64,
/*5110*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5112*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*5115*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5122*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*5125*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_uimm32>>:$val - Complexity = 4
                // Dst: (ORri:i64 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val))
/*5133*/      /*Scope*/ 27, /*->5161*/
/*5134*/        OPC_CheckPredicate, 27, // Predicate_nimm33
/*5136*/        OPC_CheckType, MVT::i64,
/*5138*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5140*/        OPC_EmitNodeXForm, 3, 0, // HIX22
/*5143*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5150*/        OPC_EmitNodeXForm, 4, 0, // LOX10
/*5153*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_nimm33>>:$val - Complexity = 4
                // Dst: (XORri:i64 (SETHIi:i32 (HIX22:i32 ?:i64:$val)), (LOX10:i32 ?:i64:$val))
/*5161*/      /*Scope*/ 27, /*->5189*/
/*5162*/        OPC_CheckType, MVT::i32,
/*5164*/        OPC_EmitConvertToTarget, 0,
/*5166*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*5169*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*5176*/        OPC_EmitConvertToTarget, 0,
/*5178*/        OPC_EmitNodeXForm, 2, 4, // LO10
/*5181*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                    MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$val - Complexity = 3
                // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*5189*/      /*Scope*/ 65, /*->5255*/
/*5190*/        OPC_CheckType, MVT::i64,
/*5192*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5194*/        OPC_EmitNodeXForm, 5, 0, // HH22
/*5197*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*5204*/        OPC_EmitNodeXForm, 6, 0, // HM10
/*5207*/        OPC_EmitNode1, TARGET_VAL(SP::ORri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*5215*/        OPC_EmitInteger, MVT::i32, 32, 
/*5218*/        OPC_EmitNode1, TARGET_VAL(SP::SLLXri), 0,
                    MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*5226*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*5229*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*5236*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*5239*/        OPC_EmitNode1, TARGET_VAL(SP::ORri), 0,
                    MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*5247*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORrr), 0,
                    MVT::i64, 2/*#Ops*/, 6, 10, 
                // Src: (imm:i64):$val - Complexity = 3
                // Dst: (ORrr:i64 (SLLXri:i64 (ORri:i64 (SETHIi:i32 (HH22:i32 ?:i64:$val)), (HM10:i32 ?:i64:$val)), 32:i32), (ORri:i32 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val)))
/*5255*/      0, /*End of Scope*/
/*5256*/    /*SwitchOpcode*/ 59, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->5318
/*5259*/      OPC_RecordMemRef,
/*5260*/      OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/*5261*/      OPC_RecordChild1, // #1 = $rs1
/*5262*/      OPC_SwitchType /*2 cases */, 32, MVT::i32,// ->5297
/*5265*/        OPC_RecordChild2, // #2 = $rs2
/*5266*/        OPC_RecordChild3, // #3 = $swap
/*5267*/        OPC_CheckPredicate, 19, // Predicate_atomic_cmp_swap_32
/*5269*/        OPC_Scope, 12, /*->5283*/ // 2 children in Scope
/*5271*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5273*/          OPC_EmitMergeInputChains1_0,
/*5274*/          OPC_MorphNodeTo1, TARGET_VAL(SP::CASrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (CASrr:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)
/*5283*/        /*Scope*/ 12, /*->5296*/
/*5284*/          OPC_CheckPatternPredicate, 5, // (Subtarget->hasLeonCasa())
/*5286*/          OPC_EmitMergeInputChains1_0,
/*5287*/          OPC_MorphNodeTo1, TARGET_VAL(SP::CASAasi10), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (CASAasi10:i32 iPTR:iPTR:$rs1, i32:i32:$rs2, i32:i32:$swap)
/*5296*/        0, /*End of Scope*/
/*5297*/      /*SwitchType*/ 18, MVT::i64,// ->5317
/*5299*/        OPC_CheckChild1Type, MVT::i64,
/*5301*/        OPC_RecordChild2, // #2 = $rs2
/*5302*/        OPC_RecordChild3, // #3 = $swap
/*5303*/        OPC_CheckPredicate, 20, // Predicate_atomic_cmp_swap_64
/*5305*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5307*/        OPC_EmitMergeInputChains1_0,
/*5308*/        OPC_MorphNodeTo1, TARGET_VAL(SP::CASXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 i64:i64:$rs1, i64:i64:$rs2, i64:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (CASXrr:i64 i64:i64:$rs1, i64:i64:$rs2, i64:i64:$swap)
/*5317*/      0, // EndSwitchType
/*5318*/    /*SwitchOpcode*/ 19, TARGET_VAL(SPISD::FLUSHW),// ->5340
/*5321*/      OPC_RecordNode, // #0 = 'flushw' chained node
/*5322*/      OPC_Scope, 8, /*->5332*/ // 2 children in Scope
/*5324*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5326*/        OPC_EmitMergeInputChains1_0,
/*5327*/        OPC_MorphNodeTo0, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (FLUSHW)
/*5332*/      /*Scope*/ 6, /*->5339*/
/*5333*/        OPC_EmitMergeInputChains1_0,
/*5334*/        OPC_MorphNodeTo0, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (TA3)
/*5339*/      0, /*End of Scope*/
/*5340*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->5357
/*5343*/      OPC_RecordNode, // #0 = 'br' chained node
/*5344*/      OPC_RecordChild1, // #1 = $imm22
/*5345*/      OPC_MoveChild1,
/*5346*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5349*/      OPC_MoveParent,
/*5350*/      OPC_EmitMergeInputChains1_0,
/*5351*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm22) - Complexity = 3
              // Dst: (BA (bb:Other):$imm22)
/*5357*/    /*SwitchOpcode*/ 7, TARGET_VAL(ISD::TRAP),// ->5367
/*5360*/      OPC_RecordNode, // #0 = 'trap' chained node
/*5361*/      OPC_EmitMergeInputChains1_0,
/*5362*/      OPC_MorphNodeTo0, TARGET_VAL(SP::TA5), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (TA5)
/*5367*/    /*SwitchOpcode*/ 41, TARGET_VAL(SPISD::CMPFCC),// ->5411
/*5370*/      OPC_RecordChild0, // #0 = $rs1
/*5371*/      OPC_Scope, 11, /*->5384*/ // 3 children in Scope
/*5373*/        OPC_CheckChild0Type, MVT::f32,
/*5375*/        OPC_RecordChild1, // #1 = $rs2
/*5376*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FCMPS:i1 f32:f32:$rs1, f32:f32:$rs2)
/*5384*/      /*Scope*/ 11, /*->5396*/
/*5385*/        OPC_CheckChild0Type, MVT::f64,
/*5387*/        OPC_RecordChild1, // #1 = $rs2
/*5388*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FCMPD:i1 f64:f64:$rs1, f64:f64:$rs2)
/*5396*/      /*Scope*/ 13, /*->5410*/
/*5397*/        OPC_CheckChild0Type, MVT::f128,
/*5399*/        OPC_RecordChild1, // #1 = $rs2
/*5400*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5402*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPQ), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FCMPQ:i1 f128:f128:$rs1, f128:f128:$rs2)
/*5410*/      0, /*End of Scope*/
/*5411*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::ANY_EXTEND),// ->5432
/*5414*/      OPC_RecordChild0, // #0 = $val
/*5415*/      OPC_CheckChild0Type, MVT::i32,
/*5417*/      OPC_CheckType, MVT::i64,
/*5419*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5421*/      OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*5424*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (anyext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i64 ?:i32:$val, I64Regs:i32)
/*5432*/    /*SwitchOpcode*/ 16, TARGET_VAL(ISD::TRUNCATE),// ->5451
/*5435*/      OPC_RecordChild0, // #0 = $val
/*5436*/      OPC_CheckType, MVT::i32,
/*5438*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5440*/      OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*5443*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:i32 i64:i64:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 ?:i64:$val, IntRegs:i32)
/*5451*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::ZERO_EXTEND),// ->5472
/*5454*/      OPC_RecordChild0, // #0 = $val
/*5455*/      OPC_CheckChild0Type, MVT::i32,
/*5457*/      OPC_CheckType, MVT::i64,
/*5459*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5461*/      OPC_EmitInteger, MVT::i32, 0, 
/*5464*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (zext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (SRLri:i64 ?:i32:$val, 0:i32)
/*5472*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::SIGN_EXTEND),// ->5493
/*5475*/      OPC_RecordChild0, // #0 = $val
/*5476*/      OPC_CheckChild0Type, MVT::i32,
/*5478*/      OPC_CheckType, MVT::i64,
/*5480*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5482*/      OPC_EmitInteger, MVT::i32, 0, 
/*5485*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext:i64 i32:i32:$val) - Complexity = 3
              // Dst: (SRAri:i64 ?:i32:$val, 0:i32)
/*5493*/    /*SwitchOpcode*/ 18, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5514
/*5496*/      OPC_RecordChild0, // #0 = $val
/*5497*/      OPC_MoveChild1,
/*5498*/      OPC_CheckValueType, MVT::i32,
/*5500*/      OPC_MoveParent,
/*5501*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5503*/      OPC_EmitInteger, MVT::i32, 0, 
/*5506*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i64 i64:i64:$val, i32:Other) - Complexity = 3
              // Dst: (SRAri:i64 ?:i64:$val, 0:i32)
/*5514*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::CTPOP),// ->5551
/*5517*/      OPC_RecordChild0, // #0 = $src
/*5518*/      OPC_SwitchType /*2 cases */, 9, MVT::i64,// ->5530
/*5521*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*5523*/        OPC_MorphNodeTo1, TARGET_VAL(SP::POPCrr), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctpop:i64 i64:i64:$src) - Complexity = 3
                // Dst: (POPCrr:i64 ?:i64:$src)
/*5530*/      /*SwitchType*/ 18, MVT::i32,// ->5550
/*5532*/        OPC_EmitInteger, MVT::i32, 0, 
/*5535*/        OPC_EmitNode1, TARGET_VAL(SP::SRLri), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*5543*/        OPC_MorphNodeTo1, TARGET_VAL(SP::POPCrr), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ctpop:i32 i32:i32:$src) - Complexity = 3
                // Dst: (POPCrr:i32 (SRLri:i32 ?:i32:$src, 0:i32))
/*5550*/      0, // EndSwitchType
/*5551*/    /*SwitchOpcode*/ 93, TARGET_VAL(ISD::FMUL),// ->5647
/*5554*/      OPC_Scope, 51, /*->5607*/ // 2 children in Scope
/*5556*/        OPC_MoveChild0,
/*5557*/        OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5560*/        OPC_RecordChild0, // #0 = $rs1
/*5561*/        OPC_Scope, 19, /*->5582*/ // 2 children in Scope
/*5563*/          OPC_MoveParent,
/*5564*/          OPC_MoveChild1,
/*5565*/          OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5568*/          OPC_RecordChild0, // #1 = $rs2
/*5569*/          OPC_MoveParent,
/*5570*/          OPC_CheckType, MVT::f64,
/*5572*/          OPC_CheckPatternPredicate, 7, // (!Subtarget->fixFSMULD())
/*5574*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FSMULD), 0,
                      MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f64 (fpextend:f64 f32:f32:$rs1), (fpextend:f64 f32:f32:$rs2)) - Complexity = 9
                  // Dst: (FSMULD:f64 f32:f32:$rs1, f32:f32:$rs2)
/*5582*/        /*Scope*/ 23, /*->5606*/
/*5583*/          OPC_CheckChild0Type, MVT::f64,
/*5585*/          OPC_MoveParent,
/*5586*/          OPC_MoveChild1,
/*5587*/          OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*5590*/          OPC_RecordChild0, // #1 = $rs2
/*5591*/          OPC_CheckChild0Type, MVT::f64,
/*5593*/          OPC_MoveParent,
/*5594*/          OPC_CheckType, MVT::f128,
/*5596*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5598*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FDMULQ), 0,
                      MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f128 (fpextend:f128 f64:f64:$rs1), (fpextend:f128 f64:f64:$rs2)) - Complexity = 9
                  // Dst: (FDMULQ:f128 f64:f64:$rs1, f64:f64:$rs2)
/*5606*/        0, /*End of Scope*/
/*5607*/      /*Scope*/ 38, /*->5646*/
/*5608*/        OPC_RecordChild0, // #0 = $rs1
/*5609*/        OPC_RecordChild1, // #1 = $rs2
/*5610*/        OPC_SwitchType /*3 cases */, 10, MVT::f32,// ->5623
/*5613*/          OPC_CheckPatternPredicate, 8, // (!Subtarget->replaceFMULS())
/*5615*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMULS), 0,
                      MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                  // Dst: (FMULS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*5623*/        /*SwitchType*/ 8, MVT::f64,// ->5633
/*5625*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMULD), 0,
                      MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                  // Dst: (FMULD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*5633*/        /*SwitchType*/ 10, MVT::f128,// ->5645
/*5635*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5637*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMULQ), 0,
                      MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                  // Dst: (FMULQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*5645*/        0, // EndSwitchType
/*5646*/      0, /*End of Scope*/
/*5647*/    /*SwitchOpcode*/ 32, TARGET_VAL(SPISD::ITOF),// ->5682
/*5650*/      OPC_RecordChild0, // #0 = $rs2
/*5651*/      OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5661
/*5654*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FITOS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPitof:f32 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOS:f32 FPRegs:f32:$rs2)
/*5661*/      /*SwitchType*/ 7, MVT::f64,// ->5670
/*5663*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FITOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPitof:f64 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOD:f64 FPRegs:f32:$rs2)
/*5670*/      /*SwitchType*/ 9, MVT::f128,// ->5681
/*5672*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5674*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FITOQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPitof:f128 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FITOQ:f128 FPRegs:f32:$rs2)
/*5681*/      0, // EndSwitchType
/*5682*/    /*SwitchOpcode*/ 35, TARGET_VAL(SPISD::FTOI),// ->5720
/*5685*/      OPC_RecordChild0, // #0 = $rs2
/*5686*/      OPC_Scope, 9, /*->5697*/ // 3 children in Scope
/*5688*/        OPC_CheckChild0Type, MVT::f32,
/*5690*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FSTOI:f32 FPRegs:f32:$rs2)
/*5697*/      /*Scope*/ 9, /*->5707*/
/*5698*/        OPC_CheckChild0Type, MVT::f64,
/*5700*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FDTOI:f32 DFPRegs:f64:$rs2)
/*5707*/      /*Scope*/ 11, /*->5719*/
/*5708*/        OPC_CheckChild0Type, MVT::f128,
/*5710*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5712*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:f32 QFPRegs:f128:$rs2) - Complexity = 3
                // Dst: (FQTOI:f32 QFPRegs:f128:$rs2)
/*5719*/      0, /*End of Scope*/
/*5720*/    /*SwitchOpcode*/ 40, TARGET_VAL(ISD::FP_EXTEND),// ->5763
/*5723*/      OPC_RecordChild0, // #0 = $rs2
/*5724*/      OPC_SwitchType /*2 cases */, 7, MVT::f64,// ->5734
/*5727*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpextend:f64 f32:f32:$rs2) - Complexity = 3
                // Dst: (FSTOD:f64 f32:f32:$rs2)
/*5734*/      /*SwitchType*/ 26, MVT::f128,// ->5762
/*5736*/        OPC_Scope, 11, /*->5749*/ // 2 children in Scope
/*5738*/          OPC_CheckChild0Type, MVT::f32,
/*5740*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5742*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOQ), 0,
                      MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fpextend:f128 f32:f32:$rs2) - Complexity = 3
                  // Dst: (FSTOQ:f128 f32:f32:$rs2)
/*5749*/        /*Scope*/ 11, /*->5761*/
/*5750*/          OPC_CheckChild0Type, MVT::f64,
/*5752*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5754*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOQ), 0,
                      MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fpextend:f128 f64:f64:$rs2) - Complexity = 3
                  // Dst: (FDTOQ:f128 f64:f64:$rs2)
/*5761*/        0, /*End of Scope*/
/*5762*/      0, // EndSwitchType
/*5763*/    /*SwitchOpcode*/ 40, TARGET_VAL(ISD::FP_ROUND),// ->5806
/*5766*/      OPC_RecordChild0, // #0 = $rs2
/*5767*/      OPC_SwitchType /*2 cases */, 24, MVT::f32,// ->5794
/*5770*/        OPC_Scope, 9, /*->5781*/ // 2 children in Scope
/*5772*/          OPC_CheckChild0Type, MVT::f64,
/*5774*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOS), 0,
                      MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fpround:f32 f64:f64:$rs2) - Complexity = 3
                  // Dst: (FDTOS:f32 f64:f64:$rs2)
/*5781*/        /*Scope*/ 11, /*->5793*/
/*5782*/          OPC_CheckChild0Type, MVT::f128,
/*5784*/          OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5786*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOS), 0,
                      MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fpround:f32 f128:f128:$rs2) - Complexity = 3
                  // Dst: (FQTOS:f32 f128:f128:$rs2)
/*5793*/        0, /*End of Scope*/
/*5794*/      /*SwitchType*/ 9, MVT::f64,// ->5805
/*5796*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5798*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpround:f64 f128:f128:$rs2) - Complexity = 3
                // Dst: (FQTOD:f64 f128:f128:$rs2)
/*5805*/      0, // EndSwitchType
/*5806*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FNEG),// ->5843
/*5809*/      OPC_RecordChild0, // #0 = $rs2
/*5810*/      OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5820
/*5813*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$rs2)
/*5820*/      /*SwitchType*/ 9, MVT::f64,// ->5831
/*5822*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5824*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$rs2)
/*5831*/      /*SwitchType*/ 9, MVT::f128,// ->5842
/*5833*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5835*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FNEGQ:f128 f128:f128:$rs2)
/*5842*/      0, // EndSwitchType
/*5843*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FABS),// ->5880
/*5846*/      OPC_RecordChild0, // #0 = $rs2
/*5847*/      OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5857
/*5850*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FABSS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fabs:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FABSS:f32 f32:f32:$rs2)
/*5857*/      /*SwitchType*/ 9, MVT::f64,// ->5868
/*5859*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5861*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FABSD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FABSD:f64 f64:f64:$rs2)
/*5868*/      /*SwitchType*/ 9, MVT::f128,// ->5879
/*5870*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*5872*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FABSQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fabs:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FABSQ:f128 f128:f128:$rs2)
/*5879*/      0, // EndSwitchType
/*5880*/    /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FSQRT),// ->5917
/*5883*/      OPC_RecordChild0, // #0 = $rs2
/*5884*/      OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->5896
/*5887*/        OPC_CheckPatternPredicate, 9, // (!Subtarget->fixAllFDIVSQRT())
/*5889*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 f32:f32:$rs2) - Complexity = 3
                // Dst: (FSQRTS:f32 f32:f32:$rs2)
/*5896*/      /*SwitchType*/ 7, MVT::f64,// ->5905
/*5898*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 f64:f64:$rs2) - Complexity = 3
                // Dst: (FSQRTD:f64 f64:f64:$rs2)
/*5905*/      /*SwitchType*/ 9, MVT::f128,// ->5916
/*5907*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5909*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 f128:f128:$rs2) - Complexity = 3
                // Dst: (FSQRTQ:f128 f128:f128:$rs2)
/*5916*/      0, // EndSwitchType
/*5917*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FADD),// ->5956
/*5920*/      OPC_RecordChild0, // #0 = $rs1
/*5921*/      OPC_RecordChild1, // #1 = $rs2
/*5922*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->5933
/*5925*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FADDS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FADDS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*5933*/      /*SwitchType*/ 8, MVT::f64,// ->5943
/*5935*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FADDD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FADDD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*5943*/      /*SwitchType*/ 10, MVT::f128,// ->5955
/*5945*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5947*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FADDQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FADDQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*5955*/      0, // EndSwitchType
/*5956*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FSUB),// ->5995
/*5959*/      OPC_RecordChild0, // #0 = $rs1
/*5960*/      OPC_RecordChild1, // #1 = $rs2
/*5961*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->5972
/*5964*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FSUBS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*5972*/      /*SwitchType*/ 8, MVT::f64,// ->5982
/*5974*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FSUBD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*5982*/      /*SwitchType*/ 10, MVT::f128,// ->5994
/*5984*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*5986*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FSUBQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*5994*/      0, // EndSwitchType
/*5995*/    /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FDIV),// ->6034
/*5998*/      OPC_RecordChild0, // #0 = $rs1
/*5999*/      OPC_RecordChild1, // #1 = $rs2
/*6000*/      OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->6011
/*6003*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 f32:f32:$rs1, f32:f32:$rs2) - Complexity = 3
                // Dst: (FDIVS:f32 f32:f32:$rs1, f32:f32:$rs2)
/*6011*/      /*SwitchType*/ 8, MVT::f64,// ->6021
/*6013*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 f64:f64:$rs1, f64:f64:$rs2) - Complexity = 3
                // Dst: (FDIVD:f64 f64:f64:$rs1, f64:f64:$rs2)
/*6021*/      /*SwitchType*/ 10, MVT::f128,// ->6033
/*6023*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*6025*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 f128:f128:$rs1, f128:f128:$rs2) - Complexity = 3
                // Dst: (FDIVQ:f128 f128:f128:$rs1, f128:f128:$rs2)
/*6033*/      0, // EndSwitchType
/*6034*/    /*SwitchOpcode*/ 36, TARGET_VAL(SPISD::XTOF),// ->6073
/*6037*/      OPC_RecordChild0, // #0 = $rs2
/*6038*/      OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->6050
/*6041*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6043*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f32 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOS:f32 DFPRegs:f64:$rs2)
/*6050*/      /*SwitchType*/ 9, MVT::f64,// ->6061
/*6052*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6054*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f64 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOD:f64 DFPRegs:f64:$rs2)
/*6061*/      /*SwitchType*/ 9, MVT::f128,// ->6072
/*6063*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6065*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPxtof:f128 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FXTOQ:f128 DFPRegs:f64:$rs2)
/*6072*/      0, // EndSwitchType
/*6073*/    /*SwitchOpcode*/ 39, TARGET_VAL(SPISD::FTOX),// ->6115
/*6076*/      OPC_RecordChild0, // #0 = $rs2
/*6077*/      OPC_Scope, 11, /*->6090*/ // 3 children in Scope
/*6079*/        OPC_CheckChild0Type, MVT::f32,
/*6081*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6083*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 FPRegs:f32:$rs2) - Complexity = 3
                // Dst: (FSTOX:f64 FPRegs:f32:$rs2)
/*6090*/      /*Scope*/ 11, /*->6102*/
/*6091*/        OPC_CheckChild0Type, MVT::f64,
/*6093*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6095*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 DFPRegs:f64:$rs2) - Complexity = 3
                // Dst: (FDTOX:f64 DFPRegs:f64:$rs2)
/*6102*/      /*Scope*/ 11, /*->6114*/
/*6103*/        OPC_CheckChild0Type, MVT::f128,
/*6105*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*6107*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:f64 QFPRegs:f128:$rs2) - Complexity = 3
                // Dst: (FQTOX:f64 QFPRegs:f128:$rs2)
/*6114*/      0, /*End of Scope*/
/*6115*/    /*SwitchOpcode*/ 38, TARGET_VAL(ISD::BUILD_VECTOR),// ->6156
/*6118*/      OPC_RecordChild0, // #0 = $a1
/*6119*/      OPC_CheckChild0Type, MVT::i32,
/*6121*/      OPC_RecordChild1, // #1 = $a2
/*6122*/      OPC_CheckChild1Type, MVT::i32,
/*6124*/      OPC_CheckType, MVT::v2i32,
/*6126*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  MVT::v2i32, 0/*#Ops*/,  // Results = #2
/*6132*/      OPC_EmitInteger, MVT::i32, SP::sub_even,
/*6135*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*6144*/      OPC_EmitInteger, MVT::i32, SP::sub_odd,
/*6147*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
              // Src: (build_vector:v2i32 IntRegs:i32:$a1, IntRegs:i32:$a2) - Complexity = 3
              // Dst: (INSERT_SUBREG:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), IntRegs:i32:$a1, sub_even:i32), IntRegs:i32:$a2, sub_odd:i32)
/*6156*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 6158 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 139
  // #OPC_RecordNode                     = 23
  // #OPC_RecordChild                    = 162
  // #OPC_RecordMemRef                   = 6
  // #OPC_CaptureGlueInput               = 12
  // #OPC_MoveChild                      = 79
  // #OPC_MoveParent                     = 102
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 0
  // #OPC_CheckPatternPredicate          = 159
  // #OPC_CheckPredicate                 = 100
  // #OPC_CheckOpcode                    = 71
  // #OPC_SwitchOpcode                   = 8
  // #OPC_CheckType                      = 91
  // #OPC_SwitchType                     = 36
  // #OPC_CheckChildType                 = 38
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 12
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 114
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 7
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 14
  // #OPC_EmitConvertToTarget            = 67
  // #OPC_EmitMergeInputChains           = 128
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 19
  // #OPC_EmitNodeXForm                  = 18
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 332

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
bool CheckPatternPredicate(unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget->is64Bit());
  case 1: return (Subtarget->hasHardQuad()) && (Subtarget->isV9());
  case 2: return (!Subtarget->is64Bit());
  case 3: return (Subtarget->isV9());
  case 4: return (!Subtarget->isV9());
  case 5: return (Subtarget->hasLeonCasa());
  case 6: return (Subtarget->hasHardQuad());
  case 7: return (!Subtarget->fixFSMULD());
  case 8: return (!Subtarget->replaceFMULS());
  case 9: return (!Subtarget->fixAllFDIVSQRT());
  }
}

bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { 
    // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { 
    // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { 
    // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { 
    // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { 
    // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 6: { 
    // Predicate_simm13
    auto *N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 7: { 
    // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 8: { 
    // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 9: { 
    // Predicate_sextloadi8
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { 
    // Predicate_sextloadi16
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { 
    // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 12: { 
    // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 13: { 
    // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 14: { 
    // Predicate_extloadi1
    // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 15: { 
    // Predicate_zextloadi32
    // Predicate_extloadi32
    // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { 
    // Predicate_atomic_swap_32
    // Predicate_atomic_store_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 17: { 
    // Predicate_atomic_load_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { 
    // Predicate_atomic_load_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 19: { 
    // Predicate_atomic_load_32
    // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { 
    // Predicate_atomic_load_64
    // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 21: { 
    // Predicate_atomic_store_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 22: { 
    // Predicate_atomic_store_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 23: { 
    // Predicate_atomic_store_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 24: { 
    // Predicate_simm11
    auto *N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 25: { 
    // Predicate_SETHIimm
    auto *N = cast<ConstantSDNode>(Node);

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 26: { 
    // Predicate_uimm32
    auto *N = cast<ConstantSDNode>(Node);
 return isUInt<32>(N->getZExtValue()); 
  }
  case 27: { 
    // Predicate_nimm33
    auto *N = cast<ConstantSDNode>(Node);

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

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
  return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 1: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, SDLoc(N),
                                   MVT::i32);

  }
  case 2: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023, SDLoc(N),
                                   MVT::i32);

  }
  case 3: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  case 4: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), SDLoc(N),
                                   MVT::i32);

  }
  case 5: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  case 6: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  }
}

